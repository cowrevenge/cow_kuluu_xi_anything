/* f_0x1009aad0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte set to 1 when it is in [0x400, 0x700), otherwise with its low byte cleared, preserving the upper 24 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1009aad0(Guest* g, uint32_t value)
{
    (void)g;

    if (value >= 0x400u && value < 0x700u)
    {
        return (value & 0xFFFFFF00u) | 1u;
    }

    return value & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009aad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t value = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1009aad0(g, value);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
