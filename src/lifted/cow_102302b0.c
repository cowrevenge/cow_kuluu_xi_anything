/* f_0x102302b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte at self+0x6f is nonzero, decrement it, then tail-call 0x10230310 with the same this pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102302b0(Guest* g, uint32_t self)
{
    uint8_t v = rd8(self + 0x6fu);

    if (v != 0u)
    {
        uint8_t d = (uint8_t)(v - 1u);
        wr8(self + 0x6fu, d);
        g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)d;
    }
    else
    {
        g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)v;
    }

    cow_thiscall_cdecl(g, COW_IMG(0x10230310u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102302b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102302b0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
