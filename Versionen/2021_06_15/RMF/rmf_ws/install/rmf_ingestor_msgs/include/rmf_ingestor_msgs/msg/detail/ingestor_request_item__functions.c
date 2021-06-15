// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type_guid`
// Member `compartment_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_ingestor_msgs__msg__IngestorRequestItem__init(rmf_ingestor_msgs__msg__IngestorRequestItem * msg)
{
  if (!msg) {
    return false;
  }
  // type_guid
  if (!rosidl_runtime_c__String__init(&msg->type_guid)) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__fini(msg);
    return false;
  }
  // quantity
  // compartment_name
  if (!rosidl_runtime_c__String__init(&msg->compartment_name)) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__fini(msg);
    return false;
  }
  return true;
}

void
rmf_ingestor_msgs__msg__IngestorRequestItem__fini(rmf_ingestor_msgs__msg__IngestorRequestItem * msg)
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

rmf_ingestor_msgs__msg__IngestorRequestItem *
rmf_ingestor_msgs__msg__IngestorRequestItem__create()
{
  rmf_ingestor_msgs__msg__IngestorRequestItem * msg = (rmf_ingestor_msgs__msg__IngestorRequestItem *)malloc(sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem));
  bool success = rmf_ingestor_msgs__msg__IngestorRequestItem__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_ingestor_msgs__msg__IngestorRequestItem__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem * msg)
{
  if (msg) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__fini(msg);
  }
  free(msg);
}


bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_ingestor_msgs__msg__IngestorRequestItem * data = NULL;
  if (size) {
    data = (rmf_ingestor_msgs__msg__IngestorRequestItem *)calloc(size, sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_ingestor_msgs__msg__IngestorRequestItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_ingestor_msgs__msg__IngestorRequestItem__fini(&data[i - 1]);
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
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_ingestor_msgs__msg__IngestorRequestItem__fini(&array->data[i]);
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

rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__create(size_t size)
{
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array = (rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *)malloc(sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array)
{
  if (array) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(array);
  }
  free(array);
}
