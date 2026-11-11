/* f_0x1025e8b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls DeleteCriticalSection on the critical section passed in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025e8b0(Guest* g, uint32_t self)
{
    cow_stdcall(g, rd32(COW_IMG(0x103292f4u)), 1, self);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025e8b0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
