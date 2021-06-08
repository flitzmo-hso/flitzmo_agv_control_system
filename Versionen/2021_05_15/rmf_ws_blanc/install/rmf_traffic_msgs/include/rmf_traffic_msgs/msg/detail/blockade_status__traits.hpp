// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::BlockadeStatus>()
{
  return "rmf_traffic_msgs::msg::BlockadeStatus";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::BlockadeStatus>()
{
  return "rmf_traffic_msgs/msg/BlockadeStatus";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::BlockadeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::BlockadeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::BlockadeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__TRAITS_HPP_
