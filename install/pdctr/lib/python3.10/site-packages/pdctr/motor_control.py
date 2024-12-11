import rclpy
from rclpy.node import Node
from dynamixel_sdk import * # Library for controlling DYNAMIXEL motors
from DynamixelSDK.dynamixel_sdk_custom_interfaces.msg import SetCurrent
from DynamixelSDK.dynamixel_sdk_custom_interfaces.srv import GetCurrent

# Constants for DYNAMIXEL motors
ADDR_OPERATING_MODE = 11
ADDR_TORQUE_ENABLE = 64
ADDR_GOAL_CURRENT = 102
ADDR_PRESENT_CURRENT = 126
PROTOCOL_VERSION = 2.0
BAUDRATE = 1000000
DEVICE_NAME = "/dev/ttyUSB0"

# Initialize the port and packet handlers
port_handler = PortHandler(DEVICE_NAME)
packet_handler = PacketHandler(PROTOCOL_VERSION)

class ReadWriteNode(Node):
    def __init__(self):
        super().__init__('read_write_node')
        self.get_logger().info("Run read_write_node")

        # Create a subscriber for setting motor current
        self.create_subscription(
            SetCurrent,
            'set_current',
            self.set_current_callback,
            10
        )

        # Create a service for getting motor current
        self.create_service(
            GetCurrent,
            'get_current',
            self.get_current_callback
        )

    def set_current_callback(self, msg):
        dxl_error = 0
        goal_current = msg.current

        # Write the goal current to the motor
        dxl_comm_result, dxl_error = packet_handler.write2ByteTxRx(
            port_handler,
            msg.id,
            ADDR_GOAL_CURRENT,
            goal_current
        )

        if dxl_comm_result != COMM_SUCCESS:
            self.get_logger().error(packet_handler.getTxRxResult(dxl_comm_result))
        elif dxl_error != 0:
            self.get_logger().error(packet_handler.getRxPacketError(dxl_error))
        else:
            self.get_logger().info(f"Set [ID: {msg.id}] [Goal Current: {msg.current}]")

    def get_current_callback(self, request, response):
        dxl_error = 0
        present_current = 0

        # Read the present current from the motor
        dxl_comm_result, present_current, dxl_error = packet_handler.read2ByteTxRx(
            port_handler,
            request.id,
            ADDR_PRESENT_CURRENT
        )

        if dxl_comm_result != COMM_SUCCESS:
            self.get_logger().error(packet_handler.getTxRxResult(dxl_comm_result))
        elif dxl_error != 0:
            self.get_logger().error(packet_handler.getRxPacketError(dxl_error))
        else:
            self.get_logger().info(f"Get [ID: {request.id}] [Present Current: {present_current}]")

        response.current = present_current
        return response

def setup_dynamixel(dxl_id):
    dxl_error = 0

    # Set current control mode
    packet_handler.write1ByteTxRx(port_handler, dxl_id, ADDR_OPERATING_MODE, 0)

    # Enable torque
    packet_handler.write1ByteTxRx(port_handler, dxl_id, ADDR_TORQUE_ENABLE, 1)

def main(args=None):
    rclpy.init(args=args)
    if not port_handler.openPort():
        print("Failed to open the port!")
        return
    if not port_handler.setBaudRate(BAUDRATE):
        print("Failed to set the baudrate!")
        return

    setup_dynamixel(254)  # Broadcast ID to initialize all motors

    node = ReadWriteNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

    # Disable torque before exiting
    packet_handler.write1ByteTxRx(port_handler, 254, ADDR_TORQUE_ENABLE, 0)
    port_handler.closePort()

if __name__ == '__main__':
    main()

