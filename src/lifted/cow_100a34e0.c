/* f_0x100a34e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if both global flag bytes at 0x10480AA8 and 0x10480AA9 are nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100a34e0(Guest* g)
{
    (void)g;

    if (rd8(COW_IMG(0x10480AA8u)) == 0u)
    {
        return 0u;
    }

    if (rd8(COW_IMG(0x10480AA9u)) == 0u)
    {
        return 0u;
    }

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a34e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a34e0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
