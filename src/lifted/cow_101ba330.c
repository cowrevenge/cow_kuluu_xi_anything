/* f_0x101ba330 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer and reference count, calls FUN_101ba2d0, then tail-calls FUN_101ba300.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ba330(Guest* g, uint32_t self)
{
    wr32(self, COW_IMG(0x10337b2cu));
    wr32(self + 4u, 1u);

    cow_thiscall_cdecl(g, COW_IMG(0x101ba2d0u), self, 0u);

    cow_thiscall_cdecl(g, COW_IMG(0x101ba300u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t saved_esi = g->esi;

    cow_fn_101ba330(g, self);

    g->esp = sp0;
    g->esi = saved_esi;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
