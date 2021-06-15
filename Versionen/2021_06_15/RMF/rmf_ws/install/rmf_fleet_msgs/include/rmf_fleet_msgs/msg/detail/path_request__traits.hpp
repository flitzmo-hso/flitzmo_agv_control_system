// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/PathRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__PATH_REQUEST__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__PATH_REQUEST__TRAITS_HPP_

#include "rmf_fleet_msgs/msg/detail/path_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_fleet_msgs::msg::PathRequest>()
{
  return "rmf_fleet_msgs::msg::PathRequest";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::PathRequest>()
{
  return "rmf_fleet_msgs/msg/PathRequest";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::PathRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::PathRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::PathRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__PATH_REQUEST__TRAITS_HPP_
