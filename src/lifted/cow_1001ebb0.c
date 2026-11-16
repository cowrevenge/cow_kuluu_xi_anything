/* f_0x1001ebb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001ebb0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_4_f;
    double loc_8_f;
    uint32_t t12;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    d1 = (double)(float)fr(g, (double)rdf32(self + 0x50u) - (double)rdf32(self + 0x44u));
    d2 = (double)(float)fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(self + 0x4cu));
    d3 = fr(g, fr(g, atan2(fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(self + 0x4cu)), d1)) + (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 4u, (float)d3);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_8_f = d1;
        loc_4_f = d2;
    }
    else
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_8_f = d1;
        loc_4_f = d2;
        d4 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 + 4u, (float)d4);
    }
    d5 = (double)rdf32(sp0 + 4u);
    if (d5 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d6 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 + 4u, (float)d6);
    }
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10027680u), 2, cow_f2bits(loc_4_f), cow_f2bits(loc_8_f));
    t8 = g->edx;
    d9 = cow_take_float(g);
    if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t8;
        x0 = d9;
    }
    else
    {
        edx = t8;
        x0 = d9;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    d10 = fr(g, (double)rdf32(self + 0x50u) - fr(g, fr(g, cos((double)rdf32(sp0 + 4u))) * x0));
    wrf32(self + 0x44u, (float)d10);
    d11 = fr(g, (double)rdf32(self + 0x58u) - fr(g, fr(g, sin((double)rdf32(sp0 + 4u))) * x0));
    wrf32(self + 0x4cu, (float)d11);
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x10021c10u), self, 0);
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ebb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001ebb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
