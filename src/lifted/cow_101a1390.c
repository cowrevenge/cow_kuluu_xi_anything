/* f_0x101a1390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a1390(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x90u), in_edx, 1, 0xffffffffu);
    t1 = g->edx;
    if ((int32_t)rd32(self + 0x84u) <= 0)
    {
        edx = t1;
        goto L_101a13e1;
    }
    ecx = rd32(self + 0x84u);
    edx = t1;
    t2 = rd32(self + 0x88u) + 1u;
    t3 = rd32(self + rd32(self + 0x88u) * 4u + 4u);
    t4 = rd32(self + 0x88u);
    wr32(self + 0x88u, t2);
    if (t4 + 1u != 0x20u)
    {
        edi = t3;
    }
    else
    {
        edi = t3;
        wr32(self + 0x88u, 0u);
    }
    wr32(self + 0x84u, ecx - 1u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x90u), edx, 0);
    return edi;
L_101a13e1: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x90u), edx, 0);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
