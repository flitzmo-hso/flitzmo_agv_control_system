// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `model`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mode`
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"
// Member `location`
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__functions.h"

bool
rmf_fleet_msgs__msg__RobotState__init(rmf_fleet_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // seq
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__init(&msg->mode)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // battery_percent
  // location
  if (!rmf_fleet_msgs__msg__Location__init(&msg->location)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__init(&msg->path, 0)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__RobotState__fini(rmf_fleet_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // seq
  // mode
  rmf_fleet_msgs__msg__RobotMode__fini(&msg->mode);
  // battery_percent
  // location
  rmf_fleet_msgs__msg__Location__fini(&msg->location);
  // path
  rmf_fleet_msgs__msg__Location__Sequence__fini(&msg->path);
}

rmf_fleet_msgs__msg__RobotState *
rmf_fleet_msgs__msg__RobotState__create()
{
  rmf_fleet_msgs__msg__RobotState * msg = (rmf_fleet_msgs__msg__RobotState *)malloc(sizeof(rmf_fleet_msgs__msg__RobotState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__RobotState));
  bool success = rmf_fleet_msgs__msg__RobotState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__RobotState__destroy(rmf_fleet_msgs__msg__RobotState * msg)
{
  if (msg) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__msg__RobotState__Sequence__init(rmf_fleet_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__msg__RobotState * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__msg__RobotState *)calloc(size, sizeof(rmf_fleet_msgs__msg__RobotState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__RobotState__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__RobotState__Sequence__fini(rmf_fleet_msgs__msg__RobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__msg__RobotState__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__RobotState__Sequence *
rmf_fleet_msgs__msg__RobotState__Sequence__create(size_t size)
{
  rmf_fleet_msgs__msg__RobotState__Sequence * array = (rmf_fleet_msgs__msg__RobotState__Sequence *)malloc(sizeof(rmf_fleet_msgs__msg__RobotState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__RobotState__Sequence__destroy(rmf_fleet_msgs__msg__RobotState__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__msg__RobotState__Sequence__fini(array);
  }
  free(array);
}
