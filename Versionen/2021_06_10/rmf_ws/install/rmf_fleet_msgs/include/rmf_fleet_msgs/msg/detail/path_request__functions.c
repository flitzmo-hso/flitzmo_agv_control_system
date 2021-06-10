// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/PathRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/path_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `fleet_name`
// Member `robot_name`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__functions.h"

bool
rmf_fleet_msgs__msg__PathRequest__init(rmf_fleet_msgs__msg__PathRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__init(&msg->path, 0)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__PathRequest__fini(rmf_fleet_msgs__msg__PathRequest * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // path
  rmf_fleet_msgs__msg__Location__Sequence__fini(&msg->path);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
}

rmf_fleet_msgs__msg__PathRequest *
rmf_fleet_msgs__msg__PathRequest__create()
{
  rmf_fleet_msgs__msg__PathRequest * msg = (rmf_fleet_msgs__msg__PathRequest *)malloc(sizeof(rmf_fleet_msgs__msg__PathRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__PathRequest));
  bool success = rmf_fleet_msgs__msg__PathRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__PathRequest__destroy(rmf_fleet_msgs__msg__PathRequest * msg)
{
  if (msg) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__msg__PathRequest__Sequence__init(rmf_fleet_msgs__msg__PathRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__msg__PathRequest * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__msg__PathRequest *)calloc(size, sizeof(rmf_fleet_msgs__msg__PathRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__PathRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__PathRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__PathRequest__Sequence__fini(rmf_fleet_msgs__msg__PathRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__msg__PathRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__PathRequest__Sequence *
rmf_fleet_msgs__msg__PathRequest__Sequence__create(size_t size)
{
  rmf_fleet_msgs__msg__PathRequest__Sequence * array = (rmf_fleet_msgs__msg__PathRequest__Sequence *)malloc(sizeof(rmf_fleet_msgs__msg__PathRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__PathRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__PathRequest__Sequence__destroy(rmf_fleet_msgs__msg__PathRequest__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__msg__PathRequest__Sequence__fini(array);
  }
  free(array);
}
