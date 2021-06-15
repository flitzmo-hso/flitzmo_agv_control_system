// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice
#include "rmf_lift_msgs/msg/detail/lift_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `lift_name`
// Member `session_id`
// Member `destination_floor`
#include "rosidl_runtime_c/string_functions.h"
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_lift_msgs__msg__LiftRequest__init(rmf_lift_msgs__msg__LiftRequest * msg)
{
  if (!msg) {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__init(&msg->lift_name)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__init(&msg->request_time)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // request_type
  // destination_floor
  if (!rosidl_runtime_c__String__init(&msg->destination_floor)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // door_state
  return true;
}

void
rmf_lift_msgs__msg__LiftRequest__fini(rmf_lift_msgs__msg__LiftRequest * msg)
{
  if (!msg) {
    return;
  }
  // lift_name
  rosidl_runtime_c__String__fini(&msg->lift_name);
  // request_time
  builtin_interfaces__msg__Time__fini(&msg->request_time);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // request_type
  // destination_floor
  rosidl_runtime_c__String__fini(&msg->destination_floor);
  // door_state
}

rmf_lift_msgs__msg__LiftRequest *
rmf_lift_msgs__msg__LiftRequest__create()
{
  rmf_lift_msgs__msg__LiftRequest * msg = (rmf_lift_msgs__msg__LiftRequest *)malloc(sizeof(rmf_lift_msgs__msg__LiftRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_lift_msgs__msg__LiftRequest));
  bool success = rmf_lift_msgs__msg__LiftRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_lift_msgs__msg__LiftRequest__destroy(rmf_lift_msgs__msg__LiftRequest * msg)
{
  if (msg) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
  }
  free(msg);
}


bool
rmf_lift_msgs__msg__LiftRequest__Sequence__init(rmf_lift_msgs__msg__LiftRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_lift_msgs__msg__LiftRequest * data = NULL;
  if (size) {
    data = (rmf_lift_msgs__msg__LiftRequest *)calloc(size, sizeof(rmf_lift_msgs__msg__LiftRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_lift_msgs__msg__LiftRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_lift_msgs__msg__LiftRequest__fini(&data[i - 1]);
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
rmf_lift_msgs__msg__LiftRequest__Sequence__fini(rmf_lift_msgs__msg__LiftRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_lift_msgs__msg__LiftRequest__fini(&array->data[i]);
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

rmf_lift_msgs__msg__LiftRequest__Sequence *
rmf_lift_msgs__msg__LiftRequest__Sequence__create(size_t size)
{
  rmf_lift_msgs__msg__LiftRequest__Sequence * array = (rmf_lift_msgs__msg__LiftRequest__Sequence *)malloc(sizeof(rmf_lift_msgs__msg__LiftRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_lift_msgs__msg__LiftRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_lift_msgs__msg__LiftRequest__Sequence__destroy(rmf_lift_msgs__msg__LiftRequest__Sequence * array)
{
  if (array) {
    rmf_lift_msgs__msg__LiftRequest__Sequence__fini(array);
  }
  free(array);
}
