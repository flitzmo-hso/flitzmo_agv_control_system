// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__TRAITS_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__TRAITS_HPP_

#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_door_msgs::msg::SupervisorHeartbeat>()
{
  return "rmf_door_msgs::msg::SupervisorHeartbeat";
}

template<>
inline const char * name<rmf_door_msgs::msg::SupervisorHeartbeat>()
{
  return "rmf_door_msgs/msg/SupervisorHeartbeat";
}

template<>
struct has_fixed_size<rmf_door_msgs::msg::SupervisorHeartbeat>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_door_msgs::msg::SupervisorHeartbeat>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_door_msgs::msg::SupervisorHeartbeat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__TRAITS_HPP_
