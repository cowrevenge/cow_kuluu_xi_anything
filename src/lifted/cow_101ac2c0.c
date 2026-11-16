/* f_0x101ac2c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ac2c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    if ((int32_t)rd32(self + 0x6c0u) >= (int32_t)rd32(self + 0x6bcu))
    {
        eax = rd32(self + 0x6c0u);
        goto L_101ac3be;
    }
    if (rd8(self + 0xc78u) != 1u)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(self + 0xa50u) <= (int32_t)rd32(self + 0xa54u))
        {
            t2 = rd32(self + 0x888u);
            edx = self + 0x6c4u;
            loc_c = t2;
            loc_10 = self + 0x6c4u;
        }
        else
        {
            t1 = rd32(self + 0x888u);
            edx = t1;
            loc_c = t1;
            loc_10 = self + 0x88cu;
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101a1580u), self + 0xa8u, 2, loc_10, loc_c);
        t3 = g->edx;
        edx = t3;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101a1660u), self + 0xa8u, 0);
    t4 = g->edx;
    t5 = rd32(self + 0xa54u) + 1u;
    g->edx = t4;
    t6 = cow_thiscall(g, COW_IMG(0x101a1500u), self + 0xa8u, 2, self + 0x6c4u, t5);
    t7 = g->edx;
    wr32(self + 0x888u, t6);
    wr8(self + t6 + 0x6c4u, 0u);
    t8 = rd32(self + 0x888u);
    g->edx = t7;
    t9 = cow_call_regs(g, COW_IMG(0x101ac990u), t6, self, g->edx, 0, 6, self + 0x88cu, 0x1c3u, self + 0x6c4u, t8, 0u, 0u);
    t10 = g->edx;
    t11 = rd32(self + 0xa54u);
    wr32(self + 0xa50u, t9);
    if ((int32_t)t9 > (int32_t)t11)
    {
        ecx = t11;
        edx = t10;
        g->esp = sp0 - 0x10u;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x1018fdf0u), ecx, 3, self + 0x88cu, self + 0x6c4u, ecx);
        wr32(self + 0x888u, t12);
        wr32(self + 0xa50u, t12);
        wr8(self + t12 + 0x6c4u, 0u);
        wr8(self + rd32(self + 0x888u) + 0x88cu, 0u);
    }
    t13 = rd32(self + 0x888u);
    wr32(self + 0xa58u, t13);
    wr8(self + 0xc78u, 0u);
    return 1u;
L_101ac3be: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ac2c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
