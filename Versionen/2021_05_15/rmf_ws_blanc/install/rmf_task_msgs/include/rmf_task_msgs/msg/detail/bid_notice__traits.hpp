// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__TRAITS_HPP_

#include "rmf_task_msgs/msg/detail/bid_notice__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__traits.hpp"
// Member 'time_window'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::msg::BidNotice>()
{
  return "rmf_task_msgs::msg::BidNotice";
}

template<>
inline const char * name<rmf_task_msgs::msg::BidNotice>()
{
  return "rmf_task_msgs/msg/BidNotice";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::BidNotice>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<rmf_task_msgs::msg::TaskProfile>::value> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::BidNotice>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<rmf_task_msgs::msg::TaskProfile>::value> {};

template<>
struct is_message<rmf_task_msgs::msg::BidNotice>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__TRAITS_HPP_
