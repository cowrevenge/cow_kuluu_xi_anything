/* f_0x1026a300 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the first four dwords at `self` differ from the four dwords at 0x1034a118, else 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1026a300(Guest* g, uint32_t self)
{
    uint32_t src = self;
    uint32_t dst = COW_IMG(0x1034a118u);
    uint32_t count = 4u;
    uint32_t zf = 1u;
    const uint32_t step = g->df ? 0xFFFFFFFCu : 4u;

    while (count != 0u)
    {
        uint32_t a = rd32(src);
        uint32_t b = rd32(dst);

        zf = (a == b) ? 1u : 0u;

        src += step;
        dst += step;
        --count;

        if (!zf)
        {
            break;
        }
    }

    g->ecx = count;
    g->edx = g->edx;

    return zf ? 0u : 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1026a300(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
