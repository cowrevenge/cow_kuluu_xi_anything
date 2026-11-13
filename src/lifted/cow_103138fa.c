/* f_0x103138fa - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets edx to a fixed address and tail-calls __cintrindisp2 (which returns void).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103138fa(Guest* g)
{
    g->edx = COW_IMG(0x103cffe0u);
    cow_cdecl(g, COW_IMG(0x1031dd70u), 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103138fa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103138fa(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
