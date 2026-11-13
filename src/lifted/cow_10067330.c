/* f_0x10067330 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the subobject at this+0x20, then tail-calls the subobject at this+4.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10067330(Guest* g, uint32_t self)
{
    const uint32_t old_esi = g->esi;

    g->esi = self;

    cow_thiscall(g, COW_IMG(0x10065d50u), self + 0x20u, 0u);

    g->esi = old_esi;

    cow_fastcall(g, COW_IMG(0x100641b0u), self + 4u, g->edx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10067330(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
