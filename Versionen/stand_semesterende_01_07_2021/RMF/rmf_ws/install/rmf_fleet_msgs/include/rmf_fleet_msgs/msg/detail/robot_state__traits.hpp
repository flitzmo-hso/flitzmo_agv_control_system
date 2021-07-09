// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include "rmf_fleet_msgs/msg/detail/robot_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'mode'
#include "rmf_fleet_msgs/msg/detail/robot_mode__traits.hpp"
// Member 'location'
#include "rmf_fleet_msgs/msg/detail/location__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_fleet_msgs::msg::RobotState>()
{
  return "rmf_fleet_msgs::msg::RobotState";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::RobotState>()
{
  return "rmf_fleet_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
