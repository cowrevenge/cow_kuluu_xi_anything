/* f_0x1011a710 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies two dwords from self+0x42 and self+0x46 to the output pointer, then returns that pointer with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011a710(Guest* g, uint32_t self, uint32_t dest)
{
    uint32_t v1;
    uint32_t v2;

    (void)g;

    v1 = rd32(self + 0x42u);
    wr32(dest, v1);

    v2 = rd32(self + 0x46u);
    wr32(dest + 4u, v2);

    return (dest & 0xFFFFFF00u) | 0x00000001u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1011a710(g, g->ecx, rd32(sp0 + 4u));

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
