/* f_0x101ac3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ac3d0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(self + 0x6c0u) <= 0) goto L_101ac4ca;
    if (rd8(self + 0xc78u) != 1u)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(self + 0xa50u) <= (int32_t)rd32(self + 0xa54u))
        {
            t2 = rd32(self + 0x888u);
            edx = in_edx;
            loc_c = t2;
            loc_10 = self + 0x6c4u;
        }
        else
        {
            t1 = rd32(self + 0x888u);
            edx = self + 0x88cu;
            loc_c = t1;
            loc_10 = self + 0x88cu;
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101a1580u), self + 0xa8u, 2, loc_10, loc_c);
        t3 = g->edx;
        edx = t3;
    }
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101a1690u), self + 0xa8u, 0);
    t4 = rd32(self + 0xa54u) + 1u;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101a1500u), self + 0xa8u, 2, self + 0x6c4u, t4);
    t6 = g->edx;
    wr32(self + 0x888u, t5);
    wr8(self + t5 + 0x6c4u, 0u);
    t7 = rd32(self + 0x888u);
    g->edx = t6;
    t8 = cow_call_regs(g, COW_IMG(0x101ac990u), t7, self, g->edx, 0, 6, self + 0x88cu, 0x1c3u, self + 0x6c4u, t7, 0u, 0u);
    t9 = g->edx;
    t10 = rd32(self + 0xa54u);
    wr32(self + 0xa50u, t8);
    if ((int32_t)t8 > (int32_t)t10)
    {
        ecx = t10;
        edx = t9;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall_cdecl(g, COW_IMG(0x1018fdf0u), ecx, 3, self + 0x88cu, self + 0x6c4u, ecx);
        wr32(self + 0x888u, t11);
        wr32(self + 0xa50u, t11);
        wr8(self + t11 + 0x6c4u, 0u);
        wr8(self + rd32(self + 0x888u) + 0x88cu, 0u);
    }
    t12 = rd32(self + 0x888u);
    wr32(self + 0xa58u, t12);
    wr8(self + 0xc78u, 0u);
    return 1u;
L_101ac4ca: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ac3d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
