/* f_0x102bc5e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards the two stack arguments to FUN_102bc4a0, then forwards the second argument to FUN_102bc480.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bc5e0(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t saved_esi = g->esi;

    g->eax = param1;
    g->esi = param2;

    cow_cdecl(g, COW_IMG(0x102bc4a0u), 2u, param1, param2);
    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, param2);

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    cow_fn_102bc5e0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
