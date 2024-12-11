// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_package:srv/IKservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__STRUCT_H_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'claw'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/IKservice in the package my_service_package.
typedef struct my_service_package__srv__IKservice_Request
{
  /// Desired end effector position (x, y, z)
  geometry_msgs__msg__Point__Sequence position;
  /// Desired end effector orientation (qx, qy, qz, qw)
  geometry_msgs__msg__Quaternion__Sequence orientation;
  rosidl_runtime_c__double__Sequence claw;
} my_service_package__srv__IKservice_Request;

// Struct for a sequence of my_service_package__srv__IKservice_Request.
typedef struct my_service_package__srv__IKservice_Request__Sequence
{
  my_service_package__srv__IKservice_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__IKservice_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_positions'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/IKservice in the package my_service_package.
typedef struct my_service_package__srv__IKservice_Response
{
  /// Joint positions required to reach the desired pose
  rosidl_runtime_c__double__Sequence joint_positions;
  /// True if IK calculation was successful
  bool success;
} my_service_package__srv__IKservice_Response;

// Struct for a sequence of my_service_package__srv__IKservice_Response.
typedef struct my_service_package__srv__IKservice_Response__Sequence
{
  my_service_package__srv__IKservice_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__IKservice_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__STRUCT_H_
