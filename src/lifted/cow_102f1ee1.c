/* f_0x102f1ee1 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If both pointer arguments are non-null, sets bit 3 of byte 9 and stores the byte argument at offset 0x2c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_102f1ee1(Guest* g, uint32_t entry_eax, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    if (arg1 == 0u)
    {
        g->edx = g->edx;
        return entry_eax;
    }

    if (arg2 == 0u)
    {
        g->edx = g->edx;
        return arg2;
    }

    g->ecx = (g->ecx & 0xFFFFFF00u) | (arg3 & 0xFFu);

    const uint32_t p9 = arg2 + 9u;
    wr8(p9, (uint8_t)(rd8(p9) | 8u));
    wr8(arg2 + 0x2cu, (uint8_t)arg3);

    g->edx = g->edx;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f1ee1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t entry_eax = g->eax;

    const uint32_t arg1 = rd32(sp0 + 4u);
    uint32_t arg2 = 0u;
    uint32_t arg3 = 0u;

    if (arg1 != 0u)
    {
        arg2 = rd32(sp0 + 8u);
        if (arg2 != 0u)
        {
            arg3 = rd8(sp0 + 0xcu);
        }
    }

    const uint32_t result = cow_fn_102f1ee1(g, entry_eax, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
