// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__TRAITS_HPP_

#include "rmf_traffic_msgs/srv/detail/register_query__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'query'
#include "rmf_traffic_msgs/msg/detail/schedule_query__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterQuery_Request>()
{
  return "rmf_traffic_msgs::srv::RegisterQuery_Request";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterQuery_Request>()
{
  return "rmf_traffic_msgs/srv/RegisterQuery_Request";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ScheduleQuery>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ScheduleQuery>::value> {};

template<>
struct is_message<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterQuery_Response>()
{
  return "rmf_traffic_msgs::srv::RegisterQuery_Response";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterQuery_Response>()
{
  return "rmf_traffic_msgs/srv/RegisterQuery_Response";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterQuery>()
{
  return "rmf_traffic_msgs::srv::RegisterQuery";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterQuery>()
{
  return "rmf_traffic_msgs/srv/RegisterQuery";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Request>::value &&
    has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Request>::value &&
    has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Response>::value
  >
{
};

template<>
struct is_service<rmf_traffic_msgs::srv::RegisterQuery>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__TRAITS_HPP_
