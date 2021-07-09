// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type_guid`
// Member `compartment_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_dispenser_msgs__msg__DispenserRequestItem__init(rmf_dispenser_msgs__msg__DispenserRequestItem * msg)
{
  if (!msg) {
    return false;
  }
  // type_guid
  if (!rosidl_runtime_c__String__init(&msg->type_guid)) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__fini(msg);
    return false;
  }
  // quantity
  // compartment_name
  if (!rosidl_runtime_c__String__init(&msg->compartment_name)) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__fini(msg);
    return false;
  }
  return true;
}

void
rmf_dispenser_msgs__msg__DispenserRequestItem__fini(rmf_dispenser_msgs__msg__DispenserRequestItem * msg)
{
  if (!msg) {
    return;
  }
  // type_guid
  rosidl_runtime_c__String__fini(&msg->type_guid);
  // quantity
  // compartment_name
  rosidl_runtime_c__String__fini(&msg->compartment_name);
}

rmf_dispenser_msgs__msg__DispenserRequestItem *
rmf_dispenser_msgs__msg__DispenserRequestItem__create()
{
  rmf_dispenser_msgs__msg__DispenserRequestItem * msg = (rmf_dispenser_msgs__msg__DispenserRequestItem *)malloc(sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem));
  bool success = rmf_dispenser_msgs__msg__DispenserRequestItem__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_dispenser_msgs__msg__DispenserRequestItem__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem * msg)
{
  if (msg) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__fini(msg);
  }
  free(msg);
}


bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_dispenser_msgs__msg__DispenserRequestItem * data = NULL;
  if (size) {
    data = (rmf_dispenser_msgs__msg__DispenserRequestItem *)calloc(size, sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_dispenser_msgs__msg__DispenserRequestItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_dispenser_msgs__msg__DispenserRequestItem__fini(&data[i - 1]);
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
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_dispenser_msgs__msg__DispenserRequestItem__fini(&array->data[i]);
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

rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__create(size_t size)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array = (rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)malloc(sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array)
{
  if (array) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(array);
  }
  free(array);
}
