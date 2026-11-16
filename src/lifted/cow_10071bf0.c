/* f_0x10071bf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10071de0 with this in ecx, then if the low bit of the stack byte argument is set calls thunk_FUN_10028aa0 with this as its argument, and returns this in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10071bf0(Guest* g, uint32_t self, uint32_t sp0)
{
    cow_thiscall_cdecl(g, COW_IMG(0x10071de0u), self, 0u);

    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        cow_cdecl(g, COW_IMG(0x10028710u), 1u, self);
    }

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10071bf0(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
