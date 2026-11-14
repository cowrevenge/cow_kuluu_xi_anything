/* f_0x100e7a20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100f1510(2), then calls FUN_100f1340 with its result and the original argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100e7a20(Guest* g, uint32_t arg)
{
    uint32_t r = cow_cdecl(g, COW_IMG(0x100f1510u), 1u, 2u);
    cow_cdecl(g, COW_IMG(0x100f1340u), 4u, r, 0u, 0u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    cow_fn_100e7a20(g, arg);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
