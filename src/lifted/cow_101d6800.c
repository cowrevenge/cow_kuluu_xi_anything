/* f_0x101d6800 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls a cleanup routine, then tail-calls a finalizer with the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d6800(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    wr32(self, COW_IMG(0x103384c8u));

    g->esi = self;
    cow_thiscall_cdecl(g, COW_IMG(0x101d6850u), self, 0u);
    g->esi = saved_esi;

    cow_thiscall_cdecl(g, COW_IMG(0x101f6870u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d6800(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
