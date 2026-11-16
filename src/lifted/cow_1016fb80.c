/* f_0x1016fb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1016fb80(Guest* g)
{
    double d1;
    double d11;
    double d12;
    double d15;
    double d19;
    double d2;
    double d20;
    double d3;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(arg2 + 0x38u);
    d2 = (double)rdf32(arg2 + 0x34u);
    d3 = (double)rdf32(arg2 + 0x30u);
    wr32(arg1, rd32(arg2));
    t4 = rd32(arg2 + 0x10u);
    wr32(arg1 + 4u, t4);
    t5 = rd32(arg2 + 0x20u);
    wr32(arg1 + 8u, t5);
    wr32(arg1 + 0xcu, 0u);
    t6 = rd32(arg2 + 4u);
    wr32(arg1 + 0x10u, t6);
    t7 = rd32(arg2 + 0x14u);
    wr32(arg1 + 0x14u, t7);
    t8 = rd32(arg2 + 0x24u);
    wr32(arg1 + 0x18u, t8);
    wr32(arg1 + 0x1cu, 0u);
    t9 = rd32(arg2 + 8u);
    wr32(arg1 + 0x20u, t9);
    t10 = rd32(arg2 + 0x18u);
    d11 = fr(g, d3 * (double)rdf32(arg1));
    d12 = fr(g, d1 * (double)rdf32(arg1 + 0x20u));
    wr32(arg1 + 0x24u, t10);
    t13 = rd32(arg2 + 0x28u);
    wr32(arg1 + 0x28u, t13);
    wr32(arg1 + 0x2cu, 0u);
    t14 = rd32(arg2 + 0xcu);
    d15 = fr(g, d2 * (double)rdf32(arg1 + 0x10u));
    wr32(arg1 + 0x30u, t14);
    t16 = rd32(arg2 + 0x1cu);
    wr32(arg1 + 0x34u, t16);
    t17 = rd32(arg2 + 0x2cu);
    wr32(arg1 + 0x38u, t17);
    t18 = rd32(arg2 + 0x3cu);
    wr32(arg1 + 0x3cu, t18);
    wrf32(arg1 + 0x30u, (float)-fr(g, fr(g, d12 + d11) + d15));
    d19 = fr(g, fr(g, fr(g, d1 * (double)rdf32(arg1 + 0x24u)) + fr(g, d2 * (double)rdf32(arg1 + 0x14u))) + fr(g, d3 * (double)rdf32(arg1 + 4u)));
    wrf32(arg1 + 0x34u, (float)-d19);
    d20 = fr(g, fr(g, fr(g, d2 * (double)rdf32(arg1 + 0x18u)) + fr(g, d3 * (double)rdf32(arg1 + 8u))) + fr(g, d1 * (double)rdf32(arg1 + 0x28u)));
    wrf32(arg1 + 0x38u, (float)-d20);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016fb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1016fb80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
