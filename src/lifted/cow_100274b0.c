/* f_0x100274b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100274b0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    double x0;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(arg1 + 4u);
    d2 = (double)rdf32(arg1 + 8u);
    d3 = fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1)) + fr(g, d1 * d1)) + fr(g, d2 * d2))));
    if (d3 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d3;
        x0 = (double)rdf32(COW_IMG(0x1032a4ccu));
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d3;
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    }
    d4 = fr(g, x0 * (double)rdf32(arg1));
    wrf32(arg1, (float)d4);
    d5 = fr(g, x0 * (double)rdf32(arg1 + 4u));
    wrf32(arg1 + 4u, (float)d5);
    d6 = fr(g, x0 * (double)rdf32(arg1 + 8u));
    wrf32(arg1 + 8u, (float)d6);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100274b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100274b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
