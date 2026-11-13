/* f_0x100dd570 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   increments the 32-bit field at offset 0x109c of the argument and returns the argument with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100dd570(Guest* g, uint32_t obj)
{
    (void)g;

    const uint32_t addr = obj + 0x109Cu;
    wr32(addr, rd32(addr) + 1u);

    return (obj & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dd570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t obj = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100dd570(g, obj);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
