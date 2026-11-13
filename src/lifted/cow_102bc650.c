/* f_0x102bc650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc480, FUN_102bc4c0, and FUN_102bc480 again with the single stack argument, preserving the original register state around the calls.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102bc650(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t saved_esi = g->esi;
    uint32_t esi = param;

    /* Original: push esi; mov esi, [esp+8] */
    g->esp = sp0 - 4u;
    g->esi = esi;

    /* Original: push esi; call 0x102bc480 */
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, g->esi);
    esi = g->esi;
    g->esp = sp0 - 8u;

    /* Original: push esi; call 0x102bc4c0 */
    g->esp = sp0 - 12u;
    cow_cdecl(g, COW_IMG(0x102bc4c0u), 1u, g->esi);
    esi = g->esi;
    g->esp = sp0 - 12u;

    /* Original: push esi; call 0x102bc480 */
    g->esp = sp0 - 16u;
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, g->esi);
    esi = g->esi;
    g->esp = sp0 - 16u;

    /* Original: add esp, 0xc; pop esi */
    g->esp = sp0 - 4u;
    g->esi = saved_esi;

    /* eax and edx are whatever the last callee left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102bc650(g, sp0, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
