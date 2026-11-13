/* f_0x100e0400 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes 0x3cc dwords at (param + 0x3aeb0), leaves edx=param and ecx=0, and returns 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e0400(Guest* g, uint32_t param)
{
    const uint32_t base = param + 0x3aeb0u;

    g->edx = param;

    for (uint32_t i = 0; i < 0x3ccu; ++i)
    {
        wr32(base + i * 4u, 0u);
    }

    g->ecx = 0u;

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100e0400(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
