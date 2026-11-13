/* f_0x103128b2 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_10312827 with the single stack argument, discarding its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_103128b2(Guest* g, uint32_t param_1)
{
    cow_cdecl(g, COW_IMG(0x10312827u), 1, param_1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103128b2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    cow_fn_103128b2(g, param_1);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);   /* ret */
}
/* COW_ADAPTER END */
