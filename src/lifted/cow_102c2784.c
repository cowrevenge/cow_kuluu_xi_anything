/* f_0x102c2784 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns (arg2 & *(arg1 + 8)) when both arg0 and arg1 are nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c2784(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    (void)g;

    if (arg0 == 0u)
    {
        return 0u;
    }

    if (arg1 == 0u)
    {
        return 0u;
    }

    const uint32_t v = rd32(arg1 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xcu);
    return v & arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c2784(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    uint32_t arg1 = 0u;

    if (arg0 != 0u)
    {
        arg1 = rd32(sp0 + 8u);
    }

    const uint32_t result = cow_fn_102c2784(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
