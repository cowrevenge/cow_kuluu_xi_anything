/* f_0x10081480 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the shifted bit mask with its low byte replaced by whether that bit is set in the global byte at 0x1047d499.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10081480(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t shifted = 1u << (param & 31u);
    const uint32_t nonzero = (rd8(COW_IMG(0x1047d499u)) & (uint8_t)shifted) != 0u;

    return (shifted & 0xFFFFFF00u) | nonzero;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_10081480(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
