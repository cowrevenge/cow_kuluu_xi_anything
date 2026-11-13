/* f_0x102da74b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102e7750, conditionally calls FUN_10311bf0 with self when the low bit of the stack argument is set, and returns self.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102da74b(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    g->esi = self;

    cow_thiscall_cdecl(g, COW_IMG(0x102e7750u), self, 0u);

    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);
        g->ecx = self;
    }

    g->esi = saved_esi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102da74b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_102da74b(g, self, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
