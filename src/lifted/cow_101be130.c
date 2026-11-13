/* f_0x101be130 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the first 16-bit stack argument is less than or equal to the second, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101be130(Guest* g, uint32_t arg1, uint32_t arg2)
{
    (void)g;
    return ((uint16_t)arg1 <= (uint16_t)arg2) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101be130(g, rd16(sp0 + 4u), rd16(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
