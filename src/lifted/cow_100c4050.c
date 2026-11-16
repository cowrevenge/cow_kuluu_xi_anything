/* f_0x100c4050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c4050(Guest* g)
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
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x70u) != 0u)
    {
        ecx = rd32(self + 0x70u);
        wr32(ecx + 0x34u, rd32(arg1));
        t1 = rd32(arg1 + 4u);
        wr32(ecx + 0x38u, t1);
        t2 = rd32(arg1 + 8u);
        wr32(ecx + 0x3cu, t2);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x100929a0u), ecx, 0);
    }
    wr32(self + 0x744u, rd32(arg1));
    t3 = rd32(arg1 + 4u);
    wr32(self + 0x748u, t3);
    t4 = rd32(arg1 + 8u);
    wr32(self + 0x74cu, t4);
    t5 = rd32(arg1 + 0xcu);
    wr32(self + 0x750u, t5);
    g->eax = t4;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, arg1);
    d7 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d7, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d8 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d8);
    }
    d9 = (double)rdf32(self + 0x44u);
    if (!(d9 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d10 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d10);
    }
    d11 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d12 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d12);
    }
    d13 = (double)rdf32(self + 0x48u);
    if (!(d13 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d14 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d14);
    }
    d15 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d16 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d16);
    }
    d17 = (double)rdf32(self + 0x4cu);
    if (d17 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d18 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d18);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c4050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c4050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
