// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_patch__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_patch__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.h"


// Include directives for member types
// Member `participants`
#include "rmf_traffic_msgs/msg/schedule_participant_patch.h"
// Member `participants`
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__rosidl_typesupport_introspection_c.h"
// Member `cull`
#include "rmf_traffic_msgs/msg/schedule_change_cull.h"
// Member `cull`
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__SchedulePatch__init(message_memory);
}

void SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__SchedulePatch__fini(message_memory);
}

size_t SchedulePatch__rosidl_typesupport_introspection_c__size_function__ScheduleParticipantPatch__participants(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence *)(untyped_member);
  return member->size;
}

const void * SchedulePatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__participants(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SchedulePatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__participants(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SchedulePatch__rosidl_typesupport_introspection_c__resize_function__ScheduleParticipantPatch__participants(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(member, size);
}

size_t SchedulePatch__rosidl_typesupport_introspection_c__size_function__ScheduleChangeCull__cull(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence *)(untyped_member);
  return member->size;
}

const void * SchedulePatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeCull__cull(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SchedulePatch__rosidl_typesupport_introspection_c__get_function__ScheduleChangeCull__cull(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SchedulePatch__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeCull__cull(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_member_array[5] = {
  {
    "participants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__SchedulePatch, participants),  // bytes offset in struct
    NULL,  // default value
    SchedulePatch__rosidl_typesupport_introspection_c__size_function__ScheduleParticipantPatch__participants,  // size() function pointer
    SchedulePatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__participants,  // get_const(index) function pointer
    SchedulePatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__participants,  // get(index) function pointer
    SchedulePatch__rosidl_typesupport_introspection_c__resize_function__ScheduleParticipantPatch__participants  // resize(index) function pointer
  },
  {
    "cull",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__SchedulePatch, cull),  // bytes offset in struct
    NULL,  // default value
    SchedulePatch__rosidl_typesupport_introspection_c__size_function__ScheduleChangeCull__cull,  // size() function pointer
    SchedulePatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeCull__cull,  // get_const(index) function pointer
    SchedulePatch__rosidl_typesupport_introspection_c__get_function__ScheduleChangeCull__cull,  // get(index) function pointer
    SchedulePatch__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeCull__cull  // resize(index) function pointer
  },
  {
    "has_base_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__SchedulePatch, has_base_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__SchedulePatch, base_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latest_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__SchedulePatch, latest_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "SchedulePatch",  // message name
  5,  // number of fields
  sizeof(rmf_traffic_msgs__msg__SchedulePatch),
  SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_member_array,  // message members
  SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_init_function,  // function to initialize message memory (memory has to be allocated)
  SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_type_support_handle = {
  0,
  &SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, SchedulePatch)() {
  SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleParticipantPatch)();
  SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeCull)();
  if (!SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_type_support_handle.typesupport_identifier) {
    SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SchedulePatch__rosidl_typesupport_introspection_c__SchedulePatch_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
