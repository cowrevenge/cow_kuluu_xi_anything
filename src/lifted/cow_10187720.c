/* f_0x10187720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10187720(Guest* g)
{
    double d1;
    double d146;
    double d185;
    double d192;
    double d212;
    double d220;
    double d30;
    double d35;
    double d36;
    double d42;
    double d46;
    double d50;
    double d54;
    double d55;
    double d58;
    double d65;
    double d69;
    double d73;
    double d77;
    double d78;
    double d79;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    double loc_b8_f;
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
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
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
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
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
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 268u);

    wr32(sp0 - 0xbcu, in_ebp);
    wr32(sp0 - 0xc0u, in_esi);
    wr32(sp0 - 0xc4u, in_edi);
    if ((int32_t)rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u) < 0)
    {
        x0 = (double)(int32_t)arg1;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u);
        wr32(sp0 - 0xb8u, eax);
        x0 = (double)(int32_t)eax;
    }
    d1 = (double)(float)fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x103367d0u))) * (double)rdf32(COW_IMG(0x10329d2cu)));
    wrf32(sp0 - 0xb8u, (float)d1);
    if (!(rd8(rd32(self + 0x18u)) & 1u))
    {
        loc_b8_f = d1;
        goto L_1018786f;
    }
    t2 = rd32(self + 0xa4u);
    t3 = rd32(self + 0xa8u);
    t4 = rd32(self + 0xacu);
    wr32(self + 0x14cu, t2);
    t5 = rd32(self + 0xb0u);
    wr32(self + 0x150u, t3);
    t6 = rd32(self + 0xb4u);
    wr32(self + 0x154u, t4);
    t7 = rd32(self + 0xb8u);
    wr32(self + 0x158u, t5);
    t8 = rd32(self + 0xbcu);
    wr32(self + 0x15cu, t6);
    t9 = rd32(self + 0xc0u);
    wr32(self + 0x160u, t7);
    t10 = rd32(self + 0xe4u);
    wr32(self + 0x164u, t8);
    t11 = rd32(self + 0xe8u);
    wr32(self + 0x168u, t9);
    t12 = rd32(self + 0xecu);
    wr32(self + 0x16cu, t10);
    t13 = rd32(self + 0xf0u);
    wr32(self + 0x170u, t11);
    t14 = rd32(self + 0x24u);
    wr32(self + 0x174u, t12);
    t15 = rd32(self + 0x28u);
    wr32(self + 0x178u, t13);
    t16 = rd32(self + 0x2cu);
    wr32(self + 0x17cu, t14);
    t17 = rd32(self + 0x30u);
    wr32(self + 0x180u, t15);
    t18 = rd32(self + 0x34u);
    wr32(self + 0x184u, t16);
    t19 = rd32(self + 0x38u);
    wr32(self + 0x188u, t17);
    t20 = rd32(self + 0x3cu);
    wr32(self + 0x18cu, t18);
    t21 = rd32(self + 0x40u);
    wr32(self + 0x190u, t19);
    t22 = rd32(self + 0x64u);
    wr32(self + 0x194u, t20);
    t23 = rd32(self + 0x68u);
    wr32(self + 0x198u, t21);
    t24 = rd32(self + 0x6cu);
    wr32(self + 0x19cu, t22);
    t25 = rd32(self + 0x70u);
    wr32(self + 0x1a0u, t23);
    wr32(self + 0x1a4u, t24);
    wr32(self + 0x1a8u, t25);
    return;
L_1018786f: ;
    wr32(sp0 - 0xc8u, in_ebx);
    g->esp = sp0 - 0xc8u;
    t26 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t27 = g->ecx;
    if (rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu) == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = rd32(COW_IMG(0x1065cb04u));
        ebx = (in_ebx & 0xffffff00u) | rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu) != 0u;
    }
    else
    {
        eax = t26;
        edx = rd32(COW_IMG(0x1065cb04u));
        ebx = (in_ebx & 0xffffff00u) | rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu) != 0u;
        g->edx = edx;
        g->esp = sp0 - 0xc8u;
        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
        t28 = g->edx;
        t29 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu);
        wr32(sp0 - 0x54u, t29);
        wr32(sp0 - 0xccu, t29);
        d30 = (double)(float)fr(g, (double)(int32_t)t29 * (double)rdf32(COW_IMG(0x1032a9f4u)));
        wrf32(sp0 - 0xccu, (float)d30);
        g->eax = rd32(COW_IMG(0x1065cb04u));
        g->edx = t28;
        t31 = rd32(COW_IMG(0x1065cb04u));
        t32 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, cow_f2bits(d30));
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    d35 = fr(g, sin((double)rdf32(sp0 - 0xb8u)));
    wr32(self + 0xccu, 0u);
    wr32(self + 0xd0u, 0x3f800000u);
    wrf32(self + 0xc4u, (float)d35);
    d36 = fr(g, cos((double)rdf32(sp0 - 0xb8u)));
    wrf32(self + 0xc8u, (float)d36);
    if ((uint8_t)ebx != 0u)
    {
        wr32(sp0 - 0xccu, self + 0xc4u);
        g->edx = edx;
        g->esp = sp0 - 0xc8u;
        cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, self + 0xc4u);
        t37 = g->ecx;
        t38 = g->edx;
        ecx = t37;
        edx = t38;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t39 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    d42 = fr(g, (double)rdf32(t39 + 0x44u) - fr(g, (double)rdf32(self + 0xc4u) * (double)rdf32(COW_IMG(0x1032a3d8u))));
    wrf32(self + 0xd4u, (float)d42);
    g->ecx = t40;
    g->edx = t41;
    t43 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t44 = g->ecx;
    t45 = g->edx;
    d46 = fr(g, (double)rdf32(t43 + 0x48u) - fr(g, (double)rdf32(self + 0xc8u) * (double)rdf32(COW_IMG(0x1032a3d8u))));
    wrf32(self + 0xd8u, (float)d46);
    t47 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t48 = rd32(self + 0xd4u);
    t49 = rd32(self + 0xd8u);
    d50 = fr(g, (double)rdf32(t47 + 0x4cu) - fr(g, (double)rdf32(self + 0xccu) * (double)rdf32(COW_IMG(0x1032a3d8u))));
    wr32(self + 0x54u, t48);
    t51 = rd32(self + 0xc4u);
    wr32(self + 0x58u, t49);
    wrf32(self + 0xdcu, (float)d50);
    t52 = rd32(self + 0xc8u);
    t53 = rd32(self + 0xdcu);
    d54 = (double)rdf32(self + 0xd0u);
    wrf32(self + 0xe0u, (float)d54);
    wrf32(self + 0x60u, (float)d54);
    d55 = fr(g, (double)rdf32(sp0 - 0xb8u) + (double)rdf32(COW_IMG(0x10329d30u)));
    wr32(self + 0x48u, t52);
    wr32(self + 0x5cu, t53);
    t56 = rd32(self + 0xccu);
    wr32(self + 0x44u, t51);
    t57 = rd32(self + 0xd0u);
    d58 = (double)rdf32(COW_IMG(0x10329d30u));
    wr32(self + 0x4cu, t56);
    wr32(self + 0x50u, t57);
    if ((cow_fsw(g, d55, d58, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d55, d58, 1u) & 0x4100u;
        ecx = t56;
        edx = t57;
        x0 = d55;
    }
    else
    {
        eax = cow_fsw(g, d55, d58, 1u) & 0x4100u;
        ecx = t56;
        edx = t57;
        x0 = d55;
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    if (!(x0 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    wr32(self + 0xacu, 0u);
    wr32(self + 0xb0u, 0x3f800000u);
    t59 = rd32(sp0 - 0xc8u);
    wrf32(self + 0xa4u, (float)fr(g, sin(x0)));
    wrf32(self + 0xa8u, (float)fr(g, cos(x0)));
    if ((uint8_t)ebx == 0u)
    {
        ebx = t59;
    }
    else
    {
        ebx = t59;
        wr32(sp0 - 0xc8u, self + 0xa4u);
        g->edx = edx;
        g->esp = sp0 - 0xc4u;
        cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, self + 0xa4u);
        t60 = g->ecx;
        t61 = g->edx;
        ecx = t60;
        edx = t61;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t62 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t63 = g->ecx;
    t64 = g->edx;
    d65 = fr(g, (double)rdf32(t62 + 0x44u) - fr(g, (double)rdf32(self + 0xa4u) * (double)rdf32(COW_IMG(0x10329cd8u))));
    wrf32(self + 0xb4u, (float)d65);
    g->ecx = t63;
    g->edx = t64;
    t66 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t67 = g->ecx;
    t68 = g->edx;
    d69 = fr(g, (double)rdf32(t66 + 0x48u) - fr(g, (double)rdf32(self + 0xa8u) * (double)rdf32(COW_IMG(0x10329cd8u))));
    wrf32(self + 0xb8u, (float)d69);
    t70 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t71 = rd32(self + 0xb8u);
    t72 = rd32(self + 0xb4u);
    d73 = fr(g, (double)rdf32(t70 + 0x4cu) - fr(g, (double)rdf32(self + 0xacu) * (double)rdf32(COW_IMG(0x10329cd8u))));
    wr32(self + 0x38u, t71);
    t74 = rd32(self + 0xa8u);
    wr32(self + 0x34u, t72);
    wrf32(self + 0xbcu, (float)d73);
    t75 = rd32(self + 0xa4u);
    t76 = rd32(self + 0xbcu);
    d77 = (double)rdf32(self + 0xb0u);
    wrf32(self + 0xc0u, (float)d77);
    wrf32(self + 0x40u, (float)d77);
    d78 = (double)rdf32(self + 0xa8u);
    d79 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(self + 0x3cu, t76);
    t80 = rd32(self + 0xacu);
    wr32(self + 0x24u, t75);
    t81 = rd32(self + 0xb0u);
    wr32(self + 0x28u, t74);
    wr32(self + 0x2cu, t80);
    wr32(self + 0x30u, t81);
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = (t81 & 0xffff0000u) | (uint16_t)cow_fsw(g, d78, d79, 0u);
        if ((eax & 0x100u) != 0u)
        {
            t137 = rd32(self + 0xc4u);
            wr32(sp0 - 0xb4u, t137);
            t138 = rd32(self + 0xc8u);
            wr32(sp0 - 0xb0u, t138);
            t139 = rd32(self + 0xccu);
            wr32(sp0 - 0xacu, t139);
            t140 = rd32(self + 0xd0u);
            wr32(sp0 - 0xa8u, t140);
            t141 = rd32(self + 0xd4u);
            wr32(sp0 - 0x94u, t141);
            t142 = rd32(self + 0xd8u);
            wr32(sp0 - 0x90u, t142);
            t143 = rd32(self + 0xdcu);
            wr32(sp0 - 0x8cu, t143);
            t144 = rd32(self + 0xe0u);
            wr32(sp0 - 0x88u, t144);
            t145 = rd32(self + 0xf4u);
            wr32(sp0 - 0x64u, t145);
            eax = rd32(self + 0xfcu);
            ecx = rd32(self + 0x100u);
            edx = rd32(self + 0xf8u);
        }
        else
        {
            t128 = rd32(self + 0xa4u);
            wr32(sp0 - 0xb4u, t128);
            t129 = rd32(self + 0xa8u);
            wr32(sp0 - 0xb0u, t129);
            t130 = rd32(self + 0xacu);
            wr32(sp0 - 0xacu, t130);
            t131 = rd32(self + 0xb0u);
            wr32(sp0 - 0xa8u, t131);
            t132 = rd32(self + 0xb4u);
            wr32(sp0 - 0x94u, t132);
            t133 = rd32(self + 0xb8u);
            wr32(sp0 - 0x90u, t133);
            t134 = rd32(self + 0xbcu);
            wr32(sp0 - 0x8cu, t134);
            t135 = rd32(self + 0xc0u);
            wr32(sp0 - 0x88u, t135);
            t136 = rd32(self + 0xe4u);
            wr32(sp0 - 0x64u, t136);
            eax = rd32(self + 0xecu);
            ecx = rd32(self + 0xf0u);
            edx = rd32(self + 0xe8u);
        }
        d146 = (double)rdf32(self + 0x28u);
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, edx);
        wr32(sp0 - 0x58u, ecx);
        if ((cow_fsw(g, d146, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
        {
            t156 = rd32(self + 0x44u);
            wr32(sp0 - 0xa4u, t156);
            t157 = rd32(self + 0x48u);
            wr32(sp0 - 0xa0u, t157);
            t158 = rd32(self + 0x4cu);
            wr32(sp0 - 0x9cu, t158);
            t159 = rd32(self + 0x50u);
            wr32(sp0 - 0x98u, t159);
            t160 = rd32(self + 0x54u);
            wr32(sp0 - 0x84u, t160);
            t161 = rd32(self + 0x58u);
            wr32(sp0 - 0x80u, t161);
            t162 = rd32(self + 0x5cu);
            wr32(sp0 - 0x7cu, t162);
            t163 = rd32(self + 0x60u);
            wr32(sp0 - 0x78u, t163);
            t164 = rd32(self + 0x74u);
            wr32(sp0 - 0x74u, t164);
            eax = rd32(self + 0x7cu);
            ecx = rd32(self + 0x80u);
            edx = rd32(self + 0x78u);
        }
        else
        {
            t147 = rd32(self + 0x24u);
            wr32(sp0 - 0xa4u, t147);
            t148 = rd32(self + 0x28u);
            wr32(sp0 - 0xa0u, t148);
            t149 = rd32(self + 0x2cu);
            wr32(sp0 - 0x9cu, t149);
            t150 = rd32(self + 0x30u);
            wr32(sp0 - 0x98u, t150);
            t151 = rd32(self + 0x34u);
            wr32(sp0 - 0x84u, t151);
            t152 = rd32(self + 0x38u);
            wr32(sp0 - 0x80u, t152);
            t153 = rd32(self + 0x3cu);
            wr32(sp0 - 0x7cu, t153);
            t154 = rd32(self + 0x40u);
            wr32(sp0 - 0x78u, t154);
            t155 = rd32(self + 0x64u);
            wr32(sp0 - 0x74u, t155);
            eax = rd32(self + 0x6cu);
            ecx = rd32(self + 0x70u);
            edx = rd32(self + 0x68u);
        }
        wr32(sp0 - 0x6cu, eax);
        wr32(sp0 - 0x70u, edx);
        wr32(sp0 - 0x68u, ecx);
        if (rd8(self + 0x148u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x148u);
            wr32(sp0 - 0xc8u, self + 0x14cu);
            wr32(sp0 - 0xccu, sp0 - 0xb4u);
            g->ecx = sp0 - 0xb4u;
            g->esp = sp0 - 0xc4u;
            cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0xb4u, self + 0x14cu);
            t173 = g->ecx;
            wr32(sp0 - 0xd0u, sp0 - 0xb4u);
            wr32(sp0 - 0xd4u, sp0 - 0x50u);
            g->eax = sp0 - 0x50u;
            g->edx = sp0 - 0xb4u;
            g->esp = sp0 - 0xccu;
            t174 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x50u, sp0 - 0xb4u);
            t175 = g->edx;
            wr32(sp0 - 0xd8u, 0x3dcccccdu);
            wr32(sp0 - 0xdcu, sp0 - 0xb4u);
            g->ecx = sp0 - 0xb4u;
            g->esp = sp0 - 0xd4u;
            t176 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xb4u, 0x3dcccccdu);
            t177 = g->ecx;
            wr32(sp0 - 0xe0u, sp0 - 0xb4u);
            wr32(sp0 - 0xe4u, self + 0x14cu);
            g->ecx = t177;
            g->edx = sp0 - 0xb4u;
            g->esp = sp0 - 0xdcu;
            t178 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x14cu, sp0 - 0xb4u);
            t179 = g->ecx;
            t180 = g->edx;
            wr32(sp0 - 0xe8u, self + 0x14cu);
            g->ecx = t179;
            g->edx = t180;
            g->esp = sp0 - 0xe4u;
            cow_call_regs(g, COW_IMG(0x100274b0u), t178, g->ecx, g->edx, 1, 1, self + 0x14cu);
            t181 = g->ecx;
            t182 = g->edx;
            wr32(sp0 - 0xecu, self + 0x14cu);
            wr32(sp0 - 0xf0u, sp0 - 0x50u);
            g->edx = t182;
            g->esp = sp0 - 0xe8u;
            t183 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x50u, self + 0x14cu);
            t184 = g->edx;
            d185 = cow_take_float(g);
            wrf32(sp0 - 0xb8u, (float)(double)(float)d185);
            wr32(sp0 - 0xf4u, self + 0x15cu);
            wr32(sp0 - 0xf8u, sp0 - 0x94u);
            g->ecx = sp0 - 0x94u;
            g->esp = sp0 - 0xf0u;
            t186 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x94u, self + 0x15cu);
            t187 = g->ecx;
            wr32(sp0 - 0xfcu, 0x3dcccccdu);
            wr32(sp0 - 0x100u, sp0 - 0x94u);
            g->ecx = t187;
            g->edx = sp0 - 0x94u;
            g->esp = sp0 - 0xf8u;
            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x94u, 0x3dcccccdu);
            t188 = g->ecx;
            t189 = g->edx;
            wr32(sp0 - 0x104u, sp0 - 0x94u);
            wr32(sp0 - 0x108u, self + 0x15cu);
            g->eax = sp0 - 0x94u;
            g->edx = t189;
            g->esp = sp0 - 0x100u;
            t190 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x15cu, sp0 - 0x94u);
            t191 = g->edx;
            d192 = (double)rdf32(sp0 - 0xb8u);
            if (!(d192 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t190 & 0xffff0000u) | (uint16_t)cow_fsw(g, d192, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                edx = t191;
                x0 = (double)rdf32(sp0 - 0xb8u);
            }
            else
            {
                eax = (t190 & 0xffff0000u) | (uint16_t)cow_fsw(g, d192, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                edx = t191;
                x0 = (double)rdf32(sp0 - 0xb8u);
                x0 = -x0;
            }
            if (!(x0 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
                wr32(sp0 - 0xc8u, 0x3f333333u);
                wr32(sp0 - 0xccu, self + 0x16cu);
                g->eax = eax;
                g->ecx = self + 0x16cu;
                g->esp = sp0 - 0xc4u;
                t199 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, self + 0x16cu, 0x3f333333u);
                t200 = g->ecx;
                eax = t199;
                ecx = t200;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
                wr32(sp0 - 0xc8u, self + 0x16cu);
                wr32(sp0 - 0xccu, sp0 - 0x64u);
                g->eax = eax;
                g->ecx = sp0 - 0x64u;
                g->esp = sp0 - 0xc4u;
                t193 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x64u, self + 0x16cu);
                t194 = g->ecx;
                wr32(sp0 - 0xd0u, 0x3dcccccdu);
                wr32(sp0 - 0xd4u, sp0 - 0x64u);
                g->ecx = t194;
                g->edx = sp0 - 0x64u;
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x64u, 0x3dcccccdu);
                t195 = g->ecx;
                t196 = g->edx;
                wr32(sp0 - 0xd8u, sp0 - 0x64u);
                wr32(sp0 - 0xdcu, self + 0x16cu);
                g->eax = sp0 - 0x64u;
                g->ecx = t195;
                g->esp = sp0 - 0xd4u;
                t197 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x16cu, sp0 - 0x64u);
                t198 = g->ecx;
                eax = t197;
                ecx = t198;
            }
            wr32(sp0 - 0xc8u, self + 0x17cu);
            wr32(sp0 - 0xccu, sp0 - 0xa4u);
            g->edx = sp0 - 0xa4u;
            g->esp = sp0 - 0xc4u;
            cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0xa4u, self + 0x17cu);
            t201 = g->edx;
            wr32(sp0 - 0xd0u, sp0 - 0xa4u);
            wr32(sp0 - 0xd4u, sp0 - 0x50u);
            g->eax = sp0 - 0xa4u;
            g->ecx = sp0 - 0x50u;
            g->esp = sp0 - 0xccu;
            t202 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x50u, sp0 - 0xa4u);
            t203 = g->ecx;
            wr32(sp0 - 0xd8u, 0x3dcccccdu);
            wr32(sp0 - 0xdcu, sp0 - 0xa4u);
            g->ecx = t203;
            g->edx = sp0 - 0xa4u;
            g->esp = sp0 - 0xd4u;
            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xa4u, 0x3dcccccdu);
            t204 = g->ecx;
            t205 = g->edx;
            wr32(sp0 - 0xe0u, sp0 - 0xa4u);
            wr32(sp0 - 0xe4u, self + 0x17cu);
            g->eax = sp0 - 0xa4u;
            g->ecx = t204;
            g->edx = t205;
            g->esp = sp0 - 0xdcu;
            t206 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x17cu, sp0 - 0xa4u);
            t207 = g->ecx;
            t208 = g->edx;
            wr32(sp0 - 0xe8u, self + 0x17cu);
            g->edx = t208;
            g->esp = sp0 - 0xe4u;
            cow_call_regs(g, COW_IMG(0x100274b0u), t206, g->ecx, g->edx, 1, 1, self + 0x17cu);
            t209 = g->edx;
            wr32(sp0 - 0xecu, self + 0x17cu);
            wr32(sp0 - 0xf0u, sp0 - 0x50u);
            g->ecx = sp0 - 0x50u;
            g->esp = sp0 - 0xe8u;
            t210 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x50u, self + 0x17cu);
            t211 = g->ecx;
            d212 = cow_take_float(g);
            wrf32(sp0 - 0xb8u, (float)(double)(float)d212);
            wr32(sp0 - 0xf4u, self + 0x18cu);
            wr32(sp0 - 0xf8u, sp0 - 0x84u);
            g->ecx = t211;
            g->edx = sp0 - 0x84u;
            g->esp = sp0 - 0xf0u;
            cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x84u, self + 0x18cu);
            t213 = g->ecx;
            t214 = g->edx;
            wr32(sp0 - 0xfcu, 0x3dcccccdu);
            wr32(sp0 - 0x100u, sp0 - 0x84u);
            g->eax = sp0 - 0x84u;
            g->edx = t214;
            g->esp = sp0 - 0xf8u;
            t215 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x84u, 0x3dcccccdu);
            t216 = g->edx;
            wr32(sp0 - 0x104u, sp0 - 0x84u);
            wr32(sp0 - 0x108u, self + 0x18cu);
            g->ecx = sp0 - 0x84u;
            g->edx = t216;
            g->esp = sp0 - 0x100u;
            t217 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x18cu, sp0 - 0x84u);
            t218 = g->ecx;
            t219 = g->edx;
            d220 = (double)rdf32(sp0 - 0xb8u);
            if (!(d220 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t217 & 0xffff0000u) | (uint16_t)cow_fsw(g, d220, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                ecx = t218;
                edx = t219;
                x0 = (double)rdf32(sp0 - 0xb8u);
            }
            else
            {
                eax = (t217 & 0xffff0000u) | (uint16_t)cow_fsw(g, d220, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                ecx = t218;
                edx = t219;
                x0 = (double)rdf32(sp0 - 0xb8u);
                x0 = -x0;
            }
            if (!(x0 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
                wr32(sp0 - 0xc8u, 0x3f333333u);
                wr32(sp0 - 0xccu, self + 0x19cu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xc4u;
                t227 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, self + 0x19cu, 0x3f333333u);
                t228 = g->edx;
                eax = t227;
                edx = t228;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
                wr32(sp0 - 0xc8u, self + 0x19cu);
                wr32(sp0 - 0xccu, sp0 - 0x74u);
                g->ecx = ecx;
                g->edx = sp0 - 0x74u;
                g->esp = sp0 - 0xc4u;
                cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x74u, self + 0x19cu);
                t221 = g->ecx;
                t222 = g->edx;
                wr32(sp0 - 0xd0u, 0x3dcccccdu);
                wr32(sp0 - 0xd4u, sp0 - 0x74u);
                g->eax = sp0 - 0x74u;
                g->edx = t222;
                g->esp = sp0 - 0xccu;
                t223 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x74u, 0x3dcccccdu);
                t224 = g->edx;
                wr32(sp0 - 0xd8u, sp0 - 0x74u);
                wr32(sp0 - 0xdcu, self + 0x19cu);
                g->edx = t224;
                g->esp = sp0 - 0xd4u;
                t225 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x19cu, sp0 - 0x74u);
                t226 = g->edx;
                eax = t225;
                edx = t226;
            }
        }
        else
        {
            wr32(sp0 - 0xc8u, sp0 - 0xb4u);
            wr32(sp0 - 0xccu, self + 0x14cu);
            wr8(self + 0x148u, 1u);
            g->eax = self + 0x14cu;
            g->esp = sp0 - 0xc4u;
            t165 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x14cu, sp0 - 0xb4u);
            wr32(sp0 - 0xd0u, sp0 - 0xa4u);
            wr32(sp0 - 0xd4u, self + 0x17cu);
            g->edx = self + 0x17cu;
            g->esp = sp0 - 0xccu;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x17cu, sp0 - 0xa4u);
            t166 = g->edx;
            wr32(sp0 - 0xd8u, sp0 - 0x94u);
            wr32(sp0 - 0xdcu, self + 0x15cu);
            g->ecx = self + 0x15cu;
            g->esp = sp0 - 0xd4u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x15cu, sp0 - 0x94u);
            t167 = g->ecx;
            wr32(sp0 - 0xe0u, sp0 - 0x84u);
            wr32(sp0 - 0xe4u, self + 0x18cu);
            g->eax = self + 0x18cu;
            g->esp = sp0 - 0xdcu;
            t168 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x18cu, sp0 - 0x84u);
            wr32(sp0 - 0xe8u, sp0 - 0x64u);
            wr32(sp0 - 0xecu, self + 0x16cu);
            g->ecx = sp0 - 0x64u;
            g->edx = self + 0x16cu;
            g->esp = sp0 - 0xe4u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x16cu, sp0 - 0x64u);
            t169 = g->ecx;
            t170 = g->edx;
            wr32(sp0 - 0xf0u, sp0 - 0x74u);
            wr32(sp0 - 0xf4u, self + 0x19cu);
            g->eax = sp0 - 0x74u;
            g->edx = t170;
            g->esp = sp0 - 0xecu;
            t171 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x19cu, sp0 - 0x74u);
            t172 = g->edx;
            eax = t171;
            edx = t172;
        }
    }
    else
    {
        eax = (t81 & 0xffff0000u) | (uint16_t)cow_fsw(g, d78, d79, 0u);
        if ((eax & 0x100u) != 0u)
        {
            t105 = rd32(self + 0xc4u);
            t106 = rd32(self + 0xc8u);
            t107 = rd32(self + 0xccu);
            wr32(self + 0x14cu, t105);
            t108 = rd32(self + 0xd0u);
            wr32(self + 0x150u, t106);
            t109 = rd32(self + 0xd4u);
            wr32(self + 0x154u, t107);
            t110 = rd32(self + 0xd8u);
            wr32(self + 0x158u, t108);
            t111 = rd32(self + 0xdcu);
            wr32(self + 0x15cu, t109);
            t112 = rd32(self + 0xe0u);
            wr32(self + 0x160u, t110);
            t113 = rd32(self + 0xf4u);
            wr32(self + 0x164u, t111);
            t114 = rd32(self + 0xf8u);
            wr32(self + 0x168u, t112);
            t115 = rd32(self + 0xfcu);
            wr32(self + 0x16cu, t113);
            t116 = rd32(self + 0x100u);
            wr32(self + 0x170u, t114);
            t117 = rd32(self + 0x44u);
            wr32(self + 0x174u, t115);
            t118 = rd32(self + 0x48u);
            wr32(self + 0x178u, t116);
            t119 = rd32(self + 0x4cu);
            wr32(self + 0x17cu, t117);
            t120 = rd32(self + 0x50u);
            wr32(self + 0x180u, t118);
            t121 = rd32(self + 0x54u);
            wr32(self + 0x184u, t119);
            t122 = rd32(self + 0x58u);
            wr32(self + 0x188u, t120);
            t123 = rd32(self + 0x5cu);
            wr32(self + 0x18cu, t121);
            t124 = rd32(self + 0x60u);
            wr32(self + 0x190u, t122);
            t125 = rd32(self + 0x74u);
            wr32(self + 0x194u, t123);
            t126 = rd32(self + 0x78u);
            wr32(self + 0x198u, t124);
            t127 = rd32(self + 0x7cu);
            wr32(self + 0x19cu, t125);
            eax = t127;
            ecx = rd32(self + 0x80u);
            edx = t126;
        }
        else
        {
            t82 = rd32(self + 0xa4u);
            t83 = rd32(self + 0xa8u);
            t84 = rd32(self + 0xacu);
            wr32(self + 0x14cu, t82);
            t85 = rd32(self + 0xb0u);
            wr32(self + 0x150u, t83);
            t86 = rd32(self + 0xb4u);
            wr32(self + 0x154u, t84);
            t87 = rd32(self + 0xb8u);
            wr32(self + 0x158u, t85);
            t88 = rd32(self + 0xbcu);
            wr32(self + 0x15cu, t86);
            t89 = rd32(self + 0xc0u);
            wr32(self + 0x160u, t87);
            t90 = rd32(self + 0xe4u);
            wr32(self + 0x164u, t88);
            t91 = rd32(self + 0xe8u);
            wr32(self + 0x168u, t89);
            t92 = rd32(self + 0xecu);
            wr32(self + 0x16cu, t90);
            t93 = rd32(self + 0xf0u);
            wr32(self + 0x170u, t91);
            t94 = rd32(self + 0x24u);
            wr32(self + 0x174u, t92);
            t95 = rd32(self + 0x28u);
            wr32(self + 0x178u, t93);
            t96 = rd32(self + 0x2cu);
            wr32(self + 0x17cu, t94);
            t97 = rd32(self + 0x30u);
            wr32(self + 0x180u, t95);
            t98 = rd32(self + 0x34u);
            wr32(self + 0x184u, t96);
            t99 = rd32(self + 0x38u);
            wr32(self + 0x188u, t97);
            t100 = rd32(self + 0x3cu);
            wr32(self + 0x18cu, t98);
            t101 = rd32(self + 0x40u);
            wr32(self + 0x190u, t99);
            t102 = rd32(self + 0x64u);
            wr32(self + 0x194u, t100);
            t103 = rd32(self + 0x68u);
            wr32(self + 0x198u, t101);
            t104 = rd32(self + 0x6cu);
            wr32(self + 0x19cu, t102);
            eax = t104;
            ecx = rd32(self + 0x70u);
            edx = t103;
        }
        wr32(self + 0x1a0u, edx);
        wr32(self + 0x1a4u, eax);
        wr32(self + 0x1a8u, ecx);
    }
    g->esp = sp0 - 0xc4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xc0u);
    g->edi = rd32(sp0 - 0xc4u);
    g->ebp = rd32(sp0 - 0xbcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10187720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10187720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
