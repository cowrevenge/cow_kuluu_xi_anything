/* f_0x100f98a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   writes the low byte of the second stack argument to offset 0x40c42 of the first argument, or of a global pointer when the first argument is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100f98a0(Guest* g, uint32_t target, uint32_t value)
{
    (void)g;
    if (target != 0u)
    {
        wr8(target + 0x40C42u, (uint8_t)value);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f98a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    uint32_t target = rd32(sp0 + 4u);
    uint32_t value = 0u;

    if (target != 0u)
    {
        value = rd8(sp0 + 8u);
        g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)value;
    }
    else
    {
        target = rd32(COW_IMG(0x104DFD98u));
        if (target != 0u)
        {
            value = rd8(sp0 + 8u);
            g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)value;
        }
    }

    cow_fn_100f98a0(g, target, value);
    g->esp = sp0;
    rt_return(g, target, 0u);
}
/* COW_ADAPTER END */
