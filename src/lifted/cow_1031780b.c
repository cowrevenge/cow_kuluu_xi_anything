/* f_0x1031780b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1031782d with the dword at [ebp-0x14] and returns, leaving eax from the callee and ecx as the return address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1031780b(Guest* g, uint32_t ebp)
{
    const uint32_t param = rd32(ebp - 0x14u);
    cow_cdecl(g, COW_IMG(0x1031782du), 1, param);
    /* After the call and pop ecx: eax is whatever FUN_1031782d left in it. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031780b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1031780b(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
