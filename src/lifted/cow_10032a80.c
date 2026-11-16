/* f_0x10032a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10032a80(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1032a840u)));
    d2 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1032a840u)));
    d3 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1032a840u)));
    wrf32(sp0 + 0xcu, (float)d1);
    wrf32(sp0 + 4u, (float)fr(g, cos(d3)));
    d4 = (double)(float)fr(g, cos(d2));
    d5 = (double)(float)fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 + 8u, (float)fr(g, sin(d3)));
    d6 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    d7 = fr(g, d5 * d4);
    d8 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * fr(g, d6 * fr(g, sin(d2)))) + fr(g, d7 * (double)rdf32(sp0 + 4u)));
    wrf32(self + 0xcu, (float)d8);
    d9 = fr(g, fr(g, d7 * (double)rdf32(sp0 + 8u)) - fr(g, fr(g, d6 * fr(g, sin(d2))) * (double)rdf32(sp0 + 4u)));
    wrf32(self, (float)d9);
    d10 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 8u) * d6) * d4) + fr(g, fr(g, fr(g, sin(d2)) * d5) * (double)rdf32(sp0 + 4u)));
    wrf32(self + 4u, (float)d10);
    d11 = fr(g, fr(g, fr(g, d6 * d4) * (double)rdf32(sp0 + 4u)) - fr(g, fr(g, fr(g, sin(d2)) * (double)rdf32(sp0 + 8u)) * d5));
    wrf32(self + 8u, (float)d11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10032a80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
