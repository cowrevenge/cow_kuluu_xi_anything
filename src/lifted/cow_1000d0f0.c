/* f_0x1000d0f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit value formed by sign-extending the 16-bit stack argument, arithmetic-shifting it right by 8, and OR-ing it with the same sign-extended value shifted left by 8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000d0f0(Guest* g, uint32_t param)
{
    (void)g;

    uint32_t ecx = param;
    uint32_t eax = (uint32_t)((int32_t)param >> 8);

    ecx <<= 8;
    return eax | ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t raw = rd16(sp0 + 4u) & 0xFFFFu;
    const uint32_t param = (raw & 0x8000u) ? (raw | 0xFFFF0000u) : raw;

    const uint32_t result = cow_fn_1000d0f0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
