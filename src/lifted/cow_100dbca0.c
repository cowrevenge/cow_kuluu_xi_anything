/* f_0x100dbca0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the global dword at 0x10492db4 with its low byte replaced by 1 if nonzero, else 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100dbca0(Guest* g)
{
    (void)g;
    const uint32_t v = rd32(COW_IMG(0x10492DB4u));
    return (v & 0xFFFFFF00u) | (v != 0u ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dbca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100dbca0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
