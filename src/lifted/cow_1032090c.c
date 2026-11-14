/* f_0x1032090c - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 and leaves edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1032090c(Guest* g)
{
    (void)g;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032090c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1032090c(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
