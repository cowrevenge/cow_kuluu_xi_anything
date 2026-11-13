/* f_0x10152a20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ecx to a global address and tail-calls a fastcall function at 0x10257860, preserving edx from entry.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152a20(Guest* g)
{
    const uint32_t saved_edx = g->edx;
    const uint32_t ecx_val = COW_IMG(0x10578518u);
    /* Tail call to 0x10257860 as fastcall: ecx is param_1, edx is param_2 */
    uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, saved_edx, 0u);
    /* Preserve edx from entry as the original does */
    g->edx = saved_edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10152a20(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret 0 */
}
/* COW_ADAPTER END */
