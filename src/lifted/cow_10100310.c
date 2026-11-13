/* f_0x10100310 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds (third argument + 0x20) modulo 256 to the byte at offset 0x2d of the first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100310(Guest* g, uint32_t p1, uint32_t p3)
{
    (void)g;

    const uint32_t addr = p1 + 0x2Du;
    const uint32_t addend = (p3 + 0x20u) & 0xFFu;
    const uint32_t old = rd8(addr);

    wr8(addr, (old + addend) & 0xFFu);

    return p1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100310(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p3 = rd8(sp0 + 0xCu);

    const uint32_t result = cow_fn_10100310(g, p1, p3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
