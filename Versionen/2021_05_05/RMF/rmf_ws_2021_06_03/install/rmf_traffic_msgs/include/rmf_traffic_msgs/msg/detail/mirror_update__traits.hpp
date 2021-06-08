// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'patch'
#include "rmf_traffic_msgs/msg/detail/schedule_patch__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::MirrorUpdate>()
{
  return "rmf_traffic_msgs::msg::MirrorUpdate";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::MirrorUpdate>()
{
  return "rmf_traffic_msgs/msg/MirrorUpdate";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::MirrorUpdate>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::SchedulePatch>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::MirrorUpdate>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::SchedulePatch>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::MirrorUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__TRAITS_HPP_
