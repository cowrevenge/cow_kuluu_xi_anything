/* f_0x103028ec - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10312eed with the second stack argument (param_2).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_103028ec(Guest* g, uint32_t param_1, uint32_t param_2)
{
    (void)param_1;
    cow_cdecl(g, COW_IMG(0x10312eedu), 1, param_2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103028ec(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    cow_fn_103028ec(g, param_1, param_2);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
