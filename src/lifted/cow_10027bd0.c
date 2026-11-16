/* f_0x10027bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10027bd0(Guest* g)
{
    double d1;
    double d2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 72u);

    g->edx = self;
    d1 = fr(g, cos((double)rdf32(sp0 + 4u)));
    d2 = fr(g, sin((double)rdf32(sp0 + 4u)));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t3 = g->edx;
    wrf32(sp0 - 0x40u, (float)(double)(float)d1);
    wrf32(sp0 - 0x38u, (float)(double)(float)-d2);
    wrf32(sp0 - 0x20u, (float)(double)(float)d2);
    wrf32(sp0 - 0x18u, (float)(double)(float)d1);
    wr32(sp0 - 0x44u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10027d10u), t3, 1, sp0 - 0x40u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10027bd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
