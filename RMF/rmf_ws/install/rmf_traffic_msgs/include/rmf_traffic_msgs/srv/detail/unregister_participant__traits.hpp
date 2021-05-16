// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__TRAITS_HPP_

#include "rmf_traffic_msgs/srv/detail/unregister_participant__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::UnregisterParticipant_Request>()
{
  return "rmf_traffic_msgs::srv::UnregisterParticipant_Request";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::UnregisterParticipant_Request>()
{
  return "rmf_traffic_msgs/srv/UnregisterParticipant_Request";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::UnregisterParticipant_Response>()
{
  return "rmf_traffic_msgs::srv::UnregisterParticipant_Response";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::UnregisterParticipant_Response>()
{
  return "rmf_traffic_msgs/srv/UnregisterParticipant_Response";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::UnregisterParticipant>()
{
  return "rmf_traffic_msgs::srv::UnregisterParticipant";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::UnregisterParticipant>()
{
  return "rmf_traffic_msgs/srv/UnregisterParticipant";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>::value &&
    has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>::value &&
    has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>::value
  >
{
};

template<>
struct is_service<rmf_traffic_msgs::srv::UnregisterParticipant>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__TRAITS_HPP_
