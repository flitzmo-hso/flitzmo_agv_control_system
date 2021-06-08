// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Tasks.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/tasks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `tasks`
#include "rmf_task_msgs/msg/detail/task_summary__functions.h"

bool
rmf_task_msgs__msg__Tasks__init(rmf_task_msgs__msg__Tasks * msg)
{
  if (!msg) {
    return false;
  }
  // tasks
  if (!rmf_task_msgs__msg__TaskSummary__Sequence__init(&msg->tasks, 0)) {
    rmf_task_msgs__msg__Tasks__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Tasks__fini(rmf_task_msgs__msg__Tasks * msg)
{
  if (!msg) {
    return;
  }
  // tasks
  rmf_task_msgs__msg__TaskSummary__Sequence__fini(&msg->tasks);
}

rmf_task_msgs__msg__Tasks *
rmf_task_msgs__msg__Tasks__create()
{
  rmf_task_msgs__msg__Tasks * msg = (rmf_task_msgs__msg__Tasks *)malloc(sizeof(rmf_task_msgs__msg__Tasks));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Tasks));
  bool success = rmf_task_msgs__msg__Tasks__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Tasks__destroy(rmf_task_msgs__msg__Tasks * msg)
{
  if (msg) {
    rmf_task_msgs__msg__Tasks__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__Tasks__Sequence__init(rmf_task_msgs__msg__Tasks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__Tasks * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__Tasks *)calloc(size, sizeof(rmf_task_msgs__msg__Tasks));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Tasks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Tasks__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Tasks__Sequence__fini(rmf_task_msgs__msg__Tasks__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__Tasks__fini(&array->data[i]);
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

rmf_task_msgs__msg__Tasks__Sequence *
rmf_task_msgs__msg__Tasks__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__Tasks__Sequence * array = (rmf_task_msgs__msg__Tasks__Sequence *)malloc(sizeof(rmf_task_msgs__msg__Tasks__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Tasks__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Tasks__Sequence__destroy(rmf_task_msgs__msg__Tasks__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__Tasks__Sequence__fini(array);
  }
  free(array);
}
