// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:srv/FindWall.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/srv/detail/find_wall__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/srv/detail/find_wall__functions.h"
#include "custom_interfaces/srv/detail/find_wall__struct.h"


// Include directives for member types
// Member `move`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__FindWall_Request__init(message_memory);
}

void FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_fini_function(void * message_memory)
{
  custom_interfaces__srv__FindWall_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_member_array[1] = {
  {
    "move",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__FindWall_Request, move),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_members = {
  "custom_interfaces__srv",  // message namespace
  "FindWall_Request",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__srv__FindWall_Request),
  FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_member_array,  // message members
  FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_type_support_handle = {
  0,
  &FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall_Request)() {
  if (!FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_type_support_handle.typesupport_identifier) {
    FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindWall_Request__rosidl_typesupport_introspection_c__FindWall_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/srv/detail/find_wall__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/srv/detail/find_wall__functions.h"
// already included above
// #include "custom_interfaces/srv/detail/find_wall__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__FindWall_Response__init(message_memory);
}

void FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_fini_function(void * message_memory)
{
  custom_interfaces__srv__FindWall_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_member_array[1] = {
  {
    "wallfound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__FindWall_Response, wallfound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_members = {
  "custom_interfaces__srv",  // message namespace
  "FindWall_Response",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__srv__FindWall_Response),
  FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_member_array,  // message members
  FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_type_support_handle = {
  0,
  &FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall_Response)() {
  if (!FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_type_support_handle.typesupport_identifier) {
    FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindWall_Response__rosidl_typesupport_introspection_c__FindWall_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/find_wall__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_members = {
  "custom_interfaces__srv",  // service namespace
  "FindWall",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_type_support_handle = {
  0,
  &custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall)() {
  if (!custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, FindWall_Response)()->data;
  }

  return &custom_interfaces__srv__detail__find_wall__rosidl_typesupport_introspection_c__FindWall_service_type_support_handle;
}
