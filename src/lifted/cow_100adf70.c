/* f_0x100adf70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10087070(0); if its low byte is nonzero, returns that result with the low byte cleared, otherwise returns bit 17 of the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100adf70(Guest* g, uint32_t param_1)
{
    const uint32_t r = cow_cdecl(g, COW_IMG(0x10087070u), 1u, 0u);

    if ((uint8_t)r != 0u)
    {
        return r & 0xFFFFFF00u;
    }

    return (param_1 >> 17) & 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100adf70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100adf70(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
