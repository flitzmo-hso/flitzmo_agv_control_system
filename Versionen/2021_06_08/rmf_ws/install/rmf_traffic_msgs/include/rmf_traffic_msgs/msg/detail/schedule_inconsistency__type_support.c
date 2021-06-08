// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__struct.h"


// Include directives for member types
// Member `ranges`
#include "rmf_traffic_msgs/msg/schedule_inconsistency_range.h"
// Member `ranges`
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleInconsistency__init(message_memory);
}

void ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleInconsistency__fini(message_memory);
}

size_t ScheduleInconsistency__rosidl_typesupport_introspection_c__size_function__ScheduleInconsistencyRange__ranges(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence *)(untyped_member);
  return member->size;
}

const void * ScheduleInconsistency__rosidl_typesupport_introspection_c__get_const_function__ScheduleInconsistencyRange__ranges(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ScheduleInconsistency__rosidl_typesupport_introspection_c__get_function__ScheduleInconsistencyRange__ranges(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ScheduleInconsistency__rosidl_typesupport_introspection_c__resize_function__ScheduleInconsistencyRange__ranges(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_member_array[3] = {
  {
    "participant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleInconsistency, participant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleInconsistency, ranges),  // bytes offset in struct
    NULL,  // default value
    ScheduleInconsistency__rosidl_typesupport_introspection_c__size_function__ScheduleInconsistencyRange__ranges,  // size() function pointer
    ScheduleInconsistency__rosidl_typesupport_introspection_c__get_const_function__ScheduleInconsistencyRange__ranges,  // get_const(index) function pointer
    ScheduleInconsistency__rosidl_typesupport_introspection_c__get_function__ScheduleInconsistencyRange__ranges,  // get(index) function pointer
    ScheduleInconsistency__rosidl_typesupport_introspection_c__resize_function__ScheduleInconsistencyRange__ranges  // resize(index) function pointer
  },
  {
    "last_known_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleInconsistency, last_known_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleInconsistency",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleInconsistency),
  ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_member_array,  // message members
  ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_type_support_handle = {
  0,
  &ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleInconsistency)() {
  ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleInconsistencyRange)();
  if (!ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_type_support_handle.typesupport_identifier) {
    ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScheduleInconsistency__rosidl_typesupport_introspection_c__ScheduleInconsistency_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
