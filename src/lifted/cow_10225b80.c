/* f_0x10225b80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the byte at guest address 0x1066716e is zero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10225b80(Guest* g)
{
    (void)g;
    uint8_t val = rd8(COW_IMG(0x1066716Eu));
    return (val == 0) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10225b80(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
