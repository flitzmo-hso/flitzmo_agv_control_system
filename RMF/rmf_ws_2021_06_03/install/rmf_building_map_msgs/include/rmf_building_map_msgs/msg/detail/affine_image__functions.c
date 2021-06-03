// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_building_map_msgs__msg__AffineImage__init(rmf_building_map_msgs__msg__AffineImage * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
    return false;
  }
  // x_offset
  // y_offset
  // yaw
  // scale
  // encoding
  if (!rosidl_runtime_c__String__init(&msg->encoding)) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__AffineImage__fini(rmf_building_map_msgs__msg__AffineImage * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x_offset
  // y_offset
  // yaw
  // scale
  // encoding
  rosidl_runtime_c__String__fini(&msg->encoding);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

rmf_building_map_msgs__msg__AffineImage *
rmf_building_map_msgs__msg__AffineImage__create()
{
  rmf_building_map_msgs__msg__AffineImage * msg = (rmf_building_map_msgs__msg__AffineImage *)malloc(sizeof(rmf_building_map_msgs__msg__AffineImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__AffineImage));
  bool success = rmf_building_map_msgs__msg__AffineImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__AffineImage__destroy(rmf_building_map_msgs__msg__AffineImage * msg)
{
  if (msg) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__msg__AffineImage__Sequence__init(rmf_building_map_msgs__msg__AffineImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__msg__AffineImage * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__msg__AffineImage *)calloc(size, sizeof(rmf_building_map_msgs__msg__AffineImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__AffineImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__AffineImage__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__AffineImage__Sequence__fini(rmf_building_map_msgs__msg__AffineImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__msg__AffineImage__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__AffineImage__Sequence *
rmf_building_map_msgs__msg__AffineImage__Sequence__create(size_t size)
{
  rmf_building_map_msgs__msg__AffineImage__Sequence * array = (rmf_building_map_msgs__msg__AffineImage__Sequence *)malloc(sizeof(rmf_building_map_msgs__msg__AffineImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__AffineImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__AffineImage__Sequence__destroy(rmf_building_map_msgs__msg__AffineImage__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__msg__AffineImage__Sequence__fini(array);
  }
  free(array);
}
