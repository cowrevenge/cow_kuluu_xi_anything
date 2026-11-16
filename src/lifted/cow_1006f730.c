/* f_0x1006f730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1006f730(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    double x0;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(arg2 + 4u);
    d2 = (double)rdf32(arg2 + 8u);
    d3 = fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg2)) + fr(g, d1 * d1)) + fr(g, d2 * d2))));
    if (d3 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d3;
        goto L_1006f784;
    }
    x0 = d3;
    d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    d5 = fr(g, d4 * (double)rdf32(arg2));
    wrf32(arg1, (float)d5);
    d6 = fr(g, d4 * (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 4u, (float)d6);
    d7 = fr(g, d4 * (double)rdf32(arg2 + 8u));
    wrf32(arg1 + 8u, (float)d7);
    return arg1;
L_1006f784: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
