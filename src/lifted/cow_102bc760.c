/* f_0x102bc760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc480 and FUN_102bc720 with the single stack argument, preserving the original's esi save/restore and leaving eax/edx as the callees left them.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102bc760(Guest* g, uint32_t param)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t sp0 = g->esp;

    /* push esi (save original esi) */
    g->esp -= 4u;
    wr32(g->esp, saved_esi);

    /* mov esi, dword ptr [esp + 8] */
    g->esi = param;

    /* push esi; call 0x102bc480 */
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, g->esi);

    /* push esi; call 0x102bc720 */
    cow_cdecl(g, COW_IMG(0x102bc720u), 1u, g->esi);

    /* add esp, 8 (cow_cdecl already popped the two arguments) */
    /* pop esi */
    g->esp = sp0 - 4u;
    g->esi = rd32(g->esp);
    g->esp = sp0;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102bc760(g, arg0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
