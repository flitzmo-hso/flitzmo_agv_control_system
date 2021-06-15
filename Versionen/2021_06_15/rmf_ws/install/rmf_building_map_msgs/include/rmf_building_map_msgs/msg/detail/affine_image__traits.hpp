// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__TRAITS_HPP_

#include "rmf_building_map_msgs/msg/detail/affine_image__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::msg::AffineImage>()
{
  return "rmf_building_map_msgs::msg::AffineImage";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::AffineImage>()
{
  return "rmf_building_map_msgs/msg/AffineImage";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::AffineImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::AffineImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::AffineImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__TRAITS_HPP_
