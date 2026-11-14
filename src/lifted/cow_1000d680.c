/* f_0x1000d680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit global at 0x104566E8 with its low byte replaced by the byte at offset 9 from that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000d680(Guest* g)
{
    (void)g;
    const uint32_t ptr = rd32(COW_IMG(0x104566E8u));
    return (ptr & 0xFFFFFF00u) | (uint32_t)rd8(ptr + 9u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000d680(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
