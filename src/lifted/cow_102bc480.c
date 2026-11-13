/* f_0x102bc480 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Swaps a node's next pointer and a byte field using an index stored in the node.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bc480(Guest* g, uint32_t p)
{
    (void)g;

    const uint32_t idx = (uint32_t)(int32_t)(int8_t)rd8(p + 4u);
    const uint32_t base = rd32(p);

    const uint32_t dl = rd8(base + idx + 0x20u);
    const uint32_t ecx = rd32(base + idx * 4u + 0x10u);

    wr32(p, ecx);
    wr8(p + 4u, dl);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p = rd32(sp0 + 4u);

    cow_fn_102bc480(g, p);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
