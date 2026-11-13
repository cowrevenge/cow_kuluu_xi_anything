/* f_0x10018ce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes the six dwords beginning at self+4, plus the dwords at self+0x34 and self+0x38.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10018ce0(Guest* g, uint32_t self)
{
    g->eax = 0u;

    wr32(self + 0x34u, 0u);
    wr32(self + 0x38u, 0u);

    for (uint32_t n = 6u; n != 0u; --n)
    {
        wr32(self + 4u + (6u - n) * 4u, 0u);
    }

    g->ecx = 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018ce0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
