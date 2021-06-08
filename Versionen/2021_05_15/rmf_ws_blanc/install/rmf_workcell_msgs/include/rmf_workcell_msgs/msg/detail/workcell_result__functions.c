// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_workcell_msgs:msg/WorkcellResult.idl
// generated code does not contain a copyright notice
#include "rmf_workcell_msgs/msg/detail/workcell_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `request_guid`
// Member `source_guid`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_workcell_msgs__msg__WorkcellResult__init(rmf_workcell_msgs__msg__WorkcellResult * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_workcell_msgs__msg__WorkcellResult__fini(msg);
    return false;
  }
  // request_guid
  if (!rosidl_runtime_c__String__init(&msg->request_guid)) {
    rmf_workcell_msgs__msg__WorkcellResult__fini(msg);
    return false;
  }
  // source_guid
  if (!rosidl_runtime_c__String__init(&msg->source_guid)) {
    rmf_workcell_msgs__msg__WorkcellResult__fini(msg);
    return false;
  }
  // status
  return true;
}

void
rmf_workcell_msgs__msg__WorkcellResult__fini(rmf_workcell_msgs__msg__WorkcellResult * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // request_guid
  rosidl_runtime_c__String__fini(&msg->request_guid);
  // source_guid
  rosidl_runtime_c__String__fini(&msg->source_guid);
  // status
}

rmf_workcell_msgs__msg__WorkcellResult *
rmf_workcell_msgs__msg__WorkcellResult__create()
{
  rmf_workcell_msgs__msg__WorkcellResult * msg = (rmf_workcell_msgs__msg__WorkcellResult *)malloc(sizeof(rmf_workcell_msgs__msg__WorkcellResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_workcell_msgs__msg__WorkcellResult));
  bool success = rmf_workcell_msgs__msg__WorkcellResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_workcell_msgs__msg__WorkcellResult__destroy(rmf_workcell_msgs__msg__WorkcellResult * msg)
{
  if (msg) {
    rmf_workcell_msgs__msg__WorkcellResult__fini(msg);
  }
  free(msg);
}


bool
rmf_workcell_msgs__msg__WorkcellResult__Sequence__init(rmf_workcell_msgs__msg__WorkcellResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_workcell_msgs__msg__WorkcellResult * data = NULL;
  if (size) {
    data = (rmf_workcell_msgs__msg__WorkcellResult *)calloc(size, sizeof(rmf_workcell_msgs__msg__WorkcellResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_workcell_msgs__msg__WorkcellResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_workcell_msgs__msg__WorkcellResult__fini(&data[i - 1]);
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
rmf_workcell_msgs__msg__WorkcellResult__Sequence__fini(rmf_workcell_msgs__msg__WorkcellResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_workcell_msgs__msg__WorkcellResult__fini(&array->data[i]);
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

rmf_workcell_msgs__msg__WorkcellResult__Sequence *
rmf_workcell_msgs__msg__WorkcellResult__Sequence__create(size_t size)
{
  rmf_workcell_msgs__msg__WorkcellResult__Sequence * array = (rmf_workcell_msgs__msg__WorkcellResult__Sequence *)malloc(sizeof(rmf_workcell_msgs__msg__WorkcellResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_workcell_msgs__msg__WorkcellResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_workcell_msgs__msg__WorkcellResult__Sequence__destroy(rmf_workcell_msgs__msg__WorkcellResult__Sequence * array)
{
  if (array) {
    rmf_workcell_msgs__msg__WorkcellResult__Sequence__fini(array);
  }
  free(array);
}
