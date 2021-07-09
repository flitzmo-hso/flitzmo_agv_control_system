// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/dock_parameter__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/dock_parameter__functions.h"
#include "rmf_fleet_msgs/msg/detail/dock_parameter__struct.h"


// Include directives for member types
// Member `start`
// Member `finish`
#include "rosidl_runtime_c/string_functions.h"
// Member `path`
#include "rmf_fleet_msgs/msg/location.h"
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DockParameter__rosidl_typesupport_introspection_c__DockParameter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__DockParameter__init(message_memory);
}

void DockParameter__rosidl_typesupport_introspection_c__DockParameter_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__DockParameter__fini(message_memory);
}

size_t DockParameter__rosidl_typesupport_introspection_c__size_function__Location__path(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__Location__Sequence * member =
    (const rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return member->size;
}

const void * DockParameter__rosidl_typesupport_introspection_c__get_const_function__Location__path(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__Location__Sequence * member =
    (const rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DockParameter__rosidl_typesupport_introspection_c__get_function__Location__path(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__Location__Sequence * member =
    (rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DockParameter__rosidl_typesupport_introspection_c__resize_function__Location__path(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__Location__Sequence * member =
    (rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__Location__Sequence__fini(member);
  return rmf_fleet_msgs__msg__Location__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_member_array[3] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockParameter, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finish",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockParameter, finish),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockParameter, path),  // bytes offset in struct
    NULL,  // default value
    DockParameter__rosidl_typesupport_introspection_c__size_function__Location__path,  // size() function pointer
    DockParameter__rosidl_typesupport_introspection_c__get_const_function__Location__path,  // get_const(index) function pointer
    DockParameter__rosidl_typesupport_introspection_c__get_function__Location__path,  // get(index) function pointer
    DockParameter__rosidl_typesupport_introspection_c__resize_function__Location__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "DockParameter",  // message name
  3,  // number of fields
  sizeof(rmf_fleet_msgs__msg__DockParameter),
  DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_member_array,  // message members
  DockParameter__rosidl_typesupport_introspection_c__DockParameter_init_function,  // function to initialize message memory (memory has to be allocated)
  DockParameter__rosidl_typesupport_introspection_c__DockParameter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle = {
  0,
  &DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DockParameter)() {
  DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, Location)();
  if (!DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle.typesupport_identifier) {
    DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
