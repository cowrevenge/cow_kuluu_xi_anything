/* f_0x100bf3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100bf3e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_154;
    uint32_t loc_16c;
    uint32_t loc_170;
    uint32_t loc_178;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 384u);

    wr32(sp0 - 0x15cu, in_ebx);
    wr32(sp0 - 0x160u, in_ebp);
    wr32(sp0 - 0x164u, in_esi);
    wr32(sp0 - 0x168u, in_edi);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x1018d2b0u), sp0 - 0x140u, in_edx, 0);
    t1 = g->edx;
    g->edx = t1;
    t2 = rd32(sp0 - 0x158u);
    cow_thiscall(g, COW_IMG(0x10154dc0u), sp0 - 0xecu, 0);
    t3 = g->edx;
    cow_fastcall(g, COW_IMG(0x102586b0u), sp0 - 0x104u, t3, 0);
    t4 = g->edx;
    cow_fastcall(g, COW_IMG(0x102587f0u), sp0 - 0x114u, t4, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(self + 0x6f0u) == 0u)
    {
        eax = rd32(self + 0x6f0u);
        ecx = t5;
        edx = t6;
    }
    else
    {
        edx = t6;
        wr32(sp0 - 0x16cu, self + 0x110u);
        t7 = rd32(self + 0x704u);
        wr8(t7, 0u);
        g->eax = t7;
        g->esp = sp0 - 0x168u;
        t8 = cow_fastcall(g, COW_IMG(0x10259410u), self + 0x714u, edx, 1, self + 0x110u);
        t9 = g->edx;
        t10 = rd32(self + 0x6f0u);
        wr8(self + 0x110u, 0u);
        wr32(self + 0x704u, t10);
        wr32(self + 0x6f0u, 0u);
        eax = t8;
        ecx = t10;
        edx = t9;
    }
    if (rd8(arg1) != 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(arg1);
        loc_154 = (rd32(sp0 - 0x154u) & 0xffffff00u) | rd8(arg1);
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(arg1);
        loc_154 = (rd32(sp0 - 0x154u) & 0xffffff00u) | rd8(arg1);
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    wr8(self + 0x784u, 0u);
    if ((uint32_t)(int8_t)rd8(arg1) - 1u > 0x51u) goto L_100c0297;
    eax = (uint32_t)(int8_t)rd8(arg1) - 1u;
    t13 = rd32(COW_IMG(0x100c033cu) + rd8(COW_IMG(0x100c03ccu) + eax) * 4u);
    switch (t13 - RD)
    {
    case 0x100bf49eu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf49e;
    case 0x100bf4aau: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4aa;
    case 0x100bf4bcu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4bc;
    case 0x100bf4d0u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4d0;
    case 0x100bf4e4u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4e4;
    case 0x100bf4f8u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf4f8;
    case 0x100bf508u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf508;
    case 0x100bf51cu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf51c;
    case 0x100bf530u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf530;
    case 0x100bf544u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf544;
    case 0x100bf562u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf562;
    case 0x100bf5a5u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5a5;
    case 0x100bf5b7u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5b7;
    case 0x100bf5c9u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5c9;
    case 0x100bf5dbu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf5db;
    case 0x100bf62au: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf62a;
    case 0x100bf645u: goto L_100bf645;
    case 0x100bf69au: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf69a;
    case 0x100bf6f5u: goto L_100bf6f5;
    case 0x100bf75fu: goto L_100bf75f;
    case 0x100bf7acu: goto L_100bf7ac;
    case 0x100bf7ebu: goto L_100bf7eb;
    case 0x100bf82au: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf82a;
    case 0x100bf842u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf842;
    case 0x100bf87du: goto L_100bf87d;
    case 0x100bf96eu: goto L_100bf96e;
    case 0x100bf9f7u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bf9f7;
    case 0x100bfad7u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bfad7;
    case 0x100bfbb3u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bfbb3;
    case 0x100bfcebu: goto L_100bfceb;
    case 0x100bfe41u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100bfe41;
    case 0x100bff15u: goto L_100bff15;
    case 0x100c0015u: goto L_100c0015;
    case 0x100c00abu: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100c00ab;
    case 0x100c01dcu: goto L_100c01dc;
    case 0x100c0297u: edx = rd8(COW_IMG(0x100c03ccu) + eax); goto L_100c0297;
    default: rt_fatal(g, COW_IMG(0x100bf497u), "switch");
    }
    return 0;
L_100bf49e: ;
    wr8(self + 0x784u, 1u);
L_100c0297: ;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t358 = cow_thiscall(g, COW_IMG(0x10259150u), self + 0x714u, 0);
    t359 = g->edx;
    if (t358 == 0u)
    {
        eax = t358;
        goto L_100c02f1;
    }
    eax = t358;
    edx = t359;
    if (rd8(self + 0x784u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x784u);
        goto L_100c02f1;
    }
    wr32(sp0 - 0x16cu, sp0 - 0x140u);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t360 = cow_thiscall(g, COW_IMG(0x102599b0u), self + 0x714u, 1, sp0 - 0x140u);
    t361 = g->edx;
    cow_thiscall(g, COW_IMG(0x10259e00u), self + 0x714u, 0);
    t362 = rd32(self + 0xcu);
    wr32(sp0 - 0x16cu, t362);
    g->edx = t362;
    g->esp = sp0 - 0x16cu;
    t363 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x140u, 0);
    t364 = g->ecx;
    t365 = g->edx;
    wr32(sp0 - 0x170u, t363);
    t366 = rd32(self + 0x704u);
    wr32(sp0 - 0x174u, t366);
    g->edx = t365;
    g->esp = sp0 - 0x150u;
    t367 = cow_call_regs(g, COW_IMG(0x100c2bf0u), t366, t364, g->edx, 1, 9, t366, t363, rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    t368 = g->edx;
    wr32(self + 0x704u, t367);
    wr32(self + 0xcu, 0u);
    eax = t367;
    edx = t368;
L_100c0309: ;
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t370 = cow_fastcall(g, COW_IMG(0x10258790u), sp0 - 0x114u, edx, 0);
    t371 = g->edx;
    t372 = cow_fastcall(g, COW_IMG(0x10258650u), sp0 - 0x104u, t371, 0);
    t373 = g->edx;
    t374 = cow_fastcall(g, COW_IMG(0x10154d70u), sp0 - 0xecu, t373, 0);
    t375 = g->edx;
    t376 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x140u, t375, 0);
    g->ebx = rd32(sp0 - 0x15cu);
    g->esi = rd32(sp0 - 0x164u);
    g->edi = rd32(sp0 - 0x168u);
    g->ebp = rd32(sp0 - 0x160u);
    return (t376 & 0xffffff00u) | 1u;
L_100bf4aa: ;
    wr32(sp0 - 0x16cu, 0u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x102591a0u), self + 0x714u, edx, 1, 0u);
    t357 = g->edx;
    edx = t357;
    goto L_100c0297;
L_100bf4bc: ;
    wr32(sp0 - 0x16cu, 0xffffffffu);
    wr32(sp0 - 0x170u, 0u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259210u), self + 0x714u, edx, 2, 0u, 0xffffffffu);
    t356 = g->edx;
    edx = t356;
    goto L_100c0297;
L_100bf4d0: ;
    wr32(sp0 - 0x16cu, 0xffffffffu);
    wr32(sp0 - 0x170u, 1u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259210u), self + 0x714u, edx, 2, 1u, 0xffffffffu);
    t355 = g->edx;
    edx = t355;
    goto L_100c0297;
L_100bf4e4: ;
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 1u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259210u), self + 0x714u, edx, 2, 1u, 0u);
    t354 = g->edx;
    edx = t354;
    goto L_100c0297;
L_100bf4f8: ;
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259280u), self + 0x714u, edx, 0);
    t353 = g->edx;
    edx = t353;
    goto L_100c0297;
L_100bf508: ;
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259210u), self + 0x714u, edx, 2, 0u, 0u);
    t352 = g->edx;
    edx = t352;
    goto L_100c0297;
L_100bf51c: ;
    wr32(sp0 - 0x16cu, 1u);
    wr32(sp0 - 0x170u, 0u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259210u), self + 0x714u, edx, 2, 0u, 1u);
    t351 = g->edx;
    edx = t351;
    goto L_100c0297;
L_100bf530: ;
    wr32(sp0 - 0x16cu, 2u);
    wr32(sp0 - 0x170u, 0u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259210u), self + 0x714u, edx, 2, 0u, 2u);
    t350 = g->edx;
    edx = t350;
    goto L_100c0297;
L_100bf544: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    t343 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x134u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t344 = g->ecx;
    t345 = g->edx;
    if (rd16(sp0 - 0x134u) != 1u)
    {
        eax = (t343 & 0xffff0000u) | rd16(sp0 - 0x134u);
        ecx = t344;
        goto L_100bf574;
    }
    eax = (t343 & 0xffff0000u) | rd16(sp0 - 0x134u);
    edx = t345;
L_100bf562: ;
    wr32(sp0 - 0x16cu, 1u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x102591a0u), self + 0x714u, edx, 1, 1u);
    t346 = g->edx;
    edx = t346;
    goto L_100c0297;
L_100bf574: ;
    wr32(sp0 - 0x16cu, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x170u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x174u, sp0 - 0x80u);
    g->ebx = ebx;
    g->edx = (uint32_t)(int16_t)eax;
    g->esp = sp0 - 0x160u;
    t347 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x168u), rd32(sp0 - 0x164u));
    t348 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x80u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259410u), self + 0x714u, t348, 1, sp0 - 0x80u);
    t349 = g->edx;
    edx = t349;
    goto L_100c0297;
L_100bf5a5: ;
    wr32(sp0 - 0x16cu, 0u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259340u), self + 0x714u, edx, 1, 0u);
    t342 = g->edx;
    edx = t342;
    goto L_100c0297;
L_100bf5b7: ;
    wr32(sp0 - 0x16cu, 1u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259340u), self + 0x714u, edx, 1, 1u);
    t341 = g->edx;
    edx = t341;
    goto L_100c0297;
L_100bf5c9: ;
    wr32(sp0 - 0x16cu, 2u);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259340u), self + 0x714u, edx, 1, 2u);
    t340 = g->edx;
    edx = t340;
    goto L_100c0297;
L_100bf5db: ;
    eax = rd32(self + 0x38u);
L_100bf5de: ;
    if (eax == 0u)
    {
        wr8(self + 0x6ecu, 1u);
        wr8(self + 0x6edu, 0u);
    }
    else
    {
        if (eax == 1u)
        {
            wr8(self + 0x6ecu, 1u);
            wr8(self + 0x6edu, 1u);
        }
        else
        {
            eax = eax - 1u;
            if (eax != 1u)
            {
                eax = eax - 1u;
                wr8(self + 0x6ecu, 1u);
                wr8(self + 0x6edu, (uint8_t)loc_154);
            }
            else
            {
                wr8(self + 0x6ecu, 1u);
                wr8(self + 0x6edu, 2u);
            }
        }
    }
    goto L_100c0297;
L_100bf62a: ;
    eax = rd32(self + 0x3cu);
    goto L_100bf5de;
L_100bf645: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdb80u), self + 0x50u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t332 = g->edx;
    t333 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t333);
    g->esp = sp0 - 0x174u;
    t334 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t333);
    t335 = rd32(self + 0x10u);
    wr32(sp0 - 0x16cu, t335);
    t336 = rd32(self + 0x38u);
    wr32(sp0 - 0x170u, t336);
    if (rd32(self + 0x28u) == 0u)
    {
        eax = t334;
        loc_16c = t335;
        loc_170 = t336;
        t338 = rd32(self + 0x18u) != 1u;
        wr32(sp0 - 0x174u, t338);
        wr32(sp0 - 0x178u, eax);
        g->esp = sp0 - 0x168u;
        cow_fastcall(g, COW_IMG(0x10259590u), self + 0x714u, t338, 4, eax, t338, loc_170, loc_16c);
        t339 = g->edx;
        edx = t339;
    }
    else
    {
        eax = t334;
        edx = t335;
        loc_16c = t335;
        loc_170 = t336;
        wr32(sp0 - 0x174u, eax);
        g->esp = sp0 - 0x168u;
        cow_fastcall(g, COW_IMG(0x10259650u), self + 0x714u, edx, 3, eax, loc_170, loc_16c);
        t337 = g->edx;
        edx = t337;
    }
    goto L_100c0297;
L_100bf69a: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t324 = g->ecx;
    t325 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t325);
    g->esp = sp0 - 0x174u;
    t326 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t325);
    t327 = rd32(self + 0x14u);
    wr32(sp0 - 0x16cu, t327);
    t328 = rd32(self + 0x3cu);
    wr32(sp0 - 0x170u, t328);
    if (rd32(self + 0x2cu) == 0u)
    {
        eax = t326;
        edx = t328;
        loc_16c = t327;
        loc_170 = t328;
        t330 = rd32(self + 0x1cu) != 1u;
        wr32(sp0 - 0x174u, t330);
        wr32(sp0 - 0x178u, eax);
        g->esp = sp0 - 0x168u;
        cow_fastcall(g, COW_IMG(0x10259590u), self + 0x714u, edx, 4, eax, t330, loc_170, loc_16c);
        t331 = g->edx;
        edx = t331;
    }
    else
    {
        eax = t326;
        edx = t328;
        loc_16c = t327;
        loc_170 = t328;
        wr32(sp0 - 0x174u, eax);
        g->esp = sp0 - 0x168u;
        cow_fastcall(g, COW_IMG(0x10259650u), self + 0x714u, edx, 3, eax, loc_170, loc_16c);
        t329 = g->edx;
        edx = t329;
    }
    goto L_100c0297;
L_100bf6f5: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x150u);
    wr32(sp0 - 0x174u, arg1 + 1u);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = ecx;
    g->edx = sp0 - 0x134u;
    g->esp = sp0 - 0x16cu;
    t313 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t314 = g->ecx;
    t315 = g->edx;
    t316 = arg1 + t313 + 1u;
    wr32(sp0 - 0x170u, t316);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t316, g->ecx, t315, 1, 3, self + 0x50u, t316, sp0 - 0x134u);
    t317 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc50u);
    wr32(sp0 - 0x16cu, t317);
    wr32(sp0 - 0x170u, sp0 - 0x104u);
    t318 = rd32(COW_IMG(0x106671b4u));
    cow_fastcall(g, COW_IMG(0x10227590u), t318, rd32(self + 4u), 2, sp0 - 0x104u, t317);
    t319 = g->ecx;
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    wr32(sp0 - 0x170u, 0u);
    t320 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x174u, t320);
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x170u;
    t321 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t320);
    t322 = g->edx;
    wr32(sp0 - 0x174u, t321);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x102596e0u), self + 0x714u, t322, 3, t321, 0u, sp0 - 0x104u);
    t323 = g->edx;
    edx = t323;
    goto L_100c0297;
L_100bf75f: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t307 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc50u);
    wr32(sp0 - 0x16cu, t307);
    wr32(sp0 - 0x170u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    t308 = cow_fastcall(g, COW_IMG(0x10227680u), rd32(COW_IMG(0x106671b4u)), t307, 2, sp0 - 0x114u, t307);
    t309 = g->edx;
    g->edx = t309;
    t310 = cow_thiscall(g, COW_IMG(0x10258840u), sp0 - 0x114u, 0);
    t311 = g->edx;
    wr32(sp0 - 0x16cu, t310);
    cow_fastcall(g, COW_IMG(0x10259410u), self + 0x714u, t311, 1, t310);
    t312 = g->edx;
    edx = t312;
    goto L_100c0297;
L_100bf7ac: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t302 = g->edx;
    t303 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t303);
    g->eax = t303;
    g->edx = t302;
    t304 = cow_thiscall(g, COW_IMG(0x10167400u), rd32(COW_IMG(0x10621950u)), 1, t303);
    t305 = g->edx;
    wr32(sp0 - 0x16cu, t304);
    cow_fastcall(g, COW_IMG(0x10259410u), self + 0x714u, t305, 1, t304);
    t306 = g->edx;
    edx = t306;
    goto L_100c0297;
L_100bf7eb: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x134u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t297 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t297);
    g->eax = t297;
    g->edx = rd32(self + 4u);
    t298 = rd32(self + 4u);
    t299 = cow_thiscall(g, COW_IMG(0x10167410u), rd32(COW_IMG(0x10621950u)), 1, t297);
    t300 = g->edx;
    wr32(sp0 - 0x16cu, t299);
    cow_fastcall(g, COW_IMG(0x10259410u), self + 0x714u, t300, 1, t299);
    t301 = g->edx;
    edx = t301;
    goto L_100c0297;
L_100bf82a: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    t291 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x134u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t292 = g->ecx;
    t293 = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    wr32(sp0 - 0x178u, t293);
    eax = t291;
    ecx = t292;
    edx = t293;
    loc_178 = t293;
L_100bf862: ;
    wr32(sp0 - 0x17cu, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t294 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, loc_178);
    t295 = g->edx;
    wr32(sp0 - 0x16cu, t294);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259410u), self + 0x714u, t295, 1, t294);
    t296 = g->edx;
    edx = t296;
    goto L_100c0297;
L_100bf842: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = self + 0x50u;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x134u, g->ecx, edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t289 = g->ecx;
    t290 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x178u, t290);
    eax = t290;
    ecx = t289;
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    loc_178 = t290;
    goto L_100bf862;
L_100bf87d: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t265 = g->edx;
    if ((uint8_t)rd32(sp0 - 0x154u) == 0x50u)
    {
        edx = t265;
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
    }
    else
    {
        eax = (uint8_t)rd32(sp0 - 0x154u) - 0x50u;
        edx = t265;
        if (eax == 1u)
        {
            eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        }
        else
        {
            eax = eax - 1u;
            if (eax != 1u)
            {
                eax = rd32(sp0 - 0x154u);
            }
            else
            {
                eax = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc50u);
            }
        }
    }
    if (eax + 0xe000u != 0u)
    {
        eax = eax + 0xe000u;
        goto L_100bf8e8;
    }
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t266 = g->edx;
    edx = t266;
    goto L_100c0297;
L_100bf8e8: ;
    wr32(sp0 - 0x16cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t267 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t268 = g->edx;
    if (t267 == 0u)
    {
        eax = t267;
        edx = t268;
        goto L_100c020d;
    }
    eax = t267;
    edx = t268;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t269 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t270 = g->edx;
    if (t269 != 0u)
    {
        edx = t270;
        ebx = t269;
        wr32(sp0 - 0x16cu, 8u);
        wr32(sp0 - 0x170u, sp0 - 0x158u);
        g->esp = sp0 - 0x168u;
        t272 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), sp0 - 0x158u, 2, sp0 - 0x158u, 8u);
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        t273 = rd32(sp0 - 0x158u);
        t274 = cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, sp0 - 0x158u, 1, sp0 - 0x158u);
        t275 = g->edx;
        wr32(sp0 - 0x16cu, ebx);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, 0u);
        cow_fastcall(g, COW_IMG(0x10259480u), self + 0x714u, t275, 3, 0u, 0u, ebx);
        t276 = g->ecx;
        t277 = g->edx;
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        g->edx = t277;
        t278 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x158u);
        t279 = g->edx;
        wr32(sp0 - 0x16cu, sp0 - 0x158u);
        t280 = rd32(sp0 - 0x158u);
        cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, t279, 1, sp0 - 0x158u);
        t281 = g->edx;
        edx = t281;
    }
    else
    {
        edx = t270;
        g->edx = edx;
        g->esp = sp0 - 0x168u;
        cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
        t271 = g->edx;
        edx = t271;
    }
    goto L_100c0297;
L_100bf96e: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x168u;
    t251 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t252 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x132u);
    wr32(sp0 - 0x170u, sp0 - 0x134u);
    t253 = arg1 + t251 + 1u;
    wr32(sp0 - 0x174u, t253);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->esp = sp0 - 0x16cu;
    t254 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0x132u, g->ecx, t252, 1, 3, self + 0x50u, t253, sp0 - 0x134u);
    t255 = g->ecx;
    t256 = g->edx;
    wr32(sp0 - 0x170u, t253 + t254);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t253 + t254, g->ecx, t256, 1, 3, self + 0x50u, t253 + t254, sp0 - 0x132u);
    t257 = (uint32_t)(int16_t)rd16(sp0 - 0x132u);
    wr32(sp0 - 0x16cu, t257);
    t258 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x170u, t258);
    wr32(sp0 - 0x174u, sp0 - 0x104u);
    g->edx = t258;
    t259 = cow_thiscall(g, COW_IMG(0x10157050u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0x104u, t258, t257);
    t260 = g->edx;
    if (t259 == 0u)
    {
        eax = t259;
        edx = t260;
        goto L_100c020d;
    }
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    wr32(sp0 - 0x170u, 0u);
    t261 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x174u, t261);
    g->edx = t261;
    g->esp = sp0 - 0x170u;
    t262 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t261);
    t263 = g->edx;
    wr32(sp0 - 0x174u, t262);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x102596e0u), self + 0x714u, t263, 3, t262, 0u, sp0 - 0x104u);
    t264 = g->edx;
    edx = t264;
    goto L_100c0297;
L_100bf9f7: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t225 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t226 = arg1 + t225 + 1u;
    wr32(sp0 - 0x174u, t226);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14fu;
    g->esp = sp0 - 0x16cu;
    t227 = cow_call_regs(g, COW_IMG(0x100bdb80u), t225, g->ecx, g->edx, 1, 3, self + 0x50u, t226, sp0 - 0x14fu);
    t228 = g->ecx;
    t229 = g->edx;
    wr32(sp0 - 0x170u, t226 + t227);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t228;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t226 + t227, g->ecx, t229, 1, 3, self + 0x50u, t226 + t227, sp0 - 0x134u);
    t230 = g->ecx;
    t231 = g->edx;
    if (rd16(sp0 - 0x134u) != 0u)
    {
        ecx = (t230 & 0xffff0000u) | rd16(sp0 - 0x134u);
        edx = t231;
        goto L_100bfa46;
    }
    edx = t231;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t232 = g->edx;
    edx = t232;
    goto L_100c0297;
L_100bfa46: ;
    t233 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x16cu, t233);
    g->ecx = ecx;
    g->esp = sp0 - 0x168u;
    t234 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t233);
    t235 = g->ecx;
    t236 = rd8(sp0 - 0x14fu) != 0u;
    if ((uint8_t)ebx != 0x3au)
    {
        eax = (uint32_t)(int16_t)t235;
        edx = t236;
        ebp = t236;
        edi = t234;
        goto L_100bfa9a;
    }
    eax = (uint32_t)(int16_t)t235;
    edx = t236;
    ebp = t236;
    edi = t234;
    wr32(sp0 - 0x16cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t237 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t238 = g->edx;
    if (t237 == 0u)
    {
        eax = t237;
        edx = t238;
        goto L_100c020d;
    }
    eax = t237;
    edx = t238;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t239 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t240 = g->edx;
    if (t239 != 0u)
    {
        eax = t239;
        goto L_100bfabd;
    }
    edx = t240;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t241 = g->edx;
    edx = t241;
    goto L_100c0297;
L_100bfa9a: ;
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x170u;
    t242 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0xecu, edx, 1, 0);
    t243 = g->edx;
    g->edx = t243;
    g->esp = sp0 - 0x168u;
    t244 = cow_thiscall(g, COW_IMG(0x10154a40u), t242, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t245 = g->edx;
    if ((uint8_t)t244 == 0u)
    {
        eax = t244;
        edx = t245;
        goto L_100c020d;
    }
    edx = t245;
    g->esp = sp0 - 0x168u;
    t246 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    eax = t246;
L_100bfabd: ;
    g->eax = eax;
    g->edx = rd32(eax);
    t247 = rd32(eax);
    g->esp = sp0 - 0x168u;
    t248 = cow_thiscall(g, rd32(t247 + 8u), eax, 0);
    t249 = g->edx;
    wr32(sp0 - 0x16cu, t248);
    wr32(sp0 - 0x170u, ebp);
    wr32(sp0 - 0x174u, edi);
    g->edx = t249;
    cow_thiscall(g, COW_IMG(0x102597e0u), self + 0x714u, 3, edi, ebp, t248);
    t250 = g->edx;
    edx = t250;
    goto L_100c0297;
L_100bfad7: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t200 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t201 = arg1 + t200 + 1u;
    wr32(sp0 - 0x174u, t201);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14fu;
    g->esp = sp0 - 0x16cu;
    t202 = cow_call_regs(g, COW_IMG(0x100bdb80u), t200, g->ecx, g->edx, 1, 3, self + 0x50u, t201, sp0 - 0x14fu);
    t203 = g->ecx;
    t204 = g->edx;
    wr32(sp0 - 0x170u, t201 + t202);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t201 + t202, g->ecx, t204, 1, 3, self + 0x50u, t201 + t202, sp0 - 0x134u);
    t205 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        edx = t205;
        goto L_100bfb25;
    }
    edx = t205;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t206 = g->edx;
    edx = t206;
    goto L_100c0297;
L_100bfb25: ;
    t207 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x16cu, t207);
    g->ecx = ecx;
    g->esp = sp0 - 0x168u;
    t208 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t207);
    t209 = g->ecx;
    t210 = rd8(sp0 - 0x14fu) != 0u;
    if ((uint8_t)ebx != 0x3cu)
    {
        ecx = t209;
        edx = t210;
        ebp = t210;
        edi = t208;
        goto L_100bfb76;
    }
    ecx = t209;
    edx = t210;
    ebp = t210;
    edi = t208;
    wr32(sp0 - 0x16cu, ecx);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t211 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, ecx);
    t212 = g->edx;
    if (t211 == 0u)
    {
        eax = t211;
        edx = t212;
        goto L_100c020d;
    }
    eax = t211;
    edx = t212;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t213 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t214 = g->edx;
    if (t213 != 0u)
    {
        eax = t213;
        goto L_100bfb99;
    }
    edx = t214;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t215 = g->edx;
    edx = t215;
    goto L_100c0297;
L_100bfb76: ;
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, ecx);
    g->esp = sp0 - 0x170u;
    t216 = cow_call_regs(g, COW_IMG(0x10153ff0u), sp0 - 0xecu, ecx, edx, 1, 0);
    t217 = g->edx;
    g->edx = t217;
    g->esp = sp0 - 0x168u;
    t218 = cow_thiscall(g, COW_IMG(0x10154a40u), t216, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t219 = g->edx;
    if ((uint8_t)t218 == 0u)
    {
        eax = t218;
        edx = t219;
        goto L_100c020d;
    }
    edx = t219;
    g->esp = sp0 - 0x168u;
    t220 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    eax = t220;
L_100bfb99: ;
    g->eax = eax;
    g->edx = rd32(eax);
    t221 = rd32(eax);
    g->esp = sp0 - 0x168u;
    t222 = cow_thiscall(g, rd32(t221 + 8u), eax, 0);
    t223 = g->edx;
    wr32(sp0 - 0x16cu, t222);
    wr32(sp0 - 0x170u, ebp);
    wr32(sp0 - 0x174u, edi);
    g->edx = t223;
    cow_thiscall(g, COW_IMG(0x10259820u), self + 0x714u, 3, edi, ebp, t222);
    t224 = g->edx;
    edx = t224;
    goto L_100c0297;
L_100bfbb3: ;
    wr32(sp0 - 0x16cu, sp0 - 0x14fu);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t169 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x14fu, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x14fu);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14eu);
    t170 = arg1 + t169 + 1u;
    wr32(sp0 - 0x174u, t170);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14eu;
    g->esp = sp0 - 0x16cu;
    t171 = cow_call_regs(g, COW_IMG(0x100bdb80u), t169, g->ecx, g->edx, 1, 3, self + 0x50u, t170, sp0 - 0x14eu);
    t172 = g->ecx;
    t173 = g->edx;
    wr32(sp0 - 0x170u, t170 + t171);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t170 + t171, g->ecx, t173, 1, 3, self + 0x50u, t170 + t171, sp0 - 0x134u);
    t174 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        goto L_100bfc01;
    }
    edx = t174;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t175 = g->edx;
    edx = t175;
    goto L_100c0297;
L_100bfc01: ;
    if ((uint8_t)rd32(sp0 - 0x154u) - 0x40u > 5u) goto L_100bfc2b;
    eax = (uint8_t)rd32(sp0 - 0x154u) - 0x40u;
    t176 = rd32(COW_IMG(0x100c0420u) + eax * 4u);
    switch (t176 - RD)
    {
    case 0x100bfc19u: goto L_100bfc19;
    case 0x100bfc1du: goto L_100bfc1d;
    case 0x100bfc24u: goto L_100bfc24;
    default: rt_fatal(g, COW_IMG(0x100bfc12u), "switch");
    }
    return 0;
L_100bfc19: ;
    ebp = 0u;
L_100bfc2f: ;
    t177 = (uint32_t)(int8_t)rd8(sp0 - 0x14fu);
    wr32(sp0 - 0x16cu, t177);
    g->ecx = ecx;
    g->edx = t177;
    g->esp = sp0 - 0x168u;
    t178 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t177);
    t179 = g->ecx;
    t180 = g->edx;
    wr32(sp0 - 0x154u, t178);
    if ((uint8_t)ebx == 0x40u)
    {
        ecx = t179;
        edx = t180;
        loc_154 = t178;
        goto L_100bfc81;
    }
    ecx = t179;
    edx = t180;
    loc_154 = t178;
    if ((uint8_t)ebx == 0x42u) goto L_100bfc81;
    if ((uint8_t)ebx == 0x44u) goto L_100bfc81;
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, ecx);
    g->esp = sp0 - 0x170u;
    t181 = cow_call_regs(g, COW_IMG(0x10153ff0u), sp0 - 0xecu, ecx, edx, 1, 0);
    t182 = g->edx;
    g->edx = t182;
    g->esp = sp0 - 0x168u;
    t183 = cow_thiscall(g, COW_IMG(0x10154a40u), t181, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t184 = g->edx;
    if ((uint8_t)t183 == 0u)
    {
        eax = t183;
        edx = t184;
        goto L_100c020d;
    }
    edx = t184;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t185 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    t186 = g->edx;
    eax = t185;
    edx = t186;
    edi = t185;
L_100bfc75: ;
    if (rd8(sp0 - 0x14eu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x14eu);
        if ((uint8_t)eax != 1u)
        {
            g->eax = eax;
            g->edx = rd32(edi);
            t192 = rd32(edi);
            g->esp = sp0 - 0x168u;
            t193 = cow_thiscall(g, rd32(t192 + 0x30u), edi, 0);
            t194 = g->edx;
            edx = t194;
            ebx = t193 == 2u;
        }
        else
        {
            ebx = 1u;
        }
    }
    else
    {
        ebx = 0u;
    }
    g->eax = rd32(edi);
    g->edx = edx;
    t195 = rd32(edi);
    g->esp = sp0 - 0x168u;
    t196 = cow_thiscall(g, rd32(t195 + 0x2cu), edi, 0);
    t197 = g->edx;
    wr32(sp0 - 0x16cu, t196);
    wr32(sp0 - 0x170u, ebx);
    t198 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x174u, t198);
    wr32(sp0 - 0x178u, ebp);
    cow_fastcall(g, COW_IMG(0x10259860u), self + 0x714u, t197, 4, ebp, t198, ebx, t196);
    t199 = g->edx;
    edx = t199;
    goto L_100c0297;
L_100bfc1d: ;
    ebp = 1u;
    goto L_100bfc2f;
L_100bfc24: ;
    ebp = 2u;
    goto L_100bfc2f;
L_100bfc2b: ;
    ebp = rd32(sp0 - 0x154u);
    goto L_100bfc2f;
L_100bfc81: ;
    wr32(sp0 - 0x16cu, ecx);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t187 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, ecx);
    t188 = g->edx;
    if (t187 == 0u)
    {
        eax = t187;
        edx = t188;
        goto L_100c020d;
    }
    eax = t187;
    edx = t188;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t189 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t190 = g->edx;
    if (t189 != 0u)
    {
        eax = t189;
        edx = t190;
        edi = t189;
        goto L_100bfc75;
    }
    edx = t190;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t191 = g->edx;
    edx = t191;
    goto L_100c0297;
L_100bfceb: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x168u;
    t129 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t130 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x130u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t131 = arg1 + t129 + 1u;
    wr32(sp0 - 0x174u, t131);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x14fu;
    g->edx = t130;
    g->esp = sp0 - 0x16cu;
    t132 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x130u, g->ecx, g->edx, 1, 3, self + 0x50u, t131, sp0 - 0x14fu);
    t133 = g->ecx;
    t134 = g->edx;
    wr32(sp0 - 0x170u, t131 + t132);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t133;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t131 + t132, g->ecx, t134, 1, 3, self + 0x50u, t131 + t132, sp0 - 0x130u);
    t135 = g->ecx;
    t136 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t136);
    g->ecx = t135;
    g->edx = t136;
    g->esp = sp0 - 0x174u;
    t137 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t136);
    t138 = g->ecx;
    t139 = g->edx;
    wr32(sp0 - 0x154u, t137);
    if ((uint32_t)(int16_t)rd16(sp0 - 0x130u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x130u);
        ecx = t138;
        edx = t139;
        loc_154 = t137;
        goto L_100bfd48;
    }
    edx = t139;
    loc_154 = t137;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t140 = g->edx;
    edx = t140;
    goto L_100c0297;
L_100bfd48: ;
    if ((uint8_t)ebx != 0x32u) goto L_100bfd84;
    wr32(sp0 - 0x16cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t141 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t142 = g->edx;
    if (t141 == 0u)
    {
        eax = t141;
        edx = t142;
        goto L_100c020d;
    }
    eax = t141;
    edx = t142;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t143 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t144 = g->ecx;
    t145 = g->edx;
    if (t143 != 0u)
    {
        ecx = t144;
        edx = t145;
        ebp = t143;
        goto L_100bfd7e;
    }
    edx = t145;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t146 = g->edx;
    edx = t146;
    goto L_100c0297;
L_100bfd7e: ;
    wr32(sp0 - 0x16cu, 2u);
    ebx = 0u;
    loc_16c = 2u;
L_100bfdb6: ;
    wr32(sp0 - 0x170u, sp0 - 0x158u);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t156 = cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x158u, loc_16c);
    t157 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    t158 = rd32(sp0 - 0x158u);
    t159 = cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, t157, 1, sp0 - 0x158u);
    t160 = g->edx;
    if (rd8(sp0 - 0x14fu) == 0u)
    {
        edx = t160;
        goto L_100bfe07;
    }
    eax = (t159 & 0xffffff00u) | rd8(sp0 - 0x14fu);
    edx = t160;
    if ((uint8_t)eax == 1u) goto L_100bfe0b;
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    g->eax = sp0 - 0x104u;
    g->esp = sp0 - 0x168u;
    t161 = cow_thiscall(g, rd32(rd32(ebp) + 0x28u), ebp, 1, sp0 - 0x104u);
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    wr32(sp0 - 0x170u, ebx);
    t162 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x174u, t162);
    cow_fastcall(g, COW_IMG(0x102596e0u), self + 0x714u, t162, 3, t162, ebx, sp0 - 0x104u);
    t163 = g->edx;
    edx = t163;
L_100bfe1e: ;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->esp = sp0 - 0x168u;
    t166 = cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x158u);
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    t167 = rd32(sp0 - 0x158u);
    cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, sp0 - 0x158u, 1, sp0 - 0x158u);
    t168 = g->edx;
    edx = t168;
    goto L_100c0297;
L_100bfd84: ;
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x170u;
    t147 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, sp0 - 0xecu, 1, 0);
    t148 = g->edx;
    g->edx = t148;
    g->esp = sp0 - 0x168u;
    t149 = cow_thiscall(g, COW_IMG(0x10154a40u), t147, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t150 = g->edx;
    if ((uint8_t)t149 == 0u)
    {
        eax = t149;
        edx = t150;
        goto L_100c020d;
    }
    edx = t150;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t151 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    t152 = g->edx;
    g->edx = t152;
    t153 = cow_thiscall(g, COW_IMG(0x10154f10u), sp0 - 0xecu, 0);
    t154 = g->ecx;
    t155 = g->edx;
    wr32(sp0 - 0x16cu, 3u);
    ecx = t154;
    edx = t155;
    ebx = t153;
    ebp = t151;
    loc_16c = 3u;
    goto L_100bfdb6;
L_100bfe07: ;
    eax = 0u;
L_100bfe10: ;
    wr32(sp0 - 0x16cu, ebp);
    wr32(sp0 - 0x170u, eax);
    t164 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x174u, t164);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x10259480u), self + 0x714u, edx, 3, t164, eax, ebp);
    t165 = g->edx;
    edx = t165;
    goto L_100bfe1e;
L_100bfe0b: ;
    eax = 1u;
    goto L_100bfe10;
L_100bfe41: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t102 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x132u);
    wr32(sp0 - 0x170u, sp0 - 0x134u);
    t103 = arg1 + t102 + 1u;
    wr32(sp0 - 0x174u, t103);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x132u;
    g->esp = sp0 - 0x16cu;
    t104 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t102, g->ecx, sp0 - 0x134u, 1, 3, self + 0x50u, t103, sp0 - 0x134u);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(sp0 - 0x170u, t103 + t104);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t105;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t103 + t104, g->ecx, t106, 1, 3, self + 0x50u, t103 + t104, sp0 - 0x132u);
    t107 = g->ecx;
    t108 = g->edx;
    t109 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t109);
    g->edx = t108;
    g->esp = sp0 - 0x174u;
    t110 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t109);
    t111 = g->edx;
    t112 = rd16(sp0 - 0x134u) != 1u;
    wr32(sp0 - 0x154u, t112);
    if ((uint32_t)(int16_t)rd16(sp0 - 0x132u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x132u);
        edx = t111;
        ebp = t110;
        loc_154 = t112;
        goto L_100bfeab;
    }
    edx = t111;
    loc_154 = t112;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t113 = g->edx;
    edx = t113;
    goto L_100c0297;
L_100bfeab: ;
    wr32(sp0 - 0x16cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t114 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t115 = g->edx;
    if (t114 == 0u)
    {
        eax = t114;
        edx = t115;
        goto L_100c020d;
    }
    eax = t114;
    edx = t115;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t116 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t117 = g->ecx;
    t118 = g->edx;
    if (t116 != 0u)
    {
        ecx = t117;
        ebx = t116;
        goto L_100bfedc;
    }
    edx = t118;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t119 = g->edx;
    edx = t119;
    goto L_100c0297;
L_100bfedc: ;
    wr32(sp0 - 0x16cu, 2u);
    wr32(sp0 - 0x170u, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    g->esp = sp0 - 0x168u;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), ecx, 2, sp0 - 0x158u, 2u);
    t120 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->eax = sp0 - 0x158u;
    t121 = rd32(sp0 - 0x158u);
    t122 = cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, t120, 1, sp0 - 0x158u);
    t123 = g->edx;
    wr32(sp0 - 0x16cu, ebx);
    t124 = rd32(sp0 - 0x154u);
    wr32(sp0 - 0x170u, t124);
    wr32(sp0 - 0x174u, ebp);
    cow_fastcall(g, COW_IMG(0x10259480u), self + 0x714u, t123, 3, ebp, t124, ebx);
    t125 = g->ecx;
    ecx = t125;
L_100bfff2: ;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    g->esp = sp0 - 0x168u;
    cow_cdecl(g, COW_IMG(0x100be690u), 1, sp0 - 0x158u);
    t126 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    t127 = rd32(sp0 - 0x158u);
    cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, t126, 1, sp0 - 0x158u);
    t128 = g->edx;
    edx = t128;
    goto L_100c0297;
L_100bff15: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x150u);
    wr32(sp0 - 0x174u, arg1 + 1u);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x150u;
    g->esp = sp0 - 0x16cu;
    t74 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    t75 = g->ecx;
    t76 = g->edx;
    t77 = arg1 + t74 + 1u;
    wr32(sp0 - 0x170u, t77);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t75;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t77, g->ecx, t76, 1, 3, self + 0x50u, t77, sp0 - 0x134u);
    t78 = g->ecx;
    t79 = g->edx;
    t80 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t80);
    g->edx = t79;
    g->esp = sp0 - 0x174u;
    t81 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t80);
    t82 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        edx = t82;
        ebx = t81;
        goto L_100bff5f;
    }
    edx = t82;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t83 = g->edx;
    edx = t83;
    goto L_100c0297;
L_100bff5f: ;
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x170u;
    t84 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0xecu, edx, 1, 0);
    t85 = g->edx;
    g->edx = t85;
    g->esp = sp0 - 0x168u;
    t86 = cow_thiscall(g, COW_IMG(0x10154a40u), t84, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t87 = g->edx;
    if ((uint8_t)t86 == 0u)
    {
        eax = t86;
        edx = t87;
        goto L_100c020d;
    }
    edx = t87;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t88 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    t89 = g->edx;
    g->edx = t89;
    t90 = cow_thiscall(g, COW_IMG(0x10154f10u), sp0 - 0xecu, 0);
    t91 = g->edx;
    if (t90 != 0u)
    {
        eax = t90;
        edx = t91;
        ebp = t88;
        wr32(sp0 - 0x16cu, 0u);
        loc_16c = 0u;
    }
    else
    {
        eax = t90;
        edx = t91;
        ebp = t88;
        wr32(sp0 - 0x16cu, 1u);
        loc_16c = 1u;
    }
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t92 = cow_fastcall(g, COW_IMG(0x102591a0u), self + 0x714u, edx, 1, loc_16c);
    t93 = g->edx;
    cow_fastcall(g, COW_IMG(0x102593b0u), self + 0x714u, t93, 0);
    t94 = g->ecx;
    wr32(sp0 - 0x16cu, 3u);
    wr32(sp0 - 0x170u, sp0 - 0x158u);
    g->edx = sp0 - 0x158u;
    cow_thiscall_cdecl(g, COW_IMG(0x100be680u), t94, 2, sp0 - 0x158u, 3u);
    t95 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x158u);
    t96 = rd32(sp0 - 0x158u);
    cow_fastcall(g, COW_IMG(0x10259910u), self + 0x714u, t95, 1, sp0 - 0x158u);
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    g->edx = rd32(ebp);
    t97 = rd32(ebp);
    cow_thiscall(g, rd32(t97 + 0x28u), ebp, 1, sp0 - 0x104u);
    t98 = g->edx;
    wr32(sp0 - 0x16cu, sp0 - 0x104u);
    g->edx = t98;
    g->esp = sp0 - 0x16cu;
    t99 = cow_thiscall(g, COW_IMG(0x10154f10u), sp0 - 0xecu, 0);
    t100 = g->edx;
    wr32(sp0 - 0x170u, t99);
    wr32(sp0 - 0x174u, ebx);
    g->esp = sp0 - 0x168u;
    cow_fastcall(g, COW_IMG(0x102596e0u), self + 0x714u, t100, 3, ebx, t99, sp0 - 0x104u);
    t101 = g->ecx;
    ecx = t101;
    goto L_100bfff2;
L_100c0015: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t59 = g->edx;
    if ((uint32_t)(int16_t)rd16(sp0 - 0x134u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x134u);
        edx = t59;
        goto L_100c0041;
    }
    edx = t59;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t60 = g->edx;
    edx = t60;
    goto L_100c0297;
L_100c0041: ;
    if ((uint8_t)ebx != 0x38u) goto L_100c0075;
    wr32(sp0 - 0x16cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t61 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
    t62 = g->edx;
    if (t61 == 0u)
    {
        eax = t61;
        edx = t62;
        goto L_100c020d;
    }
    eax = t61;
    edx = t62;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t63 = cow_thiscall(g, COW_IMG(0x1015b270u), eax, 0);
    t64 = g->edx;
    if (t63 != 0u)
    {
        eax = t63;
        goto L_100c0098;
    }
    edx = t64;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    cow_thiscall(g, COW_IMG(0x10259160u), self + 0x714u, 0);
    t65 = g->edx;
    edx = t65;
    goto L_100c0297;
L_100c0075: ;
    wr32(sp0 - 0x16cu, sp0 - 0xecu);
    wr32(sp0 - 0x170u, eax);
    g->esp = sp0 - 0x170u;
    t66 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, sp0 - 0xecu, edx, 1, 0);
    t67 = g->edx;
    g->edx = t67;
    g->esp = sp0 - 0x168u;
    t68 = cow_thiscall(g, COW_IMG(0x10154a40u), t66, 2, rd32(sp0 - 0x170u), sp0 - 0xecu);
    t69 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
        edx = t69;
        goto L_100c020d;
    }
    edx = t69;
    g->esp = sp0 - 0x168u;
    t70 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0xecu, 0);
    eax = t70;
L_100c0098: ;
    wr8(self + 0x6ecu, 1u);
    g->eax = eax;
    g->edx = rd32(eax);
    t71 = rd32(eax);
    g->esp = sp0 - 0x168u;
    t72 = cow_thiscall(g, rd32(t71 + 8u), eax, 0);
    t73 = g->edx;
    eax = t72;
    edx = t73;
L_100c0273: ;
    if (eax == 0u)
    {
        wr8(self + 0x6edu, 0u);
    }
    else
    {
        if (eax == 1u)
        {
            wr8(self + 0x6edu, 1u);
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                wr8(self + 0x6edu, 2u);
            }
        }
    }
    goto L_100c0297;
L_100c00ab: ;
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    t23 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0x150u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x150u);
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, sp0 - 0x14fu);
    t24 = arg1 + t23 + 1u;
    wr32(sp0 - 0x174u, t24);
    wr32(sp0 - 0x178u, self + 0x50u);
    g->ecx = sp0 - 0x134u;
    g->edx = sp0 - 0x14fu;
    g->esp = sp0 - 0x16cu;
    t25 = cow_call_regs(g, COW_IMG(0x100bdb80u), t23, g->ecx, g->edx, 1, 3, self + 0x50u, t24, sp0 - 0x14fu);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x170u, t24 + t25);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->ecx = t26;
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t24 + t25, g->ecx, t27, 1, 3, self + 0x50u, t24 + t25, sp0 - 0x134u);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = (uint32_t)(int8_t)rd8(sp0 - 0x150u);
    wr32(sp0 - 0x178u, t30);
    g->esp = sp0 - 0x174u;
    t31 = cow_cdecl(g, COW_IMG(0x100bf3a0u), 1, t30);
    t32 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t32);
    g->edx = rd32(self + 4u);
    t33 = rd32(self + 4u);
    g->esp = sp0 - 0x168u;
    t34 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t32);
    t35 = g->edx;
    if (t34 == 0u)
    {
        eax = t34;
        edx = t35;
        goto L_100c020d;
    }
    edx = t35;
    ebp = t31;
    edi = t34;
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, edi);
    wr32(sp0 - 0x174u, sp0 - 0x90u);
    g->eax = sp0 - 0x90u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t36 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0x90u);
    t37 = g->edx;
    g->edx = t37;
    g->esp = sp0 - 0x168u;
    t38 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x170u), 0u);
    t39 = g->edx;
    t40 = cow_call_regs(g, COW_IMG(0x10257b40u), t38, sp0 - 0x90u, t39, 1, 0);
    t41 = g->edx;
    if ((int8_t)rd8(sp0 - 0x14fu) >= 1)
    {
        edx = t41;
        ebx = t38;
        wr32(sp0 - 0x16cu, 2u);
        wr32(sp0 - 0x170u, edi);
        wr32(sp0 - 0x174u, sp0 - 0xb0u);
        g->eax = sp0 - 0xb0u;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t50 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xb0u);
        t51 = g->edx;
        g->edx = t51;
        g->esp = sp0 - 0x168u;
        t52 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x170u), 2u);
        t53 = g->edx;
        wr32(sp0 - 0x16cu, t52);
        wr32(sp0 - 0x170u, ebx);
        wr32(sp0 - 0x174u, 2u);
        g->edx = t53;
        t54 = cow_thiscall(g, COW_IMG(0x102586d0u), sp0 - 0x104u, 3, 2u, ebx, t52);
        t55 = g->edx;
        t56 = cow_call_regs(g, COW_IMG(0x10257b40u), t54, sp0 - 0xb0u, t55, 1, 0);
        t57 = g->edx;
        wr32(sp0 - 0x16cu, sp0 - 0x104u);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, ebp);
        cow_fastcall(g, COW_IMG(0x102596e0u), self + 0x714u, t57, 3, ebp, 0u, sp0 - 0x104u);
        t58 = g->edx;
        edx = t58;
    }
    else
    {
        eax = t40;
        edx = t41;
        ebx = t38;
        wr32(sp0 - 0x16cu, 1u);
        wr32(sp0 - 0x170u, edi);
        wr32(sp0 - 0x174u, sp0 - 0xc0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x170u;
        t42 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xc0u);
        t43 = g->edx;
        g->edx = t43;
        g->esp = sp0 - 0x168u;
        t44 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, rd32(sp0 - 0x170u), 1u);
        t45 = g->edx;
        wr32(sp0 - 0x16cu, t44);
        wr32(sp0 - 0x170u, ebx);
        wr32(sp0 - 0x174u, 1u);
        g->edx = t45;
        t46 = cow_thiscall(g, COW_IMG(0x102586d0u), sp0 - 0x104u, 3, 1u, ebx, t44);
        t47 = g->edx;
        t48 = cow_call_regs(g, COW_IMG(0x10257b40u), t46, sp0 - 0xc0u, t47, 1, 0);
        wr32(sp0 - 0x16cu, sp0 - 0x104u);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, ebp);
        cow_fastcall(g, COW_IMG(0x102596e0u), self + 0x714u, sp0 - 0x104u, 3, ebp, 0u, sp0 - 0x104u);
        t49 = g->edx;
        edx = t49;
    }
    goto L_100c0297;
L_100c01dc: ;
    wr32(sp0 - 0x16cu, sp0 - 0x134u);
    wr32(sp0 - 0x170u, arg1 + 1u);
    wr32(sp0 - 0x174u, self + 0x50u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0x134u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x134u);
    t14 = rd32(rd32(self + 4u) + (uint32_t)(int16_t)rd16(sp0 - 0x134u) * 4u + 0xc64u);
    wr32(sp0 - 0x16cu, t14);
    g->edx = rd32(self + 4u);
    t15 = rd32(self + 4u);
    t16 = cow_thiscall(g, COW_IMG(0x101c8150u), COW_IMG(0x10489948u), 1, t14);
    t17 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_100c0240;
    }
    eax = t16;
    edx = t17;
L_100c020d: ;
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t282 = cow_fastcall(g, COW_IMG(0x10258790u), sp0 - 0x114u, edx, 0);
    t283 = g->edx;
    t284 = cow_fastcall(g, COW_IMG(0x10258650u), sp0 - 0x104u, t283, 0);
    t285 = g->edx;
    t286 = cow_fastcall(g, COW_IMG(0x10154d70u), sp0 - 0xecu, t285, 0);
    t287 = g->edx;
    t288 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x140u, t287, 0);
    g->ebx = rd32(sp0 - 0x15cu);
    g->esi = rd32(sp0 - 0x164u);
    g->edi = rd32(sp0 - 0x168u);
    g->ebp = rd32(sp0 - 0x160u);
    return t288 & 0xffffff00u;
L_100c0240: ;
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, eax);
    wr32(sp0 - 0x174u, sp0 - 0xa0u);
    g->eax = sp0 - 0xa0u;
    g->edx = edx;
    g->esp = sp0 - 0x170u;
    t18 = cow_thiscall(g, COW_IMG(0x101c8200u), COW_IMG(0x10489948u), 1, sp0 - 0xa0u);
    t19 = g->edx;
    g->edx = t19;
    g->esp = sp0 - 0x168u;
    t20 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, rd32(sp0 - 0x170u), 0u);
    t21 = g->edx;
    cow_call_regs(g, COW_IMG(0x10257b40u), t20, sp0 - 0xa0u, t21, 1, 0);
    t22 = g->edx;
    wr8(self + 0x6ecu, 1u);
    eax = t20;
    edx = t22;
    goto L_100c0273;
L_100c02f1: ;
    t369 = rd32(self + 0x704u);
    wr32(self + 0x6f0u, t369);
    wr32(self + 0x704u, self + 0x110u);
    edx = self + 0x110u;
    goto L_100c0309;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bf3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100bf3e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
