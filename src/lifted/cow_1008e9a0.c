/* f_0x1008e9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008e9a0(Guest* g)
{
    double d101;
    double d108;
    double d109;
    double d110;
    double d116;
    double d12;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t120;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    if (rd32(self + 0x78u) != 0u)
    {
        t1 = rd32(self + 0x12cu) & 0xefffffffu;
        t2 = rd32(self + 0x170u);
        wr32(self + 0x12cu, t1);
        if (t2 != 0x31u)
        {
            eax = t1;
            ecx = t2;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = t1;
            ecx = t2;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        t3 = rd32(self + 0x120u) & 0xff7fffffu;
        wr32(self + 0x120u, t3);
        if ((int8_t)(eax >> 8u) >= 0)
        {
            edx = t3;
        }
        else
        {
            edx = t3;
            t4 = (eax & 0xffff0000u) | rd16(self + 0x74u);
            g->esi = self;
            g->eax = t4;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t5 = cow_cdecl(g, COW_IMG(0x100aec70u), 3, t4, in_ebx, in_esi);
            t6 = g->ecx;
            t7 = g->edx;
            if ((uint8_t)t5 == 0u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
            }
            else
            {
                ecx = t6;
                edx = t7;
                t8 = (rd32(self + 0x12cu) & 0xffff00ffu) | (rd32(self + 0x12cu) >> 8u & 0x7fu) << 8u;
                wr32(self + 0x12cu, t8);
                eax = t8;
            }
        }
        if (rd16(self + 0x11cu) != 0u)
        {
            if (rd16(self + 0x11eu) != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t9 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t10 = g->ecx;
                t11 = g->edx;
                d12 = cow_take_float(g);
                g->edx = t11;
                fpush(g, d12);
                t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
                t14 = g->edx;
                wr16(self + 0x11eu, (uint16_t)(rd16(self + 0x11eu) - (uint16_t)t13));
                if ((int16_t)rd16(self + 0x11eu) > 0)
                {
                    eax = t13;
                    edx = t14;
                }
                else
                {
                    eax = t13;
                    edx = t14;
                    wr16(self + 0x11cu, 0u);
                }
            }
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x1008e290u), eax, self, g->edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        if ((uint8_t)ebx == 1u)
        {
            ecx = t16;
            edx = t17;
        }
        else
        {
            eax = t15;
            edx = t17;
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t18 = cow_thiscall(g, COW_IMG(0x1008db40u), self, 0);
            t19 = g->edx;
            g->edx = t19;
            t20 = cow_thiscall(g, COW_IMG(0x1008e3f0u), self, 0);
            t21 = g->edx;
            g->edx = t21;
            t22 = cow_thiscall(g, COW_IMG(0x1008cd90u), self, 0);
            t23 = g->edx;
            g->edx = t23;
            t24 = cow_call_regs(g, COW_IMG(0x1008da00u), t22, self, g->edx, 1, 0);
            t25 = g->edx;
            t26 = cow_fastcall(g, COW_IMG(0x10087f00u), self, t25, 0);
            t27 = g->edx;
            t28 = cow_call_regs(g, COW_IMG(0x10087e80u), t26, self, t27, 1, 0);
            t29 = g->edx;
            g->ebx = ebx;
            g->edx = t29;
            t30 = cow_thiscall(g, COW_IMG(0x100883e0u), self, 0);
            t31 = g->edx;
            g->edx = t31;
            t32 = cow_thiscall(g, COW_IMG(0x10089100u), self, 0);
            t33 = g->edx;
            g->edx = t33;
            t34 = cow_thiscall(g, COW_IMG(0x1008e740u), self, 0);
            t35 = g->edx;
            t36 = g->cf;
            t37 = g->pf;
            t38 = g->af;
            t39 = g->zf;
            t40 = g->sf;
            t41 = g->of;
            g->edx = t35;
            t42 = cow_thiscall(g, COW_IMG(0x1008e870u), self, 0);
            t43 = g->edx;
            g->cf = g->cf;
            g->pf = g->pf;
            g->af = g->af;
            g->zf = g->zf;
            g->sf = g->sf;
            g->of = g->of;
            t44 = cow_call_regs(g, COW_IMG(0x1009f4c0u), t42, self, t43, 1, 0);
            t45 = g->edx;
            g->edx = t45;
            cow_thiscall(g, COW_IMG(0x1008b410u), self, 0);
            t46 = g->ecx;
            t47 = g->edx;
            ecx = t46;
            edx = t47;
        }
        if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
        {
            eax = rd32(self + 0x120u);
            if ((rd32(self + 0x78u) & 0xff000000u) == 0u)
            {
                if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u)
                {
                    if (eax >> 8u & 1u)
                    {
                        wr32(self + 0x16cu, 4u);
                    }
                }
            }
            if (rd32(self + 0xa0u) == 0u)
            {
                eax = rd32(self + 0xa0u);
            }
            else
            {
                eax = rd32(self + 0xa0u);
                if ((rd32(self + 0x1d0u) >> 8u & 4u) == 0u) goto L_1008eb14;
                ecx = rd32(self + 0x1d0u);
                if (rd8(self + 0x1ffu) < 8u) goto L_1008eafe;
                ecx = (ecx & 0xffffff00u) | rd8(self + 0x1ffu);
                if ((uint8_t)ecx <= 9u) goto L_1008eb14;
L_1008eafe: ;
                wr8(eax + 0x100u, 1u);
                t48 = rd32(self + 0xa0u);
                wr32(t48 + 0x88u, rd32(t48 + 0x88u) | 0x20u);
                eax = t48;
            }
L_1008eb2f: ;
            t50 = rd8(rd32(self + 0xa0u) + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            t51 = cow_call_regs(g, COW_IMG(0x1008b460u), eax, self, g->edx, 0, 1, t50);
            t52 = g->ecx;
            t53 = g->edx;
            if ((uint8_t)t51 == 0u)
            {
                ecx = t52;
                edx = t53;
            }
            else
            {
                eax = t51;
                edx = t53;
                ebx = t50;
                if (rd8(self + 0xeeu) == 3u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
                    goto L_1008eb72;
                }
                eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
                if ((uint8_t)eax == 4u) goto L_1008eb72;
                if ((uint8_t)eax == 5u) goto L_1008eb72;
                g->edx = edx;
                t54 = rd32(self + 0xa0u);
                g->esp = sp0 - 8u;
                t55 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, t54, g->edx, 1, 0);
                t56 = g->ecx;
                t57 = g->edx;
                if ((uint8_t)t55 == 0u)
                {
                    ecx = t56;
                    edx = t57;
                    goto L_1008ec6e;
                }
                eax = t55;
                edx = t57;
L_1008eb72: ;
                if ((int8_t)rd8(self + 0x120u) >= 0)
                {
                    ebp = rd32(self + 0x16cu);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
                    ebp = rd32(self + 0x16cu);
                    if (rd8(COW_IMG(0x104807f5u)) != 0u)
                    {
                        ebp = rd32(self + 0x174u);
                    }
                }
                if (ebp == rd32(self + 0x170u))
                {
                    eax = rd32(self + 0x170u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t92 = cow_thiscall(g, COW_IMG(0x1008c480u), self, 0);
                    t93 = g->edx;
                    wr32(self + 0x170u, ebp);
                    eax = t92;
                    edx = t93;
                }
                else
                {
                    eax = rd32(self + 0x170u);
                    if (rd16(self + 0x74u) != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
                    {
                        edx = rd16(self + 0x74u);
                    }
                    else
                    {
                        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                        edx = rd16(self + 0x74u);
                        if (eax != 0x21u)
                        {
                            if (eax == 7u)
                            {
                                g->eax = eax;
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0xcu;
                                t79 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
                                t80 = g->ecx;
                                t81 = g->edx;
                                if ((t79 & 0x40000u) == 0u)
                                {
                                    eax = t79;
                                    ecx = t80;
                                    edx = t81;
                                    loc_10 = 0x20000u;
                                }
                                else
                                {
                                    eax = t79;
                                    ecx = t80;
                                    edx = t81;
                                    loc_10 = 0x40000u;
                                }
                                g->ebx = ebx;
                                g->eax = eax;
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0xcu;
                                t82 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, loc_10);
                                t83 = g->ecx;
                                t84 = g->edx;
                                g->edx = t84;
                                t85 = cow_stdcall(g, COW_IMG(0x10160930u), 0);
                                t86 = g->edx;
                                eax = t85;
                                edx = t86;
                            }
                        }
                        else
                        {
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            t58 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
                            t59 = g->ecx;
                            t60 = g->edx;
                            if ((t58 & 0x10000u) != 0u)
                            {
                                eax = t58;
                                ecx = t59;
                                edx = t60;
                                goto L_1008ebec;
                            }
                            eax = t58;
                            ecx = t59;
                            edx = t60;
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            t61 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
                            t62 = g->ecx;
                            t63 = g->edx;
                            if ((t61 & 0x100000u) != 0u)
                            {
                                eax = t61;
                                ecx = t62;
                                edx = t63;
                                goto L_1008ebec;
                            }
                            ecx = t62;
                            edx = t63;
                            t64 = rd32(COW_IMG(0x10456a28u));
                            wr32(t64 + 0x18u, rd32(t64 + 0x18u) & 0xfffffff7u);
                            g->ebx = ebx;
                            g->eax = t64;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            t65 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
                            t66 = g->ecx;
                            t67 = g->edx;
                            eax = t65;
                            ecx = t66;
                            edx = t67;
                            loc_14 = 0x80000u;
L_1008ebfb: ;
                            g->ebx = ebx;
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t71 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, loc_14);
                            t72 = g->ecx;
                            t73 = g->edx;
                            g->ecx = t72;
                            g->edx = t73;
                            g->esp = sp0 - 0xcu;
                            t74 = cow_stdcall(g, COW_IMG(0x10160a50u), 0);
                            t75 = g->ecx;
                            t76 = g->edx;
                            g->edx = t76;
                            t77 = cow_stdcall(g, COW_IMG(0x101609c0u), 0);
                            t78 = g->edx;
                            eax = t77;
                            edx = t78;
                        }
                    }
                    t87 = rd32(self + 0x170u);
                    wr32(self + 0x170u, ebp);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t88 = cow_thiscall(g, COW_IMG(0x1008c480u), self, 0);
                    t89 = g->edx;
                    g->edx = t89;
                    t90 = cow_thiscall(g, COW_IMG(0x1008c6c0u), self, 1, t87);
                    t91 = g->edx;
                    eax = t90;
                    edx = t91;
                }
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x1008b460u), eax, self, g->edx, 0, 1, ebx);
                t94 = g->ecx;
                t95 = g->edx;
                ecx = t94;
                edx = t95;
            }
        }
L_1008ec6e: ;
        if ((int8_t)rd32(self + 0x120u) >= 0)
        {
            eax = rd32(self + 0x120u);
            goto L_1008ec97;
        }
        eax = rd32(self + 0x120u);
        if (rd8(COW_IMG(0x104807f5u)) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
            goto L_1008ec97;
        }
        if ((eax & 0x80000u) == 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t96 = cow_thiscall(g, COW_IMG(0x100bcd10u), rd32(self + 0xd4u), 0);
            t97 = g->edx;
            eax = t96;
            edx = t97;
        }
L_1008ecfe: ;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t105 = cow_call_regs(g, COW_IMG(0x1008e4d0u), eax, self, g->edx, 1, 0);
        t106 = g->ecx;
        t107 = g->edx;
        d108 = fr(g, (double)rdf32(self + 4u) - (double)rdf32(COW_IMG(0x10485f88u)));
        d109 = fr(g, (double)rdf32(self + 0xcu) - (double)rdf32(COW_IMG(0x10485f90u)));
        g->edx = t107;
        d110 = fr(g, fr(g, fr(g, d108 * d108) + fr(g, d109 * d109)) * (double)rdf32(COW_IMG(0x1032d6c0u)));
        fpush(g, d110);
        t111 = cow_call_regs(g, COW_IMG(0x10311c6cu), t105, g->ecx, g->edx, 1, 0);
        t112 = g->edx;
        if (t111 < 0x400u)
        {
            eax = t111;
            edx = t112;
        }
        else
        {
            edx = t112;
            eax = 0x3ffu;
        }
        if (rd32(COW_IMG(0x10486020u) + eax * 4u) != 0u)
        {
            ecx = rd32(COW_IMG(0x10486020u) + eax * 4u);
            wr32(self + 0xe8u, ecx);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10486020u) + eax * 4u);
            wr32(self + 0xe8u, ecx);
        }
        wr32(COW_IMG(0x10486020u) + eax * 4u, self);
        if (rd8(self + 0x1feu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x1feu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t113 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t114 = g->ecx;
            t115 = g->edx;
            d116 = cow_take_float(g);
            g->ecx = t114;
            g->edx = t115;
            fpush(g, d116);
            t117 = cow_call_regs(g, COW_IMG(0x10311c6cu), t113, g->ecx, g->edx, 1, 0);
            t118 = g->ecx;
            t119 = g->edx;
            wr16(self + 0x1fcu, (uint16_t)(rd16(self + 0x1fcu) - (uint16_t)t117));
            if ((int16_t)rd16(self + 0x1fcu) < 0)
            {
                eax = t117;
                ecx = t118;
                edx = t119;
                t120 = (eax & 0xffff0000u) | rd16(self + 0x74u);
                g->esi = self;
                g->esp = sp0 - 4u;
                cow_cdecl(g, COW_IMG(0x100aec70u), 1, t120);
                wr16(self + 0x1fcu, 0x258u);
            }
        }
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_1008eb14: ;
    wr8(eax + 0x100u, 0u);
    t49 = (rd32(rd32(self + 0xa0u) + 0x88u) & 0xffffff00u) | (rd32(rd32(self + 0xa0u) + 0x88u) & 0xdfu);
    wr32(rd32(self + 0xa0u) + 0x88u, t49);
    eax = t49;
    goto L_1008eb2f;
L_1008ebec: ;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x10000u);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    loc_14 = 0x100000u;
    goto L_1008ebfb;
L_1008ec97: ;
    d98 = fr(g, (double)rdf32(COW_IMG(0x1048557cu)) - (double)rdf32(self + 4u));
    d99 = fr(g, (double)rdf32(COW_IMG(0x10485584u)) - (double)rdf32(self + 0xcu));
    wrf32(self + 0xd8u, (float)fr(g, fr(g, d98 * d98) + fr(g, d99 * d99)));
    g->eax = eax;
    g->esp = sp0 - 4u;
    t100 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    if (rd32(self + 0x78u) == rd32(t100 + 4u))
    {
        eax = t100;
        edx = rd32(self + 0x78u);
    }
    else
    {
        eax = t100;
        edx = rd32(self + 0x78u);
        d101 = (double)rdf32(self + 0xd8u);
        if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1047d698u)), d101, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1047d698u)), d101, 0u) & 0x4100u;
        }
        else
        {
            t102 = rd32(self + 0xd8u);
            wr32(COW_IMG(0x1047d698u), t102);
            t103 = rd32(self + 0x74u);
            wr32(COW_IMG(0x10485f80u), t103);
            t104 = rd32(self + 0x78u);
            wr32(COW_IMG(0x10485f84u), t104);
            eax = t102;
            edx = t104;
        }
    }
    goto L_1008ecfe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008e9a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
