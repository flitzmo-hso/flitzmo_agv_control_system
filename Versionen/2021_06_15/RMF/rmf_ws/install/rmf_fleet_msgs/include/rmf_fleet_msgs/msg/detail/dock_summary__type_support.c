// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/DockSummary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/dock_summary__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/dock_summary__functions.h"
#include "rmf_fleet_msgs/msg/detail/dock_summary__struct.h"


// Include directives for member types
// Member `docks`
#include "rmf_fleet_msgs/msg/dock.h"
// Member `docks`
#include "rmf_fleet_msgs/msg/detail/dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DockSummary__rosidl_typesupport_introspection_c__DockSummary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__DockSummary__init(message_memory);
}

void DockSummary__rosidl_typesupport_introspection_c__DockSummary_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__DockSummary__fini(message_memory);
}

size_t DockSummary__rosidl_typesupport_introspection_c__size_function__Dock__docks(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__Dock__Sequence * member =
    (const rmf_fleet_msgs__msg__Dock__Sequence *)(untyped_member);
  return member->size;
}

const void * DockSummary__rosidl_typesupport_introspection_c__get_const_function__Dock__docks(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__Dock__Sequence * member =
    (const rmf_fleet_msgs__msg__Dock__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DockSummary__rosidl_typesupport_introspection_c__get_function__Dock__docks(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__Dock__Sequence * member =
    (rmf_fleet_msgs__msg__Dock__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DockSummary__rosidl_typesupport_introspection_c__resize_function__Dock__docks(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__Dock__Sequence * member =
    (rmf_fleet_msgs__msg__Dock__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__Dock__Sequence__fini(member);
  return rmf_fleet_msgs__msg__Dock__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_member_array[1] = {
  {
    "docks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockSummary, docks),  // bytes offset in struct
    NULL,  // default value
    DockSummary__rosidl_typesupport_introspection_c__size_function__Dock__docks,  // size() function pointer
    DockSummary__rosidl_typesupport_introspection_c__get_const_function__Dock__docks,  // get_const(index) function pointer
    DockSummary__rosidl_typesupport_introspection_c__get_function__Dock__docks,  // get(index) function pointer
    DockSummary__rosidl_typesupport_introspection_c__resize_function__Dock__docks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "DockSummary",  // message name
  1,  // number of fields
  sizeof(rmf_fleet_msgs__msg__DockSummary),
  DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_member_array,  // message members
  DockSummary__rosidl_typesupport_introspection_c__DockSummary_init_function,  // function to initialize message memory (memory has to be allocated)
  DockSummary__rosidl_typesupport_introspection_c__DockSummary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_type_support_handle = {
  0,
  &DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DockSummary)() {
  DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, Dock)();
  if (!DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_type_support_handle.typesupport_identifier) {
    DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DockSummary__rosidl_typesupport_introspection_c__DockSummary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
