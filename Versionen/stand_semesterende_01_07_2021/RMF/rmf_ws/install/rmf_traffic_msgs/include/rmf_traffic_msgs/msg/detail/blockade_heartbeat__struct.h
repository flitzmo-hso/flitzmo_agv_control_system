// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'statuses'
#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.h"

// Struct defined in msg/BlockadeHeartbeat in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeHeartbeat
{
  rmf_traffic_msgs__msg__BlockadeStatus__Sequence statuses;
  bool has_gridlock;
} rmf_traffic_msgs__msg__BlockadeHeartbeat;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeHeartbeat.
typedef struct rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence
{
  rmf_traffic_msgs__msg__BlockadeHeartbeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_H_
