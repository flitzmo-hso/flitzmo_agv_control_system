// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__TRAITS_HPP_

#include "rmf_task_msgs/msg/detail/dispatch_ack__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'dispatch_request'
#include "rmf_task_msgs/msg/detail/dispatch_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::msg::DispatchAck>()
{
  return "rmf_task_msgs::msg::DispatchAck";
}

template<>
inline const char * name<rmf_task_msgs::msg::DispatchAck>()
{
  return "rmf_task_msgs/msg/DispatchAck";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::DispatchAck>
  : std::integral_constant<bool, has_fixed_size<rmf_task_msgs::msg::DispatchRequest>::value> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::DispatchAck>
  : std::integral_constant<bool, has_bounded_size<rmf_task_msgs::msg::DispatchRequest>::value> {};

template<>
struct is_message<rmf_task_msgs::msg::DispatchAck>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__TRAITS_HPP_
