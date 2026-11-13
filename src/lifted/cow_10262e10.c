/* f_0x10262e10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Rewrites the first stack argument to *(arg0 + 8), then tail-calls FUN_10266860 with the modified first argument and the unchanged second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10262e10(Guest* g, uint32_t sp0)
{
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t new_arg0 = rd32(arg0 + 8u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    wr32(sp0 + 4u, new_arg0);

    const uint32_t eax = cow_stdcall(g, COW_IMG(0x10266860u), 2u, new_arg0, arg1);

    /* The tail-called function's final edx is what this function leaves in edx. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10262e10(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);   /* target ends in ret 8 */
}
/* COW_ADAPTER END */
