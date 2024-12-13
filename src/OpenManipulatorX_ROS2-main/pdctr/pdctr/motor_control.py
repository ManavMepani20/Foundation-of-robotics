import rclpy
from rclpy.node import Node
from dynamixel_sdk import *  # Library for controlling DYNAMIXEL motors
from dynamixel_sdk_custom_interfaces.msg import SetCurrent
from dynamixel_sdk_custom_interfaces.srv import GetCurrent
import time

# Constants for DYNAMIXEL motors
ADDR_OPERATING_MODE = 11
ADDR_TORQUE_ENABLE = 64
ADDR_GOAL_CURRENT = 102
ADDR_PRESENT_CURRENT = 126
PROTOCOL_VERSION = 2.0
BAUDRATE = 1000000
DEVICE_NAME = "/dev/ttyUSB0"
MAX_RETRIES = 5  # Maximum retry count for communication failures
RETRY_DELAY = 2  # Delay in seconds between retries

# Initialize the port handler
port_handler = PortHandler(DEVICE_NAME)

def reset_port():
    """ Function to reset the serial port and reinitialize the communication """
    port_handler.closePort()
    time.sleep(1)  # Short delay to ensure the port is released
    if not port_handler.openPort():
        print("Failed to open the port!")
        return False
    if not port_handler.setBaudRate(BAUDRATE):
        print("Failed to set the baudrate!")
        return False
    return True

class CurrentReadWriteNode(Node):
    def __init__(self):
        super().__init__('current_read_write_node')
        self.get_logger().info("Run read_write_node")

        # Initialize packet_handler as an instance variable
        self.packet_handler = PacketHandler(PROTOCOL_VERSION)

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

        self.setup_dynamixel(14)  

    def set_current_callback(self, msg):
        dxl_error = 0
        goal_current = msg.current
        ID = msg.id

        # Retry logic for setting current
        retries = 0
        
        while retries < MAX_RETRIES:
            dxl_comm_result, dxl_error = self.packet_handler.write2ByteTxRx(
                port_handler,
                ID,
                ADDR_GOAL_CURRENT,
                goal_current
            )

            if dxl_comm_result == COMM_SUCCESS and dxl_error == 0:
                self.get_logger().info(f"Set [ID: {msg.id}] [Goal Current: {msg.current}]")
                
            else:
                self.get_logger().error(f"Attempt {retries + 1}/{MAX_RETRIES} failed: {self.packet_handler.getTxRxResult(dxl_comm_result)} - {self.packet_handler.getRxPacketError(dxl_error)}")
                retries += 1
                time.sleep(RETRY_DELAY)

                # If the communication fails due to a disconnection, reset the port
                if "no status packet" in str(self.packet_handler.getTxRxResult(dxl_comm_result)):
                    if reset_port():
                        self.get_logger().info("Port reset successful. Retrying...")
                    else:
                        self.get_logger().error("Failed to reset the port.")
                        break

        self.get_logger().error("Failed to set current after multiple attempts.")

    def get_current_callback(self, request, response):
        dxl_error = 0
        present_current = 0

        # Retry logic for getting current
        retries = 0
        while retries < MAX_RETRIES:
            dxl_comm_result, present_current, dxl_error = self.packet_handler.read2ByteTxRx(
                port_handler,
                request.id,
                ADDR_PRESENT_CURRENT
            )

            if dxl_comm_result == COMM_SUCCESS and dxl_error == 0:
                self.get_logger().info(f"Get [ID: {request.id}] [Present Current: {present_current}]")
                response.current = present_current
                return response
            else:
                self.get_logger().error(f"Attempt {retries + 1}/{MAX_RETRIES} failed: {self.packet_handler.getTxRxResult(dxl_comm_result)} - {self.packet_handler.getRxPacketError(dxl_error)}")
                retries += 1
                time.sleep(RETRY_DELAY)

                # If the communication fails due to a disconnection, reset the port
                if "no status packet" in str(self.packet_handler.getTxRxResult(dxl_comm_result)):
                    if reset_port():
                        self.get_logger().info("Port reset successful. Retrying...")
                    else:
                        self.get_logger().error("Failed to reset the port.")
                        break

        self.get_logger().error("Failed to get current after multiple attempts.")
        response.current = -1  # Return -1 if unable to get current
        return response
    
    def setup_dynamixel(self, dxl_id):
        # Set to current control mode
        dxl_comm_result, dxl_error = self.packet_handler.write1ByteTxRx(
            port_handler, dxl_id, ADDR_OPERATING_MODE, 0
        )
        if dxl_comm_result != COMM_SUCCESS:
            self.get_logger().error(f"Failed to set Current Control Mode: {self.packet_handler.getTxRxResult(dxl_comm_result)}")
        elif dxl_error != 0:
            self.get_logger().error(f"DYNAMIXEL error: {self.packet_handler.getRxPacketError(dxl_error)}")
        else:
            self.get_logger().info("Succeeded to set Current Control Mode.")

        # Enable torque
        dxl_comm_result, dxl_error = self.packet_handler.write1ByteTxRx(
            port_handler, dxl_id, ADDR_TORQUE_ENABLE, 1
        )
        if dxl_comm_result != COMM_SUCCESS:
            self.get_logger().error(f"Failed to enable torque: {self.packet_handler.getTxRxResult(dxl_comm_result)}")
        elif dxl_error != 0:
            self.get_logger().error(f"DYNAMIXEL error: {self.packet_handler.getRxPacketError(dxl_error)}")
        else:
            self.get_logger().info("Succeeded to enable torque.")


def main(args=None):
    rclpy.init(args=args)
    if not port_handler.openPort():
        print("Failed to open the port!")
        return
    if not port_handler.setBaudRate(BAUDRATE):
        print("Failed to set the baudrate!")
        return

    node = CurrentReadWriteNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

    # Disable torque before exiting
    node.packet_handler.write1ByteTxRx(port_handler, 254, ADDR_TORQUE_ENABLE, 0)
    port_handler.closePort()

if __name__ == '__main__':
    main()
