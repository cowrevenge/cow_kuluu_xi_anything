/* f_0x1001d050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1001d050(Guest* g)
{
    double d4;
    double d6;
    double d8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd16(rd32(self + 0x18u) + rd32(sp0 + 4u) * 8u);
    t2 = rd32(self + 0x18u);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    d4 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(self + 4u));
    wrf32(arg2, (float)d4);
    t5 = (uint32_t)(int16_t)rd16(t2 + t3 * 8u + 2u);
    wr32(sp0 + 4u, t5);
    d6 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(self + 8u));
    wrf32(arg2 + 4u, (float)d6);
    t7 = (uint32_t)(int16_t)rd16(t2 + t3 * 8u + 4u);
    wr32(sp0 + 4u, t7);
    d8 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(self + 0xcu));
    wr32(arg2 + 0xcu, 0x3f800000u);
    wrf32(arg2 + 8u, (float)d8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001d050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
