/* f_0x101a1300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a1300(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x90u), in_edx, 1, 0xffffffffu);
    t1 = g->edx;
    if ((int32_t)(rd32(self + 0x84u) + 1u) >= 32)
    {
        edx = t1;
    }
    else
    {
        wr32(self + rd32(self + 0x8cu) * 4u + 4u, arg1);
        t2 = rd32(self + 0x8cu) + 1u;
        wr32(self + 0x8cu, t2);
        if (t2 == 0x20u)
        {
            wr32(self + 0x8cu, 0u);
        }
        wr32(self + 0x84u, rd32(self + 0x84u) + 1u);
        edx = arg1;
    }
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x90u), edx, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a1300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
