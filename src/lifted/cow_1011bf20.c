/* f_0x1011bf20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the sign-extended 16-bit stack arguments into two global dwords and returns the first.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011bf20(Guest* g, uint32_t arg0, uint32_t arg1)
{
    wr32(COW_IMG(0x104e1b88u), arg0);
    wr32(COW_IMG(0x104e1b8cu), arg1);
    g->ecx = arg1;
    return arg0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011bf20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = (uint32_t)(int32_t)(int16_t)rd16(sp0 + 4u);
    const uint32_t arg1 = (uint32_t)(int32_t)(int16_t)rd16(sp0 + 8u);
    const uint32_t result = cow_fn_1011bf20(g, arg0, arg1);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
