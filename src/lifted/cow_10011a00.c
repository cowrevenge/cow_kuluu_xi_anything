/* f_0x10011a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10011a00(Guest* g)
{
    double d2;
    double d201;
    double d348;
    double d361;
    double d373;
    double d378;
    double d379;
    double d380;
    double d381;
    double d383;
    double d387;
    double d392;
    double d393;
    double d394;
    double d396;
    double d397;
    double d403;
    double d404;
    double d410;
    double d412;
    double d413;
    double d416;
    double d417;
    double d418;
    double d425;
    double d432;
    double d433;
    double d434;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_234;
    uint32_t loc_238;
    double loc_238_f;
    double loc_240_f;
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
    uint32_t t20;
    uint32_t t200;
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
    uint32_t t341;
    uint32_t t342;
    uint32_t t343;
    uint32_t t344;
    uint32_t t345;
    uint32_t t346;
    uint32_t t347;
    uint32_t t349;
    uint32_t t35;
    uint32_t t350;
    uint32_t t351;
    uint32_t t352;
    uint32_t t353;
    uint32_t t354;
    uint32_t t355;
    uint32_t t356;
    uint32_t t357;
    uint32_t t358;
    uint32_t t359;
    uint32_t t36;
    uint32_t t360;
    uint32_t t362;
    uint32_t t363;
    uint32_t t364;
    uint32_t t365;
    uint32_t t366;
    uint32_t t367;
    uint32_t t368;
    uint32_t t369;
    uint32_t t37;
    uint32_t t370;
    uint32_t t371;
    uint32_t t372;
    uint32_t t374;
    uint32_t t375;
    uint32_t t376;
    uint32_t t377;
    uint32_t t38;
    uint32_t t382;
    uint32_t t384;
    uint32_t t385;
    uint32_t t386;
    uint32_t t388;
    uint32_t t389;
    uint32_t t39;
    uint32_t t390;
    uint32_t t391;
    uint32_t t395;
    uint32_t t398;
    uint32_t t399;
    uint32_t t4;
    uint32_t t40;
    uint32_t t400;
    uint32_t t401;
    uint32_t t402;
    uint32_t t405;
    uint32_t t406;
    uint32_t t407;
    uint32_t t408;
    uint32_t t409;
    uint32_t t41;
    uint32_t t411;
    uint32_t t414;
    uint32_t t415;
    uint32_t t419;
    uint32_t t42;
    uint32_t t420;
    uint32_t t421;
    uint32_t t422;
    uint32_t t423;
    uint32_t t424;
    uint32_t t426;
    uint32_t t427;
    uint32_t t428;
    uint32_t t429;
    uint32_t t43;
    uint32_t t430;
    uint32_t t431;
    uint32_t t435;
    uint32_t t436;
    uint32_t t437;
    uint32_t t438;
    uint32_t t439;
    uint32_t t44;
    uint32_t t440;
    uint32_t t441;
    uint32_t t442;
    uint32_t t443;
    uint32_t t444;
    uint32_t t445;
    uint32_t t446;
    uint32_t t447;
    uint32_t t448;
    uint32_t t449;
    uint32_t t45;
    uint32_t t450;
    uint32_t t451;
    uint32_t t452;
    uint32_t t453;
    uint32_t t454;
    uint32_t t455;
    uint32_t t456;
    uint32_t t457;
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
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 632u);

    wr32(sp0 - 0x244u, in_ebx);
    wr32(sp0 - 0x248u, in_ebp);
    wr32(sp0 - 0x24cu, in_esi);
    wr32(sp0 - 0x250u, in_edi);
    t1 = rd32(COW_IMG(0x104566e8u));
    wr32(COW_IMG(0x10456904u), 0u);
    wr32(COW_IMG(0x10456908u), 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        edi = t1;
        d2 = (double)rdf32(self + 0x28u);
        if (!(d2 < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            x0 = (double)rdf32(self + 0x28u);
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x250u;
        t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t4 = g->edx;
        wr32(sp0 - 0x254u, t3);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x1000d3f0u), edi, 1, t3);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    t7 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    t8 = cow_fastcall(g, COW_IMG(0x10009710u), t7, edx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        edx = t10;
        goto L_10011a9a;
    }
    ecx = t9;
    edx = t10;
    wr8(rd32(COW_IMG(0x103d3c64u)) + 0x1cu, 0u);
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        goto L_10011a83;
    }
    eax = rd32(COW_IMG(0x10456a7cu));
    wr32(sp0 - 0x254u, 0xau);
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t11 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0xau);
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return t11 & 0xffffff00u;
L_10011a83: ;
    wr32(sp0 - 0x254u, 3u);
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t12 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 3u);
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return t12 & 0xffffff00u;
L_10011a9a: ;
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t13 = cow_fastcall(g, COW_IMG(0x10009730u), rd32(COW_IMG(0x1045666cu)), edx, 0);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_call_regs(g, COW_IMG(0x10009920u), t13, rd32(COW_IMG(0x1045666cu)), g->edx, 1, 0);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x1000bb10u), 0);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x1003ab70u), rd32(COW_IMG(0x1047b970u)), 0);
    t20 = g->edx;
    if (rd32(COW_IMG(0x10455c20u)) == 0u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        ecx = rd32(COW_IMG(0x10455c20u));
        edx = t20;
        wr32(sp0 - 0x254u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        t21 = cow_thiscall(g, COW_IMG(0x10008830u), ecx, 1, 0u);
        t22 = g->ecx;
        t23 = g->edx;
        if ((uint8_t)t21 == 0u)
        {
            eax = t21;
            edx = t23;
        }
        else
        {
            eax = t21;
            ecx = t22;
            edx = t23;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t24 = cow_stdcall(g, COW_IMG(0x1019c5b0u), 0);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t26 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    if ((uint8_t)t26 != 0u)
    {
        t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u);
        wr32(sp0 - 0x254u, t27);
        t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
        wr32(sp0 - 0x258u, t28);
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
        wr32(sp0 - 0x25cu, t29);
        g->ebx = 0u;
        g->edx = t29;
        g->esp = sp0 - 0x250u;
        cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t29, t28, t27);
        t30 = g->edx;
        wr32(sp0 - 0x254u, 0u);
        wr32(sp0 - 0x258u, 0x3f800000u);
        t31 = rd32(self + 0x308u);
        wr32(sp0 - 0x25cu, t31);
        wr32(sp0 - 0x260u, 3u);
        g->eax = t31;
        g->edx = t30;
        t32 = cow_thiscall(g, COW_IMG(0x1000a390u), rd32(COW_IMG(0x1045666cu)), 4, 3u, t31, 0x3f800000u, 0u);
        t33 = g->edx;
        wr32(sp0 - 0x254u, 0u);
        wr32(sp0 - 0x258u, 0u);
        cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t33, 2, 0u, 0u);
    }
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a4u);
    wr32(sp0 - 0x254u, t34);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x19cu);
    wr32(sp0 - 0x258u, t35);
    t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    wr32(sp0 - 0x25cu, t36);
    g->ebx = 0u;
    g->eax = t34;
    g->edx = t35;
    g->esp = sp0 - 0x250u;
    t37 = cow_thiscall(g, COW_IMG(0x1000a800u), rd32(COW_IMG(0x1045666cu)), 3, t36, t35, t34);
    t38 = g->edx;
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0x3f800000u);
    t39 = rd32(self + 0x308u);
    wr32(sp0 - 0x25cu, t39);
    wr32(sp0 - 0x260u, 3u);
    t40 = rd32(COW_IMG(0x1045666cu));
    wr8(sp0 - 0x239u, (uint8_t)t37);
    cow_thiscall(g, COW_IMG(0x1000a390u), t40, 4, 3u, t39, 0x3f800000u, 0u);
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0xa0u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10011b98;
    }
    wr32(self + 0x44u, 0xdu);
L_10011cb9: ;
    edx = rd32(COW_IMG(0x10456a28u));
L_10011cbf: ;
    if (rd32(self + 0x44u) == rd32(self + 0x40u))
    {
        ecx = rd32(self + 0x40u);
    }
    else
    {
        eax = rd32(self + 0x44u);
        wr32(sp0 - 0x254u, 0u);
        wr32(self + 0x40u, eax);
        g->esp = sp0 - 0x250u;
        cow_call_regs(g, COW_IMG(0x10010ce0u), eax, self, g->edx, 0, 1, 0u);
        t64 = g->ecx;
        wr32(self + 0x48u, 0u);
        ecx = t64;
        edx = rd32(COW_IMG(0x10456a28u));
    }
    if (rd32(self + 0x44u) > 0x11u)
    {
        edi = 0xcu;
        goto L_100121c4;
    }
    eax = rd32(self + 0x44u);
    t65 = rd32(COW_IMG(0x10012eecu) + eax * 4u);
    switch (t65 - RD)
    {
    case 0x10011cf0u: goto L_10011cf0;
    case 0x10011d6fu: goto L_10011d6f;
    case 0x10011e83u: goto L_10011e83;
    case 0x10011ea6u: goto L_10011ea6;
    case 0x10011f1fu: goto L_10011f1f;
    case 0x10011f4au: goto L_10011f4a;
    case 0x10011fb2u: goto L_10011fb2;
    case 0x10012080u: goto L_10012080;
    case 0x100120a1u: goto L_100120a1;
    case 0x100120c2u: goto L_100120c2;
    case 0x100120e3u: goto L_100120e3;
    case 0x10012104u: goto L_10012104;
    case 0x10012110u: goto L_10012110;
    case 0x1001214eu: goto L_1001214e;
    case 0x1001219au: goto L_1001219a;
    case 0x100121c4u: edi = 0xcu; goto L_100121c4;
    default: rt_fatal(g, COW_IMG(0x10011ce9u), "switch");
    }
    return 0;
L_10011b98: ;
    if (rd32(self + 0x44u) == 0x11u) goto L_10011cbf;
    ecx = rd32(self + 0x44u);
    if (eax == 0x90u) goto L_10011cbf;
    if (ecx == 0xdu) goto L_10011c6f;
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        goto L_10011c4a;
    }
    ecx = rd32(COW_IMG(0x103601bcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t41 = cow_thiscall(g, COW_IMG(0x100db140u), ecx, 0);
    t42 = g->ecx;
    t43 = g->edx;
    if (t41 != 0xcu)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        goto L_10011bdc;
    }
    edx = t43;
    wr32(self + 0x44u, 0x11u);
    wr32(COW_IMG(0x10456948u), 0xcu);
    edi = 0xcu;
L_100121c4: ;
    t164 = rd32(COW_IMG(0x1045666cu));
    wr8(t164 + 0x828u, 0u);
    if (rd32(COW_IMG(0x10455af8u)) == 0u)
    {
        eax = t164;
    }
    else
    {
        eax = t164;
        ecx = rd32(COW_IMG(0x10455af8u));
        g->esp = sp0 - 0x250u;
        t165 = cow_call_regs(g, COW_IMG(0x10003650u), eax, ecx, edx, 1, 0);
        t166 = g->edx;
        eax = t165;
        edx = t166;
    }
    g->edx = edx;
    t167 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    t168 = cow_call_regs(g, COW_IMG(0x10009920u), eax, t167, g->edx, 1, 0);
    t169 = g->ecx;
    t170 = g->edx;
    if (rd32(COW_IMG(0x10456ad8u)) == 0u)
    {
        eax = t168;
        ecx = t169;
        edx = t170;
        loc_238 = rd32(sp0 - 0x238u);
        loc_234 = rd32(sp0 - 0x234u);
    }
    else
    {
        eax = t168;
        ecx = t169;
        edx = t170;
        if (rd8(sp0 - 0x239u) != 1u)
        {
            loc_238 = rd32(sp0 - 0x238u);
            loc_234 = rd32(sp0 - 0x234u);
        }
        else
        {
            if (rd32(COW_IMG(0x10666e7cu)) != 0u)
            {
                loc_238 = rd32(sp0 - 0x238u);
                loc_234 = rd32(sp0 - 0x234u);
            }
            else
            {
                if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c0u) == 0u)
                {
                    ecx = rd32(COW_IMG(0x1045666cu));
                    loc_238 = rd32(sp0 - 0x238u);
                    loc_234 = rd32(sp0 - 0x234u);
                }
                else
                {
                    if (rd32(COW_IMG(0x1065cb04u)) == 0u)
                    {
                        ecx = rd32(COW_IMG(0x1065cb04u));
                        loc_238 = rd32(sp0 - 0x238u);
                        loc_234 = rd32(sp0 - 0x234u);
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x1065cb04u));
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x250u;
                        t171 = cow_thiscall(g, COW_IMG(0x10187000u), ecx, 0);
                        t172 = g->ecx;
                        t173 = g->edx;
                        if (t171 == 0u)
                        {
                            eax = t171;
                            ecx = t172;
                            edx = t173;
                            loc_238 = rd32(sp0 - 0x238u);
                            loc_234 = rd32(sp0 - 0x234u);
                        }
                        else
                        {
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 0xbu);
                            wr32(sp0 - 0x25cu, 0u);
                            t174 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t174);
                            g->esp = sp0 - 0x250u;
                            cow_thiscall(g, rd32(rd32(t174) + 0xfcu), rd32(t174), 4, t174, 0u, 0xbu, 0u);
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 0x10u);
                            wr32(sp0 - 0x25cu, 0u);
                            t175 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t175);
                            cow_thiscall(g, rd32(rd32(t175) + 0xfcu), rd32(t175), 4, t175, 0u, 0x10u, 2u);
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 0x11u);
                            wr32(sp0 - 0x25cu, 0u);
                            t176 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t176);
                            cow_thiscall(g, rd32(rd32(t176) + 0xfcu), rd32(t176), 4, t176, 0u, 0x11u, 2u);
                            wr32(sp0 - 0x254u, 3u);
                            wr32(sp0 - 0x258u, 0xdu);
                            wr32(sp0 - 0x25cu, 0u);
                            t177 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t177);
                            cow_thiscall(g, rd32(rd32(t177) + 0xfcu), rd32(t177), 4, t177, 0u, 0xdu, 3u);
                            wr32(sp0 - 0x254u, 3u);
                            wr32(sp0 - 0x258u, 0xeu);
                            wr32(sp0 - 0x25cu, 0u);
                            t178 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t178);
                            cow_thiscall(g, rd32(rd32(t178) + 0xfcu), rd32(t178), 4, t178, 0u, 0xeu, 3u);
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 1u);
                            wr32(sp0 - 0x25cu, 0u);
                            t179 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t179);
                            cow_thiscall(g, rd32(rd32(t179) + 0xfcu), rd32(t179), 4, t179, 0u, 1u, 2u);
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 2u);
                            wr32(sp0 - 0x25cu, 0u);
                            t180 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t180);
                            cow_thiscall(g, rd32(rd32(t180) + 0xfcu), rd32(t180), 4, t180, 0u, 2u, 2u);
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 4u);
                            wr32(sp0 - 0x25cu, 0u);
                            t181 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t181);
                            cow_thiscall(g, rd32(rd32(t181) + 0xfcu), rd32(t181), 4, t181, 0u, 4u, 2u);
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 5u);
                            wr32(sp0 - 0x25cu, 0u);
                            t182 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t182);
                            cow_thiscall(g, rd32(rd32(t182) + 0xfcu), rd32(t182), 4, t182, 0u, 5u, 2u);
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 4u);
                            wr32(sp0 - 0x25cu, 1u);
                            t183 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t183);
                            cow_thiscall(g, rd32(rd32(t183) + 0xfcu), rd32(t183), 4, t183, 1u, 4u, 1u);
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 1u);
                            wr32(sp0 - 0x25cu, 1u);
                            t184 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t184);
                            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t184, 1u, 1u, 1u);
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 7u);
                            t185 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t185);
                            cow_thiscall(g, rd32(rd32(t185) + 0xc8u), rd32(t185), 3, t185, 7u, 0u);
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 0xeu);
                            t186 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t186);
                            cow_thiscall(g, rd32(rd32(t186) + 0xc8u), rd32(t186), 3, t186, 0xeu, 0u);
                            t187 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c8u);
                            wr32(sp0 - 0x254u, t187);
                            t188 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c4u);
                            wr32(sp0 - 0x258u, t188);
                            t189 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c0u);
                            wr32(sp0 - 0x25cu, t189);
                            g->ebx = 0u;
                            g->edx = t189;
                            cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t189, t188, t187);
                            t190 = g->edx;
                            wr32(sp0 - 0x254u, 0xffffffffu);
                            wr32(sp0 - 0x258u, 0x80808080u);
                            t191 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
                            wr32(sp0 - 0x25cu, t191);
                            g->eax = t191;
                            g->edx = t190;
                            t192 = cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t191, 0x80808080u, 0xffffffffu);
                            t193 = g->edx;
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 0u);
                            cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t193, 2, 0u, 0u);
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 7u);
                            t194 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t194);
                            g->edx = rd32(t194);
                            t195 = rd32(t194);
                            cow_thiscall(g, rd32(t195 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t194, 7u, 1u);
                            t196 = g->edx;
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 0xeu);
                            t197 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t197);
                            g->eax = t197;
                            g->edx = t196;
                            t198 = cow_thiscall(g, rd32(rd32(t197) + 0xc8u), rd32(t197), 3, t197, 0xeu, 1u);
                            t199 = g->edx;
                            wr32(sp0 - 0x238u, 0u);
                            wr32(sp0 - 0x234u, 0u);
                            wr32(sp0 - 0x230u, 0u);
                            wr32(sp0 - 0x22cu, 0x3f800000u);
                            t200 = cow_thiscall(g, COW_IMG(0x10186fe0u), rd32(COW_IMG(0x1065cb04u)), 0);
                            d201 = cow_take_float(g);
                            wrf32(sp0 - 0x230u, (float)(double)(float)-d201);
                            wr32(sp0 - 0x254u, sp0 - 0x238u);
                            g->edx = sp0 - 0x238u;
                            t202 = cow_thiscall(g, COW_IMG(0x10028200u), self + 0x294u, 1, sp0 - 0x238u);
                            t203 = g->edx;
                            wr32(sp0 - 0x254u, COW_IMG(0x104568a8u));
                            wr32(sp0 - 0x258u, 0x100u);
                            g->edx = t203;
                            cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, COW_IMG(0x104568a8u));
                            t204 = g->edx;
                            wr32(sp0 - 0x254u, self + 0x94u);
                            wr32(sp0 - 0x258u, 2u);
                            g->eax = self + 0x94u;
                            t205 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, self + 0x94u);
                            wr32(sp0 - 0x254u, sp0 - 0x238u);
                            wr32(sp0 - 0x258u, sp0 - 0x238u);
                            cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x238u, sp0 - 0x238u);
                            t206 = rd32(sp0 - 0x230u);
                            wr32(sp0 - 0x254u, t206);
                            t207 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c0u);
                            wr32(sp0 - 0x258u, t207);
                            g->edx = t207;
                            t208 = rd32(COW_IMG(0x1045666cu));
                            t209 = cow_call_regs(g, COW_IMG(0x1000aab0u), t206, t208, g->edx, 0, 2, t207, t206);
                            t210 = g->ecx;
                            t211 = g->edx;
                            eax = t209;
                            ecx = t210;
                            edx = t211;
                            loc_238 = 0u;
                            loc_234 = 0u;
                        }
                    }
                }
            }
        }
    }
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t212 = cow_stdcall(g, COW_IMG(0x10012f40u), 0);
    t213 = g->edx;
    g->edx = t213;
    t214 = cow_thiscall(g, COW_IMG(0x100132b0u), self, 0);
    t215 = g->ecx;
    t216 = g->edx;
    if (rd8(COW_IMG(0x10350174u)) >= 0x80u)
    {
        edx = t216;
    }
    else
    {
        eax = (t214 & 0xffffff00u) | rd8(COW_IMG(0x10350174u));
        ecx = t215;
        edx = t216;
        t217 = rd8(self + 0x322u);
        t218 = rd8(self + 0x321u);
        wr8(sp0 - 0x23eu, (uint8_t)((uint8_t)((uint8_t)eax + t217) + 0x80u));
        t219 = rd8(self + 0x320u);
        wr8(sp0 - 0x23fu, (uint8_t)((uint8_t)((uint8_t)eax + t218) + 0x80u));
        wr8(sp0 - 0x23du, 0u);
        wr8(sp0 - 0x240u, (uint8_t)((uint8_t)((uint8_t)eax + t219) + 0x80u));
        t220 = rd32(sp0 - 0x240u);
        wr32(self + 0x338u, t220);
        edx = t220;
    }
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0xbu);
    wr32(sp0 - 0x25cu, 0u);
    t221 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t221);
    g->esp = sp0 - 0x250u;
    cow_thiscall(g, rd32(rd32(t221) + 0xfcu), rd32(t221), 4, t221, 0u, 0xbu, 0u);
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 0x10u);
    wr32(sp0 - 0x25cu, 0u);
    t222 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t222);
    cow_thiscall(g, rd32(rd32(t222) + 0xfcu), rd32(t222), 4, t222, 0u, 0x10u, 2u);
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 0x11u);
    wr32(sp0 - 0x25cu, 0u);
    t223 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t223);
    cow_thiscall(g, rd32(rd32(t223) + 0xfcu), rd32(t223), 4, t223, 0u, 0x11u, 2u);
    wr32(sp0 - 0x254u, 3u);
    wr32(sp0 - 0x258u, 0xdu);
    wr32(sp0 - 0x25cu, 0u);
    t224 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t224);
    cow_thiscall(g, rd32(rd32(t224) + 0xfcu), rd32(t224), 4, t224, 0u, 0xdu, 3u);
    wr32(sp0 - 0x254u, 3u);
    wr32(sp0 - 0x258u, 0xeu);
    wr32(sp0 - 0x25cu, 0u);
    t225 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t225);
    cow_thiscall(g, rd32(rd32(t225) + 0xfcu), rd32(t225), 4, t225, 0u, 0xeu, 3u);
    wr32(sp0 - 0x254u, 5u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, 0u);
    t226 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t226);
    cow_thiscall(g, rd32(rd32(t226) + 0xfcu), rd32(t226), 4, t226, 0u, 1u, 5u);
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 2u);
    wr32(sp0 - 0x25cu, 0u);
    t227 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t227);
    cow_thiscall(g, rd32(rd32(t227) + 0xfcu), rd32(t227), 4, t227, 0u, 2u, 2u);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 3u);
    wr32(sp0 - 0x25cu, 0u);
    t228 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t228);
    cow_thiscall(g, rd32(rd32(t228) + 0xfcu), rd32(t228), 4, t228, 0u, 3u, 0u);
    wr32(sp0 - 0x254u, 5u);
    wr32(sp0 - 0x258u, 4u);
    wr32(sp0 - 0x25cu, 0u);
    t229 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t229);
    cow_thiscall(g, rd32(rd32(t229) + 0xfcu), rd32(t229), 4, t229, 0u, 4u, 5u);
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 5u);
    wr32(sp0 - 0x25cu, 0u);
    t230 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t230);
    cow_thiscall(g, rd32(rd32(t230) + 0xfcu), rd32(t230), 4, t230, 0u, 5u, 2u);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 6u);
    wr32(sp0 - 0x25cu, 0u);
    t231 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t231);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t231, 0u, 6u, 0u);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 4u);
    wr32(sp0 - 0x25cu, 1u);
    t232 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t232);
    cow_thiscall(g, rd32(rd32(t232) + 0xfcu), rd32(t232), 4, t232, 1u, 4u, 1u);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, 1u);
    t233 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t233);
    cow_thiscall(g, rd32(rd32(t233) + 0xfcu), rd32(t233), 4, t233, 1u, 1u, 1u);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 7u);
    t234 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t234);
    cow_thiscall(g, rd32(rd32(t234) + 0xc8u), rd32(t234), 3, t234, 7u, 0u);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0xeu);
    t235 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t235);
    g->eax = t235;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t236 = rd32(t235);
    t237 = rd32(COW_IMG(0x1045666cu));
    t238 = cow_thiscall(g, rd32(t236 + 0xc8u), t236, 3, t235, 0xeu, 0u);
    t239 = g->ecx;
    t240 = g->edx;
    t241 = rd16(COW_IMG(0x106218b8u));
    t242 = rd16(self + 0x18u);
    t243 = rd16(COW_IMG(0x106218b4u));
    t244 = rd16(COW_IMG(0x106218bau));
    t245 = rd16(COW_IMG(0x106218b6u));
    wr16(sp0 - 0x238u, (uint16_t)t243);
    wr16(COW_IMG(0x106218b8u), (uint16_t)t242);
    t246 = rd16(self + 0x1au);
    wr16(sp0 - 0x234u, (uint16_t)t241);
    wr16(COW_IMG(0x106218bau), (uint16_t)t246);
    g->esi = self;
    g->eax = (t238 & 0xffff0000u) | t241;
    g->ecx = (t239 & 0xffff0000u) | t242;
    t247 = cow_stdcall(g, COW_IMG(0x101d0b00u), 0);
    t248 = g->ecx;
    t249 = rd16(sp0 - 0x234u);
    t250 = rd32(COW_IMG(0x1045666cu));
    wr16(COW_IMG(0x106218b4u), rd16(sp0 - 0x238u));
    wr16(COW_IMG(0x106218b6u), (uint16_t)t245);
    wr16(COW_IMG(0x106218b8u), (uint16_t)t249);
    wr16(COW_IMG(0x106218bau), (uint16_t)t244);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 7u);
    t251 = rd32(t250 + 0xcu);
    wr32(sp0 - 0x25cu, t251);
    cow_thiscall(g, rd32(rd32(rd32(t250 + 0xcu)) + 0xc8u), rd32(rd32(t250 + 0xcu)), 3, t251, 7u, 1u);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 0xeu);
    t252 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t252);
    g->eax = t252;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t253 = rd32(COW_IMG(0x1045666cu));
    t254 = cow_thiscall(g, rd32(rd32(t252) + 0xc8u), rd32(t252), 3, t252, 0xeu, 1u);
    t255 = g->edx;
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0u);
    cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t255, 2, 0u, 0u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x214u, 0u);
    t256 = rd16(self + 0x10u);
    wr32(sp0 - 0x210u, t256);
    t257 = rd16(self + 0x12u);
    wr32(sp0 - 0x20cu, t257);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x204u, 0x3f800000u);
    wr32(sp0 - 0x254u, sp0 - 0x218u);
    cow_thiscall(g, COW_IMG(0x10009dc0u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x218u);
    t258 = rd16(self + 0x10u);
    wr32(sp0 - 0x220u, t258);
    t259 = rd16(self + 0x18u);
    wr32(sp0 - 0x230u, t259);
    t260 = rd16(self + 0x12u);
    wr32(sp0 - 0x21cu, t260);
    t261 = rd16(self + 0x1au);
    wr32(sp0 - 0x22cu, t261);
    wr32(sp0 - 0x254u, sp0 - 0x238u);
    t262 = rd32(self + 0x320u);
    wr32(sp0 - 0x240u, t262);
    t263 = rd32(COW_IMG(0x1045666cu));
    wr8(sp0 - 0x23du, 0x80u);
    wr32(sp0 - 0x258u, sp0 - 0x228u);
    t264 = rd32(sp0 - 0x240u);
    wr32(sp0 - 0x25cu, t264);
    wr32(sp0 - 0x260u, t263 + 0x190u);
    wr32(sp0 - 0x228u, 0u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x234u, 0u);
    g->ebx = 0u;
    g->edx = t263 + 0x190u;
    cow_thiscall(g, COW_IMG(0x1000c0b0u), t263, 4, t263 + 0x190u, t264, sp0 - 0x228u, sp0 - 0x238u);
    t265 = g->edx;
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 7u);
    t266 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t266);
    cow_thiscall(g, rd32(rd32(t266) + 0xc8u), rd32(t266), 3, t266, 7u, 0u);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0xeu);
    t267 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t267);
    g->eax = t267;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t268 = rd32(COW_IMG(0x1045666cu));
    t269 = cow_thiscall(g, rd32(rd32(t267) + 0xc8u), rd32(t267), 3, t267, 0xeu, 0u);
    t270 = g->edx;
    g->ecx = rd32(COW_IMG(0x1045666cu));
    g->edx = t270;
    t271 = rd32(COW_IMG(0x1045666cu));
    cow_stdcall(g, COW_IMG(0x1000bb20u), 0);
    t272 = g->ecx;
    t273 = g->edx;
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        ecx = t272;
        edx = t273;
    }
    else
    {
        eax = rd32(COW_IMG(0x103601bcu));
        ecx = t272;
        edx = t273;
        if ((int32_t)rd32(eax + 0xb8u) < 0)
        {
            eax = rd32(eax + 0xb8u);
            wr32(COW_IMG(0x10456900u), eax);
            if (eax == 0xfffffbe0u)
            {
                wr32(sp0 - 0x254u, 1u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                cow_call_regs(g, COW_IMG(0x100163e0u), eax, g->ecx, g->edx, 1, 1, 1u);
                t274 = g->ecx;
                t275 = g->edx;
                ecx = t274;
                edx = t275;
            }
        }
    }
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u) == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
        edi = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
        ebp = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e8u);
        edi = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
        if (ebp != 0u)
        {
            wr32(sp0 - 0x254u, 0u);
            wr32(sp0 - 0x258u, 7u);
            t276 = rd32(eax + 0xcu);
            wr32(sp0 - 0x25cu, t276);
            g->edx = rd32(t276);
            t277 = rd32(t276);
            g->esp = sp0 - 0x250u;
            cow_thiscall(g, rd32(t277 + 0xc8u), ecx, 3, t276, 7u, 0u);
            t278 = g->edx;
            wr32(sp0 - 0x254u, 0u);
            wr32(sp0 - 0x258u, 0xeu);
            t279 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t279);
            g->eax = t279;
            t280 = cow_thiscall(g, rd32(rd32(t279) + 0xc8u), rd32(t279), 3, t279, 0xeu, 0u);
            wr32(sp0 - 0x254u, ebp);
            t281 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e4u);
            wr32(sp0 - 0x258u, t281);
            wr32(sp0 - 0x25cu, edi);
            g->ebx = 0u;
            cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, edi, t281, ebp);
            wr32(sp0 - 0x254u, 0xffffffffu);
            t282 = rd32(self + 0x320u);
            wr32(sp0 - 0x240u, t282);
            wr8(sp0 - 0x23du, 0u);
            t283 = rd32(sp0 - 0x240u);
            wr32(sp0 - 0x258u, t283);
            t284 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
            wr32(sp0 - 0x25cu, t284);
            g->edx = t284;
            cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t284, t283, 0xffffffffu);
            t285 = g->edx;
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 7u);
            t286 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t286);
            cow_thiscall(g, rd32(rd32(t286) + 0xc8u), rd32(t286), 3, t286, 7u, 1u);
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 0xeu);
            t287 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t287);
            cow_thiscall(g, rd32(rd32(t287) + 0xc8u), rd32(t287), 3, t287, 0xeu, 1u);
            wr32(sp0 - 0x254u, 0xfu);
            wr32(sp0 - 0x258u, 0xa8u);
            t288 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t288);
            g->eax = t288;
            g->edx = rd32(COW_IMG(0x1045666cu));
            t289 = rd32(COW_IMG(0x1045666cu));
            t290 = cow_thiscall(g, rd32(rd32(t288) + 0xc8u), rd32(t288), 3, t288, 0xa8u, 0xfu);
            t291 = g->edx;
            eax = t290;
            edx = t291;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t292 = cow_fastcall(g, COW_IMG(0x101bce30u), rd32(COW_IMG(0x10662dbcu)), edx, 0);
    t293 = g->edx;
    g->edx = t293;
    t294 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 0x7cu;
    t295 = cow_bridge_indirect(g, COW_IMG(0x10005a40u), 0u, 117u, (const uint32_t[]){rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), 0u, 0x3f800000u, rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u)}, t294, g->edx, t292, 468u);
    t296 = g->ecx;
    t297 = g->edx;
    g->edx = t297;
    g->esp = sp0 - 0x250u;
    t298 = cow_stdcall(g, COW_IMG(0x10123e90u), 0);
    t299 = g->edx;
    g->ebx = 0u;
    g->edx = t299;
    t300 = cow_thiscall(g, COW_IMG(0x100088f0u), rd32(COW_IMG(0x10455c20u)), 0);
    t301 = g->edx;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = t300;
    }
    else
    {
        eax = t300;
        ecx = rd32(COW_IMG(0x1057876cu));
        edx = t301;
        g->ebx = 0u;
        g->esp = sp0 - 0x23cu;
        t302 = cow_call_regs(g, COW_IMG(0x101579c0u), eax, ecx, edx, 1, 5, rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u));
        eax = t302;
    }
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        edx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        edx = rd32(COW_IMG(0x104568fcu));
        if (rd32(COW_IMG(0x106627ecu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x106627ecu));
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t303 = cow_thiscall(g, COW_IMG(0x101ab820u), ecx, 0);
            t304 = g->edx;
            eax = t303;
            edx = t304;
        }
        if (rd32(COW_IMG(0x10662da8u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662da8u));
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t305 = cow_thiscall(g, COW_IMG(0x101ae3e0u), ecx, 0);
            t306 = g->edx;
            eax = t305;
            edx = t306;
        }
        if (rd32(COW_IMG(0x1066279cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1066279cu));
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            cow_thiscall(g, COW_IMG(0x101a2e80u), ecx, 0);
            t307 = g->edx;
            edx = t307;
        }
    }
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104568fcu));
        if (rd32(COW_IMG(0x10662dccu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662dccu));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t308 = cow_thiscall(g, COW_IMG(0x101c46a0u), ecx, 0);
            t309 = g->edx;
            eax = t308;
            edx = t309;
        }
    }
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104568fcu));
        g->ebx = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        t310 = cow_call_regs(g, COW_IMG(0x101ab770u), eax, g->ecx, g->edx, 1, 0);
        t311 = g->ecx;
        t312 = g->edx;
        eax = t310;
        ecx = t311;
        edx = t312;
    }
    g->esp = sp0 - 0x250u;
    t313 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 0);
    t314 = g->edx;
    t315 = cow_fastcall(g, COW_IMG(0x10154860u), t313, t314, 0);
    t316 = g->ecx;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = t315;
        edx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = t315;
        ecx = t316;
        edx = rd32(COW_IMG(0x104568fcu));
        if (rd32(COW_IMG(0x106627ecu)) != 0u)
        {
            g->esp = sp0 - 0x250u;
            cow_call_regs(g, COW_IMG(0x101604b0u), g->eax, g->ecx, edx, 1, 0);
            t317 = g->edx;
            t318 = rd32(COW_IMG(0x106627ecu));
            wr8(t318, 1u);
            g->ebx = 0u;
            g->edi = edi;
            g->edx = t317;
            t319 = cow_call_regs(g, COW_IMG(0x1015fa00u), t318, COW_IMG(0x10621838u), g->edx, 1, 0);
            t320 = g->edx;
            g->ebx = 0u;
            t321 = cow_fastcall(g, COW_IMG(0x1015f6a0u), COW_IMG(0x10621838u), t320, 0);
            t322 = g->edx;
            g->ecx = COW_IMG(0x10621838u);
            t323 = cow_call_regs(g, COW_IMG(0x10160650u), g->eax, g->ecx, t322, 1, 0);
            t324 = g->ecx;
            t325 = g->edx;
            eax = t323;
            ecx = t324;
            edx = t325;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        t326 = cow_stdcall(g, COW_IMG(0x1025e0d0u), 0);
        t327 = g->edx;
        g->ecx = t326;
        g->edx = t327;
        t328 = cow_stdcall(g, COW_IMG(0x1025e100u), 0);
        t329 = g->ecx;
        t330 = g->edx;
        g->edx = t330;
        t331 = cow_stdcall(g, COW_IMG(0x1025e0d0u), 0);
        t332 = g->edx;
        g->edx = t332;
        t333 = cow_stdcall(g, COW_IMG(0x1025e110u), 0);
        t334 = g->edx;
        if (rd32(self + 0x44u) == 0x11u)
        {
            eax = t333;
            edx = t334;
        }
        else
        {
            eax = t333;
            edx = t334;
            if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x90u)
            {
                if (rd32(COW_IMG(0x106631d4u)) != 0u)
                {
                    ecx = rd32(COW_IMG(0x106631d4u));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    t335 = cow_thiscall(g, COW_IMG(0x101d5680u), ecx, 0);
                    t336 = g->edx;
                    eax = t335;
                    edx = t336;
                }
            }
        }
        if (rd32(COW_IMG(0x10456d1cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10456d1cu));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t337 = cow_thiscall(g, COW_IMG(0x10018850u), ecx, 0);
            t338 = g->edx;
            eax = t337;
            edx = t338;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t339 = cow_call_regs(g, COW_IMG(0x101248a0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
    t340 = g->edx;
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u) == 0u)
    {
        ecx = rd32(COW_IMG(0x1045666cu));
        edx = t340;
    }
    else
    {
        eax = t339;
        ecx = rd32(COW_IMG(0x1045666cu));
        edx = t340;
        if (rd32(ecx + 0x1e8u) != 0u)
        {
            wr32(sp0 - 0x254u, 0u);
            wr32(sp0 - 0x258u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x250u;
            t341 = cow_fastcall(g, COW_IMG(0x1000a1d0u), ecx, edx, 2, 0u, 0u);
            wr32(sp0 - 0x254u, 0x3f800000u);
            t342 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
            wr32(sp0 - 0x258u, t342);
            g->ebx = 0u;
            g->edx = t342;
            cow_call_regs(g, COW_IMG(0x1000abe0u), t341, rd32(COW_IMG(0x1045666cu)), g->edx, 0, 2, t342, 0x3f800000u);
            t343 = g->edx;
            ecx = rd32(COW_IMG(0x1045666cu));
            edx = t343;
        }
    }
    t344 = rd32(self + 0x31cu);
    wr32(sp0 - 0x254u, t344);
    wr32(sp0 - 0x258u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    cow_call_regs(g, COW_IMG(0x1000a820u), t344, ecx, g->edx, 0, 2, 0u, t344);
    t345 = g->edx;
    wr32(sp0 - 0x240u, 0xc3200000u);
    t346 = rd16(self + 0x12u);
    wr32(sp0 - 0x238u, t346);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        x0 = fr(g, (double)(int32_t)t346 * (double)rdf32(COW_IMG(0x10329cf8u)));
        goto L_10012a24;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    x0 = fr(g, (double)(int32_t)t346 * (double)rdf32(COW_IMG(0x10329cf8u)));
    if (ecx == 2u) goto L_10012a29;
    if (ecx == 3u) goto L_10012a29;
L_10012a24: ;
    if (ecx != 1u) goto L_10012a31;
L_10012a29: ;
    x1 = (double)rdf32(COW_IMG(0x10329cf4u));
L_10012a35: ;
    t347 = rd16(self + 0x10u);
    wr32(sp0 - 0x238u, t347);
    wr32(sp0 - 0x254u, sp0 - 0x228u);
    wr32(sp0 - 0x228u, 0u);
    wr32(sp0 - 0x264u, 0u);
    d348 = (double)(float)fr(g, (double)(int32_t)t347 * (double)rdf32(COW_IMG(0x10329cf0u)));
    wrf32(sp0 - 0x224u, (float)d348);
    wr32(sp0 - 0x260u, 0u);
    wrf32(sp0 - 0x220u, (float)(double)(float)x1);
    wr32(sp0 - 0x25cu, 0x280u);
    wrf32(sp0 - 0x21cu, (float)(double)(float)x0);
    wr32(sp0 - 0x258u, 0x200u);
    g->ebx = 0u;
    g->eax = 0u;
    g->ecx = 0x280u;
    g->edx = 0x200u;
    g->esp = sp0 - 0x250u;
    t349 = cow_cdecl(g, COW_IMG(0x1021d4c0u), 5, 0u, 0u, 0x280u, 0x200u, sp0 - 0x228u);
    t350 = g->ecx;
    t351 = g->edx;
    g->ecx = t350;
    g->edx = t351;
    g->esp = sp0 - 0x264u;
    t352 = cow_stdcall(g, COW_IMG(0x101d0c70u), 0);
    t353 = g->ecx;
    t354 = g->edx;
    wr32(sp0 - 0x268u, 0u);
    wr32(sp0 - 0x26cu, 0x42400000u);
    wr32(sp0 - 0x270u, 0x43a50000u);
    wr32(sp0 - 0x274u, COW_IMG(0x1034f2b8u));
    g->ecx = t353;
    g->edx = t354;
    t355 = cow_call_regs(g, COW_IMG(0x100384b0u), t352, g->ecx, g->edx, 1, 4, COW_IMG(0x1034f2b8u), 0x43a50000u, 0x42400000u, 0u);
    t356 = g->ecx;
    t357 = g->edx;
    g->ebx = 0u;
    g->esp = sp0 - 0x250u;
    cow_fastcall(g, COW_IMG(0x10038520u), t356, t357, 0);
    t358 = g->ecx;
    t359 = g->edx;
    if (rd32(COW_IMG(0x104566e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
        edx = t359;
    }
    else
    {
        eax = rd32(COW_IMG(0x104566e8u));
        ecx = t358;
        edx = t359;
        if (rd8(eax + 0x1cu) & 1u)
        {
            wr32(sp0 - 0x228u, 0u);
            t360 = rd16(self + 0x12u);
            wr32(sp0 - 0x238u, t360);
            d361 = fr(g, (double)(int32_t)t360 - (double)rdf32(COW_IMG(0x10329cecu)));
            fpush(g, d361);
            g->esp = sp0 - 0x250u;
            t362 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            wr32(sp0 - 0x224u, t362);
            wr32(sp0 - 0x254u, sp0 - 0x228u);
            t363 = rd16(self + 0x10u);
            wr32(sp0 - 0x220u, t363);
            wr32(sp0 - 0x21cu, t360);
            g->ebx = 0u;
            g->edx = t363;
            t364 = cow_call_regs(g, COW_IMG(0x1000bb90u), sp0 - 0x228u, rd32(COW_IMG(0x1045666cu)), g->edx, 0, 1, sp0 - 0x228u);
            t365 = g->edx;
            eax = t364;
            edx = t365;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t366 = cow_fastcall(g, COW_IMG(0x10009740u), rd32(COW_IMG(0x1045666cu)), edx, 0);
    t367 = g->edx;
    t368 = cow_call_regs(g, COW_IMG(0x10009720u), g->eax, g->ecx, t367, 1, 0);
    t369 = rd32(COW_IMG(0x103290f8u));
    wr32(self + 0x28u, 0u);
    wr8(sp0 - 0x239u, 0u);
    eax = t368;
    ebp = t369;
L_10012b12: ;
    t370 = rd32(self + 0x1cu);
    wr32(sp0 - 0x238u, t370);
    g->edx = rd32(t370);
    t371 = rd32(t370);
    g->esp = sp0 - 0x250u;
    cow_thiscall(g, rd32(t371 + 0x30u), t370, 0);
    t372 = g->edx;
    d373 = cow_take_float(g);
    wrf32(sp0 - 0x238u, (float)(double)(float)d373);
    g->eax = rd32(t370);
    g->edx = t372;
    t374 = rd32(t370);
    t375 = cow_thiscall(g, rd32(t374 + 0x24u), t370, 0);
    t376 = g->ecx;
    t377 = g->edx;
    d378 = cow_take_float(g);
    d379 = fr(g, d378 * (double)rdf32(sp0 - 0x238u));
    wrf32(COW_IMG(0x10456960u), (float)d379);
    d380 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(COW_IMG(0x10456960u)));
    wrf32(self + 0x2cu, (float)d380);
    wrf32(self + 0x28u, (float)d380);
    d381 = (double)(int32_t)rd32(self + 0x30u);
    if ((cow_fsw(g, d380, d381, 1u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d380, d381, 1u) & 0x100u;
        x0 = d380;
        goto L_10012b66;
    }
    eax = cow_fsw(g, d380, d381, 1u) & 0x100u;
    ecx = t376;
    edx = t377;
    x0 = d380;
    wr32(sp0 - 0x254u, 1u);
    wr8(sp0 - 0x239u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t382 = cow_thiscall(g, ebp, ecx, 1, 1u);
    eax = t382;
    goto L_10012b12;
L_10011bdc: ;
    if (eax != 0x15u) goto L_10011bee;
    wr32(self + 0x44u, 0x11u);
    wr32(COW_IMG(0x10456948u), eax);
    edi = 0xcu;
    goto L_100121c4;
L_10011bee: ;
    if (eax != 0xcau) goto L_10011c07;
    wr32(sp0 - 0x254u, 0xfa3u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa3u);
    t44 = g->edx;
    edx = t44;
    edi = 0xcu;
    goto L_100121c4;
L_10011c07: ;
    if (eax != 0xcbu) goto L_10011c2b;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u)
    {
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10011c4a;
    }
    edx = rd32(COW_IMG(0x10456a28u));
    wr32(sp0 - 0x254u, 0xfa4u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa4u);
    t45 = g->edx;
    edx = t45;
    edi = 0xcu;
    goto L_100121c4;
L_10011c2b: ;
    if (eax != 0xc9u) goto L_10011c44;
    wr32(sp0 - 0x254u, 0xfa5u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa5u);
    t46 = g->edx;
    edx = t46;
    edi = 0xcu;
    goto L_100121c4;
L_10011c44: ;
    edx = rd32(COW_IMG(0x10456a28u));
L_10011c4a: ;
    if ((int32_t)rd32(self + 0x44u) < 5) goto L_10011c6f;
    if (rd32(edx) == 0x40u) goto L_10011c6f;
    if ((int32_t)rd32(COW_IMG(0x10456900u)) >= 0) goto L_10011c6f;
    wr32(sp0 - 0x254u, 0x7d1u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0x7d1u);
    t47 = g->edx;
    edx = t47;
    edi = 0xcu;
    goto L_100121c4;
L_10011c6f: ;
    t48 = rd32(COW_IMG(0x1045666cu));
    wr8(t48 + 0x828u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t48;
    g->esp = sp0 - 0x250u;
    t49 = cow_stdcall(g, COW_IMG(0x1018b130u), 0);
    t50 = g->ecx;
    t51 = g->edx;
    g->ebx = 0u;
    g->edx = t51;
    t52 = cow_call_regs(g, COW_IMG(0x1018c2b0u), t49, t50, g->edx, 1, 0);
    t53 = g->edx;
    g->ebx = 0u;
    t54 = cow_fastcall(g, COW_IMG(0x10251520u), rd32(COW_IMG(0x106693fcu)), t53, 0);
    t55 = g->edx;
    g->ebx = 0u;
    g->edi = 0xcu;
    g->ebp = 0x11u;
    t56 = cow_fastcall(g, COW_IMG(0x1018b860u), rd32(COW_IMG(0x1065cb04u)), t55, 0);
    t57 = g->edx;
    t58 = cow_fastcall(g, COW_IMG(0x10074c30u), rd32(COW_IMG(0x1047d140u)), t57, 0);
    t59 = g->edx;
    wr32(sp0 - 0x254u, 1u);
    t60 = rd32(COW_IMG(0x106693fcu));
    t61 = cow_fastcall(g, COW_IMG(0x10251610u), t60, t59, 1, 1u);
    t62 = g->ecx;
    t63 = g->edx;
    cow_stdcall(g, COW_IMG(0x10036230u), 0);
    goto L_10011cb9;
L_10011cf0: ;
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 0u);
    wr32(sp0 - 0x25cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t157 = cow_thiscall(g, COW_IMG(0x1000ae40u), rd32(COW_IMG(0x1045666cu)), 3, 0u, 0u, 1u);
    t158 = g->edx;
    wr32(sp0 - 0x254u, 0x80000000u);
    g->edx = t158;
    cow_thiscall(g, COW_IMG(0x10009670u), rd32(COW_IMG(0x1045666cu)), 1, 0x80000000u);
    t159 = g->edx;
    wr8(sp0 - 0x23eu, 0x80u);
    wr8(sp0 - 0x23fu, 0x80u);
    wr8(sp0 - 0x240u, 0x80u);
    wr8(sp0 - 0x23du, 0x80u);
    t160 = rd32(sp0 - 0x240u);
    wr8(sp0 - 0x23eu, 0u);
    wr8(sp0 - 0x23fu, 0u);
    wr8(sp0 - 0x240u, 0u);
    wr8(sp0 - 0x23du, 0x80u);
    t161 = rd32(sp0 - 0x240u);
    wr32(self + 0x338u, t161);
    wr32(self + 0x334u, t160);
    g->eax = t160;
    g->edx = t159;
    t162 = cow_thiscall(g, COW_IMG(0x10014ad0u), self, 0);
    t163 = g->edx;
    if ((uint8_t)t162 == 0u)
    {
        edx = t163;
        edi = 0xcu;
        goto L_100121c4;
    }
    edx = t163;
    if (rd32(COW_IMG(0x10456948u)) == 0xcu) goto L_100121bd;
    wr32(self + 0x44u, 0xdu);
    goto L_10011cb9;
L_10011d6f: ;
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x60u) == 0u)
    {
        edx = rd32(COW_IMG(0x103d3cb8u));
    }
    else
    {
        edx = rd32(COW_IMG(0x103d3cb8u));
        wr32(sp0 - 0x254u, 1u);
        g->eax = eax;
        g->esp = sp0 - 0x250u;
        t133 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 1u);
        t134 = g->edx;
        wr32(sp0 - 0x254u, t133);
        wr32(sp0 - 0x258u, sp0 - 0x238u);
        g->eax = sp0 - 0x238u;
        g->edx = t134;
        t135 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 0x238u, t133);
        t136 = g->edx;
        t137 = rd32(t135);
        wr32(COW_IMG(0x104568ecu), t137);
        g->edx = t136;
        t138 = cow_call_regs(g, COW_IMG(0x10071e90u), t137, rd32(t137), g->edx, 1, 0);
        t139 = g->edx;
        eax = t138;
        edx = t139;
    }
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x28u) != 0u)
    {
        ecx = rd32(COW_IMG(0x103d3cb8u));
        wr32(COW_IMG(0x10669014u), 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        t142 = cow_stdcall(g, COW_IMG(0x10016410u), 0);
        t143 = g->ecx;
        t144 = g->edx;
        if (t142 == 0u)
        {
            edx = t144;
            wr32(self + 0x44u, 1u);
            edi = 1u;
        }
        else
        {
            eax = t142;
            ecx = t143;
            edx = t144;
            if (eax == 1u)
            {
                eax = eax - 1u;
                wr32(sp0 - 0x254u, 0u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x250u;
                t153 = cow_cdecl(g, COW_IMG(0x10016400u), 1, 0u);
                t154 = g->ecx;
                wr32(self + 0x44u, 8u);
                t155 = rd32(COW_IMG(0x104568fcu));
                wr8(t155 + 9u, 1u);
                if (rd8(COW_IMG(0x10669420u)) != 1u)
                {
                    eax = (t153 & 0xffffff00u) | rd8(COW_IMG(0x10669420u));
                    ecx = t154;
                    edx = t155;
                }
                else
                {
                    eax = (t153 & 0xffffff00u) | rd8(COW_IMG(0x10669420u));
                    ecx = t154;
                    edx = t155;
                    wr32(COW_IMG(0x10456950u), 1u);
                }
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
                t156 = g->edx;
                edx = t156;
                edi = 1u;
            }
            else
            {
                eax = eax - 1u;
                if (eax != 1u)
                {
                    edi = 1u;
                }
                else
                {
                    eax = eax - 1u;
                    t145 = rd8(COW_IMG(0x10669420u));
                    wr32(COW_IMG(0x1045694cu), 0u);
                    wr32(COW_IMG(0x10669014u), 1u);
                    if ((uint8_t)t145 != 1u)
                    {
                        eax = (eax & 0xffffff00u) | t145;
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | t145;
                        wr32(COW_IMG(0x10456950u), 1u);
                    }
                    wr32(sp0 - 0x254u, 1u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    t146 = cow_cdecl(g, COW_IMG(0x10245b70u), 1, 1u);
                    t147 = g->ecx;
                    t148 = g->edx;
                    wr32(sp0 - 0x258u, 0u);
                    g->edx = t148;
                    g->esp = sp0 - 0x254u;
                    cow_cdecl(g, COW_IMG(0x10016400u), 1, 0u);
                    t149 = g->edx;
                    t150 = rd32(COW_IMG(0x104568fcu));
                    wr8(sp0 - 0x23eu, 0u);
                    wr8(sp0 - 0x23fu, 0u);
                    wr8(sp0 - 0x240u, 0u);
                    wr8(sp0 - 0x23du, 0x80u);
                    t151 = rd32(sp0 - 0x240u);
                    wr8(t150 + 9u, 1u);
                    wr32(self + 0x334u, t151);
                    wr32(self + 0x44u, 2u);
                    g->edx = t149;
                    g->esp = sp0 - 0x250u;
                    cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
                    t152 = g->edx;
                    edx = t152;
                    edi = 1u;
                }
            }
        }
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d3cb8u));
        t140 = rd32(COW_IMG(0x104568fcu));
        wr8(t140 + 9u, 0u);
        wr32(self + 0x44u, 0xau);
        g->edx = t140;
        g->esp = sp0 - 0x250u;
        cow_stdcall(g, COW_IMG(0x100dbe50u), 0);
        t141 = g->edx;
        edx = t141;
        edi = 1u;
    }
    goto L_100121c4;
L_10011e83: ;
    if (rd32(COW_IMG(0x10456be4u)) == 0u) goto L_10011e9a;
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t131 = cow_fastcall(g, COW_IMG(0x100139e0u), self, edx, 0);
    t132 = g->edx;
    if ((uint8_t)t131 == 0u)
    {
        edx = t132;
        edi = 0xcu;
        goto L_100121c4;
    }
    edx = t132;
L_10011e9a: ;
    wr32(self + 0x44u, 2u);
    edi = 0xcu;
    goto L_100121c4;
L_10011ea6: ;
    wr32(sp0 - 0x254u, COW_IMG(0x103502fcu));
    wr32(sp0 - 0x258u, 0x200u);
    wr32(sp0 - 0x25cu, sp0 - 0x200u);
    g->ebx = 0u;
    g->eax = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t121 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x200u, 0x200u, COW_IMG(0x103502fcu), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u));
    t122 = g->edx;
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    g->esp = sp0 - 0x24cu;
    cow_call_regs(g, COW_IMG(0x10001e70u), t121, sp0 - 0x200u, g->edx, 1, 5, sp0 - 0x200u, sp0 - 0x200u, 0x200u, COW_IMG(0x103502fcu), rd32(sp0 - 0x250u));
    t123 = rd32(COW_IMG(0x103d3cb8u));
    wr32(t123 + 0x28u, 3u);
    wr32(self + 0x44u, 3u);
    wr16(self + 4u, 0u);
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x28u) == 0u)
    {
        edx = t123;
        edi = 0xcu;
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3cb8u));
        edx = t123;
        g->eax = eax;
        g->edx = edx;
        t124 = rd32(COW_IMG(0x103601bcu));
        g->esp = sp0 - 0x250u;
        t125 = cow_thiscall(g, COW_IMG(0x100da6a0u), t124, 0);
        t126 = g->ecx;
        t127 = g->edx;
        if ((uint8_t)t125 != 0u)
        {
            eax = t125;
            edx = t127;
            t129 = rd32(COW_IMG(0x104568fcu));
            wr8(t129 + 9u, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
            t130 = g->edx;
            edx = t130;
            edi = 0xcu;
        }
        else
        {
            eax = t125;
            ecx = t126;
            edx = t127;
            wr32(sp0 - 0x254u, 5u);
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            cow_cdecl(g, COW_IMG(0x100164c0u), 1, 5u);
            t128 = g->edx;
            wr8(self + 0xau, 0u);
            edx = t128;
            edi = 0xcu;
        }
    }
    goto L_100121c4;
L_10011f1f: ;
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x24u) == 0u) goto L_10011f3e;
    eax = rd32(COW_IMG(0x103d3cb8u));
    wr32(edx, 0x20u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t119 = cow_call_regs(g, COW_IMG(0x10015740u), eax, g->ecx, g->edx, 1, 0);
    t120 = g->edx;
    if ((uint8_t)t119 == 0u)
    {
        edx = t120;
        edi = 0xcu;
        goto L_100121c4;
    }
    edx = t120;
L_10011f3e: ;
    wr32(self + 0x44u, 4u);
    edi = 0xcu;
    goto L_100121c4;
L_10011f4a: ;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t115 = cow_call_regs(g, COW_IMG(0x10013ac0u), eax, g->ecx, g->edx, 1, 0);
    t116 = g->edx;
    if ((uint8_t)t115 == 0u)
    {
        edx = t116;
        edi = 0xcu;
    }
    else
    {
        edx = t116;
        if (rd32(COW_IMG(0x10456950u)) != 0u) goto L_10011f6c;
        if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x58u) == 0u) goto L_10011f76;
L_10011f6c: ;
        wr32(COW_IMG(0x10456aa4u), 1u);
L_10011f76: ;
        if (rd32(COW_IMG(0x10456d18u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10456d18u));
            wr32(sp0 - 0x254u, 7u);
            wr32(sp0 - 0x258u, COW_IMG(0x1035018cu));
            g->esp = sp0 - 0x250u;
            cow_thiscall(g, COW_IMG(0x100185a0u), eax + 0x184u, 2, COW_IMG(0x1035018cu), 7u);
            t117 = rd32(rd32(COW_IMG(0x10456d18u)) + 0x18cu);
            t118 = rd32(COW_IMG(0x10456d18u));
            wr32(rd32(COW_IMG(0x10456a28u)) + 0x1cu, t117);
            edx = t118;
        }
        wr32(self + 0x44u, 5u);
        edi = 0xcu;
    }
    goto L_100121c4;
L_10011fb2: ;
    wr32(sp0 - 0x254u, self + 0x48u);
    wr32(edx, 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t92 = cow_thiscall(g, COW_IMG(0x10013ad0u), self, 1, self + 0x48u);
    t93 = g->ecx;
    t94 = g->edx;
    if ((uint8_t)t92 == 0u)
    {
        edx = t94;
        edi = self + 0x48u;
    }
    else
    {
        eax = t92;
        ecx = t93;
        edx = t94;
        if (rd32(self + 0x48u) == 0u)
        {
            edi = rd32(self + 0x48u);
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 0u);
            t95 = rd32(COW_IMG(0x103601bcu));
            wr32(t95 + 0x10u, 1u);
            wr8(COW_IMG(0x10487f80u), 0u);
            wr8(COW_IMG(0x10487f81u), 0u);
            wr8(COW_IMG(0x1047d694u), 0u);
            g->ebx = 0u;
            g->edx = t95;
            g->esp = sp0 - 0x250u;
            cow_call_regs(g, COW_IMG(0x10253690u), eax, ecx, g->edx, 1, 2, 0u, 1u);
            t96 = g->edx;
            t97 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
            wr32(sp0 - 0x254u, t97);
            g->eax = t97;
            g->edx = t96;
            t98 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t97);
            t99 = g->edx;
            wr32(sp0 - 0x254u, t98);
            g->edx = t99;
            t100 = rd32(COW_IMG(0x10662dccu));
            t101 = cow_thiscall(g, COW_IMG(0x101c4cc0u), t100, 1, t98);
            t102 = g->ecx;
            t103 = g->edx;
            if ((uint8_t)t101 != 0u)
            {
                eax = t101;
                ecx = t102;
                edx = t103;
            }
            else
            {
                eax = t101;
                edx = t103;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                t104 = cow_thiscall(g, COW_IMG(0x101c4cd0u), rd32(COW_IMG(0x10662dccu)), 0);
                t105 = g->edx;
                if ((uint8_t)t104 == 1u)
                {
                    edx = t105;
                }
                else
                {
                    eax = t104;
                    edx = t105;
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    cow_thiscall(g, COW_IMG(0x101c4d10u), rd32(COW_IMG(0x10662dccu)), 0);
                    t106 = g->edx;
                    edx = t106;
                }
                t107 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
                wr32(sp0 - 0x254u, t107);
                g->eax = t107;
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                t108 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t107);
                t109 = g->edx;
                wr32(sp0 - 0x254u, t108);
                g->edx = t109;
                t110 = rd32(COW_IMG(0x10662dccu));
                t111 = cow_thiscall(g, COW_IMG(0x101c4ce0u), t110, 1, t108);
                t112 = g->ecx;
                t113 = g->edx;
                eax = t111;
                ecx = t112;
                edx = t113;
            }
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 1u);
            g->ebx = 0u;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            cow_call_regs(g, COW_IMG(0x10253690u), eax, ecx, g->edx, 1, 2, 1u, 1u);
            t114 = g->edx;
            wr32(self + 0x44u, 6u);
            edx = t114;
        }
        else
        {
            edi = rd32(self + 0x48u);
            if (edi != 1u)
            {
                edi = edi - 1u;
            }
            else
            {
                edi = edi - 1u;
                wr32(self + 0x44u, 0xdu);
            }
        }
    }
    goto L_100121c4;
L_10012080: ;
    wr32(edx, 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t90 = cow_thiscall(g, COW_IMG(0x10013df0u), self, 0);
    t91 = g->edx;
    if ((uint8_t)t90 == 0u)
    {
        edx = t91;
        edi = 0xcu;
    }
    else
    {
        edx = t91;
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_100120a1: ;
    wr32(edx, 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t88 = cow_thiscall(g, COW_IMG(0x10013f10u), self, 0);
    t89 = g->edx;
    if ((uint8_t)t88 == 0u)
    {
        edx = t89;
        edi = 0xcu;
    }
    else
    {
        edx = t89;
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_100120c2: ;
    wr32(edx, 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t86 = cow_thiscall(g, COW_IMG(0x10014030u), self, 0);
    t87 = g->edx;
    if ((uint8_t)t86 == 0u)
    {
        edx = t87;
        edi = 0xcu;
    }
    else
    {
        edx = t87;
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_100120e3: ;
    wr32(edx, 0x70u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t84 = cow_stdcall(g, COW_IMG(0x10014120u), 0);
    t85 = g->edx;
    if ((uint8_t)t84 == 0u)
    {
        edx = t85;
        edi = 0xcu;
    }
    else
    {
        edx = t85;
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_10012104: ;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    cow_thiscall(g, COW_IMG(0x10014170u), self, 0);
    t83 = g->edx;
    edx = t83;
    edi = 0xcu;
    goto L_100121c4;
L_10012110: ;
    if ((rd8(edx + 0x18u) & 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        cow_stdcall(g, COW_IMG(0x10010520u), 0);
        t80 = g->edx;
        t81 = rd32(COW_IMG(0x103601bcu));
        wr32(t81 + 0x10u, 0u);
        wr32(rd32(COW_IMG(0x10456a28u)), 0x70u);
        g->edx = t80;
        cow_thiscall(g, COW_IMG(0x100149b0u), self, 0);
        t82 = g->edx;
        edx = t82;
        edi = 0xcu;
    }
    else
    {
        wr32(sp0 - 0x254u, 1u);
        wr32(self + 0x44u, 0xdu);
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        cow_call_regs(g, COW_IMG(0x100163c0u), eax, g->ecx, g->edx, 1, 1, 1u);
        t79 = g->edx;
        edx = t79;
        edi = 0xcu;
    }
    goto L_100121c4;
L_1001214e: ;
    t69 = rd32(COW_IMG(0x103601bcu));
    wr32(t69 + 0x10u, 0u);
    t70 = rd32(COW_IMG(0x10456a28u));
    wr32(t70, 0x70u);
    g->eax = t70;
    g->edx = t69;
    g->esp = sp0 - 0x250u;
    t71 = cow_thiscall(g, COW_IMG(0x10014a20u), self, 0);
    t72 = g->ecx;
    t73 = g->edx;
    if ((uint8_t)t71 == 0u)
    {
        edx = t73;
        edi = 0xcu;
    }
    else
    {
        eax = t71;
        ecx = t72;
        edx = t73;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        t74 = cow_stdcall(g, COW_IMG(0x100361d0u), 0);
        t75 = g->edx;
        wr32(sp0 - 0x254u, 2u);
        g->edx = t75;
        t76 = cow_call_regs(g, COW_IMG(0x10239480u), t74, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 2u);
        t77 = g->edx;
        wr32(sp0 - 0x254u, 0u);
        wr32(sp0 - 0x258u, 1u);
        wr32(sp0 - 0x25cu, COW_IMG(0x103502e8u));
        g->ebx = 0u;
        g->edx = t77;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
        t78 = g->edx;
        wr32(self + 0x44u, 7u);
        edx = t78;
        edi = 0xcu;
    }
    goto L_100121c4;
L_1001219a: ;
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    t66 = cow_stdcall(g, COW_IMG(0x10010520u), 0);
    wr32(rd32(COW_IMG(0x103601bcu)) + 0x10u, 0u);
    t67 = rd32(COW_IMG(0x10456a28u));
    wr32(t67, 0xa0u);
    g->edx = t67;
    cow_thiscall(g, COW_IMG(0x10014a30u), self, 0);
    t68 = g->edx;
    edx = t68;
    edi = 0xcu;
    goto L_100121c4;
L_100121bd: ;
    wr32(self + 0x44u, 0xbu);
    edi = 0xcu;
    goto L_100121c4;
L_10012a31: ;
    x1 = cow_bits2f(0xc3200000u);
    goto L_10012a35;
L_10012b66: ;
    if (rd8(sp0 - 0x239u) != 1u)
    {
        d383 = (double)(int32_t)rd32(self + 0x30u);
        if (!(x0 < d383))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d383, 0u);
            goto L_10012bc6;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d383, 0u);
L_10012b7b: ;
        t384 = rd32(self + 0x1cu);
        wr32(sp0 - 0x238u, t384);
        g->edx = rd32(t384);
        t385 = rd32(t384);
        g->esp = sp0 - 0x250u;
        cow_thiscall(g, rd32(t385 + 0x30u), t384, 0);
        t386 = g->edx;
        d387 = cow_take_float(g);
        wrf32(sp0 - 0x238u, (float)(double)(float)d387);
        g->eax = rd32(t384);
        g->edx = t386;
        t388 = rd32(t384);
        t389 = cow_thiscall(g, rd32(t388 + 0x24u), t384, 0);
        t390 = g->ecx;
        t391 = g->edx;
        d392 = cow_take_float(g);
        wr32(sp0 - 0x254u, 0u);
        d393 = fr(g, d392 * (double)rdf32(sp0 - 0x238u));
        wrf32(COW_IMG(0x10456960u), (float)d393);
        d394 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(COW_IMG(0x10456960u)));
        wrf32(self + 0x2cu, (float)d394);
        wrf32(self + 0x28u, (float)d394);
        t395 = cow_thiscall(g, ebp, t390, 1, 0u);
        d396 = (double)(int32_t)rd32(self + 0x30u);
        d397 = (double)rdf32(self + 0x28u);
        if ((cow_fsw(g, d396, d397, 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d396, d397, 0u) & 0x4100u;
            goto L_10012b7b;
        }
        eax = cow_fsw(g, d396, d397, 0u) & 0x4100u;
    }
L_10012bc6: ;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x1cu));
    t398 = rd32(self + 0x1cu);
    t399 = rd32(rd32(self + 0x1cu));
    g->esp = sp0 - 0x250u;
    t400 = cow_thiscall(g, rd32(t399 + 0x24u), t398, 0);
    t401 = g->ecx;
    t402 = g->edx;
    d403 = cow_take_float(g);
    d404 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / d403) + (double)rdf32(self + 0x3cu));
    g->edx = t402;
    fpush(g, d404);
    t405 = cow_call_regs(g, COW_IMG(0x10311c6cu), t400, g->ecx, g->edx, 1, 0);
    t406 = g->edx;
    wr32(sp0 - 0x238u, t405);
    t407 = rd32(self + 0x1cu);
    wr32(self + 0x38u, t405);
    wrf32(self + 0x3cu, (float)fr(g, d404 - (double)(int32_t)t405));
    cow_thiscall(g, rd32(rd32(t407) + 0x20u), t407, 0);
    t408 = rd32(COW_IMG(0x10456974u)) + 1u & 3u;
    t409 = rd32(COW_IMG(0x10456974u));
    d410 = (double)rdf32(self + 0x28u);
    wr32(COW_IMG(0x10456974u), t408);
    t411 = rd32(self + 0x28u);
    wr32(COW_IMG(0x10456964u) + t408 * 4u, t411);
    wr32(self + 0x2cu, 0u);
    eax = COW_IMG(0x10456964u);
    ecx = t409;
    edx = t411;
    x0 = d410;
L_10012c1e: ;
    d412 = fr(g, (double)rdf32(eax) + (double)rdf32(self + 0x2cu));
    wrf32(self + 0x2cu, (float)d412);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10456974u))
    {
        eax = eax + 4u;
        goto L_10012c1e;
    }
    eax = eax + 4u;
    d413 = fr(g, (double)rdf32(self + 0x2cu) * (double)rdf32(COW_IMG(0x10329ce4u)));
    wrf32(self + 0x2cu, (float)d413);
    g->edx = edx;
    fpush(g, d413);
    g->esp = sp0 - 0x250u;
    t414 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t415 = g->edx;
    wr32(sp0 - 0x238u, t414);
    wrf32(self + 0x28u, (float)(double)(int32_t)t414);
    d416 = (double)(float)(double)(int32_t)rd32(self + 0x30u);
    wrf32(sp0 - 0x240u, (float)d416);
    if (!((double)(int32_t)t414 < d416))
    {
        eax = (t414 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)t414, d416, 1u);
        edx = t415;
        loc_240_f = d416;
    }
    else
    {
        edx = t415;
        loc_240_f = d416;
        wr32(self + 0x28u, cow_f2bits(loc_240_f));
        eax = cow_f2bits(loc_240_f);
    }
    d417 = (double)rdf32(self + 0x28u);
    if ((cow_fsw(g, d417, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d417, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d417, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u;
        wr32(self + 0x28u, 0x41a00000u);
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u) == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x10329ce0u));
    }
    wrf32(self + 0x2cu, (float)x0);
    d418 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(self + 0x28u));
    wrf32(COW_IMG(0x10456960u), (float)d418);
    t419 = rd32(self + 0x34u) + 1u;
    t420 = rd32(self + 0x34u);
    wr32(self + 0x34u, t419);
    if (t420 + 1u != 0u)
    {
        eax = t419;
    }
    else
    {
        eax = t419;
        wr32(self + 0x34u, 1u);
    }
    if (rd32(self + 0x20u) == 0u)
    {
        ecx = rd32(self + 0x20u);
    }
    else
    {
        ecx = rd32(self + 0x20u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t421 = rd32(ecx);
        g->esp = sp0 - 0x250u;
        t422 = cow_thiscall(g, rd32(t421 + 0x28u), ecx, 0);
        t423 = g->ecx;
        t424 = g->edx;
        d425 = cow_take_float(g);
        wrf32(sp0 - 0x240u, (float)(double)(float)d425);
        if ((cow_fsw(g, d425, (double)rdf32(COW_IMG(0x10329cdcu)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d425, (double)rdf32(COW_IMG(0x10329cdcu)), 0u) & 0x4100u;
            ecx = t423;
            edx = t424;
            loc_240_f = (double)(float)d425;
        }
        else
        {
            ecx = t423;
            edx = t424;
            loc_240_f = (double)(float)d425;
            wr32(sp0 - 0x254u, sp0 - 0x228u);
            g->eax = sp0 - 0x228u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            t426 = cow_stdcall(g, rd32(COW_IMG(0x1032919cu)), 1, sp0 - 0x228u);   /* kernel32.dll!GetLocalTime */
            t427 = g->ecx;
            t428 = g->edx;
            if (rd16(sp0 - 0x21cu) == rd16(COW_IMG(0x103501a4u)))
            {
                eax = t426;
                ecx = (t427 & 0xffff0000u) | rd16(sp0 - 0x21cu);
                edx = t428;
                loc_240_f = (double)rdf32(sp0 - 0x240u);
            }
            else
            {
                eax = t426;
                g->edx = rd32(rd32(self + 0x20u));
                t429 = rd32(rd32(self + 0x20u));
                g->esp = sp0 - 0x250u;
                cow_thiscall(g, rd32(t429 + 0x20u), rd32(self + 0x20u), 0);
                t430 = g->edx;
                t431 = (uint16_t)rd32(sp0 - 0x21cu) - (uint16_t)rd32(COW_IMG(0x103501a4u));
                wr32(sp0 - 0x238u, t431);
                if (!((double)(int32_t)t431 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (t431 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)t431, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    ecx = (uint16_t)rd32(COW_IMG(0x103501a4u));
                    edx = t430;
                    x0 = (double)(int32_t)t431;
                }
                else
                {
                    eax = (t431 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)t431, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    ecx = (uint16_t)rd32(COW_IMG(0x103501a4u));
                    edx = t430;
                    x0 = (double)(int32_t)t431;
                    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329ce8u)));
                }
                d432 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x10329cd8u)));
                wrf32(sp0 - 0x238u, (float)d432);
                d433 = fr(g, (double)rdf32(sp0 - 0x240u) - d432);
                if (!(d433 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    loc_238_f = d432;
                    x0 = d433;
                }
                else
                {
                    loc_238_f = d432;
                    x0 = d433;
                    x0 = -x0;
                }
                if (rd32(COW_IMG(0x1045695cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x1045695cu));
                    goto L_10012e0b;
                }
                eax = rd32(COW_IMG(0x1045695cu));
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    goto L_10012df0;
                }
                eax = eax - 1u;
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    goto L_10012e11;
                }
                eax = eax - 1u;
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u) != 0u)
                {
                    t444 = rd32(COW_IMG(0x10456958u)) + 1u;
                    t445 = rd32(COW_IMG(0x10456958u));
                    wr32(COW_IMG(0x10456958u), t444);
                    if ((int32_t)t445 <= 2)
                    {
                        eax = t444;
                        ecx = t445;
                    }
                    else
                    {
                        eax = t444;
                        wr32(sp0 - 0x254u, 0x3f800000u);
                        g->eax = eax;
                        g->edx = rd32(rd32(self + 0x1cu));
                        t446 = rd32(self + 0x1cu);
                        t447 = rd32(rd32(self + 0x1cu));
                        g->esp = sp0 - 0x250u;
                        t448 = cow_thiscall(g, rd32(t447 + 0x34u), t446, 1, 0x3f800000u);
                        t449 = g->ecx;
                        t450 = g->edx;
                        wr32(COW_IMG(0x1045695cu), 1u);
                        wr32(COW_IMG(0x10456954u), 0u);
                        wr32(COW_IMG(0x10456958u), 0u);
                        eax = t448;
                        ecx = t449;
                        edx = t450;
                    }
                }
                else
                {
                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u;
                    d434 = fr(g, (double)rdf32(sp0 - 0x240u) / loc_238_f);
                    wr32(COW_IMG(0x10456958u), 0u);
                    t435 = rd32(self + 0x1cu);
                    wr32(sp0 - 0x254u, t435);
                    wrf32(sp0 - 0x254u, (float)(double)(float)d434);
                    g->edx = rd32(t435);
                    t436 = rd32(t435);
                    g->esp = sp0 - 0x250u;
                    cow_thiscall(g, rd32(t436 + 0x34u), t435, 1, cow_f2bits((double)(float)d434));
                    t437 = g->ecx;
                    t438 = g->edx;
                    t439 = rd32(COW_IMG(0x10456954u)) + 1u;
                    t440 = rd32(COW_IMG(0x10456954u));
                    wr32(COW_IMG(0x10456954u), t439);
                    if ((int32_t)(t440 + 1u) <= 45)
                    {
                        eax = t439;
                        ecx = t437;
                        edx = t438;
                    }
                    else
                    {
                        eax = t439;
                        ecx = t437;
                        edx = t438;
                        wr32(sp0 - 0x254u, 1u);
                        wr32(sp0 - 0x258u, 0u);
                        wr32(COW_IMG(0x10456954u), 0u);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x250u;
                        t441 = cow_cdecl(g, COW_IMG(0x101037f0u), 2, 0u, 1u);
                        t442 = g->ecx;
                        t443 = g->edx;
                        eax = t441;
                        ecx = t442;
                        edx = t443;
                    }
                }
