/* f_0x100a78d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100a78d0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d2;
    double d3;
    double d4;
    double d5;
    double d8;
    uint32_t eax;
    uint32_t esi;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(rd32(sp0 + 4u));
    d2 = fr(g, sqrt(fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg2)) + fr(g, d1 * d1))));
    if (!(d2 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032a42cu)), 1u);
        esi = rd32(sp0 + 4u);
        x0 = d2;
        x1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032a42cu)), 1u);
        esi = rd32(sp0 + 4u);
        x0 = d2;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    d3 = fr(g, x1 * (double)rdf32(esi));
    wrf32(esi, (float)d3);
    d4 = fr(g, x1 * (double)rdf32(arg2));
    wrf32(arg2, (float)d4);
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032c9a4u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032c9a4u)), 1u) & 0x4100u;
        d5 = (double)rdf32(COW_IMG(0x1032a3e0u));
        wr32(sp0 + 4u, 0x3eaaaaabu);
        if ((cow_fsw(g, x0, d5, 0u) & 0x4100u) != 0u)
        {
            wr32(sp0 + 4u, 0u);
        }
    }
    else
    {
        wr32(sp0 + 4u, 0x3f800000u);
    }
    g->eax = rd32(self);
    t6 = rd32(self);
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, rd32(t6 + 0x338u), self, 0);
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
    }
    else
    {
        eax = t7;
        d8 = (double)rdf32(sp0 + 4u);
        if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032a84cu)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032a84cu)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032a84cu)), 0u) & 0x4100u;
            wr32(sp0 + 4u, 0x3eaaaaabu);
        }
    }
    t9 = rd32(sp0 + 4u);
    d10 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(esi));
    wrf32(esi, (float)d10);
    d11 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(arg2));
    wrf32(arg2, (float)d11);
    wr32(self + 0x594u, t9);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a78d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a78d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
