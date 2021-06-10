// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__TRAITS_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__TRAITS_HPP_

#include "rmf_charger_msgs/msg/detail/charger_cancel__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_charger_msgs::msg::ChargerCancel>()
{
  return "rmf_charger_msgs::msg::ChargerCancel";
}

template<>
inline const char * name<rmf_charger_msgs::msg::ChargerCancel>()
{
  return "rmf_charger_msgs/msg/ChargerCancel";
}

template<>
struct has_fixed_size<rmf_charger_msgs::msg::ChargerCancel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_charger_msgs::msg::ChargerCancel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_charger_msgs::msg::ChargerCancel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__TRAITS_HPP_
