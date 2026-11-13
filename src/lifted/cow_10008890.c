/* f_0x10008890 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_10124070 as a thiscall with self 0x104e1c40 and the single stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10008890(Guest* g, uint32_t arg)
{
    const uint32_t result = cow_thiscall(
        g,
        COW_IMG(0x10124070u),
        COW_IMG(0x104e1c40u),
        1u,
        arg
    );

    /* The tail-called function leaves edx; cow_thiscall updates g->edx. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10008890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10008890(g, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ret 4 */
}
/* COW_ADAPTER END */
