/* f_0x1021ee20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x10666e84 is non-null, stores the caller's 16-bit stack argument at offset 0x2a of that object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1021ee20(Guest* g, uint32_t self, uint32_t value)
{
    (void)g;
    if (self != 0u)
    {
        wr16(self + 0x2au, (uint16_t)value);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ee20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(COW_IMG(0x10666e84u));
    uint32_t value = 0u;

    if (self != 0u)
    {
        value = rd16(sp0 + 4u);
    }

    cow_fn_1021ee20(g, self, value);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
