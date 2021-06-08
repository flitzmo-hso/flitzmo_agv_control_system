// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_

#include "rmf_task_msgs/msg/detail/task_description__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'priority'
#include "rmf_task_msgs/msg/detail/priority__traits.hpp"
// Member 'task_type'
#include "rmf_task_msgs/msg/detail/task_type__traits.hpp"
// Member 'station'
#include "rmf_task_msgs/msg/detail/station__traits.hpp"
// Member 'loop'
#include "rmf_task_msgs/msg/detail/loop__traits.hpp"
// Member 'delivery'
#include "rmf_task_msgs/msg/detail/delivery__traits.hpp"
// Member 'clean'
#include "rmf_task_msgs/msg/detail/clean__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::msg::TaskDescription>()
{
  return "rmf_task_msgs::msg::TaskDescription";
}

template<>
inline const char * name<rmf_task_msgs::msg::TaskDescription>()
{
  return "rmf_task_msgs/msg/TaskDescription";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::TaskDescription>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<rmf_task_msgs::msg::Clean>::value && has_fixed_size<rmf_task_msgs::msg::Delivery>::value && has_fixed_size<rmf_task_msgs::msg::Loop>::value && has_fixed_size<rmf_task_msgs::msg::Priority>::value && has_fixed_size<rmf_task_msgs::msg::Station>::value && has_fixed_size<rmf_task_msgs::msg::TaskType>::value> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::TaskDescription>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<rmf_task_msgs::msg::Clean>::value && has_bounded_size<rmf_task_msgs::msg::Delivery>::value && has_bounded_size<rmf_task_msgs::msg::Loop>::value && has_bounded_size<rmf_task_msgs::msg::Priority>::value && has_bounded_size<rmf_task_msgs::msg::Station>::value && has_bounded_size<rmf_task_msgs::msg::TaskType>::value> {};

template<>
struct is_message<rmf_task_msgs::msg::TaskDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_
