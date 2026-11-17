/* f_0x1018a260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10189f20 to obtain a pointer; if it is null or points to zero, sets self+0x35 to 1, otherwise calls FUN_1018a2f0 with that pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018a260(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t ebx_save = g->ebx;
    const uint32_t esi_save = g->esi;
    const uint32_t edi_save = g->edi;
    const uint32_t ebp_save = g->ebp;

    const uint32_t out = cow_frame(g, sp0, 4u);

    g->esi = self;
    g->esp = out - 8u;
    cow_thiscall(g, COW_IMG(0x10189f20u), self, 2u, out, rd32(self + 0x10u));

    const uint32_t p = rd32(out);

    if (p == 0u || rd32(p) == 0u)
    {
        wr8(self + 0x35u, 1u);
    }
    else
    {
        g->esi = self;
        g->esp = p - 4u;
        cow_thiscall(g, COW_IMG(0x1018a2f0u), self, 1u, p);
    }

    g->ebx = ebx_save;
    g->esi = esi_save;
    g->edi = edi_save;
    g->ebp = ebp_save;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018a260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018a260(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
