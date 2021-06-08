// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.h"


// Include directives for member types
// Member `erasures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `delays`
#include "rmf_traffic_msgs/msg/schedule_change_delay.h"
// Member `delays`
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__rosidl_typesupport_introspection_c.h"
// Member `additions`
#include "rmf_traffic_msgs/msg/schedule_change_add.h"
// Member `additions`
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(message_memory);
}

void ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(message_memory);
}

size_t ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleChangeDelay__delays(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  return member->size;
}

const void * ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeDelay__delays(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleChangeDelay__delays(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeDelay__delays(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(member, size);
}

size_t ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleChangeAdd__additions(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence *)(untyped_member);
  return member->size;
}

const void * ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeAdd__additions(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleChangeAdd__additions(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeAdd__additions(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[5] = {
  {
    "participant_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, participant_id),  // bytes offset in struct
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
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, itinerary_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "erasures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, erasures),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, delays),  // bytes offset in struct
    NULL,  // default value
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleChangeDelay__delays,  // size() function pointer
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeDelay__delays,  // get_const(index) function pointer
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleChangeDelay__delays,  // get(index) function pointer
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeDelay__delays  // resize(index) function pointer
  },
  {
    "additions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, additions),  // bytes offset in struct
    NULL,  // default value
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleChangeAdd__additions,  // size() function pointer
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeAdd__additions,  // get_const(index) function pointer
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleChangeAdd__additions,  // get(index) function pointer
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeAdd__additions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleParticipantPatch",  // message name
  5,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch),
  ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array,  // message members
  ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle = {
  0,
  &ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleParticipantPatch)() {
  ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeDelay)();
  ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeAdd)();
  if (!ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle.typesupport_identifier) {
    ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
