// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice
#include "rmf_charger_msgs/msg/detail/charger_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `charger_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `charger_name`
// Member `error_message`
// Member `request_id`
// Member `robot_fleet`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_to_fully_charged`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_charger_msgs__msg__ChargerState__init(rmf_charger_msgs__msg__ChargerState * msg)
{
  if (!msg) {
    return false;
  }
  // charger_time
  if (!builtin_interfaces__msg__Time__init(&msg->charger_time)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // state
  // charger_name
  if (!rosidl_runtime_c__String__init(&msg->charger_name)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // robot_fleet
  if (!rosidl_runtime_c__String__init(&msg->robot_fleet)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // time_to_fully_charged
  if (!builtin_interfaces__msg__Duration__init(&msg->time_to_fully_charged)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_charger_msgs__msg__ChargerState__fini(rmf_charger_msgs__msg__ChargerState * msg)
{
  if (!msg) {
    return;
  }
  // charger_time
  builtin_interfaces__msg__Time__fini(&msg->charger_time);
  // state
  // charger_name
  rosidl_runtime_c__String__fini(&msg->charger_name);
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
  // robot_fleet
  rosidl_runtime_c__String__fini(&msg->robot_fleet);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // time_to_fully_charged
  builtin_interfaces__msg__Duration__fini(&msg->time_to_fully_charged);
}

rmf_charger_msgs__msg__ChargerState *
rmf_charger_msgs__msg__ChargerState__create()
{
  rmf_charger_msgs__msg__ChargerState * msg = (rmf_charger_msgs__msg__ChargerState *)malloc(sizeof(rmf_charger_msgs__msg__ChargerState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_charger_msgs__msg__ChargerState));
  bool success = rmf_charger_msgs__msg__ChargerState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_charger_msgs__msg__ChargerState__destroy(rmf_charger_msgs__msg__ChargerState * msg)
{
  if (msg) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
  }
  free(msg);
}


bool
rmf_charger_msgs__msg__ChargerState__Sequence__init(rmf_charger_msgs__msg__ChargerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_charger_msgs__msg__ChargerState * data = NULL;
  if (size) {
    data = (rmf_charger_msgs__msg__ChargerState *)calloc(size, sizeof(rmf_charger_msgs__msg__ChargerState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_charger_msgs__msg__ChargerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_charger_msgs__msg__ChargerState__fini(&data[i - 1]);
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
rmf_charger_msgs__msg__ChargerState__Sequence__fini(rmf_charger_msgs__msg__ChargerState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_charger_msgs__msg__ChargerState__fini(&array->data[i]);
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

rmf_charger_msgs__msg__ChargerState__Sequence *
rmf_charger_msgs__msg__ChargerState__Sequence__create(size_t size)
{
  rmf_charger_msgs__msg__ChargerState__Sequence * array = (rmf_charger_msgs__msg__ChargerState__Sequence *)malloc(sizeof(rmf_charger_msgs__msg__ChargerState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_charger_msgs__msg__ChargerState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_charger_msgs__msg__ChargerState__Sequence__destroy(rmf_charger_msgs__msg__ChargerState__Sequence * array)
{
  if (array) {
    rmf_charger_msgs__msg__ChargerState__Sequence__fini(array);
  }
  free(array);
}
