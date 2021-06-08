// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/task_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `priority`
#include "rmf_task_msgs/msg/detail/priority__functions.h"
// Member `task_type`
#include "rmf_task_msgs/msg/detail/task_type__functions.h"
// Member `station`
#include "rmf_task_msgs/msg/detail/station__functions.h"
// Member `loop`
#include "rmf_task_msgs/msg/detail/loop__functions.h"
// Member `delivery`
#include "rmf_task_msgs/msg/detail/delivery__functions.h"
// Member `clean`
#include "rmf_task_msgs/msg/detail/clean__functions.h"

bool
rmf_task_msgs__msg__TaskDescription__init(rmf_task_msgs__msg__TaskDescription * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // priority
  if (!rmf_task_msgs__msg__Priority__init(&msg->priority)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // task_type
  if (!rmf_task_msgs__msg__TaskType__init(&msg->task_type)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // station
  if (!rmf_task_msgs__msg__Station__init(&msg->station)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // loop
  if (!rmf_task_msgs__msg__Loop__init(&msg->loop)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // delivery
  if (!rmf_task_msgs__msg__Delivery__init(&msg->delivery)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // clean
  if (!rmf_task_msgs__msg__Clean__init(&msg->clean)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__TaskDescription__fini(rmf_task_msgs__msg__TaskDescription * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // priority
  rmf_task_msgs__msg__Priority__fini(&msg->priority);
  // task_type
  rmf_task_msgs__msg__TaskType__fini(&msg->task_type);
  // station
  rmf_task_msgs__msg__Station__fini(&msg->station);
  // loop
  rmf_task_msgs__msg__Loop__fini(&msg->loop);
  // delivery
  rmf_task_msgs__msg__Delivery__fini(&msg->delivery);
  // clean
  rmf_task_msgs__msg__Clean__fini(&msg->clean);
}

rmf_task_msgs__msg__TaskDescription *
rmf_task_msgs__msg__TaskDescription__create()
{
  rmf_task_msgs__msg__TaskDescription * msg = (rmf_task_msgs__msg__TaskDescription *)malloc(sizeof(rmf_task_msgs__msg__TaskDescription));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__TaskDescription));
  bool success = rmf_task_msgs__msg__TaskDescription__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__TaskDescription__destroy(rmf_task_msgs__msg__TaskDescription * msg)
{
  if (msg) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__TaskDescription__Sequence__init(rmf_task_msgs__msg__TaskDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__TaskDescription * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__TaskDescription *)calloc(size, sizeof(rmf_task_msgs__msg__TaskDescription));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__TaskDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__TaskDescription__fini(&data[i - 1]);
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
rmf_task_msgs__msg__TaskDescription__Sequence__fini(rmf_task_msgs__msg__TaskDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__TaskDescription__fini(&array->data[i]);
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

rmf_task_msgs__msg__TaskDescription__Sequence *
rmf_task_msgs__msg__TaskDescription__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__TaskDescription__Sequence * array = (rmf_task_msgs__msg__TaskDescription__Sequence *)malloc(sizeof(rmf_task_msgs__msg__TaskDescription__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__TaskDescription__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__TaskDescription__Sequence__destroy(rmf_task_msgs__msg__TaskDescription__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__TaskDescription__Sequence__fini(array);
  }
  free(array);
}
