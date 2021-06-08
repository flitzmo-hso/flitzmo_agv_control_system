// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:srv/RegisterQuery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/srv/detail/register_query__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/srv/detail/register_query__functions.h"
#include "rmf_traffic_msgs/srv/detail/register_query__struct.h"


// Include directives for member types
// Member `query`
#include "rmf_traffic_msgs/msg/schedule_query.h"
// Member `query`
#include "rmf_traffic_msgs/msg/detail/schedule_query__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__RegisterQuery_Request__init(message_memory);
}

void RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__RegisterQuery_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_member_array[1] = {
  {
    "query",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RegisterQuery_Request, query),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "RegisterQuery_Request",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs__srv__RegisterQuery_Request),
  RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_member_array,  // message members
  RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_type_support_handle = {
  0,
  &RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery_Request)() {
  RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleQuery)();
  if (!RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_type_support_handle.typesupport_identifier) {
    RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterQuery_Request__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_traffic_msgs/srv/detail/register_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/register_query__functions.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/register_query__struct.h"


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__RegisterQuery_Response__init(message_memory);
}

void RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__RegisterQuery_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_member_array[2] = {
  {
    "query_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RegisterQuery_Response, query_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RegisterQuery_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "RegisterQuery_Response",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs__srv__RegisterQuery_Response),
  RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_member_array,  // message members
  RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_type_support_handle = {
  0,
  &RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery_Response)() {
  if (!RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_type_support_handle.typesupport_identifier) {
    RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterQuery_Response__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/register_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_members = {
  "rmf_traffic_msgs__srv",  // service namespace
  "RegisterQuery",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_Request_message_type_support_handle,
  NULL  // response message
  // rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_type_support_handle = {
  0,
  &rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery)() {
  if (!rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RegisterQuery_Response)()->data;
  }

  return &rmf_traffic_msgs__srv__detail__register_query__rosidl_typesupport_introspection_c__RegisterQuery_service_type_support_handle;
}
