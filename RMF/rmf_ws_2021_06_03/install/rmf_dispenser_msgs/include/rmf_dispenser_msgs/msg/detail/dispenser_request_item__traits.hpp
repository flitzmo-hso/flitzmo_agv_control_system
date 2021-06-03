// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__TRAITS_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__TRAITS_HPP_

#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_dispenser_msgs::msg::DispenserRequestItem>()
{
  return "rmf_dispenser_msgs::msg::DispenserRequestItem";
}

template<>
inline const char * name<rmf_dispenser_msgs::msg::DispenserRequestItem>()
{
  return "rmf_dispenser_msgs/msg/DispenserRequestItem";
}

template<>
struct has_fixed_size<rmf_dispenser_msgs::msg::DispenserRequestItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_dispenser_msgs::msg::DispenserRequestItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_dispenser_msgs::msg::DispenserRequestItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__TRAITS_HPP_
