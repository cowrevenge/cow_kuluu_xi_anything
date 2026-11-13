/* f_0x1023da20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If byte 0x51 is nonzero and signed byte 0x50 is 0 or 1, calls FUN_1023d950 with this in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1023da20(Guest* g, uint32_t self)
{
    const uint32_t eax0 = g->eax;
    const uint32_t edx0 = g->edx;

    uint32_t eax = eax0;
    uint32_t edx = edx0;

    /* 1023da20: mov al, byte ptr [ecx + 0x51] */
    const uint8_t b51 = rd8(self + 0x51u);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)b51;

    /* 1023da23: test al, al / 1023da25: je ret */
    if (b51 == 0u)
    {
        g->edx = edx;
        return eax;
    }

    /* 1023da27: mov al, byte ptr [ecx + 0x50] */
    const uint8_t b50 = rd8(self + 0x50u);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)b50;

    /* 1023da2a: test al, al / 1023da2c: jl ret */
    if ((int8_t)b50 < 0)
    {
        g->edx = edx;
        return eax;
    }

    /* 1023da2e: cmp al, 1 / 1023da30: jg ret */
    if ((int8_t)b50 > 1)
    {
        g->edx = edx;
        return eax;
    }

    /* 1023da32: call 0x1023d950 */
    g->eax = eax;
    g->edx = edx;
    g->ecx = self;
    cow_thiscall_cdecl(g, COW_IMG(0x1023d950u), self, 0u);

    /* 1023da37: ret 4 */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023da20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1023da20(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
