/* f_0x10296480 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies nine dwords from the second stack argument to the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10296480(Guest* g, uint32_t dst, uint32_t src)
{
    if (g->df)
    {
        for (uint32_t i = 0u; i < 9u; ++i)
        {
            wr32(dst, rd32(src));
            dst -= 4u;
            src -= 4u;
        }
    }
    else
    {
        for (uint32_t i = 0u; i < 9u; ++i)
        {
            wr32(dst, rd32(src));
            dst += 4u;
            src += 4u;
        }
    }

    g->ecx = 0u;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10296480(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
