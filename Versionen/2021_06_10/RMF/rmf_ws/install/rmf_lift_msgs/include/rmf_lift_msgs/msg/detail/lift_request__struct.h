// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__STRUCT_H_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REQUEST_END_SESSION'.
enum
{
  rmf_lift_msgs__msg__LiftRequest__REQUEST_END_SESSION = 0
};

/// Constant 'REQUEST_AGV_MODE'.
enum
{
  rmf_lift_msgs__msg__LiftRequest__REQUEST_AGV_MODE = 1
};

/// Constant 'REQUEST_HUMAN_MODE'.
enum
{
  rmf_lift_msgs__msg__LiftRequest__REQUEST_HUMAN_MODE = 2
};

/// Constant 'DOOR_CLOSED'.
enum
{
  rmf_lift_msgs__msg__LiftRequest__DOOR_CLOSED = 0
};

/// Constant 'DOOR_OPEN'.
enum
{
  rmf_lift_msgs__msg__LiftRequest__DOOR_OPEN = 2
};

// Include directives for member types
// Member 'lift_name'
// Member 'session_id'
// Member 'destination_floor'
#include "rosidl_runtime_c/string.h"
// Member 'request_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/LiftRequest in the package rmf_lift_msgs.
typedef struct rmf_lift_msgs__msg__LiftRequest
{
  rosidl_runtime_c__String lift_name;
  builtin_interfaces__msg__Time request_time;
  rosidl_runtime_c__String session_id;
  uint8_t request_type;
  rosidl_runtime_c__String destination_floor;
  uint8_t door_state;
} rmf_lift_msgs__msg__LiftRequest;

// Struct for a sequence of rmf_lift_msgs__msg__LiftRequest.
typedef struct rmf_lift_msgs__msg__LiftRequest__Sequence
{
  rmf_lift_msgs__msg__LiftRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_lift_msgs__msg__LiftRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__STRUCT_H_
