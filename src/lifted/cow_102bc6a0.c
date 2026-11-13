/* f_0x102bc6a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc480, FUN_102bc500, and FUN_102bc480 again with the sole stack argument, preserving the original's final eax/edx and restoring esi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102bc6a0(Guest* g, uint32_t param)
{
    const uint32_t old_esi = g->esi;

    /* mov esi, dword ptr [esp + 8] */
    g->esi = param;

    /* push esi / call 0x102bc480 */
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, g->esi);

    /* push esi / call 0x102bc500 */
    cow_cdecl(g, COW_IMG(0x102bc500u), 1u, g->esi);

    /* push esi / call 0x102bc480 */
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, g->esi);

    /* add esp, 0xc */
    /* pop esi */
    g->esi = old_esi;

    /* eax and edx are whatever the last callee left in g. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102bc6a0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
