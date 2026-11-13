/* f_0x101f7180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the dword at 0x106637dc masked by all-ones if the byte at 0x106637a8 is nonzero, otherwise zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101f7180(Guest* g)
{
    const uint32_t entry_edx = g->edx;
    const uint32_t b = rd8(COW_IMG(0x106637a8u));
    const uint32_t m = rd32(COW_IMG(0x106637dcu));

    g->edx = entry_edx;

    return (b != 0u ? 0xFFFFFFFFu : 0u) & m;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f7180(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
