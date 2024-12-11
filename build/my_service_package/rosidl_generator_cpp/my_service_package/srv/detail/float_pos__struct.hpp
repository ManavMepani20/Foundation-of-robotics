// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_service_package:srv/FloatPos.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__STRUCT_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_service_package__srv__FloatPos_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__srv__FloatPos_Request __declspec(deprecated)
#endif

namespace my_service_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FloatPos_Request_
{
  using Type = FloatPos_Request_<ContainerAllocator>;

  explicit FloatPos_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FloatPos_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pos4_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _pos4_type pos4;

  // setters for named parameter idiom
  Type & set__pos4(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->pos4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::srv::FloatPos_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::srv::FloatPos_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::FloatPos_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::FloatPos_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__srv__FloatPos_Request
    std::shared_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__srv__FloatPos_Request
    std::shared_ptr<my_service_package::srv::FloatPos_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FloatPos_Request_ & other) const
  {
    if (this->pos4 != other.pos4) {
      return false;
    }
    return true;
  }
  bool operator!=(const FloatPos_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FloatPos_Request_

// alias to use template instance with default allocator
using FloatPos_Request =
  my_service_package::srv::FloatPos_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_package


#ifndef _WIN32
# define DEPRECATED__my_service_package__srv__FloatPos_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__srv__FloatPos_Response __declspec(deprecated)
#endif

namespace my_service_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FloatPos_Response_
{
  using Type = FloatPos_Response_<ContainerAllocator>;

  explicit FloatPos_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit FloatPos_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::srv::FloatPos_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::srv::FloatPos_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::FloatPos_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::FloatPos_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__srv__FloatPos_Response
    std::shared_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__srv__FloatPos_Response
    std::shared_ptr<my_service_package::srv::FloatPos_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FloatPos_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const FloatPos_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FloatPos_Response_

// alias to use template instance with default allocator
using FloatPos_Response =
  my_service_package::srv::FloatPos_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_package

namespace my_service_package
{

namespace srv
{

struct FloatPos
{
  using Request = my_service_package::srv::FloatPos_Request;
  using Response = my_service_package::srv::FloatPos_Response;
};

}  // namespace srv

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__FLOAT_POS__STRUCT_HPP_
