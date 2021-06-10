// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__TRAITS_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__TRAITS_HPP_

#include "rmf_task_msgs/srv/detail/get_task_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::GetTaskList_Request>()
{
  return "rmf_task_msgs::srv::GetTaskList_Request";
}

template<>
inline const char * name<rmf_task_msgs::srv::GetTaskList_Request>()
{
  return "rmf_task_msgs/srv/GetTaskList_Request";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::GetTaskList_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::GetTaskList_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::GetTaskList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::GetTaskList_Response>()
{
  return "rmf_task_msgs::srv::GetTaskList_Response";
}

template<>
inline const char * name<rmf_task_msgs::srv::GetTaskList_Response>()
{
  return "rmf_task_msgs/srv/GetTaskList_Response";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::GetTaskList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::GetTaskList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::GetTaskList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::GetTaskList>()
{
  return "rmf_task_msgs::srv::GetTaskList";
}

template<>
inline const char * name<rmf_task_msgs::srv::GetTaskList>()
{
  return "rmf_task_msgs/srv/GetTaskList";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::GetTaskList>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_task_msgs::srv::GetTaskList_Request>::value &&
    has_fixed_size<rmf_task_msgs::srv::GetTaskList_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_task_msgs::srv::GetTaskList>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_task_msgs::srv::GetTaskList_Request>::value &&
    has_bounded_size<rmf_task_msgs::srv::GetTaskList_Response>::value
  >
{
};

template<>
struct is_service<rmf_task_msgs::srv::GetTaskList>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_task_msgs::srv::GetTaskList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_task_msgs::srv::GetTaskList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__TRAITS_HPP_
