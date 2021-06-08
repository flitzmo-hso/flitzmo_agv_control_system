// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Place.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/place__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_building_map_msgs__msg__Place__init(rmf_building_map_msgs__msg__Place * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Place__fini(msg);
    return false;
  }
  // x
  // y
  // yaw
  // position_tolerance
  // yaw_tolerance
  return true;
}

void
rmf_building_map_msgs__msg__Place__fini(rmf_building_map_msgs__msg__Place * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // yaw
  // position_tolerance
  // yaw_tolerance
}

rmf_building_map_msgs__msg__Place *
rmf_building_map_msgs__msg__Place__create()
{
  rmf_building_map_msgs__msg__Place * msg = (rmf_building_map_msgs__msg__Place *)malloc(sizeof(rmf_building_map_msgs__msg__Place));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Place));
  bool success = rmf_building_map_msgs__msg__Place__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Place__destroy(rmf_building_map_msgs__msg__Place * msg)
{
  if (msg) {
    rmf_building_map_msgs__msg__Place__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__msg__Place__Sequence__init(rmf_building_map_msgs__msg__Place__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__msg__Place * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__msg__Place *)calloc(size, sizeof(rmf_building_map_msgs__msg__Place));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Place__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Place__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rmf_building_map_msgs__msg__Place__Sequence__fini(rmf_building_map_msgs__msg__Place__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__msg__Place__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rmf_building_map_msgs__msg__Place__Sequence *
rmf_building_map_msgs__msg__Place__Sequence__create(size_t size)
{
  rmf_building_map_msgs__msg__Place__Sequence * array = (rmf_building_map_msgs__msg__Place__Sequence *)malloc(sizeof(rmf_building_map_msgs__msg__Place__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Place__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Place__Sequence__destroy(rmf_building_map_msgs__msg__Place__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__msg__Place__Sequence__fini(array);
  }
  free(array);
}
