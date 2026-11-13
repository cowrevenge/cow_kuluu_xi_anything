/* f_0x1020cda0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the argument is non-null and the global at 0x106644d8 is zero, stores the value at argument+0x60 into that global; returns the final eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020cda0(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t global = COW_IMG(0x106644d8u);
    uint32_t result = param;

    if (param != 0u)
    {
        if (rd32(global) == 0u)
        {
            result = rd32(param + 0x60u);
            wr32(global, result);
        }
    }

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020cda0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1020cda0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
