/* f_0x10152860 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Tail-calls to 0x10257860 with ecx set to a global, returning its eax/edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152860(Guest* g)
{
    const uint32_t ecx_val = COW_IMG(0x10578688u);
    /* Save edx in case the callee modifies it; for a true tail call, callee's edx is what returns. */
    /* The original is a jmp, so callee's eax and edx are directly returned to our caller. */
    cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, g->edx, 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    const uint32_t saved_edx = g->edx;
    const uint32_t result = cow_fn_10152860(g);
    /* For a tail call, the callee's edx is what should be returned. 
       But if the callee doesn't touch edx, it stays as input. */
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
