/* f_0x1015ef60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015ef60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_4;
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
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t12;
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
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(rd32(COW_IMG(0x10456a28u))) == rd32(self + 0x64u))
    {
        eax = rd32(COW_IMG(0x10456a28u));
        edx = in_edx;
        ebp = rd32(rd32(COW_IMG(0x10456a28u)));
        loc_4 = self & 0xffffffu;
        goto L_1015f03e;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ebp = rd32(rd32(COW_IMG(0x10456a28u)));
    wr8(self + 0xaeu, 0u);
    if (ebp > 0xe0u) goto L_1015efc0;
    t1 = rd32(COW_IMG(0x1015f2c4u) + rd8(COW_IMG(0x1015f2f0u) + ebp) * 4u);
    switch (t1 - RD)
    {
    case 0x1015ef98u: goto L_1015ef98;
    case 0x1015efabu: goto L_1015efab;
    case 0x1015efb9u: goto L_1015efb9;
    case 0x1015efc0u: goto L_1015efc0;
    case 0x1015efc5u: edx = in_edx; loc_4 = self & 0xffffffu; goto L_1015efc5;
    case 0x1015efd2u: goto L_1015efd2;
    case 0x1015efe5u: goto L_1015efe5;
    case 0x1015f014u: goto L_1015f014;
    case 0x1015f01fu: ecx = rd8(COW_IMG(0x1015f2f0u) + ebp); goto L_1015f01f;
    case 0x1015f026u: ecx = rd8(COW_IMG(0x1015f2f0u) + ebp); goto L_1015f026;
    default: rt_fatal(g, COW_IMG(0x1015ef91u), "switch");
    }
    return;
L_1015ef98: ;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, in_edx, 0, 1, 0x200u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    loc_4 = (self & 0xffffffu) | 0x1000000u;
L_1015efc5: ;
    if (rd32(self + 0x64u) != 0x40u) goto L_1015f02d;
    loc_10 = 0x400u;
L_1015f037: ;
    g->esp = sp0 - 0xcu;
    t22 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, edx, 0, 1, loc_10);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_1015f03e: ;
    if (rd8(self + 0xacu) != 0u)
    {
        if (ebp == 0x60u)
        {
            if (rd32(COW_IMG(0x104dfd98u)) != 0u)
            {
                if (rd32(COW_IMG(0x1047d3f0u)) != 0u)
                {
                    eax = rd32(COW_IMG(0x1047d3f0u));
                    g->esp = sp0 - 0xcu;
                    t24 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, edx, 0, 1, 4u);
                    t25 = g->edx;
                    g->edx = t25;
                    cow_call_regs(g, COW_IMG(0x1015eef0u), t24, g->ecx, g->edx, 1, 0);
                    t26 = g->edx;
                    wr8(self + 0xacu, 0u);
                    edx = t26;
                }
            }
        }
    }
    wr32(self + 0x64u, ebp);
    if (rd32(COW_IMG(0x104dfd98u)) == rd32(COW_IMG(0x106218f8u)))
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        if (eax == 0u)
        {
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, edx, 0, 1, 8u);
            t27 = g->edx;
            eax = rd32(COW_IMG(0x104dfd98u));
            edx = t27;
        }
    }
    wr32(COW_IMG(0x106218f8u), eax);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t29 = g->ecx;
    t30 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
    }
    else
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        if (rd32(eax + 0x70u) == 0u)
        {
            eax = rd32(eax + 0x70u);
        }
        else
        {
            eax = rd32(eax + 0x70u);
            if (rd32(eax + 0x170u) == rd32(self + 0x68u))
            {
                edi = rd32(eax + 0x170u);
                eax = rd32(self + 0x68u);
                goto L_1015f0e1;
            }
            edi = rd32(eax + 0x170u);
            eax = rd32(self + 0x68u);
            if (edi == 1u)
            {
                ecx = edi - 1u;
                goto L_1015f0cf;
            }
            ecx = edi - 1u;
            if (eax != 1u) goto L_1015f0e1;
            loc_18 = 0x40u;
L_1015f0da: ;
            g->esp = sp0 - 0x14u;
            t34 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, edx, 0, 1, loc_18);
            t35 = g->ecx;
            t36 = g->edx;
            eax = t34;
            ecx = t35;
            edx = t36;
L_1015f0e1: ;
            wr32(self + 0x68u, edi);
        }
    }
L_1015f0e4: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t37 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 == rd8(self + 0x62u))
    {
        ecx = t38;
        edx = t39;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t37;
    }
    else
    {
        eax = (t37 & 0xffffff00u) | rd8(self + 0x62u);
        edx = t39;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t37;
        if ((uint8_t)ebx == 0u)
        {
            loc_18 = 0x1000u;
        }
        else
        {
            loc_18 = 0x800u;
        }
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, edx, 0, 1, loc_18);
        t40 = g->ecx;
        t41 = g->edx;
        ecx = t40;
        edx = t41;
    }
    wr8(self + 0x62u, (uint8_t)ebx);
    if (ebp == 0x60u)
    {
        eax = ebp - 0x60u;
        goto L_1015f11f;
    }
    eax = ebp - 0x60u;
    if (eax != 0x70u)
    {
        eax = eax - 0x70u;
        goto L_1015f17e;
    }
    eax = eax - 0x70u;
L_1015f11f: ;
    g->edx = edx;
    g->esp = sp0;
    t42 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x56u, 1u, 0xffffffffu, in_esi, in_ebp, loc_4);
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 1u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
    }
    else
    {
        eax = t42;
        edx = t44;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t45 = cow_call_regs(g, COW_IMG(0x101606f0u), eax, self, g->edx, 1, 0);
        t46 = g->edx;
        t47 = (t45 & 0xffffff00u) | (uint8_t)((uint8_t)t45 + 1u);
        g->edx = t46;
        t48 = cow_call_regs(g, COW_IMG(0x10160710u), t47, self, g->edx, 0, 1, t47);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    g->edx = edx;
    g->esp = sp0;
    t51 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xfu, 1u, 0xffffffffu, in_esi, in_ebp, loc_4);
    t52 = g->ecx;
    t53 = g->edx;
    if ((uint8_t)t51 != 1u)
    {
        eax = t51;
        ecx = t52;
        edx = t53;
    }
    else
    {
        eax = t51;
        edx = t53;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t54 = cow_call_regs(g, COW_IMG(0x10160700u), eax, self, g->edx, 1, 0);
        t55 = g->ecx;
        t56 = g->edx;
        if ((uint8_t)t54 == 0u)
        {
            eax = t54;
            ecx = t55;
            edx = t56;
        }
        else
        {
            eax = t54;
            edx = t56;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t57 = cow_call_regs(g, COW_IMG(0x101606f0u), eax, self, g->edx, 1, 0);
            t58 = g->edx;
            t59 = (t57 & 0xffffff00u) | (uint8_t)((uint8_t)t57 + 1u);
            g->edx = t58;
            t60 = cow_call_regs(g, COW_IMG(0x10160710u), t59, self, g->edx, 0, 1, t59);
            t61 = g->ecx;
            t62 = g->edx;
            g->ecx = t61;
            g->edx = t62;
            g->esp = sp0 - 0x10u;
            t63 = cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
            t64 = g->ecx;
            t65 = g->edx;
            eax = t63;
            ecx = t64;
            edx = t65;
        }
    }
L_1015f17e: ;
    if (loc_4 >> 0x18u == 0u)
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t66 = cow_call_regs(g, COW_IMG(0x10160710u), eax, self, g->edx, 0, 1, 0u);
        t67 = g->ecx;
        t68 = g->edx;
        eax = t66;
        ecx = t67;
        edx = t68;
    }
    if (ebp != 0x60u) goto L_1015f2aa;
    g->edx = edx;
    g->esp = sp0;
    t69 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x13u, 1u, 0xffffffffu, in_esi, in_ebp, loc_4);
    t70 = g->ecx;
    t71 = g->edx;
    if ((uint8_t)t69 != 1u)
    {
        eax = t69;
        ecx = t70;
        edx = t71;
    }
    else
    {
        edx = t71;
        g->edx = edx;
        t72 = rd32(COW_IMG(0x10662d40u));
        g->esp = sp0 - 0xcu;
        t73 = cow_thiscall(g, COW_IMG(0x101b5c90u), t72, 0);
        t74 = g->ecx;
        t75 = g->edx;
        if ((uint8_t)t73 != 0u)
        {
            eax = t73;
            ecx = t74;
            edx = t75;
        }
        else
        {
            ecx = t74;
            edx = t75;
            if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
            {
                eax = rd32(COW_IMG(0x1057876cu));
                ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u);
            }
            else
            {
                eax = rd32(COW_IMG(0x1057876cu));
                if (rd32(eax + 0xc4u) != 0u)
                {
                    ecx = rd32(eax + 0xc4u);
                }
                else
                {
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t76 = cow_call_regs(g, COW_IMG(0x10160700u), eax, self, g->edx, 1, 0);
                    t77 = g->ecx;
                    t78 = g->edx;
                    if ((uint8_t)t76 != 0u)
                    {
                        eax = t76;
                        ecx = t77;
                        edx = t78;
                    }
                    else
                    {
                        eax = t76;
                        ecx = t77;
                        edx = t78;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        t79 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
                        t80 = g->ecx;
                        t81 = g->edx;
                        if ((uint8_t)t79 != 0u)
                        {
                            eax = t79;
                            ecx = t80;
                            edx = t81;
                        }
                        else
                        {
                            eax = t79;
                            ecx = t80;
                            edx = t81;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            t82 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
                            t83 = g->ecx;
                            t84 = g->edx;
                            if ((uint8_t)t82 != 0u)
                            {
                                eax = t82;
                                ecx = t83;
                                edx = t84;
                            }
                            else
                            {
                                edx = t84;
                                g->edx = edx;
                                g->esp = sp0 - 0xcu;
                                t85 = cow_thiscall(g, COW_IMG(0x1015ecc0u), self, 1, 0x20000u);
                                t86 = g->ecx;
                                t87 = g->edx;
                                if ((uint8_t)t85 == 0u)
                                {
                                    eax = t85;
                                    ecx = t86;
                                    edx = t87;
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0xcu;
                                    t92 = cow_thiscall(g, COW_IMG(0x101609f0u), ecx, 0);
                                    t93 = g->ecx;
                                    t94 = g->edx;
                                    eax = t92;
                                    ecx = t93;
                                    edx = t94;
                                }
                                else
                                {
                                    edx = t87;
                                    g->edx = edx;
                                    t88 = rd32(COW_IMG(0x10578158u));
                                    g->esp = sp0 - 0xcu;
                                    t89 = cow_thiscall(g, COW_IMG(0x10129d90u), t88, 1, 3u);
                                    t90 = g->ecx;
                                    t91 = g->edx;
                                    eax = t89;
                                    ecx = t90;
                                    edx = t91;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    g->edx = edx;
    g->esp = sp0;
    t95 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xb7u, 1u, 0xffffffffu, in_esi, in_ebp, loc_4);
    t96 = g->edx;
    if ((uint8_t)t95 != 1u) goto L_1015f29c;
    edx = t96;
    g->edx = edx;
    t97 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0xcu;
    t98 = cow_thiscall(g, COW_IMG(0x101b5c90u), t97, 0);
    t99 = g->ecx;
    t100 = g->edx;
    if ((uint8_t)t98 != 0u) goto L_1015f29c;
    ecx = t99;
    edx = t100;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u) goto L_1015f29c;
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd32(eax + 0xc4u) != 0u) goto L_1015f29c;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t101 = cow_call_regs(g, COW_IMG(0x10160700u), eax, self, g->edx, 1, 0);
    t102 = g->ecx;
    t103 = g->edx;
    if ((uint8_t)t101 != 0u) goto L_1015f29c;
    eax = t101;
    ecx = t102;
    edx = t103;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t104 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t105 = g->ecx;
    t106 = g->edx;
    if ((uint8_t)t104 != 0u) goto L_1015f29c;
    eax = t104;
    ecx = t105;
    edx = t106;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t107 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t108 = g->edx;
    if ((uint8_t)t107 != 0u) goto L_1015f29c;
    edx = t108;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t109 = cow_thiscall(g, COW_IMG(0x1015ecc0u), self, 1, 0x20000u);
    t110 = g->ecx;
    t111 = g->edx;
    if ((uint8_t)t109 == 0u)
    {
        eax = t109;
        ecx = t110;
        edx = t111;
        goto L_1015f2a0;
    }
    edx = t111;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
L_1015f29c: ;
    return;
L_1015efab: ;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, in_edx, 0, 1, 0x80u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    loc_4 = self & 0xffffffu;
    goto L_1015efc5;
L_1015efb9: ;
    wr8(self + 0xacu, 1u);
L_1015efc0: ;
    edx = in_edx;
    loc_4 = (self & 0xffffffu) | 0x1000000u;
    goto L_1015efc5;
L_1015efd2: ;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, in_edx, 0, 1, 0x2000u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    loc_4 = (self & 0xffffffu) | 0x1000000u;
    goto L_1015efc5;
L_1015efe5: ;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, in_edx, 0, 1, 8u);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0xffffu);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_stdcall(g, COW_IMG(0x10127ea0u), 0);
    t13 = g->edx;
    t14 = cow_call_regs(g, COW_IMG(0x1015f3e0u), t12, self, t13, 0, 1, 0x4000u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    loc_4 = self & 0xffffffu;
    goto L_1015efc5;
L_1015f014: ;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, self, in_edx, 0, 1, 8u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    loc_4 = self & 0xffffffu;
    goto L_1015efc5;
L_1015f01f: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x1019c4f0u), 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    loc_4 = self & 0xffffffu;
    goto L_1015efc5;
L_1015f026: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    loc_4 = self & 0xffffffu;
    goto L_1015efc5;
L_1015f02d: ;
    if (ebp != 0x40u) goto L_1015f03e;
    loc_10 = 0x200u;
    goto L_1015f037;
L_1015f0cf: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t31 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 == 1u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        goto L_1015f0e4;
    }
    eax = t31;
    edx = t33;
    loc_18 = 0x20u;
    goto L_1015f0da;
L_1015f2a0: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10160960u), eax, ecx, edx);
    return;
L_1015f2aa: ;
    if (rd32(COW_IMG(0x10664520u)) == 0u) goto L_1015f29c;
    eax = rd32(COW_IMG(0x10664520u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t112 = cow_stdcall(g, COW_IMG(0x101609c0u), 0);
    t113 = g->ecx;
    t114 = g->edx;
    g->esp = sp0;
    g->edx = t114;
    cow_tailcall(g, COW_IMG(0x10160a50u), t112, t113, t114);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ef60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015ef60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
