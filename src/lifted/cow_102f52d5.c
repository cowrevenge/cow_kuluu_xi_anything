/* f_0x102f52d5 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the value at self+0xc and zeroes it out (atomic-like fetch-and-clear).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f52d5(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t addr = self + 0xCu;
    const uint32_t val = rd32(addr);
    wr32(addr, 0u);
    return val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f52d5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102f52d5(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
