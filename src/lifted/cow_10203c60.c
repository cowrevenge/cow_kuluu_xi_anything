/* f_0x10203c60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first argument is non-zero, zero-fills 0xAF dwords at the second argument; returns zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10203c60(Guest* g, uint32_t param1, uint32_t param2)
{
    if (param1 != 0u)
    {
        uint32_t addr = param2;
        for (uint32_t i = 0u; i < 0xAFu; ++i)
        {
            wr32(addr, 0u);
            addr += 4u;
        }

        /* rep stosd leaves ecx == 0 on the non-zero path. */
        g->ecx = 0u;
    }

    /* eax is zero on both ret paths. edx is never written by the original. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203c60(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t param1 = rd32(sp0 + 4u);
    uint32_t param2 = 0u;

    /* The original only reads the second stack argument when param1 != 0. */
    if (param1 != 0u)
    {
        param2 = rd32(sp0 + 8u);
    }

    const uint32_t result = cow_fn_10203c60(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
