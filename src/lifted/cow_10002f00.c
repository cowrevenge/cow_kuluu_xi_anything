/* f_0x10002f00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a pointer into a 64-byte-per-entry table at 0x1034f4d0, clamping the signed index to at most 5.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10002f00(Guest* g, uint32_t index)
{
    (void)g;

    if ((int32_t)index < 6)
    {
        /* keep index */
    }
    else
    {
        index = 5u;
    }

    index <<= 6;
    return index + COW_IMG(0x1034f4d0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10002f00(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
