/* f_0x10217520 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the first virtual method of the global object with argument 1, then clears the global pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10217520(Guest* g)
{
    const uint32_t self = rd32(COW_IMG(0x10664530u));

    if (self != 0u)
    {
        const uint32_t vtable = rd32(self);
        const uint32_t target = rd32(vtable);
        cow_thiscall(g, target, self, 1u, 1u);
    }

    wr32(COW_IMG(0x10664530u), 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10217520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10217520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
