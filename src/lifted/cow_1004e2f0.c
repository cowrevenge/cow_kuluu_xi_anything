/* f_0x1004e2f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 when the signed 32-bit value pointed to by `self` is less than the stack argument, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
static uint32_t cow_load_first_1004e2f0(uint32_t self)
{
    return rd32(self);
}

uint32_t cow_fn_1004e2f0(Guest* g, uint32_t first, uint32_t value)
{
    (void)g;
    return ((int32_t)first < (int32_t)value) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t first = cow_load_first_1004e2f0(self);
    const uint32_t value = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1004e2f0(g, first, value);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
