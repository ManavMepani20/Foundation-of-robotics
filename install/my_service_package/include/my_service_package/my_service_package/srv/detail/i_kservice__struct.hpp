// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_service_package:srv/IKservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__STRUCT_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_service_package__srv__IKservice_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__srv__IKservice_Request __declspec(deprecated)
#endif

namespace my_service_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKservice_Request_
{
  using Type = IKservice_Request_<ContainerAllocator>;

  explicit IKservice_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IKservice_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _position_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _position_type position;
  using _orientation_type =
    std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>>;
  _orientation_type orientation;
  using _claw_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _claw_type claw;

  // setters for named parameter idiom
  Type & set__position(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__claw(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->claw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::srv::IKservice_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::srv::IKservice_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::IKservice_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::IKservice_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__srv__IKservice_Request
    std::shared_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__srv__IKservice_Request
    std::shared_ptr<my_service_package::srv::IKservice_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKservice_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->claw != other.claw) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKservice_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKservice_Request_

// alias to use template instance with default allocator
using IKservice_Request =
  my_service_package::srv::IKservice_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_package


#ifndef _WIN32
# define DEPRECATED__my_service_package__srv__IKservice_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__srv__IKservice_Response __declspec(deprecated)
#endif

namespace my_service_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKservice_Response_
{
  using Type = IKservice_Response_<ContainerAllocator>;

  explicit IKservice_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit IKservice_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _joint_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_positions_type joint_positions;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__joint_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_positions = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::srv::IKservice_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::srv::IKservice_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::IKservice_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::IKservice_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__srv__IKservice_Response
    std::shared_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__srv__IKservice_Response
    std::shared_ptr<my_service_package::srv::IKservice_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKservice_Response_ & other) const
  {
    if (this->joint_positions != other.joint_positions) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKservice_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKservice_Response_

// alias to use template instance with default allocator
using IKservice_Response =
  my_service_package::srv::IKservice_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_package

namespace my_service_package
{

namespace srv
{

struct IKservice
{
  using Request = my_service_package::srv::IKservice_Request;
  using Response = my_service_package::srv::IKservice_Response;
};

}  // namespace srv

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__I_KSERVICE__STRUCT_HPP_
