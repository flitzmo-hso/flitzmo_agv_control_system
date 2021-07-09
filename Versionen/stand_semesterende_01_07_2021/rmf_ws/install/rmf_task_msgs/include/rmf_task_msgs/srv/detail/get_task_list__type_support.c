// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/srv/detail/get_task_list__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/srv/detail/get_task_list__functions.h"
#include "rmf_task_msgs/srv/detail/get_task_list__struct.h"


// Include directives for member types
// Member `requester`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__srv__GetTaskList_Request__init(message_memory);
}

void GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_fini_function(void * message_memory)
{
  rmf_task_msgs__srv__GetTaskList_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_member_array[2] = {
  {
    "requester",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__GetTaskList_Request, requester),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__GetTaskList_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_members = {
  "rmf_task_msgs__srv",  // message namespace
  "GetTaskList_Request",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs__srv__GetTaskList_Request),
  GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_member_array,  // message members
  GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle = {
  0,
  &GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList_Request)() {
  if (!GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle.typesupport_identifier) {
    GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_task_msgs/srv/detail/get_task_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_task_msgs/srv/detail/get_task_list__functions.h"
// already included above
// #include "rmf_task_msgs/srv/detail/get_task_list__struct.h"


// Include directives for member types
// Member `active_tasks`
// Member `terminated_tasks`
#include "rmf_task_msgs/msg/task_summary.h"
// Member `active_tasks`
// Member `terminated_tasks`
#include "rmf_task_msgs/msg/detail/task_summary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__srv__GetTaskList_Response__init(message_memory);
}

void GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_fini_function(void * message_memory)
{
  rmf_task_msgs__srv__GetTaskList_Response__fini(message_memory);
}

size_t GetTaskList_Response__rosidl_typesupport_introspection_c__size_function__TaskSummary__active_tasks(
  const void * untyped_member)
{
  const rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (const rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return member->size;
}

const void * GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__TaskSummary__active_tasks(
  const void * untyped_member, size_t index)
{
  const rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (const rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__TaskSummary__active_tasks(
  void * untyped_member, size_t index)
{
  rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetTaskList_Response__rosidl_typesupport_introspection_c__resize_function__TaskSummary__active_tasks(
  void * untyped_member, size_t size)
{
  rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  rmf_task_msgs__msg__TaskSummary__Sequence__fini(member);
  return rmf_task_msgs__msg__TaskSummary__Sequence__init(member, size);
}

size_t GetTaskList_Response__rosidl_typesupport_introspection_c__size_function__TaskSummary__terminated_tasks(
  const void * untyped_member)
{
  const rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (const rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return member->size;
}

const void * GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__TaskSummary__terminated_tasks(
  const void * untyped_member, size_t index)
{
  const rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (const rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__TaskSummary__terminated_tasks(
  void * untyped_member, size_t index)
{
  rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetTaskList_Response__rosidl_typesupport_introspection_c__resize_function__TaskSummary__terminated_tasks(
  void * untyped_member, size_t size)
{
  rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  rmf_task_msgs__msg__TaskSummary__Sequence__fini(member);
  return rmf_task_msgs__msg__TaskSummary__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__GetTaskList_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__GetTaskList_Response, active_tasks),  // bytes offset in struct
    NULL,  // default value
    GetTaskList_Response__rosidl_typesupport_introspection_c__size_function__TaskSummary__active_tasks,  // size() function pointer
    GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__TaskSummary__active_tasks,  // get_const(index) function pointer
    GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__TaskSummary__active_tasks,  // get(index) function pointer
    GetTaskList_Response__rosidl_typesupport_introspection_c__resize_function__TaskSummary__active_tasks  // resize(index) function pointer
  },
  {
    "terminated_tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__GetTaskList_Response, terminated_tasks),  // bytes offset in struct
    NULL,  // default value
    GetTaskList_Response__rosidl_typesupport_introspection_c__size_function__TaskSummary__terminated_tasks,  // size() function pointer
    GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__TaskSummary__terminated_tasks,  // get_const(index) function pointer
    GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__TaskSummary__terminated_tasks,  // get(index) function pointer
    GetTaskList_Response__rosidl_typesupport_introspection_c__resize_function__TaskSummary__terminated_tasks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_members = {
  "rmf_task_msgs__srv",  // message namespace
  "GetTaskList_Response",  // message name
  3,  // number of fields
  sizeof(rmf_task_msgs__srv__GetTaskList_Response),
  GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array,  // message members
  GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle = {
  0,
  &GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList_Response)() {
  GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskSummary)();
  GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskSummary)();
  if (!GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle.typesupport_identifier) {
    GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_task_msgs/srv/detail/get_task_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_members = {
  "rmf_task_msgs__srv",  // service namespace
  "GetTaskList",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle,
  NULL  // response message
  // rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle = {
  0,
  &rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList)() {
  if (!rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, GetTaskList_Response)()->data;
  }

  return &rmf_task_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle;
}
