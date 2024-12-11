// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__BUILDER_HPP_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_package/msg/detail/rot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_package
{

namespace msg
{

namespace builder
{

class Init_RotPos_o
{
public:
  explicit Init_RotPos_o(::my_service_package::msg::RotPos & msg)
  : msg_(msg)
  {}
  ::my_service_package::msg::RotPos o(::my_service_package::msg::RotPos::_o_type arg)
  {
    msg_.o = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::msg::RotPos msg_;
};

class Init_RotPos_r
{
public:
  Init_RotPos_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotPos_o r(::my_service_package::msg::RotPos::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_RotPos_o(msg_);
  }

private:
  ::my_service_package::msg::RotPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::msg::RotPos>()
{
  return my_service_package::msg::builder::Init_RotPos_r();
}

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__BUILDER_HPP_
