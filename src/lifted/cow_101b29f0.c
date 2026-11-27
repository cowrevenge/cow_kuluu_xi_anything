/* f_0x101b29f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101b29f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1dc;
    uint32_t loc_1e0;
    uint32_t loc_1e4;
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
    uint32_t t418;
    uint32_t t419;
    uint32_t t42;
    uint32_t t420;
    uint32_t t421;
    uint32_t t422;
    uint32_t t423;
    uint32_t t424;
    uint32_t t425;
    uint32_t t426;
    uint32_t t427;
    uint32_t t428;
    uint32_t t429;
    uint32_t t43;
    uint32_t t430;
    uint32_t t431;
    uint32_t t432;
    uint32_t t433;
    uint32_t t434;
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
    uint32_t t458;
    uint32_t t459;
    uint32_t t46;
    uint32_t t460;
    uint32_t t461;
    uint32_t t462;
    uint32_t t463;
    uint32_t t464;
    uint32_t t465;
    uint32_t t466;
    uint32_t t467;
    uint32_t t468;
    uint32_t t469;
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
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 508u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b2a05u: eax = g->eax; self = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1d8u); in_esi = rd32(sp0 - 0x1d4u); in_ebp = rd32(sp0 - 0x1d0u); in_ebx = rd32(sp0 - 0x1ccu); g->ebp = rd32(sp0 - 0x1d0u); g->ebx = rd32(sp0 - 0x1ccu); g->edi = rd32(sp0 - 0x1d8u); g->esi = rd32(sp0 - 0x1d4u); goto E_101b2a05;
    case 0x101b2a0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2a0a;
    case 0x101b2a19u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1d8u); in_esi = rd32(sp0 - 0x1d4u); in_ebp = rd32(sp0 - 0x1d0u); g->ebp = rd32(sp0 - 0x1d0u); g->edi = rd32(sp0 - 0x1d8u); g->esi = rd32(sp0 - 0x1d4u); goto E_101b2a19;
    case 0x101b2a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2a59;
    case 0x101b2a69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2a69;
    case 0x101b2a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2a9d;
    case 0x101b2b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2b4b;
    case 0x101b2b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2b62;
    case 0x101b2b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2b71;
    case 0x101b2b79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2b79;
    case 0x101b2b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2b7d;
    case 0x101b2b8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2b8c;
    case 0x101b2b95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2b95;
    case 0x101b2ba3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2ba3;
    case 0x101b2bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2baf;
    case 0x101b2bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2bb6;
    case 0x101b2bbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2bbe;
    case 0x101b2bc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2bc6;
    case 0x101b2bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2bcf;
    case 0x101b2c60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2c60;
    case 0x101b2c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2c77;
    case 0x101b2c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2c85;
    case 0x101b2c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2c8d;
    case 0x101b2c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2c95;
    case 0x101b2c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2c9d;
    case 0x101b2cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); goto E_101b2cac;
    case 0x101b2cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2cb6;
    case 0x101b2cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); goto E_101b2cbf;
    case 0x101b2cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2cc3;
    case 0x101b2cc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2cc8;
    case 0x101b2ccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2ccf;
    case 0x101b2cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2cd4;
    case 0x101b2ce0u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b2ce0;
    case 0x101b2ce5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2ce5;
    case 0x101b2ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2ce9;
    case 0x101b2cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2cf8;
    case 0x101b2d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d07;
    case 0x101b2d19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2d19;
    case 0x101b2d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2d29;
    case 0x101b2d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2d38;
    case 0x101b2d3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d3f;
    case 0x101b2d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d4b;
    case 0x101b2d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d53;
    case 0x101b2d62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d62;
    case 0x101b2d69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d69;
    case 0x101b2d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d71;
    case 0x101b2d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d79;
    case 0x101b2d88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d88;
    case 0x101b2d96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d96;
    case 0x101b2d9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2d9a;
    case 0x101b2da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2da6;
    case 0x101b2dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2dad;
    case 0x101b2db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2db2;
    case 0x101b2dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2dbe;
    case 0x101b2dc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2dc5;
    case 0x101b2dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2dca;
    case 0x101b2dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2dd0;
    case 0x101b2dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2dd4;
    case 0x101b2de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2de3;
    case 0x101b2deau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2dea;
    case 0x101b2df8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2df8;
    case 0x101b2dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); goto E_101b2dfa;
    case 0x101b2e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2e0d;
    case 0x101b2e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2e12;
    case 0x101b2e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e22;
    case 0x101b2e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e29;
    case 0x101b2e2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e2d;
    case 0x101b2e34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e34;
    case 0x101b2e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e38;
    case 0x101b2e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e3f;
    case 0x101b2e43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e43;
    case 0x101b2e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e51;
    case 0x101b2e5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2e5f;
    case 0x101b2e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e66;
    case 0x101b2e75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2e75;
    case 0x101b2e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2e82;
    case 0x101b2e95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2e95;
    case 0x101b2ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2ea1;
    case 0x101b2ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2ea6;
    case 0x101b2eb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2eb2;
    case 0x101b2eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2eb6;
    case 0x101b2ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2ec2;
    case 0x101b2ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2ec6;
    case 0x101b2eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2ecc;
    case 0x101b2ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); goto E_101b2ed0;
    case 0x101b2ed9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); goto E_101b2ed9;
    case 0x101b2ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); goto E_101b2ee2;
    case 0x101b2ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b2ee7;
    case 0x101b2eecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2eec;
    case 0x101b2ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2ef3;
    case 0x101b2efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2efb;
    case 0x101b2f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f0b;
    case 0x101b2f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f12;
    case 0x101b2f24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2f24;
    case 0x101b2f29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f29;
    case 0x101b2f31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f31;
    case 0x101b2f37u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b2f37;
    case 0x101b2f3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f3c;
    case 0x101b2f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f4c;
    case 0x101b2f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f53;
    case 0x101b2f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f5b;
    case 0x101b2f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f63;
    case 0x101b2f71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f71;
    case 0x101b2f7du: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b2f7d;
    case 0x101b2f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f82;
    case 0x101b2f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f8a;
    case 0x101b2f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f91;
    case 0x101b2f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2f98;
    case 0x101b2fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2fa4;
    case 0x101b2fb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2fb0;
    case 0x101b2fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2fbc;
    case 0x101b2fc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2fc8;
    case 0x101b2fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b2fd4;
    case 0x101b2ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2ff0;
    case 0x101b3003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3003;
    case 0x101b3012u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3012;
    case 0x101b301eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b301e;
    case 0x101b3029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3029;
    case 0x101b3036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3036;
    case 0x101b3045u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3045;
    case 0x101b304cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b304c;
    case 0x101b3054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3054;
    case 0x101b305bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b305b;
    case 0x101b3063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3063;
    case 0x101b3072u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3072;
    case 0x101b307bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b307b;
    case 0x101b3082u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3082;
    case 0x101b308eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b308e;
    case 0x101b309au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b309a;
    case 0x101b30a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b30a6;
    case 0x101b30b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b30b2;
    case 0x101b30beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b30be;
    case 0x101b30dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b30da;
    case 0x101b30edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b30ed;
    case 0x101b30fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b30fc;
    case 0x101b310au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b310a;
    case 0x101b310fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b310f;
    case 0x101b3116u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3116;
    case 0x101b311eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b311e;
    case 0x101b312du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b312d;
    case 0x101b313bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b313b;
    case 0x101b313fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b313f;
    case 0x101b314bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b314b;
    case 0x101b314fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b314f;
    case 0x101b315eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b315e;
    case 0x101b316bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b316b;
    case 0x101b317au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b317a;
    case 0x101b3181u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3181;
    case 0x101b3186u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3186;
    case 0x101b3196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3196;
    case 0x101b31a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b31a3;
    case 0x101b31b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b31b1;
    case 0x101b31b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b31b8;
    case 0x101b31bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b31bd;
    case 0x101b31c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b31c4;
    case 0x101b31c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b31c8;
    case 0x101b31d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b31d8;
    case 0x101b31e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b31e3;
    case 0x101b31f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b31f1;
    case 0x101b3201u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3201;
    case 0x101b320eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b320e;
    case 0x101b321du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b321d;
    case 0x101b3224u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3224;
    case 0x101b3228u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3228;
    case 0x101b3237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3237;
    case 0x101b3242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3242;
    case 0x101b3250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3250;
    case 0x101b3260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3260;
    case 0x101b3266u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); goto E_101b3266;
    case 0x101b326du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b326d;
    case 0x101b327bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b327b;
    case 0x101b328bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b328b;
    case 0x101b3298u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3298;
    case 0x101b32a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b32a7;
    case 0x101b32afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b32af;
    case 0x101b32b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b32b7;
    case 0x101b32c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b32c5;
    case 0x101b32ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b32cc;
    case 0x101b32d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b32d1;
    case 0x101b32e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b32e1;
    case 0x101b32eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b32ee;
    case 0x101b32fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b32fc;
    case 0x101b3304u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3304;
    case 0x101b330cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b330c;
    case 0x101b331au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b331a;
    case 0x101b3321u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3321;
    case 0x101b3326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3326;
    case 0x101b332du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b332d;
    case 0x101b3332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3332;
    case 0x101b3337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3337;
    case 0x101b333bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b333b;
    case 0x101b334au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b334a;
    case 0x101b3353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3353;
    case 0x101b3362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3362;
    case 0x101b3364u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); goto E_101b3364;
    case 0x101b337bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b337b;
    case 0x101b3388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3388;
    case 0x101b3395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3395;
    case 0x101b33a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b33a4;
    case 0x101b33b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b33b1;
    case 0x101b33bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b33bd;
    case 0x101b33c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b33c2;
    case 0x101b33cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b33cd;
    case 0x101b33d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b33d2;
    case 0x101b33e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b33e0;
    case 0x101b33eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b33ea;
    case 0x101b33fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b33fb;
    case 0x101b3406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3406;
    case 0x101b340bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b340b;
    case 0x101b3412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3412;
    case 0x101b3421u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3421;
    case 0x101b342cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b342c;
    case 0x101b3433u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3433;
    case 0x101b3437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3437;
    case 0x101b3447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3447;
    case 0x101b3454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3454;
    case 0x101b3462u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3462;
    case 0x101b3469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3469;
    case 0x101b346eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b346e;
    case 0x101b3478u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3478;
    case 0x101b3486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3486;
    case 0x101b348bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b348b;
    case 0x101b3490u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3490;
    case 0x101b3496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3496;
    case 0x101b349au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b349a;
    case 0x101b349eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b349e;
    case 0x101b34acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b34ac;
    case 0x101b34bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b34bc;
    case 0x101b34c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b34c9;
    case 0x101b34d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b34d7;
    case 0x101b34deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b34de;
    case 0x101b34e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b34e3;
    case 0x101b34f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b34f3;
    case 0x101b3500u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3500;
    case 0x101b350fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b350f;
    case 0x101b3516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3516;
    case 0x101b3518u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3518;
    case 0x101b351fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b351f;
    case 0x101b3523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3523;
    case 0x101b3529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3529;
    case 0x101b352du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b352d;
    case 0x101b3534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3534;
    case 0x101b3536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3536;
    case 0x101b353du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b353d;
    case 0x101b3542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3542;
    case 0x101b3547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3547;
    case 0x101b354bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b354b;
    case 0x101b3550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3550;
    case 0x101b3555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3555;
    case 0x101b355au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b355a;
    case 0x101b355fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b355f;
    case 0x101b3566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3566;
    case 0x101b3568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3568;
    case 0x101b3569u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3569;
    case 0x101b3577u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b3577;
    case 0x101b357cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); goto E_101b357c;
    case 0x101b3583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); goto E_101b3583;
    case 0x101b358du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e4 = rd32(sp0 - 0x1e4u); loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b358d;
    case 0x101b3592u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3592;
    case 0x101b3594u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3594;
    case 0x101b3599u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); loc_1dc = rd32(sp0 - 0x1dcu); goto E_101b3599;
    case 0x101b35a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b35a9;
    default: break;
    }
#endif

    COW_AT(101b29f0)
    wr32(sp0 - 0x1ccu, in_ebx);
    wr32(sp0 - 0x1d0u, in_ebp);
    wr32(sp0 - 0x1d4u, in_esi);
    wr32(sp0 - 0x1d8u, in_edi);
    t1 = rd8(self + 0xf100u);
    if ((uint8_t)t1 != 1u) goto L_101b2a19;
    COW_AT(101b2a05)
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2a0au);
    cow_thiscall(g, rd32(rd32(self) + 0x34u), self, 0);
    COW_AT(101b2a0a)
    g->ebx = rd32(sp0 - 0x1ccu);
    g->esi = rd32(sp0 - 0x1d4u);
    g->edi = rd32(sp0 - 0x1d8u);
    g->ebp = rd32(sp0 - 0x1d0u);
    return 0u;
L_101b2a19: ;
    COW_AT(101b2a19)
    wr8(self + 0xef22u, 0u);
    t2 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t2);
    g->eax = in_eax;
    g->edx = t2;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2a30u);
    t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t2);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101b2a30)
    if (rd32(sp0 + 4u) != 0xe5u)
    {
        ebp = rd32(sp0 + 4u);
        edi = eax;
        goto L_101b2a78;
    }
    edi = eax;
    COW_AT(101b2a41)
    t5 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t5);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t5;
    g->edx = edx;
    t6 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2a4fu);
    t7 = cow_stdcall(g, COW_IMG(0x102bc840u), 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101b2a4f)
    if (eax != 0xffu)
    {
        ebp = eax;
        goto L_101b2a78;
    }
    COW_AT(101b2a59)
    wr32(sp0 - 0x1dcu, edi);
    t10 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t10);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2a69u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t10, edi);
    COW_AT(101b2a69)
    g->ebx = rd32(sp0 - 0x1ccu);
    g->esi = rd32(sp0 - 0x1d4u);
    g->edi = rd32(sp0 - 0x1d8u);
    g->ebp = rd32(sp0 - 0x1d0u);
    return 0u;
L_101b2a78: ;
    COW_AT(101b2a78)
    wr8(self + 0xf124u, 1u);
    wr8(sp0 - 0x1c8u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2a8au);
    t11 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(101b2a8a)
    if ((uint8_t)eax != 0u) goto L_101b2ce0;
    COW_AT(101b2a94)
    g->eax = eax;
    g->edx = rd32(self);
    t13 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2a99u);
    t14 = cow_thiscall(g, rd32(t13 + 0x40u), self, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(101b2a99)
    if ((uint8_t)eax != 0u) goto L_101b2aac;
    COW_AT(101b2a9d)
    wr8(sp0 - 0x1c8u, (uint8_t)eax);
    wr8(self + 0xf124u, (uint8_t)eax);
L_101b3599: ;
    COW_AT(101b3599)
    wr32(sp0 - 0x1dcu, edi);
    t469 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t469);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b35a9u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t469, edi);
    COW_AT(101b35a9)
    g->ebx = rd32(sp0 - 0x1ccu);
    g->esi = rd32(sp0 - 0x1d4u);
    g->edi = rd32(sp0 - 0x1d8u);
    g->ebp = rd32(sp0 - 0x1d0u);
    return (uint8_t)rd32(sp0 - 0x1c8u);
L_101b2aac: ;
    COW_AT(101b2aac)
    wr32(sp0 - 0x1dcu, 0x38u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ab8u);
    t16 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x38u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(101b2ab8)
    if ((uint8_t)eax != 0u) goto L_101b2cd4;
    COW_AT(101b2ac0)
    wr32(sp0 - 0x1dcu, 0xb8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2acfu);
    t18 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0xb8u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(101b2acf)
    if ((uint8_t)eax != 0u) goto L_101b2cd4;
    COW_AT(101b2ad7)
    wr32(sp0 - 0x1dcu, 0x1du);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ae3u);
    t20 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x1du);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(101b2ae3)
    if ((uint8_t)eax != 0u) goto L_101b2cd4;
    COW_AT(101b2aeb)
    wr32(sp0 - 0x1dcu, 0x9du);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2afau);
    t22 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x9du);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(101b2afa)
    if ((uint8_t)eax != 0u) goto L_101b2cd4;
    COW_AT(101b2b02)
    wr32(sp0 - 0x1dcu, ebp);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2b0au);
    t24 = cow_call_regs(g, COW_IMG(0x101b4260u), eax, g->ecx, g->edx, 0, 1, ebp);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(101b2b0a)
    if ((uint8_t)eax != 1u) goto L_101b2bd4;
    COW_AT(101b2b12)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2b19u);
    t27 = cow_thiscall(g, COW_IMG(0x101b5cc0u), self, 0);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(101b2b19)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b2b21)
        g->eax = rd32(self);
        g->edx = edx;
        t29 = rd32(self);
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2b28u);
        t30 = cow_thiscall(g, rd32(t29 + 0x40u), self, 0);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    COW_AT(101b2b28)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101b2b30)
            wr32(sp0 - 0x1dcu, edi);
            g->eax = eax;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2b36u);
            t33 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
            eax = t33;
    COW_AT(101b2b36)
            wr32(sp0 - 0x1dcu, edi);
            t34 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1e0u, t34);
            g->edx = t34;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2b4bu);
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t34, edi);
            t35 = g->edx;
            edx = t35;
            ebx = (in_ebx & 0xffffff00u) | eax != 0u;
    COW_AT(101b2b4b)
            wr32(sp0 - 0x1dcu, 0xau);
            wr32(sp0 - 0x1e0u, 0u);
            wr32(sp0 - 0x1e4u, 0u);
            wr32(sp0 - 0x1e8u, 0u);
            wr32(sp0 - 0x1ecu, 0x78u);
            wr32(sp0 - 0x1f0u, 5u);
            wr32(sp0 - 0x1f4u, 0u);
            wr32(sp0 - 0x1f8u, 4u);
            g->eax = rd32(self);
            t36 = rd32(self);
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2b62u);
            t37 = cow_thiscall(g, rd32(t36 + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
            eax = t37;
    COW_AT(101b2b62)
            t38 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1dcu, t38);
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103d3c64u));
            g->edx = t38;
            t39 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2b71u);
            t40 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t38);
            t41 = g->ecx;
            t42 = g->edx;
            eax = t40;
            ecx = t41;
            edx = t42;
    COW_AT(101b2b71)
            wr32(sp0 - 0x1dcu, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2b79u);
            t43 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
            t44 = g->edx;
            edx = t44;
            edi = eax;
            eax = t43;
    COW_AT(101b2b79)
            if (eax != 0u)
            {
    COW_AT(101b2b7d)
                wr32(sp0 - 0x1dcu, edi);
                t45 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
                wr32(sp0 - 0x1e0u, t45);
                g->eax = rd32(COW_IMG(0x103d3c64u));
                t46 = rd32(COW_IMG(0x103d3c64u));
                g->esp = sp0 - 0x1d8u;
                COW_RET(0x101b2b8cu);
                t47 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t45, edi);
                eax = t47;
    COW_AT(101b2b8c)
                wr32(sp0 - 0x1dcu, 0u);
                g->edx = rd32(self);
                t48 = rd32(self);
                g->esp = sp0 - 0x1d8u;
                COW_RET(0x101b2b95u);
                cow_thiscall(g, rd32(t48 + 0x60u), self, 1, 0u);
                t49 = g->edx;
                edx = t49;
    COW_AT(101b2b95)
                t50 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
                wr32(sp0 - 0x1dcu, t50);
                g->eax = rd32(COW_IMG(0x103d3c64u));
                g->ecx = t50;
                g->edx = edx;
                t51 = rd32(COW_IMG(0x103d3c64u));
                g->esp = sp0 - 0x1d8u;
                COW_RET(0x101b2ba3u);
                t52 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t50);
                t53 = g->ecx;
                t54 = g->edx;
                eax = t52;
                ecx = t53;
                edx = t54;
    COW_AT(101b2ba3)
                if (rd8(self + 0xf121u) == 0u)
                {
                    edi = eax;
                    eax = (eax & 0xffffff00u) | rd8(self + 0xf121u);
                }
                else
                {
                    edi = eax;
                    eax = (eax & 0xffffff00u) | rd8(self + 0xf121u);
    COW_AT(101b2baf)
                    wr8(self + 0xf2f4u, 1u);
                }
    COW_AT(101b2bb6)
                wr32(sp0 - 0x1dcu, 0u);
                wr32(sp0 - 0x1e0u, edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1d8u;
                COW_RET(0x101b2bbeu);
                t55 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 0u);
                t56 = g->edx;
                eax = t55;
                edx = t56;
            }
    COW_AT(101b2bbe)
            if ((uint8_t)ebx != 0u)
            {
    COW_AT(101b2bc6)
                wr32(sp0 - 0x1dcu, 0x2fu);
                g->esp = sp0 - 0x1d8u;
                COW_RET(0x101b2bcfu);
                t57 = cow_call_regs(g, COW_IMG(0x101b6810u), eax, self, g->edx, 0, 1, 0x2fu);
                eax = t57;
    COW_AT(101b2bcf)
            }
        }
    }
L_101b3594: ;
    COW_AT(101b3594)
    wr8(sp0 - 0x1c8u, 1u);
    goto L_101b3599;
L_101b2bd4: ;
    COW_AT(101b2bd4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2bd9u);
    t58 = cow_stdcall(g, COW_IMG(0x101b7ee0u), 0);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(101b2bd9)
    if ((uint8_t)eax != 0u) goto L_101b2cc8;
    COW_AT(101b2be1)
    wr32(sp0 - 0x1dcu, ebp);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2be9u);
    t60 = cow_stdcall(g, COW_IMG(0x101b4270u), 1, ebp);
    t61 = g->ecx;
    eax = t60;
    ecx = t61;
    COW_AT(101b2be9)
    if ((uint8_t)eax != 1u) goto L_101b2cc8;
    COW_AT(101b2bf1)
    wr32(sp0 - 0x1dcu, edi);
    t62 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t62);
    g->eax = t62;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2c01u);
    t63 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t62, edi);
    eax = t63;
    COW_AT(101b2c01)
    g->edx = rd32(self);
    t64 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2c08u);
    cow_thiscall(g, rd32(t64 + 0x58u), self, 0);
    t65 = g->edx;
    edx = t65;
    COW_AT(101b2c08)
    wr32(sp0 - 0x1dcu, 1u);
    g->eax = rd32(self);
    t66 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2c11u);
    t67 = cow_thiscall(g, rd32(t66 + 0x60u), self, 1, 1u);
    eax = t67;
    COW_AT(101b2c11)
    g->edx = rd32(self);
    t68 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2c18u);
    cow_thiscall(g, rd32(t68 + 0x70u), self, 0);
    t69 = g->edx;
    edx = t69;
    COW_AT(101b2c18)
    t70 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t70);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t71 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2c26u);
    t72 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t70);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    COW_AT(101b2c26)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2c2fu);
    t74 = cow_thiscall(g, COW_IMG(0x101b5cc0u), self, 0);
    edi = eax;
    eax = t74;
    COW_AT(101b2c2f)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b2c37)
        g->eax = eax;
        g->edx = rd32(self);
        t75 = rd32(self);
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2c3eu);
        t76 = cow_thiscall(g, rd32(t75 + 0x40u), self, 0);
        t77 = g->ecx;
        t78 = g->edx;
        eax = t76;
        ecx = t77;
        edx = t78;
    COW_AT(101b2c3e)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101b2c46)
            wr32(sp0 - 0x1dcu, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2c4cu);
            t79 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
            t80 = g->edx;
            eax = t79;
            edx = t80;
    COW_AT(101b2c4c)
            wr32(sp0 - 0x1dcu, edi);
            t81 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1e0u, t81);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            t82 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2c60u);
            t83 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t81, edi);
            ebx = (in_ebx & 0xffffff00u) | eax != 0u;
            eax = t83;
    COW_AT(101b2c60)
            wr32(sp0 - 0x1dcu, 0xau);
            wr32(sp0 - 0x1e0u, 0u);
            wr32(sp0 - 0x1e4u, 0u);
            wr32(sp0 - 0x1e8u, 0u);
            wr32(sp0 - 0x1ecu, 0x78u);
            wr32(sp0 - 0x1f0u, 5u);
            wr32(sp0 - 0x1f4u, 0u);
            wr32(sp0 - 0x1f8u, 4u);
            g->edx = rd32(self);
            t84 = rd32(self);
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2c77u);
            cow_thiscall(g, rd32(t84 + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
            t85 = g->edx;
            edx = t85;
    COW_AT(101b2c77)
            t86 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1dcu, t86);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            g->ecx = t86;
            g->edx = edx;
            t87 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2c85u);
            t88 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t86);
            t89 = g->ecx;
            t90 = g->edx;
            eax = t88;
            ecx = t89;
            edx = t90;
    COW_AT(101b2c85)
            wr32(sp0 - 0x1dcu, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b2c8du);
            t91 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
            t92 = g->ecx;
            t93 = g->edx;
            ecx = t92;
            edx = t93;
            edi = eax;
            eax = t91;
    COW_AT(101b2c8d)
            if (eax != 0u)
            {
    COW_AT(101b2c95)
                if ((uint8_t)ebx == 0u)
                {
    COW_AT(101b2c9d)
                    wr32(sp0 - 0x1dcu, 0u);
                    wr32(sp0 - 0x1e0u, 0u);
                    wr32(sp0 - 0x1e4u, 0u);
                    wr32(sp0 - 0x1e8u, ebp);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    t94 = rd32(COW_IMG(0x10329320u));
                    g->esp = sp0 - 0x1e0u;
                    COW_RET(0x101b2cacu);
                    t95 = cow_stdcall(g, t94, 2, ebp, 0u);   /* user32.dll!MapVirtualKeyA */
                    t96 = g->ecx;
                    t97 = g->edx;
                    eax = t95;
                    ecx = t96;
                    edx = t97;
                    esi = t94;
    COW_AT(101b2cac)
                    wr32(sp0 - 0x1e4u, eax);
                    wr32(sp0 - 0x1e8u, ebp);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    t98 = rd32(COW_IMG(0x1032931cu));
                    g->esp = sp0 - 0x1d8u;
                    COW_RET(0x101b2cb6u);
                    t99 = cow_stdcall(g, t98, 4, ebp, eax, 0u, 0u);   /* user32.dll!keybd_event */
                    t100 = g->ecx;
                    t101 = g->edx;
                    eax = t99;
                    ecx = t100;
                    edx = t101;
                    ebx = t98;
    COW_AT(101b2cb6)
                    wr32(sp0 - 0x1dcu, 0u);
                    wr32(sp0 - 0x1e0u, 2u);
                    wr32(sp0 - 0x1e4u, 0u);
                    wr32(sp0 - 0x1e8u, ebp);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1e0u;
                    COW_RET(0x101b2cbfu);
                    t102 = cow_thiscall(g, esi, ecx, 2, ebp, 0u);
                    t103 = g->ecx;
                    t104 = g->edx;
                    eax = t102;
                    ecx = t103;
                    edx = t104;
    COW_AT(101b2cbf)
                    wr32(sp0 - 0x1e4u, eax);
                    wr32(sp0 - 0x1e8u, ebp);
                    g->eax = eax;
                    g->esp = sp0 - 0x1d8u;
                    COW_RET(0x101b2cc3u);
                    t105 = cow_thiscall(g, ebx, ecx, 4, ebp, eax, 2u, 0u);
                    eax = t105;
    COW_AT(101b2cc3)
                }
            }
        }
    }
    goto L_101b3594;
