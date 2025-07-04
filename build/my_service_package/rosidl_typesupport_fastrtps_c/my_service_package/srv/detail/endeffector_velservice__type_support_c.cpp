// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_service_package:srv/EndeffectorVelservice.idl
// generated code does not contain a copyright notice
#include "my_service_package/srv/detail/endeffector_velservice__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_service_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_service_package/srv/detail/endeffector_velservice__struct.h"
#include "my_service_package/srv/detail/endeffector_velservice__functions.h"
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

#include "geometry_msgs/msg/detail/twist__functions.h"  // endeffector_velocity

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_service_package
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_service_package
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_service_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();


using _EndeffectorVelservice_Request__ros_msg_type = my_service_package__srv__EndeffectorVelservice_Request;

static bool _EndeffectorVelservice_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EndeffectorVelservice_Request__ros_msg_type * ros_message = static_cast<const _EndeffectorVelservice_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: endeffector_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->endeffector_velocity, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _EndeffectorVelservice_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EndeffectorVelservice_Request__ros_msg_type * ros_message = static_cast<_EndeffectorVelservice_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: endeffector_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->endeffector_velocity))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_service_package
size_t get_serialized_size_my_service_package__srv__EndeffectorVelservice_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EndeffectorVelservice_Request__ros_msg_type * ros_message = static_cast<const _EndeffectorVelservice_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name endeffector_velocity

  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->endeffector_velocity), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _EndeffectorVelservice_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_service_package__srv__EndeffectorVelservice_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_service_package
size_t max_serialized_size_my_service_package__srv__EndeffectorVelservice_Request(
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

  // member: endeffector_velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_service_package__srv__EndeffectorVelservice_Request;
    is_plain =
      (
      offsetof(DataType, endeffector_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EndeffectorVelservice_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_service_package__srv__EndeffectorVelservice_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EndeffectorVelservice_Request = {
  "my_service_package::srv",
  "EndeffectorVelservice_Request",
  _EndeffectorVelservice_Request__cdr_serialize,
  _EndeffectorVelservice_Request__cdr_deserialize,
  _EndeffectorVelservice_Request__get_serialized_size,
  _EndeffectorVelservice_Request__max_serialized_size
};

static rosidl_message_type_support_t _EndeffectorVelservice_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EndeffectorVelservice_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_package, srv, EndeffectorVelservice_Request)() {
  return &_EndeffectorVelservice_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_service_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_service_package/srv/detail/endeffector_velservice__struct.h"
// already included above
// #include "my_service_package/srv/detail/endeffector_velservice__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // jointvel
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // jointvel

// forward declare type support functions


using _EndeffectorVelservice_Response__ros_msg_type = my_service_package__srv__EndeffectorVelservice_Response;

static bool _EndeffectorVelservice_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EndeffectorVelservice_Response__ros_msg_type * ros_message = static_cast<const _EndeffectorVelservice_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: jointvel
  {
    size_t size = ros_message->jointvel.size;
    auto array_ptr = ros_message->jointvel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EndeffectorVelservice_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EndeffectorVelservice_Response__ros_msg_type * ros_message = static_cast<_EndeffectorVelservice_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: jointvel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->jointvel.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->jointvel);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->jointvel, size)) {
      fprintf(stderr, "failed to create array for field 'jointvel'");
      return false;
    }
    auto array_ptr = ros_message->jointvel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_service_package
size_t get_serialized_size_my_service_package__srv__EndeffectorVelservice_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EndeffectorVelservice_Response__ros_msg_type * ros_message = static_cast<const _EndeffectorVelservice_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name jointvel
  {
    size_t array_size = ros_message->jointvel.size;
    auto array_ptr = ros_message->jointvel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EndeffectorVelservice_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_service_package__srv__EndeffectorVelservice_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_service_package
size_t max_serialized_size_my_service_package__srv__EndeffectorVelservice_Response(
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

  // member: jointvel
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
    using DataType = my_service_package__srv__EndeffectorVelservice_Response;
    is_plain =
      (
      offsetof(DataType, jointvel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EndeffectorVelservice_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_service_package__srv__EndeffectorVelservice_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EndeffectorVelservice_Response = {
  "my_service_package::srv",
  "EndeffectorVelservice_Response",
  _EndeffectorVelservice_Response__cdr_serialize,
  _EndeffectorVelservice_Response__cdr_deserialize,
  _EndeffectorVelservice_Response__get_serialized_size,
  _EndeffectorVelservice_Response__max_serialized_size
};

static rosidl_message_type_support_t _EndeffectorVelservice_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EndeffectorVelservice_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_package, srv, EndeffectorVelservice_Response)() {
  return &_EndeffectorVelservice_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_service_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_service_package/srv/endeffector_velservice.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EndeffectorVelservice__callbacks = {
  "my_service_package::srv",
  "EndeffectorVelservice",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_package, srv, EndeffectorVelservice_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_package, srv, EndeffectorVelservice_Response)(),
};

static rosidl_service_type_support_t EndeffectorVelservice__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EndeffectorVelservice__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_package, srv, EndeffectorVelservice)() {
  return &EndeffectorVelservice__handle;
}

#if defined(__cplusplus)
}
#endif
