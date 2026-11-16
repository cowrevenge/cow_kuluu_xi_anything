/* f_0x1026e210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026e210(Guest* g)
{
    double d10;
    double d12;
    double d14;
    double d15;
    double d4;
    double d6;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, arg1 + 0x68u);
    wr32(sp0 - 0x30u, sp0 - 0x24u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1027a9f0u), 12, sp0 - 0x24u, arg1 + 0x68u, in_esi, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t1 = rd32(sp0 - 0x20u);
    t2 = rd32(sp0 - 0x1cu);
    t3 = rd32(sp0 - 0x24u);
    d4 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(arg1 + 0x78u));
    wr32(arg1 + 0x20u, t1);
    t5 = rd32(sp0 - 0x14u);
    d6 = fr(g, d4 + (double)rdf32(arg1 + 0x5cu));
    wr32(arg1 + 0x1cu, t3);
    t7 = rd32(sp0 - 0x18u);
    wr32(arg1 + 0x24u, t2);
    t8 = rd32(sp0 - 0x10u);
    wr32(arg1 + 0x30u, t5);
    wrf32(arg1 + 0x28u, (float)d6);
    t9 = rd32(sp0 - 8u);
    d10 = fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg1 + 0x78u));
    wr32(arg1 + 0x2cu, t7);
    t11 = rd32(sp0 - 0xcu);
    d12 = fr(g, d10 + (double)rdf32(arg1 + 0x60u));
    wr32(arg1 + 0x34u, t8);
    t13 = rd32(sp0 - 4u);
    wr32(arg1 + 0x40u, t9);
    wr32(arg1 + 0x3cu, t11);
    wr32(arg1 + 0x44u, t13);
    wrf32(arg1 + 0x38u, (float)d12);
    d14 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(arg1 + 0x78u));
    wr32(arg1 + 0x54u, 0u);
    wr32(arg1 + 0x50u, 0u);
    wr32(arg1 + 0x4cu, 0u);
    wr32(arg1 + 0x58u, 0x3f800000u);
    d15 = fr(g, d14 + (double)rdf32(arg1 + 0x64u));
    wrf32(arg1 + 0x48u, (float)d15);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026e210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
