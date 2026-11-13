/* f_0x100f9780 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low byte of the second stack argument at offset 0x3c43a of the first argument, or of the global pointer at 0x104dfd98 when the first argument is null; does nothing if both are null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100f9780(Guest* g, uint32_t sp0, uint32_t param1)
{
    uint32_t target = param1;

    if (target == 0u)
    {
        target = rd32(COW_IMG(0x104dfd98u));
        if (target == 0u)
        {
            return;
        }
    }

    wr8(target + 0x3c43au, (uint8_t)rd8(sp0 + 8u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);

    cow_fn_100f9780(g, sp0, param1);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
