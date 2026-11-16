/* f_0x1016cb60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1016cb60(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    double loc_14_f;
    double loc_18_f;
    double x0;
    double x1;
    double x2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)(float)fr(g, (double)rdf32(rd32(arg1 + 0x38u)) - (double)rdf32(rd32(arg1 + 0x30u)));
    d2 = (double)(float)fr(g, (double)rdf32(rd32(arg1 + 0x38u) + 4u) - (double)rdf32(rd32(arg1 + 0x30u) + 4u));
    d3 = fr(g, (double)rdf32(rd32(arg1 + 0x38u) + 8u) - (double)rdf32(rd32(arg1 + 0x30u) + 8u));
    d4 = (double)(float)fr(g, fr(g, d3 * fr(g, (double)rdf32(rd32(arg1 + 0x34u) + 4u) - (double)rdf32(rd32(arg1 + 0x30u) + 4u))) - fr(g, d2 * fr(g, (double)rdf32(rd32(arg1 + 0x34u) + 8u) - (double)rdf32(rd32(arg1 + 0x30u) + 8u))));
    d5 = (double)(float)fr(g, fr(g, d1 * fr(g, (double)rdf32(rd32(arg1 + 0x34u) + 8u) - (double)rdf32(rd32(arg1 + 0x30u) + 8u))) - fr(g, d3 * fr(g, (double)rdf32(rd32(arg1 + 0x34u)) - (double)rdf32(rd32(arg1 + 0x30u)))));
    d6 = fr(g, fr(g, fr(g, (double)rdf32(rd32(arg1 + 0x34u)) - (double)rdf32(rd32(arg1 + 0x30u))) * d2) - fr(g, d1 * fr(g, (double)rdf32(rd32(arg1 + 0x34u) + 4u) - (double)rdf32(rd32(arg1 + 0x30u) + 4u))));
    d7 = fr(g, fr(g, fr(g, d6 * d6) + fr(g, d5 * d5)) + fr(g, d4 * d4));
    if (d7 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_18_f = d4;
        loc_14_f = d5;
        x1 = d7;
        x0 = d6;
        goto L_1016cbfb;
    }
    eax = (rd32(arg1 + 0x30u) & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    x1 = d7;
    x0 = d6;
    return eax & 0xffffff00u;
L_1016cbfb: ;
    if (arg2 == 0u)
    {
        x2 = fr(g, loc_18_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x1))));
        x1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x1)));
        goto L_1016cc2c;
    }
    x2 = fr(g, loc_18_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x1))));
    x1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x1)));
    wrf32(arg1 + 0x24u, (float)x2);
    wrf32(arg1 + 0x28u, (float)fr(g, loc_14_f * x1));
    wrf32(arg1 + 0x2cu, (float)fr(g, x1 * x0));
    return (arg2 & 0xffffff00u) | 1u;
L_1016cc2c: ;
    wrf32(arg1 + 0x24u, (float)-x2);
    wrf32(arg1 + 0x28u, (float)-fr(g, loc_14_f * x1));
    wrf32(arg1 + 0x2cu, (float)-fr(g, x1 * x0));
    return (arg2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016cb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016cb60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
