// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/RequestChanges.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__RequestChanges __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__RequestChanges __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RequestChanges_
{
  using Type = RequestChanges_<ContainerAllocator>;

  explicit RequestChanges_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->full_update = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->query_id = 0ull;
      this->version = 0ull;
      this->full_update = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->version = 0ull;
    }
  }

  explicit RequestChanges_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->full_update = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->query_id = 0ull;
      this->version = 0ull;
      this->full_update = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->version = 0ull;
    }
  }

  // field types and members
  using _query_id_type =
    uint64_t;
  _query_id_type query_id;
  using _version_type =
    uint64_t;
  _version_type version;
  using _full_update_type =
    bool;
  _full_update_type full_update;

  // setters for named parameter idiom
  Type & set__query_id(
    const uint64_t & _arg)
  {
    this->query_id = _arg;
    return *this;
  }
  Type & set__version(
    const uint64_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__full_update(
    const bool & _arg)
  {
    this->full_update = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__RequestChanges
    std::shared_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__RequestChanges
    std::shared_ptr<rmf_traffic_msgs::msg::RequestChanges_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestChanges_ & other) const
  {
    if (this->query_id != other.query_id) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->full_update != other.full_update) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestChanges_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestChanges_

// alias to use template instance with default allocator
using RequestChanges =
  rmf_traffic_msgs::msg::RequestChanges_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__STRUCT_HPP_
