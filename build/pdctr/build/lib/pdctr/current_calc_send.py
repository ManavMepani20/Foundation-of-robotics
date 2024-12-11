import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from open_manipulator_msgs.srv import SetJointPosition
import math
import numpy as np
from my_service_package.srv import FloatPos
from std_msgs.msg import Float64
from dynamixel_sdk import *
from DynamixelSDK.dynamixel_sdk_custom_interfaces.msg import SetCurrent
from DynamixelSDK.dynamixel_sdk_custom_interfaces.srv import GetCurrent


class Current_ctr(Node):
    def __init__(self):
        super().__init__('Inverse_srv')

        self.create_service(FloatPos, 'currentcalc', self.calculate_current)
        self.create_subscription(JointState, '/joint_states', self.joint_state_callback, 10)

        self.effort_publisher = self.create_publisher(SetCurrent, 'set_current', 10)

    def joint_state_callback(self, msg):
        self.current_joint_states = msg.position
        self.joint_state_received = True
        #self.get_logger().info(f"Joint state received: {self.current_joint_states}")  
    
    def calculate_current(self, request, response):
        if not self.joint_state_received:
            response.success = False
            self.get_logger().error("Joint states not received yet.")
            return response
        
        msg = request.pos4
        num_pos = len(msg)

        for i in range (num_pos):
            target_pos = msg[i]

            diff = abs(target_pos - self.current_joint_states[3])
            previous_position = self.current_joint_states[3]
            previous_time = self.get_clock().now().to_msg()

            timeout = self.get_clock().now() + rclpy.duration.Duration(seconds = 20)  
            while diff > 0.05 and self.get_clock().now() < timeout:
                current_time = self.get_clock().now()
                current_position = self.current_joint_states[3]
                dt = (current_time.sec - previous_time.sec) + (current_time.nanosec - previous_time.nanosec) * 1e-9
                
                self.get_logger().info(f"dt: {dt}")


                # Position error and derivative of error
                error = target_pos - self.current_joint_states[3]
                error_derivative = (current_position - previous_position) / dt if dt > 0 else 0.0

                # PD control law
                effort = self.kp * error - self.kd * error_derivative

                # Publish effort
                current_msg = SetCurrent()
                current_msg.id = 1
                current_msg.current = effort
                self.effort_publisher.publish(current_msg)

                # Log and update states
                self.get_logger().info(f"Effort: {effort}, Position: {self.current_position}, Error: {error}")
                previous_position = current_position
                previous_time = current_time
                diff = abs(target_pos - self.current_joint_states[3])
        
        response.success = True

def main():
    rclpy.init()
    node = Current_ctr()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
