/* f_0x101f8de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f8de0(Guest* g)
{
    double d3;
    double d5;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd16(arg2 * 0x20u + self + rd32(sp0 + 4u) * 0x140u + 0x17cu);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    d3 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    t4 = (uint32_t)(int16_t)rd16(arg2 * 0x20u + self + t2 * 0x140u + 0x17au);
    wr32(sp0 + 4u, t4);
    d5 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d5), cow_f2bits(d3));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f8de0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
