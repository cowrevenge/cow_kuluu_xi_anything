/* f_0x10027cf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies three dwords from the argument structure into self+0x30, self+0x34, and self+0x38, returning the third copied dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10027cf0(Guest* g, uint32_t self, uint32_t src)
{
    (void)g;

    uint32_t v0 = rd32(src);
    wr32(self + 0x30u, v0);

    uint32_t v1 = rd32(src + 4u);
    wr32(self + 0x34u, v1);

    uint32_t v2 = rd32(src + 8u);
    wr32(self + 0x38u, v2);

    return v2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10027cf0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
