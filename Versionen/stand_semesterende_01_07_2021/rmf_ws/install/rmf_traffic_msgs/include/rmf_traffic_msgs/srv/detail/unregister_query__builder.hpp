// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:srv/UnregisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_QUERY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_QUERY__BUILDER_HPP_

#include "rmf_traffic_msgs/srv/detail/unregister_query__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_UnregisterQuery_Request_query_id
{
public:
  Init_UnregisterQuery_Request_query_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::srv::UnregisterQuery_Request query_id(::rmf_traffic_msgs::srv::UnregisterQuery_Request::_query_id_type arg)
  {
    msg_.query_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::UnregisterQuery_Request>()
{
  return rmf_traffic_msgs::srv::builder::Init_UnregisterQuery_Request_query_id();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_UnregisterQuery_Response_error
{
public:
  explicit Init_UnregisterQuery_Response_error(::rmf_traffic_msgs::srv::UnregisterQuery_Response & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::UnregisterQuery_Response error(::rmf_traffic_msgs::srv::UnregisterQuery_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterQuery_Response msg_;
};

class Init_UnregisterQuery_Response_confirmation
{
public:
  Init_UnregisterQuery_Response_confirmation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnregisterQuery_Response_error confirmation(::rmf_traffic_msgs::srv::UnregisterQuery_Response::_confirmation_type arg)
  {
    msg_.confirmation = std::move(arg);
    return Init_UnregisterQuery_Response_error(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::UnregisterQuery_Response>()
{
  return rmf_traffic_msgs::srv::builder::Init_UnregisterQuery_Response_confirmation();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_QUERY__BUILDER_HPP_
