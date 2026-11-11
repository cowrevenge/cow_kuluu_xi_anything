/* f_0x10056270 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   adds 0x30 to ecx and tail-calls FUN_10056220 with the modified ecx as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10056270(Guest* g, uint32_t self)
{
    const uint32_t new_ecx = self + 0x30u;
    return cow_thiscall_cdecl(g, COW_IMG(0x10056220u), new_ecx, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10056270(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
