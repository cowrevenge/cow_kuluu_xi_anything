/* f_0x100f9740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low byte of the second stack argument at offset 0x40c40 of the first argument, or of a global fallback pointer when the first argument is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100f9740(Guest* g, uint32_t target, uint32_t value)
{
    (void)g;
    wr8(target + 0x40C40u, (uint8_t)value);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9740(Guest* g)
{
    const uint32_t sp0 = g->esp;

    uint32_t target = rd32(sp0 + 4u);
    if (target == 0u)
    {
        target = rd32(COW_IMG(0x104DFD98u));
    }

    if (target != 0u)
    {
        const uint32_t value = rd8(sp0 + 8u);
        cow_fn_100f9740(g, target, value);
    }

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
