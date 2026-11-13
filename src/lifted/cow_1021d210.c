/* f_0x1021d210 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ecx to a fixed global address and tail-calls another function.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1021d210(Guest* g)
{
    g->ecx = (uint32_t)(COW_IMG(0x10665a68u));
    return cow_cdecl(g, COW_IMG(0x1021c040u), 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1021d210(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
