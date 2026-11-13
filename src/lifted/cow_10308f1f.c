/* f_0x10308f1f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10312eed with the second stack argument (param_2).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10308f1f(Guest* g, uint32_t param_1, uint32_t param_2)
{
    cow_cdecl(g, COW_IMG(0x10312eedu), 1, param_2);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10308f1f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10308f1f(g, rd32(sp0 + 4u), rd32(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
