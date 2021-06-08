// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice
#include "rmf_lift_msgs/msg/detail/lift_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `lift_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `lift_name`
// Member `available_floors`
// Member `current_floor`
// Member `destination_floor`
// Member `session_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `available_modes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_lift_msgs__msg__LiftState__init(rmf_lift_msgs__msg__LiftState * msg)
{
  if (!msg) {
    return false;
  }
  // lift_time
  if (!builtin_interfaces__msg__Time__init(&msg->lift_time)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__init(&msg->lift_name)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // available_floors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_floors, 0)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // current_floor
  if (!rosidl_runtime_c__String__init(&msg->current_floor)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // destination_floor
  if (!rosidl_runtime_c__String__init(&msg->destination_floor)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // door_state
  // motion_state
  // available_modes
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->available_modes, 0)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // current_mode
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_lift_msgs__msg__LiftState__fini(rmf_lift_msgs__msg__LiftState * msg)
{
  if (!msg) {
    return;
  }
  // lift_time
  builtin_interfaces__msg__Time__fini(&msg->lift_time);
  // lift_name
  rosidl_runtime_c__String__fini(&msg->lift_name);
  // available_floors
  rosidl_runtime_c__String__Sequence__fini(&msg->available_floors);
  // current_floor
  rosidl_runtime_c__String__fini(&msg->current_floor);
  // destination_floor
  rosidl_runtime_c__String__fini(&msg->destination_floor);
  // door_state
  // motion_state
  // available_modes
  rosidl_runtime_c__uint8__Sequence__fini(&msg->available_modes);
  // current_mode
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
}

rmf_lift_msgs__msg__LiftState *
rmf_lift_msgs__msg__LiftState__create()
{
  rmf_lift_msgs__msg__LiftState * msg = (rmf_lift_msgs__msg__LiftState *)malloc(sizeof(rmf_lift_msgs__msg__LiftState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_lift_msgs__msg__LiftState));
  bool success = rmf_lift_msgs__msg__LiftState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_lift_msgs__msg__LiftState__destroy(rmf_lift_msgs__msg__LiftState * msg)
{
  if (msg) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
  }
  free(msg);
}


bool
rmf_lift_msgs__msg__LiftState__Sequence__init(rmf_lift_msgs__msg__LiftState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_lift_msgs__msg__LiftState * data = NULL;
  if (size) {
    data = (rmf_lift_msgs__msg__LiftState *)calloc(size, sizeof(rmf_lift_msgs__msg__LiftState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_lift_msgs__msg__LiftState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_lift_msgs__msg__LiftState__fini(&data[i - 1]);
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
rmf_lift_msgs__msg__LiftState__Sequence__fini(rmf_lift_msgs__msg__LiftState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_lift_msgs__msg__LiftState__fini(&array->data[i]);
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

rmf_lift_msgs__msg__LiftState__Sequence *
rmf_lift_msgs__msg__LiftState__Sequence__create(size_t size)
{
  rmf_lift_msgs__msg__LiftState__Sequence * array = (rmf_lift_msgs__msg__LiftState__Sequence *)malloc(sizeof(rmf_lift_msgs__msg__LiftState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_lift_msgs__msg__LiftState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_lift_msgs__msg__LiftState__Sequence__destroy(rmf_lift_msgs__msg__LiftState__Sequence * array)
{
  if (array) {
    rmf_lift_msgs__msg__LiftState__Sequence__fini(array);
  }
  free(array);
}
