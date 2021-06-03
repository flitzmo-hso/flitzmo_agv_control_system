// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/level__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/level__functions.h"
#include "rmf_building_map_msgs/msg/detail/level__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "rmf_building_map_msgs/msg/affine_image.h"
// Member `images`
#include "rmf_building_map_msgs/msg/detail/affine_image__rosidl_typesupport_introspection_c.h"
// Member `places`
#include "rmf_building_map_msgs/msg/place.h"
// Member `places`
#include "rmf_building_map_msgs/msg/detail/place__rosidl_typesupport_introspection_c.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/door.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/detail/door__rosidl_typesupport_introspection_c.h"
// Member `nav_graphs`
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/graph.h"
// Member `nav_graphs`
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Level__rosidl_typesupport_introspection_c__Level_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__Level__init(message_memory);
}

void Level__rosidl_typesupport_introspection_c__Level_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__Level__fini(message_memory);
}

size_t Level__rosidl_typesupport_introspection_c__size_function__AffineImage__images(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (const rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  return member->size;
}

const void * Level__rosidl_typesupport_introspection_c__get_const_function__AffineImage__images(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (const rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Level__rosidl_typesupport_introspection_c__get_function__AffineImage__images(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Level__rosidl_typesupport_introspection_c__resize_function__AffineImage__images(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__AffineImage__Sequence__fini(member);
  return rmf_building_map_msgs__msg__AffineImage__Sequence__init(member, size);
}

size_t Level__rosidl_typesupport_introspection_c__size_function__Place__places(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Place__Sequence * member =
    (const rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  return member->size;
}

const void * Level__rosidl_typesupport_introspection_c__get_const_function__Place__places(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Place__Sequence * member =
    (const rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Level__rosidl_typesupport_introspection_c__get_function__Place__places(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Place__Sequence * member =
    (rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Level__rosidl_typesupport_introspection_c__resize_function__Place__places(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Place__Sequence * member =
    (rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Place__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Place__Sequence__init(member, size);
}

size_t Level__rosidl_typesupport_introspection_c__size_function__Door__doors(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Door__Sequence * member =
    (const rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return member->size;
}

const void * Level__rosidl_typesupport_introspection_c__get_const_function__Door__doors(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Door__Sequence * member =
    (const rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Level__rosidl_typesupport_introspection_c__get_function__Door__doors(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Door__Sequence * member =
    (rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Level__rosidl_typesupport_introspection_c__resize_function__Door__doors(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Door__Sequence * member =
    (rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Door__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Door__Sequence__init(member, size);
}

size_t Level__rosidl_typesupport_introspection_c__size_function__Graph__nav_graphs(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Graph__Sequence * member =
    (const rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  return member->size;
}

const void * Level__rosidl_typesupport_introspection_c__get_const_function__Graph__nav_graphs(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Graph__Sequence * member =
    (const rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Level__rosidl_typesupport_introspection_c__get_function__Graph__nav_graphs(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Graph__Sequence * member =
    (rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Level__rosidl_typesupport_introspection_c__resize_function__Graph__nav_graphs(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Graph__Sequence * member =
    (rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Graph__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Graph__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Level__rosidl_typesupport_introspection_c__Level_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, images),  // bytes offset in struct
    NULL,  // default value
    Level__rosidl_typesupport_introspection_c__size_function__AffineImage__images,  // size() function pointer
    Level__rosidl_typesupport_introspection_c__get_const_function__AffineImage__images,  // get_const(index) function pointer
    Level__rosidl_typesupport_introspection_c__get_function__AffineImage__images,  // get(index) function pointer
    Level__rosidl_typesupport_introspection_c__resize_function__AffineImage__images  // resize(index) function pointer
  },
  {
    "places",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, places),  // bytes offset in struct
    NULL,  // default value
    Level__rosidl_typesupport_introspection_c__size_function__Place__places,  // size() function pointer
    Level__rosidl_typesupport_introspection_c__get_const_function__Place__places,  // get_const(index) function pointer
    Level__rosidl_typesupport_introspection_c__get_function__Place__places,  // get(index) function pointer
    Level__rosidl_typesupport_introspection_c__resize_function__Place__places  // resize(index) function pointer
  },
  {
    "doors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, doors),  // bytes offset in struct
    NULL,  // default value
    Level__rosidl_typesupport_introspection_c__size_function__Door__doors,  // size() function pointer
    Level__rosidl_typesupport_introspection_c__get_const_function__Door__doors,  // get_const(index) function pointer
    Level__rosidl_typesupport_introspection_c__get_function__Door__doors,  // get(index) function pointer
    Level__rosidl_typesupport_introspection_c__resize_function__Door__doors  // resize(index) function pointer
  },
  {
    "nav_graphs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, nav_graphs),  // bytes offset in struct
    NULL,  // default value
    Level__rosidl_typesupport_introspection_c__size_function__Graph__nav_graphs,  // size() function pointer
    Level__rosidl_typesupport_introspection_c__get_const_function__Graph__nav_graphs,  // get_const(index) function pointer
    Level__rosidl_typesupport_introspection_c__get_function__Graph__nav_graphs,  // get(index) function pointer
    Level__rosidl_typesupport_introspection_c__resize_function__Graph__nav_graphs  // resize(index) function pointer
  },
  {
    "wall_graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, wall_graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Level__rosidl_typesupport_introspection_c__Level_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "Level",  // message name
  7,  // number of fields
  sizeof(rmf_building_map_msgs__msg__Level),
  Level__rosidl_typesupport_introspection_c__Level_message_member_array,  // message members
  Level__rosidl_typesupport_introspection_c__Level_init_function,  // function to initialize message memory (memory has to be allocated)
  Level__rosidl_typesupport_introspection_c__Level_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle = {
  0,
  &Level__rosidl_typesupport_introspection_c__Level_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Level)() {
  Level__rosidl_typesupport_introspection_c__Level_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, AffineImage)();
  Level__rosidl_typesupport_introspection_c__Level_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Place)();
  Level__rosidl_typesupport_introspection_c__Level_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Door)();
  Level__rosidl_typesupport_introspection_c__Level_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Graph)();
  Level__rosidl_typesupport_introspection_c__Level_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Graph)();
  if (!Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle.typesupport_identifier) {
    Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
