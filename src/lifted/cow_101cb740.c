/* f_0x101cb740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 2, 0, or (value - 3 with low byte forced to 1) based on a global counter field.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101cb740(Guest* g)
{
    (void)g;

    uint32_t ptr = rd32(COW_IMG(0x10456C0Cu));
    uint32_t val = rd32(ptr + 4u);

    val = val - 1u;
    if (val == 0u)
    {
        return 2u;
    }

    val = val - 1u;
    if (val == 0u)
    {
        return 0u;
    }

    val = val - 1u;
    return (val & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101cb740(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
