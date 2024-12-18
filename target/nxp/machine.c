#include "qemu/osdep.h"
#include "cpu.h"
#include "migration/cpu.h"

static int get_sreg(QEMUFile *f, void *opaque, size_t size,
                    const VMStateField *field)
{
    uint32_t sreg;

    sreg = qemu_get_be32(f);
    return sreg;
}

static int put_sreg(QEMUFile *f, void *opaque, size_t size,
                    const VMStateField *field, JSONWriter *vmdesc)
{
    CPUNXPAState *env = opaque;
    uint32_t sreg = env->sr;

    qemu_put_be32(f, sreg);
    return 0;
}

static const VMStateInfo vms_sreg = {
        .name = "sreg",
        .get = get_sreg,
        .put = put_sreg,
};

const VMStateDescription vms_nxp_cpu = {
        .name = "cpu",
        .version_id = 1,
        .minimum_version_id = 1,
        .fields = (VMStateField[]) {

                VMSTATE_UINT32_ARRAY(env.r, NXPACPU, NXPA_REG_PAGE_SIZE),

                VMSTATE_SINGLE(env.sr, NXPACPU , 0, vms_sreg, uint32_t),

                VMSTATE_END_OF_LIST()
        }
};
