/* f_0x102374f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument is positive as a signed 32-bit integer, sets the global at 0x10668FE0 to 1; returns that argument in eax and leaves edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102374f0(Guest* g, uint32_t value)
{
    if ((int32_t)value > 0)
    {
        wr32(COW_IMG(0x10668FE0u), 1u);
    }

    /* The original never writes edx, so leave it as it was on entry. */
    g->edx = g->edx;

    return value;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102374f0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads only [esp + 8], the second stack argument. */
    const uint32_t value = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102374f0(g, value);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
