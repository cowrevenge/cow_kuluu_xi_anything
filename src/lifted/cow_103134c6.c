/* f_0x103134c6 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10313448 with the single stack argument and returns 0 if it returned nonzero, otherwise -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_103134c6(Guest* g, uint32_t param)
{
    cow_cdecl(g, COW_IMG(0x10313448u), 1u, param);

    const uint32_t callee_eax = g->eax;
    const uint32_t callee_edx = g->edx;

    /*
       neg eax
       sbb eax, eax
       pop ecx
       neg eax
       dec eax

       If callee_eax == 0:
         neg -> 0, cf=0
         sbb -> 0
         neg -> 0
         dec -> 0xffffffff

       If callee_eax != 0:
         neg -> nonzero, cf=1
         sbb -> 0xffffffff
         neg -> 1
         dec -> 0
    */
    const uint32_t result = (callee_eax == 0u) ? 0xFFFFFFFFu : 0u;

    g->edx = callee_edx;

    /* The original pops the call return address into ecx. */
    g->ecx = COW_IMG(0x103134CFu);

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103134c6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_103134c6(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
