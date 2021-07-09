// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__BUILDER_HPP_

#include "rmf_task_msgs/msg/detail/dispatch_ack__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_DispatchAck_success
{
public:
  explicit Init_DispatchAck_success(::rmf_task_msgs::msg::DispatchAck & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::DispatchAck success(::rmf_task_msgs::msg::DispatchAck::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchAck msg_;
};

class Init_DispatchAck_dispatch_request
{
public:
  Init_DispatchAck_dispatch_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispatchAck_success dispatch_request(::rmf_task_msgs::msg::DispatchAck::_dispatch_request_type arg)
  {
    msg_.dispatch_request = std::move(arg);
    return Init_DispatchAck_success(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::DispatchAck>()
{
  return rmf_task_msgs::msg::builder::Init_DispatchAck_dispatch_request();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__BUILDER_HPP_
