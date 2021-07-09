// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/BuildingMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/building_map__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/building_map__functions.h"
#include "rmf_building_map_msgs/msg/detail/building_map__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `levels`
#include "rmf_building_map_msgs/msg/level.h"
// Member `levels`
#include "rmf_building_map_msgs/msg/detail/level__rosidl_typesupport_introspection_c.h"
// Member `lifts`
#include "rmf_building_map_msgs/msg/lift.h"
// Member `lifts`
#include "rmf_building_map_msgs/msg/detail/lift__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__BuildingMap__init(message_memory);
}

void BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__BuildingMap__fini(message_memory);
}

size_t BuildingMap__rosidl_typesupport_introspection_c__size_function__Level__levels(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Level__Sequence * member =
    (const rmf_building_map_msgs__msg__Level__Sequence *)(untyped_member);
  return member->size;
}

const void * BuildingMap__rosidl_typesupport_introspection_c__get_const_function__Level__levels(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Level__Sequence * member =
    (const rmf_building_map_msgs__msg__Level__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BuildingMap__rosidl_typesupport_introspection_c__get_function__Level__levels(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Level__Sequence * member =
    (rmf_building_map_msgs__msg__Level__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BuildingMap__rosidl_typesupport_introspection_c__resize_function__Level__levels(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Level__Sequence * member =
    (rmf_building_map_msgs__msg__Level__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Level__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Level__Sequence__init(member, size);
}

size_t BuildingMap__rosidl_typesupport_introspection_c__size_function__Lift__lifts(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Lift__Sequence * member =
    (const rmf_building_map_msgs__msg__Lift__Sequence *)(untyped_member);
  return member->size;
}

const void * BuildingMap__rosidl_typesupport_introspection_c__get_const_function__Lift__lifts(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Lift__Sequence * member =
    (const rmf_building_map_msgs__msg__Lift__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BuildingMap__rosidl_typesupport_introspection_c__get_function__Lift__lifts(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Lift__Sequence * member =
    (rmf_building_map_msgs__msg__Lift__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BuildingMap__rosidl_typesupport_introspection_c__resize_function__Lift__lifts(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Lift__Sequence * member =
    (rmf_building_map_msgs__msg__Lift__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Lift__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Lift__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__BuildingMap, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "levels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__BuildingMap, levels),  // bytes offset in struct
    NULL,  // default value
    BuildingMap__rosidl_typesupport_introspection_c__size_function__Level__levels,  // size() function pointer
    BuildingMap__rosidl_typesupport_introspection_c__get_const_function__Level__levels,  // get_const(index) function pointer
    BuildingMap__rosidl_typesupport_introspection_c__get_function__Level__levels,  // get(index) function pointer
    BuildingMap__rosidl_typesupport_introspection_c__resize_function__Level__levels  // resize(index) function pointer
  },
  {
    "lifts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__BuildingMap, lifts),  // bytes offset in struct
    NULL,  // default value
    BuildingMap__rosidl_typesupport_introspection_c__size_function__Lift__lifts,  // size() function pointer
    BuildingMap__rosidl_typesupport_introspection_c__get_const_function__Lift__lifts,  // get_const(index) function pointer
    BuildingMap__rosidl_typesupport_introspection_c__get_function__Lift__lifts,  // get(index) function pointer
    BuildingMap__rosidl_typesupport_introspection_c__resize_function__Lift__lifts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "BuildingMap",  // message name
  3,  // number of fields
  sizeof(rmf_building_map_msgs__msg__BuildingMap),
  BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_member_array,  // message members
  BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_init_function,  // function to initialize message memory (memory has to be allocated)
  BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_type_support_handle = {
  0,
  &BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, BuildingMap)() {
  BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Level)();
  BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Lift)();
  if (!BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_type_support_handle.typesupport_identifier) {
    BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BuildingMap__rosidl_typesupport_introspection_c__BuildingMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
