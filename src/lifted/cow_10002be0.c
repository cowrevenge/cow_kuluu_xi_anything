/* f_0x10002be0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the low byte at offset 0x915 of the global pointer, preserving the upper 24 bits of that pointer; returns 0 if the pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10002be0(Guest* g)
{
    (void)g;

    const uint32_t p = rd32(COW_IMG(0x1045666Cu));
    if (p == 0u)
    {
        return 0u;
    }

    return (p & 0xFFFFFF00u) | (uint32_t)rd8(p + 0x915u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10002be0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
