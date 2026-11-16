/* f_0x102d98bd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d98bd(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d6;
    double d7;
    double d8;
    uint32_t edx;
    double loc_8_f;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x10u))) + (double)rdf32(arg3 + 0x30u));
    d2 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 4u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x14u))) + (double)rdf32(arg3 + 0x34u));
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 0xcu)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x1cu))) + (double)rdf32(arg3 + 0x3cu));
    wrf32(arg1, (float)d1);
    wrf32(arg1 + 4u, (float)d2);
    g->edx = arg3;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x102d6203u), arg2, g->ecx, g->edx, 1, 2, cow_f2bits((double)(float)(double)(float)d3), cow_f2bits((double)(float)1.0));
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        loc_8_f = (double)(float)d3;
        d6 = fr(g, 1.0 / loc_8_f);
        d7 = fr(g, d6 * (double)rdf32(arg1));
        wrf32(arg1, (float)d7);
        d8 = fr(g, d6 * (double)rdf32(arg1 + 4u));
        wrf32(arg1 + 4u, (float)d8);
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d98bd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d98bd(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
