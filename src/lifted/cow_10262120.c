/* f_0x10262120 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the imported InterlockedIncrement on the caller's argument plus 0x10.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10262120(Guest* g, uint32_t param_1)
{
    const uint32_t target = rd32(COW_IMG(0x10329198u));
    const uint32_t arg = param_1 + 0x10u;

    const uint32_t result = cow_stdcall(g, target, 1u, arg);

    /* The tail call leaves eax/edx as the callee leaves them. */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10262120(g, param_1);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
