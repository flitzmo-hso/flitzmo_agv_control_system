// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeCull.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmf_traffic_msgs__msg__ScheduleChangeCull__init(rmf_traffic_msgs__msg__ScheduleChangeCull * msg)
{
  if (!msg) {
    return false;
  }
  // time
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleChangeCull__fini(rmf_traffic_msgs__msg__ScheduleChangeCull * msg)
{
  if (!msg) {
    return;
  }
  // time
}

rmf_traffic_msgs__msg__ScheduleChangeCull *
rmf_traffic_msgs__msg__ScheduleChangeCull__create()
{
  rmf_traffic_msgs__msg__ScheduleChangeCull * msg = (rmf_traffic_msgs__msg__ScheduleChangeCull *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleChangeCull));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleChangeCull));
  bool success = rmf_traffic_msgs__msg__ScheduleChangeCull__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleChangeCull__destroy(rmf_traffic_msgs__msg__ScheduleChangeCull * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleChangeCull__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ScheduleChangeCull * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleChangeCull *)calloc(size, sizeof(rmf_traffic_msgs__msg__ScheduleChangeCull));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleChangeCull__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleChangeCull__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__fini(rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ScheduleChangeCull__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * array = (rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__fini(array);
  }
  free(array);
}
