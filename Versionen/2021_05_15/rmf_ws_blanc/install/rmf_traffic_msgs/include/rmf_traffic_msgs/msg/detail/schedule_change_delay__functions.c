// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeDelay.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmf_traffic_msgs__msg__ScheduleChangeDelay__init(rmf_traffic_msgs__msg__ScheduleChangeDelay * msg)
{
  if (!msg) {
    return false;
  }
  // delay
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleChangeDelay__fini(rmf_traffic_msgs__msg__ScheduleChangeDelay * msg)
{
  if (!msg) {
    return;
  }
  // delay
}

rmf_traffic_msgs__msg__ScheduleChangeDelay *
rmf_traffic_msgs__msg__ScheduleChangeDelay__create()
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay * msg = (rmf_traffic_msgs__msg__ScheduleChangeDelay *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleChangeDelay));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleChangeDelay));
  bool success = rmf_traffic_msgs__msg__ScheduleChangeDelay__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleChangeDelay__destroy(rmf_traffic_msgs__msg__ScheduleChangeDelay * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleChangeDelay__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ScheduleChangeDelay * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleChangeDelay *)calloc(size, sizeof(rmf_traffic_msgs__msg__ScheduleChangeDelay));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleChangeDelay__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleChangeDelay__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ScheduleChangeDelay__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * array = (rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(array);
  }
  free(array);
}
