/* f_0x100f00a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a pointer derived from a global table base if a flag byte is set, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f00a0(Guest* g)
{
    (void)g;

    const uint32_t base = rd32(COW_IMG(0x104DFD98u));
    if (base == 0u)
    {
        return 0u;
    }

    if (rd8(base + 0x2CFD4u) == 0u)
    {
        return 0u;
    }

    return base + 0x2CF54u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f00a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f00a0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
