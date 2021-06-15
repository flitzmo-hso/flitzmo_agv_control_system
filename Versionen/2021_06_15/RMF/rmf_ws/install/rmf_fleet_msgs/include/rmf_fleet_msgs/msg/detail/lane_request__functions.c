// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/LaneRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/lane_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `fleet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `open_lanes`
// Member `close_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_fleet_msgs__msg__LaneRequest__init(rmf_fleet_msgs__msg__LaneRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
    return false;
  }
  // open_lanes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->open_lanes, 0)) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
    return false;
  }
  // close_lanes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->close_lanes, 0)) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__LaneRequest__fini(rmf_fleet_msgs__msg__LaneRequest * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // open_lanes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->open_lanes);
  // close_lanes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->close_lanes);
}

rmf_fleet_msgs__msg__LaneRequest *
rmf_fleet_msgs__msg__LaneRequest__create()
{
  rmf_fleet_msgs__msg__LaneRequest * msg = (rmf_fleet_msgs__msg__LaneRequest *)malloc(sizeof(rmf_fleet_msgs__msg__LaneRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__LaneRequest));
  bool success = rmf_fleet_msgs__msg__LaneRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__LaneRequest__destroy(rmf_fleet_msgs__msg__LaneRequest * msg)
{
  if (msg) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
  }
  free(msg);
}


bool
rmf_fleet_msgs__msg__LaneRequest__Sequence__init(rmf_fleet_msgs__msg__LaneRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_fleet_msgs__msg__LaneRequest * data = NULL;
  if (size) {
    data = (rmf_fleet_msgs__msg__LaneRequest *)calloc(size, sizeof(rmf_fleet_msgs__msg__LaneRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__LaneRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__LaneRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__LaneRequest__Sequence__fini(rmf_fleet_msgs__msg__LaneRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_fleet_msgs__msg__LaneRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__LaneRequest__Sequence *
rmf_fleet_msgs__msg__LaneRequest__Sequence__create(size_t size)
{
  rmf_fleet_msgs__msg__LaneRequest__Sequence * array = (rmf_fleet_msgs__msg__LaneRequest__Sequence *)malloc(sizeof(rmf_fleet_msgs__msg__LaneRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__LaneRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__LaneRequest__Sequence__destroy(rmf_fleet_msgs__msg__LaneRequest__Sequence * array)
{
  if (array) {
    rmf_fleet_msgs__msg__LaneRequest__Sequence__fini(array);
  }
  free(array);
}
