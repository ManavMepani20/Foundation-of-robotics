// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_service_package:msg/VelPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_service_package/msg/detail/vel_pos__rosidl_typesupport_introspection_c.h"
#include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_service_package/msg/detail/vel_pos__functions.h"
#include "my_service_package/msg/detail/vel_pos__struct.h"


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `pos`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_service_package__msg__VelPos__init(message_memory);
}

void my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_fini_function(void * message_memory)
{
  my_service_package__msg__VelPos__fini(message_memory);
}

size_t my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__size_function__VelPos__pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__get_const_function__VelPos__pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__get_function__VelPos__pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__fetch_function__VelPos__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__get_const_function__VelPos__pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__assign_function__VelPos__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__get_function__VelPos__pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__resize_function__VelPos__pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_member_array[2] = {
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__msg__VelPos, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__msg__VelPos, pos),  // bytes offset in struct
    NULL,  // default value
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__size_function__VelPos__pos,  // size() function pointer
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__get_const_function__VelPos__pos,  // get_const(index) function pointer
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__get_function__VelPos__pos,  // get(index) function pointer
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__fetch_function__VelPos__pos,  // fetch(index, &value) function pointer
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__assign_function__VelPos__pos,  // assign(index, value) function pointer
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__resize_function__VelPos__pos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_members = {
  "my_service_package__msg",  // message namespace
  "VelPos",  // message name
  2,  // number of fields
  sizeof(my_service_package__msg__VelPos),
  my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_member_array,  // message members
  my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_init_function,  // function to initialize message memory (memory has to be allocated)
  my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_type_support_handle = {
  0,
  &my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, msg, VelPos)() {
  my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_type_support_handle.typesupport_identifier) {
    my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_service_package__msg__VelPos__rosidl_typesupport_introspection_c__VelPos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
