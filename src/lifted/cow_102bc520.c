/* f_0x102bc520 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc4e0 with the two stack arguments, then calls FUN_102bc480 with the current esi after the first call, restoring the caller's esi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bc520(Guest* g, uint32_t arg0, uint32_t arg1)
{
    const uint32_t saved_esi = g->esi;

    g->eax = arg0;
    g->esi = arg1;

    cow_cdecl(g, COW_IMG(0x102bc4e0u), 2u, arg0, arg1);

    const uint32_t second_arg = g->esi;

    cow_cdecl(g, COW_IMG(0x102bc480u), 1u, second_arg);

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    cow_fn_102bc520(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
