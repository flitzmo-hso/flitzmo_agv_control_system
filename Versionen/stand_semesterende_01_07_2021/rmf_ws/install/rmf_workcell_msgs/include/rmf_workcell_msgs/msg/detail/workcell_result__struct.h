// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_workcell_msgs:msg/WorkcellResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__STRUCT_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACKNOWLEDGED'.
enum
{
  rmf_workcell_msgs__msg__WorkcellResult__ACKNOWLEDGED = 0
};

/// Constant 'SUCCESS'.
enum
{
  rmf_workcell_msgs__msg__WorkcellResult__SUCCESS = 1
};

/// Constant 'FAILED'.
enum
{
  rmf_workcell_msgs__msg__WorkcellResult__FAILED = 2
};

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'request_guid'
// Member 'source_guid'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/WorkcellResult in the package rmf_workcell_msgs.
typedef struct rmf_workcell_msgs__msg__WorkcellResult
{
  builtin_interfaces__msg__Time time;
  rosidl_runtime_c__String request_guid;
  rosidl_runtime_c__String source_guid;
  uint8_t status;
} rmf_workcell_msgs__msg__WorkcellResult;

// Struct for a sequence of rmf_workcell_msgs__msg__WorkcellResult.
typedef struct rmf_workcell_msgs__msg__WorkcellResult__Sequence
{
  rmf_workcell_msgs__msg__WorkcellResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_workcell_msgs__msg__WorkcellResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__STRUCT_H_
