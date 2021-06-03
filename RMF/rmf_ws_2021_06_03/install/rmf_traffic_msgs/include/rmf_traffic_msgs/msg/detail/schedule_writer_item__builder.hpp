// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleWriterItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_WRITER_ITEM__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_WRITER_ITEM__BUILDER_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_writer_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleWriterItem_route
{
public:
  explicit Init_ScheduleWriterItem_route(::rmf_traffic_msgs::msg::ScheduleWriterItem & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleWriterItem route(::rmf_traffic_msgs::msg::ScheduleWriterItem::_route_type arg)
  {
    msg_.route = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleWriterItem msg_;
};

class Init_ScheduleWriterItem_id
{
public:
  Init_ScheduleWriterItem_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleWriterItem_route id(::rmf_traffic_msgs::msg::ScheduleWriterItem::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ScheduleWriterItem_route(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleWriterItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleWriterItem>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleWriterItem_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_WRITER_ITEM__BUILDER_HPP_
