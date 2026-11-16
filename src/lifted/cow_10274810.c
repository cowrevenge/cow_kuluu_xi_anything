/* f_0x10274810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
uint32_t cow_fn_10274810(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0xcu, arg1, arg2);
    t1 = g->edx;
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    g->edx = t1;
    g->esp = sp0 - 0x24u;
    t2 = cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0xcu, arg3);
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = (double)(float)fr(g, fr(g, d4 * (double)rdf32(arg3 + 4u)) + (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 8u, (float)d5);
    d6 = (double)(float)fr(g, fr(g, d4 * (double)rdf32(arg3 + 8u)) + (double)rdf32(arg2 + 8u));
    wrf32(sp0 - 4u, (float)d6);
    d7 = fr(g, (double)rdf32(arg1 + 8u) - d6);
    d8 = fr(g, (double)rdf32(arg1 + 4u) - d5);
    d9 = fr(g, (double)rdf32(arg1) - fr(g, fr(g, d4 * (double)rdf32(arg3)) + (double)rdf32(arg2)));
    g->edx = t3;
    fpush(g, fr(g, sqrt(fr(g, fr(g, fr(g, d7 * d7) + fr(g, d8 * d8)) + fr(g, d9 * d9)))));
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
