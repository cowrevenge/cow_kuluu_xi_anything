/* f_0x10103a80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the unsigned 32-bit value obtained by multiplying the stack argument by 0x1AF83441 and taking the high 32 bits shifted right by 17.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10103a80(Guest* g, uint32_t self, uint32_t param)
{
    (void)g;
    (void)self;

    uint64_t product = (uint64_t)0x1AF83441u * (uint64_t)param;
    uint32_t edx = (uint32_t)(product >> 32);
    return edx >> 17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10103a80(g, g->ecx, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
