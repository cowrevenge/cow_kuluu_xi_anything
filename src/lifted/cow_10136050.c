/* f_0x10136050 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Initializes a caller-supplied record by zeroing bytes 1-3 and setting byte 0 to 2, then returns the pointer with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10136050(Guest* g, uint32_t param)
{
    g->ecx = 0u;
    wr16(param + 2u, (uint16_t)0u);
    wr8(param + 1u, (uint8_t)0u);
    wr8(param, (uint8_t)2u);
    return (param & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10136050(g, param);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
