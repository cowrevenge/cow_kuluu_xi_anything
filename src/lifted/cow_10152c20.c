/* f_0x10152c20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   A thunk that sets ecx to a global address and tail-calls another fastcall function.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152c20(Guest* g)
{
    const uint32_t target = COW_IMG(0x10257860u);
    const uint32_t ecx_val = COW_IMG(0x105786b8u);
    const uint32_t edx_val = g->edx;

    const uint32_t result = cow_fastcall(g, target, ecx_val, edx_val, 0);

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152c20(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10152c20(g);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
