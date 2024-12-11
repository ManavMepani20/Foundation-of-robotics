// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_service_package/msg/detail/rot_pos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_service_package
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RotPos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_service_package::msg::RotPos(_init);
}

void RotPos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_service_package::msg::RotPos *>(message_memory);
  typed_message->~RotPos();
}

size_t size_function__RotPos__r(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RotPos__r(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RotPos__r(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RotPos__r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RotPos__r(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RotPos__r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RotPos__r(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RotPos__r(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RotPos__o(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RotPos__o(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RotPos__o(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RotPos__o(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RotPos__o(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RotPos__o(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RotPos__o(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RotPos__o(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RotPos_message_member_array[2] = {
  {
    "r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package::msg::RotPos, r),  // bytes offset in struct
    nullptr,  // default value
    size_function__RotPos__r,  // size() function pointer
    get_const_function__RotPos__r,  // get_const(index) function pointer
    get_function__RotPos__r,  // get(index) function pointer
    fetch_function__RotPos__r,  // fetch(index, &value) function pointer
    assign_function__RotPos__r,  // assign(index, value) function pointer
    resize_function__RotPos__r  // resize(index) function pointer
  },
  {
    "o",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_service_package::msg::RotPos, o),  // bytes offset in struct
    nullptr,  // default value
    size_function__RotPos__o,  // size() function pointer
    get_const_function__RotPos__o,  // get_const(index) function pointer
    get_function__RotPos__o,  // get(index) function pointer
    fetch_function__RotPos__o,  // fetch(index, &value) function pointer
    assign_function__RotPos__o,  // assign(index, value) function pointer
    resize_function__RotPos__o  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RotPos_message_members = {
  "my_service_package::msg",  // message namespace
  "RotPos",  // message name
  2,  // number of fields
  sizeof(my_service_package::msg::RotPos),
  RotPos_message_member_array,  // message members
  RotPos_init_function,  // function to initialize message memory (memory has to be allocated)
  RotPos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RotPos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RotPos_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_service_package


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_service_package::msg::RotPos>()
{
  return &::my_service_package::msg::rosidl_typesupport_introspection_cpp::RotPos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_service_package, msg, RotPos)() {
  return &::my_service_package::msg::rosidl_typesupport_introspection_cpp::RotPos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
