/* f_0x1018bc90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the signed remainder of the first dword at `this` divided by 60.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018bc90(Guest* g, uint32_t self)
{
    (void)g;
    int32_t val = (int32_t)rd32(self);
    return (uint32_t)(val % 60);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bc90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018bc90(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
