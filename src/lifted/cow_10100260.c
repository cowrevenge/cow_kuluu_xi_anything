/* f_0x10100260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low byte of the third stack argument to the bytes at offsets 0x2b and 0x2c of the object pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100260(Guest* g, uint32_t self, uint32_t c)
{
    const uint32_t edx0 = g->edx;
    const uint8_t c8 = (uint8_t)c;

    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)c8;

    uint8_t v1 = (uint8_t)(rd8(self + 0x2bu) + c8);
    g->edx = (edx0 & 0xFFFFFF00u) | (uint32_t)v1;
    wr8(self + 0x2bu, v1);

    uint8_t v2 = (uint8_t)(rd8(self + 0x2cu) + c8);
    g->edx = (edx0 & 0xFFFFFF00u) | (uint32_t)v2;
    wr8(self + 0x2cu, v2);

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t c = rd32(sp0 + 0xcu);
    const uint32_t result = cow_fn_10100260(g, self, c);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
