/* f_0x1027eb30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies 16 doublewords from the second stack argument to the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027eb30(Guest* g, uint32_t dst, uint32_t src)
{
    const uint32_t step = g->df ? (uint32_t)-4 : 4u;
    uint32_t s = src;
    uint32_t d = dst;

    for (uint32_t n = 0x10u; n != 0u; --n)
    {
        wr32(d, rd32(s));
        s += step;
        d += step;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027eb30(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads the second stack argument first, then the first. */
    const uint32_t src = rd32(sp0 + 8u);
    const uint32_t dst = rd32(sp0 + 4u);

    cow_fn_1027eb30(g, dst, src);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
