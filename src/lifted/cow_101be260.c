/* f_0x101be260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Initializes the object at `self` by writing its vtable pointer, then zeroing the first eight dwords, and returns `self`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101be260(Guest* g, uint32_t self)
{
    g->edx = self;
    g->eax = 0u;
    g->ecx = 8u;

    wr32(self, COW_IMG(0x10337c60u));

    for (uint32_t i = 0u; i < 8u; ++i)
    {
        wr32(self + i * 4u, 0u);
        --g->ecx;
    }

    g->eax = self;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101be260(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
