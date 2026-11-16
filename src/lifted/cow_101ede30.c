/* f_0x101ede30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101ede30(Guest* g)
{
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d2;
    double d3;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x58u);
    d2 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(self + 0x58u));
    wrf32(self + 0x58u, (float)d2);
    d3 = (double)rdf32(self + 0x60u);
    if (!(d2 < d3))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
        loc_4 = t1;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
        loc_4 = t1;
        t4 = rd32(self + 0x60u);
        wr32(self + 0x58u, t4);
    }
    d5 = (double)rdf32(self + 0x58u);
    d6 = (double)rdf32(self + 0x64u);
    if ((cow_fsw(g, d5, d6, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, d6, 0u) & 0x4100u;
        edx = in_edx;
    }
    else
    {
        eax = cow_fsw(g, d5, d6, 0u) & 0x4100u;
        t7 = rd32(self + 0x64u);
        wr32(self + 0x58u, t7);
        edx = t7;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    t8 = (uint32_t)(int16_t)rd16(self + 0x1au) + (uint32_t)(int16_t)rd16(self + 0x1eu);
    wr32(sp0 + 4u, t8);
    t9 = (uint32_t)(int16_t)rd16(self + 0x18u) + (uint32_t)(int16_t)rd16(self + 0x1cu);
    t10 = rd16(self + 0x18u);
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_4));
    t12 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t9);
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
    d14 = (double)(float)fr(g, fr(g, fr(g, d11 * (double)(int32_t)t12) - fr(g, d13 * (double)(int32_t)t12)) * (double)rdf32(self + 0x58u));
    d15 = (double)(int32_t)rd32(sp0 + 4u);
    d16 = (double)(float)fr(g, fr(g, fr(g, d15 * d11) - fr(g, d15 * d13)) * (double)rdf32(self + 0x58u));
    cow_call_regs(g, COW_IMG(0x101edaf0u), (uint32_t)(int16_t)t10, self, g->edx, 0, 3, cow_f2bits(d16), cow_f2bits(d14), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ede30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ede30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
