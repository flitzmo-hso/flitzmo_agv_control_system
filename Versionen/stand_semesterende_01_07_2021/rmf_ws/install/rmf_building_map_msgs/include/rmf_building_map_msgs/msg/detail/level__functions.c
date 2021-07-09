// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/level__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"
// Member `places`
#include "rmf_building_map_msgs/msg/detail/place__functions.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/detail/door__functions.h"
// Member `nav_graphs`
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"

bool
rmf_building_map_msgs__msg__Level__init(rmf_building_map_msgs__msg__Level * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // elevation
  // images
  if (!rmf_building_map_msgs__msg__AffineImage__Sequence__init(&msg->images, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // places
  if (!rmf_building_map_msgs__msg__Place__Sequence__init(&msg->places, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__init(&msg->doors, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // nav_graphs
  if (!rmf_building_map_msgs__msg__Graph__Sequence__init(&msg->nav_graphs, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__init(&msg->wall_graph)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__Level__fini(rmf_building_map_msgs__msg__Level * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // elevation
  // images
  rmf_building_map_msgs__msg__AffineImage__Sequence__fini(&msg->images);
  // places
  rmf_building_map_msgs__msg__Place__Sequence__fini(&msg->places);
  // doors
  rmf_building_map_msgs__msg__Door__Sequence__fini(&msg->doors);
  // nav_graphs
  rmf_building_map_msgs__msg__Graph__Sequence__fini(&msg->nav_graphs);
  // wall_graph
  rmf_building_map_msgs__msg__Graph__fini(&msg->wall_graph);
}

rmf_building_map_msgs__msg__Level *
rmf_building_map_msgs__msg__Level__create()
{
  rmf_building_map_msgs__msg__Level * msg = (rmf_building_map_msgs__msg__Level *)malloc(sizeof(rmf_building_map_msgs__msg__Level));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Level));
  bool success = rmf_building_map_msgs__msg__Level__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Level__destroy(rmf_building_map_msgs__msg__Level * msg)
{
  if (msg) {
    rmf_building_map_msgs__msg__Level__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__msg__Level__Sequence__init(rmf_building_map_msgs__msg__Level__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__msg__Level * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__msg__Level *)calloc(size, sizeof(rmf_building_map_msgs__msg__Level));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Level__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Level__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__Level__Sequence__fini(rmf_building_map_msgs__msg__Level__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__msg__Level__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__Level__Sequence *
rmf_building_map_msgs__msg__Level__Sequence__create(size_t size)
{
  rmf_building_map_msgs__msg__Level__Sequence * array = (rmf_building_map_msgs__msg__Level__Sequence *)malloc(sizeof(rmf_building_map_msgs__msg__Level__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Level__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Level__Sequence__destroy(rmf_building_map_msgs__msg__Level__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__msg__Level__Sequence__fini(array);
  }
  free(array);
}
