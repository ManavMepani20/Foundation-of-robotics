// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__TRAITS_HPP_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_service_package/msg/detail/rot_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_service_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const RotPos & msg,
  std::ostream & out)
{
  out << "{";
  // member: r
  {
    if (msg.r.size() == 0) {
      out << "r: []";
    } else {
      out << "r: [";
      size_t pending_items = msg.r.size();
      for (auto item : msg.r) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o
  {
    if (msg.o.size() == 0) {
      out << "o: []";
    } else {
      out << "o: [";
      size_t pending_items = msg.o.size();
      for (auto item : msg.o) {
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
  const RotPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.r.size() == 0) {
      out << "r: []\n";
    } else {
      out << "r:\n";
      for (auto item : msg.r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o.size() == 0) {
      out << "o: []\n";
    } else {
      out << "o:\n";
      for (auto item : msg.o) {
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

inline std::string to_yaml(const RotPos & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_service_package

namespace rosidl_generator_traits
{

[[deprecated("use my_service_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_service_package::msg::RotPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_service_package::msg::RotPos & msg)
{
  return my_service_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_package::msg::RotPos>()
{
  return "my_service_package::msg::RotPos";
}

template<>
inline const char * name<my_service_package::msg::RotPos>()
{
  return "my_service_package/msg/RotPos";
}

template<>
struct has_fixed_size<my_service_package::msg::RotPos>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_package::msg::RotPos>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_package::msg::RotPos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__TRAITS_HPP_
