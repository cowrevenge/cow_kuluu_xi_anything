/* f_0x101ef990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101ef990(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d21;
    double d22;
    double d24;
    double d25;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t esi;
    double loc_4_f;
    uint32_t t1;
    uint32_t t12;
    uint32_t t17;
    uint32_t t2;
    uint32_t t20;
    uint32_t t23;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)(int16_t)rd16(self + 0x7cu);
    t2 = (uint32_t)(int16_t)rd16(self + 0x7eu);
    t3 = rd16(self + 0x6cu);
    t4 = rd16(self + 0x1cu);
    d5 = fr(g, (double)(int32_t)t1 + (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 4u, (float)d5);
    t6 = rd16(self + 0x1eu);
    t7 = rd16(self + 0x6eu);
    d8 = fr(g, (double)(int32_t)t2 + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d8);
    d9 = fr(g, (double)rdf32(sp0 + 8u) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)(uint32_t)(int16_t)t6 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u))) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)t7));
    d10 = fr(g, (double)rdf32(sp0 + 4u) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)(uint32_t)(int16_t)t4 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u))) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)t3));
    d11 = (double)(float)fr(g, fr(g, d9 * d9) + fr(g, d10 * d10));
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x10014cf0u), (uint32_t)(int16_t)t3, g->ecx, g->edx, 1, 0);
    d13 = cow_take_float(g);
    d14 = fr(g, fr(g, d13 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x10329a34u)));
    if ((cow_fsw(g, d14, d11, 0u) & 0x4100u) == 0u)
    {
        loc_4_f = d11;
    }
    else
    {
        eax = cow_fsw(g, d14, d11, 0u) & 0x4100u;
        loc_4_f = d11;
        d15 = (double)rdf32(self + 0x24u);
        d16 = (double)rdf32(self + 0x34u);
        if (!(d15 < d16))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 0u);
            d18 = (double)rdf32(self + 0x24u);
            d19 = (double)rdf32(self + 0x3cu);
            if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                t20 = rd32(self + 0x3cu);
                wr32(self + 0x24u, t20);
            }
        }
        else
        {
            t17 = rd32(self + 0x34u);
            wr32(self + 0x24u, t17);
            eax = t17;
        }
        d21 = (double)rdf32(self + 0x28u);
        d22 = (double)rdf32(self + 0x38u);
        if (!(d21 < d22))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 0u);
            d24 = (double)rdf32(self + 0x28u);
            d25 = (double)rdf32(self + 0x40u);
            if ((cow_fsw(g, d24, d25, 0u) & 0x4100u) == 0u)
            {
                t26 = rd32(self + 0x40u);
                wr32(self + 0x28u, t26);
            }
        }
        else
        {
            t23 = rd32(self + 0x38u);
            wr32(self + 0x28u, t23);
        }
        t27 = rd32(sp0 + 4u);
        t28 = rd32(sp0 + 8u);
        wr8(self + 0x14u, rd8(self + 0x14u) | 8u);
        wr32(self + 0x2cu, t27);
        wr32(self + 0x30u, t28);
        if (rd32(self + 8u) != 0u)
        {
            esi = rd32(self + 8u);
            wr8(esi + 0x62u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ef990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ef990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
