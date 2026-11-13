/* f_0x102c8507 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If both pointer arguments are non-null, sets bit 3 of the byte at pointer+9 and stores the low byte of the third argument at pointer+0x2c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c8507(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)g;

    if (param1 != 0u && param2 != 0u)
    {
        const uint32_t addr9 = param2 + 9u;
        wr8(addr9, (uint8_t)(rd8(addr9) | 8u));
        wr8(param2 + 0x2cu, (uint8_t)param3);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c8507(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t param1 = rd32(sp0 + 4u);
    uint32_t param2 = 0u;
    uint32_t param3 = 0u;

    if (param1 != 0u)
    {
        param2 = rd32(sp0 + 8u);

        if (param2 != 0u)
        {
            param3 = rd8(sp0 + 0xcu);
        }
    }

    cow_fn_102c8507(g, param1, param2, param3);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
