// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationParticipantAck.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmf_traffic_msgs__msg__NegotiationParticipantAck__init(rmf_traffic_msgs__msg__NegotiationParticipantAck * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // updating
  msg->updating = false;
  // itinerary_version
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationParticipantAck__fini(rmf_traffic_msgs__msg__NegotiationParticipantAck * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // updating
  // itinerary_version
}

rmf_traffic_msgs__msg__NegotiationParticipantAck *
rmf_traffic_msgs__msg__NegotiationParticipantAck__create()
{
  rmf_traffic_msgs__msg__NegotiationParticipantAck * msg = (rmf_traffic_msgs__msg__NegotiationParticipantAck *)malloc(sizeof(rmf_traffic_msgs__msg__NegotiationParticipantAck));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationParticipantAck));
  bool success = rmf_traffic_msgs__msg__NegotiationParticipantAck__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationParticipantAck__destroy(rmf_traffic_msgs__msg__NegotiationParticipantAck * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationParticipantAck__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__init(rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__NegotiationParticipantAck * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationParticipantAck *)calloc(size, sizeof(rmf_traffic_msgs__msg__NegotiationParticipantAck));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationParticipantAck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationParticipantAck__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__fini(rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__NegotiationParticipantAck__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence *
rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence * array = (rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__fini(array);
  }
  free(array);
}
