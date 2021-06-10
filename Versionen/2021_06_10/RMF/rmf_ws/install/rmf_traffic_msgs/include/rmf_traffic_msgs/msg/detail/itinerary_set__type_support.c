// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ItinerarySet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/itinerary_set__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_set__functions.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_set__struct.h"


// Include directives for member types
// Member `itinerary`
#include "rmf_traffic_msgs/msg/schedule_writer_item.h"
// Member `itinerary`
#include "rmf_traffic_msgs/msg/detail/schedule_writer_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ItinerarySet__init(message_memory);
}

void ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ItinerarySet__fini(message_memory);
}

size_t ItinerarySet__rosidl_typesupport_introspection_c__size_function__ScheduleWriterItem__itinerary(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence *)(untyped_member);
  return member->size;
}

const void * ItinerarySet__rosidl_typesupport_introspection_c__get_const_function__ScheduleWriterItem__itinerary(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ItinerarySet__rosidl_typesupport_introspection_c__get_function__ScheduleWriterItem__itinerary(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ItinerarySet__rosidl_typesupport_introspection_c__resize_function__ScheduleWriterItem__itinerary(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleWriterItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_member_array[3] = {
  {
    "participant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItinerarySet, participant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "itinerary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItinerarySet, itinerary),  // bytes offset in struct
    NULL,  // default value
    ItinerarySet__rosidl_typesupport_introspection_c__size_function__ScheduleWriterItem__itinerary,  // size() function pointer
    ItinerarySet__rosidl_typesupport_introspection_c__get_const_function__ScheduleWriterItem__itinerary,  // get_const(index) function pointer
    ItinerarySet__rosidl_typesupport_introspection_c__get_function__ScheduleWriterItem__itinerary,  // get(index) function pointer
    ItinerarySet__rosidl_typesupport_introspection_c__resize_function__ScheduleWriterItem__itinerary  // resize(index) function pointer
  },
  {
    "itinerary_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ItinerarySet, itinerary_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ItinerarySet",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ItinerarySet),
  ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_member_array,  // message members
  ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_init_function,  // function to initialize message memory (memory has to be allocated)
  ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_type_support_handle = {
  0,
  &ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ItinerarySet)() {
  ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleWriterItem)();
  if (!ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_type_support_handle.typesupport_identifier) {
    ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItinerarySet__rosidl_typesupport_introspection_c__ItinerarySet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
