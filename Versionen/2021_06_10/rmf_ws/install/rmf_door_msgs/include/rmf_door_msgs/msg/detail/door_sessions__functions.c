// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/door_sessions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `door_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `sessions`
#include "rmf_door_msgs/msg/detail/session__functions.h"

bool
rmf_door_msgs__msg__DoorSessions__init(rmf_door_msgs__msg__DoorSessions * msg)
{
  if (!msg) {
    return false;
  }
  // door_name
  if (!rosidl_runtime_c__String__init(&msg->door_name)) {
    rmf_door_msgs__msg__DoorSessions__fini(msg);
    return false;
  }
  // sessions
  if (!rmf_door_msgs__msg__Session__Sequence__init(&msg->sessions, 0)) {
    rmf_door_msgs__msg__DoorSessions__fini(msg);
    return false;
  }
  return true;
}

void
rmf_door_msgs__msg__DoorSessions__fini(rmf_door_msgs__msg__DoorSessions * msg)
{
  if (!msg) {
    return;
  }
  // door_name
  rosidl_runtime_c__String__fini(&msg->door_name);
  // sessions
  rmf_door_msgs__msg__Session__Sequence__fini(&msg->sessions);
}

rmf_door_msgs__msg__DoorSessions *
rmf_door_msgs__msg__DoorSessions__create()
{
  rmf_door_msgs__msg__DoorSessions * msg = (rmf_door_msgs__msg__DoorSessions *)malloc(sizeof(rmf_door_msgs__msg__DoorSessions));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_door_msgs__msg__DoorSessions));
  bool success = rmf_door_msgs__msg__DoorSessions__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_door_msgs__msg__DoorSessions__destroy(rmf_door_msgs__msg__DoorSessions * msg)
{
  if (msg) {
    rmf_door_msgs__msg__DoorSessions__fini(msg);
  }
  free(msg);
}


bool
rmf_door_msgs__msg__DoorSessions__Sequence__init(rmf_door_msgs__msg__DoorSessions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_door_msgs__msg__DoorSessions * data = NULL;
  if (size) {
    data = (rmf_door_msgs__msg__DoorSessions *)calloc(size, sizeof(rmf_door_msgs__msg__DoorSessions));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_door_msgs__msg__DoorSessions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_door_msgs__msg__DoorSessions__fini(&data[i - 1]);
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
rmf_door_msgs__msg__DoorSessions__Sequence__fini(rmf_door_msgs__msg__DoorSessions__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_door_msgs__msg__DoorSessions__fini(&array->data[i]);
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

rmf_door_msgs__msg__DoorSessions__Sequence *
rmf_door_msgs__msg__DoorSessions__Sequence__create(size_t size)
{
  rmf_door_msgs__msg__DoorSessions__Sequence * array = (rmf_door_msgs__msg__DoorSessions__Sequence *)malloc(sizeof(rmf_door_msgs__msg__DoorSessions__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_door_msgs__msg__DoorSessions__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_door_msgs__msg__DoorSessions__Sequence__destroy(rmf_door_msgs__msg__DoorSessions__Sequence * array)
{
  if (array) {
    rmf_door_msgs__msg__DoorSessions__Sequence__fini(array);
  }
  free(array);
}
