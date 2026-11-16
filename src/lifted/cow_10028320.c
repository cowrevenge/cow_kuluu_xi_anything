/* f_0x10028320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10028320(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t t1;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10028140u), self, 1, arg1);
    d2 = (double)rdf32(arg1 + 0xcu);
    if (d2 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(arg1 + 0xcu));
    }
    d3 = fr(g, x0 * (double)rdf32(arg1));
    wrf32(arg1, (float)d3);
    d4 = fr(g, x0 * (double)rdf32(arg1 + 4u));
    wrf32(arg1 + 4u, (float)d4);
    d5 = fr(g, x0 * (double)rdf32(arg1 + 8u));
    wrf32(arg1 + 8u, (float)d5);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028320(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
