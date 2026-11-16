/* f_0x10181bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10181bb0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d23;
    double d28;
    double d3;
    double d32;
    double d37;
    double d4;
    double d43;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_50_f;
    double loc_54_f;
    double loc_5c_f;
    double loc_60_f;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, in_edi);
    d1 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u)) * (double)rdf32(arg2)) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x20u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(rd32(sp0 + 4u) + 0x10u))) + (double)rdf32(rd32(sp0 + 4u) + 0x30u));
    wrf32(sp0 - 0x60u, (float)d1);
    d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(rd32(sp0 + 4u) + 0x14u)) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 4u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x24u) * (double)rdf32(arg2 + 8u))) + (double)rdf32(rd32(sp0 + 4u) + 0x34u));
    wrf32(sp0 - 0x5cu, (float)(double)(float)d2);
    d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(rd32(sp0 + 4u) + 0x18u)) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x28u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 8u) * (double)rdf32(arg2))) + (double)rdf32(rd32(sp0 + 4u) + 0x38u));
    wrf32(sp0 - 0x58u, (float)(double)(float)d3);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(rd32(sp0 + 4u) + 0x1cu)) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 0xcu) * (double)rdf32(arg2))) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 0x2cu) * (double)rdf32(arg2 + 8u))) + (double)rdf32(rd32(sp0 + 4u) + 0x3cu));
    if (!(d4 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        esi = rd32(sp0 + 4u);
        loc_60_f = d1;
        loc_5c_f = (double)(float)d2;
        x1 = d4;
        x0 = d3;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        esi = rd32(sp0 + 4u);
        loc_60_f = d1;
        loc_5c_f = (double)(float)d2;
        x1 = d4;
        x0 = d3;
        x1 = -x1;
    }
    if ((cow_fsw(g, loc_60_f, x1, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_60_f, x1, 2u) & 0x4100u;
        ecx = 0u;
    }
    else
    {
        eax = cow_fsw(g, loc_60_f, x1, 2u) & 0x4100u;
        ecx = 1u;
    }
    wrf32(sp0 + 4u, (float)-x1);
    d5 = (double)rdf32(sp0 + 4u);
    if (!(loc_60_f < d5))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_60_f, d5, 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_60_f, d5, 2u);
        ecx = ecx | 2u;
    }
    if ((cow_fsw(g, loc_5c_f, x1, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_5c_f, x1, 2u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, loc_5c_f, x1, 2u) & 0x4100u;
        ecx = ecx | 4u;
    }
    d6 = (double)rdf32(sp0 + 4u);
    if (!(loc_5c_f < d6))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_5c_f, d6, 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_5c_f, d6, 2u);
        ecx = ecx | 8u;
    }
    if ((cow_fsw(g, x0, x1, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, x1, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, x1, 1u) & 0x4100u;
        ecx = ecx | 0x10u;
    }
    d7 = (double)rdf32(sp0 + 4u);
    if (!(x0 < d7))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d7, 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d7, 0u);
        ecx = ecx | 0x20u;
    }
    if ((ecx & 0x3fu) != 0u)
    {
        ebx = ecx & 0x3fu;
        goto L_10181cbc;
    }
    return 0u;
L_10181cbc: ;
    d8 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x20u) * (double)rdf32(arg2 + 0x14u)) + fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(esi))) + fr(g, (double)rdf32(esi + 0x10u) * (double)rdf32(arg2 + 0x10u))) + (double)rdf32(esi + 0x30u));
    wrf32(sp0 - 0x54u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(esi + 4u)) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(esi + 0x24u))) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(esi + 0x14u))) + (double)rdf32(esi + 0x34u));
    wrf32(sp0 - 0x50u, (float)d9);
    d10 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) * (double)rdf32(arg2 + 0xcu)) + fr(g, (double)rdf32(esi + 0x28u) * (double)rdf32(arg2 + 0x14u))) + fr(g, (double)rdf32(esi + 0x18u) * (double)rdf32(arg2 + 0x10u))) + (double)rdf32(esi + 0x38u));
    wrf32(sp0 - 0x4cu, (float)d10);
    d11 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(esi + 0xcu)) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(esi + 0x2cu))) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(esi + 0x1cu))) + (double)rdf32(esi + 0x3cu));
    if (!(d11 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        loc_54_f = d8;
        loc_50_f = d9;
        x1 = d11;
        x0 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) * (double)rdf32(arg2 + 0xcu)) + fr(g, (double)rdf32(esi + 0x28u) * (double)rdf32(arg2 + 0x14u))) + fr(g, (double)rdf32(esi + 0x18u) * (double)rdf32(arg2 + 0x10u))) + (double)rdf32(esi + 0x38u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        loc_54_f = d8;
        loc_50_f = d9;
        x1 = d11;
        x0 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) * (double)rdf32(arg2 + 0xcu)) + fr(g, (double)rdf32(esi + 0x28u) * (double)rdf32(arg2 + 0x14u))) + fr(g, (double)rdf32(esi + 0x18u) * (double)rdf32(arg2 + 0x10u))) + (double)rdf32(esi + 0x38u));
        x1 = -x1;
    }
    if ((cow_fsw(g, loc_54_f, x1, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_54_f, x1, 2u) & 0x4100u;
        ecx = 0u;
    }
    else
    {
        eax = cow_fsw(g, loc_54_f, x1, 2u) & 0x4100u;
        ecx = 1u;
    }
    wrf32(sp0 + 4u, (float)-x1);
    d12 = (double)rdf32(sp0 + 4u);
    if (!(loc_54_f < d12))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_54_f, d12, 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_54_f, d12, 2u);
        ecx = ecx | 2u;
    }
    if ((cow_fsw(g, loc_50_f, x1, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_50_f, x1, 2u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, loc_50_f, x1, 2u) & 0x4100u;
        ecx = ecx | 4u;
    }
    d13 = (double)rdf32(sp0 + 4u);
    if (!(loc_50_f < d13))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_50_f, d13, 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_50_f, d13, 2u);
        ecx = ecx | 8u;
    }
    if ((cow_fsw(g, x0, x1, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, x1, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, x1, 1u) & 0x4100u;
        ecx = ecx | 0x10u;
    }
    d14 = (double)rdf32(sp0 + 4u);
    if (x0 < d14)
    {
        ecx = ecx | 0x20u;
    }
    if ((ebx & ecx) != 0u)
    {
        ebx = ebx & ecx;
        goto L_10181dbb;
    }
    return 0u;
L_10181dbb: ;
    d15 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x20u) * (double)rdf32(arg2 + 0x20u)) + fr(g, (double)rdf32(esi + 0x10u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0x18u) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
    wrf32(sp0 - 0x48u, (float)d15);
    d16 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(arg2 + 0x18u) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
    wrf32(sp0 - 0x44u, (float)d16);
    d17 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) * (double)rdf32(arg2 + 0x18u)) + fr(g, (double)rdf32(esi + 0x28u) * (double)rdf32(arg2 + 0x20u))) + fr(g, (double)rdf32(esi + 0x18u) * (double)rdf32(arg2 + 0x1cu))) + (double)rdf32(esi + 0x38u));
    wrf32(sp0 - 0x40u, (float)d17);
    d18 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(esi + 0x2cu)) + fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0x18u) * (double)rdf32(esi + 0xcu))) + (double)rdf32(esi + 0x3cu));
    wrf32(sp0 + 4u, (float)d18);
    t19 = rd32(sp0 + 4u);
    wr32(sp0 - 0x70u, t19);
    wr32(sp0 - 0x74u, sp0 - 0x48u);
    g->ecx = sp0 - 0x48u;
    g->esp = sp0 - 0x6cu;
    t20 = cow_call_regs(g, COW_IMG(0x10181fe0u), t19, g->ecx, g->edx, 1, 2, sp0 - 0x48u, t19);
    t21 = g->ecx;
    if ((ebx & t20) != 0u)
    {
        ecx = t21;
        ebx = ebx & t20;
        goto L_10181e4f;
    }
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    return 0u;
L_10181e4f: ;
    wr32(sp0 - 0x70u, arg2 + 0x24u);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x3cu);
    g->esp = sp0 - 0x6cu;
    t22 = cow_cdecl(g, COW_IMG(0x10181f60u), 3, sp0 - 0x3cu, esi, arg2 + 0x24u);
    d23 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d23);
    t24 = rd32(sp0 + 4u);
    wr32(sp0 - 0x7cu, t24);
    wr32(sp0 - 0x80u, sp0 - 0x3cu);
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x78u;
    t25 = cow_call_regs(g, COW_IMG(0x10181fe0u), t22, g->ecx, g->edx, 1, 2, sp0 - 0x3cu, t24);
    t26 = g->edx;
    if ((ebx & t25) != 0u)
    {
        edx = t26;
        ebx = ebx & t25;
        goto L_10181e83;
    }
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    return 0u;
L_10181e83: ;
    wr32(sp0 - 0x70u, arg2 + 0x30u);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x10181f60u), 3, sp0 - 0x30u, esi, arg2 + 0x30u);
    t27 = g->ecx;
    d28 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d28);
    t29 = rd32(sp0 + 4u);
    wr32(sp0 - 0x7cu, t29);
    wr32(sp0 - 0x80u, sp0 - 0x30u);
    g->esp = sp0 - 0x78u;
    t30 = cow_call_regs(g, COW_IMG(0x10181fe0u), sp0 - 0x30u, g->ecx, g->edx, 1, 2, sp0 - 0x30u, t29);
    if ((ebx & t30) != 0u)
    {
        ebx = ebx & t30;
        goto L_10181eb7;
    }
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    return 0u;
L_10181eb7: ;
    wr32(sp0 - 0x70u, arg2 + 0x3cu);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x24u);
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x10181f60u), 3, sp0 - 0x24u, esi, arg2 + 0x3cu);
    t31 = g->edx;
    d32 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d32);
    t33 = rd32(sp0 + 4u);
    wr32(sp0 - 0x7cu, t33);
    wr32(sp0 - 0x80u, sp0 - 0x24u);
    g->ecx = sp0 - 0x24u;
    g->esp = sp0 - 0x78u;
    t34 = cow_call_regs(g, COW_IMG(0x10181fe0u), t33, g->ecx, g->edx, 1, 2, sp0 - 0x24u, t33);
    t35 = g->ecx;
    if ((ebx & t34) != 0u)
    {
        ecx = t35;
        ebx = ebx & t34;
        goto L_10181eeb;
    }
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    return 0u;
L_10181eeb: ;
    wr32(sp0 - 0x70u, arg2 + 0x48u);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x18u);
    g->esp = sp0 - 0x6cu;
    t36 = cow_cdecl(g, COW_IMG(0x10181f60u), 3, sp0 - 0x18u, esi, arg2 + 0x48u);
    d37 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d37);
    t38 = rd32(sp0 + 4u);
    wr32(sp0 - 0x7cu, t38);
    wr32(sp0 - 0x80u, sp0 - 0x18u);
    g->ecx = t38;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x78u;
    t39 = cow_call_regs(g, COW_IMG(0x10181fe0u), t36, g->ecx, g->edx, 1, 2, sp0 - 0x18u, t38);
    t40 = g->ecx;
    t41 = g->edx;
    if ((ebx & t39) != 0u)
    {
        ecx = t40;
        edx = t41;
        ebx = ebx & t39;
        goto L_10181f1f;
    }
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    return 0u;
L_10181f1f: ;
    wr32(sp0 - 0x70u, arg2 + 0x54u);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0xcu);
    g->esp = sp0 - 0x6cu;
    t42 = cow_cdecl(g, COW_IMG(0x10181f60u), 3, sp0 - 0xcu, esi, arg2 + 0x54u);
    d43 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d43);
    t44 = rd32(sp0 + 4u);
    wr32(sp0 - 0x7cu, t44);
    wr32(sp0 - 0x80u, sp0 - 0xcu);
    g->esp = sp0 - 0x78u;
    t45 = cow_call_regs(g, COW_IMG(0x10181fe0u), t42, g->ecx, g->edx, 1, 2, sp0 - 0xcu, t44);
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    return (t45 & ebx) != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181bb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
