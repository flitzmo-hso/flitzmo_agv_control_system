// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice
#include "rmf_workcell_msgs/msg/detail/trait__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_workcell_msgs__msg__Trait__init(rmf_workcell_msgs__msg__Trait * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    rmf_workcell_msgs__msg__Trait__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__Sequence__init(&msg->value, 0)) {
    rmf_workcell_msgs__msg__Trait__fini(msg);
    return false;
  }
  return true;
}

void
rmf_workcell_msgs__msg__Trait__fini(rmf_workcell_msgs__msg__Trait * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__Sequence__fini(&msg->value);
}

rmf_workcell_msgs__msg__Trait *
rmf_workcell_msgs__msg__Trait__create()
{
  rmf_workcell_msgs__msg__Trait * msg = (rmf_workcell_msgs__msg__Trait *)malloc(sizeof(rmf_workcell_msgs__msg__Trait));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_workcell_msgs__msg__Trait));
  bool success = rmf_workcell_msgs__msg__Trait__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_workcell_msgs__msg__Trait__destroy(rmf_workcell_msgs__msg__Trait * msg)
{
  if (msg) {
    rmf_workcell_msgs__msg__Trait__fini(msg);
  }
  free(msg);
}


bool
rmf_workcell_msgs__msg__Trait__Sequence__init(rmf_workcell_msgs__msg__Trait__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_workcell_msgs__msg__Trait * data = NULL;
  if (size) {
    data = (rmf_workcell_msgs__msg__Trait *)calloc(size, sizeof(rmf_workcell_msgs__msg__Trait));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_workcell_msgs__msg__Trait__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_workcell_msgs__msg__Trait__fini(&data[i - 1]);
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
rmf_workcell_msgs__msg__Trait__Sequence__fini(rmf_workcell_msgs__msg__Trait__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_workcell_msgs__msg__Trait__fini(&array->data[i]);
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

rmf_workcell_msgs__msg__Trait__Sequence *
rmf_workcell_msgs__msg__Trait__Sequence__create(size_t size)
{
  rmf_workcell_msgs__msg__Trait__Sequence * array = (rmf_workcell_msgs__msg__Trait__Sequence *)malloc(sizeof(rmf_workcell_msgs__msg__Trait__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_workcell_msgs__msg__Trait__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_workcell_msgs__msg__Trait__Sequence__destroy(rmf_workcell_msgs__msg__Trait__Sequence * array)
{
  if (array) {
    rmf_workcell_msgs__msg__Trait__Sequence__fini(array);
  }
  free(array);
}
