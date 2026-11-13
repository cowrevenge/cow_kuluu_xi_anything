/* f_0x10107ff0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears bit 12 of the dword pointed to by the argument and returns 1 if it was set, otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10107ff0(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t v = rd32(param);

    if ((v & 0x1000u) == 0u)
    {
        return 0u;
    }

    wr32(param, v & 0xffffefffu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10107ff0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
