/* f_0x10162e00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores a byte argument at self+0x58, copies the word at self+0x4e to self+0x50, then calls FUN_10162ef0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10162e00(Guest* g, uint32_t self, uint32_t arg)
{
    const uint8_t b = (uint8_t)arg;
    const uint16_t w = rd16(self + 0x4eu);

    /* Preserve the original register effects before the call. */
    g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)b;
    g->edx = (g->edx & 0xFFFF0000u) | (uint32_t)w;
    g->ecx = self;

    wr8(self + 0x58u, b);
    wr16(self + 0x50u, w);

    cow_thiscall_cdecl(g, COW_IMG(0x10162ef0u), self, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd8(sp0 + 4u);

    cow_fn_10162e00(g, self, arg);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
