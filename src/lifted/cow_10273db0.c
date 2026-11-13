/* f_0x10273db0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Initializes the three-dword structure at the stack argument to {1, -1, -1} and returns that pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10273db0(Guest* g, uint32_t param)
{
    const uint32_t ecx = 0xFFFFFFFFu;
    g->ecx = ecx;

    wr32(param, 1u);
    wr32(param + 4u, ecx);
    wr32(param + 8u, ecx);

    return param;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10273db0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
