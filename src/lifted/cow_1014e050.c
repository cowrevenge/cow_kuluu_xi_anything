/* f_0x1014e050 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Fills eight dwords at the address passed as the sole stack argument with 0xFFFFFFFF.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014e050(Guest* g, uint32_t dst)
{
    uint32_t addr = dst;
    uint32_t i;

    if (g->df)
    {
        for (i = 0; i < 8u; ++i)
        {
            wr32(addr, 0xFFFFFFFFu);
            addr -= 4u;
        }
    }
    else
    {
        for (i = 0; i < 8u; ++i)
        {
            wr32(addr, 0xFFFFFFFFu);
            addr += 4u;
        }
    }

    g->eax = 0xFFFFFFFFu;
    g->ecx = 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 4u);

    cow_fn_1014e050(g, dst);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
