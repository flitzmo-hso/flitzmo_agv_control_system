// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_HPP_

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
// Member 'time_window'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__BidNotice __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__BidNotice __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BidNotice_
{
  using Type = BidNotice_<ContainerAllocator>;

  explicit BidNotice_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_profile(_init),
    time_window(_init)
  {
    (void)_init;
  }

  explicit BidNotice_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_profile(_alloc, _init),
    time_window(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _task_profile_type =
    rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>;
  _task_profile_type task_profile;
  using _time_window_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_window_type time_window;

  // setters for named parameter idiom
  Type & set__task_profile(
    const rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> & _arg)
  {
    this->task_profile = _arg;
    return *this;
  }
  Type & set__time_window(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_window = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::BidNotice_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::BidNotice_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::BidNotice_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::BidNotice_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__BidNotice
    std::shared_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__BidNotice
    std::shared_ptr<rmf_task_msgs::msg::BidNotice_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BidNotice_ & other) const
  {
    if (this->task_profile != other.task_profile) {
      return false;
    }
    if (this->time_window != other.time_window) {
      return false;
    }
    return true;
  }
  bool operator!=(const BidNotice_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BidNotice_

// alias to use template instance with default allocator
using BidNotice =
  rmf_task_msgs::msg::BidNotice_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_HPP_
