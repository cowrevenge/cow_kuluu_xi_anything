/* f_0x10112fe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls a subobject routine at offset 0x8e8, then tail-calls another routine on the object itself.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10112fe0(Guest* g, uint32_t self)
{
    wr32(self, COW_IMG(0x10332f70u));

    cow_thiscall_cdecl(g, COW_IMG(0x101c4570u), self + 0x8e8u, 0u);

    cow_thiscall_cdecl(g, COW_IMG(0x1010c860u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10112fe0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
