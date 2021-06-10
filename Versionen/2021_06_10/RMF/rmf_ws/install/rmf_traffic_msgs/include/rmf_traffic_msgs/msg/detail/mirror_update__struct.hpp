// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'patch'
#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__MirrorUpdate __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__MirrorUpdate __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MirrorUpdate_
{
  using Type = MirrorUpdate_<ContainerAllocator>;

  explicit MirrorUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : patch(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->database_version = 0ull;
    }
  }

  explicit MirrorUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : patch(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->database_version = 0ull;
    }
  }

  // field types and members
  using _query_id_type =
    uint64_t;
  _query_id_type query_id;
  using _database_version_type =
    uint64_t;
  _database_version_type database_version;
  using _patch_type =
    rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>;
  _patch_type patch;

  // setters for named parameter idiom
  Type & set__query_id(
    const uint64_t & _arg)
  {
    this->query_id = _arg;
    return *this;
  }
  Type & set__database_version(
    const uint64_t & _arg)
  {
    this->database_version = _arg;
    return *this;
  }
  Type & set__patch(
    const rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> & _arg)
  {
    this->patch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__MirrorUpdate
    std::shared_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__MirrorUpdate
    std::shared_ptr<rmf_traffic_msgs::msg::MirrorUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirrorUpdate_ & other) const
  {
    if (this->query_id != other.query_id) {
      return false;
    }
    if (this->database_version != other.database_version) {
      return false;
    }
    if (this->patch != other.patch) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirrorUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirrorUpdate_

// alias to use template instance with default allocator
using MirrorUpdate =
  rmf_traffic_msgs::msg::MirrorUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_HPP_
