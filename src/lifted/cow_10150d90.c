/* f_0x10150d90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Returns 1 in the low byte if the dword at [this + 8] is zero, otherwise clears the low byte, preserving the other bits loaded into EAX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10150d90(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t val = rd32(self + 0x8u);
    const uint32_t al = (val == 0u) ? 1u : 0u;
    return (val & 0xFFFFFF00u) | al;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10150d90(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
