/* f_0x101d7620 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte set to 1 when it is in [1, 0x41] as a signed 32-bit integer, otherwise with its low byte cleared; the upper 24 bits are preserved.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101d7620(Guest* g, uint32_t value)
{
    int32_t v = (int32_t)value;
    uint32_t result;

    if (v <= 0 || v >= 0x42)
    {
        result = value & 0xFFFFFF00u;
    }
    else
    {
        result = (value & 0xFFFFFF00u) | 1u;
    }

    g->edx = g->edx; /* original leaves edx unchanged */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t value = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_101d7620(g, value);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
