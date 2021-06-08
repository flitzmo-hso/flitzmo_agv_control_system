// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/shape__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Shape>()
{
  return "rmf_traffic_msgs::msg::Shape";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Shape>()
{
  return "rmf_traffic_msgs/msg/Shape";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Shape>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Shape>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Shape>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_
