/* f_0x10005a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10005a40(Guest* g)
{
    uint32_t cf;
    double d191;
    double d192;
    double d196;
    double d341;
    double d343;
    double d345;
    double d346;
    double d352;
    double d4;
    double d61;
    double d68;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_150;
    uint32_t loc_154;
    uint32_t loc_158;
    uint32_t loc_160;
    double loc_160_f;
    uint32_t loc_164;
    uint32_t loc_168;
    uint32_t loc_170;
    uint32_t loc_174;
    uint32_t loc_178;
    uint32_t loc_17c;
    uint32_t loc_180;
    uint32_t loc_184;
    uint32_t loc_188;
    uint32_t loc_18c;
    uint32_t loc_1a4;
    uint32_t loc_1a8;
    uint32_t loc_1ac;
    uint32_t of;
    uint32_t pf;
    int64_t q115;
    uint32_t sf;
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
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
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
    uint32_t t258;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
    uint32_t t263;
    uint32_t t264;
    uint32_t t265;
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t272;
    uint32_t t273;
    uint32_t t274;
    uint32_t t275;
    uint32_t t276;
    uint32_t t277;
    uint32_t t278;
    uint32_t t279;
    uint32_t t28;
    uint32_t t280;
    uint32_t t281;
    uint32_t t282;
    uint32_t t283;
    uint32_t t284;
    uint32_t t285;
    uint32_t t286;
    uint32_t t287;
    uint32_t t288;
    uint32_t t289;
    uint32_t t29;
    uint32_t t290;
    uint32_t t291;
    uint32_t t292;
    uint32_t t293;
    uint32_t t294;
    uint32_t t295;
    uint32_t t296;
    uint32_t t297;
    uint32_t t298;
    uint32_t t299;
    uint32_t t3;
    uint32_t t30;
    uint32_t t300;
    uint32_t t301;
    uint32_t t302;
    uint32_t t303;
    uint32_t t304;
    uint32_t t305;
    uint32_t t306;
    uint32_t t307;
    uint32_t t308;
    uint32_t t309;
    uint32_t t31;
    uint32_t t310;
    uint32_t t311;
    uint32_t t312;
    uint32_t t313;
    uint32_t t314;
    uint32_t t315;
    uint32_t t316;
    uint32_t t317;
    uint32_t t318;
    uint32_t t319;
    uint32_t t32;
    uint32_t t320;
    uint32_t t321;
    uint32_t t322;
    uint32_t t323;
    uint32_t t324;
    uint32_t t325;
    uint32_t t326;
    uint32_t t327;
    uint32_t t328;
    uint32_t t329;
    uint32_t t33;
    uint32_t t330;
    uint32_t t331;
    uint32_t t332;
    uint32_t t333;
    uint32_t t334;
    uint32_t t335;
    uint32_t t336;
    uint32_t t337;
    uint32_t t338;
    uint32_t t339;
    uint32_t t34;
    uint32_t t340;
    uint32_t t342;
    uint32_t t344;
    uint32_t t347;
    uint32_t t348;
    uint32_t t349;
    uint32_t t35;
    uint32_t t350;
    uint32_t t351;
    uint32_t t353;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
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
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
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
    cow_frame(g, sp0, 440u);

    wr32(sp0 - 0x194u, in_ebx);
    wr32(sp0 - 0x198u, in_ebp);
    wr32(sp0 - 0x19cu, in_esi);
    wr32(sp0 - 0x1a0u, in_edi);
    wr32(sp0 - 0x16cu, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1a0u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->ecx = t2;
    g->edx = t3;
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x160u, (uint32_t)(int16_t)t5);
    d8 = (double)(float)(double)(int32_t)(uint32_t)(int16_t)t5;
    wrf32(sp0 - 0x160u, (float)d8);
    if (rd32(self + 0x88u) == 0u)
    {
        ecx = t6;
        loc_160_f = d8;
    }
    else
    {
        eax = rd32(self + 0x88u);
        edx = t7;
        loc_160_f = d8;
        wr32(sp0 - 0x1a4u, self + 0x98u);
        wr32(sp0 - 0x1a8u, 0x100u);
        wr32(sp0 - 0x1acu, eax);
        g->eax = eax;
        g->edx = edx;
        t9 = rd32(eax);
        g->esp = sp0 - 0x1a0u;
        t10 = cow_thiscall(g, rd32(t9 + 0x24u), t9, 3, eax, 0x100u, self + 0x98u);
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)t10 > -2147024726)
        {
            eax = t10;
            ecx = t11;
            goto L_10005ae5;
        }
        eax = t10;
        ecx = t11;
        edx = t12;
        zf = t10 + 0x7ff8ff56u == 0u;
        if (zf) goto L_10005aa0;
        if (eax == 0x8007000cu) goto L_10005aa0;
        if (eax != 0x8007001eu) goto L_10005ae9;
L_10005aa0: ;
        if (rd8(COW_IMG(0x10456548u)) != 0u)
        {
            t17 = rd32(self + 0x88u);
            wr32(sp0 - 0x1a4u, t17);
            g->esp = sp0 - 0x1a0u;
            cow_thiscall(g, rd32(rd32(t17) + 0x1cu), rd32(t17), 1, t17);
            edi = self + 0x98u;
            eax = 0u;
            ecx = 0x40u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        }
        else
        {
            wr8(COW_IMG(0x10456548u), 1u);
            t13 = rd32(self + 0x88u);
            wr32(sp0 - 0x1a4u, t13);
            g->eax = t13;
            g->edx = rd32(t13);
            t14 = rd32(t13);
            g->esp = sp0 - 0x1a0u;
            t15 = cow_thiscall(g, rd32(t14 + 8u), ecx, 1, t13);
            t16 = g->edx;
            cow_fastcall(g, COW_IMG(0x10007e20u), self, t16, 0);
            edi = self + 0x98u;
            eax = 0u;
            ecx = 0x40u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        }
L_10005afb: ;
        wr32(sp0 - 0x1a4u, 0u);
        wr32(sp0 - 0x1a8u, self + 0x8dcu);
        t18 = rd32(self + 0x88u);
        wr32(self + 0x8dcu, 0x10u);
        wr32(sp0 - 0x1acu, self + 0x79cu);
        wr32(sp0 - 0x1b0u, 0x14u);
        wr32(sp0 - 0x1b4u, t18);
        g->eax = t18;
        g->edx = rd32(t18);
        t19 = rd32(t18);
        g->esp = sp0 - 0x1a0u;
        t20 = cow_thiscall(g, rd32(t19 + 0x28u), ecx, 5, t18, 0x14u, self + 0x79cu, self + 0x8dcu, 0u);
        t21 = g->ecx;
        t22 = g->edx;
        if ((int32_t)t20 > -2147024726)
        {
            eax = t20;
            edx = t22;
            goto L_10005b7c;
        }
        eax = t20;
        ecx = t21;
        edx = t22;
        zf = t20 + 0x7ff8ff56u == 0u;
        if (zf) goto L_10005b37;
        if (eax == 0x8007000cu) goto L_10005b37;
        if (eax != 0x8007001eu) goto L_10005b80;
L_10005b37: ;
        if (rd8(COW_IMG(0x10456548u)) != 0u)
        {
            t27 = rd32(self + 0x88u);
            wr32(sp0 - 0x1a4u, t27);
            g->edx = rd32(t27);
            t28 = rd32(t27);
            g->esp = sp0 - 0x1a0u;
            cow_thiscall(g, rd32(t28 + 0x1cu), ecx, 1, t27);
            t29 = g->edx;
            edx = t29;
        }
        else
        {
            wr8(COW_IMG(0x10456548u), 1u);
            t23 = rd32(self + 0x88u);
            wr32(sp0 - 0x1a4u, t23);
            g->eax = t23;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t24 = cow_thiscall(g, rd32(rd32(t23) + 8u), rd32(t23), 1, t23);
            t25 = g->edx;
            cow_fastcall(g, COW_IMG(0x10007e20u), self, t25, 0);
            t26 = g->edx;
            edx = t26;
        }
        wr32(self + 0x8dcu, 0u);
        edi = self + 0x79cu;
        eax = 0u;
        ecx = 0x50u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
L_10005b90: ;
        edi = sp0 - 0x100u;
        eax = 0u;
        ecx = 0x40u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if ((int32_t)rd32(self + 0x8dcu) > 0)
        {
            esi = self + 0x79cu;
            edi = 0u;
L_10005bab: ;
            if (rd32(esi) < 0x100u)
            {
                eax = rd32(esi);
                if ((int8_t)rd8(esi + 4u) >= 0)
                {
                    ecx = (ecx & 0xffffff00u) | rd8(esi + 4u);
                }
                else
                {
                    if (rd32(COW_IMG(0x10456a28u)) == 0u)
                    {
                        ecx = rd32(COW_IMG(0x10456a28u));
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10456a28u));
                        if (rd32(ecx + 8u) == 2u)
                        {
                            ecx = rd32(ecx + 8u) - 2u;
                            goto L_10005bd9;
                        }
                        ecx = rd32(ecx + 8u) - 2u;
                        if (ecx != 1u)
                        {
                            ecx = ecx - 1u;
                            goto L_10005bef;
                        }
                        ecx = ecx - 1u;
                        wr32(sp0 - 0x1a4u, eax);
                        wr32(sp0 - 0x1a8u, eax);
                        wr32(sp0 - 0x1acu, COW_IMG(0x1034f9b4u));
                        loc_1a4 = eax;
                        loc_1a8 = eax;
                        loc_1ac = COW_IMG(0x1034f9b4u);
L_10005be0: ;
                        g->ecx = ecx;
                        g->esp = sp0 - 0x1a0u;
                        t30 = cow_call_regs(g, COW_IMG(0x10007830u), eax, g->ecx, edx, 1, 3, loc_1ac, loc_1a8, loc_1a4);
                        t31 = g->ecx;
                        t32 = g->edx;
                        wr32(esi, (uint16_t)t30);
                        ecx = t31;
                        edx = t32;
                    }
                }
            }
L_10005bef: ;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x8dcu))
            {
                esi = esi + 0x14u;
                edi = edi + 1u;
                goto L_10005bab;
            }
        }
        esi = 0u;
L_10005bfc: ;
        if (rd32(COW_IMG(0x10456a28u)) != 0u)
        {
            eax = esi;
            ecx = rd32(COW_IMG(0x10456a28u));
            if (rd32(ecx + 8u) == 2u)
            {
                ecx = rd32(ecx + 8u) - 2u;
                goto L_10005c1c;
            }
            ecx = rd32(ecx + 8u) - 2u;
            if (ecx != 1u)
            {
                ecx = ecx - 1u;
                goto L_10005c30;
            }
            ecx = ecx - 1u;
            wr32(sp0 - 0x1a4u, esi);
            wr32(sp0 - 0x1a8u, esi);
            wr32(sp0 - 0x1acu, COW_IMG(0x1034f9b4u));
            loc_1a4 = esi;
            loc_1a8 = esi;
            loc_1ac = COW_IMG(0x1034f9b4u);
L_10005c23: ;
            g->ecx = ecx;
            g->esp = sp0 - 0x1a0u;
            t33 = cow_call_regs(g, COW_IMG(0x10007830u), eax, g->ecx, edx, 1, 3, loc_1ac, loc_1a8, loc_1a4);
            t34 = g->ecx;
            t35 = g->edx;
            eax = (uint16_t)t33;
            ecx = t34;
            edx = t35;
L_10005c30: ;
            wr8(eax + rd32(sp0 - 0x16cu) + 0x198u, rd8(esi + rd32(sp0 - 0x16cu) + 0x98u));
        }
        if ((int32_t)(esi + 1u) < 256)
        {
            esi = esi + 1u;
            goto L_10005bfc;
        }
        if ((int32_t)rd32(self + 0x8dcu) <= 0)
        {
            ebx = self + 0x79cu;
        }
        else
        {
            ecx = rd32(self + 0x8dcu);
            eax = self + 0x79cu;
            edx = ecx;
            ebx = self + 0x79cu;
L_10005c56: ;
            if (rd32(eax) < 0x100u)
            {
                ecx = rd32(eax);
                if ((int8_t)rd8(eax + 4u) >= 0)
                {
                    ebx = (ebx & 0xffffff00u) | rd8(eax + 4u);
                }
                else
                {
                    ebx = (ebx & 0xffffff00u) | rd8(eax + 4u);
                    wr8(ecx + sp0 - 0x100u, 1u);
                }
            }
            if (edx != 1u)
            {
                eax = eax + 0x14u;
                edx = edx - 1u;
                goto L_10005c56;
            }
        }
        edx = sp0 - 0x100u;
        ebp = rd32(sp0 - 0x16cu) - (sp0 - 0x100u) + 0x198u;
        esi = 0u;
        edi = rd32(sp0 - 0x16cu) + 0x398u;
L_10005c90: ;
        if ((int8_t)rd8(ebp + esi + sp0 - 0x100u) < 0)
        {
            eax = esi + sp0 - 0x100u;
            goto L_10005ce2;
        }
        eax = esi + sp0 - 0x100u;
        if (rd8(eax) != 0u) goto L_10005ce2;
        wr32(sp0 - 0x1a4u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        t36 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, esi);
        t37 = g->edx;
        wr32(sp0 - 0x1a4u, esi);
        if ((uint8_t)t36 == 0u)
        {
            eax = t36;
            edx = t37;
            loc_1a4 = esi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t42 = cow_thiscall(g, COW_IMG(0x10124000u), COW_IMG(0x104e1c40u), 1, loc_1a4);
            t43 = g->edx;
            wr32(edi, 0u);
            eax = t42;
            edx = t43;
        }
        else
        {
            eax = t36;
            edx = t37;
            loc_1a4 = esi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t38 = cow_thiscall(g, COW_IMG(0x10124000u), COW_IMG(0x104e1c40u), 1, loc_1a4);
            t39 = g->edx;
            wr32(sp0 - 0x1a4u, esi);
            g->edx = t39;
            t40 = cow_thiscall(g, COW_IMG(0x10123f60u), COW_IMG(0x104e1c40u), 1, esi);
            t41 = g->edx;
            wr32(edi, 0u);
            eax = t40;
            edx = t41;
        }
L_10005da6: ;
        if ((int32_t)(esi + 1u) < 256)
        {
            esi = esi + 1u;
            edi = edi + 4u;
            goto L_10005c90;
        }
        wr32(sp0 - 0x1a4u, 0x1cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        t71 = cow_thiscall(g, COW_IMG(0x10124070u), COW_IMG(0x104e1c40u), 1, 0x1cu);
        t72 = g->edx;
        if ((uint8_t)t71 != 0u)
        {
            eax = t71;
            edx = t72;
            goto L_10005e00;
        }
        eax = t71;
        edx = t72;
        wr32(sp0 - 0x1a4u, 0x9cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        t73 = cow_thiscall(g, COW_IMG(0x10124070u), COW_IMG(0x104e1c40u), 1, 0x9cu);
        t74 = g->edx;
        if ((uint8_t)t73 != 0u)
        {
            eax = t73;
            edx = t74;
            goto L_10005e00;
        }
        eax = t73;
        edx = t74;
        wr32(sp0 - 0x1a4u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        t75 = cow_thiscall(g, COW_IMG(0x10124070u), COW_IMG(0x104e1c40u), 1, 1u);
        t76 = g->edx;
        if ((uint8_t)t75 == 0u)
        {
            eax = t75;
            edx = t76;
            goto L_10005e2e;
        }
        eax = t75;
        edx = t76;
        wr32(sp0 - 0x1a4u, 0u);
        wr32(sp0 - 0x1a8u, 0x1bu);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x1a0u;
        t77 = cow_fastcall(g, COW_IMG(0x101b29f0u), rd32(COW_IMG(0x10662d40u)), edx, 2, 0x1bu, 0u);
        t78 = g->edx;
        if (t77 == 0u)
        {
            eax = t77;
            edx = t78;
            goto L_10005e2e;
        }
        eax = t77;
        edx = t78;
        wr32(sp0 - 0x1a4u, 1u);
        loc_1a4 = 1u;
L_10005e24: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        t83 = cow_thiscall(g, COW_IMG(0x10124010u), COW_IMG(0x104e1c40u), 1, loc_1a4);
        t84 = g->edx;
        eax = t83;
        edx = t84;
L_10005e2e: ;
        t85 = rd32(sp0 - 0x16cu) + 0x298u;
        wr32(sp0 - 0x1a4u, t85);
        g->eax = eax;
        g->edx = edx;
        t86 = rd32(sp0 - 0x16cu);
        g->esp = sp0 - 0x1a0u;
        t87 = cow_thiscall(g, rd32(COW_IMG(0x10329388u)), t85, 1, t85);
        t88 = g->ecx;
        t89 = g->edx;
        if (!(rd8(t86 + 0x328u) & 1u))
        {
            eax = t87;
            ecx = t88;
            edx = t89;
            esi = t86;
        }
        else
        {
            eax = t87;
            edx = t89;
            esi = t86;
            wr32(sp0 - 0x1a4u, 0x45u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t90 = cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0x45u);
            t91 = g->ecx;
            t92 = g->edx;
            eax = t90;
            ecx = t91;
            edx = t92;
        }
        if (rd8(esi + 0x33cu) & 1u)
        {
            wr32(sp0 - 0x1a4u, 0x38u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t93 = cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0x38u);
            t94 = g->ecx;
            t95 = g->edx;
            eax = t93;
            ecx = t94;
            edx = t95;
        }
        if (rd8(esi + 0x33du) & 1u)
        {
            wr32(sp0 - 0x1a4u, 0xb8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t96 = cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0xb8u);
            t97 = g->ecx;
            t98 = g->edx;
            eax = t96;
            ecx = t97;
            edx = t98;
        }
        if (rd8(esi + 0x338u) & 1u)
        {
            wr32(sp0 - 0x1a4u, 0x2au);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t99 = cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0x2au);
            t100 = g->ecx;
            t101 = g->edx;
            eax = t99;
            ecx = t100;
            edx = t101;
        }
        if (rd8(esi + 0x339u) & 1u)
        {
            wr32(sp0 - 0x1a4u, 0x36u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t102 = cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0x36u);
            t103 = g->ecx;
            t104 = g->edx;
            eax = t102;
            ecx = t103;
            edx = t104;
        }
        if (rd8(esi + 0x33au) & 1u)
        {
            wr32(sp0 - 0x1a4u, 0x1du);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t105 = cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0x1du);
            t106 = g->ecx;
            t107 = g->edx;
            eax = t105;
            ecx = t106;
            edx = t107;
        }
        if (rd8(esi + 0x33bu) & 1u)
        {
            wr32(sp0 - 0x1a4u, 0x9du);
            g->esp = sp0 - 0x1a0u;
            cow_thiscall(g, COW_IMG(0x10123fe0u), COW_IMG(0x104e1c40u), 1, 0x9du);
            t108 = g->ecx;
            ecx = t108;
        }
    }
    if (rd32(self + 0x8cu) != 0u)
    {
        eax = rd32(self + 0x8cu);
        if (rd8(COW_IMG(0x1034f92cu)) != 0u)
        {
            wr32(sp0 - 0x1a4u, sp0 - 0x14cu);
            wr32(sp0 - 0x1a8u, 0x10u);
            wr32(sp0 - 0x1acu, eax);
            g->eax = eax;
            g->edx = rd32(eax);
            t109 = rd32(eax);
            g->esp = sp0 - 0x1a0u;
            t110 = cow_thiscall(g, rd32(t109 + 0x24u), sp0 - 0x14cu, 3, eax, 0x10u, sp0 - 0x14cu);
            t111 = g->edx;
            if (t110 != 0u)
            {
                eax = t110;
                edx = t111;
            }
            else
            {
                eax = t110;
                t112 = rd32(sp0 - 0x144u);
                t113 = rd32(sp0 - 0x148u);
                wr8(COW_IMG(0x10456549u), (uint8_t)eax);
                if (rd32(sp0 - 0x14cu) != rd32(self + 0xa34u))
                {
                    eax = rd32(sp0 - 0x14cu);
                    ecx = t112;
                    edx = t113;
                    esi = rd32(self + 0xa34u);
                    goto L_10005f3a;
                }
                eax = rd32(sp0 - 0x14cu);
                ecx = t112;
                edx = t113;
                esi = rd32(self + 0xa34u);
                if (edx != rd32(self + 0xa38u)) goto L_10005f3a;
                if (ecx == rd32(self + 0xa3cu)) goto L_10005fa5;
L_10005f3a: ;
                wr32(sp0 - 0x178u, eax - esi);
                t114 = edx - rd32(self + 0xa38u);
                wr32(sp0 - 0x174u, t114);
                wr32(sp0 - 0x1a4u, sp0 - 0x178u);
                q115 = (int64_t)cow_muls(0x88888889u, ecx - rd32(self + 0xa3cu));
                t116 = (uint32_t)((int32_t)(ecx + cow_qhi(q115) - rd32(self + 0xa3cu)) >> 5u);
                t117 = t116 + (t116 >> 0x1fu);
                wr32(sp0 - 0x1a8u, t117);
                wr32(sp0 - 0x1acu, sp0 - 0x178u);
                g->esp = sp0 - 0x1a0u;
                cow_thiscall(g, COW_IMG(0x101245d0u), rd32(COW_IMG(0x104e1d4cu)), 3, sp0 - 0x178u, t117, sp0 - 0x178u);
                t118 = rd32(sp0 - 0x14cu);
                t119 = rd32(sp0 - 0x148u);
                t120 = rd32(sp0 - 0x144u);
                wr32(self + 0xa34u, t118);
                t121 = rd32(sp0 - 0x140u);
                wr32(self + 0xa38u, t119);
                wr32(self + 0xa3cu, t120);
                wr32(self + 0xa40u, t121);
                eax = t119;
                edx = t121;
            }
L_10005fa5: ;
            g->esp = sp0 - 0x1a0u;
            cow_fastcall(g, COW_IMG(0x100089d0u), self, edx, 0);
        }
    }
    wr32(sp0 - 0x134u, sp0 - 0x184u);
    wr32(sp0 - 0x128u, sp0 - 0x180u);
    wr32(sp0 - 0x130u, sp0 - 0x184u);
    wr32(sp0 - 0x12cu, sp0 - 0x180u);
    wr32(sp0 - 0x11cu, sp0 - 0x188u);
    wr32(sp0 - 0x124u, sp0 - 0x18cu);
    wr32(sp0 - 0x120u, sp0 - 0x18cu);
    wr32(sp0 - 0x110u, sp0 - 0x17cu);
    wr32(sp0 - 0x118u, sp0 - 0x188u);
    wr32(sp0 - 0x114u, sp0 - 0x17cu);
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x164u, 0u);
    wr32(sp0 - 0x18cu, 0u);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x17cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x10cu, sp0 - 0x170u);
    wr32(sp0 - 0x108u, sp0 - 0x170u);
    wr32(sp0 - 0x104u, 0u);
    if (rd32(COW_IMG(0x104e1d44u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d44u));
        ecx = sp0 - 0x170u;
        edx = sp0 - 0x170u;
        loc_168 = 0u;
        loc_164 = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d44u));
        t122 = rd32(eax + 0x220u);
        wr32(sp0 - 0x168u, t122);
        t123 = rd32(eax + 0x224u);
        wr32(sp0 - 0x164u, t123);
        wr32(eax + 0x220u, 0u);
        wr32(eax + 0x224u, 0u);
        wr32(rd32(COW_IMG(0x104e1d44u)) + 0x228u, 0u);
        wr32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu, 0u);
        wr32(rd32(COW_IMG(0x104e1d44u)) + 0x238u, 0u);
        wr32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu, 0u);
        wr32(rd32(COW_IMG(0x104e1d44u)) + 0x230u, 0u);
        wr32(rd32(COW_IMG(0x104e1d44u)) + 0x234u, 0u);
        wr8(rd32(COW_IMG(0x104e1d44u)) + 0x252u, 0x80u);
        t124 = rd32(COW_IMG(0x104e1d44u));
        wr8(t124 + 0x253u, 0x80u);
        t125 = rd32(COW_IMG(0x104e1d44u));
        wr8(t125 + 0x250u, 0x80u);
        t126 = rd32(COW_IMG(0x104e1d44u));
        wr8(t126 + 0x251u, 0x80u);
        eax = t126;
        ecx = t124;
        edx = t125;
        loc_168 = t122;
        loc_164 = t123;
    }
    if (rd8(COW_IMG(0x10455c40u)) == 0u)
    {
        eax = rd32(self + 0x90u);
        goto L_10006163;
    }
    eax = rd32(self + 0x90u);
    if (eax != 0u)
    {
        wr32(sp0 - 0x1a4u, eax);
        t127 = rd32(eax);
        g->esp = sp0 - 0x1a0u;
        cow_thiscall(g, rd32(t127 + 0x20u), t127, 1, eax);
        t128 = g->ecx;
        if (rd32(COW_IMG(0x10455c28u)) == 0u)
        {
            ecx = t128;
        }
        else
        {
            eax = rd32(COW_IMG(0x10455c28u));
            ecx = t128;
            wr32(sp0 - 0x1a4u, eax);
            g->edx = rd32(eax);
            t129 = rd32(eax);
            g->esp = sp0 - 0x1a0u;
            cow_thiscall(g, rd32(t129 + 0x2cu), ecx, 1, eax);
            t130 = g->edx;
            wr32(sp0 - 0x1a4u, rd32(COW_IMG(0x10455c28u)));
            t131 = rd32(rd32(COW_IMG(0x10455c28u)));
            cow_thiscall(g, rd32(t131 + 8u), t131, 1, rd32(COW_IMG(0x10455c28u)));
            t132 = g->ecx;
            wr32(COW_IMG(0x10455c28u), 0u);
            ecx = t132;
        }
        t133 = rd32(self + 0x90u);
        wr32(sp0 - 0x1a4u, t133);
        g->eax = t133;
        g->edx = rd32(t133);
        t134 = rd32(t133);
        g->esp = sp0 - 0x1a0u;
        t135 = cow_thiscall(g, rd32(t134 + 8u), ecx, 1, t133);
        t136 = g->ecx;
        t137 = g->edx;
        wr32(self + 0x90u, 0u);
        eax = t135;
        ecx = t136;
        edx = t137;
    }
    wr32(self + 0xc9cu, 0xffffffffu);
    wr8(self + 0xc99u, 0u);
    if (rd8(COW_IMG(0x10455c34u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c34u));
        g->esp = sp0 - 0x1a0u;
        cow_call_regs(g, COW_IMG(0x100083d0u), eax, self, edx, 1, 0);
        t138 = g->ecx;
        t139 = g->edx;
        ecx = t138;
        edx = t139;
    }
    wr8(COW_IMG(0x10455c40u), 0u);
    ebx = self;
L_1000746a: ;
    if (rd32(COW_IMG(0x104e1d44u)) == 0u) goto L_10007757;
    eax = rd32(COW_IMG(0x104e1d44u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t319 = cow_stdcall(g, COW_IMG(0x10123700u), 0);
    t320 = g->edx;
    wr32(sp0 - 0x178u, t319);
    wr32(sp0 - 0x174u, t320);
    t321 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | t319;
    t322 = rd32(COW_IMG(0x104e1d44u));
    wr32(t322 + 0x220u, t321);
    t323 = rd32(t322 + 0x224u) | t320;
    wr32(t322 + 0x224u, t323);
    if ((t319 | t320) == 0u)
    {
        edi = rd32(COW_IMG(0x104e1d44u));
        ebx = rd32(sp0 - 0x168u);
        ebp = 0u;
L_10007575: ;
        g->esp = sp0 - 0x1a0u;
        t333 = cow_call_regs(g, COW_IMG(0x10312a60u), 1u, ebp, 0u, 1, 0);
        t334 = g->edx;
        if (((t333 & ebx) | (t334 & rd32(sp0 - 0x164u))) != 0u)
        {
            eax = t333;
            edx = t334;
            if (((rd32(edi + 0x220u) & eax) | (rd32(edi + 0x224u) & edx)) == 0u)
            {
                t335 = rd32(edi + 0x230u) | eax;
                wr32(edi + 0x230u, t335);
                t336 = rd32(edi + 0x234u) | edx;
                wr32(edi + 0x234u, t336);
                edi = rd32(COW_IMG(0x104e1d44u));
            }
        }
        if ((int32_t)(ebp + 1u) < 64)
        {
            ebp = ebp + 1u;
            goto L_10007575;
        }
    }
    else
    {
        ebx = t320;
        esi = t319;
        edi = rd32(COW_IMG(0x104e1d44u));
        loc_178 = t319;
        loc_174 = t320;
        wr32(sp0 - 0x160u, 0u);
        ecx = 0u;
        loc_160 = 0u;
L_100074c0: ;
        g->esp = sp0 - 0x1a0u;
        t324 = cow_call_regs(g, COW_IMG(0x10312a60u), 1u, ecx, 0u, 1, 0);
        t325 = g->edx;
        wr32(sp0 - 0x138u, ebx & t325);
        if (((esi & t324) | (ebx & t325)) == 0u)
        {
            eax = t324;
            ecx = ebx & t325;
            edx = t325;
            esi = esi & t324;
            goto L_10007528;
        }
        eax = t324;
        edx = t325;
        esi = esi & t324;
        loc_138 = ebx & t325;
        if (((eax & rd32(sp0 - 0x168u)) | (edx & rd32(sp0 - 0x164u))) != 0u) goto L_10007524;
        t326 = rd32(edi + 0x228u) | eax;
        wr32(edi + 0x228u, t326);
        t327 = rd32(edi + 0x22cu) | edx;
        wr32(edi + 0x22cu, t327);
        t328 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | eax;
        t329 = rd32(COW_IMG(0x104e1d44u));
        wr32(t329 + 0x238u, t328);
        t330 = rd32(t329 + 0x23cu) | edx;
        wr32(t329 + 0x23cu, t330);
L_10007555: ;
        edi = rd32(COW_IMG(0x104e1d44u));
L_1000755b: ;
        t332 = rd32(sp0 - 0x160u) + 1u;
        wr32(sp0 - 0x160u, t332);
        if ((int32_t)(rd32(sp0 - 0x160u) + 1u) < 64)
        {
            ecx = t332;
            loc_160 = t332;
            goto L_100074b8;
        }
    }
    t337 = rd32(edi + 0x228u);
    if ((t337 & 0x80u) != 0u)
    {
        ecx = t337;
        edx = edi + 0x228u;
        ebp = rd32(edi + 0x22cu);
        goto L_100075ee;
    }
    ecx = t337;
    edx = edi + 0x228u;
    ebp = rd32(edi + 0x22cu);
    if ((ecx & 0x40u) == 0u) goto L_100075fc;
L_100075ee: ;
    wr32(edx, ecx & 0xffffffcfu);
    wr32(edx + 4u, ebp);
    edi = rd32(COW_IMG(0x104e1d44u));
L_100075fc: ;
    t338 = rd32(edi + 0x238u);
    if ((t338 & 0x80u) != 0u)
    {
        ecx = t338;
        edx = edi + 0x238u;
        ebp = rd32(edi + 0x23cu);
        goto L_1000761f;
    }
    ecx = t338;
    edx = edi + 0x238u;
    ebp = rd32(edi + 0x23cu);
    if ((ecx & 0x40u) == 0u) goto L_1000762d;
L_1000761f: ;
    wr32(edx, ecx & 0xffffffcfu);
    wr32(edx + 4u, ebp);
    ecx = ecx & 0xffffffcfu;
    edi = rd32(COW_IMG(0x104e1d44u));
L_1000762d: ;
    if ((rd32(edi + 0x228u) | rd32(edi + 0x22cu)) != 0u) goto L_10007704;
    edx = rd32(edi + 0x228u) | rd32(edi + 0x22cu);
    if ((rd32(edi + 0x230u) | rd32(edi + 0x234u)) != 0u)
    {
        ecx = rd32(edi + 0x234u);
        goto L_10007704;
    }
    if ((rd32(edi + 0x220u) | rd32(edi + 0x224u)) == 0u)
    {
        ecx = rd32(edi + 0x220u) | rd32(edi + 0x224u);
        goto L_1000771b;
    }
    eax = rd32(edi + 0x224u);
    ecx = rd32(edi + 0x220u) | rd32(edi + 0x224u);
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t339 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t340 = g->edx;
    d341 = cow_take_float(g);
    t342 = rd32(sp0 - 0x16cu);
    d343 = fr(g, d341 + (double)rdf32(edi + 0x248u));
    wrf32(edi + 0x248u, (float)d343);
    if (rd8(t342 + 0xdacu) == 0u)
    {
        ecx = t342;
        edx = t340;
        goto L_100076fb;
    }
    eax = (t339 & 0xffffff00u) | rd8(t342 + 0xdacu);
    ecx = t342;
    t344 = rd32(ecx + 0x94u);
    wr32(sp0 - 0x178u, t344);
    wr32(sp0 - 0x174u, 0u);
    d345 = (double)(int64_t)cow_i64(t344, 0u);
    d346 = (double)rdf32(rd32(COW_IMG(0x104e1d44u)) + 0x248u);
    if (!(d345 < d346))
    {
        edx = t344;
        edi = rd32(COW_IMG(0x104e1d44u));
        goto L_1000771b;
    }
    edi = rd32(COW_IMG(0x104e1d44u));
    wr32(sp0 - 0x174u, 0u);
    t347 = rd32(edi + 0x238u) | rd32(edi + 0x220u);
    wr32(edi + 0x238u, t347);
    t348 = rd32(edi + 0x23cu) | rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    t349 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    wr32(edi + 0x23cu, t348);
    t350 = rd32(ecx + 0x94u);
    wr32(sp0 - 0x178u, t350);
    t351 = rd32(COW_IMG(0x104e1d44u));
    d352 = fr(g, (double)(int64_t)cow_i64(t350, 0u) - (double)rdf32(COW_IMG(0x10329990u)));
    wrf32(t351 + 0x248u, (float)d352);
    ecx = t351;
    edx = t349;
L_10007715: ;
    edi = rd32(COW_IMG(0x104e1d44u));
L_1000771b: ;
    if ((rd32(edi + 0x228u) & 0x80000000u) == 0u) goto L_10007757;
    eax = rd16(COW_IMG(0x10455c3eu));
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455c3bu));
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10455c3cu));
L_1000773f: ;
    if ((int16_t)((uint16_t)eax + 1u) >= 3)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)eax + 1u);
        goto L_1000776e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)eax + 1u);
    if ((uint16_t)eax != 1u) goto L_10007764;
    zf = (uint8_t)ecx == 0u;
L_1000774f: ;
    if (zf) goto L_1000773f;
    wr16(COW_IMG(0x10455c3eu), (uint16_t)eax);
L_10007757: ;
    g->ebx = in_ebx;
    return 0u;
L_10005ae5: ;
    if (eax == 0u) goto L_10005af4;
L_10005ae9: ;
    edi = self + 0x98u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    goto L_10005afb;
L_10005af4: ;
    wr8(COW_IMG(0x10456548u), 0u);
    goto L_10005afb;
L_10005b7c: ;
    if (eax == 0u) goto L_10005b89;
L_10005b80: ;
    wr32(self + 0x8dcu, 0u);
    goto L_10005b90;
L_10005b89: ;
    wr8(COW_IMG(0x10456548u), 0u);
    goto L_10005b90;
L_10005bd9: ;
    wr32(sp0 - 0x1a4u, eax);
    wr32(sp0 - 0x1a8u, eax);
    wr32(sp0 - 0x1acu, COW_IMG(0x1034f9d4u));
    loc_1a4 = eax;
    loc_1a8 = eax;
    loc_1ac = COW_IMG(0x1034f9d4u);
    goto L_10005be0;
L_10005c1c: ;
    wr32(sp0 - 0x1a4u, esi);
    wr32(sp0 - 0x1a8u, esi);
    wr32(sp0 - 0x1acu, COW_IMG(0x1034f9d4u));
    loc_1a4 = esi;
    loc_1a8 = esi;
    loc_1ac = COW_IMG(0x1034f9d4u);
    goto L_10005c23;
L_10005ce2: ;
    wr32(sp0 - 0x1a4u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t44 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, esi);
    t45 = g->edx;
    wr32(sp0 - 0x1a4u, esi);
    if ((uint8_t)t44 != 0u)
    {
        eax = t44;
        edx = t45;
        loc_1a4 = esi;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        cow_thiscall(g, COW_IMG(0x10124010u), COW_IMG(0x104e1c40u), 1, loc_1a4);
        t58 = g->ecx;
        t59 = g->edx;
        wr32(sp0 - 0x174u, 0u);
        wr32(sp0 - 0x178u, rd32(edi));
        g->edx = t59;
        t60 = rd32(edi);
        d61 = fr(g, (double)(int64_t)cow_i64(rd32(edi), 0u) + (double)rdf32(sp0 - 0x160u));
        fpush(g, d61);
        t62 = cow_call_regs(g, COW_IMG(0x10311c6cu), t60, g->ecx, g->edx, 1, 0);
        t63 = g->edx;
        t64 = rd32(sp0 - 0x16cu);
        wr32(edi, t62);
        if (t62 <= rd32(t64 + 0x94u))
        {
            eax = t62;
            edx = t63;
        }
        else
        {
            eax = t62;
            edx = t63;
            wr32(sp0 - 0x1a4u, esi);
            g->esp = sp0 - 0x1a0u;
            cow_thiscall(g, COW_IMG(0x10123f80u), COW_IMG(0x104e1c40u), 1, esi);
            t65 = g->ecx;
            wr32(sp0 - 0x164u, 0u);
            t66 = rd32(rd32(sp0 - 0x16cu) + 0x94u);
            wr32(sp0 - 0x168u, t66);
            g->edx = rd32(sp0 - 0x16cu);
            t67 = rd32(sp0 - 0x16cu);
            d68 = fr(g, (double)(int64_t)cow_i64(t66, 0u) - (double)rdf32(COW_IMG(0x10329990u)));
            fpush(g, d68);
            t69 = cow_call_regs(g, COW_IMG(0x10311c6cu), t66, g->ecx, g->edx, 1, 0);
            t70 = g->edx;
            wr32(edi, t69);
            eax = t69;
            edx = t70;
        }
    }
    else
    {
        eax = t44;
        edx = t45;
        loc_1a4 = esi;
        g->eax = eax;
        g->esp = sp0 - 0x1a0u;
        t46 = cow_fastcall(g, COW_IMG(0x10123fc0u), COW_IMG(0x104e1c40u), edx, 1, loc_1a4);
        t47 = g->edx;
        wr32(sp0 - 0x1a4u, esi);
        g->edx = t47;
        t48 = cow_thiscall(g, COW_IMG(0x10123f40u), COW_IMG(0x104e1c40u), 1, esi);
        t49 = g->edx;
        wr32(sp0 - 0x1a4u, esi);
        g->edx = t49;
        t50 = cow_thiscall(g, COW_IMG(0x10123f80u), COW_IMG(0x104e1c40u), 1, esi);
        t51 = g->edx;
        wr32(edi, 0u);
        if (rd32(COW_IMG(0x10662770u)) == 0u)
        {
            eax = t50;
            edx = t51;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10662770u));
            edx = t51;
            wr32(sp0 - 0x1a4u, 0u);
            wr32(sp0 - 0x1a8u, 0u);
            wr32(sp0 - 0x1acu, esi);
            wr32(sp0 - 0x1b0u, 0u);
            g->eax = rd32(ecx);
            g->edx = edx;
            t52 = rd32(ecx);
            g->esp = sp0 - 0x1a0u;
            t53 = cow_thiscall(g, rd32(t52 + 0x4cu), ecx, 4, 0u, esi, 0u, 0u);
            t54 = g->edx;
            eax = t53;
            edx = t54;
        }
        if (rd32(COW_IMG(0x10662774u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662774u));
            wr32(sp0 - 0x1a4u, 0u);
            wr32(sp0 - 0x1a8u, 0u);
            wr32(sp0 - 0x1acu, esi);
            wr32(sp0 - 0x1b0u, 0u);
            g->eax = eax;
            g->edx = rd32(ecx);
            t55 = rd32(ecx);
            g->esp = sp0 - 0x1a0u;
            t56 = cow_thiscall(g, rd32(t55 + 0x4cu), ecx, 4, 0u, esi, 0u, 0u);
            t57 = g->edx;
            eax = t56;
            edx = t57;
        }
    }
    goto L_10005da6;
L_10005e00: ;
    wr32(sp0 - 0x1a4u, 0u);
    wr32(sp0 - 0x1a8u, 0xdu);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x1a0u;
    t79 = cow_fastcall(g, COW_IMG(0x101b29f0u), rd32(COW_IMG(0x10662d40u)), edx, 2, 0xdu, 0u);
    t80 = g->edx;
    if (t79 == 0u)
    {
        eax = t79;
        edx = t80;
        goto L_10005e2e;
    }
    eax = t79;
    edx = t80;
    wr32(sp0 - 0x1a4u, 0x1cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t81 = cow_thiscall(g, COW_IMG(0x10124010u), COW_IMG(0x104e1c40u), 1, 0x1cu);
    t82 = g->edx;
    wr32(sp0 - 0x1a4u, 0x9cu);
    eax = t81;
    edx = t82;
    loc_1a4 = 0x9cu;
    goto L_10005e24;
L_10006163: ;
    if (eax == 0u) goto L_10006c7e;
    if (rd8(self + 0xc98u) != 0u)
    {
        wr32(sp0 - 0x1a4u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1a0u;
        t140 = cow_thiscall(g, rd32(rd32(eax) + 0x64u), rd32(eax), 1, eax);
        t141 = g->edx;
        eax = t140;
        edx = t141;
    }
    g->esp = sp0 - 0x1a0u;
    cow_call_regs(g, COW_IMG(0x10007ae0u), eax, self, g->edx, 1, 0);
    wr32(sp0 - 0x1a4u, self + 0xa44u);
    wr32(sp0 - 0x1a8u, 0x110u);
    t142 = rd32(self + 0x90u);
    wr32(sp0 - 0x1acu, t142);
    g->eax = t142;
    g->edx = rd32(rd32(self + 0x90u));
    t143 = rd32(rd32(self + 0x90u));
    t144 = cow_thiscall(g, rd32(t143 + 0x24u), self + 0xa44u, 3, t142, 0x110u, self + 0xa44u);
    t145 = g->ecx;
    t146 = g->edx;
    if ((int32_t)t144 > -2147024726)
    {
        eax = t144;
        ecx = t145;
        edx = t146;
        goto L_10006244;
    }
    eax = t144;
    ecx = t145;
    edx = t146;
    zf = t144 + 0x7ff8ff56u == 0u;
    if (zf) goto L_100061e7;
    if (eax == 0x8007000cu) goto L_100061e7;
    if (eax != 0x8007001eu) goto L_100069ac;
    if (rd32(COW_IMG(0x10455c28u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10455c28u));
        wr32(sp0 - 0x1a4u, eax);
        t147 = rd32(eax);
        g->esp = sp0 - 0x1a0u;
        cow_thiscall(g, rd32(t147 + 0x2cu), t147, 1, eax);
        t148 = g->ecx;
        wr32(sp0 - 0x1a4u, rd32(COW_IMG(0x10455c28u)));
        g->edx = rd32(rd32(COW_IMG(0x10455c28u)));
        t149 = rd32(rd32(COW_IMG(0x10455c28u)));
        cow_thiscall(g, rd32(t149 + 8u), t148, 1, rd32(COW_IMG(0x10455c28u)));
        t150 = g->edx;
        wr32(COW_IMG(0x10455c28u), 0u);
        edx = t150;
    }
    t151 = rd32(self + 0x90u);
    wr32(sp0 - 0x1a4u, t151);
    g->esp = sp0 - 0x1a0u;
    cow_thiscall(g, rd32(rd32(t151) + 8u), rd32(t151), 1, t151);
L_10006213: ;
    wr32(self + 0x90u, 0u);
    wr32(COW_IMG(0x10455c28u), 0u);
    wr32(self + 0xc94u, 0u);
    edi = self + 0xb54u;
    eax = 0u;
    ecx = 0x50u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x194u);
    g->esi = rd32(sp0 - 0x19cu);
    g->edi = rd32(sp0 - 0x1a0u);
    g->ebp = rd32(sp0 - 0x198u);
    return 1u;
L_100061e7: ;
    if (rd32(COW_IMG(0x10455c28u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10455c28u));
        wr32(sp0 - 0x1a4u, eax);
        g->edx = rd32(eax);
        t152 = rd32(eax);
        g->esp = sp0 - 0x1a0u;
        cow_thiscall(g, rd32(t152 + 0x2cu), ecx, 1, eax);
        t153 = g->edx;
        wr32(sp0 - 0x1a4u, rd32(COW_IMG(0x10455c28u)));
        t154 = rd32(rd32(COW_IMG(0x10455c28u)));
        cow_thiscall(g, rd32(t154 + 8u), t154, 1, rd32(COW_IMG(0x10455c28u)));
        t155 = g->ecx;
        wr32(COW_IMG(0x10455c28u), 0u);
        ecx = t155;
    }
    t156 = rd32(self + 0x90u);
    wr32(sp0 - 0x1a4u, t156);
    g->esp = sp0 - 0x1a0u;
    cow_thiscall(g, rd32(rd32(t156) + 8u), ecx, 1, t156);
    goto L_10006213;
L_10006244: ;
    if (eax != 0u) goto L_100069ac;
    wr8(COW_IMG(0x1045654au), 0u);
    wr8(sp0 - 0x18du, 0u);
    eax = COW_IMG(0x10455c48u);
    ecx = self + 0xa74u;
L_10006265: ;
    if ((rd8(ecx) & 0x80u) == 0u) goto L_10006274;
    if (rd32(eax) != 0u) goto L_10006274;
    if (rd32(eax + 4u) == 4u) goto L_10006281;
L_10006274: ;
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x10455d48u))
    {
        eax = eax + 8u;
        ecx = ecx + 1u;
        goto L_10006265;
    }
    ecx = ecx + 1u;
L_10006286: ;
    ebp = self + 0xa74u;
    esi = 0u;
L_1000628f: ;
    if ((int8_t)rd8(ebp) < 0)
    {
        if (rd8(sp0 - 0x18du) == 0u)
        {
            eax = rd32(COW_IMG(0x10455c48u) + esi);
            edx = rd32(COW_IMG(0x10455c4cu) + esi);
        }
        else
        {
            eax = rd32(COW_IMG(0x10455c48u) + esi);
            edx = rd32(COW_IMG(0x10455c4cu) + esi);
            if (eax != 0u) goto L_100062b6;
            if (edx == 4u) goto L_100062c2;
L_100062b6: ;
            eax = rd32(COW_IMG(0x10456048u) + esi);
            edx = rd32(COW_IMG(0x1045604cu) + esi);
        }
L_100062c2: ;
        if ((eax & edx) == 0xffffffffu)
        {
            ecx = eax & edx;
        }
        else
        {
            t157 = rd32(COW_IMG(0x104e1d44u));
            wr32(t157 + 0x220u, rd32(t157 + 0x220u) | eax);
            wr32(t157 + 0x224u, rd32(t157 + 0x224u) | edx);
            ecx = t157 + 0x220u;
        }
        if ((int32_t)edx >= 0)
        {
            zf = edx == 0u;
            sf = (int32_t)edx < 0;
            if (!zf && !sf) goto L_100062f3;
            if (eax < 0x10u) goto L_100063c4;
L_100062f3: ;
            if ((int32_t)edx <= 0)
            {
                sf = (int32_t)edx < 0;
                if (sf) goto L_10006308;
                if (eax > 0x1000000u) goto L_100063c4;
L_10006308: ;
                if ((int32_t)eax > 524288)
                {
                    if ((int32_t)eax > 4194304)
                    {
                        if (eax == 0x800000u)
                        {
                            wr32(sp0 - 0x188u, 0xffffff81u);
                            loc_188 = 0xffffff81u;
                        }
                        else
                        {
                            if (eax == 0x1000000u)
                            {
                                wr32(sp0 - 0x188u, 0x7fu);
                                loc_188 = 0x7fu;
                            }
                        }
                    }
                    else
                    {
                        zf = eax == 0x400000u;
                        if (zf)
                        {
                            wr32(sp0 - 0x18cu, 0xffffff81u);
                            loc_18c = 0xffffff81u;
                        }
                        else
                        {
                            if (eax == 0x100000u)
                            {
                                wr32(sp0 - 0x180u, 0x7fu);
                                loc_180 = 0x7fu;
                            }
                            else
                            {
                                if (eax == 0x200000u)
                                {
                                    wr32(sp0 - 0x18cu, 0x7fu);
                                    loc_18c = 0x7fu;
                                }
                            }
                        }
                    }
                }
                else
                {
                    zf = eax == 0x80000u;
                    if (zf)
                    {
                        wr32(sp0 - 0x180u, 0xffffff81u);
                        loc_180 = 0xffffff81u;
                    }
                    else
                    {
                        if ((int32_t)eax > 128)
                        {
                            if (eax == 0x20000u)
                            {
                                wr32(sp0 - 0x184u, 0x7fu);
                                loc_184 = 0x7fu;
                            }
                            else
                            {
                                if (eax == 0x40000u)
                                {
                                    wr32(sp0 - 0x184u, 0xffffff81u);
                                    loc_184 = 0xffffff81u;
                                }
                            }
                        }
                        else
                        {
                            zf = eax == 0x80u;
                            if (zf)
                            {
                                wr32(sp0 - 0x170u, 0x7fu);
                                loc_170 = 0x7fu;
                            }
                            else
                            {
                                if (eax == 0x10u)
                                {
                                    wr32(sp0 - 0x17cu, 0x7fu);
                                    loc_17c = 0x7fu;
                                }
                                else
                                {
                                    if (eax == 0x20u)
                                    {
                                        wr32(sp0 - 0x17cu, 0xffffff81u);
                                        loc_17c = 0xffffff81u;
                                    }
                                    else
                                    {
                                        if (eax == 0x40u)
                                        {
                                            wr32(sp0 - 0x170u, 0xffffff81u);
                                            loc_170 = 0xffffff81u;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_100063c4: ;
    if ((int32_t)(esi + 8u) < 256)
    {
        ebp = ebp + 1u;
        esi = esi + 8u;
        goto L_1000628f;
    }
    edx = sp0 - 0x134u;
    edi = COW_IMG(0x10456448u);
L_100063df: ;
    t158 = rd32(edi + 4u);
    wr32(sp0 - 0x174u, t158);
    if ((int32_t)rd32(edi + 4u) < -1)
    {
        eax = t158;
        goto L_100065fc;
    }
    eax = t158;
    ecx = rd32(edi);
    zf = rd32(edi + 4u) + 1u == 0u;
    sf = (int32_t)(rd32(edi + 4u) + 1u) < 0;
    of = (~rd32(edi + 4u) & (rd32(edi + 4u) ^ rd32(edi + 4u) + 1u)) >> 0x1fu;
    if (!zf && sf == of) goto L_100063fc;
    if (ecx < 0xfffffff6u) goto L_100065fc;
L_100063fc: ;
    if ((int32_t)eax > 0) goto L_100065fc;
    sf = (int32_t)eax < 0;
    if (sf) goto L_1000640f;
    if (ecx > 0xau) goto L_100065fc;
L_1000640f: ;
    t159 = rd32(COW_IMG(0x10007788u) + ecx * 4u + 0x28u);
    switch (t159 - RD)
    {
    case 0x10006419u: ecx = ecx + 0xau; goto L_10006419;
    case 0x1000642au: goto L_1000642a;
    case 0x1000643eu: ecx = ecx + 0xau; goto L_1000643e;
    case 0x1000644fu: goto L_1000644f;
    case 0x10006463u: ecx = ecx + 0xau; goto L_10006463;
    case 0x10006474u: goto L_10006474;
    case 0x10006488u: ecx = ecx + 0xau; goto L_10006488;
    case 0x10006499u: goto L_10006499;
    case 0x100064adu: ecx = ecx + 0xau; goto L_100064ad;
    case 0x100064beu: goto L_100064be;
    case 0x100064d2u: ecx = ecx + 0xau; goto L_100064d2;
    case 0x100064e3u: goto L_100064e3;
    case 0x100064f7u: ecx = ecx + 0xau; goto L_100064f7;
    case 0x10006515u: ecx = ecx + 0xau; goto L_10006515;
    case 0x10006532u: ecx = ecx + 0xau; goto L_10006532;
    case 0x10006550u: ecx = ecx + 0xau; goto L_10006550;
    case 0x10006577u: ecx = ecx + 0xau; goto L_10006577;
    case 0x10006596u: goto L_10006596;
    case 0x100065b7u: goto L_100065b7;
    case 0x100065d6u: goto L_100065d6;
    case 0x100065fcu: goto L_100065fc;
    default: rt_fatal(g, COW_IMG(0x10006412u), "switch");
    }
    return 0;
L_10006281: ;
    wr8(sp0 - 0x18du, 1u);
    goto L_10006286;
L_10006419: ;
    t185 = rd32(edx);
    wr16(t185, rd16(self + 0xa44u));
    eax = t185;
L_100065fc: ;
    if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x104564a8u))
    {
        edx = edx + 4u;
        edi = edi + 8u;
        goto L_100063df;
    }
    if (rd8(COW_IMG(0x10455c3bu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3bu));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3bu));
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x17cu, 0u);
        loc_170 = 0u;
        loc_17c = 0u;
    }
    if (rd8(COW_IMG(0x10455c3cu)) != 0u)
    {
        wr32(sp0 - 0x180u, 0u);
        wr32(sp0 - 0x184u, 0u);
        loc_184 = 0u;
        loc_180 = 0u;
    }
    t186 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u);
    t187 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    wr32(sp0 - 0x174u, t187);
    if ((t186 & 0x2000000u) != 0u)
    {
        edi = rd32(COW_IMG(0x104e1d44u));
        goto L_100066a9;
    }
    ecx = t186;
    edi = rd32(COW_IMG(0x104e1d44u));
    if ((ecx & 0x4000000u) == 0u) goto L_1000667b;
    wr32(sp0 - 0x184u, loc_18c);
    wr32(sp0 - 0x180u, loc_188);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0u);
    ebp = 0u;
    loc_184 = loc_18c;
    loc_180 = loc_188;
    loc_18c = 0u;
    loc_188 = 0u;
L_100066c9: ;
    if ((int32_t)(((uint32_t)(int16_t)loc_18c ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_18c >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_18c >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x18cu, 0u);
        loc_18c = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)ebp ^ (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x188u, 0u);
        ebp = 0u;
        loc_188 = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_184 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_184 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_184 >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x184u, 0u);
        loc_184 = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_180 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x180u, 0u);
        loc_180 = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_17c ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_17c >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_17c >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x17cu, 0u);
        loc_17c = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_170 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_170 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_170 >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x170u, 0u);
        loc_170 = 0u;
    }
    t188 = (uint32_t)(int16_t)ebp * (uint32_t)(int16_t)ebp;
    wr32(sp0 - 0x154u, t188);
    wr32(sp0 - 0x158u, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x150u, (uint32_t)(int16_t)loc_18c);
    t189 = (uint32_t)(int16_t)loc_18c * (uint32_t)(int16_t)loc_18c;
    wr32(sp0 - 0x160u, t189);
    t190 = t188 + (uint32_t)(int16_t)loc_18c * (uint32_t)(int16_t)loc_18c;
    wr32(sp0 - 0x13cu, t190);
    if ((int32_t)(t188 + (uint32_t)(int16_t)loc_18c * (uint32_t)(int16_t)loc_18c) > 9677)
    {
        eax = (uint32_t)(int16_t)ebp;
        esi = (uint32_t)(int16_t)loc_18c;
        loc_154 = t188;
        loc_158 = (uint32_t)(int16_t)ebp;
        loc_150 = (uint32_t)(int16_t)loc_18c;
        loc_160 = t189;
        loc_13c = t190;
        if ((int32_t)((esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu)) <= (int32_t)((eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu)))
        {
            ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
            eax = (esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu);
            edx = (uint32_t)((int32_t)esi >> 0x1fu);
            x0 = (double)(int32_t)loc_13c;
            x1 = (double)(int32_t)loc_154;
        }
        else
        {
            ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
            eax = (esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu);
            edx = (uint32_t)((int32_t)esi >> 0x1fu);
            x0 = (double)(int32_t)loc_13c;
            x1 = (double)(int32_t)loc_160;
        }
        g->ecx = ecx;
        g->edx = edx;
        d191 = fr(g, (double)(int32_t)loc_150 * fr(g, x0 / x1));
        d192 = fr(g, x0 / x1);
        fpush(g, d191);
        g->esp = sp0 - 0x1a0u;
        t193 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t194 = g->ecx;
        t195 = g->edx;
        wr32(sp0 - 0x18cu, t193);
        d196 = fr(g, (double)(int32_t)rd32(sp0 - 0x158u) * d192);
        fpush(g, d196);
        t197 = cow_call_regs(g, COW_IMG(0x10311c6cu), t193, g->ecx, g->edx, 1, 0);
        wr32(sp0 - 0x188u, t197);
        ebp = t197;
        loc_188 = t197;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_18c ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_18c >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_18c >> 0x1fu)) > 127)
    {
        eax = ((uint32_t)(int16_t)loc_18c ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_18c >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_18c >> 0x1fu);
        ecx = (uint32_t)(int16_t)loc_18c;
        t198 = cow_divs(g, eax, ecx);
        t199 = cow_mods(g, eax, ecx);
        t200 = (t198 << 7u) - t198;
        wr32(sp0 - 0x18cu, t200);
        loc_18c = t200;
    }
    if ((int32_t)(((uint32_t)(int16_t)ebp ^ (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu)) <= 127)
    {
        eax = ((uint32_t)(int16_t)ebp ^ (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu);
        edx = (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu);
    }
    else
    {
        eax = ((uint32_t)(int16_t)ebp ^ (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)ebp >> 0x1fu);
        ecx = (uint32_t)(int16_t)ebp;
        t201 = cow_divs(g, eax, ecx);
        t202 = cow_mods(g, eax, ecx);
        t203 = (t201 << 7u) - t201;
        wr32(sp0 - 0x188u, t203);
        eax = t201;
        edx = t203;
        loc_188 = t203;
    }
    wr8(edi + 0x252u, (uint8_t)((uint8_t)loc_18c + 0x80u));
    t204 = rd32(COW_IMG(0x104e1d44u));
    wr8(t204 + 0x253u, (uint8_t)((uint8_t)loc_188 + 0x80u));
    wr8(rd32(COW_IMG(0x104e1d44u)) + 0x250u, (uint8_t)((uint8_t)loc_184 + 0x80u));
    wr8(rd32(COW_IMG(0x104e1d44u)) + 0x251u, (uint8_t)((uint8_t)loc_180 + 0x80u));
    if ((int16_t)loc_17c <= 63)
    {
        eax = loc_17c;
        ecx = (t204 & 0xffffff00u) | (uint8_t)((uint8_t)loc_180 + 0x80u);
        edx = rd32(sp0 - 0x168u);
        goto L_10006886;
    }
    edx = rd32(sp0 - 0x168u);
    if ((edx & 0x10u) == 0u)
    {
        t205 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x10u;
        t206 = rd32(COW_IMG(0x104e1d44u));
        wr32(t206 + 0x228u, t205);
        t207 = rd32(t206 + 0x22cu);
        wr32(t206 + 0x22cu, t207);
        t208 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x10u;
        t209 = rd32(COW_IMG(0x104e1d44u));
        wr32(t209 + 0x238u, t208);
        t210 = rd32(t209 + 0x23cu);
        wr32(t209 + 0x23cu, t210);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x10u;
L_100068d4: ;
    wr32(eax, ecx);
    t217 = rd32(eax + 4u);
    wr32(eax + 4u, t217);
    ecx = t217;
L_100068dc: ;
    if ((int16_t)loc_170 <= 63)
    {
        eax = loc_170;
        goto L_10006944;
    }
    if ((edx & 0x80u) == 0u)
    {
        t218 = (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x80u);
        t219 = rd32(COW_IMG(0x104e1d44u));
        wr32(t219 + 0x228u, t218);
        t220 = rd32(t219 + 0x22cu);
        wr32(t219 + 0x22cu, t220);
        t221 = (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x80u);
        t222 = rd32(COW_IMG(0x104e1d44u));
        wr32(t222 + 0x238u, t221);
        t223 = rd32(t222 + 0x23cu);
        wr32(t222 + 0x23cu, t223);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x80u);
    edx = rd32(COW_IMG(0x104e1d44u));
L_100069a4: ;
    wr32(eax, ecx);
    t230 = rd32(eax + 4u);
    wr32(eax + 4u, t230);
    ecx = t230;
L_100069ac: ;
    wr32(self + 0xc94u, 0x10u);
    if (rd8(COW_IMG(0x10455c34u)) == 0u) goto L_10006c72;
    if (rd32(self + 0x90u) == 0u) goto L_10006c72;
    eax = rd32(self + 0x90u);
    wr32(sp0 - 0x1a4u, 0u);
    wr32(sp0 - 0x1a8u, self + 0xc94u);
    wr32(sp0 - 0x1acu, self + 0xb54u);
    wr32(sp0 - 0x1b0u, 0x14u);
    wr32(sp0 - 0x1b4u, eax);
    g->eax = eax;
    g->edx = rd32(eax);
    t231 = rd32(eax);
    g->esp = sp0 - 0x1a0u;
    t232 = cow_thiscall(g, rd32(t231 + 0x28u), ecx, 5, eax, 0x14u, self + 0xb54u, self + 0xc94u, 0u);
    t233 = g->edx;
    if (t232 == 0u)
    {
        edx = t233;
        t234 = rd32(COW_IMG(0x104e1d44u));
        wr8(COW_IMG(0x1045654au), 0u);
        wr8(sp0 - 0x18du, 1u);
        if ((rd32(t234 + 0x224u) & 4u) != 0u)
        {
            ecx = rd32(t234 + 0x224u) & 4u;
        }
        else
        {
            ecx = rd32(t234 + 0x224u) & 4u;
            wr8(sp0 - 0x18du, 0u);
        }
        wr8(COW_IMG(0x1045654au), 0u);
        if ((int32_t)rd32(self + 0xc94u) <= 0)
        {
            ebx = 0u;
            goto L_1000746a;
        }
        ebx = 0u;
        edi = self + 0xb54u;
L_10006a38: ;
        if (rd32(edi + 4u) != 0x80u)
        {
            eax = rd32(edi + 4u);
            goto L_10006b80;
        }
        eax = 0u;
        ecx = rd32(edi);
L_10006a4a: ;
        if (ecx == eax + 0x30u) goto L_10006a5e;
        edx = eax + 0x30u;
        if ((int32_t)(eax + 1u) < 128)
        {
            eax = eax + 1u;
            goto L_10006a4a;
        }
L_10006c5e: ;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0xc94u))
        {
            ebx = ebx + 1u;
            edi = edi + 0x14u;
            goto L_10006a38;
        }
        ebx = ebx + 1u;
    }
    else
    {
        edx = t233;
        wr32(self + 0xc94u, 0u);
        edi = self + 0xb54u;
        eax = 0u;
        ecx = 0x50u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ebx = self;
    }
    goto L_1000746a;
L_1000642a: ;
    t184 = rd16(self + 0xa44u);
    wr16(rd32(edx), (uint16_t)-t184);
    eax = (eax & 0xffff0000u) | (uint16_t)-t184;
    goto L_100065fc;
L_1000643e: ;
    t183 = rd32(edx);
    wr16(t183, rd16(self + 0xa48u));
    eax = t183;
    goto L_100065fc;
L_1000644f: ;
    t182 = rd16(self + 0xa48u);
    wr16(rd32(edx), (uint16_t)-t182);
    eax = (eax & 0xffff0000u) | (uint16_t)-t182;
    goto L_100065fc;
L_10006463: ;
    t181 = rd32(edx);
    wr16(t181, rd16(self + 0xa4cu));
    eax = t181;
    goto L_100065fc;
L_10006474: ;
    t180 = rd16(self + 0xa4cu);
    wr16(rd32(edx), (uint16_t)-t180);
    eax = (eax & 0xffff0000u) | (uint16_t)-t180;
    goto L_100065fc;
L_10006488: ;
    t179 = rd32(edx);
    wr16(t179, rd16(self + 0xa50u));
    eax = t179;
    goto L_100065fc;
L_10006499: ;
    t178 = rd16(self + 0xa50u);
    wr16(rd32(edx), (uint16_t)-t178);
    eax = (eax & 0xffff0000u) | (uint16_t)-t178;
    goto L_100065fc;
L_100064ad: ;
    t177 = rd32(edx);
    wr16(t177, rd16(self + 0xa54u));
    eax = t177;
    goto L_100065fc;
L_100064be: ;
    t176 = rd16(self + 0xa54u);
    wr16(rd32(edx), (uint16_t)-t176);
    eax = (eax & 0xffff0000u) | (uint16_t)-t176;
    goto L_100065fc;
L_100064d2: ;
    t175 = rd32(edx);
    wr16(t175, rd16(self + 0xa58u));
    eax = t175;
    goto L_100065fc;
L_100064e3: ;
    t174 = rd16(self + 0xa58u);
    wr16(rd32(edx), (uint16_t)-t174);
    eax = (eax & 0xffff0000u) | (uint16_t)-t174;
    goto L_100065fc;
L_100064f7: ;
    if (rd8(COW_IMG(0x10455c36u)) == 0u)
    {
        eax = rd32(edx);
        goto L_100065f9;
    }
    eax = rd32(edx);
    wr16(eax, rd16(self + 0xa5cu));
    goto L_100065fc;
L_10006515: ;
    if (rd8(COW_IMG(0x10455c36u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c36u));
        goto L_1000656d;
    }
    t173 = rd32(edx);
    wr16(t173, (uint16_t)-rd16(self + 0xa5cu));
    eax = t173;
    goto L_100065fc;
L_10006532: ;
    if (rd8(COW_IMG(0x10455c36u)) == 0u)
    {
        eax = rd32(edx);
        goto L_100065f9;
    }
    eax = rd32(edx);
    wr16(eax, rd16(self + 0xa60u));
    goto L_100065fc;
L_10006550: ;
    if (rd8(COW_IMG(0x10455c36u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c36u));
        goto L_1000656d;
    }
    t172 = rd32(edx);
    wr16(t172, (uint16_t)-rd16(self + 0xa60u));
    eax = t172;
    goto L_100065fc;
L_1000656d: ;
    wr16(rd32(edx), 0u);
    goto L_100065fc;
L_10006577: ;
    if (rd8(COW_IMG(0x10455c35u)) == 0u) goto L_100065f7;
    t169 = rd32(self + 0xa64u);
    wr32(sp0 - 0x1a4u, t169);
    g->eax = t169;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t170 = cow_thiscall_cdecl(g, COW_IMG(0x100059c0u), ecx, 1, t169);
    t171 = g->edx;
    wr16(rd32(t171), (uint16_t)t170);
    eax = t170;
    edx = t171;
    goto L_100065fc;
L_10006596: ;
    if (rd8(COW_IMG(0x10455c35u)) == 0u) goto L_100065f7;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c35u));
    t166 = rd32(self + 0xa64u);
    wr32(sp0 - 0x1a4u, t166);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t167 = cow_thiscall_cdecl(g, COW_IMG(0x100059c0u), t166, 1, t166);
    t168 = g->edx;
    wr16(rd32(t168), (uint16_t)-t167);
    eax = -t167;
    edx = t168;
    goto L_100065fc;
L_100065b7: ;
    if (rd8(COW_IMG(0x10455c35u)) == 0u) goto L_100065f7;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c35u));
    t163 = rd32(self + 0xa64u);
    wr32(sp0 - 0x1a4u, t163);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t164 = cow_cdecl(g, COW_IMG(0x10005a00u), 1, t163);
    t165 = g->edx;
    wr16(rd32(t165), (uint16_t)t164);
    eax = t164;
    edx = t165;
    goto L_100065fc;
L_100065d6: ;
    if (rd8(COW_IMG(0x10455c35u)) == 0u) goto L_100065f7;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c35u));
    t160 = rd32(self + 0xa64u);
    wr32(sp0 - 0x1a4u, t160);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a0u;
    t161 = cow_cdecl(g, COW_IMG(0x10005a00u), 1, t160);
    t162 = g->edx;
    wr16(rd32(t162), (uint16_t)-t161);
    eax = -t161;
    edx = t162;
    goto L_100065fc;
L_100065f7: ;
    eax = rd32(edx);
L_100065f9: ;
    wr16(eax, 0u);
    goto L_100065fc;
L_1000667b: ;
    if (rd16(COW_IMG(0x10455c3eu)) != 2u)
    {
        eax = rd16(COW_IMG(0x10455c3eu));
        goto L_100066a3;
    }
    wr32(sp0 - 0x184u, loc_18c);
    wr32(sp0 - 0x180u, loc_188);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0u);
    ebp = 0u;
    loc_184 = loc_18c;
    loc_180 = loc_188;
    loc_18c = 0u;
    loc_188 = 0u;
    goto L_100066c9;
L_100066a3: ;
    if ((uint16_t)eax != 1u) goto L_100066c5;
L_100066a9: ;
    wr32(sp0 - 0x17cu, loc_18c);
    wr32(sp0 - 0x170u, loc_188);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0u);
    ebp = 0u;
    loc_170 = loc_188;
    loc_17c = loc_18c;
    loc_18c = 0u;
    loc_188 = 0u;
    goto L_100066c9;
L_100066c5: ;
    ebp = loc_188;
    goto L_100066c9;
L_10006886: ;
    if ((int16_t)eax >= -63) goto L_100068dc;
    if ((edx & 0x20u) == 0u)
    {
        t211 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x20u;
        t212 = rd32(COW_IMG(0x104e1d44u));
        wr32(t212 + 0x228u, t211);
        t213 = rd32(t212 + 0x22cu);
        wr32(t212 + 0x22cu, t213);
        t214 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x20u;
        t215 = rd32(COW_IMG(0x104e1d44u));
        wr32(t215 + 0x238u, t214);
        t216 = rd32(t215 + 0x23cu);
        wr32(t215 + 0x23cu, t216);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x20u;
    goto L_100068d4;
L_10006944: ;
    if ((int16_t)eax >= -63) goto L_100069ac;
    if ((edx & 0x40u) == 0u)
    {
        t224 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x40u;
        t225 = rd32(COW_IMG(0x104e1d44u));
        wr32(t225 + 0x228u, t224);
        t226 = rd32(t225 + 0x22cu);
        wr32(t225 + 0x22cu, t226);
        t227 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x40u;
        t228 = rd32(COW_IMG(0x104e1d44u));
        wr32(t228 + 0x238u, t227);
        t229 = rd32(t228 + 0x23cu);
        wr32(t228 + 0x23cu, t229);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x40u;
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_100069a4;
L_10006a5e: ;
    if (rd8(sp0 - 0x18du) == 0u) goto L_10006af5;
    t235 = rd32(COW_IMG(0x10456048u) + eax * 8u);
    if ((t235 & rd32(COW_IMG(0x1045604cu) + eax * 8u)) == 0xffffffffu)
    {
        ecx = t235 & rd32(COW_IMG(0x1045604cu) + eax * 8u);
        edx = t235;
        goto L_10006c5e;
    }
    edx = t235;
    esi = rd32(COW_IMG(0x1045604cu) + eax * 8u);
    t236 = rd32(COW_IMG(0x104e1d44u));
    wr32(t236 + 0x228u, rd32(t236 + 0x228u) | edx);
    t237 = rd32(t236 + 0x22cu) | esi;
    wr32(t236 + 0x22cu, t237);
    t238 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | rd32(COW_IMG(0x10456048u) + eax * 8u);
    t239 = rd32(COW_IMG(0x104e1d44u));
    wr32(t239 + 0x238u, t238);
    t240 = rd32(t239 + 0x23cu) | rd32(COW_IMG(0x1045604cu) + eax * 8u);
    wr32(t239 + 0x23cu, t240);
    t241 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | rd32(COW_IMG(0x10456048u) + eax * 8u);
    t242 = rd32(COW_IMG(0x104e1d44u));
    wr32(t242 + 0x220u, t241);
    ecx = t242 + 0x220u;
    edx = rd32(t242 + 0x224u) | rd32(COW_IMG(0x1045604cu) + eax * 8u);
L_10006c5b: ;
    wr32(ecx + 4u, edx);
    goto L_10006c5e;
L_10006af5: ;
    t243 = rd32(COW_IMG(0x10455c48u) + eax * 8u);
    if ((t243 & rd32(COW_IMG(0x10455c4cu) + eax * 8u)) == 0xffffffffu)
    {
        ecx = t243 & rd32(COW_IMG(0x10455c4cu) + eax * 8u);
        edx = t243;
        goto L_10006c5e;
    }
    edx = t243;
    esi = rd32(COW_IMG(0x10455c4cu) + eax * 8u);
    t244 = rd32(COW_IMG(0x104e1d44u));
    wr32(t244 + 0x228u, rd32(t244 + 0x228u) | edx);
    t245 = rd32(t244 + 0x22cu) | esi;
    wr32(t244 + 0x22cu, t245);
    t246 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | rd32(COW_IMG(0x10455c48u) + eax * 8u);
    t247 = rd32(COW_IMG(0x104e1d44u));
    wr32(t247 + 0x238u, t246);
    t248 = rd32(t247 + 0x23cu) | rd32(COW_IMG(0x10455c4cu) + eax * 8u);
    wr32(t247 + 0x23cu, t248);
    t249 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | rd32(COW_IMG(0x10455c48u) + eax * 8u);
    t250 = rd32(COW_IMG(0x104e1d44u));
    wr32(t250 + 0x220u, t249);
    ecx = t250 + 0x220u;
    edx = rd32(t250 + 0x224u) | rd32(COW_IMG(0x10455c4cu) + eax * 8u);
    goto L_10006c5b;
L_10006b80: ;
    if (eax != 0u) goto L_10006c5e;
    ecx = rd32(edi);
L_10006b8a: ;
    if (ecx == eax + 0x30u) goto L_10006b9e;
    edx = eax + 0x30u;
    if ((int32_t)(eax + 1u) < 128)
    {
        eax = eax + 1u;
        goto L_10006b8a;
    }
    goto L_10006c5e;
L_10006b9e: ;
    if (rd8(sp0 - 0x18du) == 0u) goto L_10006c01;
    t251 = rd32(COW_IMG(0x10456048u) + eax * 8u);
    if ((t251 & rd32(COW_IMG(0x1045604cu) + eax * 8u)) == 0xffffffffu)
    {
        ecx = t251 & rd32(COW_IMG(0x1045604cu) + eax * 8u);
        edx = t251;
        goto L_10006c5e;
    }
    edx = t251;
    esi = rd32(COW_IMG(0x1045604cu) + eax * 8u);
    t252 = rd32(COW_IMG(0x104e1d44u));
    wr32(t252 + 0x230u, rd32(t252 + 0x230u) | edx);
    t253 = rd32(t252 + 0x234u) | esi;
    wr32(t252 + 0x234u, t253);
    t254 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) ^ rd32(COW_IMG(0x10456048u) + eax * 8u);
    t255 = rd32(COW_IMG(0x104e1d44u));
    wr32(t255 + 0x220u, t254);
    eax = rd32(COW_IMG(0x1045604cu) + eax * 8u);
    ecx = t255 + 0x220u;
L_10006c56: ;
    edx = rd32(ecx + 4u) ^ eax;
    goto L_10006c5b;
L_10006c01: ;
    t256 = rd32(COW_IMG(0x10455c48u) + eax * 8u);
    if ((t256 & rd32(COW_IMG(0x10455c4cu) + eax * 8u)) == 0xffffffffu)
    {
        ecx = t256 & rd32(COW_IMG(0x10455c4cu) + eax * 8u);
        edx = t256;
        goto L_10006c5e;
    }
    edx = t256;
    esi = rd32(COW_IMG(0x10455c4cu) + eax * 8u);
    t257 = rd32(COW_IMG(0x104e1d44u));
    wr32(t257 + 0x230u, rd32(t257 + 0x230u) | edx);
    t258 = rd32(t257 + 0x234u) | esi;
    wr32(t257 + 0x234u, t258);
    t259 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) ^ rd32(COW_IMG(0x10455c48u) + eax * 8u);
    t260 = rd32(COW_IMG(0x104e1d44u));
    wr32(t260 + 0x220u, t259);
    eax = rd32(COW_IMG(0x10455c4cu) + eax * 8u);
    ecx = t260 + 0x220u;
    goto L_10006c56;
L_10006c72: ;
    wr32(self + 0xc94u, 0u);
    ebx = self;
    goto L_1000746a;
L_10006c7e: ;
    if (rd8(self + 0xc99u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xc99u);
        goto L_1000743c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xc99u);
    t261 = rd8(rd32(COW_IMG(0x103d3c64u)) + 0x1cu);
    t262 = rd8(COW_IMG(0x10455c37u));
    wr8(sp0 - 0x160u, (uint8_t)t261);
    if ((uint8_t)t262 == 0u)
    {
        eax = (eax & 0xffffff00u) | t261;
        goto L_10006ca7;
    }
    eax = (eax & 0xffffff00u) | t261;
    if ((uint8_t)eax == 0u) goto L_10006cb9;
L_10006ca7: ;
    t263 = (uint8_t)rd32(sp0 - 0x160u);
    wr32(sp0 - 0x1a4u, t263);
    g->esp = sp0 - 0x1a0u;
    cow_call_regs(g, COW_IMG(0x10008f00u), g->eax, g->ecx, t263, 0, 1, t263);
    t264 = g->edx;
    edx = t264;
L_10006cb9: ;
    edi = self + 0xa44u;
    eax = 0u;
    ecx = 0x44u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0x1a0u;
    cow_call_regs(g, COW_IMG(0x10007ae0u), eax, self, g->edx, 1, 0);
    wr32(sp0 - 0x14cu, 0u);
    wr32(sp0 - 0x148u, 0u);
    wr32(sp0 - 0x1a4u, sp0 - 0x14cu);
    wr32(sp0 - 0x144u, 0u);
    t265 = rd32(self + 0xc9cu);
    wr32(sp0 - 0x1a8u, t265);
    wr32(sp0 - 0x178u, 0u);
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x140u, 0u);
    g->ecx = self;
    g->edx = t265;
    t266 = cow_stdcall(g, COW_IMG(0x10008ea0u), 2, t265, sp0 - 0x14cu);
    t267 = g->ecx;
    t268 = g->edx;
    if (t266 != 0u)
    {
        ecx = t267;
        edx = t268;
        ebx = self;
        goto L_1000746a;
    }
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x154u, 0u);
    wr32(sp0 - 0x150u, 0u);
    wr32(sp0 - 0x158u, 0u);
    wr8(sp0 - 0x18du, 0u);
    wr32(sp0 - 0x160u, 0u);
    ecx = 0u;
    loc_13c = 0u;
    loc_154 = 0u;
    loc_150 = 0u;
    loc_158 = 0u;
    loc_160 = 0u;
L_10006d21: ;
    if (rd32(COW_IMG(0x1032981cu) + ecx) == 0x10000u)
    {
        eax = rd32(COW_IMG(0x1032981cu) + ecx);
        goto L_10006d49;
    }
    eax = rd32(COW_IMG(0x1032981cu) + ecx);
    if (eax == 0x20000u) goto L_10006d43;
    zf = 1u;
L_10006d4f: ;
    if (zf) goto L_10006e16;
    edx = 0u;
    esi = rd32(COW_IMG(0x10329818u) + ecx);
L_10006d5d: ;
    if ((int8_t)rd8(COW_IMG(0x10455b20u) + edx) > 16)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455b20u) + edx);
        goto L_10006e08;
    }
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455b20u) + edx);
    cf = rd8(COW_IMG(0x10455b20u) + edx) < 0x10u;
    pf = PARITY((uint8_t)(rd8(COW_IMG(0x10455b20u) + edx) - 0x10u));
    zf = (uint8_t)(rd8(COW_IMG(0x10455b20u) + edx) - 0x10u) == 0u;
    sf = (int8_t)(rd8(COW_IMG(0x10455b20u) + edx) - 0x10u) < 0;
    of = ((rd8(COW_IMG(0x10455b20u) + edx) ^ 0x10u) & (rd8(COW_IMG(0x10455b20u) + edx) ^ (uint8_t)(rd8(COW_IMG(0x10455b20u) + edx) - 0x10u))) >> 7u;
    if (esi != 1u << (ecx & 0x1fu)) goto L_10006e08;
    t269 = rd32(COW_IMG(0x10329688u) + edx * 8u);
    if ((t269 & rd32(COW_IMG(0x1032968cu) + edx * 8u)) != 0xffffffffu)
    {
        eax = t269;
        ecx = rd32(COW_IMG(0x1032968cu) + edx * 8u);
        goto L_10006df8;
    }
    ecx = rd32(COW_IMG(0x1032968cu) + edx * 8u);
    if (rd32(COW_IMG(0x1034f930u) + edx * 4u) - 0x11u > 7u) goto L_10006e08;
    eax = rd32(COW_IMG(0x1034f930u) + edx * 4u) - 0x11u;
    t270 = rd32(COW_IMG(0x100077dcu) + eax * 4u);
    switch (t270 - RD)
    {
    case 0x10006da8u: goto L_10006da8;
    case 0x10006db2u: goto L_10006db2;
    case 0x10006dbcu: goto L_10006dbc;
    case 0x10006dc6u: goto L_10006dc6;
    case 0x10006dd0u: goto L_10006dd0;
    case 0x10006ddau: goto L_10006dda;
    case 0x10006de4u: goto L_10006de4;
    case 0x10006deeu: goto L_10006dee;
    default: rt_fatal(g, COW_IMG(0x10006da1u), "switch");
    }
    return 0;
L_10006d43: ;
    eax = eax & 0xffffff00u;
L_10006d4d: ;
    zf = (uint8_t)eax == 0u;
    goto L_10006d4f;
L_10006d49: ;
    eax = eax & 0xffffff00u;
    goto L_10006d4d;
L_10006da8: ;
    wr32(sp0 - 0x150u, 0xffffff81u);
    loc_150 = 0xffffff81u;
L_10006e08: ;
    if (edx + 1u < 0x21u)
    {
        edx = edx + 1u;
        goto L_10006d5d;
    }
    ecx = loc_160;
L_10006e16: ;
    wr32(sp0 - 0x160u, ecx + 0x10u);
    if (ecx + 0x10u < 0x180u)
    {
        loc_160 = ecx + 0x10u;
        ecx = ecx + 0x10u;
        goto L_10006d21;
    }
    wr32(sp0 - 0x160u, 0u);
    ecx = 0u;
    loc_160 = 0u;
L_10006e2f: ;
    if (rd32(COW_IMG(0x1032981cu) + ecx) == 0x10000u)
    {
        eax = rd32(COW_IMG(0x1032981cu) + ecx);
        goto L_10006e57;
    }
    eax = rd32(COW_IMG(0x1032981cu) + ecx);
    if (eax == 0x20000u) goto L_10006e51;
    zf = 1u;
L_10006e5d: ;
    if (!zf)
    {
        edx = 0u;
        esi = rd32(COW_IMG(0x10329818u) + ecx);
L_10006e6b: ;
        if (rd8(sp0 - 0x18du) == 0u)
        {
            eax = rd32(COW_IMG(0x10329790u) + edx * 4u);
            ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x18du);
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455b20u) + eax);
        }
        else
        {
            eax = rd32(COW_IMG(0x10329790u) + edx * 4u);
            ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x18du);
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455ba0u) + eax);
        }
        if ((int8_t)ecx > 16) goto L_10006ebe;
        cf = (uint8_t)ecx < 0x10u;
        pf = PARITY((uint8_t)((uint8_t)ecx - 0x10u));
        zf = (uint8_t)((uint8_t)ecx - 0x10u) == 0u;
        sf = (int8_t)((uint8_t)ecx - 0x10u) < 0;
        of = (((uint8_t)ecx ^ 0x10u) & ((uint8_t)ecx ^ (uint8_t)((uint8_t)ecx - 0x10u))) >> 7u;
        if (esi != 1u << (ecx & 0x1fu)) goto L_10006ebe;
        if ((rd32(COW_IMG(0x10329688u) + eax * 8u) & rd32(COW_IMG(0x1032968cu) + eax * 8u)) != 0xffffffffu) goto L_10006ec6;
        ecx = rd32(COW_IMG(0x10329688u) + eax * 8u) & rd32(COW_IMG(0x1032968cu) + eax * 8u);
        if ((int32_t)rd32(COW_IMG(0x1034f930u) + eax * 4u) < 17) goto L_10006ec6;
        eax = rd32(COW_IMG(0x1034f930u) + eax * 4u);
        if ((int32_t)eax > 24) goto L_10006ec6;
L_10006ebe: ;
        if (edx + 1u < 0x21u)
        {
            edx = edx + 1u;
            goto L_10006e6b;
        }
    }
L_10006f2e: ;
    wr32(sp0 - 0x160u, loc_160 + 0x10u);
    if (loc_160 + 0x10u < 0x180u)
    {
        ecx = loc_160 + 0x10u;
        loc_160 = loc_160 + 0x10u;
        goto L_10006e2f;
    }
    wr32(self + 0xa44u, 0u);
    wr32(self + 0xa48u, 0u);
    wr32(self + 0xa50u, 0u);
    wr32(self + 0xa54u, 0u);
    eax = sp0 - 0x134u;
    esi = COW_IMG(0x10456448u);
L_10006fc8: ;
    t274 = rd32(esi + 4u);
    wr32(sp0 - 0x15cu, t274);
    if ((int32_t)rd32(esi + 4u) < -1) goto L_1000706e;
    ecx = t274;
    edx = rd32(esi);
    zf = rd32(esi + 4u) + 1u == 0u;
    sf = (int32_t)(rd32(esi + 4u) + 1u) < 0;
    of = (~rd32(esi + 4u) & (rd32(esi + 4u) ^ rd32(esi + 4u) + 1u)) >> 0x1fu;
    if (!zf && sf == of) goto L_10006fe5;
    if (edx < 0xfffffffbu) goto L_1000706e;
L_10006fe5: ;
    if ((int32_t)ecx > 0) goto L_1000706e;
    sf = (int32_t)ecx < 0;
    if (sf) goto L_10006ff4;
    if (edx > 5u) goto L_1000706e;
L_10006ff4: ;
    t275 = rd32(COW_IMG(0x100077fcu) + edx * 4u + 0x14u);
    switch (t275 - RD)
    {
    case 0x10006ffeu: edx = edx + 5u; goto L_10006ffe;
    case 0x1000700cu: goto L_1000700c;
    case 0x10007015u: edx = edx + 5u; goto L_10007015;
    case 0x10007023u: goto L_10007023;
    case 0x1000702cu: goto L_1000702c;
    case 0x10007033u: goto L_10007033;
    case 0x1000703au: edx = edx + 5u; goto L_1000703a;
    case 0x10007048u: goto L_10007048;
    case 0x10007051u: edx = edx + 5u; goto L_10007051;
    case 0x1000705fu: goto L_1000705f;
    case 0x1000706eu: goto L_1000706e;
    default: rt_fatal(g, COW_IMG(0x10006ff7u), "switch");
    }
    return 0;
L_10006db2: ;
    wr32(sp0 - 0x150u, 0x7fu);
    loc_150 = 0x7fu;
    goto L_10006e08;
L_10006dbc: ;
    wr32(sp0 - 0x158u, 0xffffff81u);
    loc_158 = 0xffffff81u;
    goto L_10006e08;
L_10006dc6: ;
    wr32(sp0 - 0x158u, 0x7fu);
    loc_158 = 0x7fu;
    goto L_10006e08;
L_10006dd0: ;
    wr32(sp0 - 0x13cu, 0xffffff81u);
    loc_13c = 0xffffff81u;
    goto L_10006e08;
L_10006dda: ;
    wr32(sp0 - 0x13cu, 0x7fu);
    loc_13c = 0x7fu;
    goto L_10006e08;
L_10006de4: ;
    wr32(sp0 - 0x154u, 0xffffff81u);
    loc_154 = 0xffffff81u;
    goto L_10006e08;
L_10006dee: ;
    wr32(sp0 - 0x154u, 0x7fu);
    loc_154 = 0x7fu;
    goto L_10006e08;
L_10006df8: ;
    if (eax == 0x100000u)
    {
        if (ecx == 0u)
        {
            wr8(sp0 - 0x18du, 1u);
        }
    }
    goto L_10006e08;
L_10006e51: ;
    eax = eax & 0xffffff00u;
L_10006e5b: ;
    zf = (uint8_t)eax == 0u;
    goto L_10006e5d;
L_10006e57: ;
    eax = eax & 0xffffff00u;
    goto L_10006e5b;
L_10006ec6: ;
    if (edx < 0x21u)
    {
        if (rd32(COW_IMG(0x10329790u) + edx * 4u) < 0x21u)
        {
            eax = rd32(COW_IMG(0x10329790u) + edx * 4u);
            t271 = rd32(COW_IMG(0x10329688u) + eax * 8u);
            if ((t271 & rd32(COW_IMG(0x1032968cu) + eax * 8u)) != 0xffffffffu)
            {
                ebp = rd32(COW_IMG(0x1032968cu) + eax * 8u);
                edi = t271;
                eax = 0u;
                ecx = COW_IMG(0x10329818u);
L_10006ef5: ;
                if (edi != rd32(ecx)) goto L_10006f01;
                if (ebp == 0u) goto L_10006f0c;
L_10006f01: ;
                if (eax + 1u < 0x18u)
                {
                    eax = eax + 1u;
                    ecx = ecx + 0x10u;
                    goto L_10006ef5;
                }
            }
        }
    }
    goto L_10006f2e;
L_10006f0c: ;
    if (eax < 0x18u)
    {
        t272 = loc_178 | rd32(COW_IMG(0x10329810u) + eax * 0x10u);
        wr32(sp0 - 0x178u, t272);
        t273 = loc_174 | rd32(COW_IMG(0x10329814u) + eax * 0x10u);
        wr32(sp0 - 0x174u, t273);
        loc_178 = t272;
        loc_174 = t273;
    }
    goto L_10006f2e;
L_10006ffe: ;
    wr16(rd32(eax), rd16(self + 0xa44u));
L_1000706e: ;
    if ((int32_t)(esi + 8u) < (int32_t)COW_IMG(0x104564a8u))
    {
        eax = eax + 4u;
        esi = esi + 8u;
        goto L_10006fc8;
    }
    if (loc_158 == 0u)
    {
        ecx = rd32(sp0 - 0x18cu);
    }
    else
    {
        ecx = loc_158;
        wr32(sp0 - 0x18cu, ecx);
    }
    if (loc_150 == 0u)
    {
        esi = rd32(sp0 - 0x188u);
    }
    else
    {
        esi = loc_150;
        wr32(sp0 - 0x188u, esi);
        loc_188 = esi;
    }
    if (loc_154 != 0u)
    {
        eax = loc_154;
        wr32(sp0 - 0x184u, eax);
        loc_184 = eax;
    }
    if (loc_13c == 0u)
    {
        eax = loc_13c;
    }
    else
    {
        eax = loc_13c;
        wr32(sp0 - 0x180u, eax);
        loc_180 = eax;
    }
    if (rd8(COW_IMG(0x10455c3bu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3bu));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3bu));
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x17cu, 0u);
        loc_170 = 0u;
        loc_17c = 0u;
    }
    if (rd8(COW_IMG(0x10455c3cu)) != 0u)
    {
        wr32(sp0 - 0x180u, 0u);
        wr32(sp0 - 0x184u, 0u);
        loc_184 = 0u;
        loc_180 = 0u;
    }
    if ((loc_178 & 0x2000000u) == 0u)
    {
        edi = loc_178;
        goto L_1000710b;
    }
    edi = loc_178;
    wr32(sp0 - 0x17cu, ecx);
    wr32(sp0 - 0x170u, esi);
    wr32(sp0 - 0x174u, loc_174);
    edi = edi & 0xffffff0fu;
    loc_170 = esi;
    loc_17c = ecx;
L_1000714a: ;
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0u);
    ecx = 0u;
    esi = 0u;
    loc_188 = 0u;
L_10007152: ;
    if ((int32_t)(((uint32_t)(int16_t)ecx ^ (uint32_t)((int32_t)(uint32_t)(int16_t)ecx >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)ecx >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x18cu, 0u);
        ecx = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)esi ^ (uint32_t)((int32_t)(uint32_t)(int16_t)esi >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)esi >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x188u, 0u);
        loc_188 = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_184 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_184 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_184 >> 0x1fu)) < 42)
    {
        wr32(sp0 - 0x184u, 0u);
        loc_184 = 0u;
    }
    if ((int32_t)(((uint32_t)(int16_t)loc_180 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu)) >= 42)
    {
        eax = ((uint32_t)(int16_t)loc_180 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu);
    }
    else
    {
        eax = ((uint32_t)(int16_t)loc_180 ^ (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)loc_180 >> 0x1fu);
        wr32(sp0 - 0x180u, 0u);
        loc_180 = 0u;
    }
    t276 = rd32(COW_IMG(0x104e1d44u));
    t277 = rd32(sp0 - 0x168u);
    wr8(t276 + 0x252u, (uint8_t)((uint8_t)ecx + 0x80u));
    t278 = rd32(COW_IMG(0x104e1d44u));
    wr8(t278 + 0x253u, (uint8_t)((uint8_t)loc_188 + 0x80u));
    wr8(rd32(COW_IMG(0x104e1d44u)) + 0x250u, (uint8_t)((uint8_t)loc_184 + 0x80u));
    wr8(rd32(COW_IMG(0x104e1d44u)) + 0x251u, (uint8_t)((uint8_t)loc_180 + 0x80u));
    wr32(rd32(COW_IMG(0x104e1d44u)) + 0x220u, edi);
    t279 = rd32(COW_IMG(0x104e1d44u));
    wr32(t279 + 0x224u, loc_174);
    if ((int16_t)loc_17c <= 63)
    {
        eax = loc_17c;
        ecx = t279;
        edx = loc_174;
        ebx = t277;
        goto L_10007261;
    }
    ebx = t277;
    if ((ebx & 0x10u) == 0u)
    {
        t280 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x10u;
        t281 = rd32(COW_IMG(0x104e1d44u));
        wr32(t281 + 0x228u, t280);
        t282 = rd32(t281 + 0x22cu);
        wr32(t281 + 0x22cu, t282);
        t283 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x10u;
        t284 = rd32(COW_IMG(0x104e1d44u));
        wr32(t284 + 0x238u, t283);
        t285 = rd32(t284 + 0x23cu);
        wr32(t284 + 0x23cu, t285);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x10u;
    edx = rd32(COW_IMG(0x104e1d44u));
L_100072c1: ;
    wr32(eax, ecx);
    t292 = rd32(eax + 4u);
    wr32(eax + 4u, t292);
    ecx = t292;
L_100072c9: ;
    if ((int16_t)loc_170 <= 63)
    {
        eax = loc_170;
        goto L_10007331;
    }
    if ((ebx & 0x80u) == 0u)
    {
        t293 = (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x80u);
        t294 = rd32(COW_IMG(0x104e1d44u));
        wr32(t294 + 0x228u, t293);
        t295 = rd32(t294 + 0x22cu);
        wr32(t294 + 0x22cu, t295);
        t296 = (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x80u);
        t297 = rd32(COW_IMG(0x104e1d44u));
        wr32(t297 + 0x238u, t296);
        t298 = rd32(t297 + 0x23cu);
        wr32(t297 + 0x23cu, t298);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = (rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x80u);
    edx = rd32(COW_IMG(0x104e1d44u));
L_10007391: ;
    wr32(eax, ecx);
    t305 = rd32(eax + 4u);
    wr32(eax + 4u, t305);
    ecx = t305;
L_10007399: ;
    if (edi != ebx)
    {
        esi = rd32(sp0 - 0x164u);
        goto L_100073ab;
    }
    esi = rd32(sp0 - 0x164u);
    if (loc_174 == esi) goto L_1000746a;
L_100073ab: ;
    t306 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u);
    t307 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    t308 = (t306 ^ ebx) & t306;
    wr32(rd32(COW_IMG(0x104e1d44u)) + 0x228u, t308);
    t309 = (t307 ^ esi) & t307;
    wr32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu, t309);
    t310 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) ^ rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) ^ ebx;
    t311 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu);
    t312 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    wr32(rd32(COW_IMG(0x104e1d44u)) + 0x230u, t310);
    t313 = t311 ^ t312 ^ esi;
    wr32(rd32(COW_IMG(0x104e1d44u)) + 0x234u, t313);
    t314 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u);
    if ((t314 | rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu)) == 0u)
    {
        ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu);
        edx = rd32(COW_IMG(0x104e1d44u));
    }
    else
    {
        eax = t314;
        ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu);
        edx = rd32(COW_IMG(0x104e1d44u));
        wr32(edx + 0x238u, eax);
        t315 = rd32(COW_IMG(0x104e1d44u));
        wr32(t315 + 0x23cu, ecx);
        edx = t315;
    }
    goto L_1000746a;
L_1000700c: ;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0xa44u);
L_10007066: ;
    wr16(rd32(eax), (uint16_t)-(uint16_t)ecx);
    goto L_1000706e;
L_10007015: ;
    wr16(rd32(eax), rd16(self + 0xa48u));
    goto L_1000706e;
L_10007023: ;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0xa48u);
    goto L_10007066;
L_1000702c: ;
    wr16(rd32(eax), 0u);
    goto L_1000706e;
L_10007033: ;
    wr16(rd32(eax), 0u);
    goto L_1000706e;
L_1000703a: ;
    wr16(rd32(eax), rd16(self + 0xa50u));
    goto L_1000706e;
L_10007048: ;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0xa50u);
    goto L_10007066;
L_10007051: ;
    wr16(rd32(eax), rd16(self + 0xa54u));
    goto L_1000706e;
L_1000705f: ;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0xa54u);
    goto L_10007066;
L_1000710b: ;
    if ((edi & 0x4000000u) == 0u)
    {
        eax = edi & 0x4000000u;
        goto L_10007122;
    }
    wr32(sp0 - 0x184u, ecx);
    wr32(sp0 - 0x180u, esi);
    loc_184 = ecx;
    loc_180 = esi;
L_10007146: ;
    goto L_1000714a;
L_10007122: ;
    if (rd16(COW_IMG(0x10455c3eu)) != 2u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10455c3eu));
        goto L_10007138;
    }
    wr32(sp0 - 0x184u, ecx);
    wr32(sp0 - 0x180u, esi);
    loc_184 = ecx;
    loc_180 = esi;
    goto L_10007146;
L_10007138: ;
    if ((uint16_t)eax != 1u) goto L_10007152;
    wr32(sp0 - 0x17cu, ecx);
    wr32(sp0 - 0x170u, esi);
    loc_170 = esi;
    loc_17c = ecx;
    goto L_10007146;
L_10007261: ;
    if ((int16_t)eax >= -63) goto L_100072c9;
    if ((ebx & 0x20u) == 0u)
    {
        t286 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x20u;
        t287 = rd32(COW_IMG(0x104e1d44u));
        wr32(t287 + 0x228u, t286);
        t288 = rd32(t287 + 0x22cu);
        wr32(t287 + 0x22cu, t288);
        t289 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x20u;
        t290 = rd32(COW_IMG(0x104e1d44u));
        wr32(t290 + 0x238u, t289);
        t291 = rd32(t290 + 0x23cu);
        wr32(t290 + 0x23cu, t291);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x20u;
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_100072c1;
L_10007331: ;
    if ((int16_t)eax >= -63) goto L_10007399;
    if ((ebx & 0x40u) == 0u)
    {
        t299 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) | 0x40u;
        t300 = rd32(COW_IMG(0x104e1d44u));
        wr32(t300 + 0x228u, t299);
        t301 = rd32(t300 + 0x22cu);
        wr32(t300 + 0x22cu, t301);
        t302 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) | 0x40u;
        t303 = rd32(COW_IMG(0x104e1d44u));
        wr32(t303 + 0x238u, t302);
        t304 = rd32(t303 + 0x23cu);
        wr32(t303 + 0x23cu, t304);
    }
    eax = rd32(COW_IMG(0x104e1d44u)) + 0x220u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) | 0x40u;
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_10007391;
L_1000743c: ;
    if (rd8(COW_IMG(0x10455c34u)) == 0u)
    {
        ebx = self;
    }
    else
    {
        t316 = rd32(self + 0xda4u) + 1u;
        wr32(self + 0xda4u, t316);
        if ((int32_t)t316 <= 90)
        {
            ecx = t316;
            ebx = self;
        }
        else
        {
            eax = t316;
            wr32(self + 0xda4u, 0u);
            g->esp = sp0 - 0x1a0u;
            cow_call_regs(g, COW_IMG(0x100083d0u), eax, self, edx, 1, 0);
            t317 = g->ecx;
            t318 = g->edx;
            ecx = t317;
            edx = t318;
            ebx = self;
        }
    }
    goto L_1000746a;
L_100074b8: ;
    ebx = rd32(sp0 - 0x174u);
    esi = rd32(sp0 - 0x178u);
    goto L_100074c0;
L_10007524: ;
    ecx = loc_138;
L_10007528: ;
    if ((esi | ecx) == 0u) goto L_1000755b;
    if (((eax & rd32(edi + 0x230u)) | (edx & rd32(edi + 0x234u))) == 0u) goto L_1000755b;
    ebp = rd32(edi + 0x234u);
    esi = edi + 0x230u;
    t331 = eax ^ rd32(esi);
    wr32(esi, t331);
    wr32(esi + 4u, edx ^ ebp);
    goto L_10007555;
L_100076fb: ;
    wr8(ecx + 0xdacu, 1u);
    goto L_10007715;
L_10007704: ;
    t353 = rd32(sp0 - 0x16cu);
    wr32(edi + 0x248u, 0u);
    wr8(t353 + 0xdacu, 0u);
    edx = t353;
    goto L_10007715;
L_10007764: ;
    if ((uint16_t)eax != 2u) goto L_1000773f;
    zf = (uint8_t)edx == 0u;
    goto L_1000774f;
L_1000776e: ;
    wr16(COW_IMG(0x10455c3eu), (uint16_t)eax);
    wr16(COW_IMG(0x10455c3eu), 0u);
    g->ebx = rd32(sp0 - 0x194u);
    g->esi = rd32(sp0 - 0x19cu);
    g->edi = rd32(sp0 - 0x1a0u);
    g->ebp = rd32(sp0 - 0x198u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10005a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10005a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
