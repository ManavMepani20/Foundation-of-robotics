// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_package:srv/EndeffectorVelservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__STRUCT_H_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'endeffector_velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/EndeffectorVelservice in the package my_service_package.
typedef struct my_service_package__srv__EndeffectorVelservice_Request
{
  geometry_msgs__msg__Twist endeffector_velocity;
} my_service_package__srv__EndeffectorVelservice_Request;

// Struct for a sequence of my_service_package__srv__EndeffectorVelservice_Request.
typedef struct my_service_package__srv__EndeffectorVelservice_Request__Sequence
{
  my_service_package__srv__EndeffectorVelservice_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__EndeffectorVelservice_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'jointvel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/EndeffectorVelservice in the package my_service_package.
typedef struct my_service_package__srv__EndeffectorVelservice_Response
{
  rosidl_runtime_c__double__Sequence jointvel;
} my_service_package__srv__EndeffectorVelservice_Response;

// Struct for a sequence of my_service_package__srv__EndeffectorVelservice_Response.
typedef struct my_service_package__srv__EndeffectorVelservice_Response__Sequence
{
  my_service_package__srv__EndeffectorVelservice_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__EndeffectorVelservice_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__STRUCT_H_
