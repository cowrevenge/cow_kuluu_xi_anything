/* f_0x10265960 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the imported InterlockedIncrement on the global at 0x1067a2a0 and returns the original ecx value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10265960(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    cow_stdcall(g,
                rd32(COW_IMG(0x10329198u)),
                1u,
                COW_IMG(0x1067a2a0u));

    g->esi = saved_esi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10265960(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
