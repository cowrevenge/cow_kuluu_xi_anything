/* f_0x1026a510 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes the first 18 dwords of the object, then sets the dwords at offsets 0x20 and 0x28 to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1026a510(Guest* g, uint32_t self)
{
    for (uint32_t i = 0u; i < 0x12u; ++i)
    {
        wr32(self + i * 4u, 0u);
    }

    wr32(self + 0x28u, 1u);
    wr32(self + 0x20u, 1u);

    g->eax = 1u;
    g->ecx = 0u;
    g->edx = self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_1026a510(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
