/* f_0x1016fa20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1016fa20(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d2;
    double d20;
    double d21;
    double d3;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t18;
    uint32_t t19;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    d1 = (double)(float)fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(arg4)) - fr(g, (double)rdf32(rd32(sp0 + 0xcu)) * (double)rdf32(arg4 + 4u)));
    wrf32(sp0 - 0x50u, (float)d1);
    d2 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu)) * (double)rdf32(arg4 + 8u)) - fr(g, (double)rdf32(arg4) * (double)rdf32(rd32(sp0 + 0xcu) + 8u)));
    d3 = fr(g, fr(g, (double)rdf32(arg4 + 4u) * (double)rdf32(rd32(sp0 + 0xcu) + 8u)) - fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(arg4 + 8u)));
    t4 = rd32(sp0 + 0xcu);
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(arg4)) - fr(g, (double)rdf32(rd32(sp0 + 0xcu)) * (double)rdf32(arg4 + 4u))) * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)))));
    d6 = fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(arg4)) - fr(g, (double)rdf32(rd32(sp0 + 0xcu)) * (double)rdf32(arg4 + 4u))) * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3))));
    wrf32(sp0 + 0xcu, (float)d5);
    d7 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) * d3);
    wrf32(sp0 - 0x4cu, (float)d7);
    d8 = (double)rdf32(t4 + 4u);
    d9 = (double)rdf32(t4 + 8u);
    d10 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(t4) * (double)rdf32(t4)) + fr(g, d8 * d8)) + fr(g, d9 * d9)))));
    d11 = (double)(float)fr(g, d10 * (double)rdf32(t4));
    wrf32(sp0 - 0x58u, (float)d11);
    wr32(sp0 - 0x20u, cow_f2bits(d11));
    d12 = (double)(float)fr(g, d10 * (double)rdf32(t4 + 4u));
    wrf32(sp0 - 0x54u, (float)d12);
    d13 = fr(g, (double)rdf32(sp0 + 0xcu) * d2);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d13);
    d14 = fr(g, (double)rdf32(sp0 + 0xcu) * d1);
    wr32(sp0 - 0x40u, cow_f2bits(d7));
    wrf32(sp0 - 0x38u, (float)(double)(float)d14);
    wr32(sp0 - 0x1cu, cow_f2bits(d12));
    d15 = (double)(float)fr(g, d10 * (double)rdf32(t4 + 8u));
    wrf32(sp0 - 0x18u, (float)d15);
    d16 = fr(g, d10 * (double)rdf32(t4 + 8u));
    d17 = (double)(float)fr(g, fr(g, d12 * d14) - fr(g, d16 * d13));
    wrf32(sp0 - 0x30u, (float)d17);
    wr32(sp0 - 0x10u, rd32(arg2));
    t18 = rd32(arg2 + 4u);
    wr32(sp0 - 0xcu, t18);
    t19 = rd32(arg2 + 8u);
    wr32(sp0 - 8u, t19);
    d20 = (double)(float)fr(g, fr(g, d16 * d7) - fr(g, d11 * d14));
    wrf32(sp0 - 0x2cu, (float)d20);
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, arg1);
    d21 = (double)(float)fr(g, fr(g, d11 * d13) - fr(g, d12 * d7));
    wrf32(sp0 - 0x28u, (float)d21);
    g->esp = sp0 - 0x58u;
    cow_stdcall(g, COW_IMG(0x1016fb80u), 2, arg1, sp0 - 0x40u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016fa20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1016fa20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
