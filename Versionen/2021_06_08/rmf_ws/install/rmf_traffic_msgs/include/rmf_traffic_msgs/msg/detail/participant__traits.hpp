// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Participant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__TRAITS_HPP_

#include "rmf_traffic_msgs/msg/detail/participant__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'description'
#include "rmf_traffic_msgs/msg/detail/participant_description__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Participant>()
{
  return "rmf_traffic_msgs::msg::Participant";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Participant>()
{
  return "rmf_traffic_msgs/msg/Participant";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Participant>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ParticipantDescription>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Participant>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ParticipantDescription>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Participant>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__TRAITS_HPP_
