/* f_0x10098a40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit table entry at index (param & 0xffff) when that low 16-bit index is below 0x40, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10098a40(Guest* g, uint32_t param)
{
    (void)g;
    const uint32_t index = param & 0xFFFFu;

    if (index >= 0x40u)
    {
        return 0u;
    }

    return rd32(COW_IMG(0x1047fda8u) + index * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10098a40(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
