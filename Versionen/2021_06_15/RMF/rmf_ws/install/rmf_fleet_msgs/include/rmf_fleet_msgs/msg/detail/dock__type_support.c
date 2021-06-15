// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/Dock.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/dock__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/dock__functions.h"
#include "rmf_fleet_msgs/msg/detail/dock__struct.h"


// Include directives for member types
// Member `fleet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `params`
#include "rmf_fleet_msgs/msg/dock_parameter.h"
// Member `params`
#include "rmf_fleet_msgs/msg/detail/dock_parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Dock__rosidl_typesupport_introspection_c__Dock_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__Dock__init(message_memory);
}

void Dock__rosidl_typesupport_introspection_c__Dock_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__Dock__fini(message_memory);
}

size_t Dock__rosidl_typesupport_introspection_c__size_function__DockParameter__params(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__DockParameter__Sequence * member =
    (const rmf_fleet_msgs__msg__DockParameter__Sequence *)(untyped_member);
  return member->size;
}

const void * Dock__rosidl_typesupport_introspection_c__get_const_function__DockParameter__params(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__DockParameter__Sequence * member =
    (const rmf_fleet_msgs__msg__DockParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Dock__rosidl_typesupport_introspection_c__get_function__DockParameter__params(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__DockParameter__Sequence * member =
    (rmf_fleet_msgs__msg__DockParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Dock__rosidl_typesupport_introspection_c__resize_function__DockParameter__params(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__DockParameter__Sequence * member =
    (rmf_fleet_msgs__msg__DockParameter__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__DockParameter__Sequence__fini(member);
  return rmf_fleet_msgs__msg__DockParameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Dock__rosidl_typesupport_introspection_c__Dock_message_member_array[2] = {
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__Dock, fleet_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__Dock, params),  // bytes offset in struct
    NULL,  // default value
    Dock__rosidl_typesupport_introspection_c__size_function__DockParameter__params,  // size() function pointer
    Dock__rosidl_typesupport_introspection_c__get_const_function__DockParameter__params,  // get_const(index) function pointer
    Dock__rosidl_typesupport_introspection_c__get_function__DockParameter__params,  // get(index) function pointer
    Dock__rosidl_typesupport_introspection_c__resize_function__DockParameter__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Dock__rosidl_typesupport_introspection_c__Dock_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "Dock",  // message name
  2,  // number of fields
  sizeof(rmf_fleet_msgs__msg__Dock),
  Dock__rosidl_typesupport_introspection_c__Dock_message_member_array,  // message members
  Dock__rosidl_typesupport_introspection_c__Dock_init_function,  // function to initialize message memory (memory has to be allocated)
  Dock__rosidl_typesupport_introspection_c__Dock_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Dock__rosidl_typesupport_introspection_c__Dock_message_type_support_handle = {
  0,
  &Dock__rosidl_typesupport_introspection_c__Dock_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, Dock)() {
  Dock__rosidl_typesupport_introspection_c__Dock_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DockParameter)();
  if (!Dock__rosidl_typesupport_introspection_c__Dock_message_type_support_handle.typesupport_identifier) {
    Dock__rosidl_typesupport_introspection_c__Dock_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Dock__rosidl_typesupport_introspection_c__Dock_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
