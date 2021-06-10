// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__struct.h"
// Member 'time_window'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/BidNotice in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__BidNotice
{
  rmf_task_msgs__msg__TaskProfile task_profile;
  builtin_interfaces__msg__Duration time_window;
} rmf_task_msgs__msg__BidNotice;

// Struct for a sequence of rmf_task_msgs__msg__BidNotice.
typedef struct rmf_task_msgs__msg__BidNotice__Sequence
{
  rmf_task_msgs__msg__BidNotice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__BidNotice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_H_
