/* f_0x102964a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies nine 32-bit words from the first stack argument to the second stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102964a0(Guest* g, uint32_t src, uint32_t dst)
{
    const uint32_t eax = g->eax;

    for (uint32_t i = 0u; i < 9u; ++i)
    {
        const uint32_t v = rd32(src + i * 4u);
        wr32(dst + i * 4u, v);
    }

    /* The original does not modify edx; leave it as it was on entry. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102964a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 4u);
    const uint32_t dst = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102964a0(g, src, dst);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
