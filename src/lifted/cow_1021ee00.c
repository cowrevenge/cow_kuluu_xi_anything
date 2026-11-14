/* f_0x1021ee00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x10666e84 is non-null, stores the 16-bit stack argument at offset 0x28.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1021ee00(Guest* g, uint32_t ptr, uint32_t value)
{
    (void)g;

    if (ptr != 0u)
    {
        wr16(ptr + 0x28u, (uint16_t)value);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ee00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ptr = rd32(COW_IMG(0x10666E84u));
    uint32_t value = 0u;

    if (ptr != 0u)
    {
        value = rd16(sp0 + 4u);
    }

    cow_fn_1021ee00(g, ptr, value);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
