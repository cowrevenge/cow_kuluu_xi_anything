/* f_0x10221c90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1011a3d0 on the member pointer at [this+8] if non-null, then tail-calls FUN_10221cd0 on this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10221c90(Guest* g, uint32_t self)
{
    uint32_t member = rd32(self + 8u);

    if (member != 0u)
    {
        cow_thiscall_cdecl(g, COW_IMG(0x1011a3d0u), member, 0u);
    }

    cow_thiscall_cdecl(g, COW_IMG(0x10221cd0u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221c90(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
