/* f_0x101d4080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101d4080(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d19;
    double d20;
    double d21;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d41;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    double loc_20_f;
    uint32_t loc_28;
    double loc_28_f;
    uint32_t loc_30;
    double loc_30_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t18;
    uint32_t t2;
    uint32_t t22;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (arg1 == 0u)
    {
        esi = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
        goto L_101d40bf;
    }
    esi = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
    t1 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x30u, t1);
    t2 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0x28u, t2);
    if (rd8(self + 0x24u) != 0u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(self + 0x24u);
        edx = t2;
        loc_30 = t1;
        loc_28 = t2;
        x0 = (double)rdf32(arg1 + 0x38u);
        goto L_101d40b3;
    }
    eax = (arg1 & 0xffffff00u) | rd8(self + 0x24u);
    edx = t2;
    loc_30 = t1;
    loc_28 = t2;
    x0 = (double)rdf32(arg1 + 0x38u);
L_101d40cf: ;
    wr32(sp0 - 0x2cu, 0xbe99999au);
L_101d40d7: ;
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t4 = cow_stdcall(g, COW_IMG(0x101d6030u), 0);
    d5 = (double)rdf32(sp0 - 0x30u);
    if (!(d5 < -(double)rdf32(t4)))
    {
        eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, -(double)rdf32(t4), 1u);
        ecx = t4;
        x0 = -(double)rdf32(t4);
        loc_30_f = (double)rdf32(sp0 - 0x30u);
    }
    else
    {
        eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, -(double)rdf32(t4), 1u);
        ecx = t4;
        x0 = -(double)rdf32(t4);
        wrf32(sp0 - 0x30u, (float)(double)(float)x0);
        loc_30_f = (double)(float)x0;
    }
    if ((cow_fsw(g, loc_30_f, (double)rdf32(ecx), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_30_f, (double)rdf32(ecx), 0u) & 0x4100u;
    }
    else
    {
        wr32(sp0 - 0x30u, rd32(ecx));
        eax = rd32(ecx);
    }
    d6 = (double)rdf32(sp0 - 0x28u);
    d7 = -(double)rdf32(ecx + 8u);
    if (!(d6 < d7))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
        x0 = -(double)rdf32(ecx + 8u);
        loc_28_f = (double)rdf32(sp0 - 0x28u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
        x0 = -(double)rdf32(ecx + 8u);
        wrf32(sp0 - 0x28u, (float)(double)(float)x0);
        loc_28_f = (double)(float)x0;
    }
    d8 = (double)rdf32(ecx + 8u);
    if ((cow_fsw(g, loc_28_f, d8, 0u) & 0x4100u) == 0u)
    {
        t9 = rd32(ecx + 8u);
        wr32(sp0 - 0x28u, t9);
    }
    if ((uint32_t)(int8_t)rd8(self + 0x24u) == 1u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x24u) - 1u;
        wr32(sp0 - 0x1cu, 0xc0900000u);
        d15 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(COW_IMG(0x1032d698u)));
        wrf32(sp0 - 0x20u, (float)d15);
        d16 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x1032a3a0u)));
        wrf32(sp0 - 0x18u, (float)d16);
        d17 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x1032a3a0u)));
        if (!(d17 < (double)rdf32(COW_IMG(0x103384bcu))))
        {
            loc_1c = 0xc0900000u;
        }
        else
        {
            loc_20_f = d15;
            wr32(sp0 - 0x18u, 0xc0a66666u);
            loc_1c = 0xc0900000u;
        }
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x24u) - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            wr32(sp0 - 0x1cu, 0xc0900000u);
            d12 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(COW_IMG(0x1032d698u)));
            wrf32(sp0 - 0x20u, (float)d12);
            d13 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(COW_IMG(0x1032a3a0u)));
            wrf32(sp0 - 0x18u, (float)d13);
            d14 = fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(COW_IMG(0x1032a3a0u)));
            if ((cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103384c0u)), 0u) & 0x4100u) != 0u)
            {
                loc_1c = 0xc0900000u;
            }
            else
            {
                loc_20_f = d12;
                wr32(sp0 - 0x18u, 0x40a66666u);
                loc_1c = 0xc0900000u;
            }
        }
        else
        {
            wr32(sp0 - 0x1cu, 0xc0a00000u);
            t10 = rd32(sp0 - 0x30u);
            wr32(sp0 - 0x20u, t10);
            d11 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x1032a378u)));
            wrf32(sp0 - 0x18u, (float)d11);
            loc_1c = 0xc0a00000u;
        }
    }
    t18 = rd32(esi + 0x58u);
    wr32(sp0 - 8u, t18);
    wr32(sp0 - 0x3cu, sp0 - 0x30u);
    d19 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(esi + 0x50u));
    wrf32(sp0 - 0x30u, (float)d19);
    d20 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(esi + 0x54u));
    wrf32(sp0 - 0x2cu, (float)d20);
    d21 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) - cow_bits2f(t18));
    wrf32(sp0 - 0x28u, (float)d21);
    t22 = rd32(esi + 0x4cu);
    wr32(sp0 - 8u, t22);
    d23 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(esi + 0x44u));
    wrf32(sp0 - 0x20u, (float)d23);
    d24 = (double)(float)fr(g, d19 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x30u, (float)d24);
    d25 = (double)(float)fr(g, d20 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x2cu, (float)d25);
    d26 = (double)(float)fr(g, d21 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x28u, (float)d26);
    d27 = (double)(float)fr(g, d23 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x20u, (float)d27);
    d28 = (double)(float)fr(g, fr(g, cow_bits2f(loc_1c) - (double)rdf32(esi + 0x48u)) * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x1cu, (float)d28);
    d29 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x18u) - cow_bits2f(t22)) * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x18u, (float)d29);
    d30 = (double)(float)fr(g, d24 + (double)rdf32(esi + 0x50u));
    wrf32(sp0 - 0x30u, (float)d30);
    d31 = (double)(float)fr(g, d25 + (double)rdf32(esi + 0x54u));
    wrf32(sp0 - 0x2cu, (float)d31);
    d32 = (double)(float)fr(g, d26 + (double)rdf32(esi + 0x58u));
    wrf32(sp0 - 0x28u, (float)d32);
    d33 = (double)(float)fr(g, d27 + (double)rdf32(esi + 0x44u));
    wrf32(sp0 - 0x20u, (float)d33);
    d34 = (double)(float)fr(g, d28 + (double)rdf32(esi + 0x48u));
    wrf32(sp0 - 0x1cu, (float)d34);
    d35 = (double)(float)fr(g, d29 + (double)rdf32(esi + 0x4cu));
    wrf32(sp0 - 0x18u, (float)d35);
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x1001e780u), esi, 1, sp0 - 0x30u);
    t36 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x1001e760u), esi, 1, sp0 - 0x20u);
    t38 = g->edx;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x1001ee30u), esi, 0);
    t40 = g->edx;
    d41 = cow_take_float(g);
    if (rd8(self + 0x24u) != 0u)
    {
        eax = (t39 & 0xffffff00u) | rd8(self + 0x24u);
    }
    else
    {
        eax = (t39 & 0xffffff00u) | rd8(self + 0x24u);
        edx = t40;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t42 = cow_stdcall(g, COW_IMG(0x101d6030u), 0);
        t43 = g->edx;
        t44 = rd32(t42 + 4u);
        wr32(sp0 - 0x3cu, t44);
        t45 = cow_thiscall(g, COW_IMG(0x1001ecb0u), esi, 1, t44);
        eax = t45;
    }
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    return eax;
L_101d40b3: ;
    d3 = (double)(float)fr(g, x0 - (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x2cu, (float)d3);
    goto L_101d40d7;
L_101d40bf: ;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x28u, 0u);
    eax = arg1;
    edx = in_edx;
    loc_30 = 0u;
    loc_28 = 0u;
    goto L_101d40cf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d4080(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
