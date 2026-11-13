/* f_0x100964d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Dispatches to the function pointer stored at table[index], if the entry is non-null and index is signed-less-than 11; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100964d0(Guest* g, uint32_t sp0, uint32_t index)
{
    const uint32_t target = rd32(COW_IMG(0x1032d62cu) + index * 4u);

    if (target != 0u && (int32_t)index < 11)
    {
        g->eax = target;
        g->ecx = index;
        g->esp = sp0;
        rt_call_indirect(g, target);
        return g->eax;
    }

    g->eax = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100964d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t index = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_100964d0(g, sp0, index);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
