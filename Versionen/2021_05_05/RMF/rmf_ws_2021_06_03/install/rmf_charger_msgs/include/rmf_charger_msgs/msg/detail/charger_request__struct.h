// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_H_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'charger_name'
// Member 'fleet_name'
// Member 'robot_name'
// Member 'request_id'
#include "rosidl_runtime_c/string.h"
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/ChargerRequest in the package rmf_charger_msgs.
typedef struct rmf_charger_msgs__msg__ChargerRequest
{
  rosidl_runtime_c__String charger_name;
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String robot_name;
  builtin_interfaces__msg__Duration start_timeout;
  rosidl_runtime_c__String request_id;
} rmf_charger_msgs__msg__ChargerRequest;

// Struct for a sequence of rmf_charger_msgs__msg__ChargerRequest.
typedef struct rmf_charger_msgs__msg__ChargerRequest__Sequence
{
  rmf_charger_msgs__msg__ChargerRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_charger_msgs__msg__ChargerRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_H_
