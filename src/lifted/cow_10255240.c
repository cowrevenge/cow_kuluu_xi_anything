/* f_0x10255240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the signed 32-bit count of 4-byte elements between [self+8] and [self+4], or 0 if [self+4] is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10255240(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t edx = rd32(self + 0x4u);
    if (edx == 0u)
    {
        return 0u;
    }

    uint32_t eax = rd32(self + 0x8u);
    eax -= edx;
    return (uint32_t)((int32_t)eax >> 2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10255240(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
