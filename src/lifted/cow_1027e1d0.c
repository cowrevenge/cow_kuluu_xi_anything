/* f_0x1027e1d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies the 32-bit value pointed to by the first stack argument into the location pointed to by the second stack argument, unless the second argument is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1027e1d0(Guest* g, uint32_t src, uint32_t dst)
{
    if (dst != 0u)
    {
        const uint32_t edx = rd32(src);
        g->edx = edx;
        wr32(dst, edx);
    }

    return dst;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t dst = rd32(sp0 + 8u);
    uint32_t src = 0u;

    if (dst != 0u)
    {
        src = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_1027e1d0(g, src, dst);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
