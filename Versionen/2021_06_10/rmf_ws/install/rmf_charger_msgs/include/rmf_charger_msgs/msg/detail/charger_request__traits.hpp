// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__TRAITS_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__TRAITS_HPP_

#include "rmf_charger_msgs/msg/detail/charger_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_charger_msgs::msg::ChargerRequest>()
{
  return "rmf_charger_msgs::msg::ChargerRequest";
}

template<>
inline const char * name<rmf_charger_msgs::msg::ChargerRequest>()
{
  return "rmf_charger_msgs/msg/ChargerRequest";
}

template<>
struct has_fixed_size<rmf_charger_msgs::msg::ChargerRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_charger_msgs::msg::ChargerRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_charger_msgs::msg::ChargerRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__TRAITS_HPP_
