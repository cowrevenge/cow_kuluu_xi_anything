/* f_0x1011e980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1011e980(Guest* g)
{
    double d11;
    double d18;
    double d19;
    double d20;
    double d26;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_44_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd32(self + 0x4cu) != 0u)
    {
        eax = rd32(self + 0x4cu);
        goto L_1011e9c1;
    }
    eax = rd32(self + 0x4cu);
    wr32(sp0 - 0x50u, self + 0x32u);
    g->eax = eax;
    g->esp = sp0 - 0x4cu;
    t1 = cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, self, in_edx, 1, 1, self + 0x32u);
    t2 = g->edx;
    wr32(sp0 - 0x50u, self + 0x32u);
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x40u, t2, 1, self + 0x32u);
    t3 = g->edx;
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x40u);
    t5 = g->edx;
    wr32(self + 0x4cu, t4);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        ebx = in_ebx;
        ebp = in_ebp;
        goto L_1011ed59;
    }
    edx = t5;
L_1011e9e4: ;
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 0xdu);
    wr32(sp0 - 0x60u, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x64u, t9);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0xdu, 1u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 0xeu);
    wr32(sp0 - 0x60u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x64u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 0xeu, 1u);
    d11 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x44u, (float)d11);
    t12 = rd32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t12);
    ebx = 0u;
    ebp = self + 0xc8u;
    esi = self + 0x60u;
    loc_44_f = d11;
L_1011ea30: ;
    t13 = rd32(esi + 4u);
    t14 = rd32(esi);
    t15 = rd32(esi + 8u);
    wr32(ebx + sp0 - 0x20u, t13);
    wr32(ebx + sp0 - 0x30u, t14);
    wr32(sp0 - 0x58u, arg5);
    wr32(sp0 - 0x5cu, t14);
    wr32(ebx + sp0 - 0x10u, t15);
    g->eax = t14;
    g->esp = sp0 - 0x54u;
    t16 = cow_cdecl(g, COW_IMG(0x101200b0u), 2, t14, arg5);
    wr32(esi, t16);
    t17 = (uint32_t)(int16_t)rd16(ebp - 8u);
    wr32(sp0 + 4u, t17);
    d18 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
    wr32(sp0 + 4u, (uint32_t)(int16_t)rd16(ebp));
    d19 = fr(g, fr(g, d18 + (double)rdf32(sp0 - 0x44u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(esi - 0x10u, (float)d19);
    d20 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(sp0 + 8u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(esi - 0xcu, (float)d20);
    if ((int32_t)(ebx + 4u) < 16)
    {
        ebx = ebx + 4u;
        ebp = ebp + 2u;
        esi = esi + 0x1cu;
        loc_44_f = (double)rdf32(sp0 - 0x44u);
        goto L_1011ea30;
    }
    t21 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t22 = rd32(COW_IMG(0x106218b4u));
    t23 = rd16(COW_IMG(0x106218bau));
    t24 = rd16(COW_IMG(0x106218b6u));
    wr32(sp0 + 4u, t21);
    t25 = (uint32_t)(int16_t)(t23 - t24);
    d26 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wr32(sp0 + 8u, t25);
    t27 = rd32(sp0 - 0x50u);
    t28 = rd32(sp0 - 0x54u);
    wrf32(sp0 + 4u, (float)d26);
    d29 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 + 8u, (float)d29);
    d30 = (double)rdf32(self + 0x50u);
    if (!(d30 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebx = t27;
        ebp = t28;
        goto L_1011eb5b;
    }
    eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ebx = t27;
    ebp = t28;
    d31 = fr(g, (double)rdf32(self + 0x6cu) - (double)rdf32(self + 0x50u));
    if (!(d31 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d31;
        x0 = d31;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d31;
        x0 = d31;
        x1 = -x1;
    }
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    d32 = fr(g, (double)rdf32(self + 0x6cu) - (double)rdf32(COW_IMG(0x1032a3d0u)));
    wr32(self + 0x50u, 0xbf000000u);
    wr32(self + 0x88u, 0xbf000000u);
    d33 = fr(g, (double)rdf32(self + 0x80u) - fr(g, fr(g, d32 / x0) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x64u))));
    d34 = fr(g, fr(g, d32 / x0) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x64u)));
    wrf32(self + 0x64u, (float)d33);
    d35 = fr(g, (double)rdf32(self + 0xb8u) - d34);
    wrf32(self + 0x9cu, (float)d35);
L_1011eb5b: ;
    d36 = (double)rdf32(self + 0x6cu);
    d37 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d36, d37, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d36, d37, 0u) & 0x4100u;
        goto L_1011ebc3;
    }
    eax = cow_fsw(g, d36, d37, 0u) & 0x4100u;
    d38 = fr(g, (double)rdf32(self + 0x6cu) - (double)rdf32(self + 0x50u));
    if (!(d38 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d38;
        x0 = d38;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d38;
        x0 = d38;
        x1 = -x1;
    }
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    d39 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x6cu, (float)d39);
    wrf32(self + 0xa4u, (float)d39);
    d40 = fr(g, fr(g, fr(g, fr(g, d39 - (double)rdf32(self + 0x50u)) / x0) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x64u))) + (double)rdf32(self + 0x64u));
    wrf32(self + 0x80u, (float)d40);
    wrf32(self + 0xb8u, (float)d40);
L_1011ebc3: ;
    d41 = (double)rdf32(self + 0x54u);
    if (!(d41 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1011ec38;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d42 = fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(self + 0x54u));
    if (!(d42 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d42;
        x0 = d42;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d42;
        x0 = d42;
        x1 = -x1;
    }
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    d43 = fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(COW_IMG(0x1032a3d0u)));
    wr32(self + 0x54u, 0xbf000000u);
    wr32(self + 0x70u, 0xbf000000u);
    d44 = fr(g, (double)rdf32(self + 0xa0u) - fr(g, fr(g, d43 / x0) * fr(g, (double)rdf32(self + 0xa0u) - (double)rdf32(self + 0x68u))));
    d45 = fr(g, fr(g, d43 / x0) * fr(g, (double)rdf32(self + 0xa0u) - (double)rdf32(self + 0x68u)));
    wrf32(self + 0x68u, (float)d44);
    d46 = fr(g, (double)rdf32(self + 0xbcu) - d45);
    wrf32(self + 0x84u, (float)d46);
L_1011ec38: ;
    d47 = (double)rdf32(self + 0x8cu);
    d48 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d47, d48, 0u) & 0x4100u) != 0u) goto L_1011ecab;
    eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
    d49 = fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(self + 0x54u));
    if (!(d49 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d49;
        x0 = d49;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d49;
        x0 = d49;
        x1 = -x1;
    }
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    d50 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x8cu, (float)d50);
    wrf32(self + 0xa8u, (float)d50);
    d51 = fr(g, fr(g, fr(g, fr(g, d50 - (double)rdf32(self + 0x54u)) / x0) * fr(g, (double)rdf32(self + 0xa0u) - (double)rdf32(self + 0x68u))) + (double)rdf32(self + 0x68u));
    wrf32(self + 0xa0u, (float)d51);
    wrf32(self + 0xbcu, (float)d51);
L_1011ecab: ;
    if (arg6 != 0u)
    {
        t55 = (uint32_t)((int32_t)arg6 >> 6u) & 3u;
        wr32(sp0 - 0x50u, t55);
        t56 = (uint32_t)((int32_t)arg6 >> 2u) & 3u;
        wr32(sp0 - 0x54u, t56);
        wr32(sp0 - 0x58u, arg6 & 3u);
        wr32(sp0 - 0x5cu, 1u);
        wr32(sp0 - 0x60u, self + 0x50u);
        g->ebx = ebx;
        g->esp = sp0 - 0x4cu;
        cow_fastcall(g, COW_IMG(0x1011f300u), self, t56, 5, self + 0x50u, 1u, arg6 & 3u, t56, t55);
    }
    else
    {
        if (rd8(self + 0x2du) != 0u)
        {
            t52 = rd8(self + 0x30u);
            wr32(sp0 - 0x50u, t52);
            t53 = rd8(self + 0x2fu);
            wr32(sp0 - 0x54u, t53);
            t54 = rd8(self + 0x2eu);
            wr32(sp0 - 0x58u, t54);
            wr32(sp0 - 0x5cu, 1u);
            wr32(sp0 - 0x60u, self + 0x50u);
            g->ebx = ebx;
            g->esp = sp0 - 0x4cu;
            cow_fastcall(g, COW_IMG(0x1011f300u), self, t53, 5, self + 0x50u, 1u, t54, t53, t52);
        }
        else
        {
            eax = (arg6 & 0xffffff00u) | rd8(self + 0x2du);
            g->ebx = ebx;
            g->esp = sp0 - 0x4cu;
            cow_thiscall(g, COW_IMG(0x1011f2d0u), self, 0);
        }
    }
L_1011ed05: ;
    eax = 0u;
    edi = self + 0x64u;
L_1011ed0a: ;
    t57 = rd32(eax + sp0 - 0x30u);
    t58 = rd32(eax + sp0 - 0x20u);
    wr32(edi - 4u, t57);
    t59 = rd32(eax + sp0 - 0x10u);
    wr32(edi, t58);
    wr32(edi + 4u, t59);
    if ((int32_t)(eax + 4u) < 16)
    {
        eax = eax + 4u;
        edi = edi + 0x1cu;
        goto L_1011ed0a;
    }
    wr32(sp0 - 0x50u, 3u);
    wr32(sp0 - 0x54u, 0xdu);
    wr32(sp0 - 0x58u, 0u);
    t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t60);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(rd32(t60) + 0xfcu), rd32(t60), 2, t60, 0u);
    wr32(sp0 - 0x58u, 3u);
    wr32(sp0 - 0x5cu, 0xeu);
    wr32(sp0 - 0x60u, 0u);
    t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x64u, t61);
    g->eax = t61;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t62 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x4cu;
    t63 = cow_thiscall(g, rd32(rd32(t61) + 0xfcu), rd32(t61), 6, t61, 0u, 0xeu, 3u, 0xdu, 3u);
    t64 = g->edx;
    eax = t63;
    edx = t64;
L_1011ed59: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1011e9c1: ;
    if (rd32(eax + 0x40u) == 0u)
    {
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
        eax = ecx;
    }
    wr32(sp0 - 0x50u, eax);
    wr32(sp0 - 0x54u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x58u, t6);
    g->edx = rd32(t6);
    t7 = rd32(t6);
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, rd32(t7 + 0xf4u), t6, 3, t6, 0u, eax);
    t8 = g->edx;
    edx = t8;
    goto L_1011e9e4;
L_1011ed03: ;
    goto L_1011ed05;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011e980(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
