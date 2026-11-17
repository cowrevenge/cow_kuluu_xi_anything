/* f_0x10228c50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100e47a0 with a pointer to a local copy of `this`, stores `this+0x64` into the possibly updated local pointer's +4 field, then if FUN_100e4610 returns zero stores `this+0x68` into the same l

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10228c50(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t local = cow_frame(g, sp0, 4u);

    wr32(local, self);

    cow_cdecl(g, COW_IMG(0x100e47a0u), 1u, local);

    const uint32_t edx = rd32(local);
    const uint32_t ecx = rd32(self + 0x64u);
    wr32(edx + 4u, ecx);

    cow_cdecl(g, COW_IMG(0x100e4610u), 0u);

    if ((g->eax & 0xFFu) == 0u)
    {
        const uint32_t ecx2 = rd32(local);
        const uint32_t eax2 = rd32(self + 0x68u);
        wr32(ecx2 + 4u, eax2);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10228c50(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
