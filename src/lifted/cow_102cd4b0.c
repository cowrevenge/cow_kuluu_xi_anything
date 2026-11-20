/* f_0x102cd4b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   CPU feature probe that writes only dead stack locals and has no caller-visible effects.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102cd4b0(Guest* g)
{
    (void)g;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cd4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102cd4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
