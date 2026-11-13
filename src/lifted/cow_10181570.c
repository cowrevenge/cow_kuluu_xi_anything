/* f_0x10181570 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 0x34330 to ecx and tail-calls FUN_101739b0 with the modified ecx as the this pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10181570(Guest* g, uint32_t self)
{
    return cow_thiscall_cdecl(g, COW_IMG(0x101739b0u), self + 0x34330u, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10181570(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret in target */
}
/* COW_ADAPTER END */
