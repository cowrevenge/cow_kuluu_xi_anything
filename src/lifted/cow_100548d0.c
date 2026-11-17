/* f_0x100548d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100548d0(Guest* g)
{
    double d1;
    double d104;
    double d108;
    double d112;
    double d17;
    double d18;
    double d19;
    double d20;
    double d24;
    double d25;
    double d26;
    double d27;
    double d31;
    double d32;
    double d38;
    double d42;
    double d45;
    double d46;
    double d47;
    double d48;
    double d54;
    double d58;
    double d72;
    double d73;
    double d80;
    double d84;
    double d88;
    double d94;
    double d95;
    double d96;
    double d99;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_38;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t97;
    uint32_t t98;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x48u, self);
    d1 = (double)(float)fr(g, (double)rdf32(self + 0x138u) * (double)rdf32(self + 0x134u));
    wrf32(sp0 - 0x48u, (float)d1);
    wr32(sp0 - 0x4cu, sp0 - 0x2cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t2 = cow_call_regs(g, COW_IMG(0x1003e330u), sp0 - 0x2cu, self + 0xf8u, g->edx, 0, 2, sp0 - 0x2cu, cow_f2bits(d1));
    t3 = g->edx;
    t4 = rd32(t2);
    wr32(COW_IMG(0x1047bc0cu), t4);
    g->eax = t4;
    g->edx = t3;
    t5 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_100549bd;
    eax = t5;
    ecx = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t8 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t9 = g->edx;
    if (t8 == 0u) goto L_100549bd;
    eax = t8;
    edx = t9;
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t10 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t11 = rd32(t10 + 0x30u);
    wr32(sp0 - 0x28u, t11);
    t12 = rd32(t10 + 0x34u);
    wr32(sp0 - 0x24u, t12);
    t13 = rd32(t10 + 0x38u);
    wr32(sp0 - 0x20u, t13);
    g->eax = t13;
    g->edx = t12;
    t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t15 = g->edx;
    t16 = rd32(t14 + 0x4cu);
    wr32(sp0 - 0x30u, t16);
    d17 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(t14 + 0x44u));
    wrf32(sp0 - 0x28u, (float)d17);
    d18 = (double)(float)fr(g, d17 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(sp0 - 0x28u, (float)d18);
    d19 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x24u) - (double)rdf32(t14 + 0x48u)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(sp0 - 0x24u, (float)d19);
    d20 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x20u) - cow_bits2f(t16)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(sp0 - 0x20u, (float)d20);
    g->eax = t14 + 0x44u;
    g->edx = t15;
    t21 = cow_thiscall(g, COW_IMG(0x10074700u), sp0 - 0x28u, 0);
    t22 = g->ecx;
    t23 = g->edx;
    cow_stdcall(g, COW_IMG(0x10014d80u), 0);
    d24 = cow_take_float(g);
    d25 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) * -d24);
    wrf32(sp0 - 0x28u, (float)d25);
    d26 = (double)(float)fr(g, (double)rdf32(sp0 - 0x24u) * -d24);
    wrf32(sp0 - 0x24u, (float)d26);
    d27 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) * -d24);
    wrf32(sp0 - 0x20u, (float)d27);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_100549d5: ;
    d31 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wrf32(sp0 - 0x48u, (float)d31);
    d32 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wrf32(sp0 - 0x4cu, (float)d32);
    t33 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0x50u, t33);
    t34 = rd32(COW_IMG(0x1047bbb4u)) + 0x10u;
    wr32(sp0 - 0x54u, t34);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, sp0 - 0x1cu);
    wr32(sp0 - 0x60u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t35 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x44u;
    t36 = cow_thiscall(g, rd32(t35 + 0x80u), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x28u, sp0 - 0x1cu, 1u, t34, t33, cow_f2bits(d32), cow_f2bits(d31));
    t37 = g->edx;
    d38 = (double)rdf32(sp0 - 0x14u);
    if (d38 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t36 & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t37;
    }
    else
    {
        edx = t37;
        g->eax = rd32(COW_IMG(0x1047bfa8u));
        g->edx = edx;
        t39 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x44u;
        t40 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t39 + 0xdc8u), 0);
        t41 = g->edx;
        d42 = (double)(float)fr(g, (double)(int32_t)rd32(t40 + 8u) * (double)rdf32(COW_IMG(0x1032b088u)));
        wrf32(sp0 - 0x3cu, (float)d42);
        g->eax = rd32(COW_IMG(0x1047bfa8u));
        t43 = rd32(COW_IMG(0x1047bfa8u));
        t44 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t43 + 0xdc8u), 0);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 1u);
        wr32(sp0 - 0x54u, rd32(COW_IMG(0x10456d58u)));
        wr32(sp0 - 0x58u, rd32(COW_IMG(0x10456d50u)));
        d45 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(sp0 - 0x3cu));
        wrf32(sp0 - 0x10u, (float)d45);
        d46 = (double)(float)fr(g, (double)rdf32(sp0 - 0x18u) - fr(g, (double)(int32_t)rd32(t44 + 0xcu) * (double)rdf32(COW_IMG(0x1032b088u))));
        wrf32(sp0 - 0xcu, (float)d46);
        d47 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) + (double)rdf32(sp0 - 0x3cu));
        wrf32(sp0 - 8u, (float)d47);
        d48 = (double)(float)fr(g, (double)rdf32(sp0 - 0x18u) + fr(g, (double)(int32_t)rd32(t44 + 0xcu) * (double)rdf32(COW_IMG(0x1032b088u))));
        wrf32(sp0 - 4u, (float)d48);
        g->ecx = rd32(COW_IMG(0x10456d58u));
        g->edx = rd32(COW_IMG(0x10456d50u));
        t49 = rd32(COW_IMG(0x10456d58u));
        t50 = rd32(COW_IMG(0x10456d50u));
        g->esp = sp0 - 0x58u;
        t51 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
        t52 = g->ecx;
        t53 = g->edx;
        wr32(sp0 - 0x5cu, t52);
        wr32(sp0 - 0x3cu, (uint16_t)t51);
        d54 = (double)(float)(double)(int32_t)(uint16_t)t51;
        wrf32(sp0 - 0x5cu, (float)d54);
        g->eax = (uint16_t)t51;
        g->ecx = t52;
        g->edx = t53;
        g->esp = sp0 - 0x5cu;
        t55 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
        t56 = g->ecx;
        t57 = g->edx;
        wr32(sp0 - 0x60u, t56);
        wr32(sp0 - 0x3cu, (uint16_t)t55);
        d58 = (double)(float)(double)(int32_t)(uint16_t)t55;
        wrf32(sp0 - 0x60u, (float)d58);
        t59 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x64u, t59);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        g->eax = t59;
        g->edx = t57;
        g->esp = sp0 - 0x44u;
        t60 = cow_thiscall(g, COW_IMG(0x1006c280u), self + 0x17fu, 9, sp0 - 0x10u, t59, cow_f2bits(d58), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), 1u, 0u, 0u);
        t61 = g->edx;
        if (rd32(self + 0x104u) == 0u)
        {
            eax = rd32(self + 0x104u);
            edx = t61;
        }
        else
        {
            eax = rd32(self + 0x104u);
            edx = t61;
            edi = t60;
            if ((int32_t)edi > 0)
            {
                wr32(sp0 - 0x48u, rd32(COW_IMG(0x1047bc0cu)));
                wr32(sp0 - 0x4cu, 0x3cu);
                t62 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x50u, t62);
                g->edx = rd32(COW_IMG(0x1047bc0cu));
                t63 = rd32(COW_IMG(0x1047bc0cu));
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t62, 0x3cu, t63);
                t64 = g->edx;
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                g->edx = t64;
                t65 = rd32(COW_IMG(0x1047bfa8u));
                t66 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t65 + 0xdc8u), 0);
                t67 = g->edx;
                t68 = rd32(t66 + 0xcu);
                wr32(sp0 - 0x3cu, t68);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t69 = rd32(COW_IMG(0x1047bfa8u));
                t70 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t69 + 0xdc8u), 0);
                t71 = rd32(t70 + 8u);
                wr32(sp0 - 0x38u, t71);
                if (rd32(self + 0x104u) == 0u)
                {
                    loc_38 = t71;
                    eax = 0u;
                }
                else
                {
                    eax = rd32(self + 0x104u);
                    loc_38 = t71;
                    eax = rd32(eax);
                }
                wr32(sp0 - 0x48u, 0u);
                d72 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x3cu) - (double)rdf32(sp0 - 0x18u));
                wrf32(sp0 - 0x4cu, (float)d72);
                d73 = (double)(float)fr(g, (double)(int32_t)loc_38 - (double)rdf32(sp0 - 0x1cu));
                wrf32(sp0 - 0x50u, (float)d73);
                t74 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x54u, t74);
                t75 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x58u, t75);
                wr32(sp0 - 0x5cu, edi);
                g->edx = t74;
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, COW_IMG(0x1003ebf0u), eax, 6, edi, t75, t74, cow_f2bits(d73), cow_f2bits(d72), 0u);
                t76 = g->edx;
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t77 = rd32(COW_IMG(0x1047bfa8u));
                t78 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t77 + 0xdc8u), 0);
                t79 = (uint32_t)((int32_t)(rd32(t78 + 8u) - (uint32_t)((int32_t)rd32(t78 + 8u) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t79);
                d80 = (double)(float)fr(g, (double)(int32_t)t79 - (double)rdf32(sp0 - 0x1cu));
                wrf32(sp0 - 0x3cu, (float)d80);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t81 = rd32(COW_IMG(0x1047bfa8u));
                t82 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t81 + 0xdc8u), 0);
                t83 = (uint32_t)((int32_t)(rd32(t82 + 0xcu) - (uint32_t)((int32_t)rd32(t82 + 0xcu) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t83);
                d84 = (double)(float)fr(g, (double)(int32_t)t83 - (double)rdf32(sp0 - 0x18u));
                wrf32(sp0 - 0x2cu, (float)d84);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t85 = rd32(COW_IMG(0x1047bfa8u));
                t86 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t85 + 0xdc8u), 0);
                t87 = (uint32_t)((int32_t)(rd32(t86 + 8u) - (uint32_t)((int32_t)rd32(t86 + 8u) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t87);
                d88 = (double)(float)fr(g, (double)rdf32(sp0 - 0x3cu) / (double)(int32_t)t87);
                wrf32(sp0 - 0x3cu, (float)d88);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t89 = rd32(COW_IMG(0x1047bfa8u));
                t90 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
                t91 = cow_thiscall(g, COW_IMG(0x10009e00u), t90, 0);
                t92 = g->ecx;
                t93 = (uint32_t)((int32_t)(rd32(t91 + 0xcu) - (uint32_t)((int32_t)rd32(t91 + 0xcu) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t93);
                d94 = fr(g, (double)rdf32(sp0 - 0x2cu) / (double)(int32_t)t93);
                d95 = (double)rdf32(sp0 - 0x3cu);
                d96 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, sqrt(fr(g, fr(g, d94 * d94) + fr(g, d95 * d95)))) * (double)rdf32(COW_IMG(0x1032b6d4u))));
                if (!(d96 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (t93 & 0xffff0000u) | (uint16_t)cow_fsw(g, d96, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    ecx = t92;
                    x0 = d96;
                }
                else
                {
                    eax = (t93 & 0xffff0000u) | (uint16_t)cow_fsw(g, d96, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    ecx = t92;
                    x0 = d96;
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
                wr32(sp0 - 0x2cu, (uint32_t)((int32_t)edi >> 3u));
                t97 = rd32(self + 0x19cu);
                wr32(sp0 - 0x38u, t97);
                if (rd32(self + 0x19cu) != 0u)
                {
                    loc_38 = t97;
                    x0 = fr(g, fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)(int32_t)(uint32_t)((int32_t)edi >> 3u)) * (double)rdf32(COW_IMG(0x1032a778u)));
                }
                else
                {
                    x0 = fr(g, fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)(int32_t)(uint32_t)((int32_t)edi >> 3u)) * (double)rdf32(COW_IMG(0x1032a778u)));
                    wr32(sp0 - 0x38u, 0x80808080u);
                    loc_38 = 0x80808080u;
                }
                t98 = (uint8_t)rd32(sp0 - 0x36u);
                wr32(sp0 - 0x2cu, t98);
                d99 = fr(g, (double)(int32_t)t98 * x0);
                if (!(d99 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d99, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                    edx = t98;
                    x1 = d99;
                    g->ecx = ecx;
                    g->edx = edx;
                    fpush(g, x1);
                    g->esp = sp0 - 0x44u;
                    t100 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t101 = g->ecx;
                    t102 = g->edx;
                    eax = (uint8_t)t100;
                    ecx = t101;
                    edx = t102;
                    loc_38 = rd32(sp0 - 0x38u);
                }
                else
                {
                    edx = t98;
                    x1 = d99;
                    eax = 0u;
                }
                wr8(sp0 - 0x36u, (uint8_t)eax);
                t103 = (uint8_t)rd32(sp0 - 0x37u);
                wr32(sp0 - 0x2cu, t103);
                d104 = fr(g, (double)(int32_t)t103 * x0);
                if (!(d104 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (t103 & 0xffff0000u) | (uint16_t)cow_fsw(g, d104, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                    x1 = d104;
                    g->edx = edx;
                    fpush(g, x1);
                    g->esp = sp0 - 0x44u;
                    t105 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t106 = g->edx;
                    eax = (uint8_t)t105;
                    edx = t106;
                }
                else
                {
                    x1 = d104;
                    eax = 0u;
                }
                wr8(sp0 - 0x37u, (uint8_t)eax);
                t107 = (uint8_t)rd32(sp0 - 0x38u);
                wr32(sp0 - 0x2cu, t107);
                d108 = fr(g, (double)(int32_t)t107 * x0);
                if (!(d108 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d108, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                    ecx = t107;
                    x1 = d108;
                    g->ecx = ecx;
                    fpush(g, x1);
                    g->esp = sp0 - 0x44u;
                    t109 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t110 = g->ecx;
                    eax = (uint8_t)t109;
                    ecx = t110;
                }
                else
                {
                    ecx = t107;
                    x1 = d108;
                    eax = 0u;
                }
                t111 = rd32(sp0 - 0x35u);
                wr8(sp0 - 0x38u, (uint8_t)eax);
                wr32(sp0 - 0x2cu, (uint8_t)t111);
                d112 = fr(g, x0 * (double)(int32_t)(uint8_t)t111);
                if (!(d112 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d112, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    edx = (uint8_t)t111;
                    x0 = d112;
                    g->ecx = ecx;
                    g->edx = edx;
                    fpush(g, x0);
                    g->esp = sp0 - 0x44u;
                    t113 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t114 = g->ecx;
                    t115 = g->edx;
                    eax = (uint8_t)t113;
                    ecx = t114;
                    edx = t115;
                }
                else
                {
                    edx = (uint8_t)t111;
                    x0 = d112;
                    eax = 0u;
                }
                wr8(sp0 - 0x35u, (uint8_t)eax);
                t116 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x48u, t116);
                g->eax = t116;
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t117 = cow_cdecl(g, COW_IMG(0x10014f70u), 1, t116);
                t118 = g->edx;
                eax = t117;
                edx = t118;
            }
        }
    }
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->edx = edx;
    return eax;
L_100549bd: ;
    t28 = rd32(self + 0x54u);
    wr32(sp0 - 0x28u, t28);
    t29 = rd32(self + 0x58u);
    wr32(sp0 - 0x24u, t29);
    t30 = rd32(self + 0x5cu);
    wr32(sp0 - 0x20u, t30);
    loc_40 = in_esi;
    loc_44 = in_edi;
    goto L_100549d5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100548d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100548d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
