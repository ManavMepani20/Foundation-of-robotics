// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_service_package:srv/JointVelservice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_service_package/srv/detail/joint_velservice__rosidl_typesupport_introspection_c.h"
#include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_service_package/srv/detail/joint_velservice__functions.h"
#include "my_service_package/srv/detail/joint_velservice__struct.h"


// Include directives for member types
// Member `joint_velocity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_service_package__srv__JointVelservice_Request__init(message_memory);
}

void my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_fini_function(void * message_memory)
{
  my_service_package__srv__JointVelservice_Request__fini(message_memory);
}

size_t my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__size_function__JointVelservice_Request__joint_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__get_const_function__JointVelservice_Request__joint_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__get_function__JointVelservice_Request__joint_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__fetch_function__JointVelservice_Request__joint_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__get_const_function__JointVelservice_Request__joint_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__assign_function__JointVelservice_Request__joint_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__get_function__JointVelservice_Request__joint_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__resize_function__JointVelservice_Request__joint_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_member_array[1] = {
  {
    "joint_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__JointVelservice_Request, joint_velocity),  // bytes offset in struct
    NULL,  // default value
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__size_function__JointVelservice_Request__joint_velocity,  // size() function pointer
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__get_const_function__JointVelservice_Request__joint_velocity,  // get_const(index) function pointer
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__get_function__JointVelservice_Request__joint_velocity,  // get(index) function pointer
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__fetch_function__JointVelservice_Request__joint_velocity,  // fetch(index, &value) function pointer
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__assign_function__JointVelservice_Request__joint_velocity,  // assign(index, value) function pointer
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__resize_function__JointVelservice_Request__joint_velocity  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_members = {
  "my_service_package__srv",  // message namespace
  "JointVelservice_Request",  // message name
  1,  // number of fields
  sizeof(my_service_package__srv__JointVelservice_Request),
  my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_member_array,  // message members
  my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_type_support_handle = {
  0,
  &my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice_Request)() {
  if (!my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_type_support_handle.typesupport_identifier) {
    my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_service_package__srv__JointVelservice_Request__rosidl_typesupport_introspection_c__JointVelservice_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_service_package/srv/detail/joint_velservice__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_service_package/srv/detail/joint_velservice__functions.h"
// already included above
// #include "my_service_package/srv/detail/joint_velservice__struct.h"


// Include directives for member types
// Member `twist`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_service_package__srv__JointVelservice_Response__init(message_memory);
}

void my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_fini_function(void * message_memory)
{
  my_service_package__srv__JointVelservice_Response__fini(message_memory);
}

size_t my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__size_function__JointVelservice_Response__twist(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__get_const_function__JointVelservice_Response__twist(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__get_function__JointVelservice_Response__twist(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__fetch_function__JointVelservice_Response__twist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__get_const_function__JointVelservice_Response__twist(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__assign_function__JointVelservice_Response__twist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__get_function__JointVelservice_Response__twist(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__resize_function__JointVelservice_Response__twist(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_member_array[1] = {
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package__srv__JointVelservice_Response, twist),  // bytes offset in struct
    NULL,  // default value
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__size_function__JointVelservice_Response__twist,  // size() function pointer
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__get_const_function__JointVelservice_Response__twist,  // get_const(index) function pointer
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__get_function__JointVelservice_Response__twist,  // get(index) function pointer
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__fetch_function__JointVelservice_Response__twist,  // fetch(index, &value) function pointer
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__assign_function__JointVelservice_Response__twist,  // assign(index, value) function pointer
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__resize_function__JointVelservice_Response__twist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_members = {
  "my_service_package__srv",  // message namespace
  "JointVelservice_Response",  // message name
  1,  // number of fields
  sizeof(my_service_package__srv__JointVelservice_Response),
  my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_member_array,  // message members
  my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_type_support_handle = {
  0,
  &my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice_Response)() {
  if (!my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_type_support_handle.typesupport_identifier) {
    my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_service_package__srv__JointVelservice_Response__rosidl_typesupport_introspection_c__JointVelservice_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_service_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_service_package/srv/detail/joint_velservice__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_members = {
  "my_service_package__srv",  // service namespace
  "JointVelservice",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_Request_message_type_support_handle,
  NULL  // response message
  // my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_type_support_handle = {
  0,
  &my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_service_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice)() {
  if (!my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_type_support_handle.typesupport_identifier) {
    my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_package, srv, JointVelservice_Response)()->data;
  }

  return &my_service_package__srv__detail__joint_velservice__rosidl_typesupport_introspection_c__JointVelservice_service_type_support_handle;
}
