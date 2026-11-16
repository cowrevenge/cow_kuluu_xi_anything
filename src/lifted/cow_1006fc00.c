/* f_0x1006fc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1006fc00(Guest* g)
{
    double d1;
    double d2;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, cos((double)rdf32(sp0 + 8u)));
    wrf32(self + 0x8e4u, (float)d1);
    wrf32(self + 0x8d0u, (float)d1);
    d2 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(self + 0x8d4u, (float)d2);
    wrf32(self + 0x8e0u, (float)-d2);
    esi = self + 0x8d0u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006fc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006fc00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
