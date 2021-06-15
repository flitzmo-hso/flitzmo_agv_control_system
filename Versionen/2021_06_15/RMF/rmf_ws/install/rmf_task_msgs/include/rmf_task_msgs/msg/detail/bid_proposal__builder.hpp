// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__BUILDER_HPP_

#include "rmf_task_msgs/msg/detail/bid_proposal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_BidProposal_robot_name
{
public:
  explicit Init_BidProposal_robot_name(::rmf_task_msgs::msg::BidProposal & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::BidProposal robot_name(::rmf_task_msgs::msg::BidProposal::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidProposal msg_;
};

class Init_BidProposal_finish_time
{
public:
  explicit Init_BidProposal_finish_time(::rmf_task_msgs::msg::BidProposal & msg)
  : msg_(msg)
  {}
  Init_BidProposal_robot_name finish_time(::rmf_task_msgs::msg::BidProposal::_finish_time_type arg)
  {
    msg_.finish_time = std::move(arg);
    return Init_BidProposal_robot_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidProposal msg_;
};

class Init_BidProposal_new_cost
{
public:
  explicit Init_BidProposal_new_cost(::rmf_task_msgs::msg::BidProposal & msg)
  : msg_(msg)
  {}
  Init_BidProposal_finish_time new_cost(::rmf_task_msgs::msg::BidProposal::_new_cost_type arg)
  {
    msg_.new_cost = std::move(arg);
    return Init_BidProposal_finish_time(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidProposal msg_;
};

class Init_BidProposal_prev_cost
{
public:
  explicit Init_BidProposal_prev_cost(::rmf_task_msgs::msg::BidProposal & msg)
  : msg_(msg)
  {}
  Init_BidProposal_new_cost prev_cost(::rmf_task_msgs::msg::BidProposal::_prev_cost_type arg)
  {
    msg_.prev_cost = std::move(arg);
    return Init_BidProposal_new_cost(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidProposal msg_;
};

class Init_BidProposal_task_profile
{
public:
  explicit Init_BidProposal_task_profile(::rmf_task_msgs::msg::BidProposal & msg)
  : msg_(msg)
  {}
  Init_BidProposal_prev_cost task_profile(::rmf_task_msgs::msg::BidProposal::_task_profile_type arg)
  {
    msg_.task_profile = std::move(arg);
    return Init_BidProposal_prev_cost(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidProposal msg_;
};

class Init_BidProposal_fleet_name
{
public:
  Init_BidProposal_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BidProposal_task_profile fleet_name(::rmf_task_msgs::msg::BidProposal::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_BidProposal_task_profile(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidProposal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::BidProposal>()
{
  return rmf_task_msgs::msg::builder::Init_BidProposal_fleet_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__BUILDER_HPP_
