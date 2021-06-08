// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__STRUCT_H_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CHARGER_IDLE'.
enum
{
  rmf_charger_msgs__msg__ChargerState__CHARGER_IDLE = 1ul
};

/// Constant 'CHARGER_ASSIGNED'.
enum
{
  rmf_charger_msgs__msg__ChargerState__CHARGER_ASSIGNED = 2ul
};

/// Constant 'CHARGER_CHARGING'.
enum
{
  rmf_charger_msgs__msg__ChargerState__CHARGER_CHARGING = 3ul
};

/// Constant 'CHARGER_ERROR'.
enum
{
  rmf_charger_msgs__msg__ChargerState__CHARGER_ERROR = 200ul
};

// Include directives for member types
// Member 'charger_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'charger_name'
// Member 'error_message'
// Member 'request_id'
// Member 'robot_fleet'
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"
// Member 'time_to_fully_charged'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/ChargerState in the package rmf_charger_msgs.
typedef struct rmf_charger_msgs__msg__ChargerState
{
  builtin_interfaces__msg__Time charger_time;
  uint32_t state;
  rosidl_runtime_c__String charger_name;
  rosidl_runtime_c__String error_message;
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String robot_fleet;
  rosidl_runtime_c__String robot_name;
  builtin_interfaces__msg__Duration time_to_fully_charged;
} rmf_charger_msgs__msg__ChargerState;

// Struct for a sequence of rmf_charger_msgs__msg__ChargerState.
typedef struct rmf_charger_msgs__msg__ChargerState__Sequence
{
  rmf_charger_msgs__msg__ChargerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_charger_msgs__msg__ChargerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__STRUCT_H_
