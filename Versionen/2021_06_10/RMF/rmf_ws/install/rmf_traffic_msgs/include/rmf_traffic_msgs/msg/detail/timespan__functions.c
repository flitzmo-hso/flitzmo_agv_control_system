// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `maps`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_traffic_msgs__msg__Timespan__init(rmf_traffic_msgs__msg__Timespan * msg)
{
  if (!msg) {
    return false;
  }
  // maps
  if (!rosidl_runtime_c__String__Sequence__init(&msg->maps, 0)) {
    rmf_traffic_msgs__msg__Timespan__fini(msg);
    return false;
  }
  // has_lower_bound
  // lower_bound
  // has_upper_bound
  // upper_bound
  return true;
}

void
rmf_traffic_msgs__msg__Timespan__fini(rmf_traffic_msgs__msg__Timespan * msg)
{
  if (!msg) {
    return;
  }
  // maps
  rosidl_runtime_c__String__Sequence__fini(&msg->maps);
  // has_lower_bound
  // lower_bound
  // has_upper_bound
  // upper_bound
}

rmf_traffic_msgs__msg__Timespan *
rmf_traffic_msgs__msg__Timespan__create()
{
  rmf_traffic_msgs__msg__Timespan * msg = (rmf_traffic_msgs__msg__Timespan *)malloc(sizeof(rmf_traffic_msgs__msg__Timespan));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__Timespan));
  bool success = rmf_traffic_msgs__msg__Timespan__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__Timespan__destroy(rmf_traffic_msgs__msg__Timespan * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__Timespan__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__Timespan__Sequence__init(rmf_traffic_msgs__msg__Timespan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__Timespan * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__Timespan *)calloc(size, sizeof(rmf_traffic_msgs__msg__Timespan));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__Timespan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__Timespan__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__Timespan__Sequence__fini(rmf_traffic_msgs__msg__Timespan__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__Timespan__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__Timespan__Sequence *
rmf_traffic_msgs__msg__Timespan__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__Timespan__Sequence * array = (rmf_traffic_msgs__msg__Timespan__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__Timespan__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__Timespan__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__Timespan__Sequence__destroy(rmf_traffic_msgs__msg__Timespan__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__Timespan__Sequence__fini(array);
  }
  free(array);
}
