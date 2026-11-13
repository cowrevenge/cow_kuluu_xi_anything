/* f_0x1001b760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls FUN_1001b7d0 with the object in ecx, then tail-calls FUN_1002c790 with the object in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001b760(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    wr32(self, COW_IMG(0x1032a2e0u));

    g->esi = self;
    cow_thiscall_cdecl(g, COW_IMG(0x1001b7d0u), self, 0);
    g->esi = saved_esi;

    cow_thiscall_cdecl(g, COW_IMG(0x1002c790u), self, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b760(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
