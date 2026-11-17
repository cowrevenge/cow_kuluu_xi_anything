/* f_0x100ab880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100ab880(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x70u) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        ecx = rd32(self + 0x70u);
        wr32(ecx + 0x34u, rd32(arg1));
        t1 = rd32(arg1 + 4u);
        wr32(ecx + 0x38u, t1);
        t2 = rd32(arg1 + 8u);
        wr32(ecx + 0x3cu, t2);
        g->eax = t2;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x100929a0u), ecx, 0);
        eax = t3;
    }
    g->eax = eax;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x318u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t8 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x61cu, arg1);
        d9 = (double)rdf32(self + 0x61cu);
        if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d10 = fr(g, (double)rdf32(self + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(self + 0x61cu, (float)d10);
        }
        d11 = (double)rdf32(self + 0x61cu);
        if (!(d11 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d12 = fr(g, (double)rdf32(self + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(self + 0x61cu, (float)d12);
        }
        d13 = (double)rdf32(self + 0x620u);
        if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d14 = fr(g, (double)rdf32(self + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(self + 0x620u, (float)d14);
        }
        d15 = (double)rdf32(self + 0x620u);
        if (!(d15 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d16 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(self + 0x620u, (float)d16);
        }
        d17 = (double)rdf32(self + 0x624u);
        if ((cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d18 = fr(g, (double)rdf32(self + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(self + 0x624u, (float)d18);
        }
        d19 = (double)rdf32(self + 0x624u);
        if (d19 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d20 = fr(g, (double)rdf32(self + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(self + 0x624u, (float)d20);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ab880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ab880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
