# Robotic Arm Control Projects using ROS 2

This repository contains the implementation of various control methods for the OpenManipulator-X robotic arm using ROS 2. The projects include forward and inverse kinematics, velocity-level kinematics, linear path motion, and a Proportional-Derivative (PD) controller for precise actuator control.

## Table of Contents
1. [Forward and Inverse Kinematics](#forward-and-inverse-kinematics)
2. [Velocity-Level Kinematics and Linear Path Motion](#velocity-level-kinematics-and-linear-path-motion)
3. [PD Controller for Actuator 4](#pd-controller-for-actuator-4)
4. [Setup and Prerequisites](#setup-and-prerequisites)
5. [Contributors](#contributors)
6. [License](#license)

---

## Forward and Inverse Kinematics

### Features
1. **Forward Kinematics (FK):**
   - Subscribes to `/joint_states` for real-time joint angles.
   - Computes the end-effector's position and orientation using Denavit-Hartenberg (DH) parameters.
   - Publishes the computed pose to `/end_effector_pose`.

   **Commands:**
   - Move the robot using:
     ```bash
     ros2 service call /goal_joint_space_path open_manipulator_msgs/srv/SetJointPosition "{joint_position: {joint_name: ['joint1', 'joint2', 'joint3', 'joint4'], position: [<position_values>], max_accelerations_scaling_factor: 0.5, max_velocity_scaling_factor: 0.5}, path_time: 5.0}"
     ```
   - View the computed pose:
     ```bash
     ros2 run forward fwd_call
     ```

2. **Inverse Kinematics (IK):**
   - Provides the `/calculate_ik` service to compute joint angles for a given end-effector pose.
   - Allows testing by moving the robot to specific poses.

   **Commands:**
   - Starting IK service:
     ```bash
     ros2 run inverse inv_call
     ```
   - Call the IK service:
     ```bash
     ros2 service call /calculate_ik my_service_package/srv/IKservice "{position: [{position_1},{position_2}], orientation: [{<orientation_1>},{<orientation_2>}]}"
     ```

---

## Velocity-Level Kinematics and Linear Path Motion

### Features
1. **Velocity-Level Kinematics:**
   - Converts joint velocities to Cartesian velocities and vice versa using the Jacobian matrix.
   - Provides ROS 2 services:
     - `/calculate_twist`: Converts joint velocities to end-effector velocities.
     - `/calculate_jointvel`: Converts Cartesian velocities to joint velocities.

   **Commands:**
   - Starting Velocity Kinematics service:
     ```bash
     ros2 run vel_kinematics vel_kinematics
     ```
   - Calculate end-effector velocity:
     ```bash
     ros2 service call /calculate_twist my_service_package/srv/JointVelservice "{joint_velocity: [1.0, 1.0, 1.0, 1.0]}"
     ```
   - Calculate joint velocities:
     ```bash
     ros2 service call /calculate_jointvel my_service_package/srv/EndeffectorVelservice "{endeffector_velocity: {linear: {x: 1.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.0}}}"
     ```

3. **Linear Path Motion:**
   - Moves the robot along a straight line in Cartesian space using constant twist inputs.
   - Integrates joint velocities with incremental position calculations for smooth motion.

   **Commands:**
   - Commands to start required services:
     ```bash
     ros2 run vel_kinematics vel_kinematics
     ros2 run vel_kinematics vel_calc
     ros2 run vel_kinematics vel_pub
     ```
   - Publish twist for linear motion:
     ```bash
     ros2 topic pub /ConstEndvel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: 10.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"
     ```

---

## PD Controller for Actuator 4

### Features
1. **PD Controller Design:**
   - Implements a PD controller using the control law:
     ```
     Effort = Kp * Error - Kd * Derivative
     ```
   - Tunable `Kp` and `Kd` for minimal overshoot and fast convergence.

2. **ROS 2 Node Implementation:**
   - Accepts position references via a service.
   - Reads actuator positions and publishes effort values at 100 Hz.

3. **Data Logging and Visualization:**
   - Logs reference and actual positions in a text file.
   - Visualizes performance using Python (Matplotlib).

### Results
- Observed gains: `Kp = 0.19`, `Kd = 0.03`.
- Minimal overshoot and accurate convergence.

**Commands:**
- Start the PD Control Node:
  ```bash
  ros2 run pdctr current_call
  ros2 run pdctr pos_call
  ```
- For giving the target position:
  ```bash
  ros2 service call /currentcalc my_service_package/srv/FloatPos "{pos4: [1800.0]}"
  ```

**Setup and Prerequisites**
1. Install ROS 2.
2. Set up the OpenManipulator-X package.
3. Ensure DYNAMIXEL motors are properly connected and configured.
