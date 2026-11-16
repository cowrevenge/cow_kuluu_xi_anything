/* f_0x10283b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10283b70(Guest* g)
{
    double d1;
    double d11;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t t10;
    uint32_t t8;
    const uint32_t sp0 = g->esp;

    d1 = fr(g, (double)rdf32(COW_IMG(0x10329990u)) / fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 4u)));
    d2 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 4u));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x2ecu, (float)d1);
    d3 = fr(g, (double)rdf32(COW_IMG(0x10329990u)) / fr(g, (double)rdf32(sp0 + 0x10u) - (double)rdf32(sp0 + 0xcu)));
    d4 = fr(g, (double)rdf32(sp0 + 0x10u) - (double)rdf32(sp0 + 0xcu));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x300u, (float)d3);
    d5 = (double)(float)fr(g, (double)rdf32(sp0 + 0x18u) - (double)rdf32(sp0 + 0x14u));
    d6 = fr(g, (double)rdf32(COW_IMG(0x10329990u)) / d5);
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x314u, (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(sp0 + 8u)) / d2);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x328u, 0x3f800000u);
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x31cu, (float)d7);
    t8 = rd32(COW_IMG(0x1099d200u));
    d9 = fr(g, fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(sp0 + 0x10u)) / d4);
    wrf32(t8 + 0x320u, (float)d9);
    t10 = rd32(COW_IMG(0x1099d200u));
    d11 = fr(g, fr(g, (double)rdf32(sp0 + 0x14u) + (double)rdf32(sp0 + 0x18u)) / d5);
    wrf32(t10 + 0x324u, (float)d11);
    g->edx = t8;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10283b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10283b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
