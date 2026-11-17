/* f_0x10027930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10027930(Guest* g)
{
    double d5;
    double d6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x20u, sp0 - 0x18u);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x24u, t1);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t1) + 0xa4u), rd32(t1), 2, t1, sp0 - 0x18u);
    t2 = rd32(sp0 - 0x10u) >> 1u;
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(sp0 - 0xcu) >> 1u;
    t4 = rd32(sp0 + 8u);
    d5 = fr(g, (double)rdf32(rd32(sp0 + 8u)) / (double)(int32_t)t2);
    wr32(sp0 + 8u, t3);
    wrf32(arg1, (float)d5);
    d6 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / (double)(int32_t)rd32(sp0 + 8u)) * (double)rdf32(t4 + 4u));
    wrf32(arg1 + 4u, (float)d6);
    g->edx = t3;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10027930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
