/* f_0x10100380 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds (third stack argument + 0x20) to the byte at [first stack argument + 0x35].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100380(Guest* g, uint32_t p0, uint32_t p1, uint32_t p2)
{
    (void)p1;

    const uint32_t eax = p0;
    const uint8_t cl = (uint8_t)((uint8_t)p2 + 0x20u);
    const uint32_t addr = eax + 0x35u;

    wr8(addr, (uint8_t)(rd8(addr) + cl));

    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10100380(g, rd32(sp0 + 4u), 0u, rd8(sp0 + 0xcu));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
