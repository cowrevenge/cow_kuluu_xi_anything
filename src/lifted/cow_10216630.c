/* f_0x10216630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x10664530 is non-null, calls FUN_102169e0 as a thiscall with that pointer and argument 0x19.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10216630(Guest* g)
{
    const uint32_t self = rd32(COW_IMG(0x10664530u));

    if (self != 0u)
    {
        cow_thiscall(g, COW_IMG(0x102169e0u), self, 1u, 0x19u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216630(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10216630(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
