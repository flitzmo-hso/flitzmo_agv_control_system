// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/TaskSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__TRAITS_HPP_

#include "rmf_task_msgs/msg/detail/task_summary__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__traits.hpp"
// Member 'submission_time'
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::msg::TaskSummary>()
{
  return "rmf_task_msgs::msg::TaskSummary";
}

template<>
inline const char * name<rmf_task_msgs::msg::TaskSummary>()
{
  return "rmf_task_msgs/msg/TaskSummary";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::TaskSummary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::TaskSummary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::TaskSummary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__TRAITS_HPP_
