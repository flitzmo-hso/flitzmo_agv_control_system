// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Place.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__TRAITS_HPP_

#include "rmf_building_map_msgs/msg/detail/place__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Place>()
{
  return "rmf_building_map_msgs::msg::Place";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Place>()
{
  return "rmf_building_map_msgs/msg/Place";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Place>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Place>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Place>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__TRAITS_HPP_
