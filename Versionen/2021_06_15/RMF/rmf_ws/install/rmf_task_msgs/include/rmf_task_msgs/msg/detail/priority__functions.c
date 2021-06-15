// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Priority.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/priority__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmf_task_msgs__msg__Priority__init(rmf_task_msgs__msg__Priority * msg)
{
  if (!msg) {
    return false;
  }
  // value
  msg->value = 0ull;
  return true;
}

void
rmf_task_msgs__msg__Priority__fini(rmf_task_msgs__msg__Priority * msg)
{
  if (!msg) {
    return;
  }
  // value
}

rmf_task_msgs__msg__Priority *
rmf_task_msgs__msg__Priority__create()
{
  rmf_task_msgs__msg__Priority * msg = (rmf_task_msgs__msg__Priority *)malloc(sizeof(rmf_task_msgs__msg__Priority));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Priority));
  bool success = rmf_task_msgs__msg__Priority__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Priority__destroy(rmf_task_msgs__msg__Priority * msg)
{
  if (msg) {
    rmf_task_msgs__msg__Priority__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__Priority__Sequence__init(rmf_task_msgs__msg__Priority__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__Priority * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__Priority *)calloc(size, sizeof(rmf_task_msgs__msg__Priority));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Priority__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Priority__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Priority__Sequence__fini(rmf_task_msgs__msg__Priority__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__Priority__fini(&array->data[i]);
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

rmf_task_msgs__msg__Priority__Sequence *
rmf_task_msgs__msg__Priority__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__Priority__Sequence * array = (rmf_task_msgs__msg__Priority__Sequence *)malloc(sizeof(rmf_task_msgs__msg__Priority__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Priority__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Priority__Sequence__destroy(rmf_task_msgs__msg__Priority__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__Priority__Sequence__fini(array);
  }
  free(array);
}
