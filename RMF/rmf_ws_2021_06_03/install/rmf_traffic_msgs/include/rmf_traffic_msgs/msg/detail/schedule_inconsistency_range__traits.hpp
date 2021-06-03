// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistencyRange.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>()
{
  return "rmf_traffic_msgs::msg::ScheduleInconsistencyRange";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>()
{
  return "rmf_traffic_msgs/msg/ScheduleInconsistencyRange";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__TRAITS_HPP_
