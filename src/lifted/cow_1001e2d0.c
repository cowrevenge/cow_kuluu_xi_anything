/* f_0x1001e2d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets global 0x10456d88 to 8 when the byte argument is nonzero, otherwise 0, and returns that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1001e2d0(Guest* g, uint32_t param)
{
    (void)g;
    const uint32_t result = ((uint8_t)param != 0u) ? 8u : 0u;
    wr32(COW_IMG(0x10456d88u), result);
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_1001e2d0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
