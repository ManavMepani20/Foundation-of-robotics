// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_service_package:srv/IKservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__TRAITS_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_service_package/srv/detail/i_kservice__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace my_service_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKservice_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    if (msg.orientation.size() == 0) {
      out << "orientation: []";
    } else {
      out << "orientation: [";
      size_t pending_items = msg.orientation.size();
      for (auto item : msg.orientation) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: claw
  {
    if (msg.claw.size() == 0) {
      out << "claw: []";
    } else {
      out << "claw: [";
      size_t pending_items = msg.claw.size();
      for (auto item : msg.claw) {
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
  const IKservice_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation.size() == 0) {
      out << "orientation: []\n";
    } else {
      out << "orientation:\n";
      for (auto item : msg.orientation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: claw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.claw.size() == 0) {
      out << "claw: []\n";
    } else {
      out << "claw:\n";
      for (auto item : msg.claw) {
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

inline std::string to_yaml(const IKservice_Request & msg, bool use_flow_style = false)
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
  const my_service_package::srv::IKservice_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_service_package::srv::IKservice_Request & msg)
{
  return my_service_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_package::srv::IKservice_Request>()
{
  return "my_service_package::srv::IKservice_Request";
}

template<>
inline const char * name<my_service_package::srv::IKservice_Request>()
{
  return "my_service_package/srv/IKservice_Request";
}

template<>
struct has_fixed_size<my_service_package::srv::IKservice_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_package::srv::IKservice_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_package::srv::IKservice_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_service_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKservice_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKservice_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKservice_Response & msg, bool use_flow_style = false)
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
  const my_service_package::srv::IKservice_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_service_package::srv::IKservice_Response & msg)
{
  return my_service_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_package::srv::IKservice_Response>()
{
  return "my_service_package::srv::IKservice_Response";
}

template<>
inline const char * name<my_service_package::srv::IKservice_Response>()
{
  return "my_service_package/srv/IKservice_Response";
}

template<>
struct has_fixed_size<my_service_package::srv::IKservice_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_package::srv::IKservice_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_package::srv::IKservice_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_service_package::srv::IKservice>()
{
  return "my_service_package::srv::IKservice";
}

template<>
inline const char * name<my_service_package::srv::IKservice>()
{
  return "my_service_package/srv/IKservice";
}

template<>
struct has_fixed_size<my_service_package::srv::IKservice>
  : std::integral_constant<
    bool,
    has_fixed_size<my_service_package::srv::IKservice_Request>::value &&
    has_fixed_size<my_service_package::srv::IKservice_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_service_package::srv::IKservice>
  : std::integral_constant<
    bool,
    has_bounded_size<my_service_package::srv::IKservice_Request>::value &&
    has_bounded_size<my_service_package::srv::IKservice_Response>::value
  >
{
};

template<>
struct is_service<my_service_package::srv::IKservice>
  : std::true_type
{
};

template<>
struct is_service_request<my_service_package::srv::IKservice_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_service_package::srv::IKservice_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__TRAITS_HPP_
