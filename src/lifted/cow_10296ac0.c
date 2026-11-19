/* f_0x10296ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10296ac0(Guest* g)
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
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 48u);

    COW_AT(10296ac0)
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    d1 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0xcu)) + fr(g, (double)rdf32(arg1) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg2 + 0x18u) * (double)rdf32(arg1 + 8u)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d1);
    d2 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg1)));
    wrf32(sp0 - 0x20u, (float)(double)(float)d2);
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0x14u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(arg2 + 8u)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d3);
    d4 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x14u) * (double)rdf32(arg2 + 0x18u)) + fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg1 + 0x10u) * (double)rdf32(arg2 + 0xcu)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d4);
    d5 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x14u) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(arg1 + 0x10u) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(arg2 + 4u)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d5);
    d6 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 0x14u))) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg1 + 0x10u)));
    wrf32(sp0 - 0x10u, (float)(double)(float)d6);
    d7 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x20u) * (double)rdf32(arg2 + 0x18u)) + fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg1 + 0x1cu) * (double)rdf32(arg2 + 0xcu)));
    wrf32(sp0 - 0xcu, (float)(double)(float)d7);
    d8 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x20u) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(arg1 + 0x1cu) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg2 + 4u)));
    wrf32(sp0 - 8u, (float)(double)(float)d8);
    d9 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 0x20u))) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg1 + 0x1cu)));
    wrf32(sp0 - 4u, (float)(double)(float)d9);
    esi = sp0 - 0x24u;
    edi = arg1;
    ecx = 9u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296ac0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10296ac0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
