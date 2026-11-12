/* f_0x100163a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low byte of the stack argument into global byte at 0x104569C4 and returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100163a0(Guest* g, uint32_t param)
{
    wr8(COW_IMG(0x104569c4u), (uint8_t)param);
    return (g->eax & 0xFFFFFF00u) | ((uint32_t)(uint8_t)param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100163a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100163a0(g, rd8(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
