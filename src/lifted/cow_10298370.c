/* f_0x10298370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10298370(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x34cu);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x350u);
    wr32(sp0 - 8u, t2);
    t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x354u);
    wr32(sp0 - 4u, t3);
    wr32(sp0 - 0x10u, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xcu);
    t4 = g->ecx;
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    t5 = rd32(COW_IMG(0x1099d200u)) + 0x12cu;
    wr32(sp0 - 0x18u, t5);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10274890u), 2, t5, sp0 - 0xcu);
    d6 = cow_take_float(g);
    d7 = fr(g, d6 - fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x12cu)));
    wrf32(arg1, (float)d7);
    d8 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x130u));
    wrf32(arg1 + 0x10u, (float)-d8);
    d9 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x134u));
    wrf32(arg1 + 0x20u, (float)-d9);
    d10 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x138u));
    wrf32(arg1 + 0x30u, (float)-d10);
    d11 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x12cu));
    wrf32(arg1 + 4u, (float)-d11);
    d12 = fr(g, d6 - fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x130u)));
    wrf32(arg1 + 0x14u, (float)d12);
    d13 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x134u));
    wrf32(arg1 + 0x24u, (float)-d13);
    d14 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x138u));
    wrf32(arg1 + 0x34u, (float)-d14);
    d15 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x12cu));
    wrf32(arg1 + 8u, (float)-d15);
    d16 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x130u));
    wrf32(arg1 + 0x18u, (float)-d16);
    d17 = fr(g, d6 - fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x134u)));
    wrf32(arg1 + 0x28u, (float)d17);
    d18 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x138u));
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wrf32(arg1 + 0x38u, (float)-d18);
    wr32(arg1 + 0x2cu, 0u);
    wrf32(arg1 + 0x3cu, (float)d6);
    g->top = (g->top + 1u) & 7u;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10298370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
