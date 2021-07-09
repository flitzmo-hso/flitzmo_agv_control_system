// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_door_msgs:msg/DoorState.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/door_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `door_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `door_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_mode`
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"

bool
rmf_door_msgs__msg__DoorState__init(rmf_door_msgs__msg__DoorState * msg)
{
  if (!msg) {
    return false;
  }
  // door_time
  if (!builtin_interfaces__msg__Time__init(&msg->door_time)) {
    rmf_door_msgs__msg__DoorState__fini(msg);
    return false;
  }
  // door_name
  if (!rosidl_runtime_c__String__init(&msg->door_name)) {
    rmf_door_msgs__msg__DoorState__fini(msg);
    return false;
  }
  // current_mode
  if (!rmf_door_msgs__msg__DoorMode__init(&msg->current_mode)) {
    rmf_door_msgs__msg__DoorState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_door_msgs__msg__DoorState__fini(rmf_door_msgs__msg__DoorState * msg)
{
  if (!msg) {
    return;
  }
  // door_time
  builtin_interfaces__msg__Time__fini(&msg->door_time);
  // door_name
  rosidl_runtime_c__String__fini(&msg->door_name);
  // current_mode
  rmf_door_msgs__msg__DoorMode__fini(&msg->current_mode);
}

rmf_door_msgs__msg__DoorState *
rmf_door_msgs__msg__DoorState__create()
{
  rmf_door_msgs__msg__DoorState * msg = (rmf_door_msgs__msg__DoorState *)malloc(sizeof(rmf_door_msgs__msg__DoorState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_door_msgs__msg__DoorState));
  bool success = rmf_door_msgs__msg__DoorState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_door_msgs__msg__DoorState__destroy(rmf_door_msgs__msg__DoorState * msg)
{
  if (msg) {
    rmf_door_msgs__msg__DoorState__fini(msg);
  }
  free(msg);
}


bool
rmf_door_msgs__msg__DoorState__Sequence__init(rmf_door_msgs__msg__DoorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_door_msgs__msg__DoorState * data = NULL;
  if (size) {
    data = (rmf_door_msgs__msg__DoorState *)calloc(size, sizeof(rmf_door_msgs__msg__DoorState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_door_msgs__msg__DoorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_door_msgs__msg__DoorState__fini(&data[i - 1]);
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
rmf_door_msgs__msg__DoorState__Sequence__fini(rmf_door_msgs__msg__DoorState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_door_msgs__msg__DoorState__fini(&array->data[i]);
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

rmf_door_msgs__msg__DoorState__Sequence *
rmf_door_msgs__msg__DoorState__Sequence__create(size_t size)
{
  rmf_door_msgs__msg__DoorState__Sequence * array = (rmf_door_msgs__msg__DoorState__Sequence *)malloc(sizeof(rmf_door_msgs__msg__DoorState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_door_msgs__msg__DoorState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_door_msgs__msg__DoorState__Sequence__destroy(rmf_door_msgs__msg__DoorState__Sequence * array)
{
  if (array) {
    rmf_door_msgs__msg__DoorState__Sequence__fini(array);
  }
  free(array);
}
