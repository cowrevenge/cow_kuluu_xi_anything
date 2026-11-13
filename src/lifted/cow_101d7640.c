/* f_0x101d7640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101d7660(this, i) for i = 0 through 0x41, preserving this in ecx for each call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d7640(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    for (uint32_t i = 0u; i < 0x42u; ++i)
    {
        cow_thiscall(g, COW_IMG(0x101d7660u), self, 1u, i);
    }

    g->esi = saved_esi;
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_101d7640(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
