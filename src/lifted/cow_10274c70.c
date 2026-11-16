/* f_0x10274c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10274c70(Guest* g)
{
    double d5;
    double d7;
    double d9;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (uint32_t)(int16_t)rd16(rd32(sp0 + 8u)) + (uint32_t)(int16_t)(((int16_t)rd16(rd32(sp0 + 8u)) <= 0) * 2u - 1u);
    t2 = rd32(sp0 + 8u);
    t3 = rd16(rd32(sp0 + 8u) + 4u);
    t4 = rd16(rd32(sp0 + 8u) + 2u);
    wr32(sp0 + 8u, t1);
    d5 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x103b27b0u)));
    wrf32(arg1, (float)d5);
    t6 = (uint32_t)(int16_t)rd16(t2 + 2u) + (uint32_t)(int16_t)(((int16_t)t4 <= 0) * 2u - 1u);
    wr32(sp0 + 8u, t6);
    d7 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x103b27b0u)));
    wrf32(arg1 + 4u, (float)d7);
    t8 = (uint32_t)(int16_t)rd16(t2 + 4u) + (uint32_t)(int16_t)(((int16_t)t3 <= 0) * 2u - 1u);
    wr32(sp0 + 8u, t8);
    d9 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x103b27b0u)));
    wrf32(arg1 + 8u, (float)d9);
    g->edx = (uint32_t)(int16_t)(((int16_t)t3 <= 0) * 2u - 1u);
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
