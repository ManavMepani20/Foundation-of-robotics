// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_service_package:srv/JointVelservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__TRAITS_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_service_package/srv/detail/joint_velservice__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_service_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointVelservice_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_velocity
  {
    if (msg.joint_velocity.size() == 0) {
      out << "joint_velocity: []";
    } else {
      out << "joint_velocity: [";
      size_t pending_items = msg.joint_velocity.size();
      for (auto item : msg.joint_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointVelservice_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocity.size() == 0) {
      out << "joint_velocity: []\n";
    } else {
      out << "joint_velocity:\n";
      for (auto item : msg.joint_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointVelservice_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_service_package

namespace rosidl_generator_traits
{

[[deprecated("use my_service_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_service_package::srv::JointVelservice_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_service_package::srv::JointVelservice_Request & msg)
{
  return my_service_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_package::srv::JointVelservice_Request>()
{
  return "my_service_package::srv::JointVelservice_Request";
}

template<>
inline const char * name<my_service_package::srv::JointVelservice_Request>()
{
  return "my_service_package/srv/JointVelservice_Request";
}

template<>
struct has_fixed_size<my_service_package::srv::JointVelservice_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_package::srv::JointVelservice_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_package::srv::JointVelservice_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_service_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointVelservice_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: twist
  {
    if (msg.twist.size() == 0) {
      out << "twist: []";
    } else {
      out << "twist: [";
      size_t pending_items = msg.twist.size();
      for (auto item : msg.twist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointVelservice_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.twist.size() == 0) {
      out << "twist: []\n";
    } else {
      out << "twist:\n";
      for (auto item : msg.twist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointVelservice_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_service_package

namespace rosidl_generator_traits
{

[[deprecated("use my_service_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_service_package::srv::JointVelservice_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_service_package::srv::JointVelservice_Response & msg)
{
  return my_service_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_package::srv::JointVelservice_Response>()
{
  return "my_service_package::srv::JointVelservice_Response";
}

template<>
inline const char * name<my_service_package::srv::JointVelservice_Response>()
{
  return "my_service_package/srv/JointVelservice_Response";
}

template<>
struct has_fixed_size<my_service_package::srv::JointVelservice_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_package::srv::JointVelservice_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_package::srv::JointVelservice_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_service_package::srv::JointVelservice>()
{
  return "my_service_package::srv::JointVelservice";
}

template<>
inline const char * name<my_service_package::srv::JointVelservice>()
{
  return "my_service_package/srv/JointVelservice";
}

template<>
struct has_fixed_size<my_service_package::srv::JointVelservice>
  : std::integral_constant<
    bool,
    has_fixed_size<my_service_package::srv::JointVelservice_Request>::value &&
    has_fixed_size<my_service_package::srv::JointVelservice_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_service_package::srv::JointVelservice>
  : std::integral_constant<
    bool,
    has_bounded_size<my_service_package::srv::JointVelservice_Request>::value &&
    has_bounded_size<my_service_package::srv::JointVelservice_Response>::value
  >
{
};

template<>
struct is_service<my_service_package::srv::JointVelservice>
  : std::true_type
{
};

template<>
struct is_service_request<my_service_package::srv::JointVelservice_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_service_package::srv::JointVelservice_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__JOINT_VELSERVICE__TRAITS_HPP_
