// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_HPP_

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
// Member 'finish_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__BidProposal __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__BidProposal __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BidProposal_
{
  using Type = BidProposal_<ContainerAllocator>;

  explicit BidProposal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_profile(_init),
    finish_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->prev_cost = 0.0;
      this->new_cost = 0.0;
      this->robot_name = "";
    }
  }

  explicit BidProposal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    task_profile(_alloc, _init),
    finish_time(_alloc, _init),
    robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->prev_cost = 0.0;
      this->new_cost = 0.0;
      this->robot_name = "";
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _fleet_name_type fleet_name;
  using _task_profile_type =
    rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>;
  _task_profile_type task_profile;
  using _prev_cost_type =
    double;
  _prev_cost_type prev_cost;
  using _new_cost_type =
    double;
  _new_cost_type new_cost;
  using _finish_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _finish_time_type finish_time;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _robot_name_type robot_name;

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
  Type & set__prev_cost(
    const double & _arg)
  {
    this->prev_cost = _arg;
    return *this;
  }
  Type & set__new_cost(
    const double & _arg)
  {
    this->new_cost = _arg;
    return *this;
  }
  Type & set__finish_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->finish_time = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::BidProposal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::BidProposal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::BidProposal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::BidProposal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__BidProposal
    std::shared_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__BidProposal
    std::shared_ptr<rmf_task_msgs::msg::BidProposal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BidProposal_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->task_profile != other.task_profile) {
      return false;
    }
    if (this->prev_cost != other.prev_cost) {
      return false;
    }
    if (this->new_cost != other.new_cost) {
      return false;
    }
    if (this->finish_time != other.finish_time) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const BidProposal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BidProposal_

// alias to use template instance with default allocator
using BidProposal =
  rmf_task_msgs::msg::BidProposal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_HPP_
