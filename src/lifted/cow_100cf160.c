/* f_0x100cf160 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100d6180 ten times with this=ecx and the loop index 0..9 as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100cf160(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    /* Emulate the two pushes so the callee sees the same stack layout if it inspects it. */
    wr32(sp0 - 4u, saved_esi);
    wr32(sp0 - 8u, saved_edi);

    for (uint32_t i = 0u; i < 10u; ++i)
    {
        /* Before each call, esp is sp0 - 8 after the two saved-register pushes. */
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x100d6180u), self, 1u, i);
    }

    /* Emulate pop edi / pop esi. */
    g->edi = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 4u);

    /* eax and edx are whatever the last call left behind. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100cf160(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
