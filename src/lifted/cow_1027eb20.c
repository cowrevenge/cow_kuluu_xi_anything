/* f_0x1027eb20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes the 16 dwords of the buffer pointed to by the stack argument, using rep stosd semantics.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1027eb20(Guest* g, uint32_t dst)
{
    uint32_t addr = dst;

    if (g->df)
    {
        for (uint32_t i = 0u; i < 16u; ++i)
        {
            wr32(addr, 0u);
            addr -= 4u;
        }
    }
    else
    {
        for (uint32_t i = 0u; i < 16u; ++i)
        {
            wr32(addr, 0u);
            addr += 4u;
        }
    }

    /* edx is never written by the original, so leave g->edx alone. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027eb20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1027eb20(g, dst);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
