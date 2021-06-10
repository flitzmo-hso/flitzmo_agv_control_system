// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/clean__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `start_waypoint`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__Clean__init(rmf_task_msgs__msg__Clean * msg)
{
  if (!msg) {
    return false;
  }
  // start_waypoint
  if (!rosidl_runtime_c__String__init(&msg->start_waypoint)) {
    rmf_task_msgs__msg__Clean__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Clean__fini(rmf_task_msgs__msg__Clean * msg)
{
  if (!msg) {
    return;
  }
  // start_waypoint
  rosidl_runtime_c__String__fini(&msg->start_waypoint);
}

rmf_task_msgs__msg__Clean *
rmf_task_msgs__msg__Clean__create()
{
  rmf_task_msgs__msg__Clean * msg = (rmf_task_msgs__msg__Clean *)malloc(sizeof(rmf_task_msgs__msg__Clean));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Clean));
  bool success = rmf_task_msgs__msg__Clean__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Clean__destroy(rmf_task_msgs__msg__Clean * msg)
{
  if (msg) {
    rmf_task_msgs__msg__Clean__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__Clean__Sequence__init(rmf_task_msgs__msg__Clean__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__Clean * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__Clean *)calloc(size, sizeof(rmf_task_msgs__msg__Clean));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Clean__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Clean__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Clean__Sequence__fini(rmf_task_msgs__msg__Clean__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__Clean__fini(&array->data[i]);
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

rmf_task_msgs__msg__Clean__Sequence *
rmf_task_msgs__msg__Clean__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__Clean__Sequence * array = (rmf_task_msgs__msg__Clean__Sequence *)malloc(sizeof(rmf_task_msgs__msg__Clean__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Clean__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Clean__Sequence__destroy(rmf_task_msgs__msg__Clean__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__Clean__Sequence__fini(array);
  }
  free(array);
}
