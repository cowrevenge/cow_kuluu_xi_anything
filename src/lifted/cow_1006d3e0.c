/* f_0x1006d3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1006d3e0(Guest* g)
{
    double d5;
    double d6;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(rd32(sp0 + 4u) + 0xcu);
    t2 = rd32(rd32(sp0 + 4u) + 0x18u);
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x1cu);
    d5 = (double)rdf32(rd32(sp0 + 4u) + 4u);
    d6 = (double)rdf32(rd32(sp0 + 4u) + 8u);
    wr32(sp0 + 4u, t2);
    t7 = rd32(t3 + 0x2cu);
    t8 = rd32(t3 + 0x10u);
    t9 = rd32(t3 + 0x20u);
    wr32(t3 + 4u, t8);
    t10 = rd32(t3 + 0x30u);
    wr32(t3 + 8u, t9);
    t11 = rd32(t3 + 0x24u);
    wrf32(t3 + 0x10u, (float)d5);
    wr32(t3 + 0xcu, t10);
    t12 = rd32(t3 + 0x34u);
    wr32(t3 + 0x18u, t11);
    t13 = rd32(t3 + 0x38u);
    wrf32(t3 + 0x20u, (float)d6);
    wr32(t3 + 0x1cu, t12);
    t14 = rd32(sp0 + 4u);
    wr32(t3 + 0x2cu, t13);
    wr32(t3 + 0x24u, t14);
    wr32(t3 + 0x30u, t1);
    wr32(t3 + 0x34u, t4);
    wr32(t3 + 0x38u, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006d3e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
