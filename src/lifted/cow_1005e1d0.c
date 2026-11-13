/* f_0x1005e1d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a byte-offset adjusted pointer derived from the first dword at self, or 0 if its low byte is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005e1d0(Guest* g, uint32_t self)
{
    (void)g;

    uint32_t v = rd32(self);

    if ((uint8_t)v == 0u)
    {
        return 0u;
    }

    return ((v >> 6) & 0x7Cu) + self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1005e1d0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
