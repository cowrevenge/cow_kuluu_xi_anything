/* f_0x10100240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts the low byte of the third stack argument from the bytes at offsets 0x28 and 0x29 of the first stack argument, leaving eax as that pointer and edx's low byte as the second subtraction result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100240(Guest* g, uint32_t self, uint32_t c)
{
    const uint32_t entry_edx = g->edx;
    const uint8_t sub = (uint8_t)c;

    const uint8_t r1 = (uint8_t)(rd8(self + 0x28u) - sub);
    wr8(self + 0x28u, r1);

    const uint8_t r2 = (uint8_t)(rd8(self + 0x29u) - sub);
    wr8(self + 0x29u, r2);

    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)sub;
    g->edx = (entry_edx & 0xFFFFFF00u) | (uint32_t)r2;

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t c = rd8(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100240(g, self, c);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
