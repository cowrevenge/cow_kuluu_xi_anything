/* f_0x100fe300 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0x20 when the low byte of the stack argument is 1..0x1F, otherwise returns that low byte zero-extended.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100fe300(Guest* g, uint32_t arg)
{
    (void)g;
    const uint32_t low = arg & 0xFFu;

    if (low == 0u || low >= 0x20u)
    {
        return low;
    }

    return 0x20u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100fe300(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
