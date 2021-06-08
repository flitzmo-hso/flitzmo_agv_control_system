// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Tow.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/tow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `task_id`
// Member `object_type`
// Member `object_id`
// Member `pickup_place_name`
// Member `dropoff_place_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__Tow__init(rmf_task_msgs__msg__Tow * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__init(&msg->object_type)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // is_object_id_known
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__init(&msg->pickup_place_name)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // is_dropoff_place_known
  // dropoff_place_name
  if (!rosidl_runtime_c__String__init(&msg->dropoff_place_name)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Tow__fini(rmf_task_msgs__msg__Tow * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // object_type
  rosidl_runtime_c__String__fini(&msg->object_type);
  // is_object_id_known
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // pickup_place_name
  rosidl_runtime_c__String__fini(&msg->pickup_place_name);
  // is_dropoff_place_known
  // dropoff_place_name
  rosidl_runtime_c__String__fini(&msg->dropoff_place_name);
}

rmf_task_msgs__msg__Tow *
rmf_task_msgs__msg__Tow__create()
{
  rmf_task_msgs__msg__Tow * msg = (rmf_task_msgs__msg__Tow *)malloc(sizeof(rmf_task_msgs__msg__Tow));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Tow));
  bool success = rmf_task_msgs__msg__Tow__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Tow__destroy(rmf_task_msgs__msg__Tow * msg)
{
  if (msg) {
    rmf_task_msgs__msg__Tow__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__Tow__Sequence__init(rmf_task_msgs__msg__Tow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__Tow * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__Tow *)calloc(size, sizeof(rmf_task_msgs__msg__Tow));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Tow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Tow__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Tow__Sequence__fini(rmf_task_msgs__msg__Tow__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__Tow__fini(&array->data[i]);
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

rmf_task_msgs__msg__Tow__Sequence *
rmf_task_msgs__msg__Tow__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__Tow__Sequence * array = (rmf_task_msgs__msg__Tow__Sequence *)malloc(sizeof(rmf_task_msgs__msg__Tow__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Tow__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Tow__Sequence__destroy(rmf_task_msgs__msg__Tow__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__Tow__Sequence__fini(array);
  }
  free(array);
}
