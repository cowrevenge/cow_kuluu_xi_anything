/* f_0x101f7220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a 32-bit entry from a global table indexed by the stack argument shifted left by 4, or 0 if a global byte is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101f7220(Guest* g, uint32_t flag, uint32_t param)
{
    if ((flag & 0xFFu) == 0u)
    {
        return 0u;
    }

    return rd32(COW_IMG(0x106637b0u) + (uint32_t)(param << 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7220(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t flag = rd8(COW_IMG(0x106637a8u));
    const uint32_t param = ((flag & 0xFFu) != 0u) ? rd32(sp0 + 4u) : 0u;

    const uint32_t result = cow_fn_101f7220(g, flag, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
