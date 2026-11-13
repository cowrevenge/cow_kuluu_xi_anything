/* f_0x10092760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10092780 ten times on this object with loop indices 0 through 9, preserving the caller's esi/edi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10092760(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    g->edi = self;
    g->esi = 0u;

    for (;;)
    {
        cow_thiscall(g, COW_IMG(0x10092780u), g->edi, 1u, g->esi);

        g->esi = (uint32_t)(g->esi + 1u);

        if ((int32_t)g->esi >= (int32_t)10)
            break;
    }

    g->esi = saved_esi;
    g->edi = saved_edi;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10092760(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
