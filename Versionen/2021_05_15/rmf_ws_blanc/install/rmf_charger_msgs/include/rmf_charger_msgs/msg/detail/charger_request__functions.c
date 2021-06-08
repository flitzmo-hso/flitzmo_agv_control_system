// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice
#include "rmf_charger_msgs/msg/detail/charger_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `charger_name`
// Member `fleet_name`
// Member `robot_name`
// Member `request_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_charger_msgs__msg__ChargerRequest__init(rmf_charger_msgs__msg__ChargerRequest * msg)
{
  if (!msg) {
    return false;
  }
  // charger_name
  if (!rosidl_runtime_c__String__init(&msg->charger_name)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // start_timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->start_timeout)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_charger_msgs__msg__ChargerRequest__fini(rmf_charger_msgs__msg__ChargerRequest * msg)
{
  if (!msg) {
    return;
  }
  // charger_name
  rosidl_runtime_c__String__fini(&msg->charger_name);
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // start_timeout
  builtin_interfaces__msg__Duration__fini(&msg->start_timeout);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
}

rmf_charger_msgs__msg__ChargerRequest *
rmf_charger_msgs__msg__ChargerRequest__create()
{
  rmf_charger_msgs__msg__ChargerRequest * msg = (rmf_charger_msgs__msg__ChargerRequest *)malloc(sizeof(rmf_charger_msgs__msg__ChargerRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_charger_msgs__msg__ChargerRequest));
  bool success = rmf_charger_msgs__msg__ChargerRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_charger_msgs__msg__ChargerRequest__destroy(rmf_charger_msgs__msg__ChargerRequest * msg)
{
  if (msg) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
  }
  free(msg);
}


bool
rmf_charger_msgs__msg__ChargerRequest__Sequence__init(rmf_charger_msgs__msg__ChargerRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_charger_msgs__msg__ChargerRequest * data = NULL;
  if (size) {
    data = (rmf_charger_msgs__msg__ChargerRequest *)calloc(size, sizeof(rmf_charger_msgs__msg__ChargerRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_charger_msgs__msg__ChargerRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_charger_msgs__msg__ChargerRequest__fini(&data[i - 1]);
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
rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(rmf_charger_msgs__msg__ChargerRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_charger_msgs__msg__ChargerRequest__fini(&array->data[i]);
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

rmf_charger_msgs__msg__ChargerRequest__Sequence *
rmf_charger_msgs__msg__ChargerRequest__Sequence__create(size_t size)
{
  rmf_charger_msgs__msg__ChargerRequest__Sequence * array = (rmf_charger_msgs__msg__ChargerRequest__Sequence *)malloc(sizeof(rmf_charger_msgs__msg__ChargerRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_charger_msgs__msg__ChargerRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_charger_msgs__msg__ChargerRequest__Sequence__destroy(rmf_charger_msgs__msg__ChargerRequest__Sequence * array)
{
  if (array) {
    rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(array);
  }
  free(array);
}
