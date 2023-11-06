/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: intercept.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include <intercept.pb-c.h>
void   intercept_request__init
                     (InterceptRequest         *message)
{
  static const InterceptRequest init_value = INTERCEPT_REQUEST__INIT;
  *message = init_value;
}
size_t intercept_request__get_packed_size
                     (const InterceptRequest *message)
{
  assert(message->base.descriptor == &intercept_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t intercept_request__pack
                     (const InterceptRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &intercept_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t intercept_request__pack_to_buffer
                     (const InterceptRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &intercept_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
InterceptRequest *
       intercept_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (InterceptRequest *)
     protobuf_c_message_unpack (&intercept_request__descriptor,
                                allocator, len, data);
}
void   intercept_request__free_unpacked
                     (InterceptRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &intercept_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   intercept_hello__init
                     (InterceptHello         *message)
{
  static const InterceptHello init_value = INTERCEPT_HELLO__INIT;
  *message = init_value;
}
size_t intercept_hello__get_packed_size
                     (const InterceptHello *message)
{
  assert(message->base.descriptor == &intercept_hello__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t intercept_hello__pack
                     (const InterceptHello *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &intercept_hello__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t intercept_hello__pack_to_buffer
                     (const InterceptHello *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &intercept_hello__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
InterceptHello *
       intercept_hello__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (InterceptHello *)
     protobuf_c_message_unpack (&intercept_hello__descriptor,
                                allocator, len, data);
}
void   intercept_hello__free_unpacked
                     (InterceptHello *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &intercept_hello__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   hello_response__init
                     (HelloResponse         *message)
{
  static const HelloResponse init_value = HELLO_RESPONSE__INIT;
  *message = init_value;
}
size_t hello_response__get_packed_size
                     (const HelloResponse *message)
{
  assert(message->base.descriptor == &hello_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t hello_response__pack
                     (const HelloResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &hello_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t hello_response__pack_to_buffer
                     (const HelloResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &hello_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
HelloResponse *
       hello_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (HelloResponse *)
     protobuf_c_message_unpack (&hello_response__descriptor,
                                allocator, len, data);
}
void   hello_response__free_unpacked
                     (HelloResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &hello_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_check_request__init
                     (PolicyCheckRequest         *message)
{
  static const PolicyCheckRequest init_value = POLICY_CHECK_REQUEST__INIT;
  *message = init_value;
}
size_t policy_check_request__get_packed_size
                     (const PolicyCheckRequest *message)
{
  assert(message->base.descriptor == &policy_check_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_check_request__pack
                     (const PolicyCheckRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_check_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_check_request__pack_to_buffer
                     (const PolicyCheckRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_check_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyCheckRequest *
       policy_check_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyCheckRequest *)
     protobuf_c_message_unpack (&policy_check_request__descriptor,
                                allocator, len, data);
}
void   policy_check_request__free_unpacked
                     (PolicyCheckRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_check_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_accept_message__init
                     (PolicyAcceptMessage         *message)
{
  static const PolicyAcceptMessage init_value = POLICY_ACCEPT_MESSAGE__INIT;
  *message = init_value;
}
size_t policy_accept_message__get_packed_size
                     (const PolicyAcceptMessage *message)
{
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_accept_message__pack
                     (const PolicyAcceptMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_accept_message__pack_to_buffer
                     (const PolicyAcceptMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyAcceptMessage *
       policy_accept_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyAcceptMessage *)
     protobuf_c_message_unpack (&policy_accept_message__descriptor,
                                allocator, len, data);
}
void   policy_accept_message__free_unpacked
                     (PolicyAcceptMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_reject_message__init
                     (PolicyRejectMessage         *message)
{
  static const PolicyRejectMessage init_value = POLICY_REJECT_MESSAGE__INIT;
  *message = init_value;
}
size_t policy_reject_message__get_packed_size
                     (const PolicyRejectMessage *message)
{
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_reject_message__pack
                     (const PolicyRejectMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_reject_message__pack_to_buffer
                     (const PolicyRejectMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyRejectMessage *
       policy_reject_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyRejectMessage *)
     protobuf_c_message_unpack (&policy_reject_message__descriptor,
                                allocator, len, data);
}
void   policy_reject_message__free_unpacked
                     (PolicyRejectMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_error_message__init
                     (PolicyErrorMessage         *message)
{
  static const PolicyErrorMessage init_value = POLICY_ERROR_MESSAGE__INIT;
  *message = init_value;
}
size_t policy_error_message__get_packed_size
                     (const PolicyErrorMessage *message)
{
  assert(message->base.descriptor == &policy_error_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_error_message__pack
                     (const PolicyErrorMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_error_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_error_message__pack_to_buffer
                     (const PolicyErrorMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_error_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyErrorMessage *
       policy_error_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyErrorMessage *)
     protobuf_c_message_unpack (&policy_error_message__descriptor,
                                allocator, len, data);
}
void   policy_error_message__free_unpacked
                     (PolicyErrorMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_error_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   intercept_response__init
                     (InterceptResponse         *message)
{
  static const InterceptResponse init_value = INTERCEPT_RESPONSE__INIT;
  *message = init_value;
}
size_t intercept_response__get_packed_size
                     (const InterceptResponse *message)
{
  assert(message->base.descriptor == &intercept_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t intercept_response__pack
                     (const InterceptResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &intercept_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t intercept_response__pack_to_buffer
                     (const InterceptResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &intercept_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
InterceptResponse *
       intercept_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (InterceptResponse *)
     protobuf_c_message_unpack (&intercept_response__descriptor,
                                allocator, len, data);
}
void   intercept_response__free_unpacked
                     (InterceptResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &intercept_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor intercept_request__field_descriptors[2] =
{
  {
    "policy_check_req",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptRequest, type_case),
    offsetof(InterceptRequest, u.policy_check_req),
    &policy_check_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hello",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptRequest, type_case),
    offsetof(InterceptRequest, u.hello),
    &intercept_hello__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned intercept_request__field_indices_by_name[] = {
  1,   /* field[1] = hello */
  0,   /* field[0] = policy_check_req */
};
static const ProtobufCIntRange intercept_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor intercept_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "InterceptRequest",
  "InterceptRequest",
  "InterceptRequest",
  "",
  sizeof(InterceptRequest),
  2,
  intercept_request__field_descriptors,
  intercept_request__field_indices_by_name,
  1,  intercept_request__number_ranges,
  (ProtobufCMessageInit) intercept_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor intercept_hello__field_descriptors[1] =
{
  {
    "pid",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(InterceptHello, pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned intercept_hello__field_indices_by_name[] = {
  0,   /* field[0] = pid */
};
static const ProtobufCIntRange intercept_hello__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor intercept_hello__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "InterceptHello",
  "InterceptHello",
  "InterceptHello",
  "",
  sizeof(InterceptHello),
  1,
  intercept_hello__field_descriptors,
  intercept_hello__field_indices_by_name,
  1,  intercept_hello__number_ranges,
  (ProtobufCMessageInit) intercept_hello__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor hello_response__field_descriptors[4] =
{
  {
    "token_lo",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FIXED64,
    0,   /* quantifier_offset */
    offsetof(HelloResponse, token_lo),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "token_hi",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FIXED64,
    0,   /* quantifier_offset */
    offsetof(HelloResponse, token_hi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "portno",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(HelloResponse, portno),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_only",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(HelloResponse, log_only),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned hello_response__field_indices_by_name[] = {
  3,   /* field[3] = log_only */
  2,   /* field[2] = portno */
  1,   /* field[1] = token_hi */
  0,   /* field[0] = token_lo */
};
static const ProtobufCIntRange hello_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor hello_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "HelloResponse",
  "HelloResponse",
  "HelloResponse",
  "",
  sizeof(HelloResponse),
  4,
  hello_response__field_descriptors,
  hello_response__field_indices_by_name,
  1,  hello_response__number_ranges,
  (ProtobufCMessageInit) hello_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_check_request__field_descriptors[5] =
{
  {
    "command",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyCheckRequest, command),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cwd",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyCheckRequest, cwd),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "argv",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyCheckRequest, n_argv),
    offsetof(PolicyCheckRequest, argv),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "envp",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyCheckRequest, n_envp),
    offsetof(PolicyCheckRequest, envp),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "intercept_fd",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(PolicyCheckRequest, intercept_fd),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_check_request__field_indices_by_name[] = {
  2,   /* field[2] = argv */
  0,   /* field[0] = command */
  1,   /* field[1] = cwd */
  3,   /* field[3] = envp */
  4,   /* field[4] = intercept_fd */
};
static const ProtobufCIntRange policy_check_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor policy_check_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyCheckRequest",
  "PolicyCheckRequest",
  "PolicyCheckRequest",
  "",
  sizeof(PolicyCheckRequest),
  5,
  policy_check_request__field_descriptors,
  policy_check_request__field_indices_by_name,
  1,  policy_check_request__number_ranges,
  (ProtobufCMessageInit) policy_check_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_accept_message__field_descriptors[3] =
{
  {
    "run_command",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyAcceptMessage, run_command),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "run_argv",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyAcceptMessage, n_run_argv),
    offsetof(PolicyAcceptMessage, run_argv),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "run_envp",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyAcceptMessage, n_run_envp),
    offsetof(PolicyAcceptMessage, run_envp),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_accept_message__field_indices_by_name[] = {
  1,   /* field[1] = run_argv */
  0,   /* field[0] = run_command */
  2,   /* field[2] = run_envp */
};
static const ProtobufCIntRange policy_accept_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor policy_accept_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyAcceptMessage",
  "PolicyAcceptMessage",
  "PolicyAcceptMessage",
  "",
  sizeof(PolicyAcceptMessage),
  3,
  policy_accept_message__field_descriptors,
  policy_accept_message__field_indices_by_name,
  1,  policy_accept_message__number_ranges,
  (ProtobufCMessageInit) policy_accept_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_reject_message__field_descriptors[1] =
{
  {
    "reject_message",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyRejectMessage, reject_message),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_reject_message__field_indices_by_name[] = {
  0,   /* field[0] = reject_message */
};
static const ProtobufCIntRange policy_reject_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor policy_reject_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyRejectMessage",
  "PolicyRejectMessage",
  "PolicyRejectMessage",
  "",
  sizeof(PolicyRejectMessage),
  1,
  policy_reject_message__field_descriptors,
  policy_reject_message__field_indices_by_name,
  1,  policy_reject_message__number_ranges,
  (ProtobufCMessageInit) policy_reject_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_error_message__field_descriptors[1] =
{
  {
    "error_message",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyErrorMessage, error_message),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_error_message__field_indices_by_name[] = {
  0,   /* field[0] = error_message */
};
static const ProtobufCIntRange policy_error_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor policy_error_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyErrorMessage",
  "PolicyErrorMessage",
  "PolicyErrorMessage",
  "",
  sizeof(PolicyErrorMessage),
  1,
  policy_error_message__field_descriptors,
  policy_error_message__field_indices_by_name,
  1,  policy_error_message__number_ranges,
  (ProtobufCMessageInit) policy_error_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor intercept_response__field_descriptors[4] =
{
  {
    "hello_resp",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptResponse, type_case),
    offsetof(InterceptResponse, u.hello_resp),
    &hello_response__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "accept_msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptResponse, type_case),
    offsetof(InterceptResponse, u.accept_msg),
    &policy_accept_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reject_msg",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptResponse, type_case),
    offsetof(InterceptResponse, u.reject_msg),
    &policy_reject_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "error_msg",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptResponse, type_case),
    offsetof(InterceptResponse, u.error_msg),
    &policy_error_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned intercept_response__field_indices_by_name[] = {
  1,   /* field[1] = accept_msg */
  3,   /* field[3] = error_msg */
  0,   /* field[0] = hello_resp */
  2,   /* field[2] = reject_msg */
};
static const ProtobufCIntRange intercept_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor intercept_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "InterceptResponse",
  "InterceptResponse",
  "InterceptResponse",
  "",
  sizeof(InterceptResponse),
  4,
  intercept_response__field_descriptors,
  intercept_response__field_indices_by_name,
  1,  intercept_response__number_ranges,
  (ProtobufCMessageInit) intercept_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
