/* f_0x100d4bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d4bc0(Guest* g)
{
    double d117;
    double d121;
    double d122;
    double d125;
    double d127;
    double d13;
    double d27;
    double d28;
    double d31;
    double d55;
    double d56;
    double d62;
    double d63;
    double d69;
    double d70;
    double d75;
    double d76;
    double d80;
    double d81;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_70;
    uint32_t loc_74;
    double loc_74_f;
    uint32_t loc_78;
    uint32_t loc_80;
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
    uint32_t t115;
    uint32_t t116;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t128;
    uint32_t t129;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
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
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 0x80u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x80u;
    t2 = cow_thiscall(g, rd32(t1 + 0x260u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_80 = in_esi;
    }
    else
    {
        ecx = t3;
        edx = t4;
        t5 = rd32(self + 0x70u);
        wr32(sp0 - 0x68u, t5);
        if (rd32(self + 0x70u) == 0u)
        {
            eax = t5;
            loc_68 = t5;
            goto L_100d4bee;
        }
        eax = t5;
        loc_68 = t5;
        if (!(rd8(eax + 0x128u) & 1u))
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = in_esi;
            goto L_100d53e7;
        }
L_100d4bee: ;
        g->eax = eax;
        g->esp = sp0 - 0x80u;
        t6 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        wr32(sp0 - 0x84u, t6 + 0x44u);
        g->eax = t6 + 0x44u;
        g->edx = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 0x84u;
        t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), self, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x88u, t8);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->esp = sp0 - 0x80u;
        t11 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x10u, t8, rd32(sp0 - 0x84u));
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        g->esp = sp0 - 0x8cu;
        t12 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x10u);
        d13 = cow_take_float(g);
        wrf32(sp0 - 0x74u, (float)(double)(float)d13);
        if (!(d13 < (double)rdf32(COW_IMG(0x1032a3d8u))))
        {
            eax = (t12 & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u);
            loc_74_f = (double)(float)d13;
        }
        else
        {
            loc_74_f = (double)(float)d13;
            if (rd16(self + 0xb2u) != 0u)
            {
                t14 = (rd32(self + 0x840u) & 0xffefffffu) | 0x200000u;
                wr32(self + 0x840u, t14);
            }
            wr32(sp0 - 0x84u, sp0 - 0x50u);
            wr32(sp0 - 0x88u, 9u);
            g->esp = sp0 - 0x88u;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 0);
            wr32(sp0 - 0x8cu, sp0 - 0x48u);
            wr32(sp0 - 0x90u, 8u);
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 1, 8u);
            wr32(sp0 - 0x90u, sp0 - 0x3cu);
            wr32(sp0 - 0x94u, 0xbu);
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 2, 0xbu, sp0 - 0x3cu);
            wr32(sp0 - 0x90u, sp0 - 0x2cu);
            wr32(sp0 - 0x94u, 0xau);
            g->eax = sp0 - 0x2cu;
            g->esp = sp0 - 0x80u;
            t15 = cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 5, 0xau, sp0 - 0x2cu, sp0 - 0x48u, 9u, sp0 - 0x50u);
            eax = t15;
            loc_74_f = (double)rdf32(sp0 - 0x74u);
        }
        g->eax = eax;
        g->edx = rd32(self);
        t16 = rd32(self);
        g->esp = sp0 - 0x80u;
        t17 = cow_thiscall(g, rd32(t16 + 0x1bcu), self, 0);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x84u, t17);
        wr32(sp0 - 0x88u, self + 0x64cu);
        g->edx = t19;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x64cu, t17);
        t20 = g->edx;
        if (rd32(COW_IMG(0x10456a70u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456a70u));
            edx = t20;
            goto L_100d4d03;
        }
        eax = rd32(COW_IMG(0x10456a70u));
        g->eax = eax;
        g->edx = rd32(self);
        t21 = rd32(self);
        g->esp = sp0 - 0x80u;
        t22 = cow_thiscall(g, rd32(t21 + 0x218u), self, 0);
        t23 = g->edx;
        if (t22 != 9u)
        {
            eax = (t22 & 0xffffff00u) | rd8(self + 0x878u);
            edx = t23;
            goto L_100d4cfd;
        }
        eax = (t22 & 0xffffff00u) | rd8(self + 0x878u);
        edx = t23;
        if ((uint8_t)eax == 3u) goto L_100d4d08;
        g->eax = rd32(self);
        g->edx = edx;
        t24 = rd32(self);
        g->esp = sp0 - 0x80u;
        t25 = cow_thiscall(g, rd32(t24 + 0x220u), self, 0);
        t26 = g->edx;
        d27 = cow_take_float(g);
        wrf32(self + 0x650u, (float)d27);
        d28 = (double)rdf32(sp0 - 0x74u);
        if (!(d28 < (double)rdf32(COW_IMG(0x1032a3d8u))))
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = rd32(sp0 - 0x80u);
            goto L_100d53e7;
        }
        eax = (t25 & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u);
        edx = t26;
        g->esp = sp0 - 0x80u;
        t29 = cow_call_regs(g, COW_IMG(0x100d64d0u), eax, self, edx, 1, 0);
        eax = t29;
L_100d4d08: ;
        d31 = (double)rdf32(sp0 - 0x74u);
        if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x100u) == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = rd32(sp0 - 0x80u);
        }
        else
        {
            eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x100u;
            wr32(sp0 - 0x84u, in_ebx);
            wr32(sp0 - 0x88u, in_ebp);
            wr32(sp0 - 0x8cu, in_edi);
            g->eax = eax;
            g->edx = rd32(self);
            t32 = rd32(self);
            g->esp = sp0 - 0x8cu;
            t33 = cow_thiscall(g, rd32(t32 + 0x218u), self, 0);
            t34 = g->edx;
            if (t33 != 0u)
            {
                edx = t34;
                if ((int8_t)rd8(self + 0x879u) > 0)
                {
                    edi = (uint32_t)(int8_t)rd8(self + 0x879u);
                    if ((int32_t)edi <= 9)
                    {
                        edi = edi + 0x30u;
                    }
                    else
                    {
                        edi = edi + 0x57u;
                    }
                    g->eax = rd32(self);
                    t35 = rd32(self);
                    t36 = rd8(self + 0x87au);
                    g->esp = sp0 - 0x8cu;
                    t37 = cow_thiscall(g, rd32(t35 + 0x218u), self, 0);
                    t38 = t37 * 0x100u + 0x3000u;
                    t39 = t38 | ((uint32_t)(int8_t)t36 + 0x31u) << 0x18u | edi << 0x10u | 0x30u;
                    wr32(sp0 - 0x74u, t39);
                    if (rd8(rd32(COW_IMG(0x1065cb04u)) + 0x1cfu) == 0u)
                    {
                        eax = (t38 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1065cb04u)) + 0x1cfu);
                        edx = rd32(COW_IMG(0x1065cb04u));
                        ebp = t39;
                        loc_74 = t39;
                    }
                    else
                    {
                        edx = rd32(COW_IMG(0x1065cb04u));
                        ebp = t39;
                        loc_74 = t39;
                        g->eax = rd32(self);
                        g->edx = edx;
                        t40 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        t41 = cow_thiscall(g, rd32(t40 + 0x218u), self, 0);
                        t42 = g->edx;
                        if (t41 != 3u)
                        {
                            eax = t41;
                            edx = t42;
                            loc_74 = rd32(sp0 - 0x74u);
                        }
                        else
                        {
                            edx = t42;
                            t43 = (ebp & 0xffff00ffu) | ((ebp >> 8u & 0x32u) << 8u >> 8u | 0x32u) << 8u;
                            wr32(sp0 - 0x74u, t43);
                            eax = t43;
                            loc_74 = t43;
                        }
                    }
                    wr32(sp0 - 0x70u, 0x73657366u);
                    g->eax = eax;
                    g->edx = edx;
                    t44 = rd32(COW_IMG(0x1065cb04u));
                    g->esp = sp0 - 0x8cu;
                    t45 = cow_thiscall(g, COW_IMG(0x101880b0u), t44, 0);
                    t46 = g->edx;
                    if (t45 == 0x6e696172u)
                    {
                        eax = t45;
                        edx = t46;
                        loc_70 = 0x73657366u;
                        goto L_100d4de3;
                    }
                    eax = t45;
                    edx = t46;
                    edi = t44;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x8cu;
                    t47 = cow_thiscall(g, COW_IMG(0x101880b0u), edi, 0);
                    t48 = g->edx;
                    if (t47 == 0x6c757173u)
                    {
                        eax = t47;
                        edx = t48;
                        loc_70 = 0x73657366u;
                        goto L_100d4de3;
                    }
                    eax = t47;
                    edx = t48;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x8cu;
                    t49 = cow_thiscall(g, COW_IMG(0x101880b0u), edi, 0);
                    t50 = g->edx;
                    if (t49 != 0x746c6f62u)
                    {
                        edx = t50;
                        ebx = 0x73657366u;
                        loc_70 = rd32(sp0 - 0x70u);
                        goto L_100d4df6;
                    }
                    eax = t49;
                    edx = t50;
                    loc_70 = rd32(sp0 - 0x70u);
L_100d4de3: ;
                    if (rd8(self + 0x17cu) != 0u)
                    {
                        ebx = 0x73657366u;
                    }
                    else
                    {
                        wr32(sp0 - 0x70u, 0x72657366u);
                        ebx = 0x72657366u;
                        loc_70 = 0x72657366u;
                    }
L_100d4df6: ;
                    t51 = rd32(self + 0x800u);
                    wr32(sp0 - 0x78u, t51);
                    if (rd32(self + 0x804u) == ebx)
                    {
                        eax = t51;
                        ecx = rd32(self + 0x804u);
                        loc_78 = t51;
                        goto L_100d4e59;
                    }
                    eax = t51;
                    loc_78 = t51;
                    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu) == 0u)
                    {
                        ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
                        goto L_100d4e59;
                    }
                    ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
                    wr32(sp0 - 0x90u, ebx);
                    wr32(sp0 - 0x94u, 1u);
                    wr32(sp0 - 0x98u, sp0 - 0x60u);
                    g->eax = eax;
                    g->edx = sp0 - 0x60u;
                    g->esp = sp0 - 0x8cu;
                    t52 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 - 0x60u, 1u, ebx);
                    t53 = g->ecx;
                    t54 = g->edx;
                    wr32(sp0 - 0x78u, rd32(t52));
                    if (rd32(t52) == 0u) goto L_100d53bc;
                    eax = rd32(t52);
                    ecx = t53;
                    edx = t54;
                    loc_78 = rd32(t52);
                    if (rd32(eax) == 0u)
                    {
                        loc_70 = rd32(sp0 - 0x70u);
                    }
                    else
                    {
                        wr32(self + 0x800u, eax);
                        wr32(self + 0x7fcu, 0u);
                        wr32(self + 0x804u, ebx);
                        wr32(self + 0x810u, 0u);
                        wr32(self + 0x80cu, 0u);
                        loc_70 = rd32(sp0 - 0x70u);
                    }
L_100d4e59: ;
                    if (eax != 0u)
                    {
                        if (rd8(self + 0x8abu) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(self + 0x8abu);
                            goto L_100d4ea7;
                        }
                        eax = (eax & 0xffffff00u) | rd8(self + 0x8abu);
                        if (rd8(self + 0x878u) == 3u) goto L_100d4ea7;
                        if (rd32(self + 0x7d8u) != rd32(self + 0x7c8u))
                        {
                            eax = rd32(self + 0x7d8u);
                            ecx = rd32(self + 0x7c8u);
                            goto L_100d4ea7;
                        }
                        ecx = rd32(self + 0x7c8u);
                        if (rd32(sp0 - 0x68u) == 0u)
                        {
                            eax = rd32(sp0 - 0x68u);
                            goto L_100d4e99;
                        }
                        eax = rd32(sp0 - 0x68u);
                        if (rd32(eax + 0x128u) >> 1u & 1u)
                        {
                            ecx = rd32(eax + 0x128u) >> 1u;
                            goto L_100d4ea7;
                        }
                        ecx = rd32(eax + 0x128u) >> 1u;
L_100d4e99: ;
                        if (rd8(self + 0x8b6u) == 0u) goto L_100d53bc;
                        eax = (eax & 0xffffff00u) | rd8(self + 0x8b6u);
L_100d4ea7: ;
                        d55 = (double)rdf32(self + 0x7e8u);
                        if (!(d55 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d55, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ebx = ebx & 0xffffff00u;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d55, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ebx = ebx & 0xffffff00u;
                            d56 = (double)rdf32(sp0 - 0x4cu);
                            if ((cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                                wr32(sp0 - 0x90u, sp0 - 0x50u);
                                wr32(sp0 - 0x94u, self + 0x63cu);
                                g->ecx = ecx;
                                g->edx = sp0 - 0x50u;
                                g->esp = sp0 - 0x8cu;
                                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x50u);
                                t57 = g->ecx;
                                t58 = g->edx;
                                wr32(sp0 - 0x98u, self + 0x5fcu);
                                wr32(sp0 - 0x9cu, self + 0x63cu);
                                g->eax = self + 0x5fcu;
                                g->ecx = t57;
                                g->edx = t58;
                                g->esp = sp0 - 0x94u;
                                t59 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                t60 = g->ecx;
                                t61 = g->edx;
                                eax = t59;
                                ecx = t60;
                                edx = t61;
                                ebx = (ebx & 0xffffff00u) | 1u;
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
                        d62 = (double)rdf32(self + 0x7ecu);
                        if (!(d62 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            d63 = (double)rdf32(sp0 - 0x3cu);
                            if ((cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                                wr32(sp0 - 0x90u, sp0 - 0x40u);
                                wr32(sp0 - 0x94u, self + 0x63cu);
                                g->eax = eax;
                                g->ecx = sp0 - 0x40u;
                                g->esp = sp0 - 0x8cu;
                                t64 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x40u);
                                t65 = g->ecx;
                                wr32(sp0 - 0x98u, self + 0x5fcu);
                                wr32(sp0 - 0x9cu, self + 0x63cu);
                                g->ecx = t65;
                                g->edx = self + 0x5fcu;
                                g->esp = sp0 - 0x94u;
                                t66 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                t67 = g->ecx;
                                t68 = g->edx;
                                eax = t66;
                                ecx = t67;
                                edx = t68;
                                ebx = (ebx & 0xffffff00u) | 1u;
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
                        if (rd8(self + 0x878u) == 2u)
                        {
                            d69 = (double)rdf32(self + 0x7f0u);
                            if (!(d69 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                d70 = (double)rdf32(sp0 - 0x2cu);
                                if ((cow_fsw(g, d70, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                                {
                                    eax = cow_fsw(g, d70, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                                }
                                else
                                {
                                    wr32(sp0 - 0x90u, sp0 - 0x30u);
                                    wr32(sp0 - 0x94u, self + 0x63cu);
                                    g->eax = sp0 - 0x30u;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x8cu;
                                    t71 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x30u);
                                    t72 = g->edx;
                                    wr32(sp0 - 0x98u, self + 0x5fcu);
                                    wr32(sp0 - 0x9cu, self + 0x63cu);
                                    g->ecx = self + 0x5fcu;
                                    g->esp = sp0 - 0x94u;
                                    t73 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                    t74 = g->ecx;
                                    eax = t73;
                                    ecx = t74;
                                    ebx = (ebx & 0xffffff00u) | 1u;
                                    loc_70 = rd32(sp0 - 0x70u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                }
                            }
                            d75 = (double)rdf32(self + 0x7f4u);
                            if (d75 < (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                d76 = (double)rdf32(sp0 - 0x1cu);
                                if ((cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
                                {
                                    eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                                    wr32(sp0 - 0x90u, sp0 - 0x20u);
                                    wr32(sp0 - 0x94u, self + 0x63cu);
                                    g->ecx = ecx;
                                    g->edx = sp0 - 0x20u;
                                    g->esp = sp0 - 0x8cu;
                                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x20u);
                                    t77 = g->ecx;
                                    t78 = g->edx;
                                    wr32(sp0 - 0x98u, self + 0x5fcu);
                                    wr32(sp0 - 0x9cu, self + 0x63cu);
                                    g->esp = sp0 - 0x94u;
                                    cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                    ebx = (ebx & 0xffffff00u) | 1u;
                                    loc_70 = rd32(sp0 - 0x70u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                }
                            }
                        }
                        if ((rd32(self + 0x840u) & 0x300000u) == 0u)
                        {
                            eax = rd32(self + 0x840u);
                            if ((uint8_t)ebx != 0u)
                            {
                                d80 = (double)rdf32(self + 0x824u);
                                d81 = (double)rdf32(COW_IMG(0x10329a08u));
                                wr8(self + 0x8b6u, 0u);
                                wr8(sp0 - 0x79u, 1u);
                                if (d80 < d81)
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, d81, 0u);
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, d81, 0u);
                                    wr8(sp0 - 0x79u, 0u);
                                }
                                g->eax = eax;
                                g->esp = sp0 - 0x8cu;
                                t82 = cow_thiscall(g, rd32(rd32(self) + 0x218u), self, 0);
                                t83 = g->ecx;
                                t84 = t82 * 0x100u + 0x3000u | (uint32_t)(int8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u) | 0x30300000u;
                                wr32(sp0 - 0x64u, t84);
                                eax = t84;
                                ecx = (t83 & 0xffffff00u) | (uint8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u);
                                edx = (uint32_t)(int8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u);
                                ebx = rd32(sp0 - 0x78u);
                                loc_64 = t84;
                                loc_78 = rd32(sp0 - 0x78u);
L_100d5061: ;
                                if (rd32(self + 0x7fcu) == 0u) goto L_100d5077;
                                edi = rd32(self + 0x7fcu);
                                if (rd32(self + 0x7f8u) == ebp) goto L_100d5145;
L_100d5077: ;
                                wr32(sp0 - 0x90u, ebp);
                                wr32(sp0 - 0x94u, 0x3du);
                                wr32(sp0 - 0x98u, sp0 - 0x68u);
                                g->edx = edx;
                                t85 = rd32(ebx);
                                g->esp = sp0 - 0x8cu;
                                t86 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 0x68u, t85, g->edx, 0, 3, sp0 - 0x68u, 0x3du, ebp);
                                t87 = g->ecx;
                                t88 = g->edx;
                                if (rd32(t86) != 0u)
                                {
                                    eax = t86;
                                    ecx = t87;
                                    edx = t88;
                                    edi = rd32(t86);
                                    loc_64 = rd32(sp0 - 0x64u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                    goto L_100d5149;
                                }
                                if (ebp == rd32(sp0 - 0x74u)) goto L_100d50b3;
                                eax = rd32(sp0 - 0x74u);
                                wr32(sp0 - 0x90u, eax);
                                wr32(sp0 - 0x94u, 0x3du);
                                wr32(sp0 - 0x98u, sp0 - 0x5cu);
                                g->edx = eax;
                                t89 = rd32(ebx);
                                g->esp = sp0 - 0x8cu;
                                t90 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 0x5cu, t89, g->edx, 0, 3, sp0 - 0x5cu, 0x3du, eax);
                                t91 = g->ecx;
                                t92 = g->edx;
                                if (rd32(t90) != 0u)
                                {
                                    eax = t90;
                                    ecx = t91;
                                    edx = t92;
                                    edi = rd32(t90);
                                    loc_64 = rd32(sp0 - 0x64u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                    goto L_100d5149;
                                }
L_100d50b3: ;
                                wr32(sp0 - 0x90u, sp0 - 0x58u);
                                g->eax = sp0 - 0x58u;
                                g->esp = sp0 - 0x8cu;
                                t93 = cow_thiscall(g, rd32(rd32(self) + 0x1e0u), self, 1, sp0 - 0x58u);
                                t94 = rd32(sp0 - 0x70u);
                                wr32(sp0 - 0x90u, t94);
                                wr32(sp0 - 0x94u, 1u);
                                wr32(sp0 - 0x98u, sp0 - 0x54u);
                                g->edx = sp0 - 0x54u;
                                t95 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(t93)), 3, sp0 - 0x54u, 1u, t94);
                                t96 = g->edx;
                                if (rd32(t95) == 0u)
                                {
                                    eax = rd32(t95);
                                    edx = t96;
                                    goto L_100d512b;
                                }
                                eax = rd32(t95);
                                edx = t96;
                                edi = t94;
                                if (rd32(eax) == 0u) goto L_100d512b;
                                if (eax == ebx) goto L_100d5110;
                                wr32(self + 0x800u, eax);
                                wr32(self + 0x7fcu, 0u);
                                wr32(self + 0x804u, edi);
                                wr32(self + 0x810u, 0u);
                                wr32(sp0 - 0x78u, eax);
                                wr32(self + 0x80cu, 0u);
                                ecx = 0u;
                                ebx = eax;
                                loc_64 = rd32(sp0 - 0x64u);
                                loc_78 = eax;
                                goto L_100d5061;
                            }
                        }
                        else
                        {
                            eax = rd32(self + 0x840u);
                            t79 = (((eax & 0xfff00000u) - 1u ^ eax) & 0x300000u) ^ eax;
                            wr32(self + 0x840u, t79);
                        }
                    }
                }
            }
L_100d53bc: ;
            t138 = rd32(sp0 - 0x4cu);
            t139 = rd32(sp0 - 0x3cu);
            t140 = rd32(sp0 - 0x2cu);
            wr32(self + 0x7e8u, t138);
            t141 = rd32(sp0 - 0x1cu);
            t142 = rd32(sp0 - 0x88u);
            t143 = rd32(sp0 - 0x8cu);
            wr32(self + 0x7ecu, t139);
            wr32(self + 0x7f0u, t140);
            wr32(self + 0x7f4u, t141);
            ebx = rd32(sp0 - 0x84u);
            ebp = t142;
            edi = t143;
            loc_80 = rd32(sp0 - 0x80u);
        }
    }
L_100d53e7: ;
    g->ebx = ebx;
    g->esi = loc_80;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_100d4cfd: ;
    if ((uint8_t)eax == 3u) goto L_100d4d08;
L_100d4d03: ;
    g->esp = sp0 - 0x80u;
    t30 = cow_call_regs(g, COW_IMG(0x100d6550u), eax, self, edx, 1, 0);
    eax = t30;
    goto L_100d4d08;
L_100d5110: ;
    wr32(sp0 - 0x70u, ebp);
    wr32(sp0 - 0x90u, sp0 - 0x70u);
    wr32(sp0 - 0x94u, COW_IMG(0x1035fb58u));
    wr8(sp0 - 0x6cu, 0u);
    g->eax = sp0 - 0x70u;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t97 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t98 = g->edx;
    eax = t97;
    edx = t98;
L_100d512b: ;
    wr32(sp0 - 0x90u, 0x746f6f66u);
    wr32(sp0 - 0x94u, 0x3du);
    wr32(sp0 - 0x98u, sp0 - 0x70u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = edx;
    t99 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x8cu;
    t100 = cow_stdcall(g, COW_IMG(0x10073ba0u), 3, sp0 - 0x70u, 0x3du, 0x746f6f66u);
    t101 = g->ecx;
    t102 = g->edx;
    eax = t100;
    ecx = t101;
    edx = t102;
    ebp = 0x746f6f66u;
    edi = rd32(t100);
    loc_64 = rd32(sp0 - 0x64u);
    loc_78 = rd32(sp0 - 0x78u);
L_100d5145: ;
    if (edi == 0u) goto L_100d51ab;
L_100d5149: ;
    if (rd32(edi) != 0u)
    {
        ebx = rd32(edi);
        if (rd8(COW_IMG(0x104638f5u)) != 0u)
        {
            if (rd32(self + 0x70u) == 0u)
            {
                eax = rd32(self + 0x70u);
                goto L_100d516d;
            }
            eax = rd32(self + 0x70u);
            if (rd32(eax + 0x128u) >> 8u & 1u) goto L_100d519f;
            edx = rd32(eax + 0x128u) >> 8u;
L_100d516d: ;
            if (rd8(sp0 - 0x79u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x79u);
                x0 = (double)rdf32(COW_IMG(0x1032a34cu));
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x79u);
                x0 = (double)rdf32(COW_IMG(0x1033139cu));
            }
            g->edx = edx;
            fpush(g, x0);
            g->esp = sp0 - 0x8cu;
            t103 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t104 = g->edx;
            wr32(sp0 - 0x90u, t103);
            wr32(sp0 - 0x94u, 0u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, 0u);
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, self + 0x5fcu);
            cow_thiscall(g, COW_IMG(0x10036fa0u), ebx, 6, self + 0x5fcu, 0u, 0u, 0u, 0u, t103);
            loc_64 = rd32(sp0 - 0x64u);
            loc_78 = rd32(sp0 - 0x78u);
        }
L_100d519f: ;
        wr32(self + 0x7fcu, edi);
        wr32(self + 0x7f8u, ebp);
    }
L_100d51ab: ;
    if (rd32(COW_IMG(0x10456a70u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a70u));
        if (rd8(self + 0x878u) != 3u)
        {
            g->eax = eax;
            g->edx = rd32(self);
            t105 = rd32(self);
            g->esp = sp0 - 0x8cu;
            t106 = cow_thiscall(g, rd32(t105 + 0x218u), self, 0);
            t107 = g->edx;
            if ((int32_t)t106 < 3)
            {
                edx = t107;
            }
            else
            {
                eax = t106;
                edx = t107;
                if ((int32_t)eax <= 4) goto L_100d51e6;
                if (eax != 8u) goto L_100d531c;
L_100d51e6: ;
                if (rd32(self + 0x818u) == 0u)
                {
                    wr32(sp0 - 0x90u, 0x6b726d66u);
                    wr32(sp0 - 0x94u, 5u);
                    wr32(sp0 - 0x98u, sp0 - 0x5cu);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t108 = rd32(self);
                    g->esp = sp0 - 0x8cu;
                    t109 = cow_thiscall(g, rd32(t108 + 0x1ecu), self, 3, sp0 - 0x5cu, 5u, 0x6b726d66u);
                    t110 = g->edx;
                    if (rd32(t109) == 0u) goto L_100d5211;
                    eax = rd32(t109);
                    edx = t110;
                    if (rd32(eax) != 0u) goto L_100d523d;
L_100d5211: ;
                    wr32(sp0 - 0x90u, 0x6b726d66u);
                    wr32(sp0 - 0x94u, 5u);
                    wr32(sp0 - 0x98u, sp0 - 0x70u);
                    t111 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
                    g->eax = t111;
                    g->edx = rd32(COW_IMG(0x1047d128u));
                    t112 = rd32(COW_IMG(0x1047d128u));
                    g->esp = sp0 - 0x8cu;
                    t113 = cow_thiscall(g, COW_IMG(0x10072290u), t111, 3, sp0 - 0x70u, 5u, 0x6b726d66u);
                    t114 = g->edx;
                    if (rd32(t113) == 0u)
                    {
                        edx = t114;
                        goto L_100d5243;
                    }
                    eax = rd32(t113);
                    edx = t114;
                    if (rd32(eax) == 0u) goto L_100d5243;
L_100d523d: ;
                    wr32(self + 0x818u, eax);
                }
L_100d5243: ;
                if (rd32(self + 0x818u) != 0u)
                {
                    eax = rd32(self + 0x818u);
                    if (rd32(eax) != 0u)
                    {
                        g->edx = rd32(self);
                        t115 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, rd32(t115 + 0x98u), self, 0);
                        t116 = g->edx;
                        d117 = cow_take_float(g);
                        wrf32(sp0 - 0x68u, (float)(double)(float)d117);
                        g->eax = rd32(self);
                        g->edx = t116;
                        t118 = rd32(self);
                        t119 = cow_thiscall(g, rd32(t118 + 0x9cu), self, 0);
                        t120 = g->edx;
                        d121 = cow_take_float(g);
                        d122 = (double)rdf32(sp0 - 0x68u);
                        if (!(d121 < d122))
                        {
                            edx = t120;
                            g->edx = edx;
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(rd32(self) + 0x9cu), self, 0);
                            t126 = g->edx;
                            d127 = cow_take_float(g);
                            edx = t126;
                            x0 = d127;
                        }
                        else
                        {
                            eax = (t119 & 0xffff0000u) | (uint16_t)cow_fsw(g, d121, d122, 0u);
                            g->edx = rd32(self);
                            t123 = rd32(self);
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(t123 + 0x98u), self, 0);
                            t124 = g->edx;
                            d125 = cow_take_float(g);
                            edx = t124;
                            x0 = d125;
                        }
                        if (rd32(self + 0x818u) == 0u)
                        {
                            x0 = fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) + (double)rdf32(COW_IMG(0x1032961cu)));
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            x0 = fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) + (double)rdf32(COW_IMG(0x1032961cu)));
                            eax = rd32(eax);
                        }
                        wrf32(eax + 0x84u, (float)x0);
                        if (rd32(self + 0x818u) == 0u)
                        {
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            eax = rd32(eax);
                        }
                        wrf32(eax + 0x88u, (float)x0);
                        if (rd32(self + 0x818u) == 0u)
                        {
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            eax = rd32(eax);
                        }
                        wrf32(eax + 0x8cu, (float)x0);
                        if (rd32(self + 0x818u) == 0u)
                        {
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            eax = rd32(eax);
                        }
                        wr32(sp0 - 0x90u, self);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x8cu;
                        t128 = cow_thiscall(g, COW_IMG(0x1003b7b0u), eax + 0x30u, 1, self);
                        t129 = g->edx;
                        wr32(sp0 - 0x90u, 0u);
                        g->edx = t129;
                        cow_thiscall(g, COW_IMG(0x1003b830u), eax + 0x30u, 1, 0u);
                        t130 = g->edx;
                        if (rd32(self + 0x818u) == 0u)
                        {
                            edx = t130;
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            edx = t130;
                            eax = rd32(eax);
                        }
                        wr32(sp0 - 0x90u, 0u);
                        g->edx = edx;
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, COW_IMG(0x1004e8d0u), eax, 1, 0u);
                        t131 = g->edx;
                        edx = t131;
                    }
                }
            }
L_100d531c: ;
            if (rd32(self + 0x80cu) == rd32(sp0 - 0x64u))
            {
                eax = rd32(self + 0x810u);
            }
            else
            {
                eax = rd32(self + 0x810u);
                edi = rd32(sp0 - 0x64u);
                wr32(sp0 - 0x90u, edi);
                wr32(sp0 - 0x94u, 5u);
                wr32(sp0 - 0x98u, sp0 - 0x54u);
                g->edx = sp0 - 0x54u;
                g->esp = sp0 - 0x8cu;
                t132 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, rd32(rd32(sp0 - 0x78u)), g->edx, 0, 3, sp0 - 0x54u, 5u, edi);
                t133 = g->edx;
                t134 = rd32(t132);
                wr32(self + 0x810u, t134);
                wr32(self + 0x80cu, edi);
                eax = t134;
                edx = t133;
            }
            if (rd32(COW_IMG(0x10456a70u)) != 0u)
            {
                if (eax != 0u)
                {
                    if (rd32(eax) != 0u)
                    {
                        wr32(sp0 - 0x90u, eax);
                        g->ebp = ebp;
                        g->esp = sp0 - 0x8cu;
                        cow_fastcall(g, COW_IMG(0x100d63f0u), self, edx, 1, eax);
                        t135 = g->edx;
                        edx = t135;
                    }
                }
                if (rd32(COW_IMG(0x10456a70u)) != 0u)
                {
                    if (rd32(self + 0x814u) != 0u)
                    {
                        eax = rd32(self + 0x814u);
                        if (rd32(eax) != 0u)
                        {
                            ecx = rd32(eax);
                            if (eax != 0u)
                            {
                                if (ecx != 0u)
                                {
                                    edi = ecx;
                                    wr32(edi + 0xccu, 0u);
                                    g->ebp = ebp;
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x8cu;
                                    t136 = cow_thiscall(g, COW_IMG(0x100531d0u), ecx, 0);
                                    t137 = g->edx;
                                    wr32(sp0 - 0x90u, 0u);
                                    wr32(edi + 0xd0u, 0x461c4000u);
                                    wr32(edi + 0xc8u, 0u);
                                    cow_call_regs(g, COW_IMG(0x100496f0u), t136, edi, g->edx, 0, 1, 0u);
                                    wr32(edi + 0xc8u, 0x461c4400u);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    goto L_100d53bc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d4bc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
