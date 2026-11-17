/* f_0x10017310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10017310(Guest* g)
{
    double d13;
    double d17;
    double d18;
    double d20;
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    wr32(COW_IMG(0x10350758u), t1);
    wr32(COW_IMG(0x1035076cu), t1);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t2) + 0xfcu), rd32(t2), 4, t2, 0u, 1u, 2u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 2u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 4u, 2u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 5u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 1u, 1u, 1u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 1u, 4u, 1u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x1bu, 1u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x13u, 5u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x14u, 6u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0xeu, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 7u, 0u);
    wr32(sp0 + 8u, 0u);
    eax = 0u;
L_10017427: ;
    d13 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329ea0u)));
    wrf32(COW_IMG(0x10350748u), (float)d13);
    t14 = rd16(arg1 + eax * 2u);
    wr32(sp0 + 8u, t14);
    t15 = rd32(COW_IMG(0x1045666cu));
    t16 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, eax + 1u);
    d17 = fr(g, (double)rdf32(COW_IMG(0x10329e98u)) - fr(g, fr(g, (double)(int32_t)t16 * (double)rdf32(COW_IMG(0x10329e9cu))) * (double)rdf32(COW_IMG(0x10329e98u))));
    wrf32(COW_IMG(0x1035074cu), (float)d17);
    d18 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329ea0u)));
    wrf32(COW_IMG(0x1035075cu), (float)d18);
    t19 = rd16(arg1 + eax * 2u + 2u);
    wr32(sp0 + 8u, t19);
    d20 = fr(g, (double)rdf32(COW_IMG(0x10329e98u)) - fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329e9cu))) * (double)rdf32(COW_IMG(0x10329e98u))));
    wrf32(COW_IMG(0x10350760u), (float)d20);
    t21 = rd32(t15 + 0xcu);
    g->eax = t21;
    g->edx = t15;
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, rd32(rd32(t21) + 0x130u), rd32(t21), 2, t21, 0x44u);
    t23 = g->edx;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 2u, COW_IMG(0x10350748u), 0x14u);
    wr32(sp0 + 8u, eax + 1u);
    if ((int32_t)(eax + 1u) < 255)
    {
        eax = eax + 1u;
        goto L_10017427;
    }
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 3, t24, 0x1bu, 0u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t25) + 0xc8u), rd32(t25), 3, t25, 0xeu, 1u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t26) + 0xc8u), rd32(t26), 3, t26, 7u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10017310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10017310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
