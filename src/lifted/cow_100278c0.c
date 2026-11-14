/* f_0x100278c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100276f0 with the two stack arguments, then calls FUN_100278e0 with the first argument, preserving the original's final eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100278c0(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t saved_esi = g->esi;

    g->eax = param2;
    g->esi = param1;

    cow_cdecl(g, COW_IMG(0x100276f0u), 2u, param1, param2);

    cow_cdecl(g, COW_IMG(0x100278e0u), 1u, g->esi);

    g->esi = saved_esi;

    const uint32_t eax_out = g->eax;
    const uint32_t edx_out = g->edx;
    g->edx = edx_out;

    return eax_out;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100278c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100278c0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
