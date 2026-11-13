/* f_0x10292490 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Stores the low byte of the stack argument into global byte at 0x109a2828, preserving upper bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10292490(Guest* g, uint32_t param)
{
    (void)g;
    uint32_t old_eax = g->eax;
    uint8_t val = (uint8_t)param;
    wr8(COW_IMG(0x109a2828u), val);
    return (old_eax & 0xFFFFFF00u) | (uint32_t)val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10292490(g, rd8(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
