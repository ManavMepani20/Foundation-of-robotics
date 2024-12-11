// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_package:srv/FloatPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__BUILDER_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_package/srv/detail/float_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_FloatPos_Request_pos4
{
public:
  Init_FloatPos_Request_pos4()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_package::srv::FloatPos_Request pos4(::my_service_package::srv::FloatPos_Request::_pos4_type arg)
  {
    msg_.pos4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::FloatPos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::FloatPos_Request>()
{
  return my_service_package::srv::builder::Init_FloatPos_Request_pos4();
}

}  // namespace my_service_package


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_FloatPos_Response_success
{
public:
  Init_FloatPos_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_package::srv::FloatPos_Response success(::my_service_package::srv::FloatPos_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::FloatPos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::FloatPos_Response>()
{
  return my_service_package::srv::builder::Init_FloatPos_Response_success();
}

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__BUILDER_HPP_
