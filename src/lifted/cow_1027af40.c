/* f_0x1027af40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027af40(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    double x0;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(arg1 + 4u);
    d2 = (double)rdf32(arg1 + 8u);
    d3 = (double)rdf32(arg1 + 0xcu);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1)) + fr(g, d1 * d1)) + fr(g, d2 * d2)) + fr(g, d3 * d3));
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        x0 = d4;
        goto L_1027afa1;
    }
    x0 = d4;
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x0)));
    d6 = fr(g, d5 * (double)rdf32(arg1));
    wrf32(arg1, (float)d6);
    d7 = fr(g, d5 * (double)rdf32(arg1 + 4u));
    wrf32(arg1 + 4u, (float)d7);
    d8 = fr(g, d5 * (double)rdf32(arg1 + 8u));
    wrf32(arg1 + 8u, (float)d8);
    d9 = fr(g, d5 * (double)rdf32(arg1 + 0xcu));
    wrf32(arg1 + 0xcu, (float)d9);
    return;
L_1027afa1: ;
    d10 = fr(g, sqrt(rdf64(COW_IMG(0x10340b30u))));
    wr32(arg1 + 0xcu, 0u);
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d10);
    wrf32(arg1, (float)d11);
    wrf32(arg1 + 4u, (float)d11);
    wrf32(arg1 + 8u, (float)d11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027af40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027af40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
