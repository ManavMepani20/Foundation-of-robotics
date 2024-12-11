// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_service_package:srv/EndeffectorVelservice.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__STRUCT_HPP_
#define MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'endeffector_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_service_package__srv__EndeffectorVelservice_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__srv__EndeffectorVelservice_Request __declspec(deprecated)
#endif

namespace my_service_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EndeffectorVelservice_Request_
{
  using Type = EndeffectorVelservice_Request_<ContainerAllocator>;

  explicit EndeffectorVelservice_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endeffector_velocity(_init)
  {
    (void)_init;
  }

  explicit EndeffectorVelservice_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endeffector_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _endeffector_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _endeffector_velocity_type endeffector_velocity;

  // setters for named parameter idiom
  Type & set__endeffector_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->endeffector_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__srv__EndeffectorVelservice_Request
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__srv__EndeffectorVelservice_Request
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndeffectorVelservice_Request_ & other) const
  {
    if (this->endeffector_velocity != other.endeffector_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const EndeffectorVelservice_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndeffectorVelservice_Request_

// alias to use template instance with default allocator
using EndeffectorVelservice_Request =
  my_service_package::srv::EndeffectorVelservice_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_package


#ifndef _WIN32
# define DEPRECATED__my_service_package__srv__EndeffectorVelservice_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_service_package__srv__EndeffectorVelservice_Response __declspec(deprecated)
#endif

namespace my_service_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EndeffectorVelservice_Response_
{
  using Type = EndeffectorVelservice_Response_<ContainerAllocator>;

  explicit EndeffectorVelservice_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EndeffectorVelservice_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _jointvel_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _jointvel_type jointvel;

  // setters for named parameter idiom
  Type & set__jointvel(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->jointvel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_package__srv__EndeffectorVelservice_Response
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_package__srv__EndeffectorVelservice_Response
    std::shared_ptr<my_service_package::srv::EndeffectorVelservice_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndeffectorVelservice_Response_ & other) const
  {
    if (this->jointvel != other.jointvel) {
      return false;
    }
    return true;
  }
  bool operator!=(const EndeffectorVelservice_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndeffectorVelservice_Response_

// alias to use template instance with default allocator
using EndeffectorVelservice_Response =
  my_service_package::srv::EndeffectorVelservice_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_package

namespace my_service_package
{

namespace srv
{

struct EndeffectorVelservice
{
  using Request = my_service_package::srv::EndeffectorVelservice_Request;
  using Response = my_service_package::srv::EndeffectorVelservice_Response;
};

}  // namespace srv

}  // namespace my_service_package

#endif  // MY_SERVICE_PACKAGE__SRV__DETAIL__ENDEFFECTOR_VELSERVICE__STRUCT_HPP_
