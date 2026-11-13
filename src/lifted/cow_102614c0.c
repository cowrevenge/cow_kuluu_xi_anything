/* f_0x102614c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_10265980 with ecx adjusted by +4 when non-null, or zero when null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102614c0(Guest* g, uint32_t self)
{
    if (self != 0u)
    {
        self += 4u;
    }
    else
    {
        self = 0u;
    }

    cow_thiscall_cdecl(g, COW_IMG(0x10265980u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102614c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102614c0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
