// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__init(rmf_traffic_msgs__msg__BlockadeCheckpoint * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(msg);
    return false;
  }
  // can_hold
  return true;
}

void
rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(rmf_traffic_msgs__msg__BlockadeCheckpoint * msg)
{
  if (!msg) {
    return;
  }
  // position
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // can_hold
}

rmf_traffic_msgs__msg__BlockadeCheckpoint *
rmf_traffic_msgs__msg__BlockadeCheckpoint__create()
{
  rmf_traffic_msgs__msg__BlockadeCheckpoint * msg = (rmf_traffic_msgs__msg__BlockadeCheckpoint *)malloc(sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint));
  bool success = rmf_traffic_msgs__msg__BlockadeCheckpoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__BlockadeCheckpoint__destroy(rmf_traffic_msgs__msg__BlockadeCheckpoint * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__BlockadeCheckpoint * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__BlockadeCheckpoint *)calloc(size, sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__BlockadeCheckpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array = (rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__destroy(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(array);
  }
  free(array);
}
