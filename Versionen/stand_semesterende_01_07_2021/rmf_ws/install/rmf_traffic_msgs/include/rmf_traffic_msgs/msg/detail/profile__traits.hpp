// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/profile__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'footprint'
// Member 'vicinity'
#include "rmf_traffic_msgs/msg/detail/convex_shape__traits.hpp"
// Member 'shape_context'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Profile>()
{
  return "rmf_traffic_msgs::msg::Profile";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Profile>()
{
  return "rmf_traffic_msgs/msg/Profile";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Profile>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ConvexShape>::value && has_fixed_size<rmf_traffic_msgs::msg::ConvexShapeContext>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Profile>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ConvexShape>::value && has_bounded_size<rmf_traffic_msgs::msg::ConvexShapeContext>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Profile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__TRAITS_HPP_
