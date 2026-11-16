/* f_0x102d8c79 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102d8c79(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 + 0x10u);
    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x1cu, (float)d1);
    d2 = (double)(float)fr(g, cos(d1));
    wrf32(sp0 - 8u, (float)d2);
    wrf32(sp0 + 0x10u, (float)fr(g, sin(d1)));
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 0x18u);
    d3 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 0xcu, (float)d3);
    d4 = (double)(float)fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 0x10u, (float)d4);
    d5 = (double)(float)fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 0x18u, (float)d5);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    d6 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 0xcu, (float)d6);
    d7 = (double)(float)fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 0xcu, (float)d7);
    d8 = (double)(float)fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 0x14u, (float)d8);
    d9 = fr(g, d8 * d4);
    d10 = fr(g, fr(g, d2 * fr(g, d7 * d5)) + fr(g, d9 * (double)rdf32(sp0 + 0x10u)));
    wrf32(arg1, (float)d10);
    d11 = fr(g, d7 * d5);
    d12 = fr(g, fr(g, d9 * d2) - fr(g, d11 * (double)rdf32(sp0 + 0x10u)));
    wrf32(arg1 + 4u, (float)d12);
    d13 = fr(g, d7 * d4);
    d14 = fr(g, d8 * d5);
    d15 = fr(g, fr(g, d13 * (double)rdf32(sp0 + 0x10u)) - fr(g, d14 * d2));
    wrf32(arg1 + 8u, (float)d15);
    d16 = fr(g, fr(g, d14 * (double)rdf32(sp0 + 0x10u)) + fr(g, d13 * d2));
    wrf32(arg1 + 0xcu, (float)d16);
    g->edx = sp0 - 0xcu;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8c79(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d8c79(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
