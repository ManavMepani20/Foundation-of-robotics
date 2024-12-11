// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_package:srv/IKservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__BUILDER_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_package/srv/detail/i_kservice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_IKservice_Request_claw
{
public:
  explicit Init_IKservice_Request_claw(::my_service_package::srv::IKservice_Request & msg)
  : msg_(msg)
  {}
  ::my_service_package::srv::IKservice_Request claw(::my_service_package::srv::IKservice_Request::_claw_type arg)
  {
    msg_.claw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::IKservice_Request msg_;
};

class Init_IKservice_Request_orientation
{
public:
  explicit Init_IKservice_Request_orientation(::my_service_package::srv::IKservice_Request & msg)
  : msg_(msg)
  {}
  Init_IKservice_Request_claw orientation(::my_service_package::srv::IKservice_Request::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_IKservice_Request_claw(msg_);
  }

private:
  ::my_service_package::srv::IKservice_Request msg_;
};

class Init_IKservice_Request_position
{
public:
  Init_IKservice_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKservice_Request_orientation position(::my_service_package::srv::IKservice_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_IKservice_Request_orientation(msg_);
  }

private:
  ::my_service_package::srv::IKservice_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::IKservice_Request>()
{
  return my_service_package::srv::builder::Init_IKservice_Request_position();
}

}  // namespace my_service_package


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_IKservice_Response_success
{
public:
  explicit Init_IKservice_Response_success(::my_service_package::srv::IKservice_Response & msg)
  : msg_(msg)
  {}
  ::my_service_package::srv::IKservice_Response success(::my_service_package::srv::IKservice_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::IKservice_Response msg_;
};

class Init_IKservice_Response_joint_positions
{
public:
  Init_IKservice_Response_joint_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKservice_Response_success joint_positions(::my_service_package::srv::IKservice_Response::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_IKservice_Response_success(msg_);
  }

private:
  ::my_service_package::srv::IKservice_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::IKservice_Response>()
{
  return my_service_package::srv::builder::Init_IKservice_Response_joint_positions();
}

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__BUILDER_HPP_
