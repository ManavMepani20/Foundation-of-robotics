// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_package:msg/VelPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__BUILDER_HPP_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_package/msg/detail/vel_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_package
{

namespace msg
{

namespace builder
{

class Init_VelPos_pos
{
public:
  explicit Init_VelPos_pos(::my_service_package::msg::VelPos & msg)
  : msg_(msg)
  {}
  ::my_service_package::msg::VelPos pos(::my_service_package::msg::VelPos::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::msg::VelPos msg_;
};

class Init_VelPos_twist
{
public:
  Init_VelPos_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelPos_pos twist(::my_service_package::msg::VelPos::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_VelPos_pos(msg_);
  }

private:
  ::my_service_package::msg::VelPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::msg::VelPos>()
{
  return my_service_package::msg::builder::Init_VelPos_twist();
}

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__VEL_POS__BUILDER_HPP_
