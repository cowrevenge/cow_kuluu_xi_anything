/* f_0x101815c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Stores the low byte of the first stack argument into the global byte at 0x1065CA30 and returns EAX with only its low byte replaced.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101815c0(Guest* g, uint32_t eax_in, uint32_t param)
{
    (void)g;

    const uint8_t al = (uint8_t)param;
    wr8(COW_IMG(0x1065CA30u), al);

    return (eax_in & 0xFFFFFF00u) | (uint32_t)al;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101815c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101815c0(g, g->eax, rd8(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
