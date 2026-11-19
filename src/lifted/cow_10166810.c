/* f_0x10166810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10166810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016681du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1016681d;
    case 0x10166829u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10166829;
    case 0x10166833u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10166833;
    case 0x1016683fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1016683f;
    case 0x10166849u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10166849;
    case 0x10166855u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10166855;
    case 0x1016685fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1016685f;
    case 0x1016686bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1016686b;
    case 0x10166875u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10166875;
    case 0x10166881u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10166881;
    case 0x1016688cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016688c;
    case 0x101668a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668a2;
    case 0x101668acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668ac;
    case 0x101668b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668b8;
    case 0x101668c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668c2;
    case 0x101668d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668d8;
    case 0x101668e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668e2;
    case 0x101668eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668ee;
    case 0x101668f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101668f8;
    case 0x10166904u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166904;
    case 0x1016690eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016690e;
    case 0x1016691au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016691a;
    case 0x10166924u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166924;
    case 0x10166930u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166930;
    case 0x1016693au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016693a;
    case 0x10166946u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166946;
    case 0x10166950u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166950;
    case 0x1016695cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016695c;
    case 0x10166965u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166965;
    case 0x10166974u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166974;
    case 0x1016697eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016697e;
    case 0x10166994u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166994;
    case 0x1016699eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016699e;
    case 0x101669b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101669b4;
    case 0x101669beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101669be;
    case 0x101669d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101669d4;
    case 0x101669deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101669de;
    case 0x101669eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101669ea;
    case 0x101669f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101669f4;
    case 0x10166a00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a00;
    case 0x10166a0au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a0a;
    case 0x10166a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a16;
    case 0x10166a20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a20;
    case 0x10166a2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a2c;
    case 0x10166a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a36;
    case 0x10166a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a42;
    case 0x10166a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a4c;
    case 0x10166a58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a58;
    case 0x10166a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a62;
    case 0x10166a78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a78;
    case 0x10166a82u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a82;
    case 0x10166a8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a8e;
    case 0x10166a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166a98;
    case 0x10166aa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166aa4;
    case 0x10166aaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166aae;
    case 0x10166abau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166aba;
    case 0x10166ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ac4;
    case 0x10166ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ad0;
    case 0x10166adau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ada;
    case 0x10166ae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ae6;
    case 0x10166af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166af0;
    case 0x10166afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166afc;
    case 0x10166b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b06;
    case 0x10166b12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b12;
    case 0x10166b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b1c;
    case 0x10166b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b28;
    case 0x10166b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b32;
    case 0x10166b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b3e;
    case 0x10166b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b48;
    case 0x10166b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b54;
    case 0x10166b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b5e;
    case 0x10166b6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b6a;
    case 0x10166b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b74;
    case 0x10166b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b80;
    case 0x10166b8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b8a;
    case 0x10166b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166b96;
    case 0x10166ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ba0;
    case 0x10166bacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bac;
    case 0x10166bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bb6;
    case 0x10166bc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bc2;
    case 0x10166bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bcc;
    case 0x10166bd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bd8;
    case 0x10166be2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166be2;
    case 0x10166beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bee;
    case 0x10166bf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166bf8;
    case 0x10166c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c04;
    case 0x10166c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c0e;
    case 0x10166c1au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c1a;
    case 0x10166c24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c24;
    case 0x10166c30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c30;
    case 0x10166c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c3a;
    case 0x10166c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c46;
    case 0x10166c50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c50;
    case 0x10166c5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c5c;
    case 0x10166c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c66;
    case 0x10166c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c72;
    case 0x10166c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c7c;
    case 0x10166c88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c88;
    case 0x10166c92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c92;
    case 0x10166c9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166c9e;
    case 0x10166ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ca8;
    case 0x10166cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166cb4;
    case 0x10166cbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166cbe;
    case 0x10166ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166cca;
    case 0x10166cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166cd4;
    case 0x10166ce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ce0;
    case 0x10166ceau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166cea;
    case 0x10166cf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166cf6;
    case 0x10166d00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d00;
    case 0x10166d0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d0c;
    case 0x10166d16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d16;
    case 0x10166d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d22;
    case 0x10166d2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d2c;
    case 0x10166d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d38;
    case 0x10166d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d42;
    case 0x10166d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d4e;
    case 0x10166d58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d58;
    case 0x10166d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d64;
    case 0x10166d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d6e;
    case 0x10166d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d7a;
    case 0x10166d84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d84;
    case 0x10166d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d90;
    case 0x10166d9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166d9a;
    case 0x10166da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166da6;
    case 0x10166db0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166db0;
    case 0x10166dc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166dc6;
    case 0x10166dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166dd0;
    case 0x10166de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166de6;
    case 0x10166df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166df0;
    case 0x10166e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e06;
    case 0x10166e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e10;
    case 0x10166e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e26;
    case 0x10166e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e30;
    case 0x10166e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e46;
    case 0x10166e50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e50;
    case 0x10166e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e66;
    case 0x10166e70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e70;
    case 0x10166e86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e86;
    case 0x10166e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166e90;
    case 0x10166ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ea6;
    case 0x10166eb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166eb0;
    case 0x10166ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ec6;
    case 0x10166ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ed0;
    case 0x10166ee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ee6;
    case 0x10166ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ef0;
    case 0x10166f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f06;
    case 0x10166f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f10;
    case 0x10166f26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f26;
    case 0x10166f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f30;
    case 0x10166f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f46;
    case 0x10166f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f50;
    case 0x10166f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f66;
    case 0x10166f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f70;
    case 0x10166f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f86;
    case 0x10166f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166f90;
    case 0x10166fa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166fa6;
    case 0x10166fb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166fb0;
    case 0x10166fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166fc6;
    case 0x10166fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166fd0;
    case 0x10166fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166fe6;
    case 0x10166ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10166ff0;
    case 0x10167006u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167006;
    case 0x10167010u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167010;
    case 0x1016701cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016701c;
    case 0x10167026u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167026;
    case 0x10167032u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167032;
    case 0x1016703cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016703c;
    case 0x10167048u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167048;
    case 0x10167052u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167052;
    case 0x1016705eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016705e;
    case 0x10167068u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167068;
    case 0x10167074u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167074;
    case 0x1016707eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016707e;
    case 0x1016708au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016708a;
    case 0x10167094u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167094;
    case 0x101670a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670a0;
    case 0x101670aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670aa;
    case 0x101670b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670b6;
    case 0x101670c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670c0;
    case 0x101670ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670cc;
    case 0x101670d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670d6;
    case 0x101670e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670e2;
    case 0x101670ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670ec;
    case 0x101670f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101670f8;
    case 0x10167102u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167102;
    case 0x1016710eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016710e;
    case 0x10167118u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167118;
    case 0x10167124u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167124;
    case 0x1016712eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016712e;
    case 0x1016713au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016713a;
    case 0x10167144u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10167144;
    case 0x1016715au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1016715a;
    case 0x10167165u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10167165;
    case 0x10167171u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10167171;
    case 0x1016717bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1016717b;
    case 0x10167187u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10167187;
    case 0x1016719au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1016719a;
    case 0x101671a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101671a1;
    case 0x101671b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101671b5;
    case 0x101671c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101671c2;
    default: break;
    }
#endif

    COW_AT(10166810)
    if (rd32(COW_IMG(0x10578478u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578478u));
    COW_AT(1016681d)
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x10578478u), 0u);
        eax = t2;
        edx = t3;
    }
    COW_AT(10166829)
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
    COW_AT(10166833)
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x105781f8u), 0u);
        eax = t5;
        edx = t6;
    }
    COW_AT(1016683f)
    if (rd32(COW_IMG(0x105781fcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781fcu));
    COW_AT(10166849)
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x105781fcu), 0u);
        eax = t8;
        edx = t9;
    }
    COW_AT(10166855)
    if (rd32(COW_IMG(0x1057847cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057847cu));
    COW_AT(1016685f)
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x1057847cu), 0u);
        eax = t11;
        edx = t12;
    }
    COW_AT(1016686b)
    if (rd32(COW_IMG(0x10578480u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578480u));
    COW_AT(10166875)
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x10578480u), 0u);
        eax = t14;
        edx = t15;
    }
    COW_AT(10166881)
    if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(1016688c)
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t16 = cow_stdcall(g, COW_IMG(0x10124590u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        t19 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t17, t18, 1, 1, esi);
        t20 = g->edx;
        wr32(COW_IMG(0x104e1d4cu), 0u);
        eax = t19;
        edx = t20;
    }
    COW_AT(101668a2)
    if (rd32(COW_IMG(0x105781a8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781a8u));
    COW_AT(101668ac)
        g->eax = eax;
        g->edx = rd32(ecx);
        t21 = rd32(ecx);
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, rd32(t21), ecx, 1, 1u);
        t23 = g->edx;
        wr32(COW_IMG(0x105781a8u), 0u);
        eax = t22;
        edx = t23;
    }
    COW_AT(101668b8)
    if (rd32(COW_IMG(0x105781acu)) != 0u)
    {
        esi = rd32(COW_IMG(0x105781acu));
    COW_AT(101668c2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t24 = cow_thiscall(g, COW_IMG(0x101303c0u), esi, 0);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t25, t26, 1, 1, esi);
        t28 = g->edx;
        wr32(COW_IMG(0x105781acu), 0u);
        eax = t27;
        edx = t28;
    }
    COW_AT(101668d8)
    if (rd32(COW_IMG(0x1057846cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057846cu));
    COW_AT(101668e2)
        g->eax = rd32(ecx);
        g->edx = edx;
        t29 = rd32(ecx);
        g->esp = sp0 - 8u;
        t30 = cow_thiscall(g, rd32(t29), ecx, 1, 1u);
        t31 = g->edx;
        wr32(COW_IMG(0x1057846cu), 0u);
        eax = t30;
        edx = t31;
    }
    COW_AT(101668ee)
    if (rd32(COW_IMG(0x10578240u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578240u));
    COW_AT(101668f8)
        g->eax = eax;
        g->edx = rd32(ecx);
        t32 = rd32(ecx);
        g->esp = sp0 - 8u;
        t33 = cow_thiscall(g, rd32(t32), ecx, 1, 1u);
        t34 = g->edx;
        wr32(COW_IMG(0x10578240u), 0u);
        eax = t33;
        edx = t34;
    }
    COW_AT(10166904)
    if (rd32(COW_IMG(0x10578244u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578244u));
    COW_AT(1016690e)
        g->eax = rd32(ecx);
        g->edx = edx;
        t35 = rd32(ecx);
        g->esp = sp0 - 8u;
        t36 = cow_thiscall(g, rd32(t35), ecx, 1, 1u);
        t37 = g->edx;
        wr32(COW_IMG(0x10578244u), 0u);
        eax = t36;
        edx = t37;
    }
    COW_AT(1016691a)
    if (rd32(COW_IMG(0x105781b8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781b8u));
    COW_AT(10166924)
        g->eax = eax;
        g->edx = rd32(ecx);
        t38 = rd32(ecx);
        g->esp = sp0 - 8u;
        t39 = cow_thiscall(g, rd32(t38), ecx, 1, 1u);
        t40 = g->edx;
        wr32(COW_IMG(0x105781b8u), 0u);
        eax = t39;
        edx = t40;
    }
    COW_AT(10166930)
    if (rd32(COW_IMG(0x105781bcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781bcu));
    COW_AT(1016693a)
        g->eax = rd32(ecx);
        g->edx = edx;
        t41 = rd32(ecx);
        g->esp = sp0 - 8u;
        t42 = cow_thiscall(g, rd32(t41), ecx, 1, 1u);
        t43 = g->edx;
        wr32(COW_IMG(0x105781bcu), 0u);
        eax = t42;
        edx = t43;
    }
    COW_AT(10166946)
    if (rd32(COW_IMG(0x10578170u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578170u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578170u));
    COW_AT(10166950)
        g->edx = rd32(ecx);
        t44 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t44), ecx, 1, 1u);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(COW_IMG(0x10578170u), 0u);
        ecx = t45;
        edx = t46;
    }
    COW_AT(1016695c)
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(10166965)
        g->eax = eax;
        g->esp = sp0 - 8u;
        t47 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t48 = g->edx;
        wr32(COW_IMG(0x1057876cu), 0u);
        eax = t47;
        edx = t48;
    }
    COW_AT(10166974)
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10621944u));
    COW_AT(1016697e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t49 = cow_thiscall(g, COW_IMG(0x101630b0u), esi, 0);
        t50 = g->ecx;
        t51 = g->edx;
        t52 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t50, t51, 1, 1, esi);
        t53 = g->edx;
        wr32(COW_IMG(0x10621944u), 0u);
        eax = t52;
        edx = t53;
    }
    COW_AT(10166994)
    if (rd32(COW_IMG(0x104e2150u)) != 0u)
    {
        esi = rd32(COW_IMG(0x104e2150u));
    COW_AT(1016699e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t54 = cow_thiscall(g, COW_IMG(0x101267c0u), esi, 0);
        t55 = g->ecx;
        t56 = g->edx;
        t57 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t55, t56, 1, 1, esi);
        t58 = g->edx;
        wr32(COW_IMG(0x104e2150u), 0u);
        eax = t57;
        edx = t58;
    }
    COW_AT(101669b4)
    if (rd32(COW_IMG(0x104e2154u)) != 0u)
    {
        esi = rd32(COW_IMG(0x104e2154u));
    COW_AT(101669be)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t59 = cow_thiscall(g, COW_IMG(0x101267c0u), esi, 0);
        t60 = g->ecx;
        t61 = g->edx;
        t62 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t60, t61, 1, 1, esi);
        t63 = g->edx;
        wr32(COW_IMG(0x104e2154u), 0u);
        eax = t62;
        edx = t63;
    }
    COW_AT(101669d4)
    if (rd32(COW_IMG(0x105781ccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781ccu));
    COW_AT(101669de)
        g->eax = rd32(ecx);
        g->edx = edx;
        t64 = rd32(ecx);
        g->esp = sp0 - 8u;
        t65 = cow_thiscall(g, rd32(t64), ecx, 1, 1u);
        t66 = g->edx;
        wr32(COW_IMG(0x105781ccu), 0u);
        eax = t65;
        edx = t66;
    }
    COW_AT(101669ea)
    if (rd32(COW_IMG(0x105781d0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781d0u));
    COW_AT(101669f4)
        g->eax = eax;
        g->edx = rd32(ecx);
        t67 = rd32(ecx);
        g->esp = sp0 - 8u;
        t68 = cow_thiscall(g, rd32(t67), ecx, 1, 1u);
        t69 = g->edx;
        wr32(COW_IMG(0x105781d0u), 0u);
        eax = t68;
        edx = t69;
    }
    COW_AT(10166a00)
    if (rd32(COW_IMG(0x105781d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781d4u));
    COW_AT(10166a0a)
        g->eax = rd32(ecx);
        g->edx = edx;
        t70 = rd32(ecx);
        g->esp = sp0 - 8u;
        t71 = cow_thiscall(g, rd32(t70), ecx, 1, 1u);
        t72 = g->edx;
        wr32(COW_IMG(0x105781d4u), 0u);
        eax = t71;
        edx = t72;
    }
    COW_AT(10166a16)
    if (rd32(COW_IMG(0x105781d8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781d8u));
    COW_AT(10166a20)
        g->eax = eax;
        g->edx = rd32(ecx);
        t73 = rd32(ecx);
        g->esp = sp0 - 8u;
        t74 = cow_thiscall(g, rd32(t73), ecx, 1, 1u);
        t75 = g->edx;
        wr32(COW_IMG(0x105781d8u), 0u);
        eax = t74;
        edx = t75;
    }
    COW_AT(10166a2c)
    if (rd32(COW_IMG(0x105781e4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781e4u));
    COW_AT(10166a36)
        g->eax = rd32(ecx);
        g->edx = edx;
        t76 = rd32(ecx);
        g->esp = sp0 - 8u;
        t77 = cow_thiscall(g, rd32(t76), ecx, 1, 1u);
        t78 = g->edx;
        wr32(COW_IMG(0x105781e4u), 0u);
        eax = t77;
        edx = t78;
    }
    COW_AT(10166a42)
    if (rd32(COW_IMG(0x105781e0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781e0u));
    COW_AT(10166a4c)
        g->eax = eax;
        g->edx = rd32(ecx);
        t79 = rd32(ecx);
        g->esp = sp0 - 8u;
        t80 = cow_thiscall(g, rd32(t79), ecx, 1, 1u);
        t81 = g->edx;
        wr32(COW_IMG(0x105781e0u), 0u);
        eax = t80;
        edx = t81;
    }
    COW_AT(10166a58)
    if (rd32(COW_IMG(0x10621808u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10621808u));
    COW_AT(10166a62)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t82 = cow_thiscall(g, COW_IMG(0x1015b890u), esi, 0);
        t83 = g->ecx;
        t84 = g->edx;
        t85 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t83, t84, 1, 1, esi);
        t86 = g->edx;
        wr32(COW_IMG(0x10621808u), 0u);
        eax = t85;
        edx = t86;
    }
    COW_AT(10166a78)
    if (rd32(COW_IMG(0x10578204u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578204u));
    COW_AT(10166a82)
        g->eax = rd32(ecx);
        g->edx = edx;
        t87 = rd32(ecx);
        g->esp = sp0 - 8u;
        t88 = cow_thiscall(g, rd32(t87), ecx, 1, 1u);
        t89 = g->edx;
        wr32(COW_IMG(0x10578204u), 0u);
        eax = t88;
        edx = t89;
    }
    COW_AT(10166a8e)
    if (rd32(COW_IMG(0x10578208u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578208u));
    COW_AT(10166a98)
        g->eax = eax;
        g->edx = rd32(ecx);
        t90 = rd32(ecx);
        g->esp = sp0 - 8u;
        t91 = cow_thiscall(g, rd32(t90), ecx, 1, 1u);
        t92 = g->edx;
        wr32(COW_IMG(0x10578208u), 0u);
        eax = t91;
        edx = t92;
    }
    COW_AT(10166aa4)
    if (rd32(COW_IMG(0x1057820cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057820cu));
    COW_AT(10166aae)
        g->eax = rd32(ecx);
        g->edx = edx;
        t93 = rd32(ecx);
        g->esp = sp0 - 8u;
        t94 = cow_thiscall(g, rd32(t93), ecx, 1, 1u);
        t95 = g->edx;
        wr32(COW_IMG(0x1057820cu), 0u);
        eax = t94;
        edx = t95;
    }
    COW_AT(10166aba)
    if (rd32(COW_IMG(0x1057823cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057823cu));
    COW_AT(10166ac4)
        g->eax = eax;
        g->edx = rd32(ecx);
        t96 = rd32(ecx);
        g->esp = sp0 - 8u;
        t97 = cow_thiscall(g, rd32(t96), ecx, 1, 1u);
        t98 = g->edx;
        wr32(COW_IMG(0x1057823cu), 0u);
        eax = t97;
        edx = t98;
    }
    COW_AT(10166ad0)
    if (rd32(COW_IMG(0x105783e4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105783e4u));
    COW_AT(10166ada)
        g->eax = rd32(ecx);
        g->edx = edx;
        t99 = rd32(ecx);
        g->esp = sp0 - 8u;
        t100 = cow_thiscall(g, rd32(t99), ecx, 1, 1u);
        t101 = g->edx;
        wr32(COW_IMG(0x105783e4u), 0u);
        eax = t100;
        edx = t101;
    }
    COW_AT(10166ae6)
    if (rd32(COW_IMG(0x10578248u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578248u));
    COW_AT(10166af0)
        g->eax = eax;
        g->edx = rd32(ecx);
        t102 = rd32(ecx);
        g->esp = sp0 - 8u;
        t103 = cow_thiscall(g, rd32(t102), ecx, 1, 1u);
        t104 = g->edx;
        wr32(COW_IMG(0x10578248u), 0u);
        eax = t103;
        edx = t104;
    }
    COW_AT(10166afc)
    if (rd32(COW_IMG(0x10578484u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578484u));
    COW_AT(10166b06)
        g->eax = rd32(ecx);
        g->edx = edx;
        t105 = rd32(ecx);
        g->esp = sp0 - 8u;
        t106 = cow_thiscall(g, rd32(t105), ecx, 1, 1u);
        t107 = g->edx;
        wr32(COW_IMG(0x10578484u), 0u);
        eax = t106;
        edx = t107;
    }
    COW_AT(10166b12)
    if (rd32(COW_IMG(0x105781e8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781e8u));
    COW_AT(10166b1c)
        g->eax = eax;
        g->edx = rd32(ecx);
        t108 = rd32(ecx);
        g->esp = sp0 - 8u;
        t109 = cow_thiscall(g, rd32(t108), ecx, 1, 1u);
        t110 = g->edx;
        wr32(COW_IMG(0x105781e8u), 0u);
        eax = t109;
        edx = t110;
    }
    COW_AT(10166b28)
    if (rd32(COW_IMG(0x1057818cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057818cu));
    COW_AT(10166b32)
        g->eax = rd32(ecx);
        g->edx = edx;
        t111 = rd32(ecx);
        g->esp = sp0 - 8u;
        t112 = cow_thiscall(g, rd32(t111), ecx, 1, 1u);
        t113 = g->edx;
        wr32(COW_IMG(0x1057818cu), 0u);
        eax = t112;
        edx = t113;
    }
    COW_AT(10166b3e)
    if (rd32(COW_IMG(0x10578468u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578468u));
    COW_AT(10166b48)
        g->eax = eax;
        g->edx = rd32(ecx);
        t114 = rd32(ecx);
        g->esp = sp0 - 8u;
        t115 = cow_thiscall(g, rd32(t114), ecx, 1, 1u);
        t116 = g->edx;
        wr32(COW_IMG(0x10578468u), 0u);
        eax = t115;
        edx = t116;
    }
    COW_AT(10166b54)
    if (rd32(COW_IMG(0x105782b4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105782b4u));
    COW_AT(10166b5e)
        g->eax = rd32(ecx);
        g->edx = edx;
        t117 = rd32(ecx);
        g->esp = sp0 - 8u;
        t118 = cow_thiscall(g, rd32(t117), ecx, 1, 1u);
        t119 = g->edx;
        wr32(COW_IMG(0x105782b4u), 0u);
        eax = t118;
        edx = t119;
    }
    COW_AT(10166b6a)
    if (rd32(COW_IMG(0x10669140u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669140u));
    COW_AT(10166b74)
        g->eax = eax;
        g->edx = rd32(ecx);
        t120 = rd32(ecx);
        g->esp = sp0 - 8u;
        t121 = cow_thiscall(g, rd32(t120), ecx, 1, 1u);
        t122 = g->edx;
        wr32(COW_IMG(0x10669140u), 0u);
        eax = t121;
        edx = t122;
    }
    COW_AT(10166b80)
    if (rd32(COW_IMG(0x10578198u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578198u));
    COW_AT(10166b8a)
        g->eax = rd32(ecx);
        g->edx = edx;
        t123 = rd32(ecx);
        g->esp = sp0 - 8u;
        t124 = cow_thiscall(g, rd32(t123), ecx, 1, 1u);
        t125 = g->edx;
        wr32(COW_IMG(0x10578198u), 0u);
        eax = t124;
        edx = t125;
    }
    COW_AT(10166b96)
    if (rd32(COW_IMG(0x10578450u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578450u));
    COW_AT(10166ba0)
        g->eax = eax;
        g->edx = rd32(ecx);
        t126 = rd32(ecx);
        g->esp = sp0 - 8u;
        t127 = cow_thiscall(g, rd32(t126), ecx, 1, 1u);
        t128 = g->edx;
        wr32(COW_IMG(0x10578450u), 0u);
        eax = t127;
        edx = t128;
    }
    COW_AT(10166bac)
    if (rd32(COW_IMG(0x10578470u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578470u));
    COW_AT(10166bb6)
        g->eax = rd32(ecx);
        g->edx = edx;
        t129 = rd32(ecx);
        g->esp = sp0 - 8u;
        t130 = cow_thiscall(g, rd32(t129), ecx, 1, 1u);
        t131 = g->edx;
        wr32(COW_IMG(0x10578470u), 0u);
        eax = t130;
        edx = t131;
    }
    COW_AT(10166bc2)
    if (rd32(COW_IMG(0x10578200u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578200u));
    COW_AT(10166bcc)
        g->eax = eax;
        g->edx = rd32(ecx);
        t132 = rd32(ecx);
        g->esp = sp0 - 8u;
        t133 = cow_thiscall(g, rd32(t132), ecx, 1, 1u);
        t134 = g->edx;
        wr32(COW_IMG(0x10578200u), 0u);
        eax = t133;
        edx = t134;
    }
    COW_AT(10166bd8)
    if (rd32(COW_IMG(0x1057824cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057824cu));
    COW_AT(10166be2)
        g->eax = rd32(ecx);
        g->edx = edx;
        t135 = rd32(ecx);
        g->esp = sp0 - 8u;
        t136 = cow_thiscall(g, rd32(t135), ecx, 1, 1u);
        t137 = g->edx;
        wr32(COW_IMG(0x1057824cu), 0u);
        eax = t136;
        edx = t137;
    }
    COW_AT(10166bee)
    if (rd32(COW_IMG(0x10578214u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578214u));
    COW_AT(10166bf8)
        g->eax = eax;
        g->edx = rd32(ecx);
        t138 = rd32(ecx);
        g->esp = sp0 - 8u;
        t139 = cow_thiscall(g, rd32(t138), ecx, 1, 1u);
        t140 = g->edx;
        wr32(COW_IMG(0x10578214u), 0u);
        eax = t139;
        edx = t140;
    }
    COW_AT(10166c04)
    if (rd32(COW_IMG(0x10578218u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578218u));
    COW_AT(10166c0e)
        g->eax = rd32(ecx);
        g->edx = edx;
        t141 = rd32(ecx);
        g->esp = sp0 - 8u;
        t142 = cow_thiscall(g, rd32(t141), ecx, 1, 1u);
        t143 = g->edx;
        wr32(COW_IMG(0x10578218u), 0u);
        eax = t142;
        edx = t143;
    }
    COW_AT(10166c1a)
    if (rd32(COW_IMG(0x1057821cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057821cu));
    COW_AT(10166c24)
        g->eax = eax;
        g->edx = rd32(ecx);
        t144 = rd32(ecx);
        g->esp = sp0 - 8u;
        t145 = cow_thiscall(g, rd32(t144), ecx, 1, 1u);
        t146 = g->edx;
        wr32(COW_IMG(0x1057821cu), 0u);
        eax = t145;
        edx = t146;
    }
    COW_AT(10166c30)
    if (rd32(COW_IMG(0x105781f0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f0u));
    COW_AT(10166c3a)
        g->eax = rd32(ecx);
        g->edx = edx;
        t147 = rd32(ecx);
        g->esp = sp0 - 8u;
        t148 = cow_thiscall(g, rd32(t147), ecx, 1, 1u);
        t149 = g->edx;
        wr32(COW_IMG(0x105781f0u), 0u);
        eax = t148;
        edx = t149;
    }
    COW_AT(10166c46)
    if (rd32(COW_IMG(0x1062193cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1062193cu));
    COW_AT(10166c50)
        g->eax = eax;
        g->edx = rd32(ecx);
        t150 = rd32(ecx);
        g->esp = sp0 - 8u;
        t151 = cow_thiscall(g, rd32(t150), ecx, 1, 1u);
        t152 = g->edx;
        wr32(COW_IMG(0x1062193cu), 0u);
        eax = t151;
        edx = t152;
    }
    COW_AT(10166c5c)
    if (rd32(COW_IMG(0x10621940u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10621940u));
    COW_AT(10166c66)
        g->eax = rd32(ecx);
        g->edx = edx;
        t153 = rd32(ecx);
        g->esp = sp0 - 8u;
        t154 = cow_thiscall(g, rd32(t153), ecx, 1, 1u);
        t155 = g->edx;
        wr32(COW_IMG(0x10621940u), 0u);
        eax = t154;
        edx = t155;
    }
    COW_AT(10166c72)
    if (rd32(COW_IMG(0x10578190u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578190u));
    COW_AT(10166c7c)
        g->eax = eax;
        g->edx = rd32(ecx);
        t156 = rd32(ecx);
        g->esp = sp0 - 8u;
        t157 = cow_thiscall(g, rd32(t156), ecx, 1, 1u);
        t158 = g->edx;
        wr32(COW_IMG(0x10578190u), 0u);
        eax = t157;
        edx = t158;
    }
    COW_AT(10166c88)
    if (rd32(COW_IMG(0x10578224u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578224u));
    COW_AT(10166c92)
        g->eax = rd32(ecx);
        g->edx = edx;
        t159 = rd32(ecx);
        g->esp = sp0 - 8u;
        t160 = cow_thiscall(g, rd32(t159), ecx, 1, 1u);
        t161 = g->edx;
        wr32(COW_IMG(0x10578224u), 0u);
        eax = t160;
        edx = t161;
    }
    COW_AT(10166c9e)
    if (rd32(COW_IMG(0x10578228u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578228u));
    COW_AT(10166ca8)
        g->eax = eax;
        g->edx = rd32(ecx);
        t162 = rd32(ecx);
        g->esp = sp0 - 8u;
        t163 = cow_thiscall(g, rd32(t162), ecx, 1, 1u);
        t164 = g->edx;
        wr32(COW_IMG(0x10578228u), 0u);
        eax = t163;
        edx = t164;
    }
    COW_AT(10166cb4)
    if (rd32(COW_IMG(0x1057822cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057822cu));
    COW_AT(10166cbe)
        g->eax = rd32(ecx);
        g->edx = edx;
        t165 = rd32(ecx);
        g->esp = sp0 - 8u;
        t166 = cow_thiscall(g, rd32(t165), ecx, 1, 1u);
        t167 = g->edx;
        wr32(COW_IMG(0x1057822cu), 0u);
        eax = t166;
        edx = t167;
    }
    COW_AT(10166cca)
    if (rd32(COW_IMG(0x10578230u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578230u));
    COW_AT(10166cd4)
        g->eax = eax;
        g->edx = rd32(ecx);
        t168 = rd32(ecx);
        g->esp = sp0 - 8u;
        t169 = cow_thiscall(g, rd32(t168), ecx, 1, 1u);
        t170 = g->edx;
        wr32(COW_IMG(0x10578230u), 0u);
        eax = t169;
        edx = t170;
    }
    COW_AT(10166ce0)
    if (rd32(COW_IMG(0x105781ecu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781ecu));
    COW_AT(10166cea)
        g->eax = rd32(ecx);
        g->edx = edx;
        t171 = rd32(ecx);
        g->esp = sp0 - 8u;
        t172 = cow_thiscall(g, rd32(t171), ecx, 1, 1u);
        t173 = g->edx;
        wr32(COW_IMG(0x105781ecu), 0u);
        eax = t172;
        edx = t173;
    }
    COW_AT(10166cf6)
    if (rd32(COW_IMG(0x1057817cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057817cu));
    COW_AT(10166d00)
        g->eax = eax;
        g->edx = rd32(ecx);
        t174 = rd32(ecx);
        g->esp = sp0 - 8u;
        t175 = cow_thiscall(g, rd32(t174), ecx, 1, 1u);
        t176 = g->edx;
        wr32(COW_IMG(0x1057817cu), 0u);
        eax = t175;
        edx = t176;
    }
    COW_AT(10166d0c)
    if (rd32(COW_IMG(0x10578180u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578180u));
    COW_AT(10166d16)
        g->eax = rd32(ecx);
        g->edx = edx;
        t177 = rd32(ecx);
        g->esp = sp0 - 8u;
        t178 = cow_thiscall(g, rd32(t177), ecx, 1, 1u);
        t179 = g->edx;
        wr32(COW_IMG(0x10578180u), 0u);
        eax = t178;
        edx = t179;
    }
    COW_AT(10166d22)
    if (rd32(COW_IMG(0x10578184u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578184u));
    COW_AT(10166d2c)
        g->eax = eax;
        g->edx = rd32(ecx);
        t180 = rd32(ecx);
        g->esp = sp0 - 8u;
        t181 = cow_thiscall(g, rd32(t180), ecx, 1, 1u);
        t182 = g->edx;
        wr32(COW_IMG(0x10578184u), 0u);
        eax = t181;
        edx = t182;
    }
    COW_AT(10166d38)
    if (rd32(COW_IMG(0x10578188u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578188u));
    COW_AT(10166d42)
        g->eax = rd32(ecx);
        g->edx = edx;
        t183 = rd32(ecx);
        g->esp = sp0 - 8u;
        t184 = cow_thiscall(g, rd32(t183), ecx, 1, 1u);
        t185 = g->edx;
        wr32(COW_IMG(0x10578188u), 0u);
        eax = t184;
        edx = t185;
    }
    COW_AT(10166d4e)
    if (rd32(COW_IMG(0x10578194u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578194u));
    COW_AT(10166d58)
        g->eax = eax;
        g->edx = rd32(ecx);
        t186 = rd32(ecx);
        g->esp = sp0 - 8u;
        t187 = cow_thiscall(g, rd32(t186), ecx, 1, 1u);
        t188 = g->edx;
        wr32(COW_IMG(0x10578194u), 0u);
        eax = t187;
        edx = t188;
    }
    COW_AT(10166d64)
    if (rd32(COW_IMG(0x10578474u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578474u));
    COW_AT(10166d6e)
        g->eax = rd32(ecx);
        g->edx = edx;
        t189 = rd32(ecx);
        g->esp = sp0 - 8u;
        t190 = cow_thiscall(g, rd32(t189), ecx, 1, 1u);
        t191 = g->edx;
        wr32(COW_IMG(0x10578474u), 0u);
        eax = t190;
        edx = t191;
    }
    COW_AT(10166d7a)
    if (rd32(COW_IMG(0x10578458u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578458u));
    COW_AT(10166d84)
        g->eax = eax;
        g->edx = rd32(ecx);
        t192 = rd32(ecx);
        g->esp = sp0 - 8u;
        t193 = cow_thiscall(g, rd32(t192), ecx, 1, 1u);
        t194 = g->edx;
        wr32(COW_IMG(0x10578458u), 0u);
        eax = t193;
        edx = t194;
    }
    COW_AT(10166d90)
    if (rd32(COW_IMG(0x10578768u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578768u));
    COW_AT(10166d9a)
        g->eax = rd32(ecx);
        g->edx = edx;
        t195 = rd32(ecx);
        g->esp = sp0 - 8u;
        t196 = cow_thiscall(g, rd32(t195), ecx, 1, 1u);
        t197 = g->edx;
        wr32(COW_IMG(0x10578768u), 0u);
        eax = t196;
        edx = t197;
    }
    COW_AT(10166da6)
    if (rd32(COW_IMG(0x10621950u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10621950u));
    COW_AT(10166db0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t198 = cow_thiscall(g, COW_IMG(0x10167320u), esi, 0);
        t199 = g->ecx;
        t200 = g->edx;
        t201 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t199, t200, 1, 1, esi);
        t202 = g->edx;
        wr32(COW_IMG(0x10621950u), 0u);
        eax = t201;
        edx = t202;
    }
    COW_AT(10166dc6)
    if (rd32(COW_IMG(0x10666e2cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e2cu));
    COW_AT(10166dd0)
        g->esp = sp0 - 8u;
        t203 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t204 = g->ecx;
        t205 = g->edx;
        t206 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t204, t205, 1, 1, esi);
        t207 = g->edx;
        wr32(COW_IMG(0x10666e2cu), 0u);
        eax = t206;
        edx = t207;
    }
    COW_AT(10166de6)
    if (rd32(COW_IMG(0x10666e30u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e30u));
    COW_AT(10166df0)
        g->esp = sp0 - 8u;
        t208 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t209 = g->ecx;
        t210 = g->edx;
        t211 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t209, t210, 1, 1, esi);
        t212 = g->edx;
        wr32(COW_IMG(0x10666e30u), 0u);
        eax = t211;
        edx = t212;
    }
    COW_AT(10166e06)
    if (rd32(COW_IMG(0x10666e34u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e34u));
    COW_AT(10166e10)
        g->esp = sp0 - 8u;
        t213 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t214 = g->ecx;
        t215 = g->edx;
        t216 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t214, t215, 1, 1, esi);
        t217 = g->edx;
        wr32(COW_IMG(0x10666e34u), 0u);
        eax = t216;
        edx = t217;
    }
    COW_AT(10166e26)
    if (rd32(COW_IMG(0x10666e38u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e38u));
    COW_AT(10166e30)
        g->esp = sp0 - 8u;
        t218 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t219 = g->ecx;
        t220 = g->edx;
        t221 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t219, t220, 1, 1, esi);
        t222 = g->edx;
        wr32(COW_IMG(0x10666e38u), 0u);
        eax = t221;
        edx = t222;
    }
    COW_AT(10166e46)
    if (rd32(COW_IMG(0x10666e3cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e3cu));
    COW_AT(10166e50)
        g->esp = sp0 - 8u;
        t223 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t224 = g->ecx;
        t225 = g->edx;
        t226 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t224, t225, 1, 1, esi);
        t227 = g->edx;
        wr32(COW_IMG(0x10666e3cu), 0u);
        eax = t226;
        edx = t227;
    }
    COW_AT(10166e66)
    if (rd32(COW_IMG(0x10666e40u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e40u));
    COW_AT(10166e70)
        g->esp = sp0 - 8u;
        t228 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t229 = g->ecx;
        t230 = g->edx;
        t231 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t229, t230, 1, 1, esi);
        t232 = g->edx;
        wr32(COW_IMG(0x10666e40u), 0u);
        eax = t231;
        edx = t232;
    }
    COW_AT(10166e86)
    if (rd32(COW_IMG(0x10666e44u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e44u));
    COW_AT(10166e90)
        g->esp = sp0 - 8u;
        t233 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t234 = g->ecx;
        t235 = g->edx;
        t236 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t234, t235, 1, 1, esi);
        t237 = g->edx;
        wr32(COW_IMG(0x10666e44u), 0u);
        eax = t236;
        edx = t237;
    }
    COW_AT(10166ea6)
    if (rd32(COW_IMG(0x10666e48u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e48u));
    COW_AT(10166eb0)
        g->esp = sp0 - 8u;
        t238 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t239 = g->ecx;
        t240 = g->edx;
        t241 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t239, t240, 1, 1, esi);
        t242 = g->edx;
        wr32(COW_IMG(0x10666e48u), 0u);
        eax = t241;
        edx = t242;
    }
    COW_AT(10166ec6)
    if (rd32(COW_IMG(0x10666e4cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e4cu));
    COW_AT(10166ed0)
        g->esp = sp0 - 8u;
        t243 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t244 = g->ecx;
        t245 = g->edx;
        t246 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t244, t245, 1, 1, esi);
        t247 = g->edx;
        wr32(COW_IMG(0x10666e4cu), 0u);
        eax = t246;
        edx = t247;
    }
    COW_AT(10166ee6)
    if (rd32(COW_IMG(0x10666e50u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e50u));
    COW_AT(10166ef0)
        g->esp = sp0 - 8u;
        t248 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t249 = g->ecx;
        t250 = g->edx;
        t251 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t249, t250, 1, 1, esi);
        t252 = g->edx;
        wr32(COW_IMG(0x10666e50u), 0u);
        eax = t251;
        edx = t252;
    }
    COW_AT(10166f06)
    if (rd32(COW_IMG(0x10666e54u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e54u));
    COW_AT(10166f10)
        g->esp = sp0 - 8u;
        t253 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t254 = g->ecx;
        t255 = g->edx;
        t256 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t254, t255, 1, 1, esi);
        t257 = g->edx;
        wr32(COW_IMG(0x10666e54u), 0u);
        eax = t256;
        edx = t257;
    }
    COW_AT(10166f26)
    if (rd32(COW_IMG(0x10666e58u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e58u));
    COW_AT(10166f30)
        g->esp = sp0 - 8u;
        t258 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t259 = g->ecx;
        t260 = g->edx;
        t261 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t259, t260, 1, 1, esi);
        t262 = g->edx;
        wr32(COW_IMG(0x10666e58u), 0u);
        eax = t261;
        edx = t262;
    }
    COW_AT(10166f46)
    if (rd32(COW_IMG(0x10666e5cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e5cu));
    COW_AT(10166f50)
        g->esp = sp0 - 8u;
        t263 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t264 = g->ecx;
        t265 = g->edx;
        t266 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t264, t265, 1, 1, esi);
        t267 = g->edx;
        wr32(COW_IMG(0x10666e5cu), 0u);
        eax = t266;
        edx = t267;
    }
    COW_AT(10166f66)
    if (rd32(COW_IMG(0x10666e60u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e60u));
    COW_AT(10166f70)
        g->esp = sp0 - 8u;
        t268 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t269 = g->ecx;
        t270 = g->edx;
        t271 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t269, t270, 1, 1, esi);
        t272 = g->edx;
        wr32(COW_IMG(0x10666e60u), 0u);
        eax = t271;
        edx = t272;
    }
    COW_AT(10166f86)
    if (rd32(COW_IMG(0x10666e64u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e64u));
    COW_AT(10166f90)
        g->esp = sp0 - 8u;
        t273 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t274 = g->ecx;
        t275 = g->edx;
        t276 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t274, t275, 1, 1, esi);
        t277 = g->edx;
        wr32(COW_IMG(0x10666e64u), 0u);
        eax = t276;
        edx = t277;
    }
    COW_AT(10166fa6)
    if (rd32(COW_IMG(0x10666e68u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e68u));
    COW_AT(10166fb0)
        g->esp = sp0 - 8u;
        t278 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t279 = g->ecx;
        t280 = g->edx;
        t281 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t279, t280, 1, 1, esi);
        t282 = g->edx;
        wr32(COW_IMG(0x10666e68u), 0u);
        eax = t281;
        edx = t282;
    }
    COW_AT(10166fc6)
    if (rd32(COW_IMG(0x10666e6cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e6cu));
    COW_AT(10166fd0)
        g->esp = sp0 - 8u;
        t283 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t284 = g->ecx;
        t285 = g->edx;
        t286 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t284, t285, 1, 1, esi);
        t287 = g->edx;
        wr32(COW_IMG(0x10666e6cu), 0u);
        eax = t286;
        edx = t287;
    }
    COW_AT(10166fe6)
    if (rd32(COW_IMG(0x10666e70u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10666e70u));
    COW_AT(10166ff0)
        g->esp = sp0 - 8u;
        t288 = cow_call_regs(g, COW_IMG(0x1021c040u), eax, esi, edx, 1, 0);
        t289 = g->ecx;
        t290 = g->edx;
        t291 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t289, t290, 1, 1, esi);
        t292 = g->edx;
        wr32(COW_IMG(0x10666e70u), 0u);
        eax = t291;
        edx = t292;
    }
    COW_AT(10167006)
    if (rd32(COW_IMG(0x105782b0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105782b0u));
    COW_AT(10167010)
        g->eax = eax;
        g->edx = rd32(ecx);
        t293 = rd32(ecx);
        g->esp = sp0 - 8u;
        t294 = cow_thiscall(g, rd32(t293), ecx, 1, 1u);
        t295 = g->edx;
        wr32(COW_IMG(0x105782b0u), 0u);
        eax = t294;
        edx = t295;
    }
    COW_AT(1016701c)
    if (rd32(COW_IMG(0x10578258u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578258u));
    COW_AT(10167026)
        g->eax = rd32(ecx);
        g->edx = edx;
        t296 = rd32(ecx);
        g->esp = sp0 - 8u;
        t297 = cow_thiscall(g, rd32(t296), ecx, 1, 1u);
        t298 = g->edx;
        wr32(COW_IMG(0x10578258u), 0u);
        eax = t297;
        edx = t298;
    }
    COW_AT(10167032)
    if (rd32(COW_IMG(0x10578250u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578250u));
    COW_AT(1016703c)
        g->eax = eax;
        g->edx = rd32(ecx);
        t299 = rd32(ecx);
        g->esp = sp0 - 8u;
        t300 = cow_thiscall(g, rd32(t299), ecx, 1, 1u);
        t301 = g->edx;
        wr32(COW_IMG(0x10578250u), 0u);
        eax = t300;
        edx = t301;
    }
    COW_AT(10167048)
    if (rd32(COW_IMG(0x1057827cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057827cu));
    COW_AT(10167052)
        g->eax = rd32(ecx);
        g->edx = edx;
        t302 = rd32(ecx);
        g->esp = sp0 - 8u;
        t303 = cow_thiscall(g, rd32(t302), ecx, 1, 1u);
        t304 = g->edx;
        wr32(COW_IMG(0x1057827cu), 0u);
        eax = t303;
        edx = t304;
    }
    COW_AT(1016705e)
    if (rd32(COW_IMG(0x10578280u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578280u));
    COW_AT(10167068)
        g->eax = eax;
        g->edx = rd32(ecx);
        t305 = rd32(ecx);
        g->esp = sp0 - 8u;
        t306 = cow_thiscall(g, rd32(t305), ecx, 1, 1u);
        t307 = g->edx;
        wr32(COW_IMG(0x10578280u), 0u);
        eax = t306;
        edx = t307;
    }
    COW_AT(10167074)
    if (rd32(COW_IMG(0x10578290u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578290u));
    COW_AT(1016707e)
        g->eax = rd32(ecx);
        g->edx = edx;
        t308 = rd32(ecx);
        g->esp = sp0 - 8u;
        t309 = cow_thiscall(g, rd32(t308), ecx, 1, 1u);
        t310 = g->edx;
        wr32(COW_IMG(0x10578290u), 0u);
        eax = t309;
        edx = t310;
    }
    COW_AT(1016708a)
    if (rd32(COW_IMG(0x10578294u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578294u));
    COW_AT(10167094)
        g->eax = eax;
        g->edx = rd32(ecx);
        t311 = rd32(ecx);
        g->esp = sp0 - 8u;
        t312 = cow_thiscall(g, rd32(t311), ecx, 1, 1u);
        t313 = g->edx;
        wr32(COW_IMG(0x10578294u), 0u);
        eax = t312;
        edx = t313;
    }
    COW_AT(101670a0)
    if (rd32(COW_IMG(0x10578298u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578298u));
    COW_AT(101670aa)
        g->eax = rd32(ecx);
        g->edx = edx;
        t314 = rd32(ecx);
        g->esp = sp0 - 8u;
        t315 = cow_thiscall(g, rd32(t314), ecx, 1, 1u);
        t316 = g->edx;
        wr32(COW_IMG(0x10578298u), 0u);
        eax = t315;
        edx = t316;
    }
    COW_AT(101670b6)
    if (rd32(COW_IMG(0x105782a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105782a4u));
    COW_AT(101670c0)
        g->eax = eax;
        g->edx = rd32(ecx);
        t317 = rd32(ecx);
        g->esp = sp0 - 8u;
        t318 = cow_thiscall(g, rd32(t317), ecx, 1, 1u);
        t319 = g->edx;
        wr32(COW_IMG(0x105782a4u), 0u);
        eax = t318;
        edx = t319;
    }
    COW_AT(101670cc)
    if (rd32(COW_IMG(0x10578234u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578234u));
    COW_AT(101670d6)
        g->eax = rd32(ecx);
        g->edx = edx;
        t320 = rd32(ecx);
        g->esp = sp0 - 8u;
        t321 = cow_thiscall(g, rd32(t320), ecx, 1, 1u);
        t322 = g->edx;
        wr32(COW_IMG(0x10578234u), 0u);
        eax = t321;
        edx = t322;
    }
    COW_AT(101670e2)
    if (rd32(COW_IMG(0x10578238u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578238u));
    COW_AT(101670ec)
        g->eax = eax;
        g->edx = rd32(ecx);
        t323 = rd32(ecx);
        g->esp = sp0 - 8u;
        t324 = cow_thiscall(g, rd32(t323), ecx, 1, 1u);
        t325 = g->edx;
        wr32(COW_IMG(0x10578238u), 0u);
        eax = t324;
        edx = t325;
    }
    COW_AT(101670f8)
    if (rd32(COW_IMG(0x105781a0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781a0u));
    COW_AT(10167102)
        g->eax = rd32(ecx);
        g->edx = edx;
        t326 = rd32(ecx);
        g->esp = sp0 - 8u;
        t327 = cow_thiscall(g, rd32(t326), ecx, 1, 1u);
        t328 = g->edx;
        wr32(COW_IMG(0x105781a0u), 0u);
        eax = t327;
        edx = t328;
    }
    COW_AT(1016710e)
    if (rd32(COW_IMG(0x105781a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781a4u));
    COW_AT(10167118)
        g->eax = eax;
        g->edx = rd32(ecx);
        t329 = rd32(ecx);
        g->esp = sp0 - 8u;
        t330 = cow_thiscall(g, rd32(t329), ecx, 1, 1u);
        t331 = g->edx;
        wr32(COW_IMG(0x105781a4u), 0u);
        eax = t330;
        edx = t331;
    }
    COW_AT(10167124)
    if (rd32(COW_IMG(0x10578434u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578434u));
    COW_AT(1016712e)
        g->eax = rd32(ecx);
        g->edx = edx;
        t332 = rd32(ecx);
        g->esp = sp0 - 8u;
        t333 = cow_thiscall(g, rd32(t332), ecx, 1, 1u);
        t334 = g->edx;
        wr32(COW_IMG(0x10578434u), 0u);
        eax = t333;
        edx = t334;
    }
    COW_AT(1016713a)
    if (rd32(COW_IMG(0x106693fcu)) != 0u)
    {
        esi = rd32(COW_IMG(0x106693fcu));
    COW_AT(10167144)
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t335 = cow_stdcall(g, COW_IMG(0x10251510u), 0);
        t336 = g->ecx;
        t337 = g->edx;
        t338 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t336, t337, 1, 1, esi);
        t339 = g->edx;
        wr32(COW_IMG(0x106693fcu), 0u);
        eax = t338;
        edx = t339;
    }
    COW_AT(1016715a)
    if (rd32(COW_IMG(0x10668ff8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ff8u));
    COW_AT(10167165)
        g->eax = eax;
        g->edx = rd32(ecx);
        t340 = rd32(ecx);
        g->esp = sp0 - 4u;
        t341 = cow_thiscall(g, rd32(t340), ecx, 1, 1u);
        t342 = g->edx;
        wr32(COW_IMG(0x10668ff8u), 0u);
        eax = t341;
        edx = t342;
    }
    COW_AT(10167171)
    if (rd32(COW_IMG(0x10668fd8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668fd8u));
    COW_AT(1016717b)
        g->eax = rd32(ecx);
        g->edx = edx;
        t343 = rd32(ecx);
        g->esp = sp0 - 4u;
        t344 = cow_thiscall(g, rd32(t343), ecx, 1, 1u);
        t345 = g->edx;
        wr32(COW_IMG(0x10668fd8u), 0u);
        eax = t344;
        edx = t345;
    }
    COW_AT(10167187)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101606a0u), COW_IMG(0x10621838u), 0);
    t346 = g->edx;
    if (rd32(COW_IMG(0x10621948u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10621948u));
        edx = t346;
    }
    else
    {
        eax = rd32(COW_IMG(0x10621948u));
        edx = t346;
    COW_AT(1016719a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t347 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t348 = g->edx;
        eax = t347;
        edx = t348;
    }
    COW_AT(101671a1)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t349 = cow_thiscall(g, COW_IMG(0x1015d9e0u), COW_IMG(0x10621838u), 0);
    if (rd32(COW_IMG(0x106218fcu)) != 0u)
    {
        eax = t349;
        ecx = rd32(COW_IMG(0x106218fcu));
    COW_AT(101671b5)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(COW_IMG(0x106218fcu), 0u);
    }
    COW_AT(101671c2)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10166810(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016681du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166829u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166833u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016683fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166849u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166855u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016685fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016686bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166875u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166881u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016688cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101668f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166904u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016690eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016691au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166924u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166930u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016693au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166946u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166950u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016695cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166965u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166974u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016697eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166994u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016699eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101669b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101669beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101669d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101669deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101669eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101669f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166a98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166aa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166aaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166abau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ac4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ad0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166adau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ae6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166af0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166afcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166b96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166bacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166bb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166bc2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166bccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166bd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166be2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166beeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166bf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166c9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ca8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166cb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166cbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ccau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166cd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ce0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ceau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166cf6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166d9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166da6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166db0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166dc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166dd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166de6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166df0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166e90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ea6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166eb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ec6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ed0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ee6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ef0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166f90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166fa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166fb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166fc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166fd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166fe6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10166ff0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167006u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167010u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016701cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167026u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167032u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016703cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167048u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167052u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016705eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167068u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167074u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016707eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016708au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167094u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101670f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167102u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016710eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167118u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016712eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016713au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167144u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016715au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167165u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167171u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016717bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10167187u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016719au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101671a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101671b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101671c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10166810(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10166810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
