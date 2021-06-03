// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/GraphNode.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__functions.h"

bool
rmf_building_map_msgs__msg__GraphNode__init(rmf_building_map_msgs__msg__GraphNode * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__GraphNode__fini(msg);
    return false;
  }
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__init(&msg->params, 0)) {
    rmf_building_map_msgs__msg__GraphNode__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__GraphNode__fini(rmf_building_map_msgs__msg__GraphNode * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // params
  rmf_building_map_msgs__msg__Param__Sequence__fini(&msg->params);
}

rmf_building_map_msgs__msg__GraphNode *
rmf_building_map_msgs__msg__GraphNode__create()
{
  rmf_building_map_msgs__msg__GraphNode * msg = (rmf_building_map_msgs__msg__GraphNode *)malloc(sizeof(rmf_building_map_msgs__msg__GraphNode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__GraphNode));
  bool success = rmf_building_map_msgs__msg__GraphNode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__GraphNode__destroy(rmf_building_map_msgs__msg__GraphNode * msg)
{
  if (msg) {
    rmf_building_map_msgs__msg__GraphNode__fini(msg);
  }
  free(msg);
}


bool
rmf_building_map_msgs__msg__GraphNode__Sequence__init(rmf_building_map_msgs__msg__GraphNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_building_map_msgs__msg__GraphNode * data = NULL;
  if (size) {
    data = (rmf_building_map_msgs__msg__GraphNode *)calloc(size, sizeof(rmf_building_map_msgs__msg__GraphNode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__GraphNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__GraphNode__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__GraphNode__Sequence__fini(rmf_building_map_msgs__msg__GraphNode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__msg__GraphNode__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__GraphNode__Sequence *
rmf_building_map_msgs__msg__GraphNode__Sequence__create(size_t size)
{
  rmf_building_map_msgs__msg__GraphNode__Sequence * array = (rmf_building_map_msgs__msg__GraphNode__Sequence *)malloc(sizeof(rmf_building_map_msgs__msg__GraphNode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__GraphNode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__GraphNode__Sequence__destroy(rmf_building_map_msgs__msg__GraphNode__Sequence * array)
{
  if (array) {
    rmf_building_map_msgs__msg__GraphNode__Sequence__fini(array);
  }
  free(array);
}
