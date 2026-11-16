/* f_0x10280380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10280380(Guest* g)
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
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    d1 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(arg2 + 0x30u)));
    wrf32(sp0 - 0x40u, (float)d1);
    d2 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x34u) * (double)rdf32(arg1 + 0xcu)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0x14u))) + fr(g, (double)rdf32(arg2 + 0x24u) * (double)rdf32(arg1 + 8u))) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg1)));
    wrf32(sp0 - 0x3cu, (float)d2);
    d3 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(arg2 + 0x38u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0x18u))) + fr(g, (double)rdf32(arg2 + 0x28u) * (double)rdf32(arg1 + 8u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg1)));
    wrf32(sp0 - 0x38u, (float)d3);
    d4 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x2cu) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg1))) + fr(g, (double)rdf32(arg2 + 0x3cu) * (double)rdf32(arg1 + 0xcu)));
    wrf32(sp0 - 0x34u, (float)d4);
    d5 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 0x18u)) + fr(g, (double)rdf32(arg1 + 0x14u) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0x1cu) * (double)rdf32(arg2 + 0x30u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(arg1 + 0x10u)));
    wrf32(sp0 - 0x30u, (float)d5);
    d6 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x14u) * (double)rdf32(arg2 + 0x14u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg1 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0x1cu) * (double)rdf32(arg2 + 0x34u))) + fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg2 + 0x24u)));
    wrf32(sp0 - 0x2cu, (float)d6);
    d7 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x1cu) * (double)rdf32(arg2 + 0x38u)) + fr(g, (double)rdf32(arg1 + 0x18u) * (double)rdf32(arg2 + 0x28u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg1 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0x14u) * (double)rdf32(arg2 + 0x18u)));
    wrf32(sp0 - 0x28u, (float)d7);
    d8 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x3cu) * (double)rdf32(arg1 + 0x1cu)) + fr(g, (double)rdf32(arg2 + 0x2cu) * (double)rdf32(arg1 + 0x18u))) + fr(g, (double)rdf32(arg1 + 0x14u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg1 + 0x10u)));
    wrf32(sp0 - 0x24u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 0x28u)) + fr(g, (double)rdf32(arg1 + 0x24u) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(arg2 + 0x30u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(arg1 + 0x20u)));
    wrf32(sp0 - 0x20u, (float)d9);
    d10 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x24u) * (double)rdf32(arg2 + 0x14u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg1 + 0x20u))) + fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(arg2 + 0x34u))) + fr(g, (double)rdf32(arg1 + 0x28u) * (double)rdf32(arg2 + 0x24u)));
    wrf32(sp0 - 0x1cu, (float)d10);
    d11 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(arg2 + 0x38u)) + fr(g, (double)rdf32(arg1 + 0x28u) * (double)rdf32(arg2 + 0x28u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg1 + 0x20u))) + fr(g, (double)rdf32(arg1 + 0x24u) * (double)rdf32(arg2 + 0x18u)));
    wrf32(sp0 - 0x18u, (float)d11);
    d12 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x3cu) * (double)rdf32(arg1 + 0x2cu)) + fr(g, (double)rdf32(arg2 + 0x2cu) * (double)rdf32(arg1 + 0x28u))) + fr(g, (double)rdf32(arg1 + 0x24u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg1 + 0x20u)));
    wrf32(sp0 - 0x14u, (float)d12);
    d13 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg1 + 0x38u)) + fr(g, (double)rdf32(arg1 + 0x34u) * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1 + 0x3cu) * (double)rdf32(arg2 + 0x30u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(arg1 + 0x30u)));
    wrf32(sp0 - 0x10u, (float)d13);
    d14 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x34u) * (double)rdf32(arg2 + 0x14u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg1 + 0x30u))) + fr(g, (double)rdf32(arg1 + 0x3cu) * (double)rdf32(arg2 + 0x34u))) + fr(g, (double)rdf32(arg1 + 0x38u) * (double)rdf32(arg2 + 0x24u)));
    wrf32(sp0 - 0xcu, (float)d14);
    d15 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x3cu) * (double)rdf32(arg2 + 0x38u)) + fr(g, (double)rdf32(arg1 + 0x38u) * (double)rdf32(arg2 + 0x28u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg1 + 0x30u))) + fr(g, (double)rdf32(arg1 + 0x34u) * (double)rdf32(arg2 + 0x18u)));
    wrf32(sp0 - 8u, (float)d15);
    d16 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x3cu) * (double)rdf32(arg1 + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x2cu) * (double)rdf32(arg1 + 0x38u))) + fr(g, (double)rdf32(arg1 + 0x34u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg1 + 0x30u)));
    wrf32(sp0 - 4u, (float)d16);
    esi = sp0 - 0x40u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10280380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10280380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
