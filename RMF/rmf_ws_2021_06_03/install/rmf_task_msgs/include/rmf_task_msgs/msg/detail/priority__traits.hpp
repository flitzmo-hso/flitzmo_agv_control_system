// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__PRIORITY__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__PRIORITY__TRAITS_HPP_

#include "rmf_task_msgs/msg/detail/priority__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::msg::Priority>()
{
  return "rmf_task_msgs::msg::Priority";
}

template<>
inline const char * name<rmf_task_msgs::msg::Priority>()
{
  return "rmf_task_msgs/msg/Priority";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::Priority>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::Priority>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_task_msgs::msg::Priority>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__PRIORITY__TRAITS_HPP_
