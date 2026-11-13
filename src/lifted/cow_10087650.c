/* f_0x10087650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Returns whether the word at global address 0x104802BA is non-zero, preserving upper bits of EAX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087650(Guest* g)
{
    uint16_t val = rd16(COW_IMG(0x104802BAu));
    uint32_t setne_result = (val != 0) ? 1u : 0u;
    return (g->eax & 0xFFFFFF00u) | setne_result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087650(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
