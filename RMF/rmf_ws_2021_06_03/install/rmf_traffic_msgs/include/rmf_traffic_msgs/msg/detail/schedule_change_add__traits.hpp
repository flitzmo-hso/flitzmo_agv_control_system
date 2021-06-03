// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'route'
#include "rmf_traffic_msgs/msg/detail/route__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return "rmf_traffic_msgs::msg::ScheduleChangeAdd";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return "rmf_traffic_msgs/msg/ScheduleChangeAdd";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleChangeAdd>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::Route>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleChangeAdd>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::Route>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleChangeAdd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__TRAITS_HPP_
