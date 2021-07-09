// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQuerySpacetime.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `regions`
#include "rmf_traffic_msgs/msg/detail/region__functions.h"
// Member `shape_context`
#include "rmf_traffic_msgs/msg/detail/shape_context__functions.h"
// Member `timespan`
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

bool
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init(rmf_traffic_msgs__msg__ScheduleQuerySpacetime * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // regions
  if (!rmf_traffic_msgs__msg__Region__Sequence__init(&msg->regions, 0)) {
    rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(msg);
    return false;
  }
  // shape_context
  if (!rmf_traffic_msgs__msg__ShapeContext__init(&msg->shape_context)) {
    rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(msg);
    return false;
  }
  // timespan
  if (!rmf_traffic_msgs__msg__Timespan__init(&msg->timespan)) {
    rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(rmf_traffic_msgs__msg__ScheduleQuerySpacetime * msg)
{
  if (!msg) {
    return;
  }
  // type
  // regions
  rmf_traffic_msgs__msg__Region__Sequence__fini(&msg->regions);
  // shape_context
  rmf_traffic_msgs__msg__ShapeContext__fini(&msg->shape_context);
  // timespan
  rmf_traffic_msgs__msg__Timespan__fini(&msg->timespan);
}

rmf_traffic_msgs__msg__ScheduleQuerySpacetime *
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__create()
{
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime * msg = (rmf_traffic_msgs__msg__ScheduleQuerySpacetime *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleQuerySpacetime));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleQuerySpacetime));
  bool success = rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__destroy(rmf_traffic_msgs__msg__ScheduleQuerySpacetime * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__init(rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleQuerySpacetime *)calloc(size, sizeof(rmf_traffic_msgs__msg__ScheduleQuerySpacetime));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__fini(rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence *
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence * array = (rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__fini(array);
  }
  free(array);
}
