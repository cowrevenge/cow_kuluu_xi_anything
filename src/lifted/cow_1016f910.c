/* f_0x1016f910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1016f910(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    double loc_1c_f;
    double loc_20_f;
    double loc_24_f;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 0xcu)) - (double)rdf32(rd32(sp0 + 4u)));
    d2 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) - (double)rdf32(rd32(sp0 + 4u) + 4u));
    d3 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u));
    d4 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u));
    d5 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(rd32(sp0 + 4u) + 4u));
    d6 = fr(g, (double)rdf32(arg2) - (double)rdf32(rd32(sp0 + 4u)));
    t7 = rd32(sp0 + 4u);
    d8 = fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u)) * d4) + fr(g, d5 * d5)) + fr(g, d6 * d6))));
    wrf32(sp0 + 4u, (float)d8);
    d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 0xcu, (float)d9);
    d10 = (double)(float)fr(g, d9 * d6);
    d11 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * d4) * d3) + fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * d5) * d2)) + fr(g, d10 * d1));
    wrf32(sp0 + 0xcu, (float)d11);
    if (!(d11 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t7 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_24_f = d1;
        loc_20_f = d2;
        loc_1c_f = d3;
        goto L_1016f9ba;
    }
    return 0u;
L_1016f9ba: ;
    d12 = (double)rdf32(sp0 + 0xcu);
    d13 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d12, d13, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d12, d13, 0u) & 0x4100u;
        goto L_1016f9d3;
    }
    return 0u;
L_1016f9d3: ;
    d14 = (double)rdf32(sp0 + 0xcu);
    d15 = fr(g, (double)rdf32(self + 0x3412cu) - fr(g, fr(g, fr(g, fr(g, loc_1c_f * loc_1c_f) + fr(g, loc_20_f * loc_20_f)) + fr(g, loc_24_f * loc_24_f)) - fr(g, d14 * d14)));
    if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_1016fa14;
    return 0u;
L_1016fa14: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016f910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016f910(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
