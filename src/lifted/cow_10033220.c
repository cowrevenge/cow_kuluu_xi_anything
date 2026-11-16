/* f_0x10033220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10033220(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    d1 = (double)rdf32(sp0 + 0xcu);
    wr32(sp0 - 0x24u, in_esi);
    if (d1 != (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        ecx = rd32(sp0 + 8u);
        goto L_1003325e;
    }
    ecx = rd32(sp0 + 8u);
    wr32(arg1, rd32(ecx));
    t2 = rd32(ecx + 4u);
    wr32(arg1 + 4u, t2);
    t3 = rd32(ecx + 8u);
    wr32(arg1 + 8u, t3);
    t4 = rd32(ecx + 0xcu);
    wr32(arg1 + 0xcu, t4);
    return;
L_1003325e: ;
    d5 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(self + 0xcu) * (double)rdf32(ecx + 0xcu)) + fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(self + 8u))) + fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(self + 4u))) + fr(g, (double)rdf32(ecx) * (double)rdf32(self)));
    if (!(d5 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        wr32(sp0 - 0x20u, rd32(ecx));
        t10 = rd32(ecx + 4u);
        wr32(sp0 - 0x1cu, t10);
        t11 = rd32(ecx + 8u);
        wr32(sp0 - 0x18u, t11);
        t12 = rd32(ecx + 0xcu);
        wr32(sp0 - 0x14u, t12);
        eax = t12;
        edx = t11;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d6 = (double)(float)-(double)rdf32(ecx);
        wrf32(sp0 - 0x20u, (float)d6);
        d7 = (double)(float)-(double)rdf32(ecx + 4u);
        wrf32(sp0 - 0x1cu, (float)d7);
        d8 = (double)(float)-(double)rdf32(ecx + 8u);
        wrf32(sp0 - 0x18u, (float)d8);
        d9 = (double)(float)-(double)rdf32(ecx + 0xcu);
        wrf32(sp0 - 0x14u, (float)d9);
        edx = in_edx;
    }
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 8u, (float)d13);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x10u, 0);
    d14 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(self)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 0x10u, (float)d14);
    d15 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(self + 4u)) + fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 0xcu, (float)d15);
    d16 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(self + 8u)) + fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 8u, (float)d16);
    d17 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(sp0 + 0xcu));
    d18 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(self + 0xcu));
    wr32(arg1, cow_f2bits(d14));
    wr32(arg1 + 4u, cow_f2bits(d15));
    d19 = (double)(float)fr(g, d18 + d17);
    wrf32(sp0 - 4u, (float)d19);
    wr32(arg1 + 8u, cow_f2bits(d16));
    wr32(arg1 + 0xcu, cow_f2bits(d19));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10033220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
