/* f_0x10196310 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the cached dword at self+0x10, refreshing it from FUN_10196540 when the byte at self+4 is zero and the callee returns a non-negative value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10196310(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    if (rd8(self + 4u) == 0u)
    {
        const uint32_t v = cow_thiscall_cdecl(g, COW_IMG(0x10196540u), self, 0u);

        /* Restore esi exactly as the original push/pop does around the call. */
        g->esi = saved_esi;

        if ((int32_t)v >= 0)
        {
            wr32(self + 0x10u, v);
        }
    }

    /* If no call occurred, g->edx is left untouched, matching the original. */
    return rd32(self + 0x10u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10196310(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
