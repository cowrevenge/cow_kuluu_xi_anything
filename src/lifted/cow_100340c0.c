/* f_0x100340c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10032a70 256 times, passing a descending global address in ecx each time.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100340c0(Guest* g, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    /* Emulate the original stack context for the callee:
       push esi / push edi leave esp = sp0 - 8 before the call. */
    wr32(sp0 - 4u, saved_esi);
    wr32(sp0 - 8u, saved_edi);
    g->esp = sp0 - 8u;

    uint32_t esi = COW_IMG(0x10462430u);
    uint32_t edi = 0x100u;

    do
    {
        esi -= 0x34u;
        g->ecx = esi;
        cow_cdecl(g, COW_IMG(0x10032a70u), 0u);
        --edi;
    } while (edi != 0u);

    /* Restore the registers the original saved with push/pop. */
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->esp = sp0;

    /* eax and edx are whatever the last callee left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100340c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100340c0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
