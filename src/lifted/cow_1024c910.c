/* f_0x1024c910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Writes the stack argument to the object field at offset 0x18; the signed guard is always true.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024c910(Guest* g, uint32_t self, uint32_t value)
{
    (void)g;
    if ((int32_t)value >= 0 || (int32_t)value < 0x18)
    {
        wr32(self + 0x18u, value);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t value = rd32(sp0 + 4u);
    cow_fn_1024c910(g, g->ecx, value);
    g->esp = sp0;
    g->eax = value;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
