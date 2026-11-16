/* f_0x10271300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10271300(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d14;
    double d15;
    double d17;
    double d2;
    double d23;
    double d24;
    double d25;
    double d26;
    double d29;
    double d33;
    double d34;
    double d35;
    double d36;
    double d4;
    double d40;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_74_f;
    double loc_78_f;
    uint32_t t13;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, in_edi);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    d1 = fr(g, (double)rdf32(COW_IMG(0x10340b14u)) / (double)(int32_t)arg5);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329cecu)), 1u) & 0x4100u) != 0u)
    {
        ecx = (rd32(COW_IMG(0x1099b0f4u)) << 5u) - rd32(COW_IMG(0x1099b0f4u));
        ebx = COW_IMG(0x1099b1d0u) + rd32(COW_IMG(0x1099b0f4u)) * 0x34u;
        esi = COW_IMG(0x1099b33cu) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu;
        x0 = d1;
    }
    else
    {
        ecx = (rd32(COW_IMG(0x1099b0f4u)) << 5u) - rd32(COW_IMG(0x1099b0f4u));
        ebx = COW_IMG(0x1099b1d0u) + rd32(COW_IMG(0x1099b0f4u)) * 0x34u;
        esi = COW_IMG(0x1099b33cu) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu;
        x0 = d1;
        d2 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10329cecu)) / x0);
        wrf32(sp0 - 0x7cu, (float)d2);
    }
    wr32(sp0 - 0x74u, -arg1);
    wr32(sp0 - 0x8cu, ecx);
    t3 = -rd32(sp0 + 8u);
    d4 = fr(g, (double)(int32_t)-arg1 * (double)rdf32(sp0 - 0x7cu));
    wr32(sp0 + 8u, t3);
    d5 = (double)(float)fr(g, d4 * (double)rdf32(COW_IMG(0x10340b10u)));
    wrf32(sp0 - 0x8cu, (float)d5);
    wr32(sp0 - 0x90u, sp0 - 0x60u);
    g->eax = -arg1;
    g->ecx = sp0 - 0x60u;
    g->edx = t3;
    g->esp = sp0 - 0x88u;
    t6 = cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x60u, cow_f2bits(d5));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x8cu, t7);
    d9 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 - 0x7cu));
    wrf32(sp0 - 0x78u, (float)d9);
    d10 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1032cf58u)));
    wrf32(sp0 - 0x74u, (float)d10);
    d11 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 - 0x7cu)) + (double)rdf32(COW_IMG(0x1099cdb4u)));
    if ((cow_fsw(g, d11, d10, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d11, d10, 1u) & 0x4100u;
        ecx = t7;
        edx = t8;
        loc_78_f = d9;
        x0 = d11;
        d14 = (double)(float)-(double)rdf32(COW_IMG(0x1099b11cu));
        wrf32(sp0 - 0x74u, (float)d14);
        if (!(x0 < d14))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d14, 0u);
            d17 = (double)(float)fr(g, loc_78_f * (double)rdf32(COW_IMG(0x1032a840u)));
            wrf32(sp0 - 0x8cu, (float)d17);
            wr32(sp0 - 0x90u, sp0 - 0x70u);
            g->ecx = sp0 - 0x70u;
            g->esp = sp0 - 0x88u;
            cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x70u, cow_f2bits(d17));
            t18 = g->ecx;
            ecx = t18;
            x0 = fr(g, (double)rdf32(sp0 - 0x78u) + (double)rdf32(COW_IMG(0x1099cdb4u)));
        }
        else
        {
            loc_74_f = d14;
            d15 = (double)(float)fr(g, fr(g, loc_74_f - (double)rdf32(COW_IMG(0x1099cdb4u))) * (double)rdf32(COW_IMG(0x1032a840u)));
            wrf32(sp0 - 0x8cu, (float)d15);
            wr32(sp0 - 0x90u, sp0 - 0x70u);
            g->ecx = ecx;
            g->esp = sp0 - 0x88u;
            cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x70u, cow_f2bits(d15));
            t16 = g->ecx;
            ecx = t16;
            x0 = -(double)rdf32(COW_IMG(0x1099b11cu));
        }
    }
    else
    {
        eax = cow_fsw(g, d11, d10, 1u) & 0x4100u;
        ecx = t7;
        loc_74_f = d10;
        x0 = d11;
        d12 = (double)(float)fr(g, fr(g, loc_74_f - (double)rdf32(COW_IMG(0x1099cdb4u))) * (double)rdf32(COW_IMG(0x1032a840u)));
        wrf32(sp0 - 0x8cu, (float)d12);
        wr32(sp0 - 0x90u, sp0 - 0x70u);
        g->ecx = ecx;
        g->esp = sp0 - 0x88u;
        cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x70u, cow_f2bits(d12));
        t13 = g->ecx;
        ecx = t13;
        x0 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1032cf58u)));
    }
    wrf32(COW_IMG(0x1099cdb4u), (float)x0);
    wr32(sp0 - 0x8cu, esi + 0x68u);
    wr32(sp0 - 0x90u, sp0 - 0x60u);
    wr32(sp0 - 0x94u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->esp = sp0 - 0x88u;
    t19 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x50u, sp0 - 0x60u, esi + 0x68u);
    wr32(sp0 - 0x98u, sp0 - 0x70u);
    wr32(sp0 - 0x9cu, sp0 - 0x50u);
    wr32(sp0 - 0xa0u, esi + 0x68u);
    g->ecx = sp0 - 0x70u;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x94u;
    t20 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, esi + 0x68u, sp0 - 0x50u, sp0 - 0x70u);
    t21 = g->ecx;
    t22 = g->edx;
    d23 = fr(g, (double)rdf32(COW_IMG(0x1099cdb8u)) - fr(g, fr(g, (double)(int32_t)arg4 * (double)rdf32(sp0 - 0x7cu)) * (double)rdf32(COW_IMG(0x1032a334u))));
    wrf32(COW_IMG(0x1099cdb8u), (float)d23);
    if ((cow_fsw(g, d23, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d23, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x100u;
        ecx = t21;
        edx = t22;
        edi = esi + 0x68u;
    }
    else
    {
        eax = cow_fsw(g, d23, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x100u;
        ecx = t21;
        edx = t22;
        edi = esi + 0x68u;
        wr32(COW_IMG(0x1099cdb8u), 0x3f800000u);
    }
    if (!((double)rdf32(COW_IMG(0x1099cdb8u)) <= rdf64(COW_IMG(0x1032a108u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1099cdb8u)), rdf64(COW_IMG(0x1032a108u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1099cdb8u)), rdf64(COW_IMG(0x1032a108u)), 0u);
        wr32(COW_IMG(0x1099cdb8u), 0u);
    }
    d24 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1099b110u)) - (double)rdf32(COW_IMG(0x1099b10cu))) * (double)rdf32(COW_IMG(0x1099cdb8u))) + (double)rdf32(COW_IMG(0x1099b10cu)));
    wrf32(esi + 0x78u, (float)d24);
    d25 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1032cf58u)));
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1099cdb4u)), d25, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1099cdb4u)), d25, 1u) & 0x4100u;
        x0 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1032cf58u)));
    }
    else
    {
        x0 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1032cf58u)));
        wr32(sp0 - 0x8cu, ecx);
        d26 = (double)(float)fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1099cdb4u))) * (double)rdf32(COW_IMG(0x1032a840u)));
        wrf32(sp0 - 0x8cu, (float)d26);
        wr32(sp0 - 0x90u, sp0 - 0x70u);
        g->eax = sp0 - 0x70u;
        g->edx = edx;
        g->esp = sp0 - 0x88u;
        t27 = cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x70u, cow_f2bits(d26));
        t28 = g->edx;
        wr32(sp0 - 0x94u, sp0 - 0x70u);
        wr32(sp0 - 0x98u, edi);
        wr32(sp0 - 0x9cu, edi);
        d29 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1032cf58u)));
        wrf32(COW_IMG(0x1099cdb4u), (float)d29);
        g->ecx = sp0 - 0x70u;
        g->edx = t28;
        g->esp = sp0 - 0x90u;
        t30 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, edi, edi, sp0 - 0x70u);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    }
    wr32(sp0 - 0x8cu, esi);
    d33 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1099b120u)));
    d34 = fr(g, (double)rdf32(COW_IMG(0x1099b108u)) - (double)rdf32(COW_IMG(0x1099b104u)));
    wrf32(esi + 0x5cu, (float)d33);
    d35 = fr(g, (double)rdf32(COW_IMG(0x1099b108u)) - fr(g, (double)rdf32(COW_IMG(0x1099cdb8u)) * d34));
    wrf32(esi + 0x60u, (float)d35);
    d36 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(COW_IMG(0x1099cdb8u))) * (double)rdf32(COW_IMG(0x1099b124u)));
    wrf32(esi + 0x64u, (float)d36);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t37 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x90u, esi);
    d40 = fr(g, (double)rdf32(COW_IMG(0x1099b114u)) - fr(g, fr(g, (double)rdf32(COW_IMG(0x1099b114u)) - (double)rdf32(COW_IMG(0x1099b118u))) * (double)rdf32(COW_IMG(0x1099cdb8u))));
    wrf32(ebx + 0x14u, (float)d40);
    g->ecx = t38;
    g->esp = sp0 - 0x8cu;
    t41 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi);
    t42 = g->ecx;
    wr32(sp0 - 0x94u, sp0 - 0x40u);
    g->ecx = t42;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x40u);
    t43 = g->ecx;
    t44 = g->edx;
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0xbf800000u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = t44;
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x10280670u), 4, sp0 - 0x40u, 0xbf800000u, 0u, 0u);
    t45 = g->edx;
    wr32(sp0 - 0xa8u, sp0 - 0x40u);
    wr32(sp0 - 0xacu, esi + 0x1cu);
    wr32(sp0 - 0xb0u, esi + 0x1cu);
    g->esp = sp0 - 0xa4u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, esi + 0x1cu, esi + 0x1cu, sp0 - 0x40u);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x84u);
    g->edi = rd32(sp0 - 0x88u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10271300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
