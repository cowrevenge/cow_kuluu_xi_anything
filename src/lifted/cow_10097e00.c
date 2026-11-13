/* f_0x10097e00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Stores the first stack argument into a global and returns it with the low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10097e00(Guest* g, uint32_t param)
{
    (void)g;
    wr32(COW_IMG(0x104807E8u), param);
    /* mov al, 1 leaves the upper 24 bits of eax unchanged from the previous mov eax, [esp+4]. */
    return (param & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10097e00(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
