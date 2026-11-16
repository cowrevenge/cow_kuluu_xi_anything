/* f_0x102d7172 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d7172(Guest* g)
{
    double d1;
    double d10;
    double d12;
    double d2;
    double d4;
    double d6;
    double d8;
    uint32_t edx;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t3;
    uint32_t t5;
    uint32_t t7;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(arg2 + 0x10u);
    d2 = (double)rdf32(arg2 + 4u);
    wrf32(arg1 + 4u, (float)d1);
    wrf32(arg1 + 0x10u, (float)d2);
    t3 = rd32(arg2 + 0x20u);
    d4 = (double)rdf32(arg2 + 8u);
    wr32(arg1 + 8u, t3);
    wrf32(arg1 + 0x20u, (float)d4);
    t5 = rd32(arg2 + 0x30u);
    d6 = (double)rdf32(arg2 + 0xcu);
    wr32(arg1 + 0xcu, t5);
    wrf32(arg1 + 0x30u, (float)d6);
    t7 = rd32(arg2 + 0x24u);
    d8 = (double)rdf32(arg2 + 0x18u);
    wr32(arg1 + 0x18u, t7);
    wrf32(arg1 + 0x24u, (float)d8);
    t9 = rd32(arg2 + 0x34u);
    d10 = (double)rdf32(arg2 + 0x1cu);
    wr32(arg1 + 0x1cu, t9);
    wrf32(arg1 + 0x34u, (float)d10);
    t11 = rd32(arg2 + 0x38u);
    d12 = (double)rdf32(arg2 + 0x2cu);
    wr32(arg1 + 0x2cu, t11);
    wrf32(arg1 + 0x38u, (float)d12);
    if (arg1 == arg2)
    {
        edx = t11;
    }
    else
    {
        wr32(arg1, rd32(arg2));
        t13 = rd32(arg2 + 0x14u);
        wr32(arg1 + 0x14u, t13);
        t14 = rd32(arg2 + 0x28u);
        wr32(arg1 + 0x28u, t14);
        t15 = rd32(arg2 + 0x3cu);
        wr32(arg1 + 0x3cu, t15);
        edx = t14;
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d7172(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d7172(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
