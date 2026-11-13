/* f_0x102bc5c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc480 and FUN_102bc500 with the single stack argument, preserving the caller's esi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bc5c0(Guest* g, uint32_t param)
{
    const uint32_t saved_esi = g->esi;

    g->esi = param;
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, g->esi);

    cow_cdecl(g, COW_IMG(0x102bc500u), 1u, g->esi);

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc5c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_102bc5c0(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
