/* f_0x101e28b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies eight dwords from the stack argument to the object in ecx: the first dword directly, then seven dwords with rep movsd.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e28b0(Guest* g, uint32_t self, uint32_t src)
{
    (void)g;

    uint32_t v = rd32(src);
    wr32(self, v);

    uint32_t dst = self + 4u;
    uint32_t s = src + 4u;
    for (uint32_t i = 0u; i < 7u; ++i)
    {
        v = rd32(s);
        wr32(dst, v);
        dst += 4u;
        s += 4u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e28b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);

    g->eax = src;
    cow_fn_101e28b0(g, self, src);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
