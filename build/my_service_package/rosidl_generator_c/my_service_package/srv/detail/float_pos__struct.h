// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_package:srv/FloatPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__STRUCT_H_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos4'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FloatPos in the package my_service_package.
typedef struct my_service_package__srv__FloatPos_Request
{
  rosidl_runtime_c__double__Sequence pos4;
} my_service_package__srv__FloatPos_Request;

// Struct for a sequence of my_service_package__srv__FloatPos_Request.
typedef struct my_service_package__srv__FloatPos_Request__Sequence
{
  my_service_package__srv__FloatPos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__FloatPos_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FloatPos in the package my_service_package.
typedef struct my_service_package__srv__FloatPos_Response
{
  bool success;
} my_service_package__srv__FloatPos_Response;

// Struct for a sequence of my_service_package__srv__FloatPos_Response.
typedef struct my_service_package__srv__FloatPos_Response__Sequence
{
  my_service_package__srv__FloatPos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_package__srv__FloatPos_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__STRUCT_H_