L_10012e13: ;
                t451 = rd16(sp0 - 0x21cu);
                wr16(COW_IMG(0x103501a4u), (uint16_t)t451);
                eax = (eax & 0xffff0000u) | t451;
                loc_240_f = (double)rdf32(sp0 - 0x240u);
            }
        }
    }
    g->esp = sp0 - 0x250u;
    cow_stdcall(g, COW_IMG(0x10015510u), 0);
    t452 = rd32(self + 0x334u);
    t453 = rd32(self + 0x328u);
    t454 = rd32(self + 0x338u);
    wr32(self + 0x31cu, t452);
    wr32(self + 0x320u, t454);
    wr32(self + 0x324u, t453);
    if ((uint8_t)rd32(COW_IMG(0x10350174u)) <= 0x80u)
    {
        edx = t454;
    }
    else
    {
        eax = rd32(COW_IMG(0x10350174u));
        t455 = (uint8_t)eax + rd8(self + 0x325u) - 0x80u;
        wr32(sp0 - 0x238u, t455);
        if ((uint8_t)eax + rd8(self + 0x326u) - 0x80u <= 0xffu)
        {
            ecx = (uint8_t)eax + rd8(self + 0x326u) - 0x80u;
            eax = (uint8_t)eax + rd8(self + 0x324u) - 0x80u;
            edx = rd8(self + 0x324u);
            loc_238 = t455;
        }
        else
        {
            eax = (uint8_t)eax + rd8(self + 0x324u) - 0x80u;
            edx = rd8(self + 0x324u);
            loc_238 = t455;
            ecx = 0xffu;
        }
        if (loc_238 <= 0xffu)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)loc_238;
        }
        else
        {
            edx = 0xffu;
        }
        if (eax > 0xffu)
        {
            eax = 0xffu;
        }
        wr8(sp0 - 0x23eu, (uint8_t)ecx);
        wr8(sp0 - 0x23fu, (uint8_t)edx);
        wr8(sp0 - 0x240u, (uint8_t)eax);
        wr8(sp0 - 0x23du, 0u);
        t456 = rd32(sp0 - 0x240u);
        wr32(self + 0x324u, t456);
    }
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x915u) == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x250u;
        t457 = cow_call_regs(g, COW_IMG(0x10017230u), eax, eax + 0x1f4u, g->edx, 1, 0);
        eax = t457;
    }
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return (eax & 0xffffff00u) | rd8(self + 0xau);
L_10012df0: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u;
        wr32(COW_IMG(0x1045695cu), 2u);
    }
    goto L_10012e13;
L_10012e0b: ;
    wr32(COW_IMG(0x1045695cu), 1u);
L_10012e11: ;
    goto L_10012e13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10011a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10011a00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
