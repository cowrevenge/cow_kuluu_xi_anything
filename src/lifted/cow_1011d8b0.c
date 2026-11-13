/* f_0x1011d8b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the argument with its low byte set to 1 if the signed 32-bit value is between 0x20 and 0x7e inclusive, otherwise with its low byte cleared; the upper 24 bits are preserved.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011d8b0(Guest* g, uint32_t param)
{
    (void)g;

    if ((int32_t)param < 0x20 || (int32_t)param > 0x7e)
    {
        return param & 0xFFFFFF00u;
    }

    return (param & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1011d8b0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
