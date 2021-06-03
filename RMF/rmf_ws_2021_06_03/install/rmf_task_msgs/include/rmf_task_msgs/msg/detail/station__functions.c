// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Station.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/station__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `task_id`
// Member `robot_type`
// Member `place_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__Station__init(rmf_task_msgs__msg__Station * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Station__fini(msg);
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__init(&msg->robot_type)) {
    rmf_task_msgs__msg__Station__fini(msg);
    return false;
  }
  // place_name
  if (!rosidl_runtime_c__String__init(&msg->place_name)) {
    rmf_task_msgs__msg__Station__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Station__fini(rmf_task_msgs__msg__Station * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // robot_type
  rosidl_runtime_c__String__fini(&msg->robot_type);
  // place_name
  rosidl_runtime_c__String__fini(&msg->place_name);
}

rmf_task_msgs__msg__Station *
rmf_task_msgs__msg__Station__create()
{
  rmf_task_msgs__msg__Station * msg = (rmf_task_msgs__msg__Station *)malloc(sizeof(rmf_task_msgs__msg__Station));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Station));
  bool success = rmf_task_msgs__msg__Station__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Station__destroy(rmf_task_msgs__msg__Station * msg)
{
  if (msg) {
    rmf_task_msgs__msg__Station__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__Station__Sequence__init(rmf_task_msgs__msg__Station__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__Station * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__Station *)calloc(size, sizeof(rmf_task_msgs__msg__Station));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Station__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Station__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Station__Sequence__fini(rmf_task_msgs__msg__Station__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__Station__fini(&array->data[i]);
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

rmf_task_msgs__msg__Station__Sequence *
rmf_task_msgs__msg__Station__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__Station__Sequence * array = (rmf_task_msgs__msg__Station__Sequence *)malloc(sizeof(rmf_task_msgs__msg__Station__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Station__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Station__Sequence__destroy(rmf_task_msgs__msg__Station__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__Station__Sequence__fini(array);
  }
  free(array);
}
