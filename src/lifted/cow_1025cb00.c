/* f_0x1025cb00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-jumps to the function pointer stored at 0x1066946c, or returns 0 if it is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025cb00(Guest* g)
{
    const uint32_t target = rd32(COW_IMG(0x1066946cu));

    if (target == 0u)
    {
        return 0u;
    }

    g->eax = target;
    rt_call_indirect(g, target);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cb00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1025cb00(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
