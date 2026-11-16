/* f_0x10026ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10026ad0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d16;
    double d23;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd32(eax + 0x40u) != 0u) goto L_10026af3;
        if (rd32(eax + 0x44u) == 0u) goto L_10026c67;
L_10026af3: ;
        if (rd32(eax + 0x40u) != 0u)
        {
            ecx = rd32(eax + 0x40u);
        }
        else
        {
            ecx = rd32(eax + 0x44u);
        }
        t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t1;
        g->edx = rd32(t1);
        t2 = rd32(t1);
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, rd32(t2 + 0xf4u), ecx, 3, t1, 0u, ecx);
        t4 = g->edx;
        d5 = (double)rdf32(sp0 + 0xcu);
        if (d5 != (double)rdf32(COW_IMG(0x1032961cu)))
        {
            edx = t4;
            t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 0x11u, 2u);
            t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 0x10u, 2u);
            t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x18u, 0x60u);
        }
        t9 = rd16(rd32(self + 8u) + 0x24u);
        t10 = rd16(rd32(self + 8u) + 0x26u);
        d11 = (double)(float)fr(g, (double)(int32_t)t9 * (double)rdf32(sp0 + 0xcu));
        d12 = fr(g, (double)(int32_t)arg2 - (double)rdf32(COW_IMG(0x10329a08u)));
        d13 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
        d14 = fr(g, (double)(int32_t)t10 * (double)rdf32(sp0 + 0xcu));
        wrf32(sp0 + 4u, (float)d12);
        t15 = rd32(sp0 + 4u);
        wrf32(self + 0xcu, (float)d13);
        wr32(self + 0x10u, t15);
        wr32(self + 0x2cu, t15);
        wr32(self + 0x1cu, arg4);
        wr32(self + 0x38u, arg4);
        wrf32(self + 0x28u, (float)fr(g, d11 + d13));
        wrf32(self + 0x44u, (float)d13);
        wr32(self + 0x54u, arg4);
        wr32(self + 0x70u, arg4);
        wrf32(self + 0x60u, (float)fr(g, d11 + d13));
        d16 = fr(g, d14 + (double)rdf32(sp0 + 4u));
        wrf32(self + 0x48u, (float)d16);
        wrf32(self + 0x64u, (float)d16);
        t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t17;
        g->edx = rd32(t17);
        t18 = rd32(t17);
        g->esp = sp0 - 0x10u;
        t19 = cow_thiscall(g, rd32(t18 + 0x130u), rd32(COW_IMG(0x1045666cu)), 2, t17, 0x144u);
        t20 = g->edx;
        g->edx = t20;
        t21 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self + 0xcu, 0x1cu);
        t22 = g->edx;
        d23 = (double)rdf32(sp0 + 0xcu);
        if (d23 == (double)rdf32(COW_IMG(0x1032961cu)))
        {
            eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        }
        else
        {
            edx = t22;
            t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 0x11u, 2u);
            t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 0x10u, 1u);
            t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->eax = t26;
            t27 = cow_thiscall(g, rd32(rd32(t26) + 0xc8u), rd32(t26), 3, t26, 0x18u, 0u);
            eax = t27;
        }
    }
L_10026c67: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10026ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10026ad0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
