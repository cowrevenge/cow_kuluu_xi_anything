/* f_0x10283a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10283a30(Guest* g)
{
    double d13;
    double d17;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d25;
    double d26;
    double d4;
    double d5;
    double d9;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t24;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 36u);

    t1 = rd32(COW_IMG(0x1099d200u));
    d2 = (double)rdf32(sp0 + 0xcu);
    wrf32(t1 + 0x2b0u, (float)d2);
    t3 = rd32(COW_IMG(0x1099d200u));
    d4 = (double)rdf32(sp0 + 0x10u);
    wrf32(t3 + 0x2b4u, (float)d4);
    g->ecx = t3;
    g->edx = in_edx;
    d5 = (double)rdf32(sp0 + 4u);
    fpush(g, d5);
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x18u, t6);
    g->ecx = t7;
    g->edx = t8;
    d9 = (double)rdf32(sp0 + 8u);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x14u, t10);
    g->ecx = t11;
    g->edx = t12;
    d13 = (double)rdf32(sp0 + 0xcu);
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x10u, t14);
    d17 = (double)rdf32(sp0 + 0x10u);
    fpush(g, d17);
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t14, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0xcu, t18);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x1cu, sp0 - 0x18u);
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xa0u), sp0 - 0x18u, 2, rd32(COW_IMG(0x1066941cu)), sp0 - 0x18u);
    d19 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) / (double)rdf32(sp0 + 0xcu)) / (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2dcu));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu, (float)d19);
    d20 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x300u));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x2ecu, (float)d20);
    d21 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c4u) / (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x2c0u, (float)d21);
    d22 = (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c0u);
    d23 = fr(g, sqrt(fr(g, fr(g, d22 * d22) + (double)rdf32(COW_IMG(0x1032961cu)))));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x2c8u, (float)d23);
    t24 = rd32(COW_IMG(0x1099d200u));
    wr32(COW_IMG(0x109a2730u), 1u);
    d25 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329990u)) / (double)rdf32(t24 + 0x2b0u)) * (double)rdf32(t24 + 0x2e0u));
    wrf32(t24 + 0x30cu, (float)d25);
    d26 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329990u)) / (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2b4u)) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2e4u));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x310u, (float)d26);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10283a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10283a30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
