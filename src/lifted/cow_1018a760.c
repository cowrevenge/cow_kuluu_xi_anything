/* f_0x1018a760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies 0x2b dwords from the stack argument to the object in ecx and returns that object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018a760(Guest* g, uint32_t self, uint32_t src)
{
    uint32_t dst = self;
    uint32_t step = g->df ? (uint32_t)-4 : 4u;

    for (uint32_t n = 0x2bu; n != 0u; --n)
    {
        wr32(dst, rd32(src));
        dst += step;
        src += step;
    }

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018a760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1018a760(g, self, src);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
