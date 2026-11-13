/* f_0x100c3ce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Returns the byte at [esp+7] minus 0x30 (ASCII digit conversion).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100c3ce0(Guest* g, uint32_t sp0)
{
    (void)g;
    return (uint32_t)(rd8(sp0 + 7u)) - 0x30u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100c3ce0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
