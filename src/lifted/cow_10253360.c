/* f_0x10253360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10253480 three times on the same object, passing loop indices 0, 1, and 2.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10253360(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    g->edi = self;
    g->esi = 0u;

    do
    {
        cow_thiscall(g, COW_IMG(0x10253480u), g->edi, 1u, g->esi);
        g->esi = g->esi + 1u;
    } while ((int32_t)g->esi < 3);

    g->esi = saved_esi;
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10253360(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
