/* f_0x10096200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte set to 0 if the byte at offset 0xEE is 3, 4, or 5, otherwise set to 1, preserving the upper 24 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10096200(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t upper = param & 0xFFFFFF00u;
    const uint8_t al = rd8(param + 0xEEu);

    if (al == 3u || al == 4u || al == 5u)
    {
        return upper;
    }

    return upper | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10096200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10096200(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
