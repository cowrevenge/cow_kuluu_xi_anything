/* f_0x102d9852 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d9852(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    d1 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(arg2) * (double)rdf32(arg3))) + (double)rdf32(arg3 + 0x30u));
    wrf32(sp0 - 0x14u, (float)d1);
    d2 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(arg3 + 0x14u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(arg3 + 0x34u));
    wrf32(sp0 - 0x10u, (float)d2);
    d3 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(arg3 + 0x18u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(arg3 + 0x38u));
    wrf32(sp0 - 0xcu, (float)d3);
    d4 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0xcu) * (double)rdf32(arg2)) + fr(g, (double)rdf32(arg3 + 0x1cu) * (double)rdf32(arg2 + 4u))) + (double)rdf32(arg3 + 0x3cu));
    wrf32(sp0 - 8u, (float)d4);
    esi = sp0 - 0x14u;
    edi = arg1;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9852(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d9852(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
