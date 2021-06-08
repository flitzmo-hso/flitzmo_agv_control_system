// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__TRAITS_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__TRAITS_HPP_

#include "rmf_task_msgs/srv/detail/submit_task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::SubmitTask_Request>()
{
  return "rmf_task_msgs::srv::SubmitTask_Request";
}

template<>
inline const char * name<rmf_task_msgs::srv::SubmitTask_Request>()
{
  return "rmf_task_msgs/srv/SubmitTask_Request";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::SubmitTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::SubmitTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::SubmitTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::SubmitTask_Response>()
{
  return "rmf_task_msgs::srv::SubmitTask_Response";
}

template<>
inline const char * name<rmf_task_msgs::srv::SubmitTask_Response>()
{
  return "rmf_task_msgs/srv/SubmitTask_Response";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::SubmitTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::SubmitTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::SubmitTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::SubmitTask>()
{
  return "rmf_task_msgs::srv::SubmitTask";
}

template<>
inline const char * name<rmf_task_msgs::srv::SubmitTask>()
{
  return "rmf_task_msgs/srv/SubmitTask";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::SubmitTask>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_task_msgs::srv::SubmitTask_Request>::value &&
    has_fixed_size<rmf_task_msgs::srv::SubmitTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_task_msgs::srv::SubmitTask>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_task_msgs::srv::SubmitTask_Request>::value &&
    has_bounded_size<rmf_task_msgs::srv::SubmitTask_Response>::value
  >
{
};

template<>
struct is_service<rmf_task_msgs::srv::SubmitTask>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_task_msgs::srv::SubmitTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_task_msgs::srv::SubmitTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__TRAITS_HPP_
