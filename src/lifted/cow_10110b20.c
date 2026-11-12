/* f_0x10110b20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Returns whether the dword at self+0x50 is nonzero, with its upper 24 bits taken from that dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10110b20(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t v = rd32(self + 0x50u);
    return (v & 0xFFFFFF00u) | ((v != 0u) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10110b20(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
