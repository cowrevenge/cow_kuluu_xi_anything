/* f_0x10018590 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the vtable pointer at the object, advances the this pointer by 4, and tail-calls the base constructor.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10018590(Guest* g, uint32_t self)
{
    wr32(self, COW_IMG(0x10329F90u));
    cow_thiscall_cdecl(g, COW_IMG(0x101be440u), self + 4u, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018590(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
