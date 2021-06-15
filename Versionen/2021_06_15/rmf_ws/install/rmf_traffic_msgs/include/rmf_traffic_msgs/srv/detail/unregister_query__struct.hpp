// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:srv/UnregisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_QUERY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_QUERY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Request __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnregisterQuery_Request_
{
  using Type = UnregisterQuery_Request_<ContainerAllocator>;

  explicit UnregisterQuery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
    }
  }

  explicit UnregisterQuery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
    }
  }

  // field types and members
  using _query_id_type =
    uint64_t;
  _query_id_type query_id;

  // setters for named parameter idiom
  Type & set__query_id(
    const uint64_t & _arg)
  {
    this->query_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Request
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Request
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnregisterQuery_Request_ & other) const
  {
    if (this->query_id != other.query_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnregisterQuery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnregisterQuery_Request_

// alias to use template instance with default allocator
using UnregisterQuery_Request =
  rmf_traffic_msgs::srv::UnregisterQuery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Response __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnregisterQuery_Response_
{
  using Type = UnregisterQuery_Response_<ContainerAllocator>;

  explicit UnregisterQuery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirmation = false;
      this->error = "";
    }
  }

  explicit UnregisterQuery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirmation = false;
      this->error = "";
    }
  }

  // field types and members
  using _confirmation_type =
    bool;
  _confirmation_type confirmation;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__confirmation(
    const bool & _arg)
  {
    this->confirmation = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Response
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterQuery_Response
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterQuery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnregisterQuery_Response_ & other) const
  {
    if (this->confirmation != other.confirmation) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnregisterQuery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnregisterQuery_Response_

// alias to use template instance with default allocator
using UnregisterQuery_Response =
  rmf_traffic_msgs::srv::UnregisterQuery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs

namespace rmf_traffic_msgs
{

namespace srv
{

struct UnregisterQuery
{
  using Request = rmf_traffic_msgs::srv::UnregisterQuery_Request;
  using Response = rmf_traffic_msgs::srv::UnregisterQuery_Response;
};

}  // namespace srv

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_QUERY__STRUCT_HPP_
