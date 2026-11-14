/* f_0x10074870 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Links or replaces the object at offset 0x28, swapping pointers when the old link is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10074870(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t old = rd32(self + 0x28u);

    if (old != 0u)
    {
        g->edx = arg;
        wr32(arg + 0x28u, old);
        wr32(self + 0x28u, arg);
        return old;
    }

    wr32(self + 0x28u, arg);
    return arg;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10074870(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
