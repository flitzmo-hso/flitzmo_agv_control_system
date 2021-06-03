// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice
#include "rmf_visualization_msgs/msg/detail/rviz_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_visualization_msgs__msg__RvizParam__init(rmf_visualization_msgs__msg__RvizParam * msg)
{
  if (!msg) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    rmf_visualization_msgs__msg__RvizParam__fini(msg);
    return false;
  }
  // query_duration
  // start_duration
  return true;
}

void
rmf_visualization_msgs__msg__RvizParam__fini(rmf_visualization_msgs__msg__RvizParam * msg)
{
  if (!msg) {
    return;
  }
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // query_duration
  // start_duration
}

rmf_visualization_msgs__msg__RvizParam *
rmf_visualization_msgs__msg__RvizParam__create()
{
  rmf_visualization_msgs__msg__RvizParam * msg = (rmf_visualization_msgs__msg__RvizParam *)malloc(sizeof(rmf_visualization_msgs__msg__RvizParam));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_visualization_msgs__msg__RvizParam));
  bool success = rmf_visualization_msgs__msg__RvizParam__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_visualization_msgs__msg__RvizParam__destroy(rmf_visualization_msgs__msg__RvizParam * msg)
{
  if (msg) {
    rmf_visualization_msgs__msg__RvizParam__fini(msg);
  }
  free(msg);
}


bool
rmf_visualization_msgs__msg__RvizParam__Sequence__init(rmf_visualization_msgs__msg__RvizParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_visualization_msgs__msg__RvizParam * data = NULL;
  if (size) {
    data = (rmf_visualization_msgs__msg__RvizParam *)calloc(size, sizeof(rmf_visualization_msgs__msg__RvizParam));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_visualization_msgs__msg__RvizParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_visualization_msgs__msg__RvizParam__fini(&data[i - 1]);
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
rmf_visualization_msgs__msg__RvizParam__Sequence__fini(rmf_visualization_msgs__msg__RvizParam__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_visualization_msgs__msg__RvizParam__fini(&array->data[i]);
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

rmf_visualization_msgs__msg__RvizParam__Sequence *
rmf_visualization_msgs__msg__RvizParam__Sequence__create(size_t size)
{
  rmf_visualization_msgs__msg__RvizParam__Sequence * array = (rmf_visualization_msgs__msg__RvizParam__Sequence *)malloc(sizeof(rmf_visualization_msgs__msg__RvizParam__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_visualization_msgs__msg__RvizParam__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_visualization_msgs__msg__RvizParam__Sequence__destroy(rmf_visualization_msgs__msg__RvizParam__Sequence * array)
{
  if (array) {
    rmf_visualization_msgs__msg__RvizParam__Sequence__fini(array);
  }
  free(array);
}
