// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/RequestChanges.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__BUILDER_HPP_

#include "rmf_traffic_msgs/msg/detail/request_changes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_RequestChanges_full_update
{
public:
  explicit Init_RequestChanges_full_update(::rmf_traffic_msgs::msg::RequestChanges & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::RequestChanges full_update(::rmf_traffic_msgs::msg::RequestChanges::_full_update_type arg)
  {
    msg_.full_update = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::RequestChanges msg_;
};

class Init_RequestChanges_version
{
public:
  explicit Init_RequestChanges_version(::rmf_traffic_msgs::msg::RequestChanges & msg)
  : msg_(msg)
  {}
  Init_RequestChanges_full_update version(::rmf_traffic_msgs::msg::RequestChanges::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RequestChanges_full_update(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::RequestChanges msg_;
};

class Init_RequestChanges_query_id
{
public:
  Init_RequestChanges_query_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestChanges_version query_id(::rmf_traffic_msgs::msg::RequestChanges::_query_id_type arg)
  {
    msg_.query_id = std::move(arg);
    return Init_RequestChanges_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::RequestChanges msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::RequestChanges>()
{
  return rmf_traffic_msgs::msg::builder::Init_RequestChanges_query_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__BUILDER_HPP_
