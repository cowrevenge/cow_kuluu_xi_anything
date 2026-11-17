/* f_0x10044620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10044620(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10044590u), arg4, g->ecx, g->edx, 1, 1, arg1);
    t1 = g->edx;
    d2 = (double)rdf32(arg1 + 8u);
    d3 = (double)rdf32(arg1 + 4u);
    d4 = fr(g, fr(g, fr(g, fr(g, d2 * (double)rdf32(arg2 + 0x20u)) + fr(g, d3 * (double)rdf32(arg2 + 0x10u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(arg2))) + (double)rdf32(arg2 + 0x30u));
    d5 = (double)rdf32(arg1);
    wrf32(arg1, (float)d4);
    d6 = fr(g, fr(g, fr(g, fr(g, d2 * (double)rdf32(arg2 + 0x24u)) + fr(g, d3 * (double)rdf32(arg2 + 0x14u))) + fr(g, d5 * (double)rdf32(arg2 + 4u))) + (double)rdf32(arg2 + 0x34u));
    wrf32(arg1 + 4u, (float)d6);
    d7 = fr(g, fr(g, fr(g, fr(g, d2 * (double)rdf32(arg2 + 0x28u)) + fr(g, d3 * (double)rdf32(arg2 + 0x18u))) + fr(g, d5 * (double)rdf32(arg2 + 8u))) + (double)rdf32(arg2 + 0x38u));
    wrf32(arg1 + 8u, (float)d7);
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
