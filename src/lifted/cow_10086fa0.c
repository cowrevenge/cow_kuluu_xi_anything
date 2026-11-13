/* f_0x10086fa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1008a9d0 0x901 times, passing a descending pointer in ecx, while preserving esi/edi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10086fa0(Guest* g, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    /* push esi; push edi */
    g->esp = sp0 - 4u;
    wr32(g->esp, saved_esi);
    g->esp = sp0 - 8u;
    wr32(g->esp, saved_edi);

    g->esi = COW_IMG(0x1047FAACu);
    g->edi = 0x901u;

    do
    {
        g->esi -= 4u;
        g->ecx = g->esi;
        cow_cdecl(g, COW_IMG(0x1008A9D0u), 0u);
        --g->edi;
    } while (g->edi != 0u);

    /* pop edi; pop esi */
    g->edi = rd32(g->esp);
    g->esp += 4u;
    g->esi = rd32(g->esp);
    g->esp += 4u;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10086fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10086fa0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
