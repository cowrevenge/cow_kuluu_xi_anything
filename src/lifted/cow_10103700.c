/* f_0x10103700 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x104E0AF4 is null, returns 0; otherwise stores the dword at offset 0x438 into the caller's output pointer and returns that dword with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10103700(Guest* g, uint32_t global, uint32_t param)
{
    (void)g;

    if (global == 0u)
    {
        return 0u;
    }

    const uint32_t value = rd32(global + 0x438u);
    wr32(param, value);
    return (value & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t global = rd32(COW_IMG(0x104E0AF4u));

    uint32_t param = 0u;
    if (global != 0u)
    {
        param = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_10103700(g, global, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
