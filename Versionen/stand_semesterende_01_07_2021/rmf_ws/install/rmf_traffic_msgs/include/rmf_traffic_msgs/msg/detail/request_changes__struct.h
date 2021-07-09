// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/RequestChanges.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RequestChanges in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__RequestChanges
{
  uint64_t query_id;
  uint64_t version;
  bool full_update;
} rmf_traffic_msgs__msg__RequestChanges;

// Struct for a sequence of rmf_traffic_msgs__msg__RequestChanges.
typedef struct rmf_traffic_msgs__msg__RequestChanges__Sequence
{
  rmf_traffic_msgs__msg__RequestChanges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__RequestChanges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REQUEST_CHANGES__STRUCT_H_
