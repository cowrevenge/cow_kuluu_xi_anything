/* f_0x101be1c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 0 when the second stack byte is 1, otherwise returns 1 if the first stack word is 0x5b else 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be1c0(Guest* g, uint32_t param1, uint32_t param2, uint32_t eax_in)
{
    (void)g;

    if (param2 == 1u)
    {
        /* xor al, al: clear only the low byte of eax. */
        return eax_in & 0xFFFFFF00u;
    }

    /* xor eax, eax; cmp word ptr [esp + 4], 0x5b; sete al */
    return (param1 == 0x5Bu) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eax_in = g->eax;

    const uint32_t param2 = rd8(sp0 + 8u);
    uint32_t param1 = 0u;

    /* The original reads [esp + 4] only on the path where [esp + 8] != 1. */
    if (param2 != 1u)
    {
        param1 = rd16(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101be1c0(g, param1, param2, eax_in);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
