// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_service_package:srv/IKservice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_service_package/srv/detail/i_kservice__rosidl_typesupport_introspection_c.h"
#include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_service_package/srv/detail/i_kservice__functions.h"
#include "my_service_package/srv/detail/i_kservice__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `claw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_service_package__srv__IKservice_Request__init(message_memory);
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_fini_function(void * message_memory)
{
  my_service_package__srv__IKservice_Request__fini(message_memory);
}

size_t my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__size_function__IKservice_Request__position(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__position(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__position(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__fetch_function__IKservice_Request__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__position(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__assign_function__IKservice_Request__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__position(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__resize_function__IKservice_Request__position(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__size_function__IKservice_Request__orientation(
  const void * untyped_member)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__orientation(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Quaternion__Sequence * member =
    (const geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__orientation(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__fetch_function__IKservice_Request__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Quaternion * item =
    ((const geometry_msgs__msg__Quaternion *)
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__orientation(untyped_member, index));
  geometry_msgs__msg__Quaternion * value =
    (geometry_msgs__msg__Quaternion *)(untyped_value);
  *value = *item;
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__assign_function__IKservice_Request__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Quaternion * item =
    ((geometry_msgs__msg__Quaternion *)
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__orientation(untyped_member, index));
  const geometry_msgs__msg__Quaternion * value =
    (const geometry_msgs__msg__Quaternion *)(untyped_value);
  *item = *value;
}

bool my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__resize_function__IKservice_Request__orientation(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Quaternion__Sequence * member =
    (geometry_msgs__msg__Quaternion__Sequence *)(untyped_member);
  geometry_msgs__msg__Quaternion__Sequence__fini(member);
  return geometry_msgs__msg__Quaternion__Sequence__init(member, size);
}

size_t my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__size_function__IKservice_Request__claw(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__claw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__claw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__fetch_function__IKservice_Request__claw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__claw(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__assign_function__IKservice_Request__claw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__claw(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__resize_function__IKservice_Request__claw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_member_array[3] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__IKservice_Request, position),  // bytes offset in struct
    NULL,  // default value
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__size_function__IKservice_Request__position,  // size() function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__position,  // get_const(index) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__position,  // get(index) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__fetch_function__IKservice_Request__position,  // fetch(index, &value) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__assign_function__IKservice_Request__position,  // assign(index, value) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__resize_function__IKservice_Request__position  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__IKservice_Request, orientation),  // bytes offset in struct
    NULL,  // default value
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__size_function__IKservice_Request__orientation,  // size() function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__orientation,  // get_const(index) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__orientation,  // get(index) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__fetch_function__IKservice_Request__orientation,  // fetch(index, &value) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__assign_function__IKservice_Request__orientation,  // assign(index, value) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__resize_function__IKservice_Request__orientation  // resize(index) function pointer
  },
  {
    "claw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__IKservice_Request, claw),  // bytes offset in struct
    NULL,  // default value
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__size_function__IKservice_Request__claw,  // size() function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_const_function__IKservice_Request__claw,  // get_const(index) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__get_function__IKservice_Request__claw,  // get(index) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__fetch_function__IKservice_Request__claw,  // fetch(index, &value) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__assign_function__IKservice_Request__claw,  // assign(index, value) function pointer
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__resize_function__IKservice_Request__claw  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_members = {
  "my_service_package__srv",  // message namespace
  "IKservice_Request",  // message name
  3,  // number of fields
  sizeof(my_service_package__srv__IKservice_Request),
  my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_member_array,  // message members
  my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_type_support_handle = {
  0,
  &my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice_Request)() {
  my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_type_support_handle.typesupport_identifier) {
    my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_service_package__srv__IKservice_Request__rosidl_typesupport_introspection_c__IKservice_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_service_package/srv/detail/i_kservice__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_service_package/srv/detail/i_kservice__functions.h"
// already included above
// #include "my_service_package/srv/detail/i_kservice__struct.h"


// Include directives for member types
// Member `joint_positions`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_service_package__srv__IKservice_Response__init(message_memory);
}

void my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_fini_function(void * message_memory)
{
  my_service_package__srv__IKservice_Response__fini(message_memory);
}

size_t my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__size_function__IKservice_Response__joint_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__get_const_function__IKservice_Response__joint_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__get_function__IKservice_Response__joint_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__fetch_function__IKservice_Response__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__get_const_function__IKservice_Response__joint_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__assign_function__IKservice_Response__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__get_function__IKservice_Response__joint_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__resize_function__IKservice_Response__joint_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_member_array[2] = {
  {
    "joint_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__IKservice_Response, joint_positions),  // bytes offset in struct
    NULL,  // default value
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__size_function__IKservice_Response__joint_positions,  // size() function pointer
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__get_const_function__IKservice_Response__joint_positions,  // get_const(index) function pointer
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__get_function__IKservice_Response__joint_positions,  // get(index) function pointer
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__fetch_function__IKservice_Response__joint_positions,  // fetch(index, &value) function pointer
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__assign_function__IKservice_Response__joint_positions,  // assign(index, value) function pointer
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__resize_function__IKservice_Response__joint_positions  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__IKservice_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_members = {
  "my_service_package__srv",  // message namespace
  "IKservice_Response",  // message name
  2,  // number of fields
  sizeof(my_service_package__srv__IKservice_Response),
  my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_member_array,  // message members
  my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_type_support_handle = {
  0,
  &my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice_Response)() {
  if (!my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_type_support_handle.typesupport_identifier) {
    my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_service_package__srv__IKservice_Response__rosidl_typesupport_introspection_c__IKservice_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_service_package/srv/detail/i_kservice__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_members = {
  "my_service_package__srv",  // service namespace
  "IKservice",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_Request_message_type_support_handle,
  NULL  // response message
  // my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_type_support_handle = {
  0,
  &my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice)() {
  if (!my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_type_support_handle.typesupport_identifier) {
    my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, IKservice_Response)()->data;
  }

  return &my_service_package__srv__detail__i_kservice__rosidl_typesupport_introspection_c__IKservice_service_type_support_handle;
}
