// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ItineraryErase.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_ERASE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_ERASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'routes'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ItineraryErase in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ItineraryErase
{
  uint64_t participant;
  rosidl_runtime_c__uint64__Sequence routes;
  uint64_t itinerary_version;
} rmf_traffic_msgs__msg__ItineraryErase;

// Struct for a sequence of rmf_traffic_msgs__msg__ItineraryErase.
typedef struct rmf_traffic_msgs__msg__ItineraryErase__Sequence
{
  rmf_traffic_msgs__msg__ItineraryErase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ItineraryErase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_ERASE__STRUCT_H_