L_101b2cc8: ;
    COW_AT(101b2cc8)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ccfu);
    t106 = cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    eax = t106;
    COW_AT(101b2ccf)
    goto L_101b3599;
L_101b2cd4: ;
    COW_AT(101b2cd4)
    wr8(self + 0xf124u, 0u);
    goto L_101b3599;
L_101b2ce0: ;
    COW_AT(101b2ce0)
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ce5u);
    t107 = cow_stdcall(g, COW_IMG(0x101b4350u), 0);
    t108 = g->ecx;
    t109 = g->edx;
    eax = t107;
    ecx = t108;
    edx = t109;
    COW_AT(101b2ce5)
    if ((uint8_t)eax == 0u) goto L_101b2d07;
    COW_AT(101b2ce9)
    wr32(sp0 - 0x1dcu, edi);
    t110 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t110);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2cf8u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t110, edi);
    COW_AT(101b2cf8)
    g->ebx = rd32(sp0 - 0x1ccu);
    g->esi = rd32(sp0 - 0x1d4u);
    g->edi = rd32(sp0 - 0x1d8u);
    g->ebp = rd32(sp0 - 0x1d0u);
    return 0u;
L_101b2d07: ;
    COW_AT(101b2d07)
    wr32(sp0 - 0x1dcu, 0x1c2u);
    wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
    wr32(sp0 - 0x1e4u, 8u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->edx = sp0 - 0x1c4u;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d19u);
    t111 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, edi, 8u, sp0 - 0x1c4u, 0x1c2u);
    t112 = g->edx;
    eax = t111;
    edx = t112;
    COW_AT(101b2d19)
    if (ebp - 8u > 0xecu)
    {
        eax = ebp - 8u;
        goto L_101b3536;
    }
    ebx = eax;
    eax = ebp - 8u;
    COW_AT(101b2d29)
    t113 = rd32(COW_IMG(0x101b35c0u) + rd8(COW_IMG(0x101b35f8u) + eax) * 4u);
    switch (t113 - RD)
    {
    case 0x101b2d38u: goto L_101b2d38;
    case 0x101b2e12u: ecx = rd8(COW_IMG(0x101b35f8u) + eax); goto L_101b2e12;
    case 0x101b2eecu: goto L_101b2eec;
    case 0x101b3029u: goto L_101b3029;
    case 0x101b31bdu: goto L_101b31bd;
    case 0x101b321du: goto L_101b321d;
    case 0x101b327bu: ecx = rd8(COW_IMG(0x101b35f8u) + eax); goto L_101b327b;
    case 0x101b32d1u: goto L_101b32d1;
    case 0x101b3326u: goto L_101b3326;
    case 0x101b340bu: goto L_101b340b;
    case 0x101b342cu: goto L_101b342c;
    case 0x101b3518u: goto L_101b3518;
    case 0x101b3536u: goto L_101b3536;
    case 0x101b3568u: goto L_101b3568;
    default: rt_fatal(g, COW_IMG(0x101b2d31u), "switch");
    }
    return 0;
