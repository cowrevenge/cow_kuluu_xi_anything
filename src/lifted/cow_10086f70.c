/* f_0x10086f70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1008a9c0 once for each of 0x901 consecutive 4-byte slots starting at 0x1047d6a8, passing the slot address in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10086f70(Guest* g)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    uint32_t esi = COW_IMG(0x1047d6a8u);
    uint32_t edi = 0x901u;

    do
    {
        g->esi = esi;
        g->edi = edi;

        cow_thiscall_cdecl(g, COW_IMG(0x1008a9c0u), esi, 0u);

        esi += 4u;
        --edi;
    } while (edi != 0u);

    g->esi = saved_esi;
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10086f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;

    cow_fn_10086f70(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
