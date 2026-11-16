/* f_0x101177d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101177d0(Guest* g)
{
    double d117;
    double d125;
    double d64;
    double d75;
    double d79;
    double d81;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_38;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_c;
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
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t80;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x10117520u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int16_t)rd16(self + 0x56u) <= 0)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | rd16(self + 0x56u);
        ecx = t2;
        edx = t3;
        wr16(self + 0x56u, (uint16_t)(eax - 1u));
    }
    if (rd8(rd32(COW_IMG(0x105781ccu)) + 0x48u) == 0u)
    {
        eax = rd32(COW_IMG(0x105781ccu));
        goto L_10117809;
    }
    eax = rd32(COW_IMG(0x105781ccu));
    if (rd32(eax + 8u) == self) goto L_10117809;
    if ((rd8(self + 0x34u) & 0x40u) == 0u) goto L_10117ed7;
L_10117809: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t5 = g->edx;
    wr32(sp0 - 0x10u, t4);
    wr32(sp0 - 0xcu, 0u);
    t6 = rd8(self + 0x9bu);
    wr8(sp0 - 0x22u, 0u);
    wr8(sp0 - 0x21u, 0u);
    wr32(sp0 - 0x18u, 0u);
    if ((uint8_t)t6 == 0u)
    {
        eax = (t4 & 0xffffff00u) | t6;
        edx = t5;
        loc_10 = t4;
    }
    else
    {
        eax = (t4 & 0xffffff00u) | t6;
        edx = t5;
        loc_10 = t4;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t7 = cow_thiscall(g, COW_IMG(0x1011aa40u), self, 0);
        t8 = g->edx;
        wr8(sp0 - 0x22u, 1u);
        eax = t7;
        edx = t8;
    }
    if (loc_10 == 0u)
    {
        ebx = in_ebx;
        edi = 0u;
        loc_c = 0u;
        goto L_10117cee;
    }
    ebx = rd32(sp0 - 0x14u);
    edi = rd32(sp0 - 4u);
    loc_c = 0u;
    loc_18 = 0u;
L_1011784f: ;
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x34u;
    t9 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x10u);
    t10 = g->edx;
    if ((uint32_t)(int16_t)rd16(t9) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(t9);
        edx = t10;
        esi = t9;
        goto L_10117ac8;
    }
    eax = (uint32_t)(int16_t)rd16(t9);
    edx = t10;
    esi = t9;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101178a2;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_10117a87;
    eax = eax - 1u;
    if (rd8(self + 0x78u) == 0u) goto L_10117a87;
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x18u, 0u);
    ebx = 0x80808080u;
    loc_c = esi;
    loc_20 = 0x3f800000u;
    loc_1c = 0x3f800000u;
    loc_18 = 0u;
L_10117ab3: ;
    if (rd32(sp0 - 0x10u) != 0u) goto L_1011784f;
    eax = rd32(sp0 - 0x10u);
    edi = loc_c;
L_10117cee: ;
    if (rd32(self + 0xcu) != 0u)
    {
        ecx = rd32(self + 0xcu);
        if (rd8(self + 0x6au) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x6au);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x6au);
            if (rd32(self + 0x10u) != 0xeu)
            {
                g->eax = eax;
                g->edx = rd32(ecx);
                t106 = rd32(ecx);
                g->esp = sp0 - 0x34u;
                t107 = cow_thiscall(g, rd32(t106 + 0x10u), ecx, 0);
                t108 = g->edx;
                eax = t107;
                edx = t108;
            }
        }
    }
    if (rd8(self + 0x9bu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9bu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9bu);
        if (rd8(sp0 - 0x22u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x22u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x22u);
            wr8(sp0 - 0x22u, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t109 = cow_stdcall(g, COW_IMG(0x1011aac0u), 0);
            t110 = g->edx;
            eax = t109;
            edx = t110;
        }
    }
    if (rd32(self + 0x10u) == 0xeu) goto L_10117ed7;
    if (edi != 0u)
    {
        if (rd8(self + 0x62u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x62u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x62u);
            if (rd8(sp0 - 0x21u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
            }
            else
            {
                wr32(sp0 - 0x38u, self);
                t111 = rd32(self + 0xccu);
                wr32(sp0 - 0x14u, t111);
                g->eax = t111;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t112 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, self);
                t113 = g->edx;
                if ((uint8_t)t112 == 0u)
                {
                    edx = t113;
                    esi = rd32(edi + 0x10u);
                }
                else
                {
                    edx = t113;
                    esi = rd32(edi + 0xcu);
                }
                if (rd8(self + 0x99u) == 0u)
                {
                    eax = (rd32(sp0 - 0xcu) & 0xffffff00u) | rd8(self + 0x99u);
                    ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0x20u) + rd16(edi + 0x28u));
                    edi = (edi & 0xffff0000u) | (uint16_t)(rd16(rd32(sp0 - 0xcu) + 0x22u) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(sp0 - 0xcu) + 0x2au)));
                    goto L_10117e06;
                }
                eax = (rd32(sp0 - 0xcu) & 0xffffff00u) | rd8(self + 0x99u);
                ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0x20u) + rd16(edi + 0x28u));
                edi = (edi & 0xffff0000u) | (uint16_t)(rd16(rd32(sp0 - 0xcu) + 0x22u) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(sp0 - 0xcu) + 0x2au)));
                wr32(sp0 - 0x38u, sp0 - 0x1cu);
                wr32(sp0 - 0x3cu, sp0 - 0x20u);
                g->eax = eax;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x34u;
                t114 = cow_thiscall(g, COW_IMG(0x10160210u), COW_IMG(0x10621838u), 2, sp0 - 0x20u, sp0 - 0x1cu);
                t115 = g->edx;
                if (esi == 0u)
                {
                    eax = t114;
                    edx = t115;
                    goto L_10117e97;
                }
                t116 = (uint32_t)(int16_t)rd16(esi + 0x26u) - (uint32_t)(int16_t)rd16(esi + 0x24u);
                wr32(sp0 - 4u, t116);
                wr32(sp0 - 4u, (uint32_t)(int16_t)edi);
                d117 = fr(g, fr(g, fr(g, (double)(int32_t)t116 * fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(COW_IMG(0x1032961cu)))) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)(uint32_t)(int16_t)edi);
                fpush(g, d117);
                g->esp = sp0 - 0x34u;
                t118 = cow_call_regs(g, COW_IMG(0x10311c6cu), t116, g->ecx, g->edx, 1, 0);
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 1u);
                t119 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x44u, t119);
                t120 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x48u, t120);
                t121 = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x4cu, t121);
                wr32(sp0 - 0x50u, (uint32_t)(int16_t)t118);
                wr32(sp0 - 0x54u, (uint32_t)(int16_t)ebx);
                eax = (uint32_t)(int16_t)ebx;
                edx = (uint32_t)(int16_t)t118;
                loc_40 = 1u;
                loc_44 = t119;
                loc_48 = t120;
                loc_4c = t121;
                loc_50 = (uint32_t)(int16_t)t118;
                loc_54 = (uint32_t)(int16_t)ebx;
L_10117e90: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t127 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, loc_54, loc_50, loc_4c, loc_48, loc_44, loc_40, 0u, 0u);
                t128 = g->edx;
                eax = t127;
                edx = t128;
            }
        }
    }
L_10117e97: ;
    if (rd32(self + 0x88u) != 0u)
    {
        ecx = rd32(self + 0x88u);
        if (rd8(self + 0x69u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x69u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x69u);
            if (rd8(self + 0x74u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x74u);
            }
            else
            {
                if ((int32_t)rd32(ecx + 0x10u) <= (int32_t)rd32(ecx + 0xcu))
                {
                    eax = rd32(ecx + 0x10u);
                    edx = rd32(ecx + 0xcu);
                }
                else
                {
                    eax = rd32(ecx + 0x10u);
                    edx = rd32(ecx + 0xcu);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    t129 = cow_thiscall(g, COW_IMG(0x10234680u), ecx, 0);
                    t130 = g->edx;
                    eax = t129;
                    edx = t130;
                }
            }
        }
    }
L_10117ebe: ;
    if (rd8(self + 0x9bu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9bu);
        if (rd8(sp0 - 0x22u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x22u);
            g->esp = sp0 - 0x34u;
            cow_stdcall(g, COW_IMG(0x1011aac0u), 0);
        }
    }
L_10117ed7: ;
    return;
L_101178a2: ;
    if (rd8(esi + 0x3cu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x3cu);
        goto L_101178b7;
    }
    wr32(sp0 - 0x18u, 0u);
    ebx = 0x80808080u;
    loc_18 = 0u;
    goto L_10117ab3;
L_101178b7: ;
    if (rd8(esi + 0x48u) == 0u) goto L_10117927;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x48u);
    if (rd16(esi + 0x3au) != rd16(self + 0x4cu))
    {
        ecx = rd16(esi + 0x3au);
        goto L_101178f4;
    }
    ecx = rd16(esi + 0x3au);
    if (rd8(self + 0x63u) == 0u) goto L_101178f4;
    eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
    t11 = rd16(esi + 0x2au);
    t12 = rd32(esi + 4u);
    t13 = rd16(esi + 0x2cu);
    t14 = rd16(self + 0xb8u);
    wr32(self + 8u, esi);
    t15 = ((eax & 0xffff0000u) | t11) + 1u;
    wr32(sp0 - 0x14u, t15);
    edx = t12;
    ebx = 0x80805020u;
    edi = ((edi & 0xffff0000u) | (uint16_t)(t13 + t14)) + 1u;
    loc_14 = t15;
L_10117a75: ;
    wr32(sp0 - 0x18u, edx);
    t47 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t47);
    t48 = rd32(esi + 0x20u);
    wr32(sp0 - 0x1cu, t48);
    loc_18 = edx;
    edx = t48;
    loc_20 = t47;
    loc_1c = t48;
L_10117a87: ;
    eax = loc_18;
L_10117a8b: ;
    if (eax == 0u) goto L_10117ab3;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, loc_1c);
    wr32(sp0 - 0x4cu, loc_20);
    wr32(sp0 - 0x50u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x54u, (uint32_t)(int16_t)loc_14);
    eax = (uint32_t)(int16_t)loc_14;
    edx = (uint32_t)(int16_t)edi;
    loc_38 = 0u;
    loc_44 = ebx;
    loc_48 = loc_1c;
    loc_4c = loc_20;
    loc_50 = (uint32_t)(int16_t)edi;
    loc_54 = (uint32_t)(int16_t)loc_14;
L_10117aaa: ;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), loc_18, 8, loc_54, loc_50, loc_4c, loc_48, loc_44, 0u, 0u, loc_38);
    t92 = g->edx;
    edx = t92;
    goto L_10117ab3;
L_101178f4: ;
    t16 = rd32(esi + 4u);
    wr32(sp0 - 0x18u, t16);
    t17 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t17);
    t18 = rd32(esi + 0x20u);
    t19 = rd16(esi + 0x2cu);
    t20 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, rd16(esi + 0x2au));
    wr32(sp0 - 0x1cu, t18);
    edx = t17;
    ebx = 0x80808080u;
    edi = (edi & 0xffff0000u) | (uint16_t)(t19 + t20);
    loc_18 = t16;
    loc_20 = t17;
    loc_1c = t18;
    goto L_10117a87;
L_10117927: ;
    if (rd32(esi + 0x10u) == 5u)
    {
        eax = rd32(esi + 0x10u);
        goto L_10117a14;
    }
    eax = rd32(esi + 0x10u);
    if (eax == 0x10u) goto L_10117a0d;
    if (rd16(esi + 0x3au) != rd16(self + 0x4cu)) goto L_101179dd;
    if (rd8(self + 0x63u) == 0u) goto L_101179dd;
    eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
    if ((rd32(self + 0x34u) & 0x80000u) == 0u) goto L_1011796d;
    wr32(sp0 - 0x38u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t21 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, self);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        edx = t22;
        goto L_101179dd;
    }
    eax = t21;
L_1011796d: ;
    t23 = rd16(esi + 0x2au);
    t24 = rd32(esi + 4u);
    t25 = rd16(esi + 0x2cu);
    t26 = rd16(self + 0xb8u);
    wr32(self + 8u, esi);
    wr32(sp0 - 0x18u, t24);
    t27 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t27);
    t28 = rd32(esi + 0x20u);
    wr32(sp0 - 0x1cu, t28);
    t29 = ((eax & 0xffff0000u) | t23) - 1u;
    wr32(sp0 - 0x14u, t29);
    if (rd32(esi + 0x18u) != 0xfu)
    {
        eax = rd32(esi + 0x18u);
        edx = t28;
        edi = ((edi & 0xffff0000u) | (uint16_t)(t25 + t26)) - 1u;
        loc_18 = t24;
        loc_20 = t27;
        loc_1c = t28;
        loc_14 = t29;
    }
    else
    {
        eax = rd32(esi + 0x18u);
        edx = t28;
        edi = ((edi & 0xffff0000u) | (uint16_t)(t25 + t26)) - 1u;
        loc_18 = t24;
        loc_20 = t27;
        loc_1c = t28;
        loc_14 = t29;
        wr8(sp0 - 0x21u, 1u);
    }
    if ((int16_t)rd16(self + 0x5eu) <= 0)
    {
        ebx = 0x80805020u;
        goto L_10117a87;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x5eu);
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, 0x14u);
    wr32(sp0 - 0x40u, edi + 2u);
    wr32(sp0 - 0x14u, loc_14 + 2u);
    wr32(sp0 - 0x44u, loc_14 + 2u);
    wr32(sp0 - 0x48u, loc_18);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x10119f80u), self, 5, loc_18, loc_14 + 2u, edi + 2u, 0x14u, eax);
    t30 = g->edx;
    edx = t30;
    ebx = 0x80805020u;
    edi = edi + 2u;
    goto L_10117ab3;
L_101179dd: ;
    t31 = rd32(esi + 4u);
    wr32(sp0 - 0x18u, t31);
    t32 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t32);
    t33 = rd32(esi + 0x20u);
    t34 = rd16(esi + 0x2au);
    t35 = rd16(esi + 0x2cu);
    t36 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, (uint16_t)t34);
    wr32(sp0 - 0x1cu, t33);
    edx = (edx & 0xffff0000u) | t34;
    ebx = 0x80808080u;
    edi = (edi & 0xffff0000u) | (uint16_t)(t35 + t36);
    loc_18 = t31;
    loc_20 = t32;
    loc_1c = t33;
    goto L_10117a87;
L_10117a0d: ;
    ebx = 0x80808080u;
L_10117a5e: ;
    t44 = rd32(esi + 4u);
    t45 = rd16(esi + 0x2cu);
    t46 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, rd16(esi + 0x2au));
    edx = t44;
    edi = (edi & 0xffff0000u) | (uint16_t)(t45 + t46);
    goto L_10117a75;
L_10117a14: ;
    if (rd16(esi + 0x3au) != rd16(self + 0x4cu))
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x3au);
        goto L_10117a59;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 0x3au);
    if (rd8(self + 0x63u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
        goto L_10117a59;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x63u);
    t37 = rd16(esi + 0x2au);
    t38 = rd32(esi + 4u);
    t39 = rd16(esi + 0x2cu);
    t40 = rd16(self + 0xb8u);
    wr32(self + 8u, esi);
    wr32(sp0 - 0x18u, t38);
    t41 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x20u, t41);
    t42 = rd32(esi + 0x20u);
    wr32(sp0 - 0x1cu, t42);
    t43 = ((eax & 0xffff0000u) | t37) + 1u;
    wr32(sp0 - 0x14u, t43);
    edx = t41;
    ebx = 0x40402810u;
    edi = ((edi & 0xffff0000u) | (uint16_t)(t39 + t40)) + 1u;
    loc_18 = t38;
    loc_20 = t41;
    loc_1c = t42;
    loc_14 = t43;
    goto L_10117a87;
L_10117a59: ;
    ebx = 0x30808080u;
    goto L_10117a5e;
L_10117ac8: ;
    if (rd8(self + 0x69u) == 0u) goto L_10117ab3;
    eax = (eax & 0xffffff00u) | rd8(self + 0x69u);
    if (rd8(esi + 0x44u) == 1u) goto L_10117ab3;
    wr32(sp0 - 0x38u, self);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t49 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, self);
    t50 = g->edx;
    t51 = rd32(esi + 4u);
    wr8(t51 + 8u, (uint8_t)t49);
    if ((int16_t)rd16(esi + 0x26u) > 0)
    {
        eax = t49;
        ecx = t51;
        edx = t50;
        goto L_10117c12;
    }
    eax = t49;
    ecx = t51;
    edx = t50;
    if (rd32(self + 0x10u) != 0xeu) goto L_10117b02;
    if ((int16_t)rd16(self + 0x66u) <= 0) goto L_10117c7c;
L_10117b02: ;
    g->edx = edx;
    d64 = fr(g, (double)rdf32(esi + 0xcu) * (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d64);
    g->esp = sp0 - 0x34u;
    t65 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t66 = g->edx;
    t67 = rd32(esi + 0x10u);
    wr32(sp0 - 0x20u, t67);
    t68 = rd32(esi + 8u);
    t69 = rd8(self + 0x34u);
    t70 = rd16(esi + 0x1cu);
    t71 = rd16(self + 0xb8u);
    wr16(sp0 - 0x14u, rd16(esi + 0x1au));
    wr32(sp0 - 0x18u, t68);
    t72 = rd32(esi + 0x14u);
    wr32(sp0 - 0x1cu, t72);
    if ((t69 & 0x20u) != 0u)
    {
        eax = t68;
        edx = t72;
        ebx = t65 << 0x18u | 0x808080u;
        edi = (edi & 0xffff0000u) | (uint16_t)(t70 + t71);
        loc_18 = t68;
        loc_20 = t67;
        loc_1c = t72;
        goto L_10117a8b;
    }
    edx = t72;
    ebx = t65 << 0x18u | 0x808080u;
    edi = (edi & 0xffff0000u) | (uint16_t)(t70 + t71);
    loc_20 = t67;
    loc_18 = t68;
    loc_1c = t72;
    t73 = rd32(rd32(esi + 0x30u));
    wr32(sp0 - 4u, t73);
    t74 = (uint32_t)(int16_t)rd16(t73 + 0xeu);
    wr32(sp0 - 8u, t74);
    g->ecx = t74;
    d75 = fr(g, (double)(int32_t)t74 * cow_bits2f(loc_20));
    fpush(g, d75);
    g->esp = sp0 - 0x34u;
    t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), t73, g->ecx, g->edx, 1, 0);
    t77 = g->ecx;
    wr32(sp0 - 8u, t76);
    t78 = (uint32_t)(int16_t)rd16(rd32(sp0 - 4u) + 0x10u);
    wr32(sp0 - 4u, t78);
    d79 = fr(g, (double)(int32_t)t78 * (double)rdf32(sp0 - 0x1cu));
    fpush(g, d79);
    t80 = cow_call_regs(g, COW_IMG(0x10311c6cu), t78, g->ecx, g->edx, 1, 0);
    if ((rd32(self + 0x34u) & 0x800000u) == 0u)
    {
        eax = rd32(self + 0x34u);
        edx = t80;
        d81 = (double)rdf32(esi + 0xcu);
        if (!(d81 < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            ecx = 0u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            ecx = 0x44u;
        }
    }
    else
    {
        eax = rd32(self + 0x34u);
        edx = t80;
        ecx = 8u;
    }
    t82 = (eax & 0xffffff00u) | rd8(self + 0xd0u);
    wr32(sp0 - 0x38u, t82);
    wr32(sp0 - 0x3cu, ecx);
    wr32(sp0 - 0x40u, ebx);
    t83 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x44u, t83);
    t84 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x48u, t84);
    t85 = (uint32_t)(int16_t)edi + (uint32_t)(int16_t)edx;
    wr32(sp0 - 0x4cu, t85);
    t86 = (uint32_t)(int16_t)rd16(sp0 - 0x14u) + (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x50u, t86);
    g->edx = (uint32_t)(int16_t)edi;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x10234ab0u), rd32(esi + 4u), 7, t86, t85, t84, t83, ebx, ecx, t82);
    t87 = g->edx;
    if (rd32(sp0 - 0x18u) == 0u)
    {
        edx = t87;
        goto L_10117ab3;
    }
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, ebx);
    t88 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x48u, t88);
    t89 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x4cu, t89);
    t90 = (uint32_t)(int16_t)rd16(esi + 0x20u);
    wr32(sp0 - 0x50u, t90);
    t91 = (uint32_t)(int16_t)rd16(esi + 0x1eu);
    wr32(sp0 - 0x54u, t91);
    eax = t89;
    edx = t91;
    loc_38 = 1u;
    loc_44 = ebx;
    loc_48 = t88;
    loc_4c = t89;
    loc_50 = t90;
    loc_54 = t91;
    goto L_10117aaa;
L_10117c12: ;
    t93 = (edx & 0xffff0000u) | rd16(esi + 0x26u);
    wr32(sp0 - 0x38u, t93);
    if ((rd8(self + 0x34u) & 0x20u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
        edx = t93;
        loc_38 = t93;
        t100 = (eax & 0xffff0000u) | rd16(COW_IMG(0x1036c190u));
        wr32(sp0 - 0x3cu, t100);
        t101 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0xb8u) + rd16(self + 0x3cu));
        wr32(sp0 - 0x40u, t101);
        t102 = (edx & 0xffff0000u) | rd16(self + 0x3au);
        wr32(sp0 - 0x44u, t102);
        t103 = rd32(esi + 8u);
        wr32(sp0 - 0x48u, t103);
        g->eax = t103;
        g->edx = t102;
        g->esp = sp0 - 0x34u;
        t104 = cow_thiscall(g, COW_IMG(0x1011a150u), self, 5, t103, t102, t101, t100, loc_38);
        t105 = g->edx;
        eax = t104;
        edx = t105;
    }
    else
    {
        edx = t93;
        loc_38 = t93;
        t94 = (rd32(esi + 0x30u) & 0xffff0000u) | rd16(COW_IMG(0x1036c190u));
        wr32(sp0 - 0x3cu, t94);
        t95 = (edx & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1cu) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(rd32(esi + 0x30u)) + 0x10u)));
        wr32(sp0 - 0x40u, t95);
        t96 = (rd32(rd32(esi + 0x30u)) & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1au) + rd16(rd32(rd32(esi + 0x30u)) + 0xeu));
        wr32(sp0 - 0x44u, t96);
        t97 = rd32(esi + 4u);
        wr32(sp0 - 0x48u, t97);
        g->eax = t96;
        g->edx = t95;
        g->esp = sp0 - 0x34u;
        t98 = cow_thiscall(g, COW_IMG(0x1011a250u), self, 5, t97, t96, t95, t94, loc_38);
        t99 = g->edx;
        eax = t98;
        edx = t99;
    }
    goto L_10117ebe;
L_10117c7c: ;
    if ((rd8(self + 0x34u) & 0x20u) != 0u)
    {
        t58 = (ecx & 0xffff0000u) | (uint16_t)((uint16_t)rd32(COW_IMG(0x1036c190u)) - rd16(self + 0x64u));
        wr32(sp0 - 0x38u, t58);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1036c190u)));
        t59 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0xb8u) + rd16(self + 0x3cu));
        wr32(sp0 - 0x40u, t59);
        t60 = (rd32(COW_IMG(0x1036c190u)) & 0xffff0000u) | rd16(self + 0x3au);
        wr32(sp0 - 0x44u, t60);
        t61 = rd32(esi + 8u);
        wr32(sp0 - 0x48u, t61);
        g->eax = t60;
        g->edx = t59;
        g->esp = sp0 - 0x34u;
        t62 = cow_thiscall(g, COW_IMG(0x1011a150u), self, 5, t61, t60, t59, rd32(COW_IMG(0x1036c190u)), t58);
        t63 = g->edx;
        eax = t62;
        edx = t63;
    }
    else
    {
        t52 = (edx & 0xffff0000u) | (uint16_t)((uint16_t)rd32(COW_IMG(0x1036c190u)) - rd16(self + 0x64u));
        wr32(sp0 - 0x38u, t52);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1036c190u)));
        t53 = (rd32(COW_IMG(0x1036c190u)) & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1cu) + (uint16_t)(rd16(self + 0xb8u) + rd16(rd32(rd32(esi + 0x30u)) + 0x10u)));
        wr32(sp0 - 0x40u, t53);
        t54 = (t52 & 0xffff0000u) | (uint16_t)(rd16(esi + 0x1au) + rd16(rd32(rd32(esi + 0x30u)) + 0xeu));
        wr32(sp0 - 0x44u, t54);
        t55 = rd32(esi + 4u);
        wr32(sp0 - 0x48u, t55);
        g->eax = t55;
        g->edx = t54;
        g->esp = sp0 - 0x34u;
        t56 = cow_thiscall(g, COW_IMG(0x1011a250u), self, 5, t55, t54, t53, rd32(COW_IMG(0x1036c190u)), t52);
        t57 = g->edx;
        eax = t56;
        edx = t57;
    }
    goto L_10117ebe;
L_10117e06: ;
    if (rd8(self + 0x9au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x9au);
        goto L_10117e5f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x9au);
    if (esi == 0u) goto L_10117e5f;
    wr32(sp0 - 0x38u, 0u);
    t122 = (uint32_t)(int16_t)rd16(self + 0x3eu) - (uint32_t)(int16_t)ebx;
    wr32(sp0 - 4u, t122);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    t123 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u);
    wr32(sp0 - 4u, t123);
    t124 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t124);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    d125 = (double)(float)fr(g, (double)(int32_t)t122 / (double)(int32_t)t123);
    wrf32(sp0 - 0x20u, (float)d125);
    wr32(sp0 - 0x4cu, cow_f2bits(d125));
    wr32(sp0 - 0x50u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x54u, (uint32_t)(int16_t)ebx);
    eax = (uint32_t)(int16_t)ebx;
    edx = (uint32_t)(int16_t)edi;
    loc_40 = 0u;
    loc_44 = t124;
    loc_48 = 0x3f800000u;
    loc_4c = cow_f2bits(d125);
    loc_50 = (uint32_t)(int16_t)edi;
    loc_54 = (uint32_t)(int16_t)ebx;
    goto L_10117e90;
L_10117e5f: ;
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    if (esi == 0u) goto L_10117e97;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 1u);
    t126 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x44u, t126);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x54u, (uint32_t)(int16_t)ebx);
    eax = t126;
    edx = (uint32_t)(int16_t)ebx;
    loc_40 = 1u;
    loc_44 = t126;
    loc_48 = 0x3f800000u;
    loc_4c = 0x3f800000u;
    loc_50 = (uint32_t)(int16_t)edi;
    loc_54 = (uint32_t)(int16_t)ebx;
    goto L_10117e90;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101177d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101177d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
