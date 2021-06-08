// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/DispatchRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__BUILDER_HPP_

#include "rmf_task_msgs/msg/detail/dispatch_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_DispatchRequest_method
{
public:
  explicit Init_DispatchRequest_method(::rmf_task_msgs::msg::DispatchRequest & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::DispatchRequest method(::rmf_task_msgs::msg::DispatchRequest::_method_type arg)
  {
    msg_.method = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchRequest msg_;
};

class Init_DispatchRequest_task_profile
{
public:
  explicit Init_DispatchRequest_task_profile(::rmf_task_msgs::msg::DispatchRequest & msg)
  : msg_(msg)
  {}
  Init_DispatchRequest_method task_profile(::rmf_task_msgs::msg::DispatchRequest::_task_profile_type arg)
  {
    msg_.task_profile = std::move(arg);
    return Init_DispatchRequest_method(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchRequest msg_;
};

class Init_DispatchRequest_fleet_name
{
public:
  Init_DispatchRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispatchRequest_task_profile fleet_name(::rmf_task_msgs::msg::DispatchRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_DispatchRequest_task_profile(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::DispatchRequest>()
{
  return rmf_task_msgs::msg::builder::Init_DispatchRequest_fleet_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__BUILDER_HPP_
