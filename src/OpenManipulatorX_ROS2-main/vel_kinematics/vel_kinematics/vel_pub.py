import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import numpy as np
from my_service_package.srv import JointVelservice, EndeffectorVelservice
from geometry_msgs.msg import Vector3

class Velpub(Node):

    def __init__(self):
        super().__init__('Velpub')
        
        self.subscription = self.create_subscription(Twist, 'ConstEndvel', self.sendconstVel, 10)

        # Create client with explicit service name
        self.client = self.create_client(EndeffectorVelservice, 'calculate_jointvel')
        
        # More verbose service waiting
        self.wait_for_service_with_timeout(timeout_sec=10.0)

    def wait_for_service_with_timeout(self, timeout_sec=10.0):
        # More informative service waiting method
        start_time = self.get_clock().now()
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('Waiting for EndeffectorVelservice service...')
            
            # Check if we've exceeded total timeout
            if (self.get_clock().now() - start_time).nanoseconds / 1e9 > timeout_sec:
                self.get_logger().error(f'Failed to find service after {timeout_sec} seconds')
                return False
        
        self.get_logger().info('EndeffectorVelservice service is ready')
        return True

    def sendconstVel(self, msg):
        # Detailed logging of incoming message
        self.get_logger().info(f'Received Twist message: {msg}')

        # Prepare service request
        linear_velocity = Vector3()
        linear_velocity.x = msg.linear.x
        linear_velocity.y = msg.linear.y
        linear_velocity.z = msg.linear.z

        angular_velocity = Vector3()
        angular_velocity.x = msg.angular.x
        angular_velocity.y = msg.angular.y
        angular_velocity.z = msg.angular.z

        request = EndeffectorVelservice.Request()
        request.endeffector_velocity.linear = linear_velocity
        request.endeffector_velocity.angular = angular_velocity

        # Extensive pre-service call checks
        if not self.client.service_is_ready():
            self.get_logger().error('Service client is not ready')
            return

        # Call the service asynchronously with comprehensive error handling
        future = self.client.call_async(request)

        # More detailed future handling
        def callback(future):
            try:
                response = future.result()
                if response is not None:
                    self.get_logger().info(f"Joint Velocities: {response.jointvel}")
                else:
                    self.get_logger().error("Service call returned None")
            except Exception as e:
                self.get_logger().error(f"Service call exception: {e}")

        future.add_done_callback(callback)


def main():
    rclpy.init()
    node = Velpub()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
