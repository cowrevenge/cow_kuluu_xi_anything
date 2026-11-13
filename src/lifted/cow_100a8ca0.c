/* f_0x100a8ca0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls FUN_100814e0 with the +0x5a0 subobject, then tail-calls FUN_10082b40 with the object itself.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a8ca0(Guest* g, uint32_t self)
{
    wr32(self, COW_IMG(0x1032dfc8u));

    cow_thiscall_cdecl(g, COW_IMG(0x100814e0u), self + 0x5a0u, 0u);

    cow_thiscall_cdecl(g, COW_IMG(0x10082b40u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_100a8ca0(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
