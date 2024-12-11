// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_service_package:msg/VelPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__FUNCTIONS_H_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_service_package/msg/rosidl_generator_c__visibility_control.h"

#include "my_service_package/msg/detail/vel_pos__struct.h"

/// Initialize msg/VelPos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_service_package__msg__VelPos
 * )) before or use
 * my_service_package__msg__VelPos__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
bool
my_service_package__msg__VelPos__init(my_service_package__msg__VelPos * msg);

/// Finalize msg/VelPos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
void
my_service_package__msg__VelPos__fini(my_service_package__msg__VelPos * msg);

/// Create msg/VelPos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_service_package__msg__VelPos__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
my_service_package__msg__VelPos *
my_service_package__msg__VelPos__create();

/// Destroy msg/VelPos message.
/**
 * It calls
 * my_service_package__msg__VelPos__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
void
my_service_package__msg__VelPos__destroy(my_service_package__msg__VelPos * msg);

/// Check for msg/VelPos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
bool
my_service_package__msg__VelPos__are_equal(const my_service_package__msg__VelPos * lhs, const my_service_package__msg__VelPos * rhs);

/// Copy a msg/VelPos message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
bool
my_service_package__msg__VelPos__copy(
  const my_service_package__msg__VelPos * input,
  my_service_package__msg__VelPos * output);

/// Initialize array of msg/VelPos messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_service_package__msg__VelPos__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
bool
my_service_package__msg__VelPos__Sequence__init(my_service_package__msg__VelPos__Sequence * array, size_t size);

/// Finalize array of msg/VelPos messages.
/**
 * It calls
 * my_service_package__msg__VelPos__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
void
my_service_package__msg__VelPos__Sequence__fini(my_service_package__msg__VelPos__Sequence * array);

/// Create array of msg/VelPos messages.
/**
 * It allocates the memory for the array and calls
 * my_service_package__msg__VelPos__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
my_service_package__msg__VelPos__Sequence *
my_service_package__msg__VelPos__Sequence__create(size_t size);

/// Destroy array of msg/VelPos messages.
/**
 * It calls
 * my_service_package__msg__VelPos__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
void
my_service_package__msg__VelPos__Sequence__destroy(my_service_package__msg__VelPos__Sequence * array);

/// Check for msg/VelPos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
bool
my_service_package__msg__VelPos__Sequence__are_equal(const my_service_package__msg__VelPos__Sequence * lhs, const my_service_package__msg__VelPos__Sequence * rhs);

/// Copy an array of msg/VelPos messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_service_package
bool
my_service_package__msg__VelPos__Sequence__copy(
  const my_service_package__msg__VelPos__Sequence * input,
  my_service_package__msg__VelPos__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__FUNCTIONS_H_
