// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ItineraryClear.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/itinerary_clear__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmf_traffic_msgs__msg__ItineraryClear__init(rmf_traffic_msgs__msg__ItineraryClear * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // itinerary_version
  return true;
}

void
rmf_traffic_msgs__msg__ItineraryClear__fini(rmf_traffic_msgs__msg__ItineraryClear * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // itinerary_version
}

rmf_traffic_msgs__msg__ItineraryClear *
rmf_traffic_msgs__msg__ItineraryClear__create()
{
  rmf_traffic_msgs__msg__ItineraryClear * msg = (rmf_traffic_msgs__msg__ItineraryClear *)malloc(sizeof(rmf_traffic_msgs__msg__ItineraryClear));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ItineraryClear));
  bool success = rmf_traffic_msgs__msg__ItineraryClear__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ItineraryClear__destroy(rmf_traffic_msgs__msg__ItineraryClear * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__ItineraryClear__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__ItineraryClear__Sequence__init(rmf_traffic_msgs__msg__ItineraryClear__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__ItineraryClear * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__ItineraryClear *)calloc(size, sizeof(rmf_traffic_msgs__msg__ItineraryClear));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ItineraryClear__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ItineraryClear__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ItineraryClear__Sequence__fini(rmf_traffic_msgs__msg__ItineraryClear__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__ItineraryClear__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ItineraryClear__Sequence *
rmf_traffic_msgs__msg__ItineraryClear__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__ItineraryClear__Sequence * array = (rmf_traffic_msgs__msg__ItineraryClear__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__ItineraryClear__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ItineraryClear__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ItineraryClear__Sequence__destroy(rmf_traffic_msgs__msg__ItineraryClear__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__ItineraryClear__Sequence__fini(array);
  }
  free(array);
}
