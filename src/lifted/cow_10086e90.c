/* f_0x10086e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10086e90(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->eax = self + 0x34u;
    g->ecx = self + 0xc4u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0xc4u, self + 0x34u);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, self + 0x44u);
    d5 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d6 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d6);
    }
    d7 = (double)rdf32(self + 0x44u);
    if (!(d7 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d8 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d8);
    }
    d9 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d10 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d10);
    }
    d11 = (double)rdf32(self + 0x48u);
    if (!(d11 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d12 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d12);
    }
    d13 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d14 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d14);
    }
    d15 = (double)rdf32(self + 0x4cu);
    if (!(d15 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = ((eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d28u)), 0u)) & 0xffffff00u;
    }
    else
    {
        eax = ((eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d28u)), 0u)) & 0xffffff00u;
        d16 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d16);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10086e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10086e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
