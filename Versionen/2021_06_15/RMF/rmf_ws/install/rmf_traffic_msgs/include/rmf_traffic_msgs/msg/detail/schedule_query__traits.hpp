// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'spacetime'
#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__traits.hpp"
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleQuery>()
{
  return "rmf_traffic_msgs::msg::ScheduleQuery";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleQuery>()
{
  return "rmf_traffic_msgs/msg/ScheduleQuery";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleQuery>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ScheduleQueryParticipants>::value && has_fixed_size<rmf_traffic_msgs::msg::ScheduleQuerySpacetime>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleQuery>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ScheduleQueryParticipants>::value && has_bounded_size<rmf_traffic_msgs::msg::ScheduleQuerySpacetime>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__TRAITS_HPP_
