/* f_0x10170b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10170b30(Guest* g)
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
    double d18;
    double d19;
    double d2;
    double d3;
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t t5;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 0x10u) + 8u) - (double)rdf32(rd32(sp0 + 0xcu) + 8u));
    d2 = (double)(float)fr(g, (double)rdf32(arg2) - (double)rdf32(rd32(sp0 + 0xcu)));
    d3 = (double)(float)fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(rd32(sp0 + 0xcu) + 4u));
    d4 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(rd32(sp0 + 0xcu) + 8u));
    t5 = rd32(sp0 + 0xcu);
    d6 = fr(g, (double)rdf32(rd32(sp0 + 0x10u) + 0x1cu) - (double)rdf32(rd32(sp0 + 0xcu) + 0x1cu));
    d7 = fr(g, (double)rdf32(rd32(sp0 + 0x10u) + 4u) - (double)rdf32(rd32(sp0 + 0xcu) + 4u));
    d8 = fr(g, (double)rdf32(rd32(sp0 + 0x10u)) - (double)rdf32(rd32(sp0 + 0xcu)));
    wrf32(sp0 + 0xcu, (float)d6);
    d9 = fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(t5 + 0x1cu));
    wrf32(sp0 + 0x10u, (float)d9);
    d10 = (double)(float)fr(g, d8 * (double)rdf32(sp0 + 0x10u));
    d11 = (double)(float)fr(g, d4 * (double)rdf32(sp0 + 0xcu));
    d12 = (double)(float)fr(g, d10 - fr(g, d2 * (double)rdf32(sp0 + 0xcu)));
    d13 = (double)(float)fr(g, fr(g, d7 * (double)rdf32(sp0 + 0x10u)) - fr(g, d3 * (double)rdf32(sp0 + 0xcu)));
    d14 = (double)(float)fr(g, fr(g, d1 * (double)rdf32(sp0 + 0x10u)) - d11);
    d15 = fr(g, fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(sp0 + 0x10u)) - d11) * d14) + fr(g, d13 * d13)) + fr(g, d12 * d12));
    if (d15 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d15;
        x2 = (double)rdf32(COW_IMG(0x1032961cu));
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        loc_10_f = d14;
        loc_18_f = d12;
        loc_14_f = d13;
        x0 = d15;
        d16 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x0)));
        wrf32(sp0 + 0x10u, (float)d16);
        x2 = fr(g, (double)rdf32(sp0 + 0x10u) * loc_10_f);
        x1 = fr(g, (double)rdf32(sp0 + 0x10u) * loc_14_f);
        x0 = fr(g, (double)rdf32(sp0 + 0x10u) * loc_18_f);
    }
    d17 = fr(g, fr(g, x1 * (double)rdf32(arg2 + 0x14u)) - fr(g, x2 * (double)rdf32(arg2 + 0x10u)));
    wrf32(arg1 + 0x24u, (float)d17);
    d18 = fr(g, fr(g, x2 * (double)rdf32(arg2 + 0xcu)) - fr(g, x0 * (double)rdf32(arg2 + 0x14u)));
    wrf32(arg1 + 0x28u, (float)d18);
    d19 = fr(g, fr(g, x0 * (double)rdf32(arg2 + 0x10u)) - fr(g, x1 * (double)rdf32(arg2 + 0xcu)));
    wrf32(arg1 + 0x2cu, (float)d19);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10170b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10170b30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
