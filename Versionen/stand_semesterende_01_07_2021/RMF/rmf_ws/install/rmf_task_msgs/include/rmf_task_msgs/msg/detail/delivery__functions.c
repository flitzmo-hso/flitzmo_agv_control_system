// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/delivery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `task_id`
// Member `pickup_place_name`
// Member `pickup_dispenser`
// Member `dropoff_place_name`
// Member `dropoff_ingestor`
#include "rosidl_runtime_c/string_functions.h"
// Member `items`
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"
// Member `pickup_behavior`
// Member `dropoff_behavior`
#include "rmf_task_msgs/msg/detail/behavior__functions.h"

bool
rmf_task_msgs__msg__Delivery__init(rmf_task_msgs__msg__Delivery * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(&msg->items, 0)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__init(&msg->pickup_place_name)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // pickup_dispenser
  if (!rosidl_runtime_c__String__init(&msg->pickup_dispenser)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // pickup_behavior
  if (!rmf_task_msgs__msg__Behavior__init(&msg->pickup_behavior)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // dropoff_place_name
  if (!rosidl_runtime_c__String__init(&msg->dropoff_place_name)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // dropoff_ingestor
  if (!rosidl_runtime_c__String__init(&msg->dropoff_ingestor)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // dropoff_behavior
  if (!rmf_task_msgs__msg__Behavior__init(&msg->dropoff_behavior)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Delivery__fini(rmf_task_msgs__msg__Delivery * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // items
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(&msg->items);
  // pickup_place_name
  rosidl_runtime_c__String__fini(&msg->pickup_place_name);
  // pickup_dispenser
  rosidl_runtime_c__String__fini(&msg->pickup_dispenser);
  // pickup_behavior
  rmf_task_msgs__msg__Behavior__fini(&msg->pickup_behavior);
  // dropoff_place_name
  rosidl_runtime_c__String__fini(&msg->dropoff_place_name);
  // dropoff_ingestor
  rosidl_runtime_c__String__fini(&msg->dropoff_ingestor);
  // dropoff_behavior
  rmf_task_msgs__msg__Behavior__fini(&msg->dropoff_behavior);
}

rmf_task_msgs__msg__Delivery *
rmf_task_msgs__msg__Delivery__create()
{
  rmf_task_msgs__msg__Delivery * msg = (rmf_task_msgs__msg__Delivery *)malloc(sizeof(rmf_task_msgs__msg__Delivery));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Delivery));
  bool success = rmf_task_msgs__msg__Delivery__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Delivery__destroy(rmf_task_msgs__msg__Delivery * msg)
{
  if (msg) {
    rmf_task_msgs__msg__Delivery__fini(msg);
  }
  free(msg);
}


bool
rmf_task_msgs__msg__Delivery__Sequence__init(rmf_task_msgs__msg__Delivery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_task_msgs__msg__Delivery * data = NULL;
  if (size) {
    data = (rmf_task_msgs__msg__Delivery *)calloc(size, sizeof(rmf_task_msgs__msg__Delivery));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Delivery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Delivery__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Delivery__Sequence__fini(rmf_task_msgs__msg__Delivery__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_task_msgs__msg__Delivery__fini(&array->data[i]);
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

rmf_task_msgs__msg__Delivery__Sequence *
rmf_task_msgs__msg__Delivery__Sequence__create(size_t size)
{
  rmf_task_msgs__msg__Delivery__Sequence * array = (rmf_task_msgs__msg__Delivery__Sequence *)malloc(sizeof(rmf_task_msgs__msg__Delivery__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Delivery__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Delivery__Sequence__destroy(rmf_task_msgs__msg__Delivery__Sequence * array)
{
  if (array) {
    rmf_task_msgs__msg__Delivery__Sequence__fini(array);
  }
  free(array);
}
