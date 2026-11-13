/* f_0x100088b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_101240b0 with ecx set to the global table base and the single stack argument unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100088b0(Guest* g, uint32_t arg)
{
    cow_thiscall(g, COW_IMG(0x101240b0u), COW_IMG(0x104e1c40u), 1u, arg);

    /* The tail-called function leaves eax and edx; preserve both for the caller. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100088b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_100088b0(g, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ends in ret 4 */
}
/* COW_ADAPTER END */
