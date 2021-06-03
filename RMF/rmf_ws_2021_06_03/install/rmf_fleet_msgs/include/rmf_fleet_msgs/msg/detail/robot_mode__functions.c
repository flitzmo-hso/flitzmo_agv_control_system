// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmf_fleet_msgs__msg__RobotMode__init(rmf_fleet_msgs__msg__RobotMode * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // mode_request_id
  return true;
}

void
rmf_fleet_msgs__msg__RobotMode__fini(rmf_fleet_msgs__msg__RobotMode * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // mode_request_id
}

rmf_fleet_msgs__msg__RobotMode *
rmf_fleet_msgs__msg__RobotMode__create()
{
  rmf_fleet_msgs__msg__RobotMode * msg = (rmf_fleet_msgs__msg__RobotMode *)malloc(sizeof(rmf_fleet_msgs__msg__RobotMode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__RobotMode));
  bool success = rmf_fleet_msgs__msg__RobotMode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__RobotMode__destroy(rmf_fleet_msgs__msg__RobotMode * msg)
{
  if (msg) {
    rmf_fleet_msgs__msg__RobotMode__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__msg__RobotMode__Sequence__init(rmf_fleet_msgs__msg__RobotMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__msg__RobotMode * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__msg__RobotMode *)calloc(size, sizeof(rmf_fleet_msgs__msg__RobotMode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__RobotMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__RobotMode__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__RobotMode__Sequence__fini(rmf_fleet_msgs__msg__RobotMode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__msg__RobotMode__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__RobotMode__Sequence *
rmf_fleet_msgs__msg__RobotMode__Sequence__create(size_t size)
{
  rmf_fleet_msgs__msg__RobotMode__Sequence * array = (rmf_fleet_msgs__msg__RobotMode__Sequence *)malloc(sizeof(rmf_fleet_msgs__msg__RobotMode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__RobotMode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__RobotMode__Sequence__destroy(rmf_fleet_msgs__msg__RobotMode__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__msg__RobotMode__Sequence__fini(array);
  }
  free(array);
}
