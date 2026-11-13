/* f_0x10221320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the caller-supplied mask has any bit in common with the object's 0x6c mask, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10221320(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;
    return (uint32_t)((rd32(self + 0x6cu) & arg) != 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10221320(g, self, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
