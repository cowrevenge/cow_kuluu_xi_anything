/* f_0x1027b0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1027b0a0(Guest* g)
{
    double d10;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x10u, arg2);
    t2 = g->edx;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x1027b080u), 1, sp0 - 0x10u);
    d3 = fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * fr(g, fr(g, -fr(g, (double)rdf32(arg2) * (double)rdf32(arg3)) - fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2 + 4u))) - fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 8u)))) + fr(g, (double)rdf32(sp0 - 8u) * fr(g, fr(g, fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 4u))) - fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2)))));
    d4 = fr(g, fr(g, d3 + fr(g, (double)rdf32(sp0 - 4u) * fr(g, fr(g, fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3))) - fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2 + 8u))))) - fr(g, (double)rdf32(sp0 - 0xcu) * fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 8u)) + fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2))) - fr(g, (double)rdf32(arg3) * (double)rdf32(arg2 + 4u)))));
    d5 = fr(g, fr(g, -fr(g, (double)rdf32(arg2) * (double)rdf32(arg3)) - fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2 + 4u))) - fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 8u)));
    d6 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 8u)) + fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2))) - fr(g, (double)rdf32(arg3) * (double)rdf32(arg2 + 4u)));
    d7 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 4u))) - fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2)));
    d8 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3))) - fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2 + 8u)));
    wrf32(arg1, (float)d4);
    d9 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xcu) * d5) + fr(g, (double)rdf32(sp0 - 0x10u) * d6)) + fr(g, (double)rdf32(sp0 - 4u) * d7)) - fr(g, (double)rdf32(sp0 - 8u) * d8));
    wrf32(arg1 + 4u, (float)d9);
    d10 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 8u) * d5) + fr(g, (double)rdf32(sp0 - 4u) * d6)) + fr(g, (double)rdf32(sp0 - 0xcu) * d8)) - fr(g, (double)rdf32(sp0 - 0x10u) * d7));
    wrf32(arg1 + 8u, (float)d10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027b0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027b0a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
