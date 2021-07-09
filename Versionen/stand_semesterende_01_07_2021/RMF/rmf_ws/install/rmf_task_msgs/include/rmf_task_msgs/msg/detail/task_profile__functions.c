// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/TaskProfile.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/task_profile__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `submission_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `description`
#include "rmf_task_msgs/msg/detail/task_description__functions.h"

bool
rmf_task_msgs__msg__TaskProfile__init(rmf_task_msgs__msg__TaskProfile * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__TaskProfile__fini(msg);
    return false;
  }
  // submission_time
  if (!builtin_interfaces__msg__Time__init(&msg->submission_time)) {
    rmf_task_msgs__msg__TaskProfile__fini(msg);
    return false;
  }
  // description
  if (!rmf_task_msgs__msg__TaskDescription__init(&msg->description)) {
    rmf_task_msgs__msg__TaskProfile__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__TaskProfile__fini(rmf_task_msgs__msg__TaskProfile * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // submission_time
  builtin_interfaces__msg__Time__fini(&msg->submission_time);
  // description
  rmf_task_msgs__msg__TaskDescription__fini(&msg->description);
}

rmf_task_msgs__msg__TaskProfile *
rmf_task_msgs__msg__TaskProfile__create()
{
  rmf_task_msgs__msg__TaskProfile * msg = (rmf_task_msgs__msg__TaskProfile *)malloc(sizeof(rmf_task_msgs__msg__TaskProfile));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__TaskProfile));
  bool success = rmf_task_msgs__msg__TaskProfile__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__TaskProfile__destroy(rmf_task_msgs__msg__TaskProfile * msg)
{
  if (msg) {
    rmf_task_msgs__msg__TaskProfile__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__TaskProfile__Sequence__init(rmf_task_msgs__msg__TaskProfile__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__TaskProfile * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__TaskProfile *)calloc(size, sizeof(rmf_task_msgs__msg__TaskProfile));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__TaskProfile__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__TaskProfile__fini(&data[i - 1]);
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
rmf_task_msgs__msg__TaskProfile__Sequence__fini(rmf_task_msgs__msg__TaskProfile__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__TaskProfile__fini(&array->data[i]);
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

rmf_task_msgs__msg__TaskProfile__Sequence *
rmf_task_msgs__msg__TaskProfile__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__TaskProfile__Sequence * array = (rmf_task_msgs__msg__TaskProfile__Sequence *)malloc(sizeof(rmf_task_msgs__msg__TaskProfile__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__TaskProfile__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__TaskProfile__Sequence__destroy(rmf_task_msgs__msg__TaskProfile__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__TaskProfile__Sequence__fini(array);
  }
  free(array);
}
