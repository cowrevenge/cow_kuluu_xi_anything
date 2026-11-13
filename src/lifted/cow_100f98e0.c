/* f_0x100f98e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low byte of the second stack argument at offset 0x40c43 of the first argument, or of the global pointer at 0x104dfd98 when the first argument is null, if that pointer is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100f98e0(Guest* g, uint32_t target, uint32_t value)
{
    if (target != 0u)
    {
        wr8(target + 0x40C43u, (uint8_t)value);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f98e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);

    uint32_t target = param1;
    uint32_t value = 0u;

    if (target != 0u)
    {
        value = rd8(sp0 + 8u);
    }
    else
    {
        target = rd32(COW_IMG(0x104DFD98u));
        if (target != 0u)
        {
            value = rd8(sp0 + 8u);
        }
    }

    cow_fn_100f98e0(g, target, value);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
