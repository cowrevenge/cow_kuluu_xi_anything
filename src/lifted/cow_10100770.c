/* f_0x10100770 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low byte of the third stack argument to the bytes at offsets 0x35 and 0x3d of the structure pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100770(Guest* g, uint32_t self, uint32_t unused, uint32_t c)
{
    (void)unused;

    uint8_t b35 = (uint8_t)(rd8(self + 0x35u) + (uint8_t)c);
    wr8(self + 0x35u, b35);

    uint8_t b3d = (uint8_t)(rd8(self + 0x3du) + (uint8_t)c);
    wr8(self + 0x3du, b3d);

    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)c;
    g->edx = (g->edx & 0xFFFFFF00u) | b3d;

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t c = rd8(sp0 + 0xcu);
    const uint32_t result = cow_fn_10100770(g, self, 0u, c);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
