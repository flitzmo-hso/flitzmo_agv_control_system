// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__GetTaskList_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__GetTaskList_Request __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTaskList_Request_
{
  using Type = GetTaskList_Request_<ContainerAllocator>;

  explicit GetTaskList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
    }
  }

  explicit GetTaskList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
    }
  }

  // field types and members
  using _requester_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _requester_type requester;
  using _task_id_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__requester(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->requester = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__GetTaskList_Request
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__GetTaskList_Request
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTaskList_Request_ & other) const
  {
    if (this->requester != other.requester) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTaskList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTaskList_Request_

// alias to use template instance with default allocator
using GetTaskList_Request =
  rmf_task_msgs::srv::GetTaskList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs


// Include directives for member types
// Member 'active_tasks'
// Member 'terminated_tasks'
#include "rmf_task_msgs/msg/detail/task_summary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__GetTaskList_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__GetTaskList_Response __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTaskList_Response_
{
  using Type = GetTaskList_Response_<ContainerAllocator>;

  explicit GetTaskList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetTaskList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _active_tasks_type =
    std::vector<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, typename ContainerAllocator::template rebind<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>::other>;
  _active_tasks_type active_tasks;
  using _terminated_tasks_type =
    std::vector<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, typename ContainerAllocator::template rebind<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>::other>;
  _terminated_tasks_type terminated_tasks;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__active_tasks(
    const std::vector<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, typename ContainerAllocator::template rebind<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>::other> & _arg)
  {
    this->active_tasks = _arg;
    return *this;
  }
  Type & set__terminated_tasks(
    const std::vector<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, typename ContainerAllocator::template rebind<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>::other> & _arg)
  {
    this->terminated_tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__GetTaskList_Response
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__GetTaskList_Response
    std::shared_ptr<rmf_task_msgs::srv::GetTaskList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTaskList_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->active_tasks != other.active_tasks) {
      return false;
    }
    if (this->terminated_tasks != other.terminated_tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTaskList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTaskList_Response_

// alias to use template instance with default allocator
using GetTaskList_Response =
  rmf_task_msgs::srv::GetTaskList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{

namespace srv
{

struct GetTaskList
{
  using Request = rmf_task_msgs::srv::GetTaskList_Request;
  using Response = rmf_task_msgs::srv::GetTaskList_Response;
};

}  // namespace srv

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_HPP_
