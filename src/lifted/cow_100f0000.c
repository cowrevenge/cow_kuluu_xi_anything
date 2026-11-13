/* f_0x100f0000 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies the null-terminated byte string from the stack argument to the global buffer at 0x104ca438 and returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f0000(Guest* g, uint32_t src)
{
    (void)g;

    const uint32_t dst = COW_IMG(0x104CA438u);
    const uint32_t delta = dst - src;
    uint32_t p = src;
    uint32_t c;

    do {
        c = rd8(p);
        wr8(p + delta, (uint8_t)c);
        ++p;
    } while (c != 0u);

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100f0000(g, src);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
