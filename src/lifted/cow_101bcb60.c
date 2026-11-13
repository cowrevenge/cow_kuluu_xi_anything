/* f_0x101bcb60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the global pointer at 0x10662dbc is null, otherwise tail-calls 0x101bcc30 with that pointer in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bcb60(Guest* g)
{
    const uint32_t ecx = rd32(COW_IMG(0x10662DBCu));

    if (ecx == 0u)
    {
        return 1u;
    }

    return cow_fastcall(g, COW_IMG(0x101bcc30u), ecx, g->edx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bcb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101bcb60(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
