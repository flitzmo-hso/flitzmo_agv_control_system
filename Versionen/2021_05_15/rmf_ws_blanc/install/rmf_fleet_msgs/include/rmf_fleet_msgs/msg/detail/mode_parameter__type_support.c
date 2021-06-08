// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/ModeParameter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/mode_parameter__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/mode_parameter__functions.h"
#include "rmf_fleet_msgs/msg/detail/mode_parameter__struct.h"


// Include directives for member types
// Member `name`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__ModeParameter__init(message_memory);
}

void ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__ModeParameter__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__ModeParameter, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__ModeParameter, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "ModeParameter",  // message name
  2,  // number of fields
  sizeof(rmf_fleet_msgs__msg__ModeParameter),
  ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_member_array,  // message members
  ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_init_function,  // function to initialize message memory (memory has to be allocated)
  ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_type_support_handle = {
  0,
  &ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, ModeParameter)() {
  if (!ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_type_support_handle.typesupport_identifier) {
    ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ModeParameter__rosidl_typesupport_introspection_c__ModeParameter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
