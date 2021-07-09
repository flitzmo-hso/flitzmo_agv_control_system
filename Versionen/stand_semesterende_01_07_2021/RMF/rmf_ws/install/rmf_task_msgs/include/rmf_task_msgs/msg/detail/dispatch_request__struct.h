// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/DispatchRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  rmf_task_msgs__msg__DispatchRequest__ADD = 1
};

/// Constant 'CANCEL'.
enum
{
  rmf_task_msgs__msg__DispatchRequest__CANCEL = 2
};

// Include directives for member types
// Member 'fleet_name'
#include "rosidl_runtime_c/string.h"
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__struct.h"

// Struct defined in msg/DispatchRequest in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__DispatchRequest
{
  rosidl_runtime_c__String fleet_name;
  rmf_task_msgs__msg__TaskProfile task_profile;
  uint8_t method;
} rmf_task_msgs__msg__DispatchRequest;

// Struct for a sequence of rmf_task_msgs__msg__DispatchRequest.
typedef struct rmf_task_msgs__msg__DispatchRequest__Sequence
{
  rmf_task_msgs__msg__DispatchRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__DispatchRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_REQUEST__STRUCT_H_
