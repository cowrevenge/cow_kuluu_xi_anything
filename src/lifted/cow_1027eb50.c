/* f_0x1027eb50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies 16 dwords from the second stack argument to the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027eb50(Guest* g, uint32_t dst, uint32_t src)
{
    (void)g;
    for (uint32_t i = 0u; i < 16u; ++i)
    {
        wr32(dst + i * 4u, rd32(src + i * 4u));
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027eb50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 4u);
    const uint32_t src = rd32(sp0 + 8u);

    cow_fn_1027eb50(g, dst, src);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
