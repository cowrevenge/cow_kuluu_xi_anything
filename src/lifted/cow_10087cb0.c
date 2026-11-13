/* f_0x10087cb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a pointer into a 32-entry table at 0x10488b08 when the signed index is below 16, otherwise NULL.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10087cb0(Guest* g, uint32_t param)
{
    (void)g;

    if ((int32_t)param >= 16)
    {
        return 0u;
    }

    return (uint32_t)((uint32_t)param << 5u) + COW_IMG(0x10488b08u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087cb0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
