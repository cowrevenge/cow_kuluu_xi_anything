/* f_0x1003e650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low byte of a stack argument to the byte at [this], storing the result back, and returns with eax holding the argument's low byte and edx holding the sum's low byte.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1003e650(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;
    uint8_t al = (uint8_t)arg;
    uint8_t dl = rd8(self);
    uint8_t sum = (uint8_t)(dl + al);
    wr8(self, sum);
    g->edx = (g->edx & 0xFFFFFF00u) | sum;
    return (g->eax & 0xFFFFFF00u) | al;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1003e650(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
