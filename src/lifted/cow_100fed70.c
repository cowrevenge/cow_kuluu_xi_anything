/* f_0x100fed70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the second stack argument with its low byte replaced by the byte at offset 1 when the pointed-to byte is 1; otherwise returns the second stack argument with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fed70(Guest* g, uint32_t arg1, uint32_t arg2)
{
    (void)g;
    (void)arg1;

    uint32_t result = arg2 & 0xFFFFFF00u;

    if (arg2 != 0u && rd8(arg2) == 1u)
    {
        result |= (uint32_t)rd8(arg2 + 1u);
    }

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fed70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t result = cow_fn_100fed70(g, 0u, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
