/* f_0x10152960 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_10257860 with ecx set to a fixed global address, returning its result and leaving edx as it was on entry.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152960(Guest* g)
{
    const uint32_t ecx_val = COW_IMG(0x105784B8u);
    const uint32_t edx_save = g->edx;
    const uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, 0, 0);
    g->edx = edx_save;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10152960(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
