/* f_0x10327f9b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Loads a pointer from [ebp-0x10], adds 0x20, and tail-calls a thunk with that value in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327f9b(Guest* g, uint32_t ebp)
{
    uint32_t ecx = rd32(ebp - 0x10u);
    ecx += 0x20u;
    return cow_fastcall(g, COW_IMG(0x10269140u), ecx, g->edx, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327f9b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327f9b(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
