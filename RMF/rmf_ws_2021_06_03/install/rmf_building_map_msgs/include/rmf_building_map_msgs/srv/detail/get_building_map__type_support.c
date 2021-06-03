// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/srv/detail/get_building_map__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/srv/detail/get_building_map__functions.h"
#include "rmf_building_map_msgs/srv/detail/get_building_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__srv__GetBuildingMap_Request__init(message_memory);
}

void GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_fini_function(void * message_memory)
{
  rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__srv__GetBuildingMap_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_members = {
  "rmf_building_map_msgs__srv",  // message namespace
  "GetBuildingMap_Request",  // message name
  1,  // number of fields
  sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request),
  GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_member_array,  // message members
  GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_type_support_handle = {
  0,
  &GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap_Request)() {
  if (!GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_type_support_handle.typesupport_identifier) {
    GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetBuildingMap_Request__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_building_map_msgs/srv/detail/get_building_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_building_map_msgs/srv/detail/get_building_map__functions.h"
// already included above
// #include "rmf_building_map_msgs/srv/detail/get_building_map__struct.h"


// Include directives for member types
// Member `building_map`
#include "rmf_building_map_msgs/msg/building_map.h"
// Member `building_map`
#include "rmf_building_map_msgs/msg/detail/building_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__srv__GetBuildingMap_Response__init(message_memory);
}

void GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_fini_function(void * message_memory)
{
  rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_member_array[1] = {
  {
    "building_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__srv__GetBuildingMap_Response, building_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_members = {
  "rmf_building_map_msgs__srv",  // message namespace
  "GetBuildingMap_Response",  // message name
  1,  // number of fields
  sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response),
  GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_member_array,  // message members
  GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_type_support_handle = {
  0,
  &GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap_Response)() {
  GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, BuildingMap)();
  if (!GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_type_support_handle.typesupport_identifier) {
    GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetBuildingMap_Response__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_building_map_msgs/srv/detail/get_building_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_members = {
  "rmf_building_map_msgs__srv",  // service namespace
  "GetBuildingMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_Request_message_type_support_handle,
  NULL  // response message
  // rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_type_support_handle = {
  0,
  &rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap)() {
  if (!rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_type_support_handle.typesupport_identifier) {
    rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, srv, GetBuildingMap_Response)()->data;
  }

  return &rmf_building_map_msgs__srv__detail__get_building_map__rosidl_typesupport_introspection_c__GetBuildingMap_service_type_support_handle;
}
