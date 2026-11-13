/* f_0x10152d60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ecx to a global address and tail-calls another function via fastcall.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152d60(Guest* g)
{
    uint32_t ecx_val = COW_IMG(0x105785F8u);
    /* edx is not modified by this function - it passes through from the caller */
    return cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, g->edx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10152d60(g);
    /* edx is preserved from entry since the original doesn't modify it */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
