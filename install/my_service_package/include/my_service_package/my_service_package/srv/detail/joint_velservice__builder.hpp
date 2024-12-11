// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_package:srv/JointVelservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__BUILDER_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_package/srv/detail/joint_velservice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_JointVelservice_Request_joint_velocity
{
public:
  Init_JointVelservice_Request_joint_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_package::srv::JointVelservice_Request joint_velocity(::my_service_package::srv::JointVelservice_Request::_joint_velocity_type arg)
  {
    msg_.joint_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::JointVelservice_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::JointVelservice_Request>()
{
  return my_service_package::srv::builder::Init_JointVelservice_Request_joint_velocity();
}

}  // namespace my_service_package


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_JointVelservice_Response_twist
{
public:
  Init_JointVelservice_Response_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_package::srv::JointVelservice_Response twist(::my_service_package::srv::JointVelservice_Response::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::JointVelservice_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::JointVelservice_Response>()
{
  return my_service_package::srv::builder::Init_JointVelservice_Response_twist();
}

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__BUILDER_HPP_
