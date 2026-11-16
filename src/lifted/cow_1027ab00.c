/* f_0x1027ab00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027ab00(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    d2 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    d3 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 8u, (float)fr(g, cos(d2)));
    wrf32(sp0 + 0xcu, (float)fr(g, cos(d3)));
    wrf32(sp0 + 0x10u, (float)fr(g, cos(d1)));
    d4 = (double)(float)fr(g, sin(d2));
    d5 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * fr(g, sin(d1))) * (double)rdf32(sp0 + 8u)) - fr(g, fr(g, fr(g, sin(d3)) * d4) * (double)rdf32(sp0 + 0x10u)));
    wrf32(arg1, (float)d5);
    d6 = fr(g, fr(g, fr(g, d4 * fr(g, sin(d1))) * (double)rdf32(sp0 + 0xcu)) + fr(g, fr(g, fr(g, sin(d3)) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(sp0 + 8u)));
    wrf32(arg1 + 4u, (float)d6);
    d7 = fr(g, fr(g, sin(d3)) * fr(g, sin(d1)));
    d8 = fr(g, fr(g, fr(g, d4 * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(sp0 + 0xcu)) - fr(g, d7 * (double)rdf32(sp0 + 8u)));
    wrf32(arg1 + 8u, (float)d8);
    d9 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(sp0 + 0xcu)) * (double)rdf32(sp0 + 8u)) + fr(g, d7 * d4));
    wrf32(arg1 + 0xcu, (float)d9);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ab00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027ab00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
