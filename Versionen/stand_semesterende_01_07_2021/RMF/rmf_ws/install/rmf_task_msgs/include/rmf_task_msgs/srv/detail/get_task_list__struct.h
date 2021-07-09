// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_H_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'requester'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetTaskList in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__GetTaskList_Request
{
  rosidl_runtime_c__String requester;
  rosidl_runtime_c__String__Sequence task_id;
} rmf_task_msgs__srv__GetTaskList_Request;

// Struct for a sequence of rmf_task_msgs__srv__GetTaskList_Request.
typedef struct rmf_task_msgs__srv__GetTaskList_Request__Sequence
{
  rmf_task_msgs__srv__GetTaskList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__GetTaskList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'active_tasks'
// Member 'terminated_tasks'
#include "rmf_task_msgs/msg/detail/task_summary__struct.h"

// Struct defined in srv/GetTaskList in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__GetTaskList_Response
{
  bool success;
  rmf_task_msgs__msg__TaskSummary__Sequence active_tasks;
  rmf_task_msgs__msg__TaskSummary__Sequence terminated_tasks;
} rmf_task_msgs__srv__GetTaskList_Response;

// Struct for a sequence of rmf_task_msgs__srv__GetTaskList_Response.
typedef struct rmf_task_msgs__srv__GetTaskList_Response__Sequence
{
  rmf_task_msgs__srv__GetTaskList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__GetTaskList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__STRUCT_H_
