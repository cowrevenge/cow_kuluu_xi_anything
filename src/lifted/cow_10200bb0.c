/* f_0x10200bb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls FUN_10200c90 with the object as this, then tail-calls FUN_101f6870 with the same object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10200bb0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    wr32(self, COW_IMG(0x1033ac28u));

    cow_thiscall_cdecl(g, COW_IMG(0x10200c90u), self, 0u);

    g->ecx = self;
    g->esi = saved_esi;
    g->esp = sp0;

    cow_thiscall(g, COW_IMG(0x101f6870u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10200bb0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
