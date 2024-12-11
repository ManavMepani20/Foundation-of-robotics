// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__STRUCT_HPP_
#define MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_service_package__msg__RotPos __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__msg__RotPos __declspec(deprecated)
#endif

namespace my_service_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RotPos_
{
  using Type = RotPos_<ContainerAllocator>;

  explicit RotPos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RotPos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _r_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _r_type r;
  using _o_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _o_type o;

  // setters for named parameter idiom
  Type & set__r(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__o(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->o = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::msg::RotPos_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::msg::RotPos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::msg::RotPos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::msg::RotPos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::msg::RotPos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::msg::RotPos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::msg::RotPos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::msg::RotPos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::msg::RotPos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::msg::RotPos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__msg__RotPos
    std::shared_ptr<my_service_package::msg::RotPos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__msg__RotPos
    std::shared_ptr<my_service_package::msg::RotPos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotPos_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->o != other.o) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotPos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotPos_

// alias to use template instance with default allocator
using RotPos =
  my_service_package::msg::RotPos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__MSG__DETAIL__ROT_POS__STRUCT_HPP_
