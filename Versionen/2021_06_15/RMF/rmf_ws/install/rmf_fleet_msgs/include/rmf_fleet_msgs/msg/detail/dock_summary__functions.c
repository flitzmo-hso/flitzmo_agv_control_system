// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/DockSummary.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/dock_summary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `docks`
#include "rmf_fleet_msgs/msg/detail/dock__functions.h"

bool
rmf_fleet_msgs__msg__DockSummary__init(rmf_fleet_msgs__msg__DockSummary * msg)
{
  if (!msg) {
    return false;
  }
  // docks
  if (!rmf_fleet_msgs__msg__Dock__Sequence__init(&msg->docks, 0)) {
    rmf_fleet_msgs__msg__DockSummary__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__DockSummary__fini(rmf_fleet_msgs__msg__DockSummary * msg)
{
  if (!msg) {
    return;
  }
  // docks
  rmf_fleet_msgs__msg__Dock__Sequence__fini(&msg->docks);
}

rmf_fleet_msgs__msg__DockSummary *
rmf_fleet_msgs__msg__DockSummary__create()
{
  rmf_fleet_msgs__msg__DockSummary * msg = (rmf_fleet_msgs__msg__DockSummary *)malloc(sizeof(rmf_fleet_msgs__msg__DockSummary));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__DockSummary));
  bool success = rmf_fleet_msgs__msg__DockSummary__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__DockSummary__destroy(rmf_fleet_msgs__msg__DockSummary * msg)
{
  if (msg) {
    rmf_fleet_msgs__msg__DockSummary__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__msg__DockSummary__Sequence__init(rmf_fleet_msgs__msg__DockSummary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__msg__DockSummary * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__msg__DockSummary *)calloc(size, sizeof(rmf_fleet_msgs__msg__DockSummary));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__DockSummary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__DockSummary__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__DockSummary__Sequence__fini(rmf_fleet_msgs__msg__DockSummary__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__msg__DockSummary__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__DockSummary__Sequence *
rmf_fleet_msgs__msg__DockSummary__Sequence__create(size_t size)
{
  rmf_fleet_msgs__msg__DockSummary__Sequence * array = (rmf_fleet_msgs__msg__DockSummary__Sequence *)malloc(sizeof(rmf_fleet_msgs__msg__DockSummary__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__DockSummary__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__DockSummary__Sequence__destroy(rmf_fleet_msgs__msg__DockSummary__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__msg__DockSummary__Sequence__fini(array);
  }
  free(array);
}