L_101b2d38: ;
    COW_AT(101b2d38)
    g->eax = eax;
    g->edx = rd32(self);
    t411 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d3fu);
    t412 = cow_thiscall(g, rd32(t411 + 0x70u), self, 0);
    t413 = g->ecx;
    t414 = g->edx;
    eax = t412;
    ecx = t413;
    edx = t414;
    COW_AT(101b2d3f)
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b2dca;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
    COW_AT(101b2d4b)
    t415 = rd32(self + 0xf10cu);
    if (t415 != 0u) goto L_101b2dca;
    COW_AT(101b2d53)
    wr32(sp0 - 0x1dcu, edi);
    t416 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t416);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t417 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d62u);
    t418 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t416, edi);
    eax = t418;
    COW_AT(101b2d62)
    g->eax = eax;
    g->edx = rd32(self);
    t419 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d69u);
    t420 = cow_thiscall(g, rd32(t419 + 0x68u), self, 0);
    t421 = g->edx;
    eax = t420;
    edx = t421;
    COW_AT(101b2d69)
    wr32(sp0 - 0x1dcu, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t422 = rd32(self);
    g->esp = sp0 - 0x1dcu;
    COW_RET(0x101b2d71u);
    t423 = cow_thiscall(g, rd32(t422 + 0x64u), self, 0);
    t424 = g->edx;
    eax = t423;
    edx = t424;
    COW_AT(101b2d71)
    wr32(sp0 - 0x1e0u, eax);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d79u);
    t425 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x1dcu));
    eax = t425;
    COW_AT(101b2d79)
    t426 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t426);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t426;
    t427 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d88u);
    t428 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t426);
    t429 = g->ecx;
    t430 = g->edx;
    eax = t428;
    ecx = t429;
    edx = t430;
    COW_AT(101b2d88)
    wr8(self + 0xf120u, 0u);
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2d96u);
    t431 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    t432 = g->ecx;
    t433 = g->edx;
    ecx = t432;
    edx = t433;
    edi = eax;
    eax = t431;
    COW_AT(101b2d96)
    if (eax != 0u)
    {
    COW_AT(101b2db2)
        wr32(sp0 - 0x1dcu, edi);
        wr8(self + 0xf121u, 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2dbeu);
        t438 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, rd32(sp0 - 0x1dcu));
        t439 = g->ecx;
        t440 = g->edx;
        eax = t438;
        ecx = t439;
        edx = t440;
    COW_AT(101b2dbe)
        wr32(sp0 - 0x1dcu, eax);
        wr32(sp0 - 0x1e0u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2dc5u);
        t441 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, eax);
        eax = t441;
    COW_AT(101b2dc5)
    }
    else
    {
    COW_AT(101b2d9a)
        wr32(sp0 - 0x1dcu, edi);
        wr8(self + 0xf2f4u, 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2da6u);
        t434 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, rd32(sp0 - 0x1dcu));
        t435 = g->ecx;
        t436 = g->edx;
        eax = t434;
        ecx = t435;
        edx = t436;
    COW_AT(101b2da6)
        wr32(sp0 - 0x1dcu, eax);
        wr32(sp0 - 0x1e0u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2dadu);
        t437 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, eax);
        eax = t437;
    COW_AT(101b2dad)
    }
    goto L_101b3594;
