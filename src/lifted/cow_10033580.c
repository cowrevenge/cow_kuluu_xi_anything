/* f_0x10033580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10033580(Guest* g)
{
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, arg2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, arg2, t1);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    wrf32(sp0 + 0xcu, (float)d4);
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->edx = t3;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x10u, arg2, t1);
    t5 = g->edx;
    d6 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(t1 + 0xcu)) + fr(g, (double)rdf32(t1 + 8u) * (double)rdf32(arg2 + 0xcu))) + (double)rdf32(sp0 - 8u));
    wrf32(sp0 - 8u, (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(t1 + 0xcu) * (double)rdf32(arg2 + 0xcu)) - (double)rdf32(sp0 + 0xcu));
    d8 = fr(g, fr(g, fr(g, (double)rdf32(t1 + 0xcu) * (double)rdf32(arg2)) + fr(g, (double)rdf32(t1) * (double)rdf32(arg2 + 0xcu))) + (double)rdf32(sp0 - 0x10u));
    d9 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(t1 + 0xcu)) + fr(g, (double)rdf32(t1 + 4u) * (double)rdf32(arg2 + 0xcu))) + (double)rdf32(sp0 - 0xcu));
    wrf32(arg1 + 0xcu, (float)d7);
    wr32(arg1 + 8u, cow_f2bits(d6));
    wrf32(arg1, (float)d8);
    wrf32(arg1 + 4u, (float)d9);
    g->edx = t5;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10033580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
