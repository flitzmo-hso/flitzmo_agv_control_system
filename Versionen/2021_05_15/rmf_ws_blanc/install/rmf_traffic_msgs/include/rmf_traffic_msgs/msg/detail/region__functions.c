// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/region__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map`
#include "rosidl_runtime_c/string_functions.h"
// Member `spaces`
#include "rmf_traffic_msgs/msg/detail/space__functions.h"
// Member `timespan`
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

bool
rmf_traffic_msgs__msg__Region__init(rmf_traffic_msgs__msg__Region * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__init(&msg->map)) {
    rmf_traffic_msgs__msg__Region__fini(msg);
    return false;
  }
  // spaces
  if (!rmf_traffic_msgs__msg__Space__Sequence__init(&msg->spaces, 0)) {
    rmf_traffic_msgs__msg__Region__fini(msg);
    return false;
  }
  // timespan
  if (!rmf_traffic_msgs__msg__Timespan__init(&msg->timespan)) {
    rmf_traffic_msgs__msg__Region__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__Region__fini(rmf_traffic_msgs__msg__Region * msg)
{
  if (!msg) {
    return;
  }
  // map
  rosidl_runtime_c__String__fini(&msg->map);
  // spaces
  rmf_traffic_msgs__msg__Space__Sequence__fini(&msg->spaces);
  // timespan
  rmf_traffic_msgs__msg__Timespan__fini(&msg->timespan);
}

rmf_traffic_msgs__msg__Region *
rmf_traffic_msgs__msg__Region__create()
{
  rmf_traffic_msgs__msg__Region * msg = (rmf_traffic_msgs__msg__Region *)malloc(sizeof(rmf_traffic_msgs__msg__Region));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__Region));
  bool success = rmf_traffic_msgs__msg__Region__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__Region__destroy(rmf_traffic_msgs__msg__Region * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__Region__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__Region__Sequence__init(rmf_traffic_msgs__msg__Region__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__Region * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__Region *)calloc(size, sizeof(rmf_traffic_msgs__msg__Region));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__Region__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__Region__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__Region__Sequence__fini(rmf_traffic_msgs__msg__Region__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__Region__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__Region__Sequence *
rmf_traffic_msgs__msg__Region__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__Region__Sequence * array = (rmf_traffic_msgs__msg__Region__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__Region__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__Region__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__Region__Sequence__destroy(rmf_traffic_msgs__msg__Region__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__Region__Sequence__fini(array);
  }
  free(array);
}
