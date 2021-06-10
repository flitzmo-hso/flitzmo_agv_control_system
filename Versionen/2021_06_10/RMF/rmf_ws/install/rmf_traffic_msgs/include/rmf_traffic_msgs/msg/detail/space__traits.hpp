// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Space.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/space__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'shape'
#include "rmf_traffic_msgs/msg/detail/shape__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Space>()
{
  return "rmf_traffic_msgs::msg::Space";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Space>()
{
  return "rmf_traffic_msgs/msg/Space";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Space>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<rmf_traffic_msgs::msg::Shape>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Space>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<rmf_traffic_msgs::msg::Shape>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Space>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__TRAITS_HPP_
