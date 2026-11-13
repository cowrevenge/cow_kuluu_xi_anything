/* f_0x10071fa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a string pointer from a table for signed indices below 0x61, otherwise a default string pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10071fa0(Guest* g, uint32_t index)
{
    (void)g;

    if ((int32_t)index < 0x61)
    {
        return rd32(COW_IMG(0x103542a8u) + index * 4u);
    }

    return COW_IMG(0x10354650u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t index = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10071fa0(g, index);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
