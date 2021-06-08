// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__BUILDER_HPP_

#include "rmf_task_msgs/msg/detail/bid_notice__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_BidNotice_time_window
{
public:
  explicit Init_BidNotice_time_window(::rmf_task_msgs::msg::BidNotice & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::BidNotice time_window(::rmf_task_msgs::msg::BidNotice::_time_window_type arg)
  {
    msg_.time_window = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidNotice msg_;
};

class Init_BidNotice_task_profile
{
public:
  Init_BidNotice_task_profile()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BidNotice_time_window task_profile(::rmf_task_msgs::msg::BidNotice::_task_profile_type arg)
  {
    msg_.task_profile = std::move(arg);
    return Init_BidNotice_time_window(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidNotice msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::BidNotice>()
{
  return rmf_task_msgs::msg::builder::Init_BidNotice_task_profile();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__BUILDER_HPP_
