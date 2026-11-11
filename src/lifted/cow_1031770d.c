/* f_0x1031770d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ebx to 0, loads esi from [ebp+0xc], then tail-calls function at 0x10317712.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1031770d(Guest* g)
{
    g->ebx = 0;
    g->esi = rd32(g->ebp + 0xCu);
    /* Tail call to 0x10317712 */
    cow_stdcall(g, COW_IMG(0x10317712u), 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031770d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1031770d(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