L_101b2dca: ;
    COW_AT(101b2dca)
    wr32(sp0 - 0x1dcu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2dd0u);
    t442 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t443 = g->ecx;
    t444 = g->edx;
    eax = t442;
    ecx = t443;
    edx = t444;
    COW_AT(101b2dd0)
    if (eax != 0u)
    {
    COW_AT(101b2dd4)
        wr32(sp0 - 0x1dcu, edi);
        t445 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1e0u, t445);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        t446 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2de3u);
        t447 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t445, edi);
        eax = t447;
    COW_AT(101b2de3)
        g->edx = rd32(self);
        t448 = rd32(self);
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2deau);
        cow_thiscall(g, rd32(t448 + 0x5cu), self, 0);
        t449 = g->edx;
        edx = t449;
    COW_AT(101b2dea)
        t450 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1dcu, t450);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        g->ecx = t450;
        g->edx = edx;
        t451 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2df8u);
        t452 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t450);
        t453 = g->ecx;
        t454 = g->edx;
        eax = t452;
        ecx = t453;
        edx = t454;
    COW_AT(101b2df8)
        edi = eax;
    }
    COW_AT(101b2dfa)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, edi);
    wr8(self + 0xf120u, 0u);
    wr8(self + 0xf2f4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e0du);
    t455 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu));
    eax = t455;
    COW_AT(101b2e0d)
    goto L_101b3594;
L_101b2e12: ;
    COW_AT(101b2e12)
    wr32(sp0 - 0x1dcu, edi);
    t374 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t374);
    g->eax = t374;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t375 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e22u);
    t376 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t374, edi);
    t377 = g->edx;
    eax = t376;
    edx = t377;
    COW_AT(101b2e22)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e29u);
    t378 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t379 = g->edx;
    eax = t378;
    edx = t379;
    COW_AT(101b2e29)
    if ((uint8_t)eax != 0u) goto L_101b2ea6;
    COW_AT(101b2e2d)
    g->eax = eax;
    g->edx = rd32(self);
    t380 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e34u);
    t381 = cow_thiscall(g, rd32(t380 + 0x20u), self, 0);
    t382 = g->edx;
    eax = t381;
    edx = t382;
    COW_AT(101b2e34)
    if ((uint8_t)eax == 0u) goto L_101b2ea6;
    COW_AT(101b2e38)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e3fu);
    t383 = cow_thiscall(g, COW_IMG(0x101b5c80u), self, 0);
    t384 = g->edx;
    eax = t383;
    edx = t384;
    COW_AT(101b2e3f)
    if ((uint8_t)eax != 0u) goto L_101b2ea6;
    COW_AT(101b2e43)
    t385 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t385);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t385;
    g->edx = edx;
    t386 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e51u);
    t387 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t385);
    t388 = g->ecx;
    t389 = g->edx;
    eax = t387;
    ecx = t388;
    edx = t389;
    COW_AT(101b2e51)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 3u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e5fu);
    t390 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, eax, 0x15u, 3u, 0u);
    edi = eax;
    eax = t390;
    COW_AT(101b2e5f)
    g->edx = rd32(self);
    t391 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e66u);
    cow_thiscall(g, rd32(t391 + 0x70u), self, 0);
    t392 = g->edx;
    edx = t392;
    COW_AT(101b2e66)
    wr32(sp0 - 0x1dcu, edi);
    t393 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t393);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t394 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e75u);
    t395 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t393, edi);
    t396 = g->edx;
    eax = t395;
    edx = t396;
    COW_AT(101b2e75)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 9u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e82u);
    t397 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 9u, 0u, 0u);
    t398 = g->edx;
    eax = t397;
    edx = t398;
    COW_AT(101b2e82)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, COW_IMG(0x10377cbcu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2e95u);
    t399 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    t400 = g->ecx;
    t401 = g->edx;
    eax = t399;
    ecx = t400;
    edx = t401;
    COW_AT(101b2e95)
    wr8(self + 0xf123u, 0u);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ea1u);
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t402 = g->ecx;
    ecx = t402;
    COW_AT(101b2ea1)
