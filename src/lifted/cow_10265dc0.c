/* f_0x10265dc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Waits on the handle stored at self+4, then returns the dword at self+0xc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10265dc0(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;

    const uint32_t handle = rd32(self + 4u);
    const uint32_t target = rd32(COW_IMG(0x103291c8u));

    cow_stdcall(g, target, 2u, handle, 0xFFFFFFFFu);

    const uint32_t edx_after_call = g->edx;
    const uint32_t result = rd32(self + 0xcu);

    g->esi = entry_esi;
    g->edx = edx_after_call;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10265dc0(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
