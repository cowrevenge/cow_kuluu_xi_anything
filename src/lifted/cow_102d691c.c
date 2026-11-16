/* f_0x102d691c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102d691c(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(sp0 + 0x10u);
    t3 = rd32(sp0 + 8u);
    d4 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 0x10u) + 0xcu) * (double)rdf32(rd32(sp0 + 0xcu) + 4u)) - fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 0xcu) * (double)rdf32(rd32(sp0 + 0x10u) + 4u)));
    d5 = fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 0xcu) * (double)rdf32(rd32(sp0 + 0x10u) + 8u));
    d6 = fr(g, (double)rdf32(rd32(sp0 + 0x10u) + 0xcu) * (double)rdf32(rd32(sp0 + 0xcu) + 8u));
    wrf32(sp0 + 0xcu, (float)d4);
    d7 = (double)(float)fr(g, (double)rdf32(t1 + 4u) * (double)rdf32(t2 + 8u));
    wrf32(sp0 - 0xcu, (float)d7);
    d8 = (double)(float)fr(g, (double)rdf32(t1 + 8u) * (double)rdf32(t2 + 4u));
    wrf32(sp0 - 8u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, d6 - d5) * (double)rdf32(t3 + 4u)) - fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(t3 + 8u))) + fr(g, fr(g, d7 - d8) * (double)rdf32(t3 + 0xcu)));
    wrf32(sp0 - 0x20u, (float)d9);
    d10 = fr(g, (double)rdf32(t1 + 0xcu) * (double)rdf32(t2));
    wrf32(sp0 + 8u, (float)d10);
    d11 = fr(g, (double)rdf32(t2 + 0xcu) * (double)rdf32(t1));
    wrf32(sp0 + 0x10u, (float)d11);
    d12 = (double)(float)fr(g, fr(g, (double)rdf32(t2) * (double)rdf32(t1 + 8u)) - fr(g, (double)rdf32(t1) * (double)rdf32(t2 + 8u)));
    wrf32(sp0 - 0x10u, (float)d12);
    d13 = (double)(float)fr(g, fr(g, fr(g, fr(g, d5 - d6) * (double)rdf32(t3)) - fr(g, fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 0x10u)) * (double)rdf32(t3 + 8u))) + fr(g, d12 * (double)rdf32(t3 + 0xcu)));
    wrf32(sp0 - 0x1cu, (float)d13);
    d14 = fr(g, (double)rdf32(t1) * (double)rdf32(t2 + 4u));
    d15 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(t3)) - fr(g, fr(g, (double)rdf32(sp0 + 0x10u) - (double)rdf32(sp0 + 8u)) * (double)rdf32(t3 + 4u))) + fr(g, fr(g, d14 - fr(g, (double)rdf32(t2) * (double)rdf32(t1 + 4u))) * (double)rdf32(t3 + 0xcu)));
    wrf32(sp0 - 0x18u, (float)d15);
    d16 = fr(g, (double)rdf32(t2) * (double)rdf32(t1 + 4u));
    d17 = (double)(float)fr(g, fr(g, fr(g, fr(g, d8 - d7) * (double)rdf32(t3)) - fr(g, d12 * (double)rdf32(t3 + 4u))) + fr(g, fr(g, d16 - d14) * (double)rdf32(t3 + 8u)));
    wrf32(sp0 - 0x14u, (float)d17);
    esi = sp0 - 0x20u;
    edi = arg1;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    g->edx = t3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d691c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d691c(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
