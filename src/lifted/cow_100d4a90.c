/* f_0x100d4a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100d4a90(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0x3f800000u);
    d1 = (double)(float)(double)rdf32(self + 0x69cu);
    wrf32(sp0 - 0x1cu, (float)d1);
    d2 = (double)(float)(double)rdf32(self + 0x6a0u);
    wrf32(sp0 - 0x20u, (float)d2);
    d3 = (double)(float)(double)rdf32(self + 0x698u);
    wrf32(sp0 - 0x24u, (float)d3);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10026e30u), 5, sp0 - 0x10u, cow_f2bits(d3), cow_f2bits(d2), cow_f2bits(d1), 0x3f800000u);
    wr32(sp0 - 0x18u, self + 0x688u);
    wr32(sp0 - 0x1cu, self + 0x678u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, self);
    cow_thiscall(g, COW_IMG(0x1002c500u), self + 0x674u, 7, self, 0u, arg1, arg2, sp0 - 0x10u, self + 0x678u, self + 0x688u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d4a90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
