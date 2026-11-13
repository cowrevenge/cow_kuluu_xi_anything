/* f_0x10207980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the byte at the image address 0x10385530 plus the 32-bit stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10207980(Guest* g, uint32_t index)
{
    (void)g;
    return (uint32_t)rd8(index + COW_IMG(0x10385530u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10207980(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
