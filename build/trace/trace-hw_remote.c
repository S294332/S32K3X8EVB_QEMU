/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_remote.h"

uint16_t _TRACE_MPQEMU_SEND_IO_ERROR_DSTATE;
uint16_t _TRACE_MPQEMU_RECV_IO_ERROR_DSTATE;
uint16_t _TRACE_VFU_PROP_DSTATE;
uint16_t _TRACE_VFU_CFG_READ_DSTATE;
uint16_t _TRACE_VFU_CFG_WRITE_DSTATE;
uint16_t _TRACE_VFU_DMA_REGISTER_DSTATE;
uint16_t _TRACE_VFU_DMA_UNREGISTER_DSTATE;
uint16_t _TRACE_VFU_BAR_REGISTER_DSTATE;
uint16_t _TRACE_VFU_BAR_RW_ENTER_DSTATE;
uint16_t _TRACE_VFU_BAR_RW_EXIT_DSTATE;
uint16_t _TRACE_VFU_INTERRUPT_DSTATE;
TraceEvent _TRACE_MPQEMU_SEND_IO_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mpqemu_send_io_error",
    .sstate = TRACE_MPQEMU_SEND_IO_ERROR_ENABLED,
    .dstate = &_TRACE_MPQEMU_SEND_IO_ERROR_DSTATE 
};
TraceEvent _TRACE_MPQEMU_RECV_IO_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mpqemu_recv_io_error",
    .sstate = TRACE_MPQEMU_RECV_IO_ERROR_ENABLED,
    .dstate = &_TRACE_MPQEMU_RECV_IO_ERROR_DSTATE 
};
TraceEvent _TRACE_VFU_PROP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_prop",
    .sstate = TRACE_VFU_PROP_ENABLED,
    .dstate = &_TRACE_VFU_PROP_DSTATE 
};
TraceEvent _TRACE_VFU_CFG_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_cfg_read",
    .sstate = TRACE_VFU_CFG_READ_ENABLED,
    .dstate = &_TRACE_VFU_CFG_READ_DSTATE 
};
TraceEvent _TRACE_VFU_CFG_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_cfg_write",
    .sstate = TRACE_VFU_CFG_WRITE_ENABLED,
    .dstate = &_TRACE_VFU_CFG_WRITE_DSTATE 
};
TraceEvent _TRACE_VFU_DMA_REGISTER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_dma_register",
    .sstate = TRACE_VFU_DMA_REGISTER_ENABLED,
    .dstate = &_TRACE_VFU_DMA_REGISTER_DSTATE 
};
TraceEvent _TRACE_VFU_DMA_UNREGISTER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_dma_unregister",
    .sstate = TRACE_VFU_DMA_UNREGISTER_ENABLED,
    .dstate = &_TRACE_VFU_DMA_UNREGISTER_DSTATE 
};
TraceEvent _TRACE_VFU_BAR_REGISTER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_bar_register",
    .sstate = TRACE_VFU_BAR_REGISTER_ENABLED,
    .dstate = &_TRACE_VFU_BAR_REGISTER_DSTATE 
};
TraceEvent _TRACE_VFU_BAR_RW_ENTER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_bar_rw_enter",
    .sstate = TRACE_VFU_BAR_RW_ENTER_ENABLED,
    .dstate = &_TRACE_VFU_BAR_RW_ENTER_DSTATE 
};
TraceEvent _TRACE_VFU_BAR_RW_EXIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_bar_rw_exit",
    .sstate = TRACE_VFU_BAR_RW_EXIT_ENABLED,
    .dstate = &_TRACE_VFU_BAR_RW_EXIT_DSTATE 
};
TraceEvent _TRACE_VFU_INTERRUPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vfu_interrupt",
    .sstate = TRACE_VFU_INTERRUPT_ENABLED,
    .dstate = &_TRACE_VFU_INTERRUPT_DSTATE 
};
TraceEvent *hw_remote_trace_events[] = {
    &_TRACE_MPQEMU_SEND_IO_ERROR_EVENT,
    &_TRACE_MPQEMU_RECV_IO_ERROR_EVENT,
    &_TRACE_VFU_PROP_EVENT,
    &_TRACE_VFU_CFG_READ_EVENT,
    &_TRACE_VFU_CFG_WRITE_EVENT,
    &_TRACE_VFU_DMA_REGISTER_EVENT,
    &_TRACE_VFU_DMA_UNREGISTER_EVENT,
    &_TRACE_VFU_BAR_REGISTER_EVENT,
    &_TRACE_VFU_BAR_RW_ENTER_EVENT,
    &_TRACE_VFU_BAR_RW_EXIT_EVENT,
    &_TRACE_VFU_INTERRUPT_EVENT,
  NULL,
};

static void trace_hw_remote_register_events(void)
{
    trace_event_register_group(hw_remote_trace_events);
}
trace_init(trace_hw_remote_register_events)