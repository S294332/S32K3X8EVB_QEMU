/*
 * QEMU AVR CPU
 *
 * Copyright (c) 2022-2023 Florian Göhler
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see
 * <http://www.gnu.org/licenses/lgpl-2.1.html>
 */
#include "qemu/osdep.h"
#include "cpu.h"
#include "exec/exec-all.h"
#include "tcg/tcg.h"
#include "exec/helper-proto.h"
#include "hw/nxp/boot.h"

static inline void raise_exception(CPUNXPAState *env, int index,
        uintptr_t retaddr);

static inline G_NORETURN void raise_exception(CPUNXPAState *env, int index,
                                              uintptr_t retaddr)
{
    CPUState *cs = env_cpu(env);

    cs->exception_index = index;
    cpu_loop_exit_restore(cs, retaddr);
}

void helper_raise_illegal_instruction(CPUNXPAState *env)
{
    raise_exception(env, 23, 0);
}

bool nxp_cpu_tlb_fill(CPUState *cs, vaddr address, int size,
                        MMUAccessType access_type, int mmu_idx,
                        bool probe, uintptr_t retaddr)
{
    int port = 0;

    port = PAGE_READ | PAGE_EXEC | PAGE_WRITE;
    tlb_set_page(cs, address, address, port,
                 mmu_idx, TARGET_PAGE_SIZE);
    return true;
}

void nxp_cpu_do_interrupt(CPUState *cs)
{
    //TODO: Processor specific
}

hwaddr nxp_cpu_get_phys_page_debug(CPUState *cs, vaddr addr)
{
    return addr;
}


void helper_debug(CPUNXPAState *env)
{
    CPUState *cs = env_cpu(env);

    cs->exception_index = EXCP_DEBUG;
    cpu_loop_exit(cs);
}

void helper_break(CPUNXPAState *env)
{
    CPUState *cs = env_cpu(env);

    cs->exception_index = EXCP_DEBUG;
    cpu_loop_exit(cs);
}

int nxp_cpu_memory_rw_debug(CPUState *cs, vaddr addr, uint8_t *buf,
                            int len, bool is_write)
{
    return cpu_memory_rw_debug(cs, addr, buf, len, is_write);
}

//TODO: The saturation might be not working as intended. Add more tests.
void helper_macsathhw(CPUNXPAState *env, uint32_t rd, uint32_t op1,  uint32_t op2)
{
    uint32_t prod = 0;
    if(op1 == -1 && op2 == -1){
        prod = 0x7fffffff;
        env->sflags[sflagQ] = 1;
    }
    else{
        prod = (op1 * op2) << 1;
        if((op1 >> 31) && (op2 >> 31) && !(prod >>31)){
            prod = 0x80000000;
            env->sflags[sflagQ] = 1;
        }
        else if(!(op1 >>31) && !(op2 >> 31) && (prod >>31)){
            prod = 0x7fffffff;
            env->sflags[sflagQ] = 1;
        }
    }

    uint32_t res = prod + env->r[rd];
    if((prod >>31) && (env->r[rd] >>31) && !(res >>31)){
        res = 0x80000000;
        env->sflags[sflagQ] = 1;
    }
    else if(!(prod >>31) && !(env->r[rd] >>31) && (res >>31)){
        res = 0x7fffffff;
        env->sflags[sflagQ] = 1;
    }
    env->r[rd] = res;
}
