// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeCull.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_CULL__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_CULL__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleChangeCull>()
{
  return "rmf_traffic_msgs::msg::ScheduleChangeCull";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleChangeCull>()
{
  return "rmf_traffic_msgs/msg/ScheduleChangeCull";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleChangeCull>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleChangeCull>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleChangeCull>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_CULL__TRAITS_HPP_
