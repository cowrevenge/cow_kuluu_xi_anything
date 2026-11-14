/* f_0x1003e2a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies four bytes from the stack argument into the object in ecx, swapping the first and third byte positions.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1003e2a0(Guest* g, uint32_t self, uint32_t src)
{
    (void)g;

    uint8_t b0 = rd8(src);
    wr8(self + 2u, b0);

    uint8_t b1 = rd8(src + 1u);
    wr8(self + 1u, b1);

    uint8_t b2 = rd8(src + 2u);
    wr8(self, b2);

    uint8_t b3 = rd8(src + 3u);
    wr8(self + 3u, b3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);

    cow_fn_1003e2a0(g, self, src);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
