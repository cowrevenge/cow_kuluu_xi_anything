/* f_0x10226cc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first argument is nonzero, zero-fill 64 16-bit words at the second argument and return 0x40; otherwise return 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10226cc0(Guest* g, uint32_t param1, uint32_t param2)
{
    if (param1 == 0u)
    {
        return 0u;
    }

    g->ecx = param2;

    uint32_t i = 0u;
    while (i < 0x40u)
    {
        wr16((uint32_t)(param2 + i * 2u), (uint16_t)i);
        ++i;
    }

    return 0x40u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    uint32_t arg2 = 0u;

    if (arg1 != 0u)
    {
        arg2 = rd32(sp0 + 8u);
    }

    const uint32_t result = cow_fn_10226cc0(g, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
