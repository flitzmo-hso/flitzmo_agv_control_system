// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/Itinerary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/itinerary__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/itinerary__functions.h"
#include "rmf_traffic_msgs/msg/detail/itinerary__struct.h"


// Include directives for member types
// Member `routes`
#include "rmf_traffic_msgs/msg/route.h"
// Member `routes`
#include "rmf_traffic_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Itinerary__rosidl_typesupport_introspection_c__Itinerary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__Itinerary__init(message_memory);
}

void Itinerary__rosidl_typesupport_introspection_c__Itinerary_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__Itinerary__fini(message_memory);
}

size_t Itinerary__rosidl_typesupport_introspection_c__size_function__Route__routes(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__Route__Sequence * member =
    (const rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  return member->size;
}

const void * Itinerary__rosidl_typesupport_introspection_c__get_const_function__Route__routes(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__Route__Sequence * member =
    (const rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Itinerary__rosidl_typesupport_introspection_c__get_function__Route__routes(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__Route__Sequence * member =
    (rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Itinerary__rosidl_typesupport_introspection_c__resize_function__Route__routes(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__Route__Sequence * member =
    (rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__Route__Sequence__fini(member);
  return rmf_traffic_msgs__msg__Route__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_member_array[1] = {
  {
    "routes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Itinerary, routes),  // bytes offset in struct
    NULL,  // default value
    Itinerary__rosidl_typesupport_introspection_c__size_function__Route__routes,  // size() function pointer
    Itinerary__rosidl_typesupport_introspection_c__get_const_function__Route__routes,  // get_const(index) function pointer
    Itinerary__rosidl_typesupport_introspection_c__get_function__Route__routes,  // get(index) function pointer
    Itinerary__rosidl_typesupport_introspection_c__resize_function__Route__routes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "Itinerary",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs__msg__Itinerary),
  Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_member_array,  // message members
  Itinerary__rosidl_typesupport_introspection_c__Itinerary_init_function,  // function to initialize message memory (memory has to be allocated)
  Itinerary__rosidl_typesupport_introspection_c__Itinerary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_type_support_handle = {
  0,
  &Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Itinerary)() {
  Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Route)();
  if (!Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_type_support_handle.typesupport_identifier) {
    Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Itinerary__rosidl_typesupport_introspection_c__Itinerary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
