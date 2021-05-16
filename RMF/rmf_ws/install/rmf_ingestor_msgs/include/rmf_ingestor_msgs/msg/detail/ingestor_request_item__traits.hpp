// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__TRAITS_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__TRAITS_HPP_

#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_ingestor_msgs::msg::IngestorRequestItem>()
{
  return "rmf_ingestor_msgs::msg::IngestorRequestItem";
}

template<>
inline const char * name<rmf_ingestor_msgs::msg::IngestorRequestItem>()
{
  return "rmf_ingestor_msgs/msg/IngestorRequestItem";
}

template<>
struct has_fixed_size<rmf_ingestor_msgs::msg::IngestorRequestItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_ingestor_msgs::msg::IngestorRequestItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_ingestor_msgs::msg::IngestorRequestItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__TRAITS_HPP_
