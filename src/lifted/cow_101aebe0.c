/* f_0x101aebe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the object's 0x2c field with its low byte forced to 1 for signed values 0, 1, 2, or 4 and to 0 otherwise, preserving the upper 24 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101aebe0(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t v = rd32(self + 0x2cu);
    const int32_t s = (int32_t)v;
    const uint32_t low = ((s >= 0 && s <= 2) || s == 4) ? 1u : 0u;
    return (v & 0xFFFFFF00u) | low;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aebe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101aebe0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
