/* f_0x10027cd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies four dwords from the argument structure into self+0x30..0x3c and returns the fourth source dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10027cd0(Guest* g, uint32_t self, uint32_t src)
{
    uint32_t v;

    (void)g;

    v = rd32(src);
    wr32(self + 0x30u, v);

    v = rd32(src + 4u);
    wr32(self + 0x34u, v);

    v = rd32(src + 8u);
    wr32(self + 0x38u, v);

    v = rd32(src + 0xcu);
    wr32(self + 0x3cu, v);

    return v;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10027cd0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
