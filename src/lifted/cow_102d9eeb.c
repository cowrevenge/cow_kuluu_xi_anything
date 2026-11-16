/* f_0x102d9eeb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d9eeb(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    d1 = (double)(float)(double)rdf32(sp0 + 0x10u);
    wrf32(sp0 - 0x18u, (float)d1);
    d2 = (double)(float)(double)rdf32(sp0 + 0xcu);
    wrf32(sp0 - 0x1cu, (float)d2);
    d3 = (double)(float)(double)rdf32(sp0 + 8u);
    wrf32(sp0 - 0x20u, (float)d3);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x102d8c73u), 4, sp0 - 0x14u, cow_f2bits(d3), cow_f2bits(d2), cow_f2bits(d1));
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 0x14u);
    wr32(sp0 - 0x1cu, arg1);
    g->edx = t5;
    cow_stdcall(g, COW_IMG(0x102d7d56u), 2, arg1, sp0 - 0x14u);
    t6 = g->edx;
    g->edx = t6;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9eeb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d9eeb(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
