/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-io.h"

uint16_t _TRACE_QIO_TASK_NEW_DSTATE;
uint16_t _TRACE_QIO_TASK_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_TASK_THREAD_START_DSTATE;
uint16_t _TRACE_QIO_TASK_THREAD_RUN_DSTATE;
uint16_t _TRACE_QIO_TASK_THREAD_EXIT_DSTATE;
uint16_t _TRACE_QIO_TASK_THREAD_RESULT_DSTATE;
uint16_t _TRACE_QIO_TASK_THREAD_SOURCE_ATTACH_DSTATE;
uint16_t _TRACE_QIO_TASK_THREAD_SOURCE_CANCEL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_NULL_NEW_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_NEW_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_NEW_FD_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_CONNECT_SYNC_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_CONNECT_ASYNC_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_CONNECT_FAIL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_CONNECT_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_LISTEN_SYNC_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_LISTEN_ASYNC_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_LISTEN_FAIL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_LISTEN_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_DGRAM_SYNC_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_DGRAM_ASYNC_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_DGRAM_FAIL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_DGRAM_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_ACCEPT_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_ACCEPT_FAIL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_SOCKET_ACCEPT_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_FILE_NEW_FD_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_FILE_NEW_PATH_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_NEW_CLIENT_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_NEW_SERVER_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_START_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_PENDING_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_FAIL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_CREDENTIALS_ALLOW_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_TLS_CREDENTIALS_DENY_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_NEW_SERVER_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_START_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_PENDING_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_REPLY_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_FAIL_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_COMPLETE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HTTP_GREETING_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HTTP_REQUEST_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HEADER_PARTIAL_DECODE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_HEADER_FULL_DECODE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_PAYLOAD_DECODE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_ENCODE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_WEBSOCK_CLOSE_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_COMMAND_NEW_PID_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_COMMAND_NEW_SPAWN_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_COMMAND_ABORT_DSTATE;
uint16_t _TRACE_QIO_CHANNEL_COMMAND_WAIT_DSTATE;
TraceEvent _TRACE_QIO_TASK_NEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_new",
    .sstate = TRACE_QIO_TASK_NEW_ENABLED,
    .dstate = &_TRACE_QIO_TASK_NEW_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_complete",
    .sstate = TRACE_QIO_TASK_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_TASK_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_THREAD_START_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_thread_start",
    .sstate = TRACE_QIO_TASK_THREAD_START_ENABLED,
    .dstate = &_TRACE_QIO_TASK_THREAD_START_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_THREAD_RUN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_thread_run",
    .sstate = TRACE_QIO_TASK_THREAD_RUN_ENABLED,
    .dstate = &_TRACE_QIO_TASK_THREAD_RUN_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_THREAD_EXIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_thread_exit",
    .sstate = TRACE_QIO_TASK_THREAD_EXIT_ENABLED,
    .dstate = &_TRACE_QIO_TASK_THREAD_EXIT_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_THREAD_RESULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_thread_result",
    .sstate = TRACE_QIO_TASK_THREAD_RESULT_ENABLED,
    .dstate = &_TRACE_QIO_TASK_THREAD_RESULT_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_THREAD_SOURCE_ATTACH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_thread_source_attach",
    .sstate = TRACE_QIO_TASK_THREAD_SOURCE_ATTACH_ENABLED,
    .dstate = &_TRACE_QIO_TASK_THREAD_SOURCE_ATTACH_DSTATE 
};
TraceEvent _TRACE_QIO_TASK_THREAD_SOURCE_CANCEL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_task_thread_source_cancel",
    .sstate = TRACE_QIO_TASK_THREAD_SOURCE_CANCEL_ENABLED,
    .dstate = &_TRACE_QIO_TASK_THREAD_SOURCE_CANCEL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_NULL_NEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_null_new",
    .sstate = TRACE_QIO_CHANNEL_NULL_NEW_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_NULL_NEW_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_NEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_new",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_NEW_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_NEW_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_NEW_FD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_new_fd",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_NEW_FD_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_NEW_FD_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_CONNECT_SYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_connect_sync",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_CONNECT_SYNC_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_SYNC_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_CONNECT_ASYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_connect_async",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_CONNECT_ASYNC_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_ASYNC_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_CONNECT_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_connect_fail",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_CONNECT_FAIL_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_FAIL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_CONNECT_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_connect_complete",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_CONNECT_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_LISTEN_SYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_listen_sync",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_LISTEN_SYNC_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_SYNC_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_LISTEN_ASYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_listen_async",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_LISTEN_ASYNC_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_ASYNC_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_LISTEN_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_listen_fail",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_LISTEN_FAIL_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_FAIL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_LISTEN_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_listen_complete",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_LISTEN_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_DGRAM_SYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_dgram_sync",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_DGRAM_SYNC_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_SYNC_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_DGRAM_ASYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_dgram_async",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_DGRAM_ASYNC_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_ASYNC_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_DGRAM_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_dgram_fail",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_DGRAM_FAIL_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_FAIL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_DGRAM_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_dgram_complete",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_DGRAM_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_ACCEPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_accept",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_ACCEPT_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_ACCEPT_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_ACCEPT_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_accept_fail",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_ACCEPT_FAIL_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_ACCEPT_FAIL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_SOCKET_ACCEPT_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_socket_accept_complete",
    .sstate = TRACE_QIO_CHANNEL_SOCKET_ACCEPT_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_SOCKET_ACCEPT_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_FILE_NEW_FD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_file_new_fd",
    .sstate = TRACE_QIO_CHANNEL_FILE_NEW_FD_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_FILE_NEW_FD_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_FILE_NEW_PATH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_file_new_path",
    .sstate = TRACE_QIO_CHANNEL_FILE_NEW_PATH_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_FILE_NEW_PATH_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_NEW_CLIENT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_new_client",
    .sstate = TRACE_QIO_CHANNEL_TLS_NEW_CLIENT_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_NEW_CLIENT_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_NEW_SERVER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_new_server",
    .sstate = TRACE_QIO_CHANNEL_TLS_NEW_SERVER_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_NEW_SERVER_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_START_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_handshake_start",
    .sstate = TRACE_QIO_CHANNEL_TLS_HANDSHAKE_START_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_START_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_PENDING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_handshake_pending",
    .sstate = TRACE_QIO_CHANNEL_TLS_HANDSHAKE_PENDING_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_PENDING_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_handshake_fail",
    .sstate = TRACE_QIO_CHANNEL_TLS_HANDSHAKE_FAIL_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_FAIL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_HANDSHAKE_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_handshake_complete",
    .sstate = TRACE_QIO_CHANNEL_TLS_HANDSHAKE_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_CREDENTIALS_ALLOW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_credentials_allow",
    .sstate = TRACE_QIO_CHANNEL_TLS_CREDENTIALS_ALLOW_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_CREDENTIALS_ALLOW_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_TLS_CREDENTIALS_DENY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_tls_credentials_deny",
    .sstate = TRACE_QIO_CHANNEL_TLS_CREDENTIALS_DENY_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_TLS_CREDENTIALS_DENY_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_NEW_SERVER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_new_server",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_NEW_SERVER_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_NEW_SERVER_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_START_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_handshake_start",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_START_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_START_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_PENDING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_handshake_pending",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_PENDING_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_PENDING_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_REPLY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_handshake_reply",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_REPLY_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_REPLY_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_handshake_fail",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_FAIL_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_FAIL_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_handshake_complete",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_COMPLETE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HTTP_GREETING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_http_greeting",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HTTP_GREETING_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HTTP_GREETING_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HTTP_REQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_http_request",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HTTP_REQUEST_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HTTP_REQUEST_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HEADER_PARTIAL_DECODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_header_partial_decode",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HEADER_PARTIAL_DECODE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HEADER_PARTIAL_DECODE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_HEADER_FULL_DECODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_header_full_decode",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_HEADER_FULL_DECODE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_HEADER_FULL_DECODE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_PAYLOAD_DECODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_payload_decode",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_PAYLOAD_DECODE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_PAYLOAD_DECODE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_ENCODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_encode",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_ENCODE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_ENCODE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_WEBSOCK_CLOSE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_websock_close",
    .sstate = TRACE_QIO_CHANNEL_WEBSOCK_CLOSE_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_WEBSOCK_CLOSE_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_COMMAND_NEW_PID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_command_new_pid",
    .sstate = TRACE_QIO_CHANNEL_COMMAND_NEW_PID_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_COMMAND_NEW_PID_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_COMMAND_NEW_SPAWN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_command_new_spawn",
    .sstate = TRACE_QIO_CHANNEL_COMMAND_NEW_SPAWN_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_COMMAND_NEW_SPAWN_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_COMMAND_ABORT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_command_abort",
    .sstate = TRACE_QIO_CHANNEL_COMMAND_ABORT_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_COMMAND_ABORT_DSTATE 
};
TraceEvent _TRACE_QIO_CHANNEL_COMMAND_WAIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qio_channel_command_wait",
    .sstate = TRACE_QIO_CHANNEL_COMMAND_WAIT_ENABLED,
    .dstate = &_TRACE_QIO_CHANNEL_COMMAND_WAIT_DSTATE 
};
TraceEvent *io_trace_events[] = {
    &_TRACE_QIO_TASK_NEW_EVENT,
    &_TRACE_QIO_TASK_COMPLETE_EVENT,
    &_TRACE_QIO_TASK_THREAD_START_EVENT,
    &_TRACE_QIO_TASK_THREAD_RUN_EVENT,
    &_TRACE_QIO_TASK_THREAD_EXIT_EVENT,
    &_TRACE_QIO_TASK_THREAD_RESULT_EVENT,
    &_TRACE_QIO_TASK_THREAD_SOURCE_ATTACH_EVENT,
    &_TRACE_QIO_TASK_THREAD_SOURCE_CANCEL_EVENT,
    &_TRACE_QIO_CHANNEL_NULL_NEW_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_NEW_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_NEW_FD_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_SYNC_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_ASYNC_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_FAIL_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_CONNECT_COMPLETE_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_SYNC_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_ASYNC_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_FAIL_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_LISTEN_COMPLETE_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_SYNC_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_ASYNC_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_FAIL_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_DGRAM_COMPLETE_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_ACCEPT_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_ACCEPT_FAIL_EVENT,
    &_TRACE_QIO_CHANNEL_SOCKET_ACCEPT_COMPLETE_EVENT,
    &_TRACE_QIO_CHANNEL_FILE_NEW_FD_EVENT,
    &_TRACE_QIO_CHANNEL_FILE_NEW_PATH_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_NEW_CLIENT_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_NEW_SERVER_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_START_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_PENDING_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_FAIL_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_HANDSHAKE_COMPLETE_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_CREDENTIALS_ALLOW_EVENT,
    &_TRACE_QIO_CHANNEL_TLS_CREDENTIALS_DENY_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_NEW_SERVER_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_START_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_PENDING_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_REPLY_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_FAIL_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HANDSHAKE_COMPLETE_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HTTP_GREETING_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HTTP_REQUEST_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HEADER_PARTIAL_DECODE_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_HEADER_FULL_DECODE_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_PAYLOAD_DECODE_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_ENCODE_EVENT,
    &_TRACE_QIO_CHANNEL_WEBSOCK_CLOSE_EVENT,
    &_TRACE_QIO_CHANNEL_COMMAND_NEW_PID_EVENT,
    &_TRACE_QIO_CHANNEL_COMMAND_NEW_SPAWN_EVENT,
    &_TRACE_QIO_CHANNEL_COMMAND_ABORT_EVENT,
    &_TRACE_QIO_CHANNEL_COMMAND_WAIT_EVENT,
  NULL,
};

static void trace_io_register_events(void)
{
    trace_event_register_group(io_trace_events);
}
trace_init(trace_io_register_events)