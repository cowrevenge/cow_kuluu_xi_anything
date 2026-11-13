/* f_0x1014b630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns bit 4 of the byte at [global + 0x40db5], preserving the upper 24 bits of the global pointer; returns 0 if the global pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014b630(Guest* g)
{
    (void)g;

    const uint32_t p = rd32(COW_IMG(0x104dfd98u));

    if (p == 0u)
    {
        return 0u;
    }

    const uint32_t b = rd8(p + 0x40db5u);
    return (p & 0xffffff00u) | ((b >> 4) & 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1014b630(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
