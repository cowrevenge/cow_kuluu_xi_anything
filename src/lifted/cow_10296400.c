/* f_0x10296400 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zero-fills the nine DWORDs at the caller-supplied destination pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10296400(Guest* g, uint32_t dst)
{
    for (uint32_t i = 0u; i < 9u; ++i)
    {
        wr32(dst + 4u * i, 0u);
    }

    g->ecx = 0u;
    g->edx = g->edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10296400(g, dst);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