L_101b3583: ;
    COW_AT(101b3583)
    t467 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t467);
    eax = t467;
    edx = rd32(COW_IMG(0x103d3c64u));
    loc_1dc = t467;
L_101b358d: ;
    COW_AT(101b358d)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3592u);
    t468 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_1dc);
    eax = t468;
L_101b3592: ;
    COW_AT(101b3592)
    edi = eax;
    goto L_101b3594;
L_101b2ea6: ;
    COW_AT(101b2ea6)
    wr32(sp0 - 0x1dcu, 0x2au);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2eb2u);
    t403 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x2au);
    t404 = g->edx;
    eax = t403;
    edx = t404;
    COW_AT(101b2eb2)
    if ((uint8_t)eax != 0u) goto L_101b2ecc;
    COW_AT(101b2eb6)
    wr32(sp0 - 0x1dcu, 0x36u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ec2u);
    t405 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x36u);
    t406 = g->edx;
    eax = t405;
    edx = t406;
    COW_AT(101b2ec2)
    if ((uint8_t)eax != 0u) goto L_101b2ecc;
    COW_AT(101b2ec6)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    loc_1e0 = 0u;
L_101b2ed0: ;
    COW_AT(101b2ed0)
    wr32(sp0 - 0x1e4u, 9u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ed9u);
    t407 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 9u, loc_1e0, 0u);
    t408 = g->ecx;
    t409 = g->edx;
    eax = t407;
    ecx = t408;
    edx = t409;
    COW_AT(101b2ed9)
    if (eax == 1u)
    {
    COW_AT(101b2ee2)
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b2ee7u);
        cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t410 = g->ecx;
        ecx = t410;
    COW_AT(101b2ee7)
    }
    goto L_101b3583;
L_101b2ecc: ;
    COW_AT(101b2ecc)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 1u);
    loc_1e0 = 1u;
    goto L_101b2ed0;
L_101b2eec: ;
    COW_AT(101b2eec)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ef3u);
    t321 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    eax = t321;
    COW_AT(101b2ef3)
    if ((uint8_t)eax == 0u) goto L_101b3594;
    COW_AT(101b2efb)
    wr32(sp0 - 0x1dcu, edi);
    t322 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t322);
    g->edx = t322;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f0bu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t322, edi);
    t323 = g->edx;
    edx = t323;
    COW_AT(101b2f0b)
    g->eax = rd32(self);
    t324 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f12u);
    t325 = cow_thiscall(g, rd32(t324 + 0x20u), self, 0);
    eax = t325;
    COW_AT(101b2f12)
    t326 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t326);
    if ((uint8_t)eax == 0u)
    {
        ecx = rd32(COW_IMG(0x103d3c64u));
        edx = t326;
        loc_1dc = t326;
        goto L_101b358d;
    }
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t326;
    loc_1dc = t326;
    COW_AT(101b2f24)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f29u);
    t327 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_1dc);
    t328 = g->ecx;
    t329 = g->edx;
    eax = t327;
    ecx = t328;
    edx = t329;
    COW_AT(101b2f29)
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f31u);
    t330 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    t331 = g->edx;
    edx = t331;
    edi = eax;
    eax = t330;
    COW_AT(101b2f31)
    if (eax != 0u) goto L_101b2f7d;
    COW_AT(101b2f37)
    g->eax = rd32(self);
    t332 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f3cu);
    t333 = cow_thiscall(g, rd32(t332 + 0x70u), self, 0);
    eax = t333;
    COW_AT(101b2f3c)
    wr32(sp0 - 0x1dcu, edi);
    t334 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t334);
    g->edx = t334;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f4cu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t334, edi);
    t335 = g->edx;
    edx = t335;
    COW_AT(101b2f4c)
    g->eax = rd32(self);
    t336 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f53u);
    t337 = cow_thiscall(g, rd32(t336 + 0x68u), self, 0);
    eax = t337;
    COW_AT(101b2f53)
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->edx = rd32(self);
    t338 = rd32(self);
    g->esp = sp0 - 0x1dcu;
    COW_RET(0x101b2f5bu);
    t339 = cow_thiscall(g, rd32(t338 + 0x64u), self, 0);
    t340 = g->edx;
    eax = t339;
    edx = t340;
    COW_AT(101b2f5b)
    wr32(sp0 - 0x1e0u, eax);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f63u);
    cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x1dcu));
    t341 = g->edx;
    edx = t341;
    COW_AT(101b2f63)
    t342 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t342);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t343 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f71u);
    t344 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t342);
    eax = t344;
    COW_AT(101b2f71)
    wr8(self + 0xf120u, 0u);
    goto L_101b3592;
L_101b2f7d: ;
    COW_AT(101b2f7d)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f82u);
    t345 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t346 = g->edx;
    eax = t345;
    edx = t346;
    COW_AT(101b2f82)
    if ((uint8_t)eax == 0u) goto L_101b301e;
    COW_AT(101b2f8a)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f91u);
    t347 = cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
    eax = t347;
    COW_AT(101b2f91)
    g->eax = eax;
    g->edx = rd32(self);
    t348 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2f98u);
    t349 = cow_thiscall(g, rd32(t348 + 0x70u), self, 0);
    t350 = g->ecx;
    t351 = g->edx;
    eax = t349;
    ecx = t350;
    edx = t351;
    COW_AT(101b2f98)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 3u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2fa4u);
    t352 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 3u, 0u);
    t353 = g->ecx;
    t354 = g->edx;
    eax = t352;
    ecx = t353;
    edx = t354;
    COW_AT(101b2fa4)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 2u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2fb0u);
    t355 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t356 = g->ecx;
    t357 = g->edx;
    eax = t355;
    ecx = t356;
    edx = t357;
    COW_AT(101b2fb0)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 2u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2fbcu);
    t358 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t359 = g->ecx;
    t360 = g->edx;
    eax = t358;
    ecx = t359;
    edx = t360;
    COW_AT(101b2fbc)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x17u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2fc8u);
    t361 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x17u, 0u, 0u);
    t362 = g->ecx;
    t363 = g->edx;
    eax = t361;
    ecx = t362;
    edx = t363;
    COW_AT(101b2fc8)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x16u);
    wr32(sp0 - 0x1e8u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2fd4u);
    cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x16u, 0u, 0u);
    t364 = g->edx;
    edx = t364;
    COW_AT(101b2fd4)
    wr32(sp0 - 0x1dcu, edi);
    t365 = rd32(self + 0xf128u) + 1u;
    wr32(self + 0xf128u, t365);
    t366 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t366);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t367 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b2ff0u);
    t368 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t366, rd32(sp0 - 0x1dcu));
    t369 = g->edx;
    eax = t368;
    edx = t369;
    COW_AT(101b2ff0)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, COW_IMG(0x10377cbcu));
    g->ebx = ebx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3003u);
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    t370 = g->ecx;
    ecx = t370;
    COW_AT(101b3003)
    t371 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t371);
    g->eax = t371;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3012u);
    t372 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t371);
    eax = t372;
    COW_AT(101b3012)
    wr8(self + 0xf123u, 1u);
    goto L_101b3592;
L_101b301e: ;
    COW_AT(101b301e)
    t373 = rd32(self + 0xf128u);
    wr32(self + 0xf128u, t373 + 1u);
    goto L_101b3594;
