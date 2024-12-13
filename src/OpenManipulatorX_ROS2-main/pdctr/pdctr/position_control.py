import rclpy
from rclpy.node import Node
from dynamixel_sdk import *
from dynamixel_sdk_custom_interfaces.msg import SetPosition, SetCurrent
from dynamixel_sdk_custom_interfaces.srv import GetPosition, GetCurrent
from std_msgs.msg import Int32


# Control table address for X series (except XL-320)
ADDR_OPERATING_MODE = 11
ADDR_TORQUE_ENABLE = 64
ADDR_GOAL_POSITION = 116
ADDR_PRESENT_POSITION = 132
ADDR_GOAL_CURRENT = 102
ADDR_PRESENT_CURRENT = 126

# Protocol version
PROTOCOL_VERSION = 2.0  # Default Protocol version of DYNAMIXEL X series.
BAUDRATE = 1000000  # Default Baudrate of DYNAMIXEL X series
DEVICE_NAME = "/dev/ttyUSB0"  # [Linux]: "/dev/ttyUSB*", [Windows]: "COM*"

class ReadWriteNode(Node):
    def __init__(self):
        super().__init__('read_write_node')
        self.get_logger().info("Run read write node")
        self.ID = 14

        # Subscriber for the 'set_position' topic
        self.set_position_subscriber_ = self.create_subscription(
            SetPosition,
            'set_position',
            self.set_position_callback,
            10
        )

        # Subscriber for the 'set_current' topic
        self.set_current_subscriber_ = self.create_subscription(
            SetCurrent,
            'set_current',
            self.set_current_callback,
            10
        )

        # Service for getting the 'get_position' service
        self.get_position_server_ = self.create_service(
            GetPosition,
            'get_position',
            self.get_position_callback
        )

        # Service for getting the 'get_current' service
        self.get_current_server_ = self.create_service(
            GetCurrent,
            'get_current',
            self.get_current_callback
        )

        self.port_handler = PortHandler(DEVICE_NAME)
        self.packet_handler = PacketHandler(PROTOCOL_VERSION)

        self.position_publish = self.create_publisher(Int32, 'set_newpos', 10)
        timer_period = 0.001  # seconds
        self.timer = self.create_timer(timer_period, self.send_currentpos)
        self.send_position = None

        # Open Serial Port
        if not self.port_handler.openPort():
            self.get_logger().error("Failed to open the port!")
            return
        else:
            self.get_logger().info("Succeeded to open the port.")

        # Set the baudrate of the serial port
        if not self.port_handler.setBaudRate(BAUDRATE):
            self.get_logger().error("Failed to set the baudrate!")
            return
        else:
            self.get_logger().info("Succeeded to set the baudrate.")

        self.setup_dynamixel()

    def setup_dynamixel(self):
        # Set the operating mode for Current Control Mode
        dxl_comm_result, dxl_error = self.packet_handler.write1ByteTxRx(
            self.port_handler,
            self.ID,  # Dynamixel ID
            ADDR_OPERATING_MODE,
            0  # Set to current control mode
        )

        if dxl_comm_result != 0:
            self.get_logger().error("Failed to set Current Control Mode.")
        else:
            self.get_logger().info("Succeeded to set Current Control Mode.")

        # Enable Torque of DYNAMIXEL
        dxl_comm_result, dxl_error = self.packet_handler.write1ByteTxRx(
            self.port_handler,
            self.ID,  # Dynamixel ID
            ADDR_TORQUE_ENABLE,
            1  # Enable torque
        )

        if dxl_comm_result != 0:
            self.get_logger().error("Failed to enable torque.")
        else:
            self.get_logger().info("Succeeded to enable torque.")

    def set_position_callback(self, msg: SetPosition):
        goal_position = msg.position
        # Write Goal Position (length: 4 bytes)
        dxl_comm_result, dxl_error = self.packet_handler.write4ByteTxRx(
            self.port_handler,
            msg.id,
            ADDR_GOAL_POSITION,
            goal_position
        )

        if dxl_comm_result != 0:
            self.get_logger().error("Failed to write goal position.")
        else:
            self.get_logger().info(f"Set [ID: {msg.id}] [Goal Position: {goal_position}]")

    def set_current_callback(self, msg: SetCurrent):
        goal_current = msg.current
        # Write Goal Current (length: 2 bytes)
        dxl_comm_result, dxl_error = self.packet_handler.write2ByteTxRx(
            self.port_handler,
            msg.id,
            ADDR_GOAL_CURRENT,
            goal_current
        )

        if dxl_comm_result != 0:
            self.get_logger().error("Failed to write goal current.")
        else:
            self.get_logger().info(f"Set [ID: {msg.id}] [Goal Current: {goal_current}]")

    def get_position_callback(self, request, response):
        # Read Present Position (length: 4 bytes)
        present_position, dxl_comm_result, dxl_error = self.packet_handler.read4ByteTxRx(
            self.port_handler,
            request.id,
            ADDR_PRESENT_POSITION,
        )

        if dxl_comm_result != 0:
            self.get_logger().error(f"Failed to read position for ID: {request.id}")
        else:
            self.get_logger().info(f"Get [ID: {request.id}] [Present Position: {present_position}]")
            response.position = present_position  # Ensure 'position' is set correctly
            self.send_position = present_position

        return response
    
    def send_currentpos(self):
            
        if self.send_position is not None:
            pos_msg = Int32()
            pos_msg.data = self.send_position
            self.get_logger().info(f"pos_msg : {pos_msg}")
            self.position_publish.publish(pos_msg)
        else:
            self.get_logger().warn("Send position is not set. Waiting for data...")


            

          # Explicitly return the response object

    def get_current_callback(self, request, response):
        # Read Present Current (length: 2 bytes)
        present_current, dxl_comm_result, dxl_error = self.packet_handler.read2ByteTxRx(
            self.port_handler,
            request.id,
            ADDR_PRESENT_CURRENT,
        )

        if dxl_comm_result != 0:
            self.get_logger().error(f"Failed to read current for ID: {request.id}")
        else:
            self.get_logger().info(f"Get [ID: {request.id}] [Present Current: {present_current}]")
            response.current = present_current  # Ensure 'current' is set correctly
        return response  # Explicitly return the response object

def main(args=None):
    rclpy.init(args=args)
    read_write_node = ReadWriteNode()
    rclpy.spin(read_write_node)
    read_write_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
