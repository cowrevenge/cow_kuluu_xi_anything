/* f_0x1005edc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1005edc0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, arg1);
    d2 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d3 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d3);
    }
    d4 = (double)rdf32(self + 0x44u);
    if (!(d4 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d5 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d5);
    }
    d6 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d7 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d7);
    }
    d8 = (double)rdf32(self + 0x48u);
    if (!(d8 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d9 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d9);
    }
    d10 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d11 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d11);
    }
    d12 = (double)rdf32(self + 0x4cu);
    if (d12 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d13 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d13);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005edc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1005edc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
