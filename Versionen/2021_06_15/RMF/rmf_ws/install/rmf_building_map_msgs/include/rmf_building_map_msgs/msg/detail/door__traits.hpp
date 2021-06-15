// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__TRAITS_HPP_

#include "rmf_building_map_msgs/msg/detail/door__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Door>()
{
  return "rmf_building_map_msgs::msg::Door";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Door>()
{
  return "rmf_building_map_msgs/msg/Door";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Door>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Door>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Door>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__TRAITS_HPP_
