// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_door_msgs/msg/detail/door_sessions__rosidl_typesupport_introspection_c.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_door_msgs/msg/detail/door_sessions__functions.h"
#include "rmf_door_msgs/msg/detail/door_sessions__struct.h"


// Include directives for member types
// Member `door_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `sessions`
#include "rmf_door_msgs/msg/session.h"
// Member `sessions`
#include "rmf_door_msgs/msg/detail/session__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_door_msgs__msg__DoorSessions__init(message_memory);
}

void DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_fini_function(void * message_memory)
{
  rmf_door_msgs__msg__DoorSessions__fini(message_memory);
}

size_t DoorSessions__rosidl_typesupport_introspection_c__size_function__Session__sessions(
  const void * untyped_member)
{
  const rmf_door_msgs__msg__Session__Sequence * member =
    (const rmf_door_msgs__msg__Session__Sequence *)(untyped_member);
  return member->size;
}

const void * DoorSessions__rosidl_typesupport_introspection_c__get_const_function__Session__sessions(
  const void * untyped_member, size_t index)
{
  const rmf_door_msgs__msg__Session__Sequence * member =
    (const rmf_door_msgs__msg__Session__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DoorSessions__rosidl_typesupport_introspection_c__get_function__Session__sessions(
  void * untyped_member, size_t index)
{
  rmf_door_msgs__msg__Session__Sequence * member =
    (rmf_door_msgs__msg__Session__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DoorSessions__rosidl_typesupport_introspection_c__resize_function__Session__sessions(
  void * untyped_member, size_t size)
{
  rmf_door_msgs__msg__Session__Sequence * member =
    (rmf_door_msgs__msg__Session__Sequence *)(untyped_member);
  rmf_door_msgs__msg__Session__Sequence__fini(member);
  return rmf_door_msgs__msg__Session__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_member_array[2] = {
  {
    "door_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__DoorSessions, door_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sessions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__DoorSessions, sessions),  // bytes offset in struct
    NULL,  // default value
    DoorSessions__rosidl_typesupport_introspection_c__size_function__Session__sessions,  // size() function pointer
    DoorSessions__rosidl_typesupport_introspection_c__get_const_function__Session__sessions,  // get_const(index) function pointer
    DoorSessions__rosidl_typesupport_introspection_c__get_function__Session__sessions,  // get(index) function pointer
    DoorSessions__rosidl_typesupport_introspection_c__resize_function__Session__sessions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_members = {
  "rmf_door_msgs__msg",  // message namespace
  "DoorSessions",  // message name
  2,  // number of fields
  sizeof(rmf_door_msgs__msg__DoorSessions),
  DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_member_array,  // message members
  DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_init_function,  // function to initialize message memory (memory has to be allocated)
  DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_type_support_handle = {
  0,
  &DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_door_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, DoorSessions)() {
  DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, Session)();
  if (!DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_type_support_handle.typesupport_identifier) {
    DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoorSessions__rosidl_typesupport_introspection_c__DoorSessions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
