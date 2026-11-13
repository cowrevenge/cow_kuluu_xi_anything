/* f_0x1020a3f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the byte at offset param_1 within a global table, preserving the upper 24 bits of eax from param_1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020a3f0(Guest* g, uint32_t param_1)
{
    (void)g;
    const uint32_t addr = param_1 + COW_IMG(0x10385970u);
    return (param_1 & 0xFFFFFF00u) | (uint32_t)rd8(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1020a3f0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
