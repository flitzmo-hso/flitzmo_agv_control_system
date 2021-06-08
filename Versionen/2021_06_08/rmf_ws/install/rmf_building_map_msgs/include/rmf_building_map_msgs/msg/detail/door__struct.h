// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOOR_TYPE_UNDEFINED'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_UNDEFINED = 0
};

/// Constant 'DOOR_TYPE_SINGLE_SLIDING'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_SINGLE_SLIDING = 1
};

/// Constant 'DOOR_TYPE_DOUBLE_SLIDING'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_DOUBLE_SLIDING = 2
};

/// Constant 'DOOR_TYPE_SINGLE_TELESCOPE'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_SINGLE_TELESCOPE = 3
};

/// Constant 'DOOR_TYPE_DOUBLE_TELESCOPE'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_DOUBLE_TELESCOPE = 4
};

/// Constant 'DOOR_TYPE_SINGLE_SWING'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_SINGLE_SWING = 5
};

/// Constant 'DOOR_TYPE_DOUBLE_SWING'.
enum
{
  rmf_building_map_msgs__msg__Door__DOOR_TYPE_DOUBLE_SWING = 6
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Door in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__Door
{
  rosidl_runtime_c__String name;
  float v1_x;
  float v1_y;
  float v2_x;
  float v2_y;
  uint8_t door_type;
  float motion_range;
  int32_t motion_direction;
} rmf_building_map_msgs__msg__Door;

// Struct for a sequence of rmf_building_map_msgs__msg__Door.
typedef struct rmf_building_map_msgs__msg__Door__Sequence
{
  rmf_building_map_msgs__msg__Door * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__Door__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__STRUCT_H_
