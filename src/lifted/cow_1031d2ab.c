/* f_0x1031d2ab - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads esi from [ebp-0x20] and tail-calls FUN_1031d077 with argument 9.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1031d2ab(Guest* g, uint32_t ebp)
{
    g->esi = rd32(ebp - 0x20u);
    return cow_stdcall(g, COW_IMG(0x1031d077u), 1, 9u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031d2ab(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1031d2ab(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
