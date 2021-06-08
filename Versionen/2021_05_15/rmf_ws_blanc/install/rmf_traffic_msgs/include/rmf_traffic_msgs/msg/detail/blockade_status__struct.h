// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BlockadeStatus in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeStatus
{
  uint64_t participant;
  uint64_t reservation;
  bool any_ready;
  uint64_t last_ready;
  uint64_t last_reached;
  uint64_t assignment_begin;
  uint64_t assignment_end;
} rmf_traffic_msgs__msg__BlockadeStatus;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeStatus.
typedef struct rmf_traffic_msgs__msg__BlockadeStatus__Sequence
{
  rmf_traffic_msgs__msg__BlockadeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_H_
