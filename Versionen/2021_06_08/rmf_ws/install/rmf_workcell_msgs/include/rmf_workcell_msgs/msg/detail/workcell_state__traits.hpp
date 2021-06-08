// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellState.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__TRAITS_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__TRAITS_HPP_

#include "rmf_workcell_msgs/msg/detail/workcell_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_workcell_msgs::msg::WorkcellState>()
{
  return "rmf_workcell_msgs::msg::WorkcellState";
}

template<>
inline const char * name<rmf_workcell_msgs::msg::WorkcellState>()
{
  return "rmf_workcell_msgs/msg/WorkcellState";
}

template<>
struct has_fixed_size<rmf_workcell_msgs::msg::WorkcellState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_workcell_msgs::msg::WorkcellState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_workcell_msgs::msg::WorkcellState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__TRAITS_HPP_
