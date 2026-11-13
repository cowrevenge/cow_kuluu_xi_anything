/* f_0x10227060 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the first dword of the object, then tail-calls FUN_102270b0 with the object as ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10227060(Guest* g, uint32_t self)
{
    const uint32_t first = rd32(self);

    g->ecx = self;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, first);

    g->ecx = self;
    cow_thiscall_cdecl(g, COW_IMG(0x102270b0u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10227060(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