L_101b3029: ;
    COW_AT(101b3029)
    wr32(sp0 - 0x1dcu, 0u);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3036u);
    cow_fastcall(g, COW_IMG(0x101252f0u), rd32(COW_IMG(0x104e1d4cu)), edx, 1, 0u);
    t247 = g->edx;
    edx = t247;
    COW_AT(101b3036)
    wr32(sp0 - 0x1dcu, edi);
    t248 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t248);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t249 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3045u);
    t250 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t248, edi);
    t251 = g->edx;
    eax = t250;
    edx = t251;
    COW_AT(101b3045)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b304cu);
    t252 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t253 = g->edx;
    eax = t252;
    edx = t253;
    COW_AT(101b304c)
    if ((uint8_t)eax == 0u) goto L_101b310f;
    COW_AT(101b3054)
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b305bu);
    t254 = cow_stdcall(g, COW_IMG(0x101b3f70u), 0);
    t255 = g->ecx;
    t256 = g->edx;
    eax = t254;
    ecx = t255;
    edx = t256;
    COW_AT(101b305b)
    if ((uint8_t)eax == 0u) goto L_101b310f;
    COW_AT(101b3063)
    t257 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t257);
    g->eax = t257;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t258 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3072u);
    t259 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t257);
    t260 = g->edx;
    eax = t259;
    edx = t260;
    COW_AT(101b3072)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b307bu);
    t261 = cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
    edi = eax;
    eax = t261;
    COW_AT(101b307b)
    g->eax = eax;
    g->edx = rd32(self);
    t262 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3082u);
    t263 = cow_thiscall(g, rd32(t262 + 0x70u), self, 0);
    t264 = g->ecx;
    t265 = g->edx;
    eax = t263;
    ecx = t264;
    edx = t265;
    COW_AT(101b3082)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 3u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b308eu);
    t266 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 3u, 0u);
    t267 = g->ecx;
    t268 = g->edx;
    eax = t266;
    ecx = t267;
    edx = t268;
    COW_AT(101b308e)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 2u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b309au);
    t269 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t270 = g->ecx;
    t271 = g->edx;
    eax = t269;
    ecx = t270;
    edx = t271;
    COW_AT(101b309a)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 2u);
    wr32(sp0 - 0x1e4u, 0x15u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b30a6u);
    t272 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t273 = g->ecx;
    t274 = g->edx;
    eax = t272;
    ecx = t273;
    edx = t274;
    COW_AT(101b30a6)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x17u);
    wr32(sp0 - 0x1e8u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b30b2u);
    t275 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x17u, 0u, 0u);
    t276 = g->ecx;
    t277 = g->edx;
    eax = t275;
    ecx = t276;
    edx = t277;
    COW_AT(101b30b2)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x16u);
    wr32(sp0 - 0x1e8u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b30beu);
    cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x16u, 0u, 0u);
    t278 = g->edx;
    edx = t278;
    COW_AT(101b30be)
    wr32(sp0 - 0x1dcu, edi);
    t279 = rd32(self + 0xf128u) + 1u;
    wr32(self + 0xf128u, t279);
    t280 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t280);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t281 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b30dau);
    t282 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t280, rd32(sp0 - 0x1dcu));
    t283 = g->edx;
    eax = t282;
    edx = t283;
    COW_AT(101b30da)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, COW_IMG(0x10377cbcu));
    g->ebx = ebx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b30edu);
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    t284 = g->ecx;
    ecx = t284;
    COW_AT(101b30ed)
    t285 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t285);
    g->eax = t285;
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t286 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b30fcu);
    t287 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t285);
    t288 = g->ecx;
    t289 = g->edx;
    eax = t287;
    ecx = t288;
    edx = t289;
    COW_AT(101b30fc)
    wr8(self + 0xf123u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b310au);
    t290 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    edi = eax;
    eax = t290;
    COW_AT(101b310a)
    goto L_101b3594;
L_101b310f: ;
    COW_AT(101b310f)
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3116u);
    t291 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t292 = g->ecx;
    eax = t291;
    ecx = t292;
    COW_AT(101b3116)
    if ((uint8_t)eax == 0u) goto L_101b3583;
    COW_AT(101b311e)
    t293 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t293);
    g->eax = eax;
    g->edx = t293;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b312du);
    t294 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t293);
    t295 = g->edx;
    eax = t294;
    edx = t295;
    COW_AT(101b312d)
    wr32(sp0 - 0x1dcu, 0x2au);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b313bu);
    t296 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x2au);
    t297 = g->edx;
    edx = t297;
    edi = eax;
    eax = t296;
    COW_AT(101b313b)
    if ((uint8_t)eax != 0u) goto L_101b3186;
    COW_AT(101b313f)
    wr32(sp0 - 0x1dcu, 0x36u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b314bu);
    t298 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x36u);
    t299 = g->edx;
    eax = t298;
    edx = t299;
    COW_AT(101b314b)
    if ((uint8_t)eax != 0u) goto L_101b3186;
    COW_AT(101b314f)
    wr32(sp0 - 0x1dcu, edi);
    t300 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t300);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t301 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b315eu);
    t302 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t300, edi);
    t303 = g->edx;
    eax = t302;
    edx = t303;
    COW_AT(101b315e)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 9u);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b316bu);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 9u, 0u, 0u);
    t304 = g->ecx;
    ecx = t304;
    COW_AT(101b316b)
    t305 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t305);
    g->eax = t305;
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t306 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b317au);
    t307 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t305);
    t308 = g->ecx;
    t309 = g->edx;
    eax = t307;
    ecx = t308;
    edx = t309;
    COW_AT(101b317a)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3181u);
    t310 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    edi = eax;
    eax = t310;
    COW_AT(101b3181)
    goto L_101b3594;
L_101b3186: ;
    COW_AT(101b3186)
    wr32(sp0 - 0x1dcu, edi);
    t311 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t311);
    g->eax = eax;
    g->edx = t311;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3196u);
    t312 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t311, edi);
    t313 = g->edx;
    eax = t312;
    edx = t313;
    COW_AT(101b3196)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 1u);
    wr32(sp0 - 0x1e4u, 9u);
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b31a3u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 9u, 1u, 0u);
    t314 = g->edx;
    edx = t314;
    COW_AT(101b31a3)
    t315 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t315);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t315;
    g->edx = edx;
    t316 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b31b1u);
    t317 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t315);
    t318 = g->ecx;
    t319 = g->edx;
    eax = t317;
    ecx = t318;
    edx = t319;
    COW_AT(101b31b1)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b31b8u);
    t320 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    edi = eax;
    eax = t320;
    COW_AT(101b31b8)
    goto L_101b3594;
L_101b31bd: ;
    COW_AT(101b31bd)
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b31c4u);
    t234 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t235 = g->ecx;
    eax = t234;
    ecx = t235;
    COW_AT(101b31c4)
    if ((uint8_t)eax == 0u) goto L_101b31e3;
    COW_AT(101b31c8)
    wr32(sp0 - 0x1dcu, edi);
    t236 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t236);
    g->eax = eax;
    g->edx = t236;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b31d8u);
    t237 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t236, edi);
    t238 = g->edx;
    eax = t237;
    edx = t238;
    COW_AT(101b31d8)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 1u);
    wr32(sp0 - 0x1e4u, 9u);
    loc_1e0 = 1u;
    loc_1e4 = 9u;
L_101b3266: ;
    COW_AT(101b3266)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b326du);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_1e4, loc_1e0, 0u);
    t239 = g->edx;
    edx = t239;
    COW_AT(101b326d)
    t240 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t240);
    eax = rd32(COW_IMG(0x103d3c64u));
    ecx = t240;
    loc_1dc = t240;
    goto L_101b358d;
L_101b31e3: ;
    COW_AT(101b31e3)
    if (rd32(self + 0xf128u) != 0u)
    {
        eax = rd32(self + 0xf128u);
        goto L_101b3594;
    }
    COW_AT(101b31f1)
    wr32(sp0 - 0x1dcu, edi);
    t241 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t241);
    g->eax = t241;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t242 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3201u);
    t243 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t241, edi);
    t244 = g->edx;
    eax = t243;
    edx = t244;
    COW_AT(101b3201)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x26u);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b320eu);
    t245 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x26u, 0u, 0u);
    eax = t245;
    COW_AT(101b320e)
    t246 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t246);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t246;
    loc_1dc = t246;
    goto L_101b358d;
L_101b321d: ;
    COW_AT(101b321d)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3224u);
    t225 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t226 = g->edx;
    eax = t225;
    edx = t226;
    COW_AT(101b3224)
    if ((uint8_t)eax == 0u) goto L_101b3242;
    COW_AT(101b3228)
    wr32(sp0 - 0x1dcu, edi);
    t227 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t227);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t228 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3237u);
    t229 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t227, edi);
    t230 = g->edx;
    eax = t229;
    edx = t230;
    COW_AT(101b3237)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 9u);
    loc_1e4 = 9u;
L_101b357c: ;
    COW_AT(101b357c)
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3583u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_1e4, 0u, 0u);
    t466 = g->ecx;
    ecx = t466;
    goto L_101b3583;
L_101b3242: ;
    COW_AT(101b3242)
    if (rd32(self + 0xf128u) != 0u)
    {
        eax = rd32(self + 0xf128u);
        goto L_101b3594;
    }
    eax = rd32(self + 0xf128u);
    COW_AT(101b3250)
    wr32(sp0 - 0x1dcu, edi);
    t231 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t231);
    g->eax = eax;
    g->edx = t231;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3260u);
    t232 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t231, edi);
    t233 = g->edx;
    eax = t232;
    edx = t233;
    COW_AT(101b3260)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x28u);
    loc_1e0 = 0u;
    loc_1e4 = 0x28u;
    goto L_101b3266;
L_101b327b: ;
    COW_AT(101b327b)
    wr32(sp0 - 0x1dcu, edi);
    t211 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t211);
    g->eax = t211;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t212 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b328bu);
    t213 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t211, edi);
    t214 = g->edx;
    eax = t213;
    edx = t214;
    COW_AT(101b328b)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x25u);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3298u);
    t215 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x25u, 0u, 0u);
    eax = t215;
    COW_AT(101b3298)
    t216 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t216);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t216;
    t217 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b32a7u);
    t218 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t216);
    t219 = g->ecx;
    t220 = g->edx;
    eax = t218;
    ecx = t219;
    edx = t220;
    COW_AT(101b32a7)
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b32afu);
    t221 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    t222 = g->edx;
    edx = t222;
    edi = eax;
    eax = t221;
    COW_AT(101b32af)
    if (eax != 0u)
    {
    COW_AT(101b32b7)
        if ((int32_t)rd32(self + 0xf128u) <= 0)
        {
            eax = rd32(self + 0xf128u);
        }
        else
        {
    COW_AT(101b32c5)
            g->eax = rd32(self);
            t223 = rd32(self);
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b32ccu);
            t224 = cow_thiscall(g, rd32(t223 + 0x70u), self, 0);
            eax = t224;
    COW_AT(101b32cc)
        }
    }
    goto L_101b3594;
