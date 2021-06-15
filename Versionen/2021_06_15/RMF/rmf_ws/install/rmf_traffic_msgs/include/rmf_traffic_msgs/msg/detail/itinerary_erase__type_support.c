// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ItineraryErase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/itinerary_erase__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_erase__functions.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_erase__struct.h"


// Include directives for member types
// Member `routes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ItineraryErase__init(message_memory);
}

void ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ItineraryErase__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_member_array[3] = {
  {
    "participant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItineraryErase, participant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "routes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItineraryErase, routes),  // bytes offset in struct
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
    offsetof(rmf_traffic_msgs__msg__ItineraryErase, itinerary_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ItineraryErase",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ItineraryErase),
  ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_member_array,  // message members
  ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_init_function,  // function to initialize message memory (memory has to be allocated)
  ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_type_support_handle = {
  0,
  &ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ItineraryErase)() {
  if (!ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_type_support_handle.typesupport_identifier) {
    ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItineraryErase__rosidl_typesupport_introspection_c__ItineraryErase_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
