/* f_0x1001ecb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001ecb0(Guest* g)
{
    double d1;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t t10;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    d1 = (double)(float)fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(self + 0x50u));
    wrf32(sp0 - 0xcu, (float)d1);
    d2 = (double)(float)fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(self + 0x54u));
    wrf32(sp0 - 8u, (float)d2);
    d3 = (double)(float)fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(self + 0x58u));
    wrf32(sp0 - 4u, (float)d3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x20u, self + 0x50u);
    wr32(sp0 - 0x24u, self + 0x44u);
    d7 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 0xcu, (float)d7);
    d8 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 8u, (float)d8);
    d9 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 4u, (float)d9);
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x44u, self + 0x50u);
    d11 = fr(g, (double)rdf32(sp0 - 0xcu) + (double)rdf32(self + 0x44u));
    wrf32(self + 0x44u, (float)d11);
    d12 = fr(g, (double)rdf32(sp0 - 8u) + (double)rdf32(self + 0x48u));
    wrf32(self + 0x48u, (float)d12);
    d13 = fr(g, (double)rdf32(sp0 - 4u) + (double)rdf32(self + 0x4cu));
    wrf32(self + 0x4cu, (float)d13);
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ecb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001ecb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
