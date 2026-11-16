/* f_0x1001e6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1001e6d0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d2;
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    d1 = (double)(float)fr(g, (double)rdf32(self + 0x50u) - (double)rdf32(self + 0x44u));
    wrf32(sp0 - 0xcu, (float)d1);
    d2 = (double)(float)fr(g, (double)rdf32(self + 0x54u) - (double)rdf32(self + 0x48u));
    wrf32(sp0 - 8u, (float)d2);
    d3 = (double)(float)fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(self + 0x4cu));
    wrf32(sp0 - 4u, (float)d3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, self + 0x44u);
    wr32(sp0 - 0x1cu, arg1);
    d7 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 0xcu, (float)d7);
    d8 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)d8);
    d9 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 4u, (float)d9);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, self + 0x44u);
    d10 = fr(g, (double)rdf32(sp0 - 0xcu) + (double)rdf32(arg1));
    wrf32(arg1, (float)d10);
    d11 = fr(g, (double)rdf32(sp0 - 8u) + (double)rdf32(arg1 + 4u));
    wrf32(arg1 + 4u, (float)d11);
    d12 = fr(g, (double)rdf32(sp0 - 4u) + (double)rdf32(arg1 + 8u));
    wrf32(arg1 + 8u, (float)d12);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001e6d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
