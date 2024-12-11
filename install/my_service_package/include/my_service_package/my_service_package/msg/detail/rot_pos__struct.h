// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__STRUCT_H_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'r'
// Member 'o'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RotPos in the package my_service_package.
typedef struct my_service_package__msg__RotPos
{
  rosidl_runtime_c__double__Sequence r;
  rosidl_runtime_c__double__Sequence o;
} my_service_package__msg__RotPos;

// Struct for a sequence of my_service_package__msg__RotPos.
typedef struct my_service_package__msg__RotPos__Sequence
{
  my_service_package__msg__RotPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__msg__RotPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__STRUCT_H_
