// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from first_interfaces:msg/FirstMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "first_interfaces/msg/detail/first_message__rosidl_typesupport_introspection_c.h"
#include "first_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "first_interfaces/msg/detail/first_message__functions.h"
#include "first_interfaces/msg/detail/first_message__struct.h"


// Include directives for member types
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_interfaces__msg__FirstMessage__init(message_memory);
}

void FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_fini_function(void * message_memory)
{
  first_interfaces__msg__FirstMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_member_array[2] = {
  {
    "temperatures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(first_interfaces__msg__FirstMessage, temperatures),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__FirstMessage, variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_members = {
  "first_interfaces__msg",  // message namespace
  "FirstMessage",  // message name
  2,  // number of fields
  sizeof(first_interfaces__msg__FirstMessage),
  FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_member_array,  // message members
  FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_type_support_handle = {
  0,
  &FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, msg, FirstMessage)() {
  if (!FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_type_support_handle.typesupport_identifier) {
    FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FirstMessage__rosidl_typesupport_introspection_c__FirstMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
