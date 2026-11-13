/* f_0x101fcc80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls FUN_101fcd60 on the object, then tail-calls FUN_101f6870 on the object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fcc80(Guest* g, uint32_t self)
{
    wr32(self, COW_IMG(0x1033a9d0u));

    cow_thiscall(g, COW_IMG(0x101fcd60u), self, 0u);

    cow_thiscall(g, COW_IMG(0x101f6870u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fcc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_101fcc80(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
