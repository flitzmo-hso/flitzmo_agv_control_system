// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:srv/ReviveTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__STRUCT_H_
#define RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__STRUCT_H_

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

// Struct defined in srv/ReviveTask in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__ReviveTask_Request
{
  rosidl_runtime_c__String requester;
  rosidl_runtime_c__String task_id;
} rmf_task_msgs__srv__ReviveTask_Request;

// Struct for a sequence of rmf_task_msgs__srv__ReviveTask_Request.
typedef struct rmf_task_msgs__srv__ReviveTask_Request__Sequence
{
  rmf_task_msgs__srv__ReviveTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__ReviveTask_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ReviveTask in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__ReviveTask_Response
{
  bool success;
} rmf_task_msgs__srv__ReviveTask_Response;

// Struct for a sequence of rmf_task_msgs__srv__ReviveTask_Response.
typedef struct rmf_task_msgs__srv__ReviveTask_Response__Sequence
{
  rmf_task_msgs__srv__ReviveTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__ReviveTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__STRUCT_H_
