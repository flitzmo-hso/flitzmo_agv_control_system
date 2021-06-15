// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__BUILDER_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__BUILDER_HPP_

#include "rmf_task_msgs/srv/detail/get_task_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTaskList_Request_task_id
{
public:
  explicit Init_GetTaskList_Request_task_id(::rmf_task_msgs::srv::GetTaskList_Request & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::GetTaskList_Request task_id(::rmf_task_msgs::srv::GetTaskList_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetTaskList_Request msg_;
};

class Init_GetTaskList_Request_requester
{
public:
  Init_GetTaskList_Request_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTaskList_Request_task_id requester(::rmf_task_msgs::srv::GetTaskList_Request::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return Init_GetTaskList_Request_task_id(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetTaskList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::GetTaskList_Request>()
{
  return rmf_task_msgs::srv::builder::Init_GetTaskList_Request_requester();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTaskList_Response_terminated_tasks
{
public:
  explicit Init_GetTaskList_Response_terminated_tasks(::rmf_task_msgs::srv::GetTaskList_Response & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::GetTaskList_Response terminated_tasks(::rmf_task_msgs::srv::GetTaskList_Response::_terminated_tasks_type arg)
  {
    msg_.terminated_tasks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetTaskList_Response msg_;
};

class Init_GetTaskList_Response_active_tasks
{
public:
  explicit Init_GetTaskList_Response_active_tasks(::rmf_task_msgs::srv::GetTaskList_Response & msg)
  : msg_(msg)
  {}
  Init_GetTaskList_Response_terminated_tasks active_tasks(::rmf_task_msgs::srv::GetTaskList_Response::_active_tasks_type arg)
  {
    msg_.active_tasks = std::move(arg);
    return Init_GetTaskList_Response_terminated_tasks(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetTaskList_Response msg_;
};

class Init_GetTaskList_Response_success
{
public:
  Init_GetTaskList_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTaskList_Response_active_tasks success(::rmf_task_msgs::srv::GetTaskList_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetTaskList_Response_active_tasks(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetTaskList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::GetTaskList_Response>()
{
  return rmf_task_msgs::srv::builder::Init_GetTaskList_Response_success();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__BUILDER_HPP_
