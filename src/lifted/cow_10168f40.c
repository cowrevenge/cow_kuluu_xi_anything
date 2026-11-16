/* f_0x10168f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10168f40(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d5;
    uint32_t t10;
    uint32_t t11;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(self + 0x3413cu);
    wrf32(arg1 + 8u, (float)-d1);
    d2 = (double)rdf32(self + 0x34140u);
    wrf32(arg1 + 0xcu, (float)-d2);
    d3 = (double)rdf32(self + 0x34144u);
    wrf32(arg1 + 0x10u, (float)-d3);
    t4 = rd32(self + 0x34148u);
    wr32(arg1, t4);
    d5 = fr(g, (double)(int32_t)rd32(self + 0x3414cu) * (double)rdf32(COW_IMG(0x1032ae50u)));
    wrf32(arg1 + 4u, (float)d5);
    t6 = rd32(self + 0x34150u);
    wr32(arg1 + 0x18u, t6);
    t7 = rd32(self + 0x34154u);
    wr32(arg1 + 0x1cu, t7);
    t8 = rd8(self + 0x3415cu);
    wr8(arg1 + 0x20u, (uint8_t)t8);
    t9 = rd8(self + 0x3415du);
    wr8(arg1 + 0x21u, (uint8_t)t9);
    t10 = rd8(self + 0x3415eu);
    wr8(arg1 + 0x22u, (uint8_t)t10);
    wr8(arg1 + 0x23u, rd8(self + 0x3415fu));
    t11 = rd32(self + 0x34158u);
    wr32(arg1 + 0x34u, t11);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10168f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10168f40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
