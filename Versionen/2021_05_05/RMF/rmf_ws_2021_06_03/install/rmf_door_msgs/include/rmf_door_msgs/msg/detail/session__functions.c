// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_door_msgs:msg/Session.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/session__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `requester_id`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_door_msgs__msg__Session__init(rmf_door_msgs__msg__Session * msg)
{
  if (!msg) {
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__init(&msg->request_time)) {
    rmf_door_msgs__msg__Session__fini(msg);
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__init(&msg->requester_id)) {
    rmf_door_msgs__msg__Session__fini(msg);
    return false;
  }
  return true;
}

void
rmf_door_msgs__msg__Session__fini(rmf_door_msgs__msg__Session * msg)
{
  if (!msg) {
    return;
  }
  // request_time
  builtin_interfaces__msg__Time__fini(&msg->request_time);
  // requester_id
  rosidl_runtime_c__String__fini(&msg->requester_id);
}

rmf_door_msgs__msg__Session *
rmf_door_msgs__msg__Session__create()
{
  rmf_door_msgs__msg__Session * msg = (rmf_door_msgs__msg__Session *)malloc(sizeof(rmf_door_msgs__msg__Session));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_door_msgs__msg__Session));
  bool success = rmf_door_msgs__msg__Session__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_door_msgs__msg__Session__destroy(rmf_door_msgs__msg__Session * msg)
{
  if (msg) {
    rmf_door_msgs__msg__Session__fini(msg);
  }
  free(msg);
}


bool
rmf_door_msgs__msg__Session__Sequence__init(rmf_door_msgs__msg__Session__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_door_msgs__msg__Session * data = NULL;
  if (size) {
    data = (rmf_door_msgs__msg__Session *)calloc(size, sizeof(rmf_door_msgs__msg__Session));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_door_msgs__msg__Session__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_door_msgs__msg__Session__fini(&data[i - 1]);
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
rmf_door_msgs__msg__Session__Sequence__fini(rmf_door_msgs__msg__Session__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_door_msgs__msg__Session__fini(&array->data[i]);
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

rmf_door_msgs__msg__Session__Sequence *
rmf_door_msgs__msg__Session__Sequence__create(size_t size)
{
  rmf_door_msgs__msg__Session__Sequence * array = (rmf_door_msgs__msg__Session__Sequence *)malloc(sizeof(rmf_door_msgs__msg__Session__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_door_msgs__msg__Session__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_door_msgs__msg__Session__Sequence__destroy(rmf_door_msgs__msg__Session__Sequence * array)
{
  if (array) {
    rmf_door_msgs__msg__Session__Sequence__fini(array);
  }
  free(array);
}
