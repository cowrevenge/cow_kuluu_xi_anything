/* f_0x10100320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   subtracts the low byte of arg3 from the byte at [arg1 + 0x2d].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100320(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg2;
    const uint32_t addr = arg1 + 0x2Du;
    const uint8_t val = rd8(addr);
    const uint8_t sub_val = (uint8_t)(arg3 & 0xFFu);
    wr8(addr, (uint8_t)(val - sub_val));
    /* eax holds arg1 after instruction 1 and is never modified again */
    g->edx = g->edx; /* edx is never written by this function, leave as-is */
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 0xCu);

    const uint32_t result = cow_fn_10100320(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
