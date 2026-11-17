/* f_0x1016ddf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1016ddf0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d16;
    double d17;
    double d19;
    double d20;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t15;
    uint32_t t18;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0x1cu);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t1);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(t1) + 0xc8u), rd32(t1), 3, t1, 0x1cu, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0x89u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t2);
    cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x89u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0x1bu);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t3);
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 3, t3, 0x1bu, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t4);
    cow_thiscall(g, rd32(rd32(t4) + 0xf4u), rd32(t4), 3, t4, 0u, 0u);
    wr32(sp0 - 0x44u, 0x42u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x48u, t5);
    cow_thiscall(g, rd32(rd32(t5) + 0x130u), rd32(t5), 2, t5, 0x42u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x44u, sp0 - 0x40u);
    wr32(sp0 - 0x48u, 0x100u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t6);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t6, 0x100u, sp0 - 0x40u);
    wr32(COW_IMG(0x10621988u), rd32(arg1));
    d7 = (double)rdf32(arg1 + 4u);
    wrf32(COW_IMG(0x1062198cu), (float)d7);
    d8 = (double)rdf32(arg1 + 8u);
    wrf32(COW_IMG(0x10621990u), (float)d8);
    wr32(COW_IMG(0x106219d8u), rd32(arg1));
    d9 = (double)rdf32(arg1 + 4u);
    wrf32(COW_IMG(0x106219dcu), (float)d9);
    d10 = (double)rdf32(arg1 + 8u);
    wrf32(COW_IMG(0x106219e0u), (float)d10);
    wr32(COW_IMG(0x10621998u), rd32(arg2));
    d11 = (double)rdf32(arg2 + 4u);
    wrf32(COW_IMG(0x1062199cu), (float)d11);
    d12 = (double)rdf32(arg2 + 8u);
    wrf32(COW_IMG(0x106219a0u), (float)d12);
    wr32(sp0 - 0x44u, 0x10u);
    wr32(COW_IMG(0x106219a8u), rd32(arg2));
    wr32(sp0 - 0x48u, COW_IMG(0x10621988u));
    d13 = (double)rdf32(arg2 + 4u);
    wrf32(COW_IMG(0x106219acu), (float)d13);
    wr32(sp0 - 0x4cu, 3u);
    d14 = (double)rdf32(arg2 + 8u);
    wrf32(COW_IMG(0x106219b0u), (float)d14);
    wr32(sp0 - 0x50u, 2u);
    wr32(COW_IMG(0x106219b8u), rd32(arg3));
    t15 = rd32(COW_IMG(0x1045666cu));
    d16 = (double)rdf32(arg3 + 4u);
    wrf32(COW_IMG(0x106219bcu), (float)d16);
    d17 = (double)rdf32(arg3 + 8u);
    wrf32(COW_IMG(0x106219c0u), (float)d17);
    t18 = rd32(arg3);
    wr32(COW_IMG(0x106219c8u), t18);
    d19 = (double)rdf32(arg3 + 4u);
    wrf32(COW_IMG(0x106219ccu), (float)d19);
    d20 = (double)rdf32(arg3 + 8u);
    wrf32(COW_IMG(0x106219d0u), (float)d20);
    g->eax = arg3;
    g->edx = t18;
    t21 = cow_thiscall(g, COW_IMG(0x1000cd00u), t15, 4, 2u, 3u, COW_IMG(0x10621988u), 0x10u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016ddf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016ddf0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