L_101b32d1: ;
    COW_AT(101b32d1)
    wr32(sp0 - 0x1dcu, edi);
    t200 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t200);
    g->eax = eax;
    g->edx = t200;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b32e1u);
    t201 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t200, edi);
    t202 = g->edx;
    eax = t201;
    edx = t202;
    COW_AT(101b32e1)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x27u);
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b32eeu);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x27u, 0u, 0u);
    t203 = g->edx;
    edx = t203;
    COW_AT(101b32ee)
    t204 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t204);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t204;
    g->edx = edx;
    t205 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b32fcu);
    t206 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t204);
    t207 = g->ecx;
    t208 = g->edx;
    eax = t206;
    ecx = t207;
    edx = t208;
    COW_AT(101b32fc)
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3304u);
    t209 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    edi = eax;
    eax = t209;
    COW_AT(101b3304)
    if (eax != 0u)
    {
    COW_AT(101b330c)
        if ((int32_t)rd32(self + 0xf128u) <= 0)
        {
            eax = rd32(self + 0xf128u);
        }
        else
        {
            eax = rd32(self + 0xf128u);
    COW_AT(101b331a)
            g->eax = eax;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b3321u);
            t210 = cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
            eax = t210;
    COW_AT(101b3321)
        }
    }
    goto L_101b3594;
L_101b3326: ;
    COW_AT(101b3326)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b332du);
    t169 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t170 = g->ecx;
    t171 = g->edx;
    eax = t169;
    ecx = t170;
    edx = t171;
    COW_AT(101b332d)
    wr32(sp0 - 0x1dcu, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_1dc = edi;
    COW_AT(101b3395)
        t187 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1e0u, t187);
        g->eax = t187;
        g->edx = rd32(COW_IMG(0x103d3c64u));
        t188 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b33a4u);
        t189 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t187, loc_1dc);
        t190 = g->edx;
        eax = t189;
        edx = t190;
    COW_AT(101b33a4)
        wr32(sp0 - 0x1dcu, 0u);
        wr32(sp0 - 0x1e0u, 0u);
        wr32(sp0 - 0x1e4u, 0xdu);
        g->eax = eax;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b33b1u);
        t191 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0xdu, 0u, 0u);
        eax = t191;
    COW_AT(101b33b1)
        t192 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1dcu, t192);
        ecx = rd32(COW_IMG(0x103d3c64u));
        edx = t192;
        ebx = eax;
        loc_1dc = t192;
    }
    else
    {
        loc_1dc = edi;
    COW_AT(101b3332)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3337u);
        t172 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_1dc);
        t173 = g->edx;
        eax = t172;
        edx = t173;
    COW_AT(101b3337)
        if (eax != 0u)
        {
    COW_AT(101b333b)
            wr32(sp0 - 0x1dcu, edi);
            t174 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1e0u, t174);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            g->edx = edx;
            t175 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b334au);
            t176 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t174, edi);
            t177 = g->edx;
            eax = t176;
            edx = t177;
    COW_AT(101b334a)
            wr32(sp0 - 0x1dcu, 0u);
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b3353u);
            cow_thiscall(g, COW_IMG(0x101b3b50u), self, 1, 0u);
            t178 = g->ecx;
            ecx = t178;
    COW_AT(101b3353)
            t179 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1dcu, t179);
            g->eax = t179;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b3362u);
            t180 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t179);
            eax = t180;
    COW_AT(101b3362)
            edi = eax;
        }
    COW_AT(101b3364)
        wr8(self + 0xf120u, 0u);
        wr32(sp0 - 0x1dcu, edi);
        t181 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1e0u, t181);
        g->eax = eax;
        g->edx = t181;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b337bu);
        t182 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t181, edi);
        t183 = g->edx;
        eax = t182;
        edx = t183;
    COW_AT(101b337b)
        wr32(sp0 - 0x1dcu, 0u);
        wr32(sp0 - 0x1e0u, 0u);
        wr32(sp0 - 0x1e4u, 0xdu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3388u);
        t184 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0xdu, 0u, 0u);
        t185 = g->edx;
        eax = t184;
        edx = t185;
    COW_AT(101b3388)
        t186 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1dcu, t186);
        ecx = t186;
        ebx = eax;
        eax = rd32(COW_IMG(0x103d3c64u));
        loc_1dc = t186;
    }
    COW_AT(101b33bd)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b33c2u);
    t193 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_1dc);
    t194 = g->ecx;
    t195 = g->edx;
    eax = t193;
    ecx = t194;
    edx = t195;
    COW_AT(101b33c2)
    if (ebx != 1u)
    {
        edi = eax;
    }
    else
    {
        edi = eax;
    COW_AT(101b33cd)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b33d2u);
        t196 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        t197 = g->edx;
        eax = t196;
        edx = t197;
    COW_AT(101b33d2)
        if (rd8(self + 0xf100u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf100u);
        }
        else
        {
    COW_AT(101b33e0)
            if (rd32(self + 0xf0f4u) != 0u)
            {
                eax = rd32(self + 0xf0f4u);
    COW_AT(101b33fb)
                g->eax = eax;
                g->esp = sp0 - 0x1d8u;
                COW_RET(0x101b3406u);
                t199 = cow_thiscall(g, COW_IMG(0x101911a0u), rd32(COW_IMG(0x1066269cu)), 0);
                eax = t199;
    COW_AT(101b3406)
            }
            else
            {
    COW_AT(101b33ea)
                t198 = rd32(COW_IMG(0x10662dacu));
                wr32(t198 + 0x14u, 0u);
                eax = t198;
            }
        }
    }
    goto L_101b3594;
L_101b340b: ;
    COW_AT(101b340b)
    g->edx = rd32(self);
    t163 = rd32(self);
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3412u);
    cow_thiscall(g, rd32(t163 + 0x70u), self, 0);
    t164 = g->edx;
    edx = t164;
    COW_AT(101b3412)
    wr32(sp0 - 0x1dcu, edi);
    t165 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t165);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t166 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3421u);
    t167 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t165, edi);
    t168 = g->edx;
    eax = t167;
    edx = t168;
    COW_AT(101b3421)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 8u);
    loc_1e4 = 8u;
    goto L_101b357c;
L_101b342c: ;
    COW_AT(101b342c)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3433u);
    t119 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t120 = g->ecx;
    t121 = g->edx;
    eax = t119;
    ecx = t120;
    edx = t121;
    COW_AT(101b3433)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101b346e)
        if (rd8(self + 0xf123u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b3490)
            wr32(sp0 - 0x1dcu, edi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b3496u);
            t137 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
            t138 = g->ecx;
            t139 = g->edx;
            eax = t137;
            ecx = t138;
            edx = t139;
    COW_AT(101b3496)
            if (eax == 0u) goto L_101b34e3;
    COW_AT(101b349a)
            if ((int32_t)ebx <= 0) goto L_101b34e3;
    COW_AT(101b349e)
            t140 = rd32(self);
            wr8(self + 0xf123u, 0u);
            g->eax = t140;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b34acu);
            t141 = cow_thiscall(g, rd32(t140 + 0x70u), self, 0);
            eax = t141;
    COW_AT(101b34ac)
            wr32(sp0 - 0x1dcu, edi);
            t142 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1e0u, t142);
            g->eax = eax;
            g->edx = t142;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b34bcu);
            t143 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t142, edi);
            t144 = g->edx;
            eax = t143;
            edx = t144;
    COW_AT(101b34bc)
            wr32(sp0 - 0x1dcu, 0u);
            wr32(sp0 - 0x1e0u, 0u);
            wr32(sp0 - 0x1e4u, 0x1bu);
            g->edx = edx;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b34c9u);
            cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, 0u, 0u);
            t145 = g->edx;
            edx = t145;
    COW_AT(101b34c9)
            t146 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x1dcu, t146);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            g->ecx = t146;
            g->edx = edx;
            t147 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b34d7u);
            t148 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t146);
            t149 = g->ecx;
            t150 = g->edx;
            eax = t148;
            ecx = t149;
            edx = t150;
    COW_AT(101b34d7)
            g->eax = eax;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b34deu);
            t151 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            edi = eax;
            eax = t151;
    COW_AT(101b34de)
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b3478)
            t132 = rd32(self);
            wr8(self + 0xf123u, 0u);
            g->eax = eax;
            g->edx = t132;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b3486u);
            t133 = cow_thiscall(g, rd32(t132 + 0x70u), self, 0);
            t134 = g->ecx;
            t135 = g->edx;
            eax = t133;
            ecx = t134;
            edx = t135;
    COW_AT(101b3486)
            g->eax = eax;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b348bu);
            t136 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            eax = t136;
    COW_AT(101b348b)
        }
    }
    else
    {
    COW_AT(101b3437)
        wr32(sp0 - 0x1dcu, edi);
        t122 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1e0u, t122);
        g->eax = eax;
        g->edx = t122;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3447u);
        t123 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t122, edi);
        t124 = g->edx;
        eax = t123;
        edx = t124;
    COW_AT(101b3447)
        wr32(sp0 - 0x1dcu, 0u);
        wr32(sp0 - 0x1e0u, 0u);
        wr32(sp0 - 0x1e4u, 0x1bu);
        g->edx = edx;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3454u);
        cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, 0u, 0u);
        t125 = g->edx;
        edx = t125;
    COW_AT(101b3454)
        t126 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x1dcu, t126);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        g->ecx = t126;
        g->edx = edx;
        t127 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3462u);
        t128 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t126);
        t129 = g->ecx;
        t130 = g->edx;
        eax = t128;
        ecx = t129;
        edx = t130;
    COW_AT(101b3462)
        g->eax = eax;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3469u);
        t131 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        edi = eax;
        eax = t131;
    COW_AT(101b3469)
    }
    goto L_101b3594;
