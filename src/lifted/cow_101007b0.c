/* f_0x101007b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds (param_2 << 5) + param_3, modulo 256, to the byte at [param_1 + 0x36].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101007b0(Guest* g, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint8_t cl = (uint8_t)p2;
    uint8_t dl = (uint8_t)p3;

    cl = (uint8_t)(cl << 5);
    cl = (uint8_t)(cl + dl);

    dl = rd8(p1 + 0x36u);
    dl = (uint8_t)(dl + cl);

    wr8(p1 + 0x36u, dl);

    g->edx = (g->edx & 0xFFFFFF00u) | (uint32_t)dl;
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)cl;

    return p1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101007b0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t p2 = rd8(sp0 + 8u);
    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p3 = rd8(sp0 + 0xcu);

    const uint32_t result = cow_fn_101007b0(g, p1, p2, p3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
