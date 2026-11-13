/* f_0x10100260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low byte of the third stack argument to the bytes at offsets 0x2b and 0x2c of the structure pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100260(Guest* g, uint32_t self, uint32_t unused, uint32_t addend)
{
    (void)unused;

    const uint8_t cl = (uint8_t)addend;
    const uint32_t edx_initial = g->edx;

    uint8_t dl = rd8((uint32_t)(self + 0x2bu));
    uint8_t r1 = (uint8_t)(dl + cl);
    wr8((uint32_t)(self + 0x2bu), r1);

    dl = rd8((uint32_t)(self + 0x2cu));
    uint8_t r2 = (uint8_t)(dl + cl);
    wr8((uint32_t)(self + 0x2cu), r2);

    g->edx = (edx_initial & 0xFFFFFF00u) | (uint32_t)r2;

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100260(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
