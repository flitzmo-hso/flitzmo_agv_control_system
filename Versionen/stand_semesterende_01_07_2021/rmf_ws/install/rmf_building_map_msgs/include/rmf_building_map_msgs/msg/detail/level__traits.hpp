// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__TRAITS_HPP_

#include "rmf_building_map_msgs/msg/detail/level__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Level>()
{
  return "rmf_building_map_msgs::msg::Level";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Level>()
{
  return "rmf_building_map_msgs/msg/Level";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Level>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Level>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Level>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__TRAITS_HPP_
