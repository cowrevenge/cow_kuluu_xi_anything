/* f_0x1008b460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1008b460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_9c;
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
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
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
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
    uint32_t t235;
    uint32_t t236;
    uint32_t t237;
    uint32_t t238;
    uint32_t t239;
    uint32_t t24;
    uint32_t t240;
    uint32_t t241;
    uint32_t t242;
    uint32_t t243;
    uint32_t t244;
    uint32_t t245;
    uint32_t t246;
    uint32_t t247;
    uint32_t t248;
    uint32_t t249;
    uint32_t t25;
    uint32_t t250;
    uint32_t t251;
    uint32_t t252;
    uint32_t t253;
    uint32_t t254;
    uint32_t t255;
    uint32_t t256;
    uint32_t t257;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_ebp);
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    if (rd8(self + 0xeeu) == 6u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008b47f;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax != 7u) goto L_1008b49b;
L_1008b47f: ;
    if ((rd32(self + 0x120u) & 0x200u) == 0u) goto L_1008c39f;
    if ((rd32(self + 0x128u) & 0x20000000u) == 0u) goto L_1008c39f;
L_1008b49b: ;
    if (arg1 != 0u)
    {
        edx = in_edx;
        goto L_1008b4c4;
    }
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x98u;
    t1 = cow_thiscall(g, COW_IMG(0x10083320u), rd32(self + 0xa0u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1008b4c4;
    }
    eax = t1;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b4c4: ;
    t3 = rd32(self + 0x170u);
    wr32(sp0 - 0x9cu, t3);
    g->eax = t3;
    g->edx = edx;
    t4 = rd32(self + 0x12cu);
    g->esp = sp0 - 0x98u;
    t5 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(sp0 - 0x86u, (uint8_t)t5);
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ebx = (t4 >> 0x16u & 0xffffff00u) | (t4 >> 0x16u & 1u);
        t11 = rd32(self + 0x16cu);
        wr32(sp0 - 0x9cu, t11);
        edx = t11;
        loc_9c = t11;
    }
    else
    {
        eax = t8;
        edx = t9;
        ebx = (t4 >> 0x16u & 0xffffff00u) | (t4 >> 0x16u & 1u);
        t10 = rd32(self + 0x170u);
        wr32(sp0 - 0x9cu, t10);
        loc_9c = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t12 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, loc_9c);
    t13 = g->edx;
    wr8(sp0 - 0x85u, (uint8_t)t12);
    t14 = rd32(self + 0x170u);
    wr32(sp0 - 0x9cu, t14);
    g->eax = t14;
    g->edx = t13;
    t15 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t14);
    t16 = g->ecx;
    t17 = g->edx;
    wr8(sp0 - 0x87u, (uint8_t)t15);
    if (rd8(self + 0xeeu) != 4u)
    {
        eax = (t15 & 0xffffff00u) | rd8(self + 0xeeu);
        edx = t17;
        goto L_1008b5cc;
    }
    eax = (t15 & 0xffffff00u) | rd8(self + 0xeeu);
    ecx = t16;
    edx = t17;
    if (rd8(self + 0x1bcu) != 0u) goto L_1008b5cc;
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x1bcu);
    if ((int32_t)rd32(self + 0x170u) < 10)
    {
        eax = rd32(self + 0x170u);
        goto L_1008c39f;
    }
    eax = rd32(self + 0x170u);
    if ((int32_t)eax > 17) goto L_1008c39f;
    if (eax == rd32(self + 0x16cu)) goto L_1008c39f;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t18 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t19 = g->edx;
    if (t18 >= rd32(self + 0x184u))
    {
        eax = t18;
        edx = t19;
        goto L_1008b574;
    }
    eax = t18;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b574: ;
    if (rd8(self + 0xeeu) != 4u) goto L_1008c39f;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x84u, 0);
    t20 = g->edx;
    t21 = rd32(self + 0x180u) * 0x3cu;
    wr32(sp0 - 0x9cu, t21);
    cow_thiscall(g, COW_IMG(0x1018bbe0u), sp0 - 0x84u, 1, t21);
    t22 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x9cu, t22);
    t23 = rd32(self + 0x16cu) - 0xau;
    wr32(sp0 - 0xa0u, t23);
    g->eax = t23;
    t24 = cow_thiscall(g, COW_IMG(0x100c3d50u), rd32(self + 0xa0u), 2, t23, t22);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (t24 & 0xffffff00u) | 1u;
L_1008b5cc: ;
    if (rd16(self + 0x210u) != 0u) goto L_1008b5f7;
    if ((uint8_t)eax == 2u) goto L_1008bc40;
    if ((uint8_t)eax == 3u) goto L_1008bc40;
    if ((uint8_t)eax == 4u) goto L_1008bc40;
    if ((uint8_t)eax == 5u) goto L_1008bc40;
L_1008b5f7: ;
    if ((rd32(self + 0x78u) & 0xff000000u) == 0u) goto L_1008b63e;
    if (!(rd32(self + 0x12cu) >> 0x1eu & 1u)) goto L_1008b616;
    if ((uint8_t)eax == 0u) goto L_1008b63e;
    if ((uint8_t)eax == 1u) goto L_1008b63e;
L_1008b616: ;
    t25 = rd32(self + 0x120u);
    if (!(t25 >> 0xdu & 1u))
    {
        ecx = t25;
        edx = t25 >> 0xdu;
        goto L_1008b62a;
    }
    ecx = t25;
    edx = t25 >> 0xdu;
    if ((uint8_t)eax == 1u) goto L_1008b63e;
L_1008b62a: ;
    if ((uint8_t)eax == 6u) goto L_1008b63e;
    if ((uint8_t)eax == 8u) goto L_1008b63e;
    if (!(ecx >> 2u & 1u)) goto L_1008bc40;
L_1008b63e: ;
    if ((uint32_t)(int8_t)rd8(self + 0x1bcu) > 0x11u) goto L_1008bc40;
    ecx = (uint32_t)(int8_t)rd8(self + 0x1bcu);
    t26 = rd32(COW_IMG(0x1008c3b0u) + rd8(COW_IMG(0x1008c3dcu) + ecx) * 4u);
    switch (t26 - RD)
    {
    case 0x1008b65du: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b65d;
    case 0x1008b738u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b738;
    case 0x1008b789u: goto L_1008b789;
    case 0x1008b7beu: goto L_1008b7be;
    case 0x1008b853u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b853;
    case 0x1008b8eeu: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b8ee;
    case 0x1008b937u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b937;
    case 0x1008b9ceu: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008b9ce;
    case 0x1008baefu: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008baef;
    case 0x1008bbd0u: goto L_1008bbd0;
    case 0x1008bc40u: edx = rd8(COW_IMG(0x1008c3dcu) + ecx); goto L_1008bc40;
    default: rt_fatal(g, COW_IMG(0x1008b656u), "switch");
    }
    return 0;
L_1008b65d: ;
    t120 = rd8(sp0 - 0x87u);
    wr8(self + 0x1bdu, 0u);
    if ((uint8_t)t120 == 0u)
    {
        eax = (eax & 0xffffff00u) | t120;
        goto L_1008b6c5;
    }
    eax = (eax & 0xffffff00u) | t120;
    if ((rd32(self + 0x120u) & 0x200u) == 0u) goto L_1008c39f;
    if ((rd32(self + 0x128u) & 0x20000000u) == 0u) goto L_1008c39f;
    wr32(sp0 - 0x9cu, 0u);
    t121 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, COW_IMG(0x100d60c0u), t121, 1, 0u);
    t122 = g->ecx;
    t123 = rd32(self + 0xa0u);
    t124 = rd32(sp0 - 0x98u);
    wr8(t123 + 0xb2u, rd8(t123 + 0xb2u) | 0x40u);
    wr32(self + 0x1ccu, 0u);
    wr8(self + 0x1bcu, 0xeu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t124;
    g->ebp = rd32(sp0 - 0x90u);
    return t123 & 0xffffff00u;
L_1008b6c5: ;
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t125 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t126 = g->edx;
    if ((uint8_t)t125 == 0u)
    {
        eax = t125;
        edx = t126;
        goto L_1008b6eb;
    }
    eax = t125;
    wr8(self + 0x1bcu, 0xeu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b6eb: ;
    if (rd32(self + 0x170u) != 1u) goto L_1008bc40;
    if (rd8(rd32(self + 0xa0u) + 0x8b5u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0x8b5u);
        ecx = rd32(self + 0xa0u);
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, COW_IMG(0x100d16c0u), ecx, 0);
        t128 = g->edx;
        edx = t128;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0x8b5u);
        ecx = rd32(self + 0xa0u);
        g->esp = sp0 - 0x98u;
        cow_fastcall(g, COW_IMG(0x100d1970u), ecx, edx, 0);
        t127 = g->edx;
        edx = t127;
    }
    g->eax = rd32(rd32(self + 0xa0u));
    t129 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t130 = cow_thiscall(g, rd32(t129 + 0x160u), rd32(self + 0xa0u), 0);
    wr8(self + 0x1bcu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t130 & 0xffffff00u;
L_1008b738: ;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t114 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t115 = g->edx;
    if ((uint8_t)t114 == 0u)
    {
        eax = t114;
    }
    else
    {
        eax = t114;
        edx = t115;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->eax = eax;
        g->edx = edx;
        t116 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t117 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ed0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t118 = g->edx;
        wr32(sp0 - 0xa4u, t117);
        t119 = cow_thiscall(g, rd32(t116 + 0x298u), rd32(self + 0xa0u), 3, t117, 0u, 0u);
        wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
        wr8(self + 0x1bcu, 2u);
        eax = t119;
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b789: ;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 1u);
    g->edx = rd32(rd32(self + 0xa0u));
    t110 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, rd32(t110 + 0x31cu), rd32(self + 0xa0u), 2, 1u, 0u);
    t111 = g->edx;
    g->eax = rd32(rd32(self + 0xa0u));
    t112 = rd32(rd32(self + 0xa0u));
    t113 = cow_thiscall(g, rd32(t112 + 0x164u), rd32(self + 0xa0u), 0);
    wr8(self + 0x1bcu, 3u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t113 & 0xffffff00u;
L_1008b7be: ;
    if (rd32(self + 0x170u) == 1u)
    {
        eax = rd32(self + 0x170u);
        goto L_1008c39f;
    }
    eax = rd32(self + 0x170u);
    if (eax == 3u) goto L_1008c39f;
    if (rd16(self + 0x74u) != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    }
    else
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        if (rd32(COW_IMG(0x1057876cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
            wr32(sp0 - 0x9cu, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x98u;
            cow_thiscall(g, COW_IMG(0x10157660u), ecx, 1, 0u);
            t106 = g->edx;
            edx = t106;
        }
    }
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0x67746e62u);
    g->eax = rd32(rd32(self + 0xa0u));
    g->edx = edx;
    t107 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t108 = cow_thiscall(g, rd32(t107 + 0x298u), rd32(self + 0xa0u), 3, 0x67746e62u, 0u, 0u);
    t109 = g->edx;
    cow_thiscall(g, COW_IMG(0x100d14c0u), rd32(self + 0xa0u), 0);
    if (rd32(self + 0x170u) == 0x21u)
    {
        eax = rd32(self + 0x170u);
        goto L_1008b83d;
    }
    eax = rd32(self + 0x170u);
    if (eax == 7u) goto L_1008b83d;
    wr8(self + 0x1bcu, 0x11u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b83d: ;
    wr8(self + 0x1bcu, 6u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b853: ;
    g->esp = sp0 - 0x98u;
    t91 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t91 == 0u)
    {
        eax = t91;
        goto L_1008c39f;
    }
    eax = t91;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0x74626c6bu);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0xa0u));
    t92 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t93 = cow_thiscall(g, rd32(t92 + 0x298u), rd32(self + 0xa0u), 3, 0x74626c6bu, 0u, 0u);
    t94 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    g->edx = t94;
    t95 = rd32(rd32(self + 0xa0u));
    t96 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ef0u), rd32(self + 0xa0u), 2, 0u, 0u);
    t97 = g->edx;
    wr32(sp0 - 0xa4u, t96);
    g->edx = t97;
    g->esp = sp0 - 0xa0u;
    cow_thiscall(g, rd32(t95 + 0x298u), rd32(self + 0xa0u), 1, t96);
    t98 = g->edx;
    wr32(sp0 - 0xa4u, 0u);
    t99 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa8u, t99);
    wr32(sp0 - 0xacu, 0x74617768u);
    g->eax = rd32(t99);
    t100 = rd32(t99);
    t101 = cow_thiscall(g, rd32(t100 + 0x298u), t99, 3, 0x74617768u, t99, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    g->edx = rd32(rd32(self + 0xa0u));
    t102 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t103 = cow_thiscall(g, rd32(t102 + 0x31cu), rd32(self + 0xa0u), 4, 0u, 0u, 0u, 0u);
    t104 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    t105 = cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
    wr8(self + 0x1bcu, 5u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (t105 & 0xffffff00u) | 1u;
L_1008b8ee: ;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t84 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t85 = g->edx;
    if ((uint8_t)t84 == 0u)
    {
        eax = t84;
    }
    else
    {
        edx = t85;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0x746f6177u);
        g->eax = rd32(rd32(self + 0xa0u));
        g->edx = edx;
        t86 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t87 = cow_thiscall(g, rd32(t86 + 0x2a0u), rd32(self + 0xa0u), 2, 0x746f6177u, 0u);
        t88 = g->edx;
        if ((uint8_t)t87 != 0u)
        {
            eax = t87;
        }
        else
        {
            eax = t87;
            edx = t88;
            wr32(sp0 - 0x9cu, 1u);
            t89 = rd32(self + 0xa0u);
            wr8(self + 0x1bcu, (uint8_t)eax);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t90 = cow_thiscall(g, COW_IMG(0x100d44b0u), t89, 1, 1u);
            eax = t90;
        }
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b937: ;
    g->esp = sp0 - 0x98u;
    t69 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t69 == 0u)
    {
        eax = t69;
    }
    else
    {
        eax = t69;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        wr32(sp0 - 0xa4u, 0x74626c6bu);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0xa0u));
        t70 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t71 = cow_thiscall(g, rd32(t70 + 0x298u), rd32(self + 0xa0u), 3, 0x74626c6bu, 0u, 0u);
        t72 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->edx = t72;
        t73 = rd32(rd32(self + 0xa0u));
        t74 = cow_thiscall_cdecl(g, COW_IMG(0x100d2ef0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t75 = g->edx;
        wr32(sp0 - 0xa4u, t74);
        g->edx = t75;
        g->esp = sp0 - 0xa0u;
        cow_thiscall(g, rd32(t73 + 0x298u), rd32(self + 0xa0u), 1, t74);
        t76 = g->edx;
        wr32(sp0 - 0xa4u, 0u);
        t77 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa8u, t77);
        wr32(sp0 - 0xacu, 0x74617768u);
        g->eax = rd32(t77);
        t78 = rd32(t77);
        t79 = cow_thiscall(g, rd32(t78 + 0x298u), t77, 3, 0x74617768u, t77, 0u);
        wr32(sp0 - 0xa4u, 0u);
        wr32(sp0 - 0xa8u, 0u);
        wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
        g->edx = rd32(rd32(self + 0xa0u));
        t80 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t81 = cow_thiscall(g, rd32(t80 + 0x31cu), rd32(self + 0xa0u), 4, 0u, 0u, 0u, 0u);
        t82 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        t83 = cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
        wr8(self + 0x1bcu, 7u);
        eax = t83;
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008b9ce: ;
    if (rd8(sp0 - 0x87u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
        wr32(sp0 - 0x9cu, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
        t49 = g->edx;
        if (rd32(self + 0x1ccu) < 0x97u)
        {
            eax = rd32(self + 0x1ccu);
            edx = t49;
            if (eax < 0x96u)
            {
                wr32(self + 0x1ccu, eax + 1u);
                if (rd32(self + 0xa4u) == 0u)
                {
                    eax = eax + 1u;
                }
                else
                {
                    eax = eax + 1u;
                    ecx = rd32(self + 0xa4u);
                    g->edx = edx;
                    g->esp = sp0 - 0x98u;
                    t52 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, ecx, g->edx, 1, 0);
                    t53 = g->edx;
                    if ((uint8_t)t52 == 0u)
                    {
                        eax = t52;
                        edx = t53;
                    }
                    else
                    {
                        eax = t52;
                        edx = t53;
                        wr32(self + 0x1ccu, 0x96u);
                    }
                }
            }
            else
            {
                t51 = rd32(self + 0xa0u);
                wr32(t51 + 0x59cu, 0u);
                wr32(self + 0x1ccu, 0x97u);
                eax = t51;
            }
        }
        else
        {
            edx = t49;
            t50 = rd32(self + 0xa0u);
            wr8(t50 + 0xb2u, rd8(t50 + 0xb2u) & 0xbfu);
            eax = t50;
        }
    }
    t54 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t54);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t55 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, t54);
    if ((uint8_t)t55 != 0u)
    {
        eax = t55;
        goto L_1008c39f;
    }
    eax = t55;
    t56 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t56);
    g->eax = eax;
    g->edx = t56;
    g->esp = sp0 - 0x98u;
    t57 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t56);
    t58 = g->ecx;
    t59 = g->edx;
    if ((uint8_t)t57 != 0u)
    {
        eax = t57;
        goto L_1008c39f;
    }
    eax = t57;
    ecx = t58;
    edx = t59;
    if ((int8_t)rd8(self + 0x120u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
        goto L_1008baac;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
    if (rd8(COW_IMG(0x104807f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
        goto L_1008baac;
    }
    t60 = rd32(self + 0x174u);
    wr32(sp0 - 0x9cu, t60);
    g->eax = t60;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t61 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, t60);
    t62 = g->edx;
    if ((uint8_t)t61 != 0u)
    {
        eax = t61;
        goto L_1008c39f;
    }
    edx = t62;
    t63 = rd32(self + 0x174u);
    wr32(sp0 - 0x9cu, t63);
    g->eax = t63;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t64 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t63);
    t65 = g->ecx;
    t66 = g->edx;
    if ((uint8_t)t64 != 0u)
    {
        eax = t64;
        goto L_1008c39f;
    }
    eax = t64;
    ecx = t65;
    edx = t66;
L_1008baac: ;
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax != 4u)
        {
            if ((uint8_t)eax != 5u)
            {
                g->eax = eax;
                g->esp = sp0 - 0x98u;
                t67 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
                if (rd32(self + 0x78u) != rd32(t67 + 4u))
                {
                    eax = t67;
                }
                else
                {
                    eax = t67;
                    edx = rd32(t67 + 4u);
                    wr32(sp0 - 0x9cu, 0u);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x98u;
                    t68 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                    eax = t68;
                }
            }
        }
    }
    wr8(self + 0x1bcu, 0xfu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008baef: ;
    if ((uint8_t)eax == 3u) goto L_1008bbba;
    if ((uint8_t)eax == 4u) goto L_1008bbba;
    if ((uint8_t)eax == 5u) goto L_1008bbba;
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t34 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    if (rd32(self + 0x78u) != rd32(t34 + 4u))
    {
        eax = t34;
        edx = rd32(self + 0x78u);
        goto L_1008bb3b;
    }
    eax = t34;
    edx = rd32(self + 0x78u);
    if (rd32(self + 0xa4u) == 0u) goto L_1008bb3b;
    wr32(sp0 - 0x9cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t35 = cow_thiscall(g, COW_IMG(0x100d65b0u), rd32(self + 0xa0u), 1, 0u);
    t36 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        edx = t36;
        goto L_1008bb3b;
    }
    eax = t35;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax;
L_1008bb3b: ;
    if (rd8(sp0 - 0x87u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    }
    else
    {
        wr32(sp0 - 0x9cu, 0x808080u);
        g->eax = rd32(rd32(self + 0xa0u));
        t37 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x98u;
        t38 = cow_thiscall(g, rd32(t37 + 0x30u), rd32(self + 0xa0u), 1, 0x808080u);
        eax = t38;
    }
    wr32(sp0 - 0x9cu, 0u);
    t39 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t39);
    wr32(sp0 - 0xa4u, 0x66666f63u);
    g->edx = rd32(t39);
    t40 = rd32(t39);
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, rd32(t40 + 0x298u), t39, 3, 0x66666f63u, t39, 0u);
    t41 = g->edx;
    t42 = rd32(self + 0xa0u);
    wr32(t42 + 0x7d8u, 0x20202020u);
    if (rd32(self + 0xa4u) == 0u)
    {
        edx = t41;
    }
    else
    {
        eax = t42;
        edi = rd32(self + 0xa4u);
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, edi);
        wr32(sp0 - 0xa4u, 0x66666f63u);
        g->edx = rd32(edi);
        t43 = rd32(edi);
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, rd32(t43 + 0x298u), edi, 3, 0x66666f63u, edi, 0u);
        t44 = g->edx;
        wr32(edi + 0x7d8u, 0x20202020u);
        wr32(edi + 0x768u, 0u);
        edx = t44;
    }
    t45 = rd32(self + 0xa0u);
    wr32(t45 + 0x768u, 0u);
    g->eax = t45;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t46 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
    t47 = g->edx;
    t48 = cow_fastcall(g, COW_IMG(0x1008a2f0u), self, t47, 0);
    eax = t48;
L_1008bbba: ;
    wr8(self + 0x1bcu, 0x10u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bbd0: ;
    t27 = rd32(self + 0xa4u);
    wr32(sp0 - 0x9cu, t27);
    wr32(sp0 - 0xa0u, 0x66666f63u);
    g->eax = t27;
    g->edx = rd32(rd32(self + 0xa0u));
    t28 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t29 = cow_thiscall(g, rd32(t28 + 0x2a0u), rd32(self + 0xa0u), 2, 0x66666f63u, t27);
    t30 = g->edx;
    if ((uint8_t)t29 != 1u)
    {
        eax = t29;
        edx = t30;
        goto L_1008bbfd;
    }
    eax = t29;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bbfd: ;
    wr32(sp0 - 0x9cu, 7u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t31 = cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 7u);
    t32 = g->edx;
    wr32(sp0 - 0x9cu, 0xffu);
    t33 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        goto L_1008c39f;
    }
    eax = t33;
    if (rd8(sp0 - 0x87u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
        goto L_1008c39f;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x87u);
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008bc40: ;
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008c39f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 4u) goto L_1008c39f;
    if ((uint8_t)eax == 5u) goto L_1008c39f;
    if ((uint32_t)(int8_t)rd8(self + 0x1bcu) > 0x1au)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x1bcu);
        goto L_1008c39f;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x1bcu);
    t131 = rd32(COW_IMG(0x1008c3f0u) + rd8(COW_IMG(0x1008c430u) + eax) * 4u);
    switch (t131 - RD)
    {
    case 0x1008bc7du: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008bc7d;
    case 0x1008bd3bu: goto L_1008bd3b;
    case 0x1008bd9au: goto L_1008bd9a;
    case 0x1008bdddu: goto L_1008bddd;
    case 0x1008be26u: goto L_1008be26;
    case 0x1008be89u: goto L_1008be89;
    case 0x1008bfcdu: goto L_1008bfcd;
    case 0x1008c024u: goto L_1008c024;
    case 0x1008c130u: goto L_1008c130;
    case 0x1008c171u: goto L_1008c171;
    case 0x1008c1b0u: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008c1b0;
    case 0x1008c1f5u: goto L_1008c1f5;
    case 0x1008c272u: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008c272;
    case 0x1008c29bu: ecx = rd8(COW_IMG(0x1008c430u) + eax); goto L_1008c29b;
    case 0x1008c36au: goto L_1008c36a;
    case 0x1008c39fu: goto L_1008c39f;
    default: rt_fatal(g, COW_IMG(0x1008bc76u), "switch");
    }
    return 0;
L_1008bc7d: ;
    t252 = rd32(self + 0x170u);
    wr8(self + 0x1bdu, 0u);
    if (t252 != 0x30u)
    {
        eax = t252;
        goto L_1008bcc7;
    }
    eax = t252;
    t253 = rd16(COW_IMG(0x1035b8dau));
    wr8(self + 0x1bcu, 0xcu);
    wr16(self + 0x1c0u, (uint16_t)t253);
    t254 = rd16(COW_IMG(0x10485f7au));
    wr16(self + 0x1beu, (uint16_t)t254);
    wr8(self + 0x1bdu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return ((eax & 0xffff0000u) | t254) & 0xffffff00u;
L_1008bcc7: ;
    if (rd8(sp0 - 0x86u) == 0u) goto L_1008bcfc;
    wr8(self + 0x1bcu, 0x17u);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t255 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
    t256 = g->edx;
    if ((uint8_t)t255 != 0u)
    {
        eax = t255;
    }
    else
    {
        eax = t255;
        edx = t256;
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t257 = cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
        eax = t257;
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bcfc: ;
    if (eax != 0x2fu) goto L_1008bd17;
    wr8(self + 0x1bcu, 0x14u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bd17: ;
    if (eax == 0x21u) goto L_1008bd25;
    if (eax != 7u) goto L_1008c39f;
L_1008bd25: ;
    wr8(self + 0x1bcu, 7u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bd3b: ;
    g->esp = sp0 - 0x98u;
    t243 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t243 == 0u)
    {
        eax = t243;
    }
    else
    {
        eax = t243;
        t244 = rd32(self + 0xa0u);
        wr32(sp0 - 0x9cu, t244);
        wr32(sp0 - 0xa0u, 0x746f6177u);
        g->eax = eax;
        g->edx = rd32(t244);
        t245 = rd32(t244);
        g->esp = sp0 - 0x98u;
        t246 = cow_thiscall(g, rd32(t245 + 0x2a0u), t244, 2, 0x746f6177u, t244);
        t247 = g->edx;
        if ((uint8_t)t246 != 0u)
        {
            eax = t246;
        }
        else
        {
            eax = t246;
            edx = t247;
            wr32(sp0 - 0x9cu, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x98u;
            cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 1u);
            t248 = g->edx;
            wr32(sp0 - 0x9cu, 0u);
            t249 = rd32(self + 0xa0u);
            wr32(sp0 - 0xa0u, t249);
            wr32(sp0 - 0xa4u, 0x30736572u);
            g->eax = rd32(t249);
            t250 = rd32(t249);
            t251 = cow_thiscall(g, rd32(t250 + 0x298u), t249, 3, 0x30736572u, t249, 0u);
            wr8(self + 0x1bcu, 8u);
            eax = t251;
        }
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008bd9a: ;
    if (rd32(self + 0x170u) == 0x21u)
    {
        eax = rd32(self + 0x170u);
        goto L_1008c39f;
    }
    eax = rd32(self + 0x170u);
    if (eax == 7u) goto L_1008c39f;
    wr32(sp0 - 0x9cu, 0u);
    t241 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t241);
    wr32(sp0 - 0xa4u, 0x32736572u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t242 = cow_thiscall(g, rd32(rd32(t241) + 0x298u), t241, 3, 0x32736572u, t241, 0u);
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t242 & 0xffffff00u;
L_1008bddd: ;
    g->esp = sp0 - 0x98u;
    t236 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t236 == 0u)
    {
        eax = t236;
    }
    else
    {
        t237 = rd32(self + 0x128u) | 4u;
        t238 = rd16(self + 0x1c0u);
        t239 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t237);
        wr32(sp0 - 0x9cu, t238);
        g->eax = t238;
        g->esp = sp0 - 0x98u;
        t240 = cow_thiscall(g, COW_IMG(0x100d1c30u), t239, 1, t238);
        wr8(self + 0x1bcu, 0xau);
        eax = t240;
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008be26: ;
    g->esp = sp0 - 0x98u;
    t233 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t233 == 0u)
    {
        eax = t233;
    }
    else
    {
        eax = t233;
        t234 = rd32(self + 0x128u) & 0xfffffffbu;
        wr32(self + 0x128u, t234);
        if (rd8(rd32(self + 0xa0u) + 0xf8u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0xf8u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0xf8u);
            ecx = rd32(self + 0xa0u);
            wr32(self + 0x1c4u, 0x746f6d65u);
            wr32(self + 0x1c8u, ecx);
            wr32(sp0 - 0x9cu, 0u);
            wr32(sp0 - 0xa0u, ecx);
            wr32(sp0 - 0xa4u, 0x746f6d65u);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t235 = cow_thiscall(g, rd32(rd32(ecx) + 0x298u), ecx, 3, 0x746f6d65u, ecx, 0u);
            eax = t235;
        }
        wr8(self + 0x1bcu, 0xbu);
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008be89: ;
    t208 = rd32(self + 0x1ccu) + 1u;
    wr32(self + 0x1ccu, t208);
    if ((uint8_t)ebx == 0u) goto L_1008bf4f;
    t209 = rd32(self + 0x1c8u);
    wr32(sp0 - 0x9cu, t209);
    t210 = rd32(self + 0x1c4u);
    wr32(sp0 - 0xa0u, t210);
    g->eax = rd32(rd32(self + 0xa0u));
    g->edx = t210;
    t211 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x98u;
    t212 = cow_thiscall(g, rd32(t211 + 0x2a0u), rd32(self + 0xa0u), 2, t210, t209);
    t213 = g->edx;
    if ((uint8_t)t212 != 1u)
    {
        eax = t212;
        edx = t213;
        goto L_1008bf1f;
    }
    eax = t212;
    edx = t213;
    if (rd32(self + 0x1ccu) >= 4u)
    {
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t214 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 0u, 0u);
        t215 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 1u);
        g->edx = t215;
        t216 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 1u, 0u);
        t217 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 4u);
        g->edx = t217;
        t218 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 4u, 0u);
        t219 = g->edx;
        eax = t218;
        edx = t219;
    }
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t220 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, 0xffu);
    t221 = g->edx;
    if ((uint8_t)t220 != 0u)
    {
        eax = t220;
        edx = t221;
        goto L_1008bf1f;
    }
    edx = t221;
    t222 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t222);
    g->eax = t222;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t223 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, t222);
    t224 = g->edx;
    if ((uint8_t)t223 != 0u)
    {
        eax = t223;
        edx = t224;
        goto L_1008bf1f;
    }
    eax = t223;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax;
L_1008bf1f: ;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t225 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 0u, 0u);
    t226 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 1u);
    g->edx = t226;
    t227 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 1u, 0u);
    t228 = g->edx;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 4u);
    g->edx = t228;
    t229 = cow_thiscall(g, COW_IMG(0x100d5f10u), rd32(self + 0xa0u), 2, 4u, 0u);
    t230 = g->edx;
    wr8(self + 0x1bdu, 0u);
    eax = t229;
    edx = t230;
L_1008bf4f: ;
    wr32(sp0 - 0x9cu, 3u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t231 = cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 3u);
    if (rd8(sp0 - 0x86u) == 0u) goto L_1008bf80;
    eax = (t231 & 0xffffff00u) | rd8(sp0 - 0x86u);
    wr8(self + 0x1bcu, 0x18u);
    wr32(self + 0x1ccu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008bf80: ;
    if (rd32(self + 0x170u) != 0x30u)
    {
        eax = rd32(self + 0x170u);
        goto L_1008bfa7;
    }
    eax = rd32(self + 0x170u);
    wr8(self + 0x1bcu, 0x16u);
    wr32(self + 0x1ccu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_1008bfa7: ;
    wr32(self + 0x1ccu, 0u);
    t232 = rd32(sp0 - 0x98u);
    wr8(self + 0x1bcu, (eax != 0x2fu) - 1u & 0x15u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t232;
    g->ebp = rd32(sp0 - 0x90u);
    return 1u;
L_1008bfcd: ;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t202 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t203 = g->edx;
    if ((uint8_t)t202 == 0u)
    {
        eax = t202;
    }
    else
    {
        eax = t202;
        edx = t203;
        t204 = rd16(self + 0x1c0u) >> 3u;
        wr32(sp0 - 0x9cu, t204);
        t205 = rd32(self + 0x128u) | 4u;
        t206 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t205);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t207 = cow_thiscall(g, COW_IMG(0x100d1c30u), t206, 1, t204);
        wr8(self + 0x1bcu, 0xdu);
        if ((uint8_t)ebx == 0u)
        {
            eax = t207;
        }
        else
        {
            eax = t207;
            wr8(self + 0x1bdu, 1u);
        }
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c024: ;
    if ((uint8_t)ebx != 0u)
    {
        wr8(self + 0x1bdu, 1u);
    }
    g->esp = sp0 - 0x98u;
    t184 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    if ((uint8_t)t184 == 0u)
    {
        eax = t184;
        goto L_1008c121;
    }
    eax = t184;
    t185 = rd32(self + 0x128u) & 0xfffffffbu;
    t186 = rd32(self + 0xa0u);
    wr32(self + 0x128u, t185);
    if (rd8(t186 + 0xf8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(t186 + 0xf8u);
        goto L_1008c11a;
    }
    eax = (eax & 0xffffff00u) | rd8(t186 + 0xf8u);
    edx = t186;
    if ((uint8_t)ebx == 0u) goto L_1008c0a1;
    wr32(sp0 - 0x9cu, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t187 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, 0xffu);
    t188 = g->edx;
    if ((uint8_t)t187 != 0u)
    {
        eax = t187;
        goto L_1008c08b;
    }
    edx = t188;
    t189 = rd32(self + 0x16cu);
    wr32(sp0 - 0x9cu, t189);
    g->eax = t189;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t190 = cow_thiscall(g, COW_IMG(0x10095820u), self, 1, t189);
    t191 = g->edx;
    if ((uint8_t)t190 == 0u)
    {
        edx = t191;
        goto L_1008c0a1;
    }
    eax = t190;
L_1008c08b: ;
    wr8(self + 0x1bcu, 0xbu);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c0a1: ;
    if ((int32_t)(rd16(self + 0x1c0u) & 0x80000007u) >= 0)
    {
        eax = rd16(self + 0x1c0u) & 0x80000007u;
    }
    else
    {
        eax = rd16(self + 0x1c0u) & 0x80000007u;
        eax = (eax - 1u | 0xfffffff8u) + 1u;
    }
    wr32(sp0 - 0x9cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t192 = cow_stdcall(g, COW_IMG(0x100d2f10u), 1, eax);
    t193 = rd16(self + 0x1beu);
    wr32(sp0 - 0x9cu, t193);
    t194 = rd32(self + 0xa0u);
    wr32(self + 0x1c4u, t192);
    wr32(self + 0x1c8u, t194);
    g->ecx = t194;
    g->edx = t193;
    t195 = cow_call_regs(g, COW_IMG(0x10086fc0u), t192, g->ecx, g->edx, 1, 1, t193);
    t196 = g->ecx;
    t197 = g->edx;
    if ((uint8_t)t195 == 0u)
    {
        ecx = t196;
        edi = t192;
    }
    else
    {
        ecx = t196;
        edx = t197;
        edi = t192;
        if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u)
        {
            edx = rd32(COW_IMG(0x10480af0u) + edx * 4u);
            t198 = rd32(edx + 0xa0u);
            wr32(self + 0x1c8u, t198);
        }
    }
    wr32(sp0 - 0x9cu, 0u);
    t199 = rd32(self + 0x1c8u);
    wr32(sp0 - 0xa0u, t199);
    wr32(sp0 - 0xa4u, edi);
    g->eax = rd32(ecx);
    t200 = rd32(ecx);
    g->esp = sp0 - 0x98u;
    t201 = cow_thiscall(g, rd32(t200 + 0x298u), ecx, 3, edi, t199, 0u);
    wr32(self + 0x1ccu, 0u);
    eax = t201;
L_1008c11a: ;
    wr8(self + 0x1bcu, 0xbu);
L_1008c121: ;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c130: ;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t178 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t179 = g->edx;
    if ((uint8_t)t178 == 0u)
    {
        eax = t178;
    }
    else
    {
        eax = t178;
        edx = t179;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t180 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        t181 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t181);
        wr32(sp0 - 0xa4u, 0x30746973u);
        g->eax = rd32(t181);
        t182 = rd32(t181);
        t183 = cow_thiscall(g, rd32(t182 + 0x298u), t181, 3, 0x30746973u, t181, 0u);
        wr8(self + 0x1bcu, 0x15u);
        eax = t183;
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c171: ;
    if (rd32(self + 0x170u) == 0x2fu) goto L_1008c39f;
    wr32(sp0 - 0x9cu, 0u);
    t173 = rd32(self + 0xa0u);
    wr32(sp0 - 0xa0u, t173);
    wr32(sp0 - 0xa4u, 0x32746973u);
    g->eax = eax;
    g->edx = rd32(t173);
    t174 = rd32(t173);
    g->esp = sp0 - 0x98u;
    t175 = cow_thiscall(g, rd32(t174 + 0x298u), t173, 3, 0x32746973u, t173, 0u);
    t176 = g->edx;
    eax = t175;
    edx = t176;
L_1008c193: ;
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t177 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
    wr8(self + 0x1bcu, 0u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return t177 & 0xffffff00u;
L_1008c1b0: ;
    if (rd32(self + 0x170u) == 0x30u) goto L_1008c39f;
    t171 = rd16(COW_IMG(0x1035b8deu));
    t172 = rd32(sp0 - 0x98u);
    wr16(self + 0x1c0u, (uint16_t)t171);
    wr16(self + 0x1beu, rd16(COW_IMG(0x10485f7au)));
    wr8(self + 0x1bcu, 0xcu);
    wr8(self + 0x1bdu, 1u);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = t172;
    g->ebp = rd32(sp0 - 0x90u);
    return ((eax & 0xffff0000u) | t171) & 0xffffff00u;
L_1008c1f5: ;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t157 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
    t158 = g->edx;
    if ((uint8_t)t157 == 0u)
    {
        eax = t157;
    }
    else
    {
        eax = t157;
        edx = t158;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t159 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t160 = g->edx;
        g->edx = t160;
        t161 = cow_call_regs(g, COW_IMG(0x1008e130u), t159, self, g->edx, 1, 0);
        t162 = g->ecx;
        t163 = g->edx;
        if ((uint8_t)t161 != 0u)
        {
            ecx = t162;
            edx = t163;
            goto L_1008c232;
        }
        ecx = t162;
        t164 = rd32(self + 0x12cu);
        if (t164 >> 0x1eu & 1u)
        {
            edx = t164 >> 0x1eu;
            goto L_1008c232;
        }
        eax = t164;
        edx = t164 >> 0x1eu;
        wr8(sp0 - 0x84u, 0u);
        if (eax >> 0x1fu == 0u) goto L_1008c237;
L_1008c232: ;
        wr8(sp0 - 0x84u, 1u);
L_1008c237: ;
        wr32(sp0 - 0x9cu, 0u);
        t165 = rd32(self + 0xa0u);
        wr32(sp0 - 0xa0u, t165);
        t166 = rd32(sp0 - 0x84u);
        wr32(sp0 - 0xa4u, t166);
        wr32(sp0 - 0xa8u, 0u);
        t167 = rd32(t165);
        g->esp = sp0 - 0xa0u;
        t168 = cow_call_regs(g, COW_IMG(0x1008c450u), t166, g->ecx, edx, 1, 2, 0u, t166);
        t169 = g->edx;
        wr32(sp0 - 0xa4u, t168);
        g->esp = sp0 - 0x98u;
        t170 = cow_thiscall(g, rd32(t167 + 0x298u), rd32(self + 0xa0u), 3, t168, rd32(sp0 - 0xa0u), 0u);
        wr8(self + 0x1bcu, 0x18u);
        eax = t170;
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c272: ;
    if (rd8(sp0 - 0x85u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
        goto L_1008c39f;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
    wr8(self + 0x1bcu, 0x19u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t136 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
    t137 = g->edx;
    if ((uint8_t)t136 != 0u)
    {
        eax = t136;
        edx = t137;
        goto L_1008c2b5;
    }
    eax = t136;
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax;
L_1008c29b: ;
    if (rd8(sp0 - 0x85u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
        goto L_1008c2b5;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x85u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t132 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
    if ((uint8_t)t132 != 0u)
    {
        eax = t132;
        goto L_1008c39f;
    }
    eax = t132;
L_1008c376: ;
    if (rd32(self + 0x74u) == (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        wr32(sp0 - 0x9cu, COW_IMG(0x1035bb04u));
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x8cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1035bb04u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
        t133 = g->ecx;
        t134 = g->edx;
        wr32(sp0 - 0xa4u, 0u);
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        g->ebx = ebx;
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0xa0u;
        t135 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
        eax = t135;
    }
L_1008c39f: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_1008c2b5: ;
    g->esp = sp0 - 0x98u;
    t138 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
    t139 = g->ecx;
    if ((uint8_t)t138 != 0u)
    {
        ecx = t139;
        goto L_1008c2db;
    }
    t140 = rd32(self + 0x12cu);
    if (t140 >> 0x1eu & 1u)
    {
        ecx = t140 >> 0x1eu;
        goto L_1008c2db;
    }
    eax = t140;
    ecx = t140 >> 0x1eu;
    if (eax >> 0x1fu != 0u) goto L_1008c2db;
    ebx = ebx & 0xffffff00u;
L_1008c2dd: ;
    t141 = rd32(self + 0xa0u);
    wr8(sp0 - 0x84u, (uint8_t)ebx);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, t141);
    t142 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xa4u, t142);
    wr32(sp0 - 0xa8u, 1u);
    t143 = rd32(t141);
    g->esp = sp0 - 0xa0u;
    t144 = cow_call_regs(g, COW_IMG(0x1008c450u), t141, g->ecx, t142, 1, 2, 1u, t142);
    t145 = g->edx;
    wr32(sp0 - 0xa4u, t144);
    g->edx = t145;
    g->esp = sp0 - 0x98u;
    t146 = cow_thiscall(g, rd32(t143 + 0x298u), rd32(self + 0xa0u), 3, t144, rd32(sp0 - 0xa0u), 0u);
    t147 = g->edx;
    if ((uint8_t)ebx != 0u)
    {
        eax = t146;
    }
    else
    {
        edx = t147;
        if (rd32(rd32(self + 0xa0u) + 0x768u) == 0u)
        {
            eax = rd32(self + 0xa0u);
        }
        else
        {
            eax = rd32(self + 0xa0u);
            edi = rd32(rd32(self + 0xa0u) + 0x768u);
            g->eax = eax;
            g->edx = rd32(edi);
            t148 = rd32(edi);
            g->esp = sp0 - 0x98u;
            t149 = cow_thiscall(g, rd32(t148 + 0x36cu), edi, 0);
            t150 = g->edx;
            if (t149 == 0u)
            {
                eax = t149;
                edx = t150;
            }
            else
            {
                edx = t150;
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, edi);
                wr32(sp0 - 0xa4u, 0x32696863u);
                g->eax = rd32(edi);
                g->edx = edx;
                t151 = rd32(edi);
                g->esp = sp0 - 0x98u;
                t152 = cow_thiscall(g, rd32(t151 + 0x298u), edi, 3, 0x32696863u, edi, 0u);
                t153 = g->edx;
                eax = t152;
                edx = t153;
            }
        }
        wr32(sp0 - 0x9cu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t154 = cow_thiscall(g, COW_IMG(0x100d5ef0u), rd32(self + 0xa0u), 1, 0u);
        t155 = g->edx;
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 2u);
        t156 = cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 2u, 0u);
        eax = t156;
    }
    wr8(self + 0x1bcu, 0x1au);
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->ebp = rd32(sp0 - 0x90u);
    return eax & 0xffffff00u;
L_1008c2db: ;
    ebx = (ebx & 0xffffff00u) | 1u;
    goto L_1008c2dd;
L_1008c36a: ;
    if (rd8(sp0 - 0x86u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x86u);
        goto L_1008c193;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x86u);
    goto L_1008c376;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008b460(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
