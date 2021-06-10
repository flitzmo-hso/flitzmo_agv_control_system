// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#ifndef RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__TRAITS_HPP_
#define RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__TRAITS_HPP_

#include "rmf_visualization_msgs/msg/detail/rviz_param__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_visualization_msgs::msg::RvizParam>()
{
  return "rmf_visualization_msgs::msg::RvizParam";
}

template<>
inline const char * name<rmf_visualization_msgs::msg::RvizParam>()
{
  return "rmf_visualization_msgs/msg/RvizParam";
}

template<>
struct has_fixed_size<rmf_visualization_msgs::msg::RvizParam>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_visualization_msgs::msg::RvizParam>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_visualization_msgs::msg::RvizParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__TRAITS_HPP_
