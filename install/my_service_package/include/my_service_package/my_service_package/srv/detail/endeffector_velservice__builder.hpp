// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_package:srv/EndeffectorVelservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__BUILDER_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_package/srv/detail/endeffector_velservice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_EndeffectorVelservice_Request_endeffector_velocity
{
public:
  Init_EndeffectorVelservice_Request_endeffector_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_package::srv::EndeffectorVelservice_Request endeffector_velocity(::my_service_package::srv::EndeffectorVelservice_Request::_endeffector_velocity_type arg)
  {
    msg_.endeffector_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::EndeffectorVelservice_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::EndeffectorVelservice_Request>()
{
  return my_service_package::srv::builder::Init_EndeffectorVelservice_Request_endeffector_velocity();
}

}  // namespace my_service_package


namespace my_service_package
{

namespace srv
{

namespace builder
{

class Init_EndeffectorVelservice_Response_jointvel
{
public:
  Init_EndeffectorVelservice_Response_jointvel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_package::srv::EndeffectorVelservice_Response jointvel(::my_service_package::srv::EndeffectorVelservice_Response::_jointvel_type arg)
  {
    msg_.jointvel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_package::srv::EndeffectorVelservice_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_package::srv::EndeffectorVelservice_Response>()
{
  return my_service_package::srv::builder::Init_EndeffectorVelservice_Response_jointvel();
}

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__BUILDER_HPP_
