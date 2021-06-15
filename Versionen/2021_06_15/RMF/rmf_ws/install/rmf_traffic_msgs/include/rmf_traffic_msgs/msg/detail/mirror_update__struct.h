// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'patch'
#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.h"

// Struct defined in msg/MirrorUpdate in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__MirrorUpdate
{
  uint64_t query_id;
  uint64_t database_version;
  rmf_traffic_msgs__msg__SchedulePatch patch;
} rmf_traffic_msgs__msg__MirrorUpdate;

// Struct for a sequence of rmf_traffic_msgs__msg__MirrorUpdate.
typedef struct rmf_traffic_msgs__msg__MirrorUpdate__Sequence
{
  rmf_traffic_msgs__msg__MirrorUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__MirrorUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_H_
