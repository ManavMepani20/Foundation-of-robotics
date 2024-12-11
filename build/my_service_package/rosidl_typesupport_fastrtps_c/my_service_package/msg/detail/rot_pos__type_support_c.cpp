// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice
#include "my_service_package/msg/detail/rot_pos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_service_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_service_package/msg/detail/rot_pos__struct.h"
#include "my_service_package/msg/detail/rot_pos__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // o, r
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // o, r

// forward declare type support functions


using _RotPos__ros_msg_type = my_service_package__msg__RotPos;

static bool _RotPos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotPos__ros_msg_type * ros_message = static_cast<const _RotPos__ros_msg_type *>(untyped_ros_message);
  // Field name: r
  {
    size_t size = ros_message->r.size;
    auto array_ptr = ros_message->r.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o
  {
    size_t size = ros_message->o.size;
    auto array_ptr = ros_message->o.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RotPos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotPos__ros_msg_type * ros_message = static_cast<_RotPos__ros_msg_type *>(untyped_ros_message);
  // Field name: r
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->r.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->r);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->r, size)) {
      fprintf(stderr, "failed to create array for field 'r'");
      return false;
    }
    auto array_ptr = ros_message->r.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->o.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->o);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->o, size)) {
      fprintf(stderr, "failed to create array for field 'o'");
      return false;
    }
    auto array_ptr = ros_message->o.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_service_package
size_t get_serialized_size_my_service_package__msg__RotPos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotPos__ros_msg_type * ros_message = static_cast<const _RotPos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name r
  {
    size_t array_size = ros_message->r.size;
    auto array_ptr = ros_message->r.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o
  {
    size_t array_size = ros_message->o.size;
    auto array_ptr = ros_message->o.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RotPos__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_service_package__msg__RotPos(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_service_package
size_t max_serialized_size_my_service_package__msg__RotPos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: r
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_service_package__msg__RotPos;
    is_plain =
      (
      offsetof(DataType, o) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RotPos__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_service_package__msg__RotPos(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RotPos = {
  "my_service_package::msg",
  "RotPos",
  _RotPos__cdr_serialize,
  _RotPos__cdr_deserialize,
  _RotPos__get_serialized_size,
  _RotPos__max_serialized_size
};

static rosidl_message_type_support_t _RotPos__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotPos,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_package, msg, RotPos)() {
  return &_RotPos__type_support;
}

#if defined(__cplusplus)
}
#endif
