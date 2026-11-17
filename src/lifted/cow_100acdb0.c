/* f_0x100acdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100acdb0(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t t11;
    uint32_t t12;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d1 = fr(g, (double)rdf32(arg2) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(arg2, (float)d1);
    }
    if (!((double)rdf32(arg2) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d2 = fr(g, (double)rdf32(arg2) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(arg2, (float)d2);
    }
    d3 = (double)rdf32(arg2 + 4u);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d4 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(arg2 + 4u, (float)d4);
    }
    d5 = (double)rdf32(arg2 + 4u);
    if (!(d5 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d6 = fr(g, (double)rdf32(arg2 + 4u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(arg2 + 4u, (float)d6);
    }
    d7 = (double)rdf32(arg2 + 8u);
    if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d8 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(arg2 + 8u, (float)d8);
    }
    d9 = (double)rdf32(arg2 + 8u);
    if (d9 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d10 = fr(g, (double)rdf32(arg2 + 8u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(arg2 + 8u, (float)d10);
    }
    wr32(arg1 * 0x10u + self + 0x5e4u, rd32(arg2));
    t11 = rd32(arg2 + 4u);
    wr32(arg1 * 0x10u + self + 0x5e8u, t11);
    t12 = rd32(arg2 + 8u);
    wr32(arg1 * 0x10u + self + 0x5ecu, t12);
    wr32(arg1 * 0x10u + self + 0x5f0u, 0x3f800000u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100acef0u), self, 2, arg1, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100acdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100acdb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
