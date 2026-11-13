/* f_0x100c3110 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low byte of the stack argument into self+0x44 when it is nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c3110(Guest* g, uint32_t self, uint32_t value)
{
    (void)g;

    const uint32_t v = value & 0xFFu;
    if (v != 0u)
    {
        wr8(self + 0x44u, (uint8_t)v);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t value = rd8(sp0 + 4u);

    cow_fn_100c3110(g, g->ecx, value);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
