/* f_0x1006e970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1006e970(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d17;
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    if (rd32(COW_IMG(0x1047bfa8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1047bfa8u));
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_esi);
        wr32(sp0 - 0x18u, in_edi);
        wr32(sp0 - 8u, 0x461c4000u);
        t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        t3 = rd32(sp0 + 0x14u);
        d4 = (double)rdf32(COW_IMG(0x1032c44cu));
        wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
        t5 = rd32(sp0 + 0x10u);
        esi = t3;
        edi = t2;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xcu, 0x461c4000u);
        wr32(sp0 - 4u, 0xc61c4000u);
        if ((int32_t)t5 <= 0)
        {
            edx = t2;
            loc_8 = 0x461c4000u;
            loc_c = 0x461c4000u;
            loc_4 = 0xc61c4000u;
            x0 = d4;
        }
        else
        {
            edx = t2;
            ebx = eax + 0xb10u;
            eax = t5;
            x0 = d4;
            wr32(sp0 - 0x1cu, in_ebp);
            ecx = arg2;
            ebp = rd32(COW_IMG(0x1047bfa8u));
            esi = eax;
            loc_8 = 0x461c4000u;
            loc_c = 0x461c4000u;
            loc_4 = 0xc61c4000u;
L_1006e9ea: ;
            d6 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx + 0x20u) * (double)rdf32(ecx + 8u)) + fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(edx + 0x10u))) + fr(g, (double)rdf32(edx) * (double)rdf32(ecx))) + (double)rdf32(edx + 0x30u));
            d7 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx + 0x28u) * (double)rdf32(ecx + 8u)) + fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(edx + 0x18u))) + fr(g, (double)rdf32(edx + 8u) * (double)rdf32(ecx))) + (double)rdf32(edx + 0x38u));
            d8 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(edx + 4u)) + fr(g, (double)rdf32(edx + 0x24u) * (double)rdf32(ecx + 8u))) + fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(edx + 0x14u))) + (double)rdf32(edx + 0x34u));
            d9 = fr(g, fr(g, fr(g, fr(g, d6 * (double)rdf32(ebx)) + fr(g, d7 * (double)rdf32(ebx + 0x20u))) + fr(g, d8 * (double)rdf32(ebx + 0x10u))) + (double)rdf32(ebx + 0x30u));
            wrf32(sp0 + 0x14u, (float)d9);
            d10 = fr(g, fr(g, fr(g, fr(g, d6 * (double)rdf32(ebx + 4u)) + fr(g, d7 * (double)rdf32(ebx + 0x24u))) + fr(g, d8 * (double)rdf32(ebx + 0x14u))) + (double)rdf32(ebx + 0x34u));
            wrf32(sp0 + 0x10u, (float)d10);
            d11 = fr(g, fr(g, fr(g, fr(g, d7 * (double)rdf32(ebx + 0x2cu)) + fr(g, d8 * (double)rdf32(ebx + 0x1cu))) + fr(g, d6 * (double)rdf32(ebx + 0xcu))) + (double)rdf32(ebx + 0x3cu));
            if (!(d11 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                x1 = d11;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                x1 = d11;
                x1 = -x1;
            }
            if (x1 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                x1 = (double)rdf32(COW_IMG(0x1032961cu));
            }
            d12 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x14u) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(ebp + 0xdc0u));
            d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
            wrf32(sp0 + 0x14u, (float)d12);
            d14 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d13 * (double)rdf32(sp0 + 0x10u))) * (double)rdf32(ebp + 0xdc4u));
            wrf32(sp0 + 0x10u, (float)d14);
            d15 = (double)rdf32(sp0 + 0x14u);
            if (!(d15 < cow_bits2f(loc_c)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, cow_bits2f(loc_c), 2u);
                x1 = d14;
            }
            else
            {
                x1 = d14;
                t16 = rd32(sp0 + 0x14u);
                wr32(sp0 - 0xcu, t16);
                eax = t16;
                loc_c = t16;
            }
            d17 = (double)rdf32(sp0 + 0x14u);
            if ((cow_fsw(g, d17, cow_bits2f(loc_4), 2u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d17, cow_bits2f(loc_4), 2u) & 0x4100u;
            }
            else
            {
                t18 = rd32(sp0 + 0x14u);
                wr32(sp0 - 4u, t18);
                eax = t18;
                loc_4 = t18;
            }
            if (!(x1 < cow_bits2f(loc_8)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, cow_bits2f(loc_8), 2u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, cow_bits2f(loc_8), 2u);
                wrf32(sp0 - 8u, (float)(double)(float)x1);
            }
            if ((cow_fsw(g, x1, x0, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
                x0 = (double)rdf32(sp0 + 0x10u);
            }
            if (esi != 1u)
            {
                ecx = arg3 + ecx;
                esi = esi - 1u;
                loc_8 = rd32(sp0 - 8u);
                goto L_1006e9ea;
            }
            loc_8 = rd32(sp0 - 8u);
        }
        wrf32(arg1, (float)cow_bits2f(loc_c));
        wr32(arg1 + 4u, loc_8);
        wrf32(arg1 + 0xcu, (float)x0);
        wr32(arg1 + 8u, loc_4);
        t19 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t20 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t20 + 0xa90u, t19);
        wr32(t19 * 4u + t20 + 0xa10u, edx);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006e970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
