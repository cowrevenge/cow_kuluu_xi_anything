/* f_0x102efd3a - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns (arg2->field8 & arg3) when arg1 and arg2 are nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_102efd3a(Guest* g, uint32_t sp0)
{
    uint32_t result;
    const uint32_t edx0 = g->edx;

    const uint32_t arg1 = rd32(sp0 + 4u);
    if (arg1 == 0u)
    {
        result = 0u;
    }
    else
    {
        const uint32_t arg2 = rd32(sp0 + 8u);
        if (arg2 == 0u)
        {
            result = 0u;
        }
        else
        {
            const uint32_t field = rd32(arg2 + 8u);
            const uint32_t arg3 = rd32(sp0 + 0xcu);
            result = field & arg3;
        }
    }

    g->edx = edx0;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102efd3a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102efd3a(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
