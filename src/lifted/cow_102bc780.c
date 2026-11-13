/* f_0x102bc780 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards its two stack arguments to FUN_102bc450, then forwards the second argument to FUN_102bc6e0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102bc780(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t saved_esi = g->esi;

    /* Original:
       mov eax, [esp+4]   -> eax = param1
       push esi           -> save old esi (dead stack, not reproduced)
       mov esi, [esp+0xc] -> esi = param2
       push esi
       push eax
       call FUN_102bc450
    */
    g->eax = param1;
    g->esi = param2;

    cow_cdecl(g, COW_IMG(0x102bc450u), 2, param1, param2);

    /* Original:
       push esi
       call FUN_102bc6e0
    */
    cow_cdecl(g, COW_IMG(0x102bc6e0u), 1, param2);

    /* Original restores esi before ret. */
    g->esi = saved_esi;

    /* eax and edx are whatever the last call left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102bc780(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
