/* f_0x100a7b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a7b80(Guest* g)
{
    double d11;
    double d15;
    double d19;
    double d2;
    double d21;
    double d25;
    double d26;
    double d33;
    double d34;
    double d47;
    double d53;
    double d54;
    double d57;
    double d61;
    double d62;
    double d63;
    double d65;
    double d66;
    double d69;
    double d70;
    double d71;
    double d72;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_74_f;
    double loc_78_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t55;
    uint32_t t56;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t64;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t1 = g->edx;
    d2 = cow_take_float(g);
    wrf32(sp0 - 0x70u, (float)(double)(float)d2);
    g->edx = t1;
    t3 = cow_thiscall(g, COW_IMG(0x10157cf0u), rd32(COW_IMG(0x1057876cu)), 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        edx = t4;
        edi = t3;
        goto L_100a7bb8;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t5 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_100a7fe6;
    }
    edx = t6;
    edi = t5;
L_100a7bb8: ;
    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    g->eax = rd32(edi);
    t9 = rd32(edi);
    g->esp = sp0 - 0x98u;
    t10 = cow_thiscall(g, rd32(t9 + 0x1bcu), edi, 0);
    d11 = (double)(float)fr(g, (double)rdf32(self + 0xd4u) - (double)rdf32(t10));
    wrf32(sp0 - 0x88u, (float)d11);
    g->edx = rd32(edi);
    t12 = rd32(edi);
    t13 = cow_thiscall(g, rd32(t12 + 0x1bcu), edi, 0);
    t14 = g->edx;
    d15 = (double)(float)fr(g, (double)rdf32(self + 0xd8u) - (double)rdf32(t13 + 4u));
    wrf32(sp0 - 0x84u, (float)d15);
    g->eax = rd32(edi);
    g->edx = t14;
    t16 = rd32(edi);
    t17 = cow_thiscall(g, rd32(t16 + 0x1bcu), edi, 0);
    t18 = g->edx;
    wr32(sp0 - 0x9cu, edi);
    d19 = (double)(float)fr(g, (double)rdf32(self + 0xdcu) - (double)rdf32(t17 + 8u));
    wrf32(sp0 - 0x80u, (float)d19);
    g->edx = t18;
    cow_stdcall(g, COW_IMG(0x100aaef0u), 1, edi);
    t20 = g->edx;
    d21 = cow_take_float(g);
    wrf32(sp0 - 0x74u, (float)(double)(float)d21);
    wr32(sp0 - 0x9cu, self);
    g->ecx = self;
    g->edx = t20;
    t22 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
    t23 = g->ecx;
    t24 = g->edx;
    d25 = cow_take_float(g);
    d26 = (double)(float)fr(g, d25 + (double)rdf32(sp0 - 0x74u));
    wrf32(sp0 - 0x74u, (float)d26);
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (t22 & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        edx = t24;
        loc_74_f = d26;
        goto L_100a7dd5;
    }
    eax = (t22 & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    ecx = t23;
    edx = t24;
    loc_74_f = d26;
    if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a7c53;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7dd5;
    }
L_100a7c53: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t27 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t28 = g->ecx;
    t29 = g->edx;
    g->ecx = t28;
    g->edx = t29;
    t30 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t31 = g->ecx;
    t32 = g->edx;
    d33 = (double)(float)fr(g, atan2(-(double)rdf32(t30 + 0x2cu), (double)rdf32(t27 + 0x24u)));
    wrf32(sp0 - 0x78u, (float)d33);
    if ((double)rdf32(arg1) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t32;
        ebx = t27;
        loc_78_f = d33;
        goto L_100a7c94;
    }
    eax = (t30 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t31;
    edx = t32;
    ebx = t27;
    loc_78_f = d33;
    d34 = (double)rdf32(arg1 + 8u);
    if (d34 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a7d12;
L_100a7c94: ;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t35 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t38 = g->edx;
    t39 = rd32(sp0 - 0x78u);
    wr32(sp0 - 0x9cu, t39);
    t40 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t39);
    wr32(sp0 - 0x9cu, arg1);
    wr32(sp0 - 0xa0u, sp0 - 0x4cu);
    g->edx = sp0 - 0x4cu;
    cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x4cu, arg1);
    t41 = g->edx;
    wr32(sp0 - 0x9cu, sp0 - 0x4cu);
    wr32(sp0 - 0xa0u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->ecx = sp0 - 0x4cu;
    g->esp = sp0 - 0x94u;
    t42 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x4cu, sp0 - 0x4cu, rd32(sp0 - 0x98u));
    t43 = g->ecx;
    wr32(sp0 - 0xa4u, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xa8u, sp0 - 0x5cu);
    g->edx = sp0 - 0x5cu;
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x5cu, COW_IMG(0x10487f64u), sp0 - 0x4cu);
    t44 = g->edx;
    wr32(sp0 - 0xacu, sp0 - 0x5cu);
    wr32(sp0 - 0xb0u, sp0 - 0x4cu);
    g->edx = t44;
    g->esp = sp0 - 0xa8u;
    t45 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x4cu, sp0 - 0x5cu);
    t46 = g->edx;
    d47 = cow_take_float(g);
    if (!(d47 < (double)rdf32(COW_IMG(0x1032b15cu))))
    {
        eax = (t45 & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x1032b15cu)), 0u);
        edx = t46;
    }
    else
    {
        eax = (t45 & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x1032b15cu)), 0u);
        edx = t46;
        wr32(sp0 - 0x9cu, 0u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t48 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    }
    g->ecx = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
L_100a7d12: ;
    wr32(sp0 - 0x9cu, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xa0u, COW_IMG(0x10487f64u));
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, COW_IMG(0x10487f64u), COW_IMG(0x10487f64u));
    t52 = g->ecx;
    d53 = cow_take_float(g);
    wr32(sp0 - 0xa4u, sp0 - 0x88u);
    wr32(sp0 - 0xa8u, sp0 - 0x6cu);
    d54 = (double)(float)fr(g, sqrt(d53));
    wrf32(sp0 - 0x78u, (float)d54);
    g->eax = sp0 - 0x6cu;
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0x9cu;
    t55 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x6cu, sp0 - 0x88u, COW_IMG(0x10487f64u));
    t56 = g->edx;
    d57 = (double)(float)-(double)rdf32(sp0 - 0x78u);
    wrf32(sp0 - 0x9cu, (float)d57);
    wr32(sp0 - 0xa0u, sp0 - 0x6cu);
    wr32(sp0 - 0xa4u, COW_IMG(0x10487f64u));
    g->ecx = sp0 - 0x6cu;
    g->edx = t56;
    g->esp = sp0 - 0x98u;
    t58 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, COW_IMG(0x10487f64u), sp0 - 0x6cu, cow_f2bits(d57));
    t59 = g->ecx;
    t60 = g->edx;
    d61 = (double)rdf32(sp0 - 0x80u);
    d62 = (double)rdf32(sp0 - 0x88u);
    d63 = fr(g, fr(g, sqrt(fr(g, fr(g, d61 * d61) + fr(g, d62 * d62)))) - (double)rdf32(sp0 - 0x74u));
    if (!(d63 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t58 & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t59;
        edx = t60;
        x0 = d63;
        d65 = fr(g, (double)rdf32(sp0 - 0x78u) * (double)rdf32(sp0 - 0x70u));
        if (!(x0 < d65))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d65, 0u);
            wr32(sp0 - 0x9cu, COW_IMG(0x10487f64u));
            wr32(sp0 - 0xa0u, arg1);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t68 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f64u));
            eax = t68;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d65, 0u);
            wr32(sp0 - 0x9cu, ecx);
            d66 = (double)(float)fr(g, (double)rdf32(sp0 - 0x78u) * (double)rdf32(COW_IMG(0x1032dfa4u)));
            wrf32(sp0 - 0x9cu, (float)d66);
            wr32(sp0 - 0xa0u, sp0 - 0x6cu);
            wr32(sp0 - 0xa4u, arg1);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t67 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, arg1, sp0 - 0x6cu, cow_f2bits(d66));
            eax = t67;
        }
    }
    else
    {
        eax = (t58 & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t59;
        edx = t60;
        x0 = d63;
        wr32(sp0 - 0x9cu, COW_IMG(0x10487f98u));
        wr32(sp0 - 0xa0u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t64 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f98u));
        eax = t64;
    }
L_100a7edd: ;
    g->eax = eax;
    g->edx = rd32(edi);
    t97 = rd32(edi);
    t98 = rd32(self + 0x598u);
    g->esp = sp0 - 0x98u;
    t99 = cow_thiscall(g, rd32(t97 + 0x1bcu), edi, 0);
    t100 = g->edx;
    wr32(sp0 - 0x9cu, t99);
    wr32(sp0 - 0xa0u, arg1);
    t101 = cow_thiscall(g, COW_IMG(0x100a80d0u), self, 2, arg1, t99);
    wr32(self + 0x598u, t101);
    if (t98 != 2u)
    {
        eax = t101;
        ebx = t98;
        goto L_100a7f06;
    }
    eax = t101;
    zf = eax == 4u;
L_100a7f0e: ;
    if (zf)
    {
        wr8(self + 0x5b1u, 2u);
    }
L_100a7f17: ;
    if ((int8_t)rd8(self + 0x5b1u) > 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5b1u);
        wr32(self + 0x598u, 1u);
        wr8(self + 0x5b1u, (uint8_t)((uint8_t)eax - 1u));
    }
    t102 = rd32(self + 0xecu);
    wr32(sp0 - 0x54u, t102);
    t103 = rd32(self + 0xe4u);
    wr32(sp0 - 0x5cu, t103);
    t104 = rd32(self + 0xf0u);
    wr32(sp0 - 0x50u, t104);
    g->edx = t104;
    g->esp = sp0 - 0x98u;
    t105 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t106 = g->edx;
    wr32(sp0 - 0x9cu, t105);
    g->edx = t106;
    t107 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t105);
    t108 = g->edx;
    if ((uint8_t)t107 != 0u) goto L_100a7f85;
    edx = t108;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t109 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t110 = g->edx;
    wr32(sp0 - 0x9cu, t109);
    t111 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t109);
    if ((uint8_t)t111 != 0u) goto L_100a7f85;
    x1 = -(double)rdf32(sp0 - 0x6cu);
    x0 = -(double)rdf32(sp0 - 0x64u);
L_100a7fa9: ;
    t112 = rd32(sp0 - 0x54u);
    t113 = rd32(sp0 - 0x5cu);
    t114 = rd32(sp0 - 0x50u);
    wr32(self + 0xecu, t112);
    wr32(sp0 - 0x9cu, arg1);
    wr32(self + 0xe4u, t113);
    wr32(self + 0xf0u, t114);
    wrf32(self + 0xe8u, (float)-fr(g, atan2(x0, x1)));
    g->eax = t113;
    g->esp = sp0 - 0x98u;
    t115 = cow_thiscall(g, COW_IMG(0x100a8000u), self, 1, arg1);
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x98u);
    return t115;
L_100a7dd5: ;
    d69 = (double)rdf32(sp0 - 0x80u);
    d70 = (double)rdf32(sp0 - 0x88u);
    d71 = fr(g, sqrt(fr(g, fr(g, d69 * d69) + fr(g, d70 * d70))));
    if (!(d71 < (double)rdf32(COW_IMG(0x1032a378u))))
    {
        x0 = d71;
    }
    else
    {
        x0 = d71;
        x0 = (double)rdf32(COW_IMG(0x1032a378u));
    }
    d72 = (double)(float)-fr(g, (double)rdf32(arg1 + 8u) / x0);
    wrf32(sp0 - 0x70u, (float)d72);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t73 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t74 = g->edx;
    g->edx = t74;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t75 = g->edx;
    t76 = rd32(sp0 - 0x70u);
    wr32(sp0 - 0x9cu, t76);
    g->eax = t76;
    g->edx = t75;
    t77 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t76);
    t78 = g->edx;
    wr32(sp0 - 0x9cu, sp0 - 0x88u);
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x88u);
    t79 = g->ecx;
    wr32(sp0 - 0x9cu, sp0 - 0x88u);
    wr32(sp0 - 0xa0u, sp0 - 0x6cu);
    g->eax = sp0 - 0x6cu;
    g->esp = sp0 - 0x94u;
    t80 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x6cu, sp0 - 0x88u, rd32(sp0 - 0x98u));
    d81 = (double)rdf32(sp0 - 0x80u);
    d82 = (double)rdf32(sp0 - 0x88u);
    d83 = fr(g, sqrt(fr(g, fr(g, d81 * d81) + fr(g, d82 * d82))));
    d84 = (double)rdf32(sp0 - 0x74u);
    if (!(d83 < d84))
    {
        eax = (t80 & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, d84, 0u);
        goto L_100a7e83;
    }
    eax = (t80 & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, d84, 0u);
    if ((cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100a7eb0;
    }
    eax = cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
L_100a7e83: ;
    d85 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x6cu) * (double)rdf32(arg1)) + (double)rdf32(sp0 - 0x88u));
    wrf32(sp0 - 0x88u, (float)d85);
    d86 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x68u) * (double)rdf32(arg1)) + (double)rdf32(sp0 - 0x84u));
    wrf32(sp0 - 0x84u, (float)d86);
    d87 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x64u) * (double)rdf32(arg1)) + (double)rdf32(sp0 - 0x80u));
    wrf32(sp0 - 0x80u, (float)d87);
L_100a7eb0: ;
    g->eax = eax;
    g->edx = rd32(edi);
    t88 = rd32(edi);
    g->esp = sp0 - 0x98u;
    t89 = cow_thiscall(g, rd32(t88 + 0x1bcu), edi, 0);
    t90 = g->ecx;
    t91 = g->edx;
    wr32(sp0 - 0x9cu, t89);
    wr32(sp0 - 0xa0u, sp0 - 0x88u);
    g->eax = sp0 - 0x88u;
    g->edx = t91;
    t92 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x88u, t89);
    t93 = g->edx;
    wr32(sp0 - 0xa4u, self + 0xd4u);
    wr32(sp0 - 0xa8u, sp0 - 0x88u);
    wr32(sp0 - 0xacu, arg1);
    g->edx = t93;
    g->esp = sp0 - 0xa0u;
    t94 = cow_cdecl(g, COW_IMG(0x10027120u), 3, arg1, sp0 - 0x88u, self + 0xd4u);
    t95 = g->edx;
    g->esp = sp0 - 0x98u;
    t96 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t96;
    goto L_100a7edd;
L_100a7f06: ;
    if (ebx != 4u) goto L_100a7f17;
    zf = eax == 2u;
    goto L_100a7f0e;
L_100a7f85: ;
    if (rd32(self + 0x598u) == 4u) goto L_100a7fa3;
    eax = rd32(self + 0x598u);
    if (eax == 2u) goto L_100a7fa3;
    x1 = -(double)rdf32(sp0 - 0x6cu);
    x0 = -(double)rdf32(sp0 - 0x64u);
    goto L_100a7fa9;
L_100a7fa3: ;
    x1 = (double)rdf32(arg1);
    x0 = (double)rdf32(arg1 + 8u);
    goto L_100a7fa9;
L_100a7fe6: ;
    wr32(sp0 - 0x94u, 1u);
    g->eax = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x90u;
    t8 = cow_thiscall(g, rd32(t7 + 0x334u), self, 1, 1u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a7b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a7b80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
