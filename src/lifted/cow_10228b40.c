/* f_0x10228b40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the byte at the address in ecx to 1 unless it is already 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10228b40(Guest* g, uint32_t self)
{
    (void)g;
    if (rd8(self) != 1u)
    {
        wr8(self, 1u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10228b40(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
