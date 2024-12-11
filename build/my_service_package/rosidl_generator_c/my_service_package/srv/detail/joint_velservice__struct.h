// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_package:srv/JointVelservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__STRUCT_H_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_velocity'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/JointVelservice in the package my_service_package.
typedef struct my_service_package__srv__JointVelservice_Request
{
  rosidl_runtime_c__double__Sequence joint_velocity;
} my_service_package__srv__JointVelservice_Request;

// Struct for a sequence of my_service_package__srv__JointVelservice_Request.
typedef struct my_service_package__srv__JointVelservice_Request__Sequence
{
  my_service_package__srv__JointVelservice_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__JointVelservice_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'twist'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/JointVelservice in the package my_service_package.
typedef struct my_service_package__srv__JointVelservice_Response
{
  rosidl_runtime_c__double__Sequence twist;
} my_service_package__srv__JointVelservice_Response;

// Struct for a sequence of my_service_package__srv__JointVelservice_Response.
typedef struct my_service_package__srv__JointVelservice_Response__Sequence
{
  my_service_package__srv__JointVelservice_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__JointVelservice_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__STRUCT_H_
