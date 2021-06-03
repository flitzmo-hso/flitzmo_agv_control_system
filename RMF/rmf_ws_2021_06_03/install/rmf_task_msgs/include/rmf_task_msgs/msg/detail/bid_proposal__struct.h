// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fleet_name'
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__struct.h"
// Member 'finish_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/BidProposal in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__BidProposal
{
  rosidl_runtime_c__String fleet_name;
  rmf_task_msgs__msg__TaskProfile task_profile;
  double prev_cost;
  double new_cost;
  builtin_interfaces__msg__Time finish_time;
  rosidl_runtime_c__String robot_name;
} rmf_task_msgs__msg__BidProposal;

// Struct for a sequence of rmf_task_msgs__msg__BidProposal.
typedef struct rmf_task_msgs__msg__BidProposal__Sequence
{
  rmf_task_msgs__msg__BidProposal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__BidProposal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_H_
