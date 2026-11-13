/* f_0x101f7240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit table entry at index*16 from 0x106637b4 if the byte at 0x106637a8 is nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f7240(Guest* g, uint32_t self, uint32_t index)
{
    (void)g;
    (void)self;

    if (rd8(COW_IMG(0x106637A8u)) == 0u)
    {
        return 0u;
    }

    return rd32(COW_IMG(0x106637B4u) + (uint32_t)(index << 4));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f7240(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
