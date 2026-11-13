/* f_0x10003630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the vtable pointer for this object and tail-calls the base constructor at this + 4.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10003630(Guest* g, uint32_t self)
{
    wr32(self, COW_IMG(0x1032965Cu));
    cow_thiscall_cdecl(g, COW_IMG(0x100036a0u), self + 4u, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10003630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10003630(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
