/* f_0x1002dc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1002dc10(Guest* g)
{
    double d103;
    double d111;
    double d130;
    double d131;
    double d84;
    double d85;
    double d86;
    double d88;
    double d92;
    double d97;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
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
    uint32_t t348;
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
    uint32_t t361;
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
    uint32_t t373;
    uint32_t t374;
    uint32_t t375;
    uint32_t t376;
    uint32_t t377;
    uint32_t t378;
    uint32_t t379;
    uint32_t t38;
    uint32_t t380;
    uint32_t t381;
    uint32_t t382;
    uint32_t t383;
    uint32_t t384;
    uint32_t t385;
    uint32_t t386;
    uint32_t t387;
    uint32_t t388;
    uint32_t t389;
    uint32_t t39;
    uint32_t t390;
    uint32_t t391;
    uint32_t t392;
    uint32_t t393;
    uint32_t t394;
    uint32_t t395;
    uint32_t t396;
    uint32_t t397;
    uint32_t t398;
    uint32_t t399;
    uint32_t t4;
    uint32_t t40;
    uint32_t t400;
    uint32_t t401;
    uint32_t t402;
    uint32_t t403;
    uint32_t t404;
    uint32_t t405;
    uint32_t t406;
    uint32_t t407;
    uint32_t t408;
    uint32_t t409;
    uint32_t t41;
    uint32_t t410;
    uint32_t t411;
    uint32_t t412;
    uint32_t t413;
    uint32_t t414;
    uint32_t t415;
    uint32_t t416;
    uint32_t t417;
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
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x44u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x1002f1c0u), 1, 0u);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10457550u), rd32(COW_IMG(0x1045ec20u)));
    t3 = rd8(t2 + 0x921u);
    wr32(arg5, 0u);
    t4 = rd32(sp0 - 0x50u);
    wr32(arg6, 0u);
    t5 = rd32(self + 0x36u);
    wr32(sp0 - 0x48u, t5);
    t6 = rd32(self + 0x42u);
    wr16(COW_IMG(0x1045b618u), rd16(t6));
    wr16(COW_IMG(0x1045b61au), rd16(rd32(self + 0x42u) + 2u));
    t7 = rd32(self + 0x48u);
    t8 = rd32(self + 0x5eu);
    wr32(COW_IMG(0x1045b620u), t7);
    wr32(sp0 - 0x4cu, 0u);
    t9 = t7 + rd16(rd32(self + 0x42u)) * 4u;
    wr32(COW_IMG(0x1045b61cu), t9);
    if (rd32(t8 + 0x40u) == 0u) goto L_1002f0c9;
    ebp = t8;
    loc_50 = ((t4 & 0xffffffu) | t3 << 0x18u) & 0xff00ffffu;
    loc_48 = t5;
    if (rd32(ebp + 0x4cu) == 0u) goto L_1002f0c9;
    eax = rd32(ebp + 0x4cu);
    if (rd8(COW_IMG(0x10457460u)) != 0u) goto L_1002dccc;
    if (rd8(arg2 + 0xb8u) == 1u)
    {
        esi = in_esi;
        goto L_1002de5c;
    }
L_1002dccc: ;
    if (rd32(ebp + 0x44u) == 0u) goto L_1002f0c9;
    if (rd32(ebp + 0x48u) == 0u) goto L_1002f0c9;
    esi = ebp + 0x8eu;
L_1002dce8: ;
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t10 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t10);
    wr32(sp0 - 0x70u, 0u);
    t11 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x74u, t11);
    g->eax = t11;
    g->edx = rd32(rd32(ebp + 0x44u));
    t12 = rd32(rd32(ebp + 0x44u));
    g->esp = sp0 - 0x60u;
    t13 = cow_thiscall(g, rd32(t12 + 0x2cu), t10, 5, t11, 0u, t10, esi, 0x2000u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u) goto L_1002dd11;
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), ecx, 1, 0u);
    goto L_1002dce8;
L_1002dd11: ;
    wr32(ebp + 0x92u, 0u);
    esi = ebp + 0x92u;
L_1002dd1d: ;
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t16 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t16);
    wr32(sp0 - 0x70u, 0u);
    t17 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x74u, t17);
    g->eax = t17;
    g->edx = rd32(rd32(ebp + 0x48u));
    t18 = rd32(rd32(ebp + 0x48u));
    g->esp = sp0 - 0x60u;
    t19 = cow_thiscall(g, rd32(t18 + 0x2cu), t16, 5, t17, 0u, t16, esi, 0x2000u);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_1002dd46;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), ecx, 1, 0u);
    goto L_1002dd1d;
L_1002dd46: ;
    if (!(rd8(self + 0x34u) & 1u)) goto L_1002ddf2;
    if (rd32(ebp + 0x50u) == 0u) goto L_1002ddc2;
    if (rd32(ebp + 0x54u) == 0u) goto L_1002ddc2;
    esi = ebp + 0x96u;
L_1002dd64: ;
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t22 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t22);
    wr32(sp0 - 0x70u, 0u);
    t23 = rd32(ebp + 0x50u);
    wr32(sp0 - 0x74u, t23);
    g->eax = t23;
    g->edx = rd32(rd32(ebp + 0x50u));
    t24 = rd32(rd32(ebp + 0x50u));
    g->esp = sp0 - 0x60u;
    t25 = cow_thiscall(g, rd32(t24 + 0x2cu), t22, 5, t23, 0u, t22, esi, 0x2000u);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 == 0u) goto L_1002dd8d;
    eax = t25;
    ecx = t26;
    edx = t27;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), ecx, 1, 0u);
    goto L_1002dd64;
L_1002dd8d: ;
    wr32(ebp + 0x9au, 0u);
    esi = ebp + 0x9au;
L_1002dd99: ;
    wr32(sp0 - 0x64u, 0x2000u);
    wr32(sp0 - 0x68u, esi);
    t28 = rd32(ebp + 0x58u) * 0xcu;
    wr32(sp0 - 0x6cu, t28);
    wr32(sp0 - 0x70u, 0u);
    t29 = rd32(ebp + 0x54u);
    wr32(sp0 - 0x74u, t29);
    g->eax = t29;
    g->edx = rd32(rd32(ebp + 0x54u));
    t30 = rd32(rd32(ebp + 0x54u));
    g->esp = sp0 - 0x60u;
    t31 = cow_thiscall(g, rd32(t30 + 0x2cu), t28, 5, t29, 0u, t28, esi, 0x2000u);
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 == 0u)
    {
        eax = t31;
        edx = t33;
        goto L_1002ddf2;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), ecx, 1, 0u);
    goto L_1002dd99;
L_1002ddc2: ;
    esi = rd32(COW_IMG(0x103290f8u));
L_1002ddc8: ;
    t34 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x64u, t34);
    g->eax = t34;
    g->edx = rd32(t34);
    t35 = rd32(t34);
    g->esp = sp0 - 0x60u;
    t36 = cow_thiscall(g, rd32(t35 + 0x30u), ecx, 1, t34);
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        edx = t38;
        goto L_1002dddb;
    }
    eax = t36;
    ecx = t37;
    edx = t38;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t39 = g->ecx;
    ecx = t39;
    goto L_1002ddc8;
L_1002dddb: ;
    t40 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x64u, t40);
    g->eax = t40;
    g->edx = edx;
    t41 = rd32(t40);
    g->esp = sp0 - 0x60u;
    t42 = cow_thiscall(g, rd32(t41 + 0x30u), t41, 1, t40);
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 == 0u) goto L_1002f0c9;
    eax = t42;
    ecx = t43;
    edx = t44;
    wr32(sp0 - 0x64u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t45 = g->edx;
    edx = t45;
    goto L_1002dddb;
L_1002ddf2: ;
    g->ebp = ebp;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x1002f1d0u), self, 0);
    t46 = rd32(COW_IMG(0x103290f8u));
    wr8(arg2 + 0xb8u, 1u);
    edx = arg2;
    esi = t46;
L_1002de0a: ;
    t47 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x64u, t47);
    g->eax = t47;
    g->edx = edx;
    t48 = rd32(t47);
    g->esp = sp0 - 0x60u;
    t49 = cow_thiscall(g, rd32(t48 + 0x30u), t48, 1, t47);
    t50 = g->ecx;
    t51 = g->edx;
    if (t49 == 0u)
    {
        ecx = t50;
        goto L_1002de1d;
    }
    eax = t49;
    ecx = t50;
    edx = t51;
    wr32(sp0 - 0x64u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t52 = g->edx;
    edx = t52;
    goto L_1002de0a;
L_1002de1d: ;
    t53 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x64u, t53);
    g->eax = t53;
    g->edx = rd32(t53);
    t54 = rd32(t53);
    g->esp = sp0 - 0x60u;
    t55 = cow_thiscall(g, rd32(t54 + 0x30u), ecx, 1, t53);
    t56 = g->ecx;
    t57 = g->edx;
    if (t55 == 0u)
    {
        edx = t57;
        goto L_1002de30;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t58 = g->ecx;
    ecx = t58;
    goto L_1002de1d;
L_1002de30: ;
    if (!(rd8(self + 0x34u) & 1u)) goto L_1002de5c;
L_1002de36: ;
    t59 = rd32(ebp + 0x50u);
    wr32(sp0 - 0x64u, t59);
    g->eax = t59;
    g->edx = edx;
    t60 = rd32(t59);
    g->esp = sp0 - 0x60u;
    t61 = cow_thiscall(g, rd32(t60 + 0x30u), t60, 1, t59);
    t62 = g->ecx;
    t63 = g->edx;
    if (t61 == 0u)
    {
        ecx = t62;
        goto L_1002de49;
    }
    eax = t61;
    ecx = t62;
    edx = t63;
    wr32(sp0 - 0x64u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t64 = g->edx;
    edx = t64;
    goto L_1002de36;
L_1002de49: ;
    t65 = rd32(ebp + 0x54u);
    wr32(sp0 - 0x64u, t65);
    g->eax = t65;
    g->edx = rd32(t65);
    t66 = rd32(t65);
    g->esp = sp0 - 0x60u;
    t67 = cow_thiscall(g, rd32(t66 + 0x30u), ecx, 1, t65);
    t68 = g->ecx;
    t69 = g->edx;
    if (t67 == 0u) goto L_1002de5c;
    eax = t67;
    ecx = t68;
    edx = t69;
    wr32(sp0 - 0x64u, 0u);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, esi, ecx, 1, 0u);
    t70 = g->ecx;
    ecx = t70;
    goto L_1002de49;
L_1002de5c: ;
    wr32(sp0 - 0x40u, 0u);
    t71 = ((rd32(COW_IMG(0x103515bcu)) >> 7u & 0xfffffffeu) * (rd32(COW_IMG(0x104574acu)) >> 8u) & 0xff00u) | ((((rd32(COW_IMG(0x104574acu)) >> 8u & 0xffff0000u) | rd16(COW_IMG(0x103515beu))) * ((esi & 0xffff0000u) | rd16(COW_IMG(0x104574aeu))) & 0x7f80u) | 0xffc00000u) << 9u | (uint8_t)(rd32(COW_IMG(0x103515bcu)) * rd32(COW_IMG(0x104574acu)) >> 7u);
    wr32(sp0 - 0x64u, t71);
    wr32(sp0 - 0x68u, 0x3cu);
    t72 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t72);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t72) + 0xc8u), rd32(t72), 3, t72, 0x3cu, t71);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t73);
    cow_thiscall(g, rd32(rd32(t73) + 0xf4u), rd32(t73), 3, t73, 0u, 0u);
    t74 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1045b648u), 0u);
    wr32(COW_IMG(0x1045b64cu), 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 2u);
    wr32(sp0 - 0x6cu, 0u);
    t75 = rd32(t74 + 0xcu);
    wr32(sp0 - 0x70u, t75);
    cow_thiscall(g, rd32(rd32(t75) + 0xfcu), rd32(t75), 4, t75, 0u, 2u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 5u);
    wr32(sp0 - 0x6cu, 0u);
    t76 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t76);
    cow_thiscall(g, rd32(rd32(t76) + 0xfcu), rd32(t76), 4, t76, 0u, 5u, 0u);
    wr32(sp0 - 0x64u, 5u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 1u);
    t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t77);
    cow_thiscall(g, rd32(rd32(t77) + 0xfcu), rd32(t77), 4, t77, 1u, 1u, 5u);
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 1u);
    t78 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t78);
    cow_thiscall(g, rd32(rd32(t78) + 0xfcu), rd32(t78), 4, t78, 1u, 3u, 3u);
    wr32(sp0 - 0x64u, 6u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, 1u);
    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t79);
    cow_thiscall(g, rd32(rd32(t79) + 0xfcu), rd32(t79), 4, t79, 1u, 4u, 6u);
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 6u);
    wr32(sp0 - 0x6cu, 1u);
    t80 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t80);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t80, 1u, 6u, 3u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 1u);
    t81 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t81);
    cow_thiscall(g, rd32(rd32(t81) + 0xfcu), rd32(t81), 4, t81, 1u, 0x18u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0xbu);
    wr32(sp0 - 0x6cu, 1u);
    t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t82);
    cow_thiscall(g, rd32(rd32(t82) + 0xfcu), rd32(t82), 4, t82, 1u, 0xbu, 0u);
    if (rd8(self + 0x33u) - 2u > 0x30u)
    {
        eax = rd8(self + 0x33u) - 2u;
        edx = self;
        ebx = t71;
        goto L_1002e07a;
    }
    eax = rd8(self + 0x33u) - 2u;
    ebx = t71;
    t83 = rd32(COW_IMG(0x1002f0d4u) + rd8(COW_IMG(0x1002f0f8u) + eax) * 4u);
    switch (t83 - RD)
    {
    case 0x1002dfc8u: goto L_1002dfc8;
    case 0x1002dfd8u: goto L_1002dfd8;
    case 0x1002dfefu: goto L_1002dfef;
    case 0x1002e00au: goto L_1002e00a;
    case 0x1002e033u: goto L_1002e033;
    case 0x1002e055u: goto L_1002e055;
    case 0x1002e062u: goto L_1002e062;
    case 0x1002e06fu: goto L_1002e06f;
    case 0x1002e07au: edx = self; goto L_1002e07a;
    default: rt_fatal(g, COW_IMG(0x1002dfc1u), "switch");
    }
    return;
L_1002dfc8: ;
    wr8(arg2 + 0xa9u, 1u);
    edx = arg2;
L_1002e07a: ;
    if (rd16(rd32(sp0 - 0x48u)) == 0xffffu) goto L_1002f0c9;
    eax = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x48u));
    esi = rd32(sp0 - 0x48u);
    edi = 0u;
    loc_40 = 0u;
L_1002e08b: ;
    if ((int8_t)(eax >> 8u) >= 0)
    {
        if ((int32_t)(uint16_t)eax > 17235)
        {
            eax = (uint16_t)eax;
            ecx = loc_48;
            esi = rd16(loc_48 + 2u);
            goto L_1002ebc4;
        }
        ecx = loc_48;
        esi = rd16(loc_48 + 2u);
        zf = (uint16_t)eax == 0x4353u;
        eax = (uint16_t)eax;
        if (zf) goto L_1002ebb7;
        if (eax == 0x43u) goto L_1002eba7;
        if (eax != 0x54u) goto L_1002f0b8;
        wr32(sp0 - 0x38u, esi * 3u);
        if (rd8(ebp + 0x68u) == 0u)
        {
            eax = (esi * 3u & 0xffffff00u) | rd8(ebp + 0x68u);
            loc_38 = esi * 3u;
        }
        else
        {
            eax = (esi * 3u & 0xffffff00u) | rd8(ebp + 0x68u);
            loc_38 = esi * 3u;
            if (rd8(sp0 - 0x4eu) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
                t170 = rd32(ebp + 0x64u);
                wr32(sp0 - 0x64u, t170);
                g->eax = eax;
                g->ecx = t170;
                g->esp = sp0 - 0x60u;
                t171 = cow_cdecl(g, COW_IMG(0x1002f1c0u), 1, t170);
                t172 = g->ecx;
                wr32(sp0 - 0x68u, 0xcu);
                t173 = rd32(ebp + 0x44u);
                wr32(sp0 - 0x6cu, t173);
                wr32(sp0 - 0x70u, 0u);
                g->ecx = t172;
                g->edx = t173;
                g->esp = sp0 - 0x64u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t173, 0xcu);
                t174 = g->ecx;
                t175 = g->edx;
                wr32(sp0 - 0x74u, 0xcu);
                t176 = rd32(ebp + 0x48u);
                wr32(sp0 - 0x78u, t176);
                wr32(sp0 - 0x7cu, 1u);
                g->eax = t176;
                g->edx = t175;
                g->esp = sp0 - 0x70u;
                t177 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t176, 0xcu);
                t178 = g->edx;
                wr32(sp0 - 0x80u, 8u);
                t179 = rd32(ebp + 0x4cu);
                wr32(sp0 - 0x84u, t179);
                wr32(sp0 - 0x88u, 2u);
                g->ecx = t179;
                g->edx = t178;
                g->esp = sp0 - 0x7cu;
                t180 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t179, 8u);
                t181 = g->ecx;
                t182 = g->edx;
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, 3u);
                g->esp = sp0 - 0x88u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
                wr32(sp0 - 0x64u, 0u);
                t183 = rd32(ebp + 0x40u);
                wr32(sp0 - 0x68u, t183);
                t184 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t184);
                g->edx = t183;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t184, t183, 0u);
                t185 = g->edx;
                wr32(sp0 - 0x64u, esi);
                wr32(sp0 - 0x68u, edi);
                t186 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t186);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 4u);
                g->ebx = ebx;
                cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t186, edi, esi);
                t187 = esi + rd32(COW_IMG(0x104574a8u));
                t188 = rd32(COW_IMG(0x10456908u));
                wr32(COW_IMG(0x104574a8u), t187);
                t189 = rd32(sp0 - 0x44u);
                wr32(COW_IMG(0x10456908u), t188 + 1u);
                if (rd8(t189 + 0x34u) & 1u)
                {
                    ecx = t188 + 1u;
                    edx = t189;
                    wr32(sp0 - 0x64u, 0xcu);
                    t190 = rd32(ebp + 0x50u);
                    wr32(sp0 - 0x68u, t190);
                    wr32(sp0 - 0x6cu, 0u);
                    g->eax = t190;
                    g->edx = edx;
                    g->esp = sp0 - 0x60u;
                    t191 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t190, 0xcu);
                    t192 = g->edx;
                    wr32(sp0 - 0x70u, 0xcu);
                    t193 = rd32(ebp + 0x54u);
                    wr32(sp0 - 0x74u, t193);
                    wr32(sp0 - 0x78u, 1u);
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t193, 0xcu);
                    wr32(sp0 - 0x64u, esi);
                    wr32(sp0 - 0x68u, edi);
                    t194 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t194);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 4u);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t194, edi, esi);
                    t195 = esi + rd32(COW_IMG(0x104574a8u));
                    t196 = rd32(COW_IMG(0x10456908u));
                    wr32(COW_IMG(0x104574a8u), t195);
                    wr32(COW_IMG(0x10456908u), t196 + 1u);
                }
            }
            t197 = esi * 0x1eu + loc_48 + 4u;
            wr32(sp0 - 0x48u, t197);
            eax = t197;
            edx = loc_48;
            loc_48 = t197;
        }
        if (rd8(sp0 - 0x4eu) != 0u) goto L_1002eb98;
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
        if (rd8(COW_IMG(0x104570fcu)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104570fcu));
        }
        else
        {
            wr32(sp0 - 0x64u, COW_IMG(0x10457158u));
            wr32(sp0 - 0x68u, ebx);
            wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
            g->ecx = arg2 + 0x8cu;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t198 = cow_stdcall(g, COW_IMG(0x10025c40u), 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x10457158u));
            t199 = g->ecx;
            t200 = g->edx;
            if ((uint8_t)t198 == 0u)
            {
                eax = t198;
                edx = t200;
            }
            else
            {
                ecx = t199;
                edx = t200;
                g->ecx = ecx;
                g->esp = sp0 - 0x60u;
                t201 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
                t202 = g->ecx;
                if (rd8(ebp + 0x68u) != 0u)
                {
                    eax = (t201 & 0xffffff00u) | rd8(ebp + 0x68u);
                    ecx = t202;
                    wr32(sp0 - 0x64u, 0xcu);
                    t203 = rd32(ebp + 0x44u);
                    wr32(sp0 - 0x68u, t203);
                    wr32(sp0 - 0x6cu, 0u);
                    g->ecx = ecx;
                    g->edx = t203;
                    g->esp = sp0 - 0x60u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t203, 0xcu);
                    t204 = g->ecx;
                    t205 = g->edx;
                    wr32(sp0 - 0x70u, 0xcu);
                    t206 = rd32(ebp + 0x48u);
                    wr32(sp0 - 0x74u, t206);
                    wr32(sp0 - 0x78u, 1u);
                    g->eax = t206;
                    g->edx = t205;
                    g->esp = sp0 - 0x6cu;
                    t207 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t206, 0xcu);
                    t208 = g->edx;
                    wr32(sp0 - 0x7cu, 8u);
                    t209 = rd32(ebp + 0x4cu);
                    wr32(sp0 - 0x80u, t209);
                    wr32(sp0 - 0x84u, 2u);
                    g->ecx = t209;
                    g->edx = t208;
                    g->esp = sp0 - 0x78u;
                    t210 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t209, 8u);
                    t211 = g->ecx;
                    t212 = g->edx;
                    wr32(sp0 - 0x88u, 0u);
                    wr32(sp0 - 0x8cu, 0u);
                    wr32(sp0 - 0x90u, 3u);
                    g->esp = sp0 - 0x84u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
                    wr32(sp0 - 0x64u, 0u);
                    t213 = rd32(ebp + 0x40u);
                    wr32(sp0 - 0x68u, t213);
                    t214 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x6cu, t214);
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t214, t213, 0u);
                    wr32(sp0 - 0x64u, esi);
                    t215 = rd32(sp0 - 0x4cu);
                    wr32(sp0 - 0x68u, t215);
                    t216 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t216);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 4u);
                    g->ebx = ebx;
                    t217 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t216, t215, esi);
                    t218 = rd32(COW_IMG(0x10456908u)) + 1u;
                    t219 = rd32(sp0 - 0x44u);
                    wr32(COW_IMG(0x10456908u), t218);
                    if (rd8(t219 + 0x34u) & 1u)
                    {
                        ecx = t218;
                        edx = t219;
                        edi = t215;
                        wr32(sp0 - 0x64u, 0xcu);
                        t220 = rd32(ebp + 0x50u);
                        wr32(sp0 - 0x68u, t220);
                        wr32(sp0 - 0x6cu, 0u);
                        g->eax = t220;
                        g->edx = edx;
                        g->esp = sp0 - 0x60u;
                        t221 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t220, 0xcu);
                        t222 = g->edx;
                        wr32(sp0 - 0x70u, 0xcu);
                        t223 = rd32(ebp + 0x54u);
                        wr32(sp0 - 0x74u, t223);
                        wr32(sp0 - 0x78u, 1u);
                        g->esp = sp0 - 0x6cu;
                        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t223, 0xcu);
                        wr32(sp0 - 0x64u, esi);
                        wr32(sp0 - 0x68u, edi);
                        t224 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                        wr32(sp0 - 0x6cu, t224);
                        wr32(sp0 - 0x70u, 0u);
                        wr32(sp0 - 0x74u, 4u);
                        g->ebx = ebx;
                        g->esp = sp0 - 0x60u;
                        cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t224, edi, esi);
                        wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                    }
                }
                t225 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0x64u, t225);
                g->edx = arg2;
                g->esp = sp0 - 0x60u;
                t226 = cow_stdcall(g, COW_IMG(0x10025f70u), 1, t225);
                t227 = g->edx;
                eax = t226;
                edx = t227;
            }
        }
        if (rd8(COW_IMG(0x104572b0u)) != 0u)
        {
            wr32(sp0 - 0x64u, COW_IMG(0x104574f8u));
            wr32(sp0 - 0x68u, ebx);
            wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t228 = cow_thiscall(g, COW_IMG(0x10025330u), arg2 + 0x90u, 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x104574f8u));
            t229 = g->ecx;
            t230 = g->edx;
            if ((uint8_t)t228 != 0u)
            {
                ecx = t229;
                edx = t230;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t231 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
                t232 = g->edx;
                if (rd8(ebp + 0x68u) == 0u)
                {
                    edx = t232;
                }
                else
                {
                    eax = (t231 & 0xffffff00u) | rd8(ebp + 0x68u);
                    edx = t232;
                    wr32(sp0 - 0x64u, 0xcu);
                    t233 = rd32(ebp + 0x44u);
                    wr32(sp0 - 0x68u, t233);
                    wr32(sp0 - 0x6cu, 0u);
                    g->eax = eax;
                    g->ecx = t233;
                    g->esp = sp0 - 0x60u;
                    t234 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t233, 0xcu);
                    t235 = g->ecx;
                    wr32(sp0 - 0x70u, 0xcu);
                    t236 = rd32(ebp + 0x48u);
                    wr32(sp0 - 0x74u, t236);
                    wr32(sp0 - 0x78u, 1u);
                    g->ecx = t235;
                    g->edx = t236;
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t236, 0xcu);
                    t237 = g->ecx;
                    t238 = g->edx;
                    wr32(sp0 - 0x7cu, 8u);
                    t239 = rd32(ebp + 0x4cu);
                    wr32(sp0 - 0x80u, t239);
                    wr32(sp0 - 0x84u, 2u);
                    g->eax = t239;
                    g->ecx = t237;
                    g->edx = t238;
                    g->esp = sp0 - 0x78u;
                    t240 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t239, 8u);
                    t241 = g->ecx;
                    t242 = g->edx;
                    wr32(sp0 - 0x88u, 0u);
                    wr32(sp0 - 0x8cu, 0u);
                    wr32(sp0 - 0x90u, 3u);
                    g->esp = sp0 - 0x84u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
                    wr32(sp0 - 0x64u, 0u);
                    t243 = rd32(ebp + 0x40u);
                    wr32(sp0 - 0x68u, t243);
                    t244 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x6cu, t244);
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t243, 3, t244, t243, 0u);
                    wr32(sp0 - 0x64u, esi);
                    t245 = rd32(sp0 - 0x4cu);
                    wr32(sp0 - 0x68u, t245);
                    t246 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t246);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 4u);
                    g->ebx = ebx;
                    g->edx = t246;
                    t247 = rd32(ebp + 0x60u);
                    t248 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t246, t245, esi);
                    t249 = g->edx;
                    t250 = rd32(COW_IMG(0x10456908u)) + 1u;
                    wr32(COW_IMG(0x10456908u), t250);
                    if (!(rd8(rd32(sp0 - 0x44u) + 0x34u) & 1u))
                    {
                        edx = t249;
                    }
                    else
                    {
                        eax = t248;
                        ecx = rd32(sp0 - 0x44u);
                        edi = t245;
                        wr32(sp0 - 0x64u, 0xcu);
                        t251 = rd32(ebp + 0x50u);
                        wr32(sp0 - 0x68u, t251);
                        wr32(sp0 - 0x6cu, 0u);
                        g->ecx = ecx;
                        g->edx = t251;
                        g->esp = sp0 - 0x60u;
                        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t251, 0xcu);
                        t252 = g->ecx;
                        t253 = g->edx;
                        wr32(sp0 - 0x70u, 0xcu);
                        t254 = rd32(ebp + 0x54u);
                        wr32(sp0 - 0x74u, t254);
                        wr32(sp0 - 0x78u, 1u);
                        g->esp = sp0 - 0x6cu;
                        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t254, 0xcu);
                        wr32(sp0 - 0x64u, esi);
                        wr32(sp0 - 0x68u, edi);
                        t255 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                        wr32(sp0 - 0x6cu, t255);
                        wr32(sp0 - 0x70u, 0u);
                        wr32(sp0 - 0x74u, 4u);
                        g->ebx = ebx;
                        g->edx = (uint16_t)rd32(COW_IMG(0x1045b618u));
                        t256 = rd32(COW_IMG(0x1045b618u));
                        g->esp = sp0 - 0x60u;
                        cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t255, edi, esi);
                        t257 = g->edx;
                        wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                        edx = t257;
                    }
                }
                t258 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0x64u, t258);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, COW_IMG(0x100255c0u), arg2 + 0x90u, 1, t258);
            }
        }
        wr32(sp0 - 0x64u, ebx);
        wr32(sp0 - 0x68u, COW_IMG(0x1045b648u));
        g->ebx = ebx;
        g->edx = arg2;
        g->esp = sp0 - 0x60u;
        t259 = cow_thiscall(g, COW_IMG(0x10033800u), arg2 + 0x48u, 2, COW_IMG(0x1045b648u), ebx);
        t260 = g->ecx;
        t261 = g->edx;
        if ((uint8_t)t259 == 0u)
        {
            edx = t261;
            goto L_1002eb94;
        }
        ecx = t260;
        edx = t261;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t262 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
        t263 = g->ecx;
        t264 = g->edx;
        if (rd8(ebp + 0x68u) == 0u)
        {
            edi = rd32(sp0 - 0x4cu);
        }
        else
        {
            ecx = t263;
            edx = t264;
            wr32(sp0 - 0x64u, 0xcu);
            t265 = rd32(ebp + 0x44u);
            wr32(sp0 - 0x68u, t265);
            wr32(sp0 - 0x6cu, 0u);
            g->eax = t265;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t266 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t265, 0xcu);
            t267 = g->edx;
            wr32(sp0 - 0x70u, 0xcu);
            t268 = rd32(ebp + 0x48u);
            wr32(sp0 - 0x74u, t268);
            wr32(sp0 - 0x78u, 1u);
            g->ecx = t268;
            g->esp = sp0 - 0x6cu;
            t269 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t268, 0xcu);
            t270 = g->ecx;
            wr32(sp0 - 0x7cu, 8u);
            t271 = rd32(ebp + 0x4cu);
            wr32(sp0 - 0x80u, t271);
            wr32(sp0 - 0x84u, 2u);
            g->ecx = t270;
            g->edx = t271;
            g->esp = sp0 - 0x78u;
            t272 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t271, 8u);
            t273 = g->ecx;
            t274 = g->edx;
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            wr32(sp0 - 0x90u, 3u);
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
            wr32(sp0 - 0x64u, 0u);
            t275 = rd32(ebp + 0x40u);
            wr32(sp0 - 0x68u, t275);
            t276 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x6cu, t276);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t276, t275, 0u);
            wr32(sp0 - 0x64u, esi);
            t277 = rd32(sp0 - 0x4cu);
            wr32(sp0 - 0x68u, t277);
            t278 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
            wr32(sp0 - 0x6cu, t278);
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x74u, 4u);
            g->ebx = ebx;
            t279 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t278, t277, esi);
            t280 = rd32(COW_IMG(0x10456908u)) + 1u;
            t281 = rd32(sp0 - 0x44u);
            wr32(COW_IMG(0x10456908u), t280);
            if (!(rd8(t281 + 0x34u) & 1u))
            {
                edi = t277;
            }
            else
            {
                ecx = t280;
                edx = t281;
                edi = t277;
                wr32(sp0 - 0x64u, 0xcu);
                t282 = rd32(ebp + 0x50u);
                wr32(sp0 - 0x68u, t282);
                wr32(sp0 - 0x6cu, 0u);
                g->eax = t282;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t283 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t282, 0xcu);
                t284 = g->edx;
                wr32(sp0 - 0x70u, 0xcu);
                t285 = rd32(ebp + 0x54u);
                wr32(sp0 - 0x74u, t285);
                wr32(sp0 - 0x78u, 1u);
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t285, 0xcu);
                wr32(sp0 - 0x64u, esi);
                wr32(sp0 - 0x68u, edi);
                t286 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t286);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 4u);
                g->ebx = ebx;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 4u, 0u, t286, edi, esi);
                wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
            }
        }
        t287 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x64u, t287);
        g->esp = sp0 - 0x60u;
        cow_fastcall(g, COW_IMG(0x10033a70u), arg2 + 0x48u, arg2, 1, t287);
        t288 = g->edx;
        t289 = rd32(sp0 - 0x38u);
        wr32(arg5, rd32(arg5) + t289);
        eax = t289;
        edx = t288;
L_1002f0b2: ;
        wr32(sp0 - 0x4cu, eax + edi);
        loc_4c = eax + edi;
        edi = eax + edi;
    }
    else
    {
        if ((eax >> 4u & 0xfu) == 0u)
        {
            wr32(sp0 - 0x64u, 2u);
            wr32(sp0 - 0x68u, 2u);
            wr32(sp0 - 0x6cu, 0u);
            t159 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x70u, t159);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(t159) + 0xfcu), rd32(t159), 4, t159, 0u, 2u, 2u);
            wr32(sp0 - 0x64u, 2u);
            wr32(sp0 - 0x68u, 5u);
            wr32(sp0 - 0x6cu, 0u);
            t160 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x70u, t160);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t161 = rd32(COW_IMG(0x1045666cu));
            cow_thiscall(g, rd32(rd32(t160) + 0xfcu), rd32(t160), 4, t160, 0u, 5u, 2u);
            t162 = g->edx;
            if (rd8(esi) & 1u)
            {
                edx = t162;
            }
            else
            {
                t163 = rd32(sp0 - 0x44u);
                wr32(sp0 - 0x64u, t163);
                wr32(sp0 - 0x68u, esi + 2u);
                g->edx = t163;
                g->esp = sp0 - 0x60u;
                t164 = cow_thiscall(g, COW_IMG(0x1003af10u), rd32(COW_IMG(0x1047b970u)), 2, esi + 2u, t163);
                t165 = g->edx;
                wr8(esi, rd8(esi) | 1u);
                wr32(esi + 2u, t164);
                edx = t165;
            }
            if (rd32(esi + 2u) == 0u)
            {
                eax = rd32(esi + 2u);
            }
            else
            {
                eax = rd32(esi + 2u);
                if (eax != rd32(COW_IMG(0x1045b648u)))
                {
                    wr32(COW_IMG(0x1045b648u), eax);
                    if (rd32(eax + 0x40u) == 0u)
                    {
                        eax = rd32(eax + 0x44u);
                    }
                    else
                    {
                        ecx = rd32(eax + 0x40u);
                        eax = ecx;
                    }
                    wr32(sp0 - 0x64u, eax);
                    wr32(sp0 - 0x68u, 0u);
                    t166 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x6cu, t166);
                    g->eax = eax;
                    g->edx = rd32(t166);
                    t167 = rd32(t166);
                    g->esp = sp0 - 0x60u;
                    t168 = cow_thiscall(g, rd32(t167 + 0xf4u), t166, 3, t166, 0u, eax);
                    t169 = g->edx;
                    eax = t168;
                    edx = t169;
                }
            }
            wr32(sp0 - 0x48u, esi + 0x12u);
            loc_48 = esi + 0x12u;
        }
        else
        {
            eax = eax >> 4u & 0xfu;
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                esi = loc_48 + 2u;
                edi = sp0 - 0x2cu;
                ecx = 0xbu;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (rd8(ebp + 0x69u) == 0u)
                {
                    eax = rd32(sp0 - 0x20u) >> 8u & 0xfu;
                }
                else
                {
                    eax = rd32(sp0 - 0x20u) >> 8u & 0xfu;
                    if (rd16(sp0 - 0x10u) != 0u)
                    {
                        eax = 8u;
                    }
                }
                wr32(sp0 - 0x40u, 0u);
                wr32(sp0 - 0x38u, COW_IMG(0x104572b8u));
                ecx = arg2;
                edx = (edx & 0xffffff00u) | rd8(arg2 + eax + 0xa8u);
                loc_40 = 0u;
                loc_50 = (rd32(sp0 - 0x50u) & 0xff00ffffu) | (rd8(arg2 + eax + 0xa8u) != 0u) << 0x10u;
                eax = COW_IMG(0x104572b8u);
                loc_38 = COW_IMG(0x104572b8u);
L_1002e0fc: ;
                if (rd32(eax) != 0u)
                {
                    d84 = (double)rdf32(sp0 - 0x1cu);
                    esi = loc_38;
                    edi = COW_IMG(0x10457568u);
                    ecx = 0x1au;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    d85 = fr(g, d84 * (double)rdf32(COW_IMG(0x1045756cu)));
                    wrf32(COW_IMG(0x1045756cu), (float)d85);
                    d86 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x10457570u)));
                    wrf32(COW_IMG(0x10457570u), (float)d86);
                    wr32(sp0 - 0x64u, COW_IMG(0x10457568u));
                    wr32(sp0 - 0x68u, loc_40);
                    t87 = rd32(COW_IMG(0x1045666cu));
                    d88 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x10457574u)));
                    wrf32(COW_IMG(0x10457574u), (float)d88);
                    g->edx = loc_40;
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000bf30u), t87, 2, loc_40, COW_IMG(0x10457568u));
                    t89 = g->ecx;
                    t90 = g->edx;
                    eax = rd32(sp0 - 0x38u);
                    ecx = t89;
                    edx = t90;
                }
                wr32(sp0 - 0x40u, loc_40 + 1u);
                wr32(sp0 - 0x38u, eax + 0x68u);
                if ((int32_t)(eax + 0x68u) < (int32_t)COW_IMG(0x10457458u))
                {
                    loc_40 = loc_40 + 1u;
                    loc_38 = eax + 0x68u;
                    eax = eax + 0x68u;
                    goto L_1002e0fc;
                }
                eax = eax + 0x68u;
                wr32(sp0 - 0x38u, rd8(COW_IMG(0x104571dau)));
                g->edx = edx;
                t91 = rd8(COW_IMG(0x104571dau));
                d92 = fr(g, (double)(int32_t)rd8(COW_IMG(0x104571dau)) * (double)rdf32(sp0 - 0x1cu));
                fpush(g, d92);
                g->esp = sp0 - 0x60u;
                t93 = cow_call_regs(g, COW_IMG(0x10311c6cu), t91, g->ecx, g->edx, 1, 0);
                t94 = g->edx;
                if (t93 <= 0xffu)
                {
                    eax = t93;
                    edx = t94;
                }
                else
                {
                    edx = t94;
                    eax = 0xffu;
                }
                wr32(sp0 - 0x38u, rd8(COW_IMG(0x104571d9u)));
                g->ecx = rd8(COW_IMG(0x104571d9u));
                g->edx = edx;
                t95 = rd8(COW_IMG(0x104571d9u));
                t96 = rd32(sp0 - 0x3cu);
                d97 = fr(g, (double)(int32_t)rd8(COW_IMG(0x104571d9u)) * (double)rdf32(sp0 - 0x1cu));
                fpush(g, d97);
                g->esp = sp0 - 0x60u;
                t98 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t99 = g->ecx;
                t100 = g->edx;
                if (t98 <= 0xffu)
                {
                    eax = t98;
                    ecx = t99;
                    edx = t100;
                }
                else
                {
                    ecx = t99;
                    edx = t100;
                    eax = 0xffu;
                }
                t101 = (uint8_t)rd32(COW_IMG(0x104571d8u));
                wr32(sp0 - 0x34u, t101);
                wr32(sp0 - 0x30u, 0u);
                t102 = rd32(sp0 - 0x3cu);
                d103 = fr(g, (double)(int64_t)cow_i64(t101, 0u) * (double)rdf32(sp0 - 0x1cu));
                fpush(g, d103);
                g->esp = sp0 - 0x60u;
                t104 = cow_call_regs(g, COW_IMG(0x10311c6cu), t101, g->ecx, g->edx, 1, 0);
                if (t104 <= 0xffu)
                {
                    eax = t104;
                }
                else
                {
                    eax = 0xffu;
                }
                if (rd8(COW_IMG(0x104571dbu)) <= 0xffu)
                {
                    loc_3c = (rd32(sp0 - 0x3cu) & 0xffffff00u) | (uint8_t)eax;
                    eax = rd8(COW_IMG(0x104571dbu));
                }
                else
                {
                    loc_3c = (rd32(sp0 - 0x3cu) & 0xffffff00u) | (uint8_t)eax;
                    eax = 0xffu;
                }
                t105 = (loc_3c & 0xffffffu) | (uint8_t)eax << 0x18u;
                wr32(sp0 - 0x64u, t105);
                wr32(sp0 - 0x68u, 0x8bu);
                t106 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t106);
                g->eax = t106;
                g->edx = t105;
                t107 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                g->esp = sp0 - 0x60u;
                t108 = cow_thiscall(g, rd32(t107 + 0xc8u), t107, 3, t106, 0x8bu, t105);
                t109 = g->ecx;
                t110 = g->edx;
                if (rd16(sp0 - 0x1eu) == 0u)
                {
                    eax = t108;
                    ecx = t109;
                    edx = t110;
                    goto L_1002e39a;
                }
                ecx = t109;
                edx = t110;
                if (rd32(COW_IMG(0x1045745cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x1045745cu));
                    goto L_1002e39a;
                }
                eax = rd32(COW_IMG(0x1045745cu));
                if (rd32(eax) == 0u) goto L_1002e39a;
                if (rd8(sp0 - 0x4du) != 1u) goto L_1002e39a;
                wr32(sp0 - 0x40u, 2u);
                g->edx = edx;
                d111 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
                fpush(g, d111);
                g->esp = sp0 - 0x60u;
                t112 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t113 = g->edx;
                t114 = (ebx & 0xffffffu) | t112 << 0x18u;
                wr32(sp0 - 0x64u, t114);
                wr32(sp0 - 0x68u, 0x3cu);
                t115 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t115);
                cow_thiscall(g, rd32(rd32(t115) + 0xc8u), rd32(t115), 3, t115, 0x3cu, t114);
                wr32(sp0 - 0x64u, 0x12u);
                wr32(sp0 - 0x68u, 1u);
                wr32(sp0 - 0x6cu, 1u);
                t116 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t116);
                cow_thiscall(g, rd32(rd32(t116) + 0xfcu), rd32(t116), 4, t116, 1u, 1u, 0x12u);
                wr32(sp0 - 0x64u, 2u);
                wr32(sp0 - 0x68u, 3u);
                wr32(sp0 - 0x6cu, 1u);
                t117 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t117);
                cow_thiscall(g, rd32(rd32(t117) + 0xfcu), rd32(t117), 4, t117, 1u, 3u, 2u);
                wr32(sp0 - 0x64u, 7u);
                wr32(sp0 - 0x68u, 4u);
                wr32(sp0 - 0x6cu, 1u);
                t118 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t118);
                cow_thiscall(g, rd32(rd32(t118) + 0xfcu), rd32(t118), 4, t118, 1u, 4u, 7u);
                wr32(sp0 - 0x64u, 2u);
                wr32(sp0 - 0x68u, 6u);
                wr32(sp0 - 0x6cu, 1u);
                t119 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t119);
                cow_thiscall(g, rd32(rd32(t119) + 0xfcu), rd32(t119), 4, t119, 1u, 6u, 2u);
                wr32(sp0 - 0x64u, COW_IMG(0x10457108u));
                wr32(sp0 - 0x68u, 0x11u);
                t120 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t120);
                cow_thiscall(g, rd32(rd32(t120) + 0x94u), rd32(t120), 3, t120, 0x11u, COW_IMG(0x10457108u));
                wr32(sp0 - 0x64u, 3u);
                wr32(sp0 - 0x68u, 0x18u);
                wr32(sp0 - 0x6cu, 1u);
                t121 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t121);
                cow_thiscall(g, rd32(rd32(t121) + 0xfcu), rd32(t121), 4, t121, 1u, 0x18u, 3u);
                wr32(sp0 - 0x64u, 0x10001u);
                wr32(sp0 - 0x68u, 0xbu);
                wr32(sp0 - 0x6cu, 1u);
                t122 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x70u, t122);
                g->edx = rd32(COW_IMG(0x1045666cu));
                t123 = rd32(COW_IMG(0x1045666cu));
                cow_thiscall(g, rd32(rd32(t122) + 0xfcu), rd32(t122), 4, t122, 1u, 0xbu, 0x10001u);
                t124 = g->edx;
                t125 = rd32(COW_IMG(0x1045745cu));
                wr32(COW_IMG(0x1045b64cu), 0u);
                if (t125 == 0u)
                {
                    edx = t124;
                    ebx = t114;
                    loc_40 = 2u;
                    goto L_1002e5d2;
                }
                eax = t125;
                edx = t124;
                ebx = t114;
                if (rd32(eax) == 0u)
                {
                    loc_40 = 2u;
                    goto L_1002e5d2;
                }
                eax = rd32(eax);
                if (rd32(eax + 0x30u) == 0u)
                {
                    loc_40 = 2u;
                    goto L_1002e5d2;
                }
                eax = rd32(eax + 0x30u);
                wr32(COW_IMG(0x1045b64cu), eax);
                if (rd32(eax + 0x40u) == 0u)
                {
                    eax = rd32(eax + 0x44u);
                }
                else
                {
                    ecx = rd32(eax + 0x40u);
                    eax = ecx;
                }
                wr32(sp0 - 0x64u, eax);
                wr32(sp0 - 0x68u, 1u);
                t126 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t126);
                g->edx = rd32(t126);
                t127 = rd32(t126);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(t127 + 0xf4u), t126, 3, t126, 1u, eax);
                t128 = g->edx;
                t129 = rd32(sp0 - 0x48u) + 0x2eu;
                wr32(sp0 - 0x48u, t129);
                eax = t129;
                edx = t128;
                edi = rd32(sp0 - 0x4cu);
                loc_40 = 2u;
                loc_48 = t129;
            }
        }
    }
L_1002f0b8: ;
    if (rd16(loc_48) != 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(loc_48);
        esi = loc_48;
        goto L_1002e08b;
    }
L_1002f0c9: ;
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return;
L_1002dfd8: ;
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    eax = arg2;
    edx = self;
    goto L_1002e07a;
L_1002dfef: ;
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    wr8(arg2 + 0xabu, 1u);
    eax = arg2;
    edx = self;
    goto L_1002e07a;
L_1002e00a: ;
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    wr8(arg2 + 0xabu, 1u);
    wr8(arg2 + 0xb0u, 1u);
    wr8(arg2 + 0xacu, 1u);
    eax = arg2;
    edx = self;
    goto L_1002e07a;
L_1002e033: ;
    wr8(arg2 + 0xa9u, 1u);
    wr8(arg2 + 0xaau, 1u);
    wr8(arg2 + 0xabu, 1u);
    wr8(arg2 + 0xb0u, 1u);
    eax = arg2;
    edx = self;
    goto L_1002e07a;
L_1002e055: ;
    wr8(arg2 + 0xadu, 1u);
    eax = arg2;
    edx = self;
    goto L_1002e07a;
L_1002e062: ;
    wr8(arg2 + 0xafu, 1u);
    edx = self;
    goto L_1002e07a;
L_1002e06f: ;
    wr8(arg2 + 0xaeu, 1u);
    edx = arg2;
    goto L_1002e07a;
L_1002e39a: ;
    d130 = (double)rdf32(sp0 - 4u);
    if (d130 == rdf64(COW_IMG(0x1032a108u))) goto L_1002e4dd;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d130, rdf64(COW_IMG(0x1032a108u)), 0u);
    if (rd8(sp0 - 0x4du) != 1u) goto L_1002e4dd;
    wr32(sp0 - 0x40u, 1u);
    g->edx = edx;
    d131 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d131);
    g->esp = sp0 - 0x60u;
    t132 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t133 = g->edx;
    t134 = (ebx & 0xffffffu) | t132 << 0x18u;
    wr32(sp0 - 0x64u, t134);
    wr32(sp0 - 0x68u, 0x3cu);
    t135 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t135);
    cow_thiscall(g, rd32(rd32(t135) + 0xc8u), rd32(t135), 3, t135, 0x3cu, t134);
    wr32(sp0 - 0x64u, 0x12u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 1u);
    t136 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t136);
    cow_thiscall(g, rd32(rd32(t136) + 0xfcu), rd32(t136), 4, t136, 1u, 1u, 0x12u);
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 1u);
    t137 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t137);
    cow_thiscall(g, rd32(rd32(t137) + 0xfcu), rd32(t137), 4, t137, 1u, 3u, 2u);
    wr32(sp0 - 0x64u, 7u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, 1u);
    t138 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t138);
    cow_thiscall(g, rd32(rd32(t138) + 0xfcu), rd32(t138), 4, t138, 1u, 4u, 7u);
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, 6u);
    wr32(sp0 - 0x6cu, 1u);
    t139 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t139);
    cow_thiscall(g, rd32(rd32(t139) + 0xfcu), rd32(t139), 4, t139, 1u, 6u, 2u);
    wr32(sp0 - 0x64u, COW_IMG(0x10457198u));
    wr32(sp0 - 0x68u, 0x11u);
    t140 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t140);
    cow_thiscall(g, rd32(rd32(t140) + 0x94u), rd32(t140), 3, t140, 0x11u, COW_IMG(0x10457198u));
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 1u);
    t141 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t141);
    cow_thiscall(g, rd32(rd32(t141) + 0xfcu), rd32(t141), 4, t141, 1u, 0x18u, 3u);
    wr32(sp0 - 0x64u, 0x30001u);
    wr32(sp0 - 0x68u, 0xbu);
    wr32(sp0 - 0x6cu, 1u);
    t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t142);
    cow_thiscall(g, rd32(rd32(t142) + 0xfcu), rd32(t142), 4, t142, 1u, 0xbu, 0x30001u);
    t143 = rd32(COW_IMG(0x104570f4u));
    wr32(COW_IMG(0x1045b64cu), t143);
    if (rd32(t143 + 0x40u) == 0u)
    {
        eax = t143;
        ebx = t134;
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(t143 + 0x40u);
        ebx = t134;
        eax = ecx;
    }
    wr32(sp0 - 0x64u, eax);
    wr32(sp0 - 0x68u, 1u);
    t144 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t144);
    g->edx = t144;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t144) + 0xf4u), rd32(t144), 3, t144, 1u, eax);
    t145 = g->edx;
    t146 = rd32(sp0 - 0x48u) + 0x2eu;
    wr32(sp0 - 0x48u, t146);
    eax = t146;
    edx = t145;
    edi = rd32(sp0 - 0x4cu);
    loc_40 = 1u;
    loc_48 = t146;
    goto L_1002f0b8;
L_1002e4dd: ;
    wr32(sp0 - 0x64u, 5u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x40u, 0u);
    t147 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t147);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(t147) + 0xfcu), rd32(t147), 4, t147, 1u, 1u, 5u);
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 1u);
    t148 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t148);
    cow_thiscall(g, rd32(rd32(t148) + 0xfcu), rd32(t148), 4, t148, 1u, 3u, 3u);
    wr32(sp0 - 0x64u, 6u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, 1u);
    t149 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t149);
    cow_thiscall(g, rd32(rd32(t149) + 0xfcu), rd32(t149), 4, t149, 1u, 4u, 6u);
    wr32(sp0 - 0x64u, 3u);
    wr32(sp0 - 0x68u, 6u);
    wr32(sp0 - 0x6cu, 1u);
    t150 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t150);
    cow_thiscall(g, rd32(rd32(t150) + 0xfcu), rd32(t150), 4, t150, 1u, 6u, 3u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 1u);
    t151 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t151);
    cow_thiscall(g, rd32(rd32(t151) + 0xfcu), rd32(t151), 4, t151, 1u, 0x18u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0xbu);
    wr32(sp0 - 0x6cu, 1u);
    t152 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x70u, t152);
    cow_thiscall(g, rd32(rd32(t152) + 0xfcu), rd32(t152), 4, t152, 1u, 0xbu, 0u);
    t153 = rd32(sp0 - 0x2cu);
    t154 = ((t153 >> 7u & 0xfffffffeu) * (rd32(COW_IMG(0x104574acu)) >> 8u) & 0xff00u) | ((t153 >> 7u & 0xfffffe00u) * rd16(COW_IMG(0x104574aeu)) & 0xff0000u) | (uint8_t)(t153 * rd32(COW_IMG(0x104574acu)) >> 7u) | 0x80000000u;
    wr32(sp0 - 0x64u, t154);
    wr32(sp0 - 0x68u, 0x3cu);
    t155 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t155);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t156 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(rd32(t156 + 0xcu)) + 0xc8u), rd32(rd32(t156 + 0xcu)), 3, t155, 0x3cu, t154);
    t157 = g->edx;
    edx = t157;
    ebx = t154;
    loc_40 = 0u;
L_1002e5d2: ;
    t158 = rd32(sp0 - 0x48u) + 0x2eu;
    wr32(sp0 - 0x48u, t158);
    eax = t158;
    edi = rd32(sp0 - 0x4cu);
    loc_48 = t158;
    goto L_1002f0b8;
L_1002eb94: ;
    edi = rd32(sp0 - 0x4cu);
L_1002eb98: ;
    wr32(arg5, loc_38 + rd32(arg5));
    eax = loc_38;
    goto L_1002f0b2;
L_1002eba7: ;
    t290 = ecx + esi * 0xau + 4u;
    wr32(sp0 - 0x48u, t290);
    eax = esi * 5u;
    loc_48 = t290;
    goto L_1002f0b8;
L_1002ebb7: ;
    t291 = ecx + esi * 2u + 0xcu;
    wr32(sp0 - 0x48u, t291);
    edx = t291;
    loc_48 = t291;
    goto L_1002f0b8;
L_1002ebc4: ;
    if (eax != 0x5453u) goto L_1002f0b8;
    if (rd8(ebp + 0x68u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
        goto L_1002ecf3;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x4eu);
    if ((uint8_t)eax != 0u) goto L_1002f096;
    t292 = rd32(ebp + 0x64u);
    wr32(sp0 - 0x64u, t292);
    g->eax = t292;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t293 = cow_cdecl(g, COW_IMG(0x1002f1c0u), 1, t292);
    t294 = g->edx;
    wr32(sp0 - 0x68u, 0xcu);
    t295 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x6cu, t295);
    wr32(sp0 - 0x70u, 0u);
    g->ecx = t295;
    g->esp = sp0 - 0x64u;
    t296 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t295, 0xcu);
    t297 = g->ecx;
    wr32(sp0 - 0x74u, 0xcu);
    t298 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x78u, t298);
    wr32(sp0 - 0x7cu, 1u);
    g->ecx = t297;
    g->edx = t298;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t298, 0xcu);
    t299 = g->ecx;
    t300 = g->edx;
    wr32(sp0 - 0x80u, 8u);
    t301 = rd32(ebp + 0x4cu);
    wr32(sp0 - 0x84u, t301);
    wr32(sp0 - 0x88u, 2u);
    g->eax = t301;
    g->ecx = t299;
    g->edx = t300;
    g->esp = sp0 - 0x7cu;
    t302 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t301, 8u);
    t303 = g->ecx;
    t304 = g->edx;
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x94u, 3u);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
    wr32(sp0 - 0x64u, 0u);
    t305 = rd32(ebp + 0x40u);
    wr32(sp0 - 0x68u, t305);
    t306 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t306);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t305, 3, t306, t305, 0u);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, edi);
    t307 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
    wr32(sp0 - 0x6cu, t307);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, 5u);
    g->ebx = ebx;
    t308 = rd32(COW_IMG(0x1045b618u));
    t309 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t307, edi, esi);
    t310 = rd32(COW_IMG(0x10456908u)) + 1u;
    t311 = rd32(COW_IMG(0x104574a8u));
    wr32(COW_IMG(0x10456908u), t310);
    t312 = rd32(sp0 - 0x44u);
    wr32(COW_IMG(0x104574a8u), esi + t311);
    if (!(rd8(t312 + 0x34u) & 1u))
    {
        eax = t309;
        edx = esi + t311;
    }
    else
    {
        eax = t309;
        ecx = t312;
        wr32(sp0 - 0x64u, 0xcu);
        t313 = rd32(ebp + 0x50u);
        wr32(sp0 - 0x68u, t313);
        wr32(sp0 - 0x6cu, 0u);
        g->ecx = ecx;
        g->edx = t313;
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t313, 0xcu);
        t314 = g->ecx;
        t315 = g->edx;
        wr32(sp0 - 0x70u, 0xcu);
        t316 = rd32(ebp + 0x54u);
        wr32(sp0 - 0x74u, t316);
        wr32(sp0 - 0x78u, 1u);
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t316, 0xcu);
        wr32(sp0 - 0x64u, esi);
        wr32(sp0 - 0x68u, edi);
        t317 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
        wr32(sp0 - 0x6cu, t317);
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x74u, 5u);
        g->ebx = ebx;
        g->edx = rd32(ebp + 0x60u);
        t318 = rd32(ebp + 0x60u);
        g->esp = sp0 - 0x60u;
        cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t317, edi, esi);
        t319 = g->edx;
        t320 = esi + rd32(COW_IMG(0x104574a8u));
        t321 = rd32(COW_IMG(0x10456908u));
        wr32(COW_IMG(0x104574a8u), t320);
        wr32(COW_IMG(0x10456908u), t321 + 1u);
        eax = t321 + 1u;
        edx = t319;
    }
L_1002ecfb: ;
    if (rd8(COW_IMG(0x104570fcu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104570fcu));
    }
    else
    {
        wr32(sp0 - 0x64u, COW_IMG(0x10457158u));
        wr32(sp0 - 0x68u, ebx);
        wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
        g->ecx = arg2 + 0x8cu;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t322 = cow_stdcall(g, COW_IMG(0x10025c40u), 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x10457158u));
        t323 = g->ecx;
        t324 = g->edx;
        if ((uint8_t)t322 == 0u)
        {
            eax = t322;
            edx = t324;
        }
        else
        {
            ecx = t323;
            edx = t324;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t325 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
            t326 = g->edx;
            if (rd8(ebp + 0x68u) == 0u)
            {
                edx = t326;
            }
            else
            {
                eax = (t325 & 0xffffff00u) | rd8(ebp + 0x68u);
                edx = t326;
                wr32(sp0 - 0x64u, 0xcu);
                t327 = rd32(ebp + 0x44u);
                wr32(sp0 - 0x68u, t327);
                wr32(sp0 - 0x6cu, 0u);
                g->eax = eax;
                g->ecx = t327;
                g->esp = sp0 - 0x60u;
                t328 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t327, 0xcu);
                t329 = g->ecx;
                wr32(sp0 - 0x70u, 0xcu);
                t330 = rd32(ebp + 0x48u);
                wr32(sp0 - 0x74u, t330);
                wr32(sp0 - 0x78u, 1u);
                g->ecx = t329;
                g->edx = t330;
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t330, 0xcu);
                t331 = g->ecx;
                t332 = g->edx;
                wr32(sp0 - 0x7cu, 8u);
                t333 = rd32(ebp + 0x4cu);
                wr32(sp0 - 0x80u, t333);
                wr32(sp0 - 0x84u, 2u);
                g->eax = t333;
                g->ecx = t331;
                g->edx = t332;
                g->esp = sp0 - 0x78u;
                t334 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t333, 8u);
                t335 = g->ecx;
                t336 = g->edx;
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, 3u);
                g->esp = sp0 - 0x84u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
                wr32(sp0 - 0x64u, 0u);
                t337 = rd32(ebp + 0x40u);
                wr32(sp0 - 0x68u, t337);
                t338 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t338);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t337, 3, t338, t337, 0u);
                wr32(sp0 - 0x64u, esi);
                t339 = rd32(sp0 - 0x4cu);
                wr32(sp0 - 0x68u, t339);
                t340 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t340);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 5u);
                g->ebx = ebx;
                g->edx = t340;
                t341 = rd32(ebp + 0x60u);
                t342 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t340, t339, esi);
                t343 = g->edx;
                t344 = rd32(COW_IMG(0x10456908u)) + 1u;
                wr32(COW_IMG(0x10456908u), t344);
                if (!(rd8(rd32(sp0 - 0x44u) + 0x34u) & 1u))
                {
                    edx = t343;
                }
                else
                {
                    eax = t342;
                    ecx = rd32(sp0 - 0x44u);
                    edi = t339;
                    wr32(sp0 - 0x64u, 0xcu);
                    t345 = rd32(ebp + 0x50u);
                    wr32(sp0 - 0x68u, t345);
                    wr32(sp0 - 0x6cu, 0u);
                    g->ecx = ecx;
                    g->edx = t345;
                    g->esp = sp0 - 0x60u;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t345, 0xcu);
                    t346 = g->ecx;
                    t347 = g->edx;
                    wr32(sp0 - 0x70u, 0xcu);
                    t348 = rd32(ebp + 0x54u);
                    wr32(sp0 - 0x74u, t348);
                    wr32(sp0 - 0x78u, 1u);
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t348, 0xcu);
                    wr32(sp0 - 0x64u, esi);
                    wr32(sp0 - 0x68u, edi);
                    t349 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t349);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 5u);
                    g->ebx = ebx;
                    g->edx = (uint16_t)rd32(COW_IMG(0x1045b618u));
                    t350 = rd32(COW_IMG(0x1045b618u));
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t349, edi, esi);
                    t351 = g->edx;
                    wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                    edx = t351;
                }
            }
            t352 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x64u, t352);
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t353 = cow_stdcall(g, COW_IMG(0x10025f70u), 1, t352);
            t354 = g->edx;
            eax = t353;
            edx = t354;
        }
    }
    if (rd8(COW_IMG(0x104572b0u)) != 0u)
    {
        wr32(sp0 - 0x64u, COW_IMG(0x104574f8u));
        wr32(sp0 - 0x68u, ebx);
        wr32(sp0 - 0x6cu, COW_IMG(0x1045b648u));
        g->edx = arg2;
        g->esp = sp0 - 0x60u;
        t355 = cow_thiscall(g, COW_IMG(0x10025330u), arg2 + 0x90u, 3, COW_IMG(0x1045b648u), ebx, COW_IMG(0x104574f8u));
        t356 = g->ecx;
        t357 = g->edx;
        if ((uint8_t)t355 == 0u)
        {
            edx = t357;
        }
        else
        {
            ecx = t356;
            edx = t357;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t358 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
            t359 = g->ecx;
            t360 = g->edx;
            if (rd8(ebp + 0x68u) != 0u)
            {
                ecx = t359;
                edx = t360;
                wr32(sp0 - 0x64u, 0xcu);
                t361 = rd32(ebp + 0x44u);
                wr32(sp0 - 0x68u, t361);
                wr32(sp0 - 0x6cu, 0u);
                g->eax = t361;
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                t362 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t361, 0xcu);
                t363 = g->edx;
                wr32(sp0 - 0x70u, 0xcu);
                t364 = rd32(ebp + 0x48u);
                wr32(sp0 - 0x74u, t364);
                wr32(sp0 - 0x78u, 1u);
                g->ecx = t364;
                g->esp = sp0 - 0x6cu;
                t365 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t364, 0xcu);
                t366 = g->ecx;
                wr32(sp0 - 0x7cu, 8u);
                t367 = rd32(ebp + 0x4cu);
                wr32(sp0 - 0x80u, t367);
                wr32(sp0 - 0x84u, 2u);
                g->ecx = t366;
                g->edx = t367;
                g->esp = sp0 - 0x78u;
                t368 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t367, 8u);
                t369 = g->ecx;
                t370 = g->edx;
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x8cu, 0u);
                wr32(sp0 - 0x90u, 3u);
                g->esp = sp0 - 0x84u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
                wr32(sp0 - 0x64u, 0u);
                t371 = rd32(ebp + 0x40u);
                wr32(sp0 - 0x68u, t371);
                t372 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x6cu, t372);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t372, t371, 0u);
                wr32(sp0 - 0x64u, esi);
                t373 = rd32(sp0 - 0x4cu);
                wr32(sp0 - 0x68u, t373);
                t374 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t374);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 5u);
                g->ebx = ebx;
                t375 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t374, t373, esi);
                t376 = rd32(COW_IMG(0x10456908u)) + 1u;
                t377 = rd32(sp0 - 0x44u);
                wr32(COW_IMG(0x10456908u), t376);
                if (rd8(t377 + 0x34u) & 1u)
                {
                    ecx = t376;
                    edx = t377;
                    edi = t373;
                    wr32(sp0 - 0x64u, 0xcu);
                    t378 = rd32(ebp + 0x50u);
                    wr32(sp0 - 0x68u, t378);
                    wr32(sp0 - 0x6cu, 0u);
                    g->eax = t378;
                    g->edx = edx;
                    g->esp = sp0 - 0x60u;
                    t379 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t378, 0xcu);
                    t380 = g->edx;
                    wr32(sp0 - 0x70u, 0xcu);
                    t381 = rd32(ebp + 0x54u);
                    wr32(sp0 - 0x74u, t381);
                    wr32(sp0 - 0x78u, 1u);
                    g->esp = sp0 - 0x6cu;
                    cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t381, 0xcu);
                    wr32(sp0 - 0x64u, esi);
                    wr32(sp0 - 0x68u, edi);
                    t382 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                    wr32(sp0 - 0x6cu, t382);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 5u);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x60u;
                    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t382, edi, esi);
                    wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                }
            }
            t383 = rd32(sp0 - 0x40u);
            wr32(sp0 - 0x64u, t383);
            g->edx = arg2;
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, COW_IMG(0x100255c0u), arg2 + 0x90u, 1, t383);
            t384 = g->edx;
            edx = t384;
        }
    }
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, COW_IMG(0x1045b648u));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t385 = cow_thiscall(g, COW_IMG(0x10033800u), arg2 + 0x48u, 2, COW_IMG(0x1045b648u), ebx);
    t386 = g->ecx;
    t387 = g->edx;
    if ((uint8_t)t385 == 0u)
    {
        edi = rd32(sp0 - 0x4cu);
    }
    else
    {
        ecx = t386;
        edx = t387;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t388 = cow_stdcall(g, COW_IMG(0x1002f1a0u), 0);
        t389 = g->edx;
        if (rd8(ebp + 0x68u) == 0u)
        {
            edx = t389;
            edi = rd32(sp0 - 0x4cu);
        }
        else
        {
            eax = (t388 & 0xffffff00u) | rd8(ebp + 0x68u);
            edx = t389;
            wr32(sp0 - 0x64u, 0xcu);
            t390 = rd32(ebp + 0x44u);
            wr32(sp0 - 0x68u, t390);
            wr32(sp0 - 0x6cu, 0u);
            g->eax = eax;
            g->ecx = t390;
            g->esp = sp0 - 0x60u;
            t391 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t390, 0xcu);
            t392 = g->ecx;
            wr32(sp0 - 0x70u, 0xcu);
            t393 = rd32(ebp + 0x48u);
            wr32(sp0 - 0x74u, t393);
            wr32(sp0 - 0x78u, 1u);
            g->ecx = t392;
            g->edx = t393;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t393, 0xcu);
            t394 = g->ecx;
            t395 = g->edx;
            wr32(sp0 - 0x7cu, 8u);
            t396 = rd32(ebp + 0x4cu);
            wr32(sp0 - 0x80u, t396);
            wr32(sp0 - 0x84u, 2u);
            g->eax = t396;
            g->ecx = t394;
            g->edx = t395;
            g->esp = sp0 - 0x78u;
            t397 = cow_cdecl(g, COW_IMG(0x1002f130u), 3, 2u, t396, 8u);
            t398 = g->ecx;
            t399 = g->edx;
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            wr32(sp0 - 0x90u, 3u);
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x1002f130u), 3, 3u, 0u, 0u);
            wr32(sp0 - 0x64u, 0u);
            t400 = rd32(ebp + 0x40u);
            wr32(sp0 - 0x68u, t400);
            t401 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x6cu, t401);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x154u), t400, 3, t401, t400, 0u);
            wr32(sp0 - 0x64u, esi);
            t402 = rd32(sp0 - 0x4cu);
            wr32(sp0 - 0x68u, t402);
            t403 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
            wr32(sp0 - 0x6cu, t403);
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x74u, 5u);
            g->ebx = ebx;
            g->edx = t403;
            t404 = rd32(ebp + 0x60u);
            t405 = cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t403, t402, esi);
            t406 = g->edx;
            t407 = rd32(COW_IMG(0x10456908u)) + 1u;
            wr32(COW_IMG(0x10456908u), t407);
            if (!(rd8(rd32(sp0 - 0x44u) + 0x34u) & 1u))
            {
                edx = t406;
                edi = t402;
            }
            else
            {
                eax = t405;
                ecx = rd32(sp0 - 0x44u);
                edi = t402;
                wr32(sp0 - 0x64u, 0xcu);
                t408 = rd32(ebp + 0x50u);
                wr32(sp0 - 0x68u, t408);
                wr32(sp0 - 0x6cu, 0u);
                g->ecx = ecx;
                g->edx = t408;
                g->esp = sp0 - 0x60u;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 0u, t408, 0xcu);
                t409 = g->ecx;
                t410 = g->edx;
                wr32(sp0 - 0x70u, 0xcu);
                t411 = rd32(ebp + 0x54u);
                wr32(sp0 - 0x74u, t411);
                wr32(sp0 - 0x78u, 1u);
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x1002f130u), 3, 1u, t411, 0xcu);
                wr32(sp0 - 0x64u, esi);
                wr32(sp0 - 0x68u, edi);
                t412 = rd16(COW_IMG(0x1045b61au)) + rd32(ebp + 0x60u) + (uint16_t)rd32(COW_IMG(0x1045b618u));
                wr32(sp0 - 0x6cu, t412);
                wr32(sp0 - 0x70u, 0u);
                wr32(sp0 - 0x74u, 5u);
                g->ebx = ebx;
                g->edx = rd32(ebp + 0x60u);
                t413 = rd32(ebp + 0x60u);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, 5u, 0u, t412, edi, esi);
                t414 = g->edx;
                wr32(COW_IMG(0x10456908u), rd32(COW_IMG(0x10456908u)) + 1u);
                edx = t414;
            }
        }
        t415 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x64u, t415);
        g->esp = sp0 - 0x60u;
        cow_fastcall(g, COW_IMG(0x10033a70u), arg2 + 0x48u, edx, 1, t415);
    }
L_1002f096: ;
    t416 = esi + rd32(arg6) + 2u;
    wr32(arg6, t416);
    t417 = esi * 0xau + loc_48 + 0x18u;
    wr32(sp0 - 0x48u, t417);
    eax = esi + 2u;
    edx = t417;
    loc_48 = t417;
    goto L_1002f0b2;
L_1002ecf3: ;
    if ((uint8_t)eax != 0u) goto L_1002f096;
    goto L_1002ecfb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002dc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002dc10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
