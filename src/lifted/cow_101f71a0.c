/* f_0x101f71a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit global at 0x106637e0 when the byte at 0x106637a8 is nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101f71a0(Guest* g)
{
    const uint8_t byte = (uint8_t)rd8(COW_IMG(0x106637A8u));
    const uint32_t value = rd32(COW_IMG(0x106637E0u));
    return (byte != 0u) ? value : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f71a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f71a0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
