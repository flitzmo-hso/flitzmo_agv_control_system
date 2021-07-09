// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__BUILDER_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleChangeAdd_route
{
public:
  explicit Init_ScheduleChangeAdd_route(::rmf_traffic_msgs::msg::ScheduleChangeAdd & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleChangeAdd route(::rmf_traffic_msgs::msg::ScheduleChangeAdd::_route_type arg)
  {
    msg_.route = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAdd msg_;
};

class Init_ScheduleChangeAdd_id
{
public:
  Init_ScheduleChangeAdd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleChangeAdd_route id(::rmf_traffic_msgs::msg::ScheduleChangeAdd::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ScheduleChangeAdd_route(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAdd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleChangeAdd_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__BUILDER_HPP_
