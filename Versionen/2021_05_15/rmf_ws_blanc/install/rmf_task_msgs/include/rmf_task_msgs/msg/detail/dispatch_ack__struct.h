// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dispatch_request'
#include "rmf_task_msgs/msg/detail/dispatch_request__struct.h"

// Struct defined in msg/DispatchAck in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__DispatchAck
{
  rmf_task_msgs__msg__DispatchRequest dispatch_request;
  bool success;
} rmf_task_msgs__msg__DispatchAck;

// Struct for a sequence of rmf_task_msgs__msg__DispatchAck.
typedef struct rmf_task_msgs__msg__DispatchAck__Sequence
{
  rmf_task_msgs__msg__DispatchAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__DispatchAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_H_
