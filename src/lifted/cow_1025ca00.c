/* f_0x1025ca00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1025ca00(Guest* g)
{
    double d2;
    double d4;
    uint32_t t1;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x24u);
    d2 = fr(g, (double)rdf32(arg1) / (double)(int64_t)cow_i64(t1, 0u));
    wrf32(arg1, (float)d2);
    t3 = rd32(self + 0x28u);
    d4 = fr(g, (double)rdf32(arg1 + 4u) / (double)(int64_t)cow_i64(t3, 0u));
    wrf32(arg1 + 4u, (float)d4);
    g->edx = 0u;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ca00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ca00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
