// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__BUILDER_HPP_

#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_MirrorUpdate_patch
{
public:
  explicit Init_MirrorUpdate_patch(::rmf_traffic_msgs::msg::MirrorUpdate & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::MirrorUpdate patch(::rmf_traffic_msgs::msg::MirrorUpdate::_patch_type arg)
  {
    msg_.patch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::MirrorUpdate msg_;
};

class Init_MirrorUpdate_database_version
{
public:
  explicit Init_MirrorUpdate_database_version(::rmf_traffic_msgs::msg::MirrorUpdate & msg)
  : msg_(msg)
  {}
  Init_MirrorUpdate_patch database_version(::rmf_traffic_msgs::msg::MirrorUpdate::_database_version_type arg)
  {
    msg_.database_version = std::move(arg);
    return Init_MirrorUpdate_patch(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::MirrorUpdate msg_;
};

class Init_MirrorUpdate_query_id
{
public:
  Init_MirrorUpdate_query_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MirrorUpdate_database_version query_id(::rmf_traffic_msgs::msg::MirrorUpdate::_query_id_type arg)
  {
    msg_.query_id = std::move(arg);
    return Init_MirrorUpdate_database_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::MirrorUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::MirrorUpdate>()
{
  return rmf_traffic_msgs::msg::builder::Init_MirrorUpdate_query_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__BUILDER_HPP_
