// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__BUILDER_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleInconsistency_last_known_version
{
public:
  explicit Init_ScheduleInconsistency_last_known_version(::rmf_traffic_msgs::msg::ScheduleInconsistency & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleInconsistency last_known_version(::rmf_traffic_msgs::msg::ScheduleInconsistency::_last_known_version_type arg)
  {
    msg_.last_known_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleInconsistency msg_;
};

class Init_ScheduleInconsistency_ranges
{
public:
  explicit Init_ScheduleInconsistency_ranges(::rmf_traffic_msgs::msg::ScheduleInconsistency & msg)
  : msg_(msg)
  {}
  Init_ScheduleInconsistency_last_known_version ranges(::rmf_traffic_msgs::msg::ScheduleInconsistency::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_ScheduleInconsistency_last_known_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleInconsistency msg_;
};

class Init_ScheduleInconsistency_participant
{
public:
  Init_ScheduleInconsistency_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleInconsistency_ranges participant(::rmf_traffic_msgs::msg::ScheduleInconsistency::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ScheduleInconsistency_ranges(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleInconsistency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleInconsistency>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleInconsistency_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__BUILDER_HPP_
