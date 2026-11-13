/* f_0x100f04f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x104df770 is nonzero, copies the first byte of the argument to offset 0x15110 and returns that pointer with its low byte forced to 1; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f04f0(Guest* g, uint32_t param)
{
    const uint32_t dat = rd32(COW_IMG(0x104DF770u));

    if (dat == 0u)
    {
        return 0u;
    }

    const uint8_t b = rd8(param);
    wr8(dat + 0x15110u, b);

    return (dat & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f04f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100f04f0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
