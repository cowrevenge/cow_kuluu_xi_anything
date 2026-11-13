/* f_0x10098f50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies 60 dwords from (third stack argument + 4) to the global buffer at 0x104809a0 and returns the third argument with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10098f50(Guest* g, uint32_t src_arg)
{
    const uint32_t src = src_arg + 4u;
    const uint32_t dst = COW_IMG(0x104809a0u);

    for (uint32_t i = 0u; i < 0x3Cu; ++i)
    {
        wr32(dst + i * 4u, rd32(src + i * 4u));
    }

    g->ecx = 0u;
    g->edx = g->edx;

    return (src_arg & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src_arg = rd32(sp0 + 0xCu);
    const uint32_t result = cow_fn_10098f50(g, src_arg);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
