/* f_0x101e2480 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes the first eight dwords of the object addressed by ecx and returns 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e2480(Guest* g, uint32_t self)
{
    uint32_t addr = self;
    for (uint32_t i = 0; i < 8u; ++i)
    {
        wr32(addr, 0u);
        addr += 4u;
    }
    (void)g;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101e2480(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
