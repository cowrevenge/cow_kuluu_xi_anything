/* f_0x10034120 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10032a70 256 times, passing a decreasing image address in ecx each time, while preserving caller-saved esi/edi across the loop.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10034120(Guest* g)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    g->esi = COW_IMG(0x1045EC20u);
    g->edi = 0x100u;

    do
    {
        g->esi = g->esi - 0x34u;
        g->ecx = g->esi;
        cow_cdecl(g, COW_IMG(0x10032a70u), 0);
        g->edi = g->edi - 1u;
    } while (g->edi != 0u);

    const uint32_t result_eax = g->eax;
    const uint32_t result_edx = g->edx;

    g->esi = saved_esi;
    g->edi = saved_edi;
    g->edx = result_edx;

    return result_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10034120(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
