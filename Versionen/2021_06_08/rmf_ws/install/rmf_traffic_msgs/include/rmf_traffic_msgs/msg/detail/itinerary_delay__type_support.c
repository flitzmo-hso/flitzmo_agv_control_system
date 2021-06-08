// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ItineraryDelay.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/itinerary_delay__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_delay__functions.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_delay__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ItineraryDelay__init(message_memory);
}

void ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ItineraryDelay__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_member_array[4] = {
  {
    "participant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItineraryDelay, participant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "from_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItineraryDelay, from_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItineraryDelay, delay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "itinerary_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItineraryDelay, itinerary_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ItineraryDelay",  // message name
  4,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ItineraryDelay),
  ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_member_array,  // message members
  ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_init_function,  // function to initialize message memory (memory has to be allocated)
  ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_type_support_handle = {
  0,
  &ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ItineraryDelay)() {
  if (!ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_type_support_handle.typesupport_identifier) {
    ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItineraryDelay__rosidl_typesupport_introspection_c__ItineraryDelay_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
