/* f_0x102a1fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a1fc0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d7;
    double d8;
    uint32_t t10;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, sp0 - 0x18u);
    d1 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x14u) - (double)rdf32(rd32(sp0 + 4u) + 0x20u));
    wrf32(sp0 - 0x18u, (float)d1);
    d2 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x18u) - (double)rdf32(rd32(sp0 + 4u) + 0x24u));
    wrf32(sp0 - 0x14u, (float)d2);
    d3 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x1cu) - (double)rdf32(rd32(sp0 + 4u) + 0x28u));
    wrf32(sp0 - 0x10u, (float)d3);
    g->ecx = sp0 - 0x18u;
    t4 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x1cu;
    t5 = cow_cdecl(g, COW_IMG(0x102746e0u), 1, sp0 - 0x18u);
    t6 = g->ecx;
    d7 = cow_take_float(g);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, t4 + 0x14u);
    d8 = fr(g, d7 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 4u, (float)d8);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1028dbd0u), 2, t4 + 0x14u, sp0 - 0xcu);
    t9 = g->edx;
    t10 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10284020u), 2, sp0 - 0xcu, t10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a1fc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
