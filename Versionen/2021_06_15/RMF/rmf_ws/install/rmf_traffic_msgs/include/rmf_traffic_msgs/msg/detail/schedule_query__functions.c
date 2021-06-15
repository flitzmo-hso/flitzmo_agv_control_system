// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `spacetime`
#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__functions.h"
// Member `participants`
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__functions.h"

bool
rmf_traffic_msgs__msg__ScheduleQuery__init(rmf_traffic_msgs__msg__ScheduleQuery * msg)
{
  if (!msg) {
    return false;
  }
  // spacetime
  if (!rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init(&msg->spacetime)) {
    rmf_traffic_msgs__msg__ScheduleQuery__fini(msg);
    return false;
  }
  // participants
  if (!rmf_traffic_msgs__msg__ScheduleQueryParticipants__init(&msg->participants)) {
    rmf_traffic_msgs__msg__ScheduleQuery__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleQuery__fini(rmf_traffic_msgs__msg__ScheduleQuery * msg)
{
  if (!msg) {
    return;
  }
  // spacetime
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime__fini(&msg->spacetime);
  // participants
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__fini(&msg->participants);
}

rmf_traffic_msgs__msg__ScheduleQuery *
rmf_traffic_msgs__msg__ScheduleQuery__create()
{
  rmf_traffic_msgs__msg__ScheduleQuery * msg = (rmf_traffic_msgs__msg__ScheduleQuery *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleQuery));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleQuery));
  bool success = rmf_traffic_msgs__msg__ScheduleQuery__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleQuery__destroy(rmf_traffic_msgs__msg__ScheduleQuery * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleQuery__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ScheduleQuery__Sequence__init(rmf_traffic_msgs__msg__ScheduleQuery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ScheduleQuery * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleQuery *)calloc(size, sizeof(rmf_traffic_msgs__msg__ScheduleQuery));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleQuery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleQuery__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleQuery__Sequence__fini(rmf_traffic_msgs__msg__ScheduleQuery__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ScheduleQuery__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleQuery__Sequence *
rmf_traffic_msgs__msg__ScheduleQuery__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ScheduleQuery__Sequence * array = (rmf_traffic_msgs__msg__ScheduleQuery__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ScheduleQuery__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleQuery__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleQuery__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleQuery__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ScheduleQuery__Sequence__fini(array);
  }
  free(array);
}
