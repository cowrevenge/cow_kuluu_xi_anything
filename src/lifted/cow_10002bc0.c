/* f_0x10002bc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global object pointer is non-null, calls its first virtual method with argument 1 and then clears the global pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10002bc0(Guest* g)
{
    const uint32_t global = COW_IMG(0x103d3cb8u);
    const uint32_t self = rd32(global);

    if (self == 0u)
    {
        return;
    }

    const uint32_t vtable = rd32(self);
    const uint32_t target = rd32(vtable);

    cow_thiscall(g, target, self, 1u, 1u);

    wr32(global, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10002bc0(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
