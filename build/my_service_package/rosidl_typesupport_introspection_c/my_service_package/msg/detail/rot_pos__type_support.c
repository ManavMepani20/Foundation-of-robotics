// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_service_package/msg/detail/rot_pos__rosidl_typesupport_introspection_c.h"
#include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_service_package/msg/detail/rot_pos__functions.h"
#include "my_service_package/msg/detail/rot_pos__struct.h"


// Include directives for member types
// Member `r`
// Member `o`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_service_package__msg__RotPos__init(message_memory);
}

void my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_fini_function(void * message_memory)
{
  my_service_package__msg__RotPos__fini(message_memory);
}

size_t my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__size_function__RotPos__r(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_const_function__RotPos__r(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_function__RotPos__r(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__fetch_function__RotPos__r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_const_function__RotPos__r(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__assign_function__RotPos__r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_function__RotPos__r(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__resize_function__RotPos__r(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__size_function__RotPos__o(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_const_function__RotPos__o(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_function__RotPos__o(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__fetch_function__RotPos__o(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_const_function__RotPos__o(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__assign_function__RotPos__o(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_function__RotPos__o(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__resize_function__RotPos__o(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_member_array[2] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__msg__RotPos, r),  // bytes offset in struct
    NULL,  // default value
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__size_function__RotPos__r,  // size() function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_const_function__RotPos__r,  // get_const(index) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_function__RotPos__r,  // get(index) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__fetch_function__RotPos__r,  // fetch(index, &value) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__assign_function__RotPos__r,  // assign(index, value) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__resize_function__RotPos__r  // resize(index) function pointer
  },
  {
    "o",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__msg__RotPos, o),  // bytes offset in struct
    NULL,  // default value
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__size_function__RotPos__o,  // size() function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_const_function__RotPos__o,  // get_const(index) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__get_function__RotPos__o,  // get(index) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__fetch_function__RotPos__o,  // fetch(index, &value) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__assign_function__RotPos__o,  // assign(index, value) function pointer
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__resize_function__RotPos__o  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_members = {
  "my_service_package__msg",  // message namespace
  "RotPos",  // message name
  2,  // number of fields
  sizeof(my_service_package__msg__RotPos),
  my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_member_array,  // message members
  my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_init_function,  // function to initialize message memory (memory has to be allocated)
  my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_type_support_handle = {
  0,
  &my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, msg, RotPos)() {
  if (!my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_type_support_handle.typesupport_identifier) {
    my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_service_package__msg__RotPos__rosidl_typesupport_introspection_c__RotPos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
