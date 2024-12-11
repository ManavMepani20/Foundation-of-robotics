import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from my_service_package.msg import RotPos
import numpy as np
from my_service_package.srv import JointVelservice, EndeffectorVelservice
from geometry_msgs.msg import Vector3
from std_msgs.msg import Float32MultiArray
from scipy.linalg import pinv2

class EndeffecVel(Node):

    def __init__(self):
        super().__init__('EndeffecVel')
        self.J = None
        self.JV = None

        self.subscription = self.create_subscription(RotPos, 'Fwd_op', self.calJacobian, 10)
        self.Twist_srv = self.create_service(JointVelservice, 'calculate_twist', self.calculate_twist)
        self.get_logger().info('Twist Service Server is ready.')

        self.Jointvel_srv = self.create_service(EndeffectorVelservice, 'calculate_jointvel', self.calculate_jointvel)
        self.get_logger().info('Joint velocities Service Server is ready.')

        self.publisher_ = self.create_publisher(Float32MultiArray, 'JV_info', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.send_jointvel)

    def calJacobian(self, msg):
        try:
            Rot = np.array(msg.r)
            Pos = np.array(msg.o)

            R = np.zeros((4, 3, 3))
            O = np.zeros((5, 3, 1))
            idx = 0

            for i in range(4):
                for j in range(3):
                    for k in range(3):
                        R[i][j][k] = Rot[idx]
                        idx += 1

            idx_2 = 0
            for i in range(5):
                for j in range(3):
                    O[i][j][0] = Pos[idx_2]
                    idx_2 += 1

            k = np.array([[0], [0], [1]])
            v = [np.cross((np.dot(R[i], k)).T, ((O[4] - O[i])).T).T for i in range(4)]
            w = [np.dot(R[i], k) for i in range(4)]

            V = np.hstack(v)
            W = np.hstack(w)
            self.J = np.vstack((V, W))

            self.get_logger().info(f'Calculated Jacobian: \n{self.J}')
        except Exception as e:
            self.get_logger().error(f"Error calculating Jacobian: {e}")

    def calculate_twist(self, request, response):
        if self.J is None or self.J.size == 0:
            self.get_logger().error("Jacobian is not yet calculated.")
            return response

        try:
            Jointvel = np.array(request.joint_velocity).reshape(-1, 1)
            twist = np.dot(self.J, Jointvel)
            response.twist = twist.flatten().tolist()
            self.get_logger().info(f'Calculated twist: {response.twist}')
        except Exception as e:
            self.get_logger().error(f"Error calculating twist: {e}")
        return response

    def calculate_jointvel(self, request, response):
        if self.J is None or self.J.size == 0:
            self.get_logger().error("Jacobian is not initialized or invalid.")
            return response

        try:
            Tw = request.endeffector_velocity
            twist = np.array([Tw.linear.x, Tw.linear.y, Tw.linear.z, Tw.angular.x, Tw.angular.y, Tw.angular.z]).reshape(-1, 1)
            self.get_logger().info(f'Twist input: {twist}')
            
            #J_inv = np.linalg.pinv(self.J)
            J_inv = pinv2(self.J)
            
            #J_inv = J_inv.T
            self.get_logger().info(f'Jinv = {J_inv}')
            jointvel = np.dot(J_inv, twist)
            self.JV = jointvel.flatten().tolist()
            response.jointvel = self.JV
            self.get_logger().info(f'Calculated joint velocities: {self.JV}')
        except Exception as e:
            self.get_logger().error(f"Error calculating joint velocities: {e}")
        return response

    def send_jointvel(self):
        if self.JV is not None:
            msg = Float32MultiArray(data=self.JV)
            self.publisher_.publish(msg)
            self.get_logger().info(f'Published joint velocities: {self.JV}')
        else:
            self.get_logger().warn("JV is not set. Waiting for data...")

def main():
    rclpy.init()
    rclpy.spin(EndeffecVel())
    rclpy.shutdown()

if __name__ == '__main__':
    main()