// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `to_accommodate`
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"
// Member `itinerary`
#include "rmf_traffic_msgs/msg/detail/route__functions.h"

bool
rmf_traffic_msgs__msg__NegotiationProposal__init(rmf_traffic_msgs__msg__NegotiationProposal * msg)
{
  if (!msg) {
    return false;
  }
  // conflict_version
  // proposal_version
  // for_participant
  // to_accommodate
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(&msg->to_accommodate, 0)) {
    rmf_traffic_msgs__msg__NegotiationProposal__fini(msg);
    return false;
  }
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__init(&msg->itinerary, 0)) {
    rmf_traffic_msgs__msg__NegotiationProposal__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationProposal__fini(rmf_traffic_msgs__msg__NegotiationProposal * msg)
{
  if (!msg) {
    return;
  }
  // conflict_version
  // proposal_version
  // for_participant
  // to_accommodate
  rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(&msg->to_accommodate);
  // itinerary
  rmf_traffic_msgs__msg__Route__Sequence__fini(&msg->itinerary);
}

rmf_traffic_msgs__msg__NegotiationProposal *
rmf_traffic_msgs__msg__NegotiationProposal__create()
{
  rmf_traffic_msgs__msg__NegotiationProposal * msg = (rmf_traffic_msgs__msg__NegotiationProposal *)malloc(sizeof(rmf_traffic_msgs__msg__NegotiationProposal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationProposal));
  bool success = rmf_traffic_msgs__msg__NegotiationProposal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationProposal__destroy(rmf_traffic_msgs__msg__NegotiationProposal * msg)
{
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationProposal__fini(msg);
  }
  free(msg);
}


bool
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmf_traffic_msgs__msg__NegotiationProposal * data = NULL;
  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationProposal *)calloc(size, sizeof(rmf_traffic_msgs__msg__NegotiationProposal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationProposal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationProposal__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__NegotiationProposal__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationProposal__Sequence *
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__create(size_t size)
{
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array = (rmf_traffic_msgs__msg__NegotiationProposal__Sequence *)malloc(sizeof(rmf_traffic_msgs__msg__NegotiationProposal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array)
{
  if (array) {
    rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(array);
  }
  free(array);
}
