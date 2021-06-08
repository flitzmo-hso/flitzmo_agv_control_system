// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/DispatchRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__DispatchRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__DispatchRequest __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DispatchRequest_
{
  using Type = DispatchRequest_<ContainerAllocator>;

  explicit DispatchRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_profile(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->method = 0;
    }
  }

  explicit DispatchRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    task_profile(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->method = 0;
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _fleet_name_type fleet_name;
  using _task_profile_type =
    rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>;
  _task_profile_type task_profile;
  using _method_type =
    uint8_t;
  _method_type method;

  // setters for named parameter idiom
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__task_profile(
    const rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> & _arg)
  {
    this->task_profile = _arg;
    return *this;
  }
  Type & set__method(
    const uint8_t & _arg)
  {
    this->method = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD =
    1u;
  static constexpr uint8_t CANCEL =
    2u;

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchRequest
    std::shared_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchRequest
    std::shared_ptr<rmf_task_msgs::msg::DispatchRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DispatchRequest_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->task_profile != other.task_profile) {
      return false;
    }
    if (this->method != other.method) {
      return false;
    }
    return true;
  }
  bool operator!=(const DispatchRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DispatchRequest_

// alias to use template instance with default allocator
using DispatchRequest =
  rmf_task_msgs::msg::DispatchRequest_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DispatchRequest_<ContainerAllocator>::ADD;
template<typename ContainerAllocator>
constexpr uint8_t DispatchRequest_<ContainerAllocator>::CANCEL;

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__STRUCT_HPP_
