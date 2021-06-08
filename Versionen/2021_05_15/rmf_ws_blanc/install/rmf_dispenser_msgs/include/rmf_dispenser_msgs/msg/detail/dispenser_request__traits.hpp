// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__TRAITS_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__TRAITS_HPP_

#include "rmf_dispenser_msgs/msg/detail/dispenser_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_dispenser_msgs::msg::DispenserRequest>()
{
  return "rmf_dispenser_msgs::msg::DispenserRequest";
}

template<>
inline const char * name<rmf_dispenser_msgs::msg::DispenserRequest>()
{
  return "rmf_dispenser_msgs/msg/DispenserRequest";
}

template<>
struct has_fixed_size<rmf_dispenser_msgs::msg::DispenserRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_dispenser_msgs::msg::DispenserRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_dispenser_msgs::msg::DispenserRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__TRAITS_HPP_
