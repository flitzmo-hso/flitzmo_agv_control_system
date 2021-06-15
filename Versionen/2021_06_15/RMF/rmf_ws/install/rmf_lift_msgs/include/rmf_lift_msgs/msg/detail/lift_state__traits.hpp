// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__TRAITS_HPP_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__TRAITS_HPP_

#include "rmf_lift_msgs/msg/detail/lift_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'lift_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_lift_msgs::msg::LiftState>()
{
  return "rmf_lift_msgs::msg::LiftState";
}

template<>
inline const char * name<rmf_lift_msgs::msg::LiftState>()
{
  return "rmf_lift_msgs/msg/LiftState";
}

template<>
struct has_fixed_size<rmf_lift_msgs::msg::LiftState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_lift_msgs::msg::LiftState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_lift_msgs::msg::LiftState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__TRAITS_HPP_
