// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__TRAITS_HPP_

#include "rmf_task_msgs/msg/detail/behavior__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::msg::Behavior>()
{
  return "rmf_task_msgs::msg::Behavior";
}

template<>
inline const char * name<rmf_task_msgs::msg::Behavior>()
{
  return "rmf_task_msgs/msg/Behavior";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::Behavior>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::Behavior>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::Behavior>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__TRAITS_HPP_
