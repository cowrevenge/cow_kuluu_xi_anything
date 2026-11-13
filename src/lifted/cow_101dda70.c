/* f_0x101dda70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101dda90 seven times with this=ecx and an increasing index, preserving esi/edi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101dda70(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t sp0 = g->esp;

    /* Mimic the two pushes so the callee sees the same stack pointer as the original. */
    g->esp = sp0 - 8u;

    g->edi = self;
    g->esi = 0u;

    for (;;)
    {
        /* The original pushes the current esi as the sole stack argument. */
        cow_thiscall(g, COW_IMG(0x101dda90u), self, 1u, g->esi);

        /* inc esi; cmp esi, 7; jl loop */
        g->esi = g->esi + 1u;
        if ((int32_t)g->esi < 7)
        {
            continue;
        }
        break;
    }

    /* pop edi; pop esi */
    g->edi = saved_edi;
    g->esi = saved_esi;
    g->esp = sp0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dda70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_101dda70(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
