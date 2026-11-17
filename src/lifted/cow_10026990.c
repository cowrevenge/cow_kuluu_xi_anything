/* f_0x10026990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10026990(Guest* g)
{
    double d12;
    double d13;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(sp0 + 0x10u) == 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 0x10u);
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 0x10u);
        t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t1) + 0xc8u), rd32(t1), 2, t1, 0x1bu);
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 4, t2, 0xabu, 1u, 1u);
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd32(eax + 0x40u) != 0u) goto L_100269e7;
        if (rd32(eax + 0x44u) == 0u) goto L_10026aa8;
L_100269e7: ;
        if (rd32(eax + 0x40u) != 0u)
        {
            ecx = rd32(eax + 0x40u);
        }
        else
        {
            ecx = rd32(eax + 0x44u);
        }
        t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t3) + 0xf4u), ecx, 3, t3, 0u, ecx);
        t4 = rd32(sp0 + 0xcu);
        wr32(self + 0x1cu, t4);
        wr32(self + 0x38u, t4);
        wr32(self + 0x54u, t4);
        wr32(self + 0x70u, t4);
        t5 = rd16(rd32(self + 8u) + 0x24u);
        t6 = rd16(rd32(self + 8u) + 0x26u);
        wr32(sp0 + 0x10u, t5);
        t7 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t6);
        wrf32(sp0 + 0xcu, (float)(double)(int32_t)t7);
        d8 = fr(g, (double)(int32_t)arg2 - (double)rdf32(COW_IMG(0x10329a08u)));
        d9 = fr(g, (double)(int32_t)arg1 - (double)rdf32(COW_IMG(0x10329a08u)));
        t10 = rd32(sp0 + 0x10u);
        wrf32(sp0 + 0x10u, (float)d8);
        t11 = rd32(sp0 + 0x10u);
        wrf32(self + 0xcu, (float)d9);
        d12 = fr(g, (double)rdf32(sp0 + 0xcu) + d9);
        wr32(self + 0x10u, t11);
        wr32(self + 0x2cu, t11);
        wrf32(self + 0x28u, (float)d12);
        wrf32(self + 0x44u, (float)d9);
        wrf32(self + 0x60u, (float)d12);
        d13 = fr(g, (double)(int32_t)t10 + (double)rdf32(sp0 + 0x10u));
        wrf32(self + 0x48u, (float)d13);
        wrf32(self + 0x64u, (float)d13);
        t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t14;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t15 = rd32(COW_IMG(0x1045666cu));
        t16 = cow_thiscall(g, rd32(rd32(t14) + 0x130u), rd32(t14), 2, t14, 0x144u);
        t17 = g->edx;
        g->ebx = ebx;
        t18 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self + 0xcu, 0x1cu);
        eax = t18;
    }
L_10026aa8: ;
    if ((uint8_t)ebx != 0u)
    {
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t19;
        g->esp = sp0;
        t20 = cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, 0x1bu, 0u);
        eax = t20;
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10026990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10026990(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