L_101b34e3: ;
    COW_AT(101b34e3)
    wr32(sp0 - 0x1dcu, edi);
    t152 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t152);
    g->eax = t152;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t153 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b34f3u);
    t154 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t152, edi);
    t155 = g->edx;
    eax = t154;
    edx = t155;
    COW_AT(101b34f3)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, 0x1bu);
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3500u);
    t156 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, 0u, 0u);
    eax = t156;
    COW_AT(101b3500)
    t157 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1dcu, t157);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t157;
    t158 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b350fu);
    t159 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t157);
    t160 = g->ecx;
    t161 = g->edx;
    eax = t159;
    ecx = t160;
    edx = t161;
    COW_AT(101b350f)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3516u);
    t162 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    edi = eax;
    eax = t162;
    COW_AT(101b3516)
    goto L_101b3594;
L_101b3518: ;
    COW_AT(101b3518)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b351fu);
    t114 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t115 = g->ecx;
    t116 = g->edx;
    eax = t114;
    ecx = t115;
    edx = t116;
    COW_AT(101b351f)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101b3523)
        wr32(sp0 - 0x1dcu, edi);
        g->eax = eax;
        g->esp = sp0 - 0x1d8u;
        COW_RET(0x101b3529u);
        t117 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
        eax = t117;
    COW_AT(101b3529)
        if (eax != 0u)
        {
    COW_AT(101b352d)
            g->eax = eax;
            g->esp = sp0 - 0x1d8u;
            COW_RET(0x101b3534u);
            t118 = cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
            eax = t118;
    COW_AT(101b3534)
        }
    }
    goto L_101b3594;
L_101b3536: ;
    COW_AT(101b3536)
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b353du);
    t456 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t457 = g->ecx;
    t458 = g->edx;
    eax = t456;
    ecx = t457;
    edx = t458;
    COW_AT(101b353d)
    wr32(sp0 - 0x1dcu, edi);
    if ((uint8_t)eax != 0u)
    {
        loc_1dc = edi;
        goto L_101b3569;
    }
    loc_1dc = edi;
    COW_AT(101b3542)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3547u);
    t459 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_1dc);
    t460 = g->edx;
    eax = t459;
    edx = t460;
    COW_AT(101b3547)
    if (eax == 0u) goto L_101b3568;
    COW_AT(101b354b)
    if (ebp == 0x2eu) goto L_101b3568;
    COW_AT(101b3550)
    if (ebp == 0x22u) goto L_101b3568;
    COW_AT(101b3555)
    if (ebp == 0x21u) goto L_101b3568;
    COW_AT(101b355a)
    if (ebp == 0x10u) goto L_101b3568;
    COW_AT(101b355f)
    g->eax = eax;
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3566u);
    t461 = cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    eax = t461;
    COW_AT(101b3566)
    goto L_101b3594;
L_101b3568: ;
    COW_AT(101b3568)
    wr32(sp0 - 0x1dcu, edi);
    loc_1dc = edi;
L_101b3569: ;
    COW_AT(101b3569)
    t462 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x1e0u, t462);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t463 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1d8u;
    COW_RET(0x101b3577u);
    t464 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t462, loc_1dc);
    t465 = g->edx;
    eax = t464;
    edx = t465;
    COW_AT(101b3577)
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1e4u, ebp);
    loc_1e4 = ebp;
    goto L_101b357c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b29f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b2a05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d8u);
        in_esi = rd32(sp0 - 0x1d4u);
        in_ebp = rd32(sp0 - 0x1d0u);
        in_ebx = rd32(sp0 - 0x1ccu);
        g->esp = sp0 - 0x1d8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b2a0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2a19u:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1d8u);
        in_esi = rd32(sp0 - 0x1d4u);
        in_ebp = rd32(sp0 - 0x1d0u);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1ccu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b2a59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2a69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2a9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2b95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ba3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2bafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2bb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2bbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2bc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2bcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2c60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2c77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2c85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2c8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2c95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2c9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2cacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1e0u;
        wr32(sp0 - 0x1e0u, 0u);
        wr32(sp0 - 0x1dcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b2cb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2cbfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1e0u;
        wr32(sp0 - 0x1e0u, 2u);
        wr32(sp0 - 0x1dcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b2cc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2cc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ccfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2cd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ce0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b2ce5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ce9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2cf8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2d29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2d38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2d3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2d4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2d53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2d62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1dcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2d9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2da6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2dadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2db2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2dbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2dc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2dcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2dd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2dd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2de3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2deau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2df8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2dfau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1d8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2e22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2e95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ea1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ea6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2eb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2eb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ec2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ec6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2eccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ed0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1e0u;
        wr32(sp0 - 0x1dcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b2ed9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ee2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ee7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2eecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2ef3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2efbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2f0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        (void)sp0;
        return 1;
    }
    case 0x101b2f29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b2f3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1dcu;
        (void)sp0;
        return 1;
    }
    case 0x101b2f63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b2f82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2f98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2fa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2fb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2fbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2fc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2fd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b2ff0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3003u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3012u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b301eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3029u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3036u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3045u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b304cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3054u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b305bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3063u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3072u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b307bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3082u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b308eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b309au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b30a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b30b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b30beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b30dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b30edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b30fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b310au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b310fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3116u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b311eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b312du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b313bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b313fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b314bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b314fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b315eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b316bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b317au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3181u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3186u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3196u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b31a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b31b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b31b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b31bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b31c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b31c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b31d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b31e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b31f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3201u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b320eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b321du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3224u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3228u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3237u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3242u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3250u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3260u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3266u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1e4u;
        wr32(sp0 - 0x1dcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b326du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b327bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b328bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3298u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b32e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b32fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3304u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b330cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b331au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3321u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3326u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b332du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3332u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3337u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b333bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b334au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3353u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3362u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3364u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b337bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3388u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3395u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b33a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        (void)sp0;
        return 1;
    }
    case 0x101b33c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b33fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3406u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b340bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3412u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3421u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b342cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3433u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3437u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3447u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3454u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3462u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3469u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b346eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3478u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3486u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b348bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3490u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3496u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b349au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b349eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b34acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b34bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b34c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b34d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b34deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b34e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b34f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3500u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b350fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3516u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3518u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b351fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3523u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3529u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b352du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3534u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3536u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b353du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3542u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3547u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b354bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3550u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3555u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b355au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b355fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3566u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3568u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3569u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1dc;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        wr32(sp0 - 0x1e0u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b3577u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b357cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1e4u;
        wr32(sp0 - 0x1e0u, 0u);
        wr32(sp0 - 0x1dcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b3583u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b358du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        uint32_t loc_1e4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1dcu;
        (void)sp0;
        return 1;
    }
    case 0x101b3592u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3594u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b3599u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1dc;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1dc = rd32(sp0 - 0x1dcu);
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    case 0x101b35a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1d8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101b2a30: holds in_ebx, which no location here says
     101b2a41: holds in_ebx, which no location here says
     101b2a4f: holds in_ebx, which no location here says
     101b2a78: holds in_ebx, which no location here says
     101b2a8a: holds in_ebx, which no location here says
     101b2a94: holds in_ebx, which no location here says
     101b2a99: holds in_ebx, which no location here says
     101b2aac: holds in_ebx, which no location here says
     101b2ab8: holds in_ebx, which no location here says
     101b2ac0: holds in_ebx, which no location here says
     101b2acf: holds in_ebx, which no location here says
     101b2ad7: holds in_ebx, which no location here says
     101b2ae3: holds in_ebx, which no location here says
     101b2aeb: holds in_ebx, which no location here says
     101b2afa: holds in_ebx, which no location here says
     101b2b02: holds in_ebx, which no location here says
     101b2b0a: holds in_ebx, which no location here says
     101b2b12: holds in_ebx, which no location here says
     101b2b19: holds in_ebx, which no location here says
     101b2b21: holds in_ebx, which no location here says
     101b2b28: holds in_ebx, which no location here says
     101b2b30: holds in_ebx, which no location here says
     101b2b36: holds in_ebx, which no location here says
     101b2bd4: holds in_ebx, which no location here says
     101b2bd9: holds in_ebx, which no location here says
     101b2be1: holds in_ebx, which no location here says
     101b2be9: holds in_ebx, which no location here says
     101b2bf1: holds in_ebx, which no location here says
     101b2c01: holds in_ebx, which no location here says
     101b2c08: holds in_ebx, which no location here says
     101b2c11: holds in_ebx, which no location here says
     101b2c18: holds in_ebx, which no location here says
     101b2c26: holds in_ebx, which no location here says
     101b2c2f: holds in_ebx, which no location here says
     101b2c37: holds in_ebx, which no location here says
     101b2c3e: holds in_ebx, which no location here says
     101b2c46: holds in_ebx, which no location here says
     101b2c4c: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b29f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b29f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
