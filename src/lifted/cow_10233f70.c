/* f_0x10233f70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit table entry at offset 0x68 + index*4 in the object, when the low byte of the stack argument is less than 8; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10233f70(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;
    uint32_t index = arg & 0xffu;
    if (index >= 8u)
    {
        return 0u;
    }
    return rd32(self + index * 4u + 0x68u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10233f70(g, g->ecx, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
