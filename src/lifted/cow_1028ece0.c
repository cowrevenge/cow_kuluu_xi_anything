/* f_0x1028ece0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low byte of the third stack argument into the byte at (second argument + *(int*)(first argument + 0x28)).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
static uint32_t cow_1028ece0_offset(uint32_t p1)
{
    return rd32(p1 + 0x28u);
}

void cow_fn_1028ece0(Guest* g, uint32_t p2, uint32_t off, uint32_t p3)
{
    (void)g;
    wr8(p2 + off, (uint8_t)p3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028ece0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p3 = rd8(sp0 + 0xcu);
    const uint32_t off = cow_1028ece0_offset(p1);
    const uint32_t p2 = rd32(sp0 + 8u);

    cow_fn_1028ece0(g, p2, off, p3);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
