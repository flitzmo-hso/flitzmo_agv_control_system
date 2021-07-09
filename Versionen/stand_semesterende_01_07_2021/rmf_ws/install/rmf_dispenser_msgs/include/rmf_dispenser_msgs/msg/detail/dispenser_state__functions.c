// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_dispenser_msgs:msg/DispenserState.idl
// generated code does not contain a copyright notice
#include "rmf_dispenser_msgs/msg/detail/dispenser_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `guid`
// Member `request_guid_queue`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_dispenser_msgs__msg__DispenserState__init(rmf_dispenser_msgs__msg__DispenserState * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__init(&msg->guid)) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
    return false;
  }
  // mode
  // request_guid_queue
  if (!rosidl_runtime_c__String__Sequence__init(&msg->request_guid_queue, 0)) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
    return false;
  }
  // seconds_remaining
  return true;
}

void
rmf_dispenser_msgs__msg__DispenserState__fini(rmf_dispenser_msgs__msg__DispenserState * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // guid
  rosidl_runtime_c__String__fini(&msg->guid);
  // mode
  // request_guid_queue
  rosidl_runtime_c__String__Sequence__fini(&msg->request_guid_queue);
  // seconds_remaining
}

rmf_dispenser_msgs__msg__DispenserState *
rmf_dispenser_msgs__msg__DispenserState__create()
{
  rmf_dispenser_msgs__msg__DispenserState * msg = (rmf_dispenser_msgs__msg__DispenserState *)malloc(sizeof(rmf_dispenser_msgs__msg__DispenserState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_dispenser_msgs__msg__DispenserState));
  bool success = rmf_dispenser_msgs__msg__DispenserState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_dispenser_msgs__msg__DispenserState__destroy(rmf_dispenser_msgs__msg__DispenserState * msg)
{
  if (msg) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
  }
  free(msg);
}


bool
rmf_dispenser_msgs__msg__DispenserState__Sequence__init(rmf_dispenser_msgs__msg__DispenserState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_dispenser_msgs__msg__DispenserState * data = NULL;
  if (size) {
    data = (rmf_dispenser_msgs__msg__DispenserState *)calloc(size, sizeof(rmf_dispenser_msgs__msg__DispenserState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_dispenser_msgs__msg__DispenserState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_dispenser_msgs__msg__DispenserState__fini(&data[i - 1]);
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
rmf_dispenser_msgs__msg__DispenserState__Sequence__fini(rmf_dispenser_msgs__msg__DispenserState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_dispenser_msgs__msg__DispenserState__fini(&array->data[i]);
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

rmf_dispenser_msgs__msg__DispenserState__Sequence *
rmf_dispenser_msgs__msg__DispenserState__Sequence__create(size_t size)
{
  rmf_dispenser_msgs__msg__DispenserState__Sequence * array = (rmf_dispenser_msgs__msg__DispenserState__Sequence *)malloc(sizeof(rmf_dispenser_msgs__msg__DispenserState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_dispenser_msgs__msg__DispenserState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_dispenser_msgs__msg__DispenserState__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserState__Sequence * array)
{
  if (array) {
    rmf_dispenser_msgs__msg__DispenserState__Sequence__fini(array);
  }
  free(array);
}
