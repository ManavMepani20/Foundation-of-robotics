// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_package:msg/VelPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__STRUCT_H_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'pos'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VelPos in the package my_service_package.
typedef struct my_service_package__msg__VelPos
{
  geometry_msgs__msg__Twist twist;
  rosidl_runtime_c__double__Sequence pos;
} my_service_package__msg__VelPos;

// Struct for a sequence of my_service_package__msg__VelPos.
typedef struct my_service_package__msg__VelPos__Sequence
{
  my_service_package__msg__VelPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__msg__VelPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__STRUCT_H_
