/* f_0x10026c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10026c70(Guest* g)
{
    double d12;
    double d15;
    double d18;
    double d24;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd32(eax + 0x40u) != 0u) goto L_10026c90;
        if (rd32(eax + 0x44u) == 0u) goto L_10026dd5;
L_10026c90: ;
        if (rd32(eax + 0x40u) != 0u)
        {
            ecx = rd32(eax + 0x40u);
        }
        else
        {
            ecx = rd32(eax + 0x44u);
        }
        t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(t1) + 0xf4u), ecx, 3, t1, 0u, ecx);
        t2 = rd32(sp0 + 0x24u);
        t3 = rd32(sp0 + 4u);
        wr32(self + 0x1cu, t2);
        wr32(self + 0x38u, t2);
        wrf32(sp0 + 0x24u, (float)(double)(int32_t)t3);
        d4 = fr(g, (double)(int32_t)t3 - (double)rdf32(COW_IMG(0x10329a08u)));
        wr32(self + 0x54u, t2);
        wr32(self + 0x70u, t2);
        wrf32(sp0 + 4u, (float)(double)(int32_t)arg2);
        d5 = fr(g, fr(g, (double)(int32_t)arg4 + (double)rdf32(sp0 + 4u)) - (double)rdf32(COW_IMG(0x10329a08u)));
        d6 = fr(g, fr(g, (double)(int32_t)arg3 + (double)rdf32(sp0 + 0x24u)) - (double)rdf32(COW_IMG(0x10329a08u)));
        d7 = fr(g, (double)(int32_t)arg2 - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 0x24u, (float)d5);
        t8 = rd32(sp0 + 0x24u);
        wrf32(self + 0xcu, (float)d4);
        wr32(self + 0x48u, t8);
        wrf32(self + 0x28u, (float)d6);
        wrf32(self + 0x44u, (float)d4);
        t9 = rd32(self + 8u);
        wr32(self + 0x64u, t8);
        wrf32(self + 0x60u, (float)d6);
        wrf32(self + 0x10u, (float)d7);
        wrf32(self + 0x2cu, (float)d7);
        t10 = rd16(t9 + 0x24u);
        t11 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x24u, t10);
        d12 = fr(g, (double)(int32_t)t11 / (double)(int32_t)rd32(sp0 + 0x24u));
        wrf32(self + 0x20u, (float)d12);
        t13 = rd16(t9 + 0x26u);
        wr32(sp0 + 0x24u, t13);
        t14 = arg7 + rd32(sp0 + 0x14u);
        d15 = fr(g, (double)(int32_t)arg6 / (double)(int32_t)rd32(sp0 + 0x24u));
        wr32(sp0 + 0x14u, t14);
        wrf32(self + 0x24u, (float)d15);
        t16 = rd16(t9 + 0x24u);
        t17 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, t16);
        d18 = fr(g, (double)(int32_t)t17 / (double)(int32_t)rd32(sp0 + 0x14u));
        wr32(sp0 + 0x14u, arg6 + arg8);
        wrf32(self + 0x74u, (float)d18);
        t19 = rd16(t9 + 0x26u);
        t20 = rd32(self + 0x74u);
        t21 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, t19);
        t22 = rd32(self + 0x24u);
        t23 = rd32(self + 0x20u);
        d24 = fr(g, (double)(int32_t)t21 / (double)(int32_t)rd32(sp0 + 0x14u));
        wr32(self + 0x3cu, t20);
        wr32(self + 0x40u, t22);
        wr32(self + 0x58u, t23);
        wrf32(self + 0x78u, (float)d24);
        t25 = rd32(self + 0x78u);
        wr32(self + 0x5cu, t25);
        t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t26;
        g->edx = t25;
        t27 = cow_thiscall(g, rd32(rd32(t26) + 0x130u), rd32(t26), 2, t26, 0x144u);
        t28 = g->edx;
        t29 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self + 0xcu, 0x1cu);
        eax = t29;
    }
L_10026dd5: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10026c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10026c70(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
