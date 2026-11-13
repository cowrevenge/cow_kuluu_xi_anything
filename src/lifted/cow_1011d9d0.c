/* f_0x1011d9d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_1011cec0 with the same single stack argument, returning its result and leaving edx as it was on entry.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1011d9d0(Guest* g, uint32_t param_1)
{
    /* The original loads [esp+4] into eax and stores it back (no-op), then jumps to 0x1011cec0. */
    return cow_cdecl(g, COW_IMG(0x1011cec0u), 1, param_1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1011d9d0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in bare ret: caller pops */
}
/* COW_ADAPTER END */
