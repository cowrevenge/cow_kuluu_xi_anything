/* f_0x10022290 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the sign-extended byte from a table at 0x1032a410 for signed indices less than 9, otherwise -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10022290(Guest* g, uint32_t index)
{
    (void)g;

    if ((int32_t)index >= 9)
    {
        return 0xFFFFFFFFu;
    }

    const uint32_t table = COW_IMG(0x1032A410u);
    return (uint32_t)(int32_t)(int8_t)rd8(table + index);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10022290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t index = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10022290(g, index);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
