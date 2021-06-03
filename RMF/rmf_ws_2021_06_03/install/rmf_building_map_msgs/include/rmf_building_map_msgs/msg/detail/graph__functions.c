// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `vertices`
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"
// Member `edges`
#include "rmf_building_map_msgs/msg/detail/graph_edge__functions.h"
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__functions.h"

bool
rmf_building_map_msgs__msg__Graph__init(rmf_building_map_msgs__msg__Graph * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  // vertices
  if (!rmf_building_map_msgs__msg__GraphNode__Sequence__init(&msg->vertices, 0)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  // edges
  if (!rmf_building_map_msgs__msg__GraphEdge__Sequence__init(&msg->edges, 0)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__init(&msg->params, 0)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__Graph__fini(rmf_building_map_msgs__msg__Graph * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // vertices
  rmf_building_map_msgs__msg__GraphNode__Sequence__fini(&msg->vertices);
  // edges
  rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(&msg->edges);
  // params
  rmf_building_map_msgs__msg__Param__Sequence__fini(&msg->params);
}

rmf_building_map_msgs__msg__Graph *
rmf_building_map_msgs__msg__Graph__create()
{
  rmf_building_map_msgs__msg__Graph * msg = (rmf_building_map_msgs__msg__Graph *)malloc(sizeof(rmf_building_map_msgs__msg__Graph));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Graph));
  bool success = rmf_building_map_msgs__msg__Graph__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Graph__destroy(rmf_building_map_msgs__msg__Graph * msg)
{
  if (msg) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__msg__Graph__Sequence__init(rmf_building_map_msgs__msg__Graph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__msg__Graph * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__msg__Graph *)calloc(size, sizeof(rmf_building_map_msgs__msg__Graph));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Graph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Graph__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__Graph__Sequence__fini(rmf_building_map_msgs__msg__Graph__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__msg__Graph__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__Graph__Sequence *
rmf_building_map_msgs__msg__Graph__Sequence__create(size_t size)
{
  rmf_building_map_msgs__msg__Graph__Sequence * array = (rmf_building_map_msgs__msg__Graph__Sequence *)malloc(sizeof(rmf_building_map_msgs__msg__Graph__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Graph__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Graph__Sequence__destroy(rmf_building_map_msgs__msg__Graph__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__msg__Graph__Sequence__fini(array);
  }
  free(array);
}
