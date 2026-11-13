/* f_0x10022320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the sign-extended byte from a 9-entry table, or -1 if the signed index is >= 9.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10022320(Guest* g, uint32_t index)
{
    (void)g;

    if ((int32_t)index >= 9)
    {
        return 0xFFFFFFFFu;
    }

    return (uint32_t)(int32_t)(int8_t)rd8(index + COW_IMG(0x1032a41cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10022320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t index = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10022320(g, index);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
