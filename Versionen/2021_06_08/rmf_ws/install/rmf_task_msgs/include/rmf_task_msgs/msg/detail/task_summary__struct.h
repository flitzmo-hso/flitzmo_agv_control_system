// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/TaskSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_QUEUED'.
enum
{
  rmf_task_msgs__msg__TaskSummary__STATE_QUEUED = 0ul
};

/// Constant 'STATE_ACTIVE'.
enum
{
  rmf_task_msgs__msg__TaskSummary__STATE_ACTIVE = 1ul
};

/// Constant 'STATE_COMPLETED'.
enum
{
  rmf_task_msgs__msg__TaskSummary__STATE_COMPLETED = 2ul
};

/// Constant 'STATE_FAILED'.
enum
{
  rmf_task_msgs__msg__TaskSummary__STATE_FAILED = 3ul
};

/// Constant 'STATE_CANCELED'.
enum
{
  rmf_task_msgs__msg__TaskSummary__STATE_CANCELED = 4ul
};

/// Constant 'STATE_PENDING'.
enum
{
  rmf_task_msgs__msg__TaskSummary__STATE_PENDING = 5ul
};

// Include directives for member types
// Member 'fleet_name'
// Member 'task_id'
// Member 'status'
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__struct.h"
// Member 'submission_time'
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/TaskSummary in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__TaskSummary
{
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String task_id;
  rmf_task_msgs__msg__TaskProfile task_profile;
  uint32_t state;
  rosidl_runtime_c__String status;
  builtin_interfaces__msg__Time submission_time;
  builtin_interfaces__msg__Time start_time;
  builtin_interfaces__msg__Time end_time;
  rosidl_runtime_c__String robot_name;
} rmf_task_msgs__msg__TaskSummary;

// Struct for a sequence of rmf_task_msgs__msg__TaskSummary.
typedef struct rmf_task_msgs__msg__TaskSummary__Sequence
{
  rmf_task_msgs__msg__TaskSummary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__TaskSummary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__STRUCT_H_
