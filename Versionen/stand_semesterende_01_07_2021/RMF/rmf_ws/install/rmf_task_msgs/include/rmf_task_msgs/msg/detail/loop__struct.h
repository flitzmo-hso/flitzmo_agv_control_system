// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Loop.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'robot_type'
// Member 'start_name'
// Member 'finish_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Loop in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__Loop
{
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String robot_type;
  uint32_t num_loops;
  rosidl_runtime_c__String start_name;
  rosidl_runtime_c__String finish_name;
} rmf_task_msgs__msg__Loop;

// Struct for a sequence of rmf_task_msgs__msg__Loop.
typedef struct rmf_task_msgs__msg__Loop__Sequence
{
  rmf_task_msgs__msg__Loop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Loop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_H_
