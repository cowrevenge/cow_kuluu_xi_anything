/* f_0x100a0ce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the stack argument with its low byte set to 1 when it is in [0x700, 0x8FF], otherwise with its low byte cleared, preserving the upper 24 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a0ce0(Guest* g, uint32_t param)
{
    (void)g;

    if (param >= 0x700u && param < 0x900u)
    {
        return (param & 0xFFFFFF00u) | 1u;
    }

    return param & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a0ce0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
