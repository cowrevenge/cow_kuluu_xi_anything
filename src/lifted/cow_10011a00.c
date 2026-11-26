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
    double d218;
    double d374;
    double d388;
    double d400;
    double d405;
    double d406;
    double d407;
    double d408;
    double d411;
    double d415;
    double d420;
    double d421;
    double d422;
    double d424;
    double d425;
    double d431;
    double d432;
    double d438;
    double d440;
    double d441;
    double d444;
    double d445;
    double d446;
    double d453;
    double d460;
    double d461;
    double d462;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_238;
    double loc_238_f;
    double loc_240_f;
    uint32_t loc_244;
    uint32_t loc_248;
    uint32_t loc_24c;
    uint32_t loc_250;
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
    uint32_t t401;
    uint32_t t402;
    uint32_t t403;
    uint32_t t404;
    uint32_t t409;
    uint32_t t41;
    uint32_t t410;
    uint32_t t412;
    uint32_t t413;
    uint32_t t414;
    uint32_t t416;
    uint32_t t417;
    uint32_t t418;
    uint32_t t419;
    uint32_t t42;
    uint32_t t423;
    uint32_t t426;
    uint32_t t427;
    uint32_t t428;
    uint32_t t429;
    uint32_t t43;
    uint32_t t430;
    uint32_t t433;
    uint32_t t434;
    uint32_t t435;
    uint32_t t436;
    uint32_t t437;
    uint32_t t439;
    uint32_t t44;
    uint32_t t442;
    uint32_t t443;
    uint32_t t447;
    uint32_t t448;
    uint32_t t449;
    uint32_t t45;
    uint32_t t450;
    uint32_t t451;
    uint32_t t452;
    uint32_t t454;
    uint32_t t455;
    uint32_t t456;
    uint32_t t457;
    uint32_t t458;
    uint32_t t459;
    uint32_t t46;
    uint32_t t463;
    uint32_t t464;
    uint32_t t465;
    uint32_t t466;
    uint32_t t467;
    uint32_t t468;
    uint32_t t469;
    uint32_t t47;
    uint32_t t470;
    uint32_t t471;
    uint32_t t472;
    uint32_t t473;
    uint32_t t474;
    uint32_t t475;
    uint32_t t476;
    uint32_t t477;
    uint32_t t478;
    uint32_t t479;
    uint32_t t48;
    uint32_t t480;
    uint32_t t481;
    uint32_t t482;
    uint32_t t483;
    uint32_t t484;
    uint32_t t485;
    uint32_t t486;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 632u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10011a24u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x250u); in_esi = rd32(sp0 - 0x24cu); in_ebp = rd32(sp0 - 0x248u); in_ebx = rd32(sp0 - 0x244u); g->ebp = rd32(sp0 - 0x248u); g->ebx = rd32(sp0 - 0x244u); g->edi = rd32(sp0 - 0x250u); g->esi = rd32(sp0 - 0x24cu); goto E_10011a24;
    case 0x10011a34u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x250u); in_esi = rd32(sp0 - 0x24cu); in_ebp = rd32(sp0 - 0x248u); in_ebx = rd32(sp0 - 0x244u); g->ebp = rd32(sp0 - 0x248u); g->ebx = rd32(sp0 - 0x244u); g->edi = rd32(sp0 - 0x250u); g->esi = rd32(sp0 - 0x24cu); goto E_10011a34;
    case 0x10011a3cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x250u); in_esi = rd32(sp0 - 0x24cu); in_ebp = rd32(sp0 - 0x248u); in_ebx = rd32(sp0 - 0x244u); g->ebp = rd32(sp0 - 0x248u); g->ebx = rd32(sp0 - 0x244u); g->edi = rd32(sp0 - 0x250u); g->esi = rd32(sp0 - 0x24cu); goto E_10011a3c;
    case 0x10011a3fu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x250u); in_esi = rd32(sp0 - 0x24cu); in_ebp = rd32(sp0 - 0x248u); in_ebx = rd32(sp0 - 0x244u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0x248u); g->ebx = rd32(sp0 - 0x244u); g->edi = rd32(sp0 - 0x250u); g->esi = rd32(sp0 - 0x24cu); goto E_10011a3f;
    case 0x10011a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011a44;
    case 0x10011a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_248 = rd32(sp0 - 0x248u); loc_244 = rd32(sp0 - 0x244u); goto E_10011a4c;
    case 0x10011a57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011a57;
    case 0x10011a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10011a5b;
    case 0x10011a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10011a6c;
    case 0x10011a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10011a73;
    case 0x10011a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10011a83;
    case 0x10011a8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10011a8a;
    case 0x10011a9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011a9a;
    case 0x10011aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011aa5;
    case 0x10011ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011ab0;
    case 0x10011abbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011abb;
    case 0x10011ac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011ac6;
    case 0x10011ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011ad0;
    case 0x10011ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011ad6;
    case 0x10011adau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011ada;
    case 0x10011adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011adf;
    case 0x10011aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011aea;
    case 0x10011aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011aee;
    case 0x10011b0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011b0e;
    case 0x10011b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011b28;
    case 0x10011b35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011b35;
    case 0x10011b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011b55;
    case 0x10011b73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10011b73;
    case 0x10011b8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011b8c;
    case 0x10011b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011b98;
    case 0x10011ba3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ba3;
    case 0x10011baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bae;
    case 0x10011bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bb7;
    case 0x10011bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bc5;
    case 0x10011bcau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bca;
    case 0x10011bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bce;
    case 0x10011bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bdc;
    case 0x10011be1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011be1;
    case 0x10011beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bee;
    case 0x10011bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bf5;
    case 0x10011bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011bff;
    case 0x10011c07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c07;
    case 0x10011c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c0e;
    case 0x10011c19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c19;
    case 0x10011c23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c23;
    case 0x10011c2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c2b;
    case 0x10011c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c32;
    case 0x10011c3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c3c;
    case 0x10011c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c44;
    case 0x10011c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c4a;
    case 0x10011c50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c50;
    case 0x10011c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c55;
    case 0x10011c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c5d;
    case 0x10011c67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c67;
    case 0x10011c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c6f;
    case 0x10011c81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c81;
    case 0x10011c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c86;
    case 0x10011c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c91;
    case 0x10011c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011c9c;
    case 0x10011ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ca7;
    case 0x10011cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cb4;
    case 0x10011cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cb9;
    case 0x10011cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cbf;
    case 0x10011cc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cc9;
    case 0x10011cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cd4;
    case 0x10011cddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cdd;
    case 0x10011ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ce9;
    case 0x10011cf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cf0;
    case 0x10011cffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011cff;
    case 0x10011d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d0f;
    case 0x10011d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d4f;
    case 0x10011d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d57;
    case 0x10011d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d63;
    case 0x10011d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10011d6f;
    case 0x10011d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d7f;
    case 0x10011d85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d85;
    case 0x10011d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011d99;
    case 0x10011da7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011da7;
    case 0x10011db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011db2;
    case 0x10011dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011dc7;
    case 0x10011dccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011dcc;
    case 0x10011dd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011dd7;
    case 0x10011ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ddf;
    case 0x10011de2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011de2;
    case 0x10011de9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011de9;
    case 0x10011dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011dfe;
    case 0x10011e04u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e04;
    case 0x10011e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e0a;
    case 0x10011e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e10;
    case 0x10011e43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e43;
    case 0x10011e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e48;
    case 0x10011e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e4e;
    case 0x10011e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e6b;
    case 0x10011e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e71;
    case 0x10011e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e76;
    case 0x10011e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e7b;
    case 0x10011e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e83;
    case 0x10011e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e8b;
    case 0x10011e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e92;
    case 0x10011e9au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011e9a;
    case 0x10011ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ea6;
    case 0x10011ebau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011eba;
    case 0x10011ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ec4;
    case 0x10011eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011eea;
    case 0x10011ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ef5;
    case 0x10011ef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011ef9;
    case 0x10011f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f00;
    case 0x10011f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f0b;
    case 0x10011f1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f1a;
    case 0x10011f1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f1f;
    case 0x10011f29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f29;
    case 0x10011f36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f36;
    case 0x10011f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f3e;
    case 0x10011f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f4a;
    case 0x10011f51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f51;
    case 0x10011f59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f59;
    case 0x10011f61u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f61;
    case 0x10011f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f6c;
    case 0x10011f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f76;
    case 0x10011f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f7f;
    case 0x10011f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011f91;
    case 0x10011fa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011fa6;
    case 0x10011fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10011fb2;
    case 0x10011fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011fc3;
    case 0x10011fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10011fcb;
    case 0x10011fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10011fd1;
    case 0x10011fd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10011fd8;
    case 0x10011fe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10011fe4;
    case 0x1001200bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001200b;
    case 0x10012020u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012020;
    case 0x1001202cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001202c;
    case 0x10012030u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012030;
    case 0x1001203bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001203b;
    case 0x1001203fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001203f;
    case 0x1001204au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001204a;
    case 0x1001205cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001205c;
    case 0x10012068u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012068;
    case 0x10012071u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012071;
    case 0x10012080u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012080;
    case 0x1001208du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001208d;
    case 0x10012095u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012095;
    case 0x100120a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120a1;
    case 0x100120aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120ae;
    case 0x100120b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120b6;
    case 0x100120c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120c2;
    case 0x100120cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120cf;
    case 0x100120d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120d7;
    case 0x100120e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120e3;
    case 0x100120f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120f0;
    case 0x100120f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100120f8;
    case 0x10012104u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012104;
    case 0x1001210bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001210b;
    case 0x10012110u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012110;
    case 0x10012116u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012116;
    case 0x10012124u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012124;
    case 0x1001212cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001212c;
    case 0x10012131u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012131;
    case 0x1001214cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001214c;
    case 0x1001214eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001214e;
    case 0x10012169u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012169;
    case 0x1001216du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001216d;
    case 0x10012172u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012172;
    case 0x1001217fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001217f;
    case 0x10012191u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10012191;
    case 0x1001219au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001219a;
    case 0x1001219fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001219f;
    case 0x100121bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100121bb;
    case 0x100121bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100121bd;
    case 0x100121c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100121c4;
    case 0x100121d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100121d9;
    case 0x100121deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100121de;
    case 0x100121e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100121e9;
    case 0x100121f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100121f5;
    case 0x10012200u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012200;
    case 0x1001220cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001220c;
    case 0x1001221eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001221e;
    case 0x1001222cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001222c;
    case 0x10012231u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012231;
    case 0x10012239u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012239;
    case 0x1001224fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001224f;
    case 0x10012266u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012266;
    case 0x1001227du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001227d;
    case 0x10012294u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012294;
    case 0x100122abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100122ab;
    case 0x100122c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100122c2;
    case 0x100122d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100122d9;
    case 0x100122f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100122f0;
    case 0x10012307u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012307;
    case 0x1001231fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001231f;
    case 0x10012337u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012337;
    case 0x1001234cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001234c;
    case 0x10012361u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012361;
    case 0x10012381u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012381;
    case 0x1001239au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001239a;
    case 0x100123a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100123a7;
    case 0x100123bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100123bd;
    case 0x100123d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100123d2;
    case 0x100123fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100123fd;
    case 0x10012413u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012413;
    case 0x10012428u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012428;
    case 0x1001243cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001243c;
    case 0x1001244bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001244b;
    case 0x10012465u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012465;
    case 0x1001246au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001246a;
    case 0x10012471u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012471;
    case 0x1001247au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001247a;
    case 0x100124b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100124b5;
    case 0x100124cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100124ca;
    case 0x100124e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100124e1;
    case 0x100124f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100124f8;
    case 0x1001250fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001250f;
    case 0x10012526u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012526;
    case 0x1001253du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001253d;
    case 0x10012554u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012554;
    case 0x1001256au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001256a;
    case 0x10012581u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012581;
    case 0x10012598u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012598;
    case 0x100125aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100125ae;
    case 0x100125c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100125c6;
    case 0x100125deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100125de;
    case 0x100125f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100125f3;
    case 0x10012608u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10012608;
    case 0x10012648u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012648;
    case 0x10012683u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012683;
    case 0x10012699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012699;
    case 0x100126a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100126a6;
    case 0x100126e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100126e2;
    case 0x1001274au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001274a;
    case 0x1001275eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001275e;
    case 0x10012773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012773;
    case 0x1001277eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001277e;
    case 0x10012787u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012787;
    case 0x10012791u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012791;
    case 0x1001279du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001279d;
    case 0x100127a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127a4;
    case 0x100127a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127a7;
    case 0x100127c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127c0;
    case 0x100127c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127c8;
    case 0x100127d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127d7;
    case 0x100127ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127eb;
    case 0x100127ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100127ff;
    case 0x10012826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012826;
    case 0x1001283bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001283b;
    case 0x10012851u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012851;
    case 0x1001286au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001286a;
    case 0x10012875u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012875;
    case 0x10012880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012880;
    case 0x10012885u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012885;
    case 0x10012890u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012890;
    case 0x1001289au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001289a;
    case 0x1001289fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001289f;
    case 0x100128aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128aa;
    case 0x100128b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128b4;
    case 0x100128b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128b9;
    case 0x100128c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128c3;
    case 0x100128c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128c8;
    case 0x100128d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128d2;
    case 0x100128d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128d7;
    case 0x100128e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128e1;
    case 0x100128ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128eb;
    case 0x100128f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128f0;
    case 0x100128fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100128fb;
    case 0x10012900u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012900;
    case 0x10012905u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012905;
    case 0x1001290cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001290c;
    case 0x1001291bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001291b;
    case 0x10012923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012923;
    case 0x1001292du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001292d;
    case 0x1001293fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001293f;
    case 0x10012949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012949;
    case 0x10012953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012953;
    case 0x10012958u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012958;
    case 0x1001295fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001295f;
    case 0x10012964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012964;
    case 0x1001296bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001296b;
    case 0x10012971u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012971;
    case 0x1001297fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001297f;
    case 0x10012989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012989;
    case 0x1001298eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001298e;
    case 0x10012998u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012998;
    case 0x1001299du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1001299d;
    case 0x100129a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129a8;
    case 0x100129b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129b6;
    case 0x100129beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129be;
    case 0x100129c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129c5;
    case 0x100129dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129dc;
    case 0x100129e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129e2;
    case 0x100129efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100129ef;
    case 0x10012a1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012a1a;
    case 0x10012a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012a1f;
    case 0x10012a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012a24;
    case 0x10012a29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012a29;
    case 0x10012a31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012a31;
    case 0x10012a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10012a35;
    case 0x10012a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012a7f;
    case 0x10012a84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012a84;
    case 0x10012a99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012a99;
    case 0x10012aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012aa1;
    case 0x10012aaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012aaa;
    case 0x10012ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012ab0;
    case 0x10012acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012acd;
    case 0x10012aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012aef;
    case 0x10012afau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012afa;
    case 0x10012b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012b05;
    case 0x10012b12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012b12;
    case 0x10012b20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b20;
    case 0x10012b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b2b;
    case 0x10012b57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b57;
    case 0x10012b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012b62;
    case 0x10012b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b66;
    case 0x10012b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b6d;
    case 0x10012b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012b7b;
    case 0x10012b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b89;
    case 0x10012b94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012b94;
    case 0x10012bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012bb3;
    case 0x10012bc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012bc2;
    case 0x10012bc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012bc4;
    case 0x10012bc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012bc6;
    case 0x10012bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012bce;
    case 0x10012bdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012bde;
    case 0x10012bf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012bf8;
    case 0x10012c1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c1e;
    case 0x10012c30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c30;
    case 0x10012c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c41;
    case 0x10012c5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c5e;
    case 0x10012c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c65;
    case 0x10012c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c77;
    case 0x10012c7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c7e;
    case 0x10012c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c8d;
    case 0x10012c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012c95;
    case 0x10012cb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012cb5;
    case 0x10012cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012cb8;
    case 0x10012cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012cc3;
    case 0x10012cc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012cc8;
    case 0x10012cdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_240_f = rdf32(sp0 - 0x240u); goto E_10012cdf;
    case 0x10012ceau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012cea;
    case 0x10012cfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012cfc;
    case 0x10012d04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012d04;
    case 0x10012d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d30;
    case 0x10012d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238 = rd32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d36;
    case 0x10012d55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d55;
    case 0x10012d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d57;
    case 0x10012d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d64;
    case 0x10012d6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d6b;
    case 0x10012d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012d72;
    case 0x10012d81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); goto E_10012d81;
    case 0x10012d9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012d9b;
    case 0x10012dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012dab;
    case 0x10012db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012db8;
    case 0x10012dbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); goto E_10012dbd;
    case 0x10012dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); goto E_10012dcf;
    case 0x10012ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10012ddc;
    case 0x10012df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012df0;
    case 0x10012dffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238_f = rdf32(sp0 - 0x238u); goto E_10012dff;
    case 0x10012e0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012e0b;
    case 0x10012e11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238_f = rdf32(sp0 - 0x238u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10012e11;
    case 0x10012e13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238_f = rdf32(sp0 - 0x238u); goto E_10012e13;
    case 0x10012e1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_240_f = rdf32(sp0 - 0x240u); loc_238_f = rdf32(sp0 - 0x238u); goto E_10012e1e;
    case 0x10012e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012e23;
    case 0x10012e50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012e50;
    case 0x10012e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012e85;
    case 0x10012e8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012e8a;
    case 0x10012e94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012e94;
    case 0x10012e9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012e9b;
    case 0x10012e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012e9f;
    case 0x10012ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012ea6;
    case 0x10012eabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_10012eab;
    case 0x10012ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012ec5;
    case 0x10012ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012ed2;
    case 0x10012eddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10012edd;
    default: break;
    }
#endif

    COW_AT(10011a00)
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
        loc_244 = in_ebx;
        loc_248 = in_ebp;
        loc_24c = in_esi;
        loc_250 = in_edi;
    }
    else
    {
        edi = t1;
    COW_AT(10011a24)
        d2 = (double)rdf32(self + 0x28u);
        if (!(d2 < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10011a3c)
            x0 = (double)rdf32(self + 0x28u);
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10011a34)
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
    COW_AT(10011a3f)
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011a44u);
        t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    COW_AT(10011a44)
        wr32(sp0 - 0x254u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011a4cu);
        t5 = cow_thiscall(g, COW_IMG(0x1000d3f0u), edi, 1, eax);
        t6 = g->edx;
        eax = t5;
        edx = t6;
        loc_244 = rd32(sp0 - 0x244u);
        loc_248 = rd32(sp0 - 0x248u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_250 = rd32(sp0 - 0x250u);
    }
    COW_AT(10011a4c)
    g->eax = eax;
    t7 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011a57u);
    t8 = cow_fastcall(g, COW_IMG(0x10009710u), t7, edx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(10011a57)
    if ((uint8_t)eax != 0u) goto L_10011a9a;
    COW_AT(10011a5b)
    wr8(rd32(COW_IMG(0x103d3c64u)) + 0x1cu, 0u);
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        goto L_10011a83;
    }
    eax = rd32(COW_IMG(0x10456a7cu));
    COW_AT(10011a6c)
    wr32(sp0 - 0x254u, 0xau);
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011a73u);
    t11 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0xau);
    eax = t11;
    COW_AT(10011a73)
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return eax & 0xffffff00u;
L_10011a83: ;
    COW_AT(10011a83)
    wr32(sp0 - 0x254u, 3u);
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011a8au);
    t12 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 3u);
    eax = t12;
    COW_AT(10011a8a)
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return eax & 0xffffff00u;
L_10011a9a: ;
    COW_AT(10011a9a)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011aa5u);
    t13 = cow_fastcall(g, COW_IMG(0x10009730u), rd32(COW_IMG(0x1045666cu)), edx, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(10011aa5)
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011ab0u);
    t15 = cow_call_regs(g, COW_IMG(0x10009920u), eax, rd32(COW_IMG(0x1045666cu)), g->edx, 1, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(10011ab0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011abbu);
    t17 = cow_stdcall(g, COW_IMG(0x1000bb10u), 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(10011abb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011ac6u);
    t19 = cow_thiscall(g, COW_IMG(0x1003ab70u), rd32(COW_IMG(0x1047b970u)), 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(10011ac6)
    if (rd32(COW_IMG(0x10455c20u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10455c20u));
    COW_AT(10011ad0)
        wr32(sp0 - 0x254u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011ad6u);
        t21 = cow_thiscall(g, COW_IMG(0x10008830u), ecx, 1, 0u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(10011ad6)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(10011ada)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10011adfu);
            t24 = cow_stdcall(g, COW_IMG(0x1019c5b0u), 0);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    }
    COW_AT(10011adf)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011aeau);
    t26 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    eax = t26;
    COW_AT(10011aea)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10011aee)
        t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u);
        wr32(sp0 - 0x254u, t27);
        t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
        wr32(sp0 - 0x258u, t28);
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
        wr32(sp0 - 0x25cu, t29);
        g->ebx = 0u;
        g->edx = t29;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011b0eu);
        cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t29, t28, t27);
        t30 = g->edx;
        edx = t30;
    COW_AT(10011b0e)
        wr32(sp0 - 0x254u, 0u);
        wr32(sp0 - 0x258u, 0x3f800000u);
        t31 = rd32(self + 0x308u);
        wr32(sp0 - 0x25cu, t31);
        wr32(sp0 - 0x260u, 3u);
        g->eax = t31;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011b28u);
        t32 = cow_thiscall(g, COW_IMG(0x1000a390u), rd32(COW_IMG(0x1045666cu)), 4, 3u, t31, 0x3f800000u, 0u);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    COW_AT(10011b28)
        wr32(sp0 - 0x254u, 0u);
        wr32(sp0 - 0x258u, 0u);
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011b35u);
        cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    }
    COW_AT(10011b35)
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
    COW_RET(0x10011b55u);
    t37 = cow_thiscall(g, COW_IMG(0x1000a800u), rd32(COW_IMG(0x1045666cu)), 3, t36, t35, t34);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    COW_AT(10011b55)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0x3f800000u);
    t39 = rd32(self + 0x308u);
    wr32(sp0 - 0x25cu, t39);
    wr32(sp0 - 0x260u, 3u);
    t40 = rd32(COW_IMG(0x1045666cu));
    wr8(sp0 - 0x239u, (uint8_t)eax);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011b73u);
    cow_thiscall(g, COW_IMG(0x1000a390u), t40, 4, 3u, t39, 0x3f800000u, 0u);
    COW_AT(10011b73)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0xa0u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10011b98;
    }
    COW_AT(10011b8c)
    wr32(self + 0x44u, 0xdu);
L_10011cb9: ;
    COW_AT(10011cb9)
    edx = rd32(COW_IMG(0x10456a28u));
L_10011cbf: ;
    COW_AT(10011cbf)
    if (rd32(self + 0x44u) == rd32(self + 0x40u))
    {
        ecx = rd32(self + 0x40u);
    }
    else
    {
        eax = rd32(self + 0x44u);
    COW_AT(10011cc9)
        wr32(sp0 - 0x254u, 0u);
        wr32(self + 0x40u, eax);
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011cd4u);
        cow_call_regs(g, COW_IMG(0x10010ce0u), eax, self, g->edx, 0, 1, rd32(sp0 - 0x254u));
        t68 = g->ecx;
        ecx = t68;
    COW_AT(10011cd4)
        wr32(self + 0x48u, 0u);
        edx = rd32(COW_IMG(0x10456a28u));
    }
    COW_AT(10011cdd)
    if (rd32(self + 0x44u) > 0x11u)
    {
        edi = 0xcu;
        goto L_100121c4;
    }
    eax = rd32(self + 0x44u);
    COW_AT(10011ce9)
    t69 = rd32(COW_IMG(0x10012eecu) + eax * 4u);
    switch (t69 - RD)
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
    COW_AT(10011b98)
    if (rd32(self + 0x44u) == 0x11u) goto L_10011cbf;
    ecx = rd32(self + 0x44u);
    COW_AT(10011ba3)
    if (eax == 0x90u) goto L_10011cbf;
    COW_AT(10011bae)
    if (ecx == 0xdu) goto L_10011c6f;
    COW_AT(10011bb7)
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        goto L_10011c4a;
    }
    ecx = rd32(COW_IMG(0x103601bcu));
    COW_AT(10011bc5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011bcau);
    t41 = cow_thiscall(g, COW_IMG(0x100db140u), ecx, 0);
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(10011bca)
    if (eax != 0xcu) goto L_10011bdc;
    COW_AT(10011bce)
    wr32(self + 0x44u, 0x11u);
    wr32(COW_IMG(0x10456948u), 0xcu);
    edi = 0xcu;
L_100121c4: ;
    COW_AT(100121c4)
    t177 = rd32(COW_IMG(0x1045666cu));
    wr8(t177 + 0x828u, 0u);
    if (rd32(COW_IMG(0x10455af8u)) == 0u)
    {
        eax = t177;
    }
    else
    {
        eax = t177;
        ecx = rd32(COW_IMG(0x10455af8u));
    COW_AT(100121d9)
        g->esp = sp0 - 0x250u;
        COW_RET(0x100121deu);
        t178 = cow_call_regs(g, COW_IMG(0x10003650u), eax, ecx, edx, 1, 0);
        t179 = g->edx;
        eax = t178;
        edx = t179;
    }
    COW_AT(100121de)
    g->edx = edx;
    t180 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x100121e9u);
    t181 = cow_call_regs(g, COW_IMG(0x10009920u), eax, t180, g->edx, 1, 0);
    t182 = g->ecx;
    t183 = g->edx;
    eax = t181;
    ecx = t182;
    edx = t183;
    COW_AT(100121e9)
    t184 = rd32(COW_IMG(0x10456ad8u));
    if (t184 != 0u)
    {
    COW_AT(100121f5)
        t185 = rd8(sp0 - 0x239u);
        if ((uint8_t)t185 == 1u)
        {
    COW_AT(10012200)
            t186 = rd32(COW_IMG(0x10666e7cu));
            if (t186 == 0u)
            {
    COW_AT(1001220c)
                t187 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c0u);
                if (t187 == 0u)
                {
                    ecx = rd32(COW_IMG(0x1045666cu));
                }
                else
                {
    COW_AT(1001221e)
                    if (rd32(COW_IMG(0x1065cb04u)) == 0u)
                    {
                        ecx = rd32(COW_IMG(0x1065cb04u));
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(1001222c)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x250u;
                        COW_RET(0x10012231u);
                        t188 = cow_thiscall(g, COW_IMG(0x10187000u), ecx, 0);
                        t189 = g->ecx;
                        t190 = g->edx;
                        eax = t188;
                        ecx = t189;
                        edx = t190;
    COW_AT(10012231)
                        if (eax != 0u)
                        {
    COW_AT(10012239)
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 0xbu);
                            wr32(sp0 - 0x25cu, 0u);
                            t191 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t191);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001224fu);
                            cow_thiscall(g, rd32(rd32(t191) + 0xfcu), rd32(t191), 4, t191, 0u, 0xbu, 0u);
    COW_AT(1001224f)
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 0x10u);
                            wr32(sp0 - 0x25cu, 0u);
                            t192 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t192);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012266u);
                            cow_thiscall(g, rd32(rd32(t192) + 0xfcu), rd32(t192), 4, t192, 0u, 0x10u, 2u);
    COW_AT(10012266)
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 0x11u);
                            wr32(sp0 - 0x25cu, 0u);
                            t193 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t193);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001227du);
                            cow_thiscall(g, rd32(rd32(t193) + 0xfcu), rd32(t193), 4, t193, 0u, 0x11u, 2u);
    COW_AT(1001227d)
                            wr32(sp0 - 0x254u, 3u);
                            wr32(sp0 - 0x258u, 0xdu);
                            wr32(sp0 - 0x25cu, 0u);
                            t194 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t194);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012294u);
                            cow_thiscall(g, rd32(rd32(t194) + 0xfcu), rd32(t194), 4, t194, 0u, 0xdu, 3u);
    COW_AT(10012294)
                            wr32(sp0 - 0x254u, 3u);
                            wr32(sp0 - 0x258u, 0xeu);
                            wr32(sp0 - 0x25cu, 0u);
                            t195 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t195);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100122abu);
                            cow_thiscall(g, rd32(rd32(t195) + 0xfcu), rd32(t195), 4, t195, 0u, 0xeu, 3u);
    COW_AT(100122ab)
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 1u);
                            wr32(sp0 - 0x25cu, 0u);
                            t196 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t196);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100122c2u);
                            cow_thiscall(g, rd32(rd32(t196) + 0xfcu), rd32(t196), 4, t196, 0u, 1u, 2u);
    COW_AT(100122c2)
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 2u);
                            wr32(sp0 - 0x25cu, 0u);
                            t197 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t197);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100122d9u);
                            cow_thiscall(g, rd32(rd32(t197) + 0xfcu), rd32(t197), 4, t197, 0u, 2u, 2u);
    COW_AT(100122d9)
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 4u);
                            wr32(sp0 - 0x25cu, 0u);
                            t198 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t198);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100122f0u);
                            cow_thiscall(g, rd32(rd32(t198) + 0xfcu), rd32(t198), 4, t198, 0u, 4u, 2u);
    COW_AT(100122f0)
                            wr32(sp0 - 0x254u, 2u);
                            wr32(sp0 - 0x258u, 5u);
                            wr32(sp0 - 0x25cu, 0u);
                            t199 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t199);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012307u);
                            cow_thiscall(g, rd32(rd32(t199) + 0xfcu), rd32(t199), 4, t199, 0u, 5u, 2u);
    COW_AT(10012307)
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 4u);
                            wr32(sp0 - 0x25cu, 1u);
                            t200 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t200);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001231fu);
                            cow_thiscall(g, rd32(rd32(t200) + 0xfcu), rd32(t200), 4, t200, 1u, 4u, 1u);
    COW_AT(1001231f)
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 1u);
                            wr32(sp0 - 0x25cu, 1u);
                            t201 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x260u, t201);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012337u);
                            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t201, 1u, 1u, 1u);
    COW_AT(10012337)
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 7u);
                            t202 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t202);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001234cu);
                            cow_thiscall(g, rd32(rd32(t202) + 0xc8u), rd32(t202), 3, t202, 7u, 0u);
    COW_AT(1001234c)
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 0xeu);
                            t203 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t203);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012361u);
                            cow_thiscall(g, rd32(rd32(t203) + 0xc8u), rd32(t203), 3, t203, 0xeu, 0u);
    COW_AT(10012361)
                            t204 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c8u);
                            wr32(sp0 - 0x254u, t204);
                            t205 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c4u);
                            wr32(sp0 - 0x258u, t205);
                            t206 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c0u);
                            wr32(sp0 - 0x25cu, t206);
                            g->ebx = 0u;
                            g->edx = t206;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012381u);
                            cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t206, t205, t204);
                            t207 = g->edx;
                            edx = t207;
    COW_AT(10012381)
                            wr32(sp0 - 0x254u, 0xffffffffu);
                            wr32(sp0 - 0x258u, 0x80808080u);
                            t208 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
                            wr32(sp0 - 0x25cu, t208);
                            g->eax = t208;
                            g->edx = edx;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001239au);
                            t209 = cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t208, 0x80808080u, 0xffffffffu);
                            t210 = g->edx;
                            eax = t209;
                            edx = t210;
    COW_AT(1001239a)
                            wr32(sp0 - 0x254u, 0u);
                            wr32(sp0 - 0x258u, 0u);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100123a7u);
                            cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    COW_AT(100123a7)
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 7u);
                            t211 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t211);
                            g->edx = rd32(t211);
                            t212 = rd32(t211);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100123bdu);
                            cow_thiscall(g, rd32(t212 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t211, 7u, 1u);
                            t213 = g->edx;
                            edx = t213;
    COW_AT(100123bd)
                            wr32(sp0 - 0x254u, 1u);
                            wr32(sp0 - 0x258u, 0xeu);
                            t214 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x25cu, t214);
                            g->eax = t214;
                            g->edx = edx;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100123d2u);
                            t215 = cow_thiscall(g, rd32(rd32(t214) + 0xc8u), rd32(t214), 3, t214, 0xeu, 1u);
                            t216 = g->edx;
                            eax = t215;
                            edx = t216;
    COW_AT(100123d2)
                            wr32(sp0 - 0x238u, 0u);
                            wr32(sp0 - 0x234u, 0u);
                            wr32(sp0 - 0x230u, 0u);
                            wr32(sp0 - 0x22cu, 0x3f800000u);
                            g->eax = eax;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x100123fdu);
                            t217 = cow_thiscall(g, COW_IMG(0x10186fe0u), rd32(COW_IMG(0x1065cb04u)), 0);
                            d218 = cow_take_float(g);
                            eax = t217;
                            x0 = d218;
    COW_AT(100123fd)
                            wrf32(sp0 - 0x230u, (float)(double)(float)-x0);
                            wr32(sp0 - 0x254u, sp0 - 0x238u);
                            g->eax = eax;
                            g->edx = sp0 - 0x238u;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012413u);
                            t219 = cow_thiscall(g, COW_IMG(0x10028200u), self + 0x294u, 1, sp0 - 0x238u);
                            t220 = g->edx;
                            eax = t219;
                            edx = t220;
    COW_AT(10012413)
                            wr32(sp0 - 0x254u, COW_IMG(0x104568a8u));
                            wr32(sp0 - 0x258u, 0x100u);
                            g->edx = edx;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012428u);
                            cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, COW_IMG(0x104568a8u));
                            t221 = g->edx;
                            edx = t221;
    COW_AT(10012428)
                            wr32(sp0 - 0x254u, self + 0x94u);
                            wr32(sp0 - 0x258u, 2u);
                            g->eax = self + 0x94u;
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001243cu);
                            t222 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, self + 0x94u);
                            eax = t222;
    COW_AT(1001243c)
                            wr32(sp0 - 0x254u, sp0 - 0x238u);
                            wr32(sp0 - 0x258u, sp0 - 0x238u);
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x1001244bu);
                            cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x238u, sp0 - 0x238u);
    COW_AT(1001244b)
                            t223 = rd32(sp0 - 0x230u);
                            wr32(sp0 - 0x254u, t223);
                            t224 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1c0u);
                            wr32(sp0 - 0x258u, t224);
                            g->edx = t224;
                            t225 = rd32(COW_IMG(0x1045666cu));
                            g->esp = sp0 - 0x250u;
                            COW_RET(0x10012465u);
                            t226 = cow_call_regs(g, COW_IMG(0x1000aab0u), t223, t225, g->edx, 0, 2, t224, t223);
                            t227 = g->ecx;
                            t228 = g->edx;
                            eax = t226;
                            ecx = t227;
                            edx = t228;
                        }
                    }
                }
            }
        }
    }
    COW_AT(10012465)
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001246au);
    t229 = cow_stdcall(g, COW_IMG(0x10012f40u), 0);
    t230 = g->edx;
    eax = t229;
    edx = t230;
    COW_AT(1001246a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012471u);
    t231 = cow_thiscall(g, COW_IMG(0x100132b0u), self, 0);
    t232 = g->ecx;
    t233 = g->edx;
    eax = t231;
    ecx = t232;
    edx = t233;
    COW_AT(10012471)
    if (rd8(COW_IMG(0x10350174u)) < 0x80u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10350174u));
    COW_AT(1001247a)
        t234 = rd8(self + 0x322u);
        t235 = rd8(self + 0x321u);
        wr8(sp0 - 0x23eu, (uint8_t)((uint8_t)((uint8_t)eax + t234) + 0x80u));
        t236 = rd8(self + 0x320u);
        wr8(sp0 - 0x23fu, (uint8_t)((uint8_t)((uint8_t)eax + t235) + 0x80u));
        wr8(sp0 - 0x23du, 0u);
        wr8(sp0 - 0x240u, (uint8_t)((uint8_t)((uint8_t)eax + t236) + 0x80u));
        t237 = rd32(sp0 - 0x240u);
        wr32(self + 0x338u, t237);
        edx = t237;
    }
    COW_AT(100124b5)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0xbu);
    wr32(sp0 - 0x25cu, 0u);
    t238 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t238);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100124cau);
    cow_thiscall(g, rd32(rd32(t238) + 0xfcu), rd32(t238), 4, t238, 0u, 0xbu, 0u);
    COW_AT(100124ca)
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 0x10u);
    wr32(sp0 - 0x25cu, 0u);
    t239 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t239);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100124e1u);
    cow_thiscall(g, rd32(rd32(t239) + 0xfcu), rd32(t239), 4, t239, 0u, 0x10u, 2u);
    COW_AT(100124e1)
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 0x11u);
    wr32(sp0 - 0x25cu, 0u);
    t240 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t240);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100124f8u);
    cow_thiscall(g, rd32(rd32(t240) + 0xfcu), rd32(t240), 4, t240, 0u, 0x11u, 2u);
    COW_AT(100124f8)
    wr32(sp0 - 0x254u, 3u);
    wr32(sp0 - 0x258u, 0xdu);
    wr32(sp0 - 0x25cu, 0u);
    t241 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t241);
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001250fu);
    cow_thiscall(g, rd32(rd32(t241) + 0xfcu), rd32(t241), 4, t241, 0u, 0xdu, 3u);
    COW_AT(1001250f)
    wr32(sp0 - 0x254u, 3u);
    wr32(sp0 - 0x258u, 0xeu);
    wr32(sp0 - 0x25cu, 0u);
    t242 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t242);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012526u);
    cow_thiscall(g, rd32(rd32(t242) + 0xfcu), rd32(t242), 4, t242, 0u, 0xeu, 3u);
    COW_AT(10012526)
    wr32(sp0 - 0x254u, 5u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, 0u);
    t243 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t243);
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001253du);
    cow_thiscall(g, rd32(rd32(t243) + 0xfcu), rd32(t243), 4, t243, 0u, 1u, 5u);
    COW_AT(1001253d)
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 2u);
    wr32(sp0 - 0x25cu, 0u);
    t244 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t244);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012554u);
    cow_thiscall(g, rd32(rd32(t244) + 0xfcu), rd32(t244), 4, t244, 0u, 2u, 2u);
    COW_AT(10012554)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 3u);
    wr32(sp0 - 0x25cu, 0u);
    t245 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t245);
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001256au);
    cow_thiscall(g, rd32(rd32(t245) + 0xfcu), rd32(t245), 4, t245, 0u, 3u, 0u);
    COW_AT(1001256a)
    wr32(sp0 - 0x254u, 5u);
    wr32(sp0 - 0x258u, 4u);
    wr32(sp0 - 0x25cu, 0u);
    t246 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t246);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012581u);
    cow_thiscall(g, rd32(rd32(t246) + 0xfcu), rd32(t246), 4, t246, 0u, 4u, 5u);
    COW_AT(10012581)
    wr32(sp0 - 0x254u, 2u);
    wr32(sp0 - 0x258u, 5u);
    wr32(sp0 - 0x25cu, 0u);
    t247 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t247);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012598u);
    cow_thiscall(g, rd32(rd32(t247) + 0xfcu), rd32(t247), 4, t247, 0u, 5u, 2u);
    COW_AT(10012598)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 6u);
    wr32(sp0 - 0x25cu, 0u);
    t248 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t248);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100125aeu);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t248, 0u, 6u, 0u);
    COW_AT(100125ae)
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 4u);
    wr32(sp0 - 0x25cu, 1u);
    t249 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t249);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100125c6u);
    cow_thiscall(g, rd32(rd32(t249) + 0xfcu), rd32(t249), 4, t249, 1u, 4u, 1u);
    COW_AT(100125c6)
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, 1u);
    t250 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x260u, t250);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100125deu);
    cow_thiscall(g, rd32(rd32(t250) + 0xfcu), rd32(t250), 4, t250, 1u, 1u, 1u);
    COW_AT(100125de)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 7u);
    t251 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t251);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100125f3u);
    cow_thiscall(g, rd32(rd32(t251) + 0xc8u), rd32(t251), 3, t251, 7u, 0u);
    COW_AT(100125f3)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0xeu);
    t252 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t252);
    g->eax = t252;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t253 = rd32(t252);
    t254 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012608u);
    t255 = cow_thiscall(g, rd32(t253 + 0xc8u), t253, 3, t252, 0xeu, 0u);
    t256 = g->ecx;
    t257 = g->edx;
    eax = t255;
    ecx = t256;
    edx = t257;
    COW_AT(10012608)
    t258 = rd16(COW_IMG(0x106218b8u));
    t259 = rd16(self + 0x18u);
    t260 = rd16(COW_IMG(0x106218b4u));
    t261 = rd16(COW_IMG(0x106218bau));
    t262 = rd16(COW_IMG(0x106218b6u));
    wr16(sp0 - 0x238u, (uint16_t)t260);
    wr16(COW_IMG(0x106218b8u), (uint16_t)t259);
    t263 = rd16(self + 0x1au);
    wr16(sp0 - 0x234u, (uint16_t)t258);
    wr16(COW_IMG(0x106218bau), (uint16_t)t263);
    g->esi = self;
    g->eax = (eax & 0xffff0000u) | t258;
    g->ecx = (ecx & 0xffff0000u) | t259;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012648u);
    t264 = cow_stdcall(g, COW_IMG(0x101d0b00u), 0);
    t265 = g->ecx;
    eax = t264;
    ecx = t265;
    ebp = t261;
    edi = (edi & 0xffff0000u) | t262;
    COW_AT(10012648)
    t266 = rd16(sp0 - 0x234u);
    t267 = rd32(COW_IMG(0x1045666cu));
    wr16(COW_IMG(0x106218b4u), rd16(sp0 - 0x238u));
    wr16(COW_IMG(0x106218b6u), (uint16_t)edi);
    wr16(COW_IMG(0x106218b8u), (uint16_t)t266);
    wr16(COW_IMG(0x106218bau), (uint16_t)ebp);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 7u);
    t268 = rd32(t267 + 0xcu);
    wr32(sp0 - 0x25cu, t268);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012683u);
    cow_thiscall(g, rd32(rd32(rd32(t267 + 0xcu)) + 0xc8u), rd32(rd32(t267 + 0xcu)), 3, t268, 7u, 1u);
    COW_AT(10012683)
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 0xeu);
    t269 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t269);
    g->eax = t269;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t270 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012699u);
    t271 = cow_thiscall(g, rd32(rd32(t269) + 0xc8u), rd32(t269), 3, t269, 0xeu, 1u);
    t272 = g->edx;
    eax = t271;
    edx = t272;
    COW_AT(10012699)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0u);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100126a6u);
    cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    COW_AT(100126a6)
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x214u, 0u);
    t273 = rd16(self + 0x10u);
    wr32(sp0 - 0x210u, t273);
    t274 = rd16(self + 0x12u);
    wr32(sp0 - 0x20cu, t274);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x204u, 0x3f800000u);
    wr32(sp0 - 0x254u, sp0 - 0x218u);
    g->esp = sp0 - 0x250u;
    COW_RET(0x100126e2u);
    cow_thiscall(g, COW_IMG(0x10009dc0u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x218u);
    COW_AT(100126e2)
    t275 = rd16(self + 0x10u);
    wr32(sp0 - 0x220u, t275);
    t276 = rd16(self + 0x18u);
    wr32(sp0 - 0x230u, t276);
    t277 = rd16(self + 0x12u);
    wr32(sp0 - 0x21cu, t277);
    t278 = rd16(self + 0x1au);
    wr32(sp0 - 0x22cu, t278);
    wr32(sp0 - 0x254u, sp0 - 0x238u);
    t279 = rd32(self + 0x320u);
    wr32(sp0 - 0x240u, t279);
    t280 = rd32(COW_IMG(0x1045666cu));
    wr8(sp0 - 0x23du, 0x80u);
    wr32(sp0 - 0x258u, sp0 - 0x228u);
    t281 = rd32(sp0 - 0x240u);
    wr32(sp0 - 0x25cu, t281);
    wr32(sp0 - 0x260u, t280 + 0x190u);
    wr32(sp0 - 0x228u, 0u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x234u, 0u);
    g->ebx = 0u;
    g->edx = t280 + 0x190u;
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001274au);
    cow_thiscall(g, COW_IMG(0x1000c0b0u), t280, 4, t280 + 0x190u, t281, sp0 - 0x228u, sp0 - 0x238u);
    t282 = g->edx;
    edx = t282;
    COW_AT(1001274a)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 7u);
    t283 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t283);
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001275eu);
    cow_thiscall(g, rd32(rd32(t283) + 0xc8u), rd32(t283), 3, t283, 7u, 0u);
    COW_AT(1001275e)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0xeu);
    t284 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x25cu, t284);
    g->eax = t284;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t285 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012773u);
    t286 = cow_thiscall(g, rd32(rd32(t284) + 0xc8u), rd32(t284), 3, t284, 0xeu, 0u);
    t287 = g->edx;
    eax = t286;
    edx = t287;
    COW_AT(10012773)
    g->ecx = rd32(COW_IMG(0x1045666cu));
    g->edx = edx;
    t288 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001277eu);
    cow_stdcall(g, COW_IMG(0x1000bb20u), 0);
    t289 = g->ecx;
    t290 = g->edx;
    ecx = t289;
    edx = t290;
    COW_AT(1001277e)
    if (rd32(COW_IMG(0x103601bcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x103601bcu));
    COW_AT(10012787)
        if ((int32_t)rd32(eax + 0xb8u) < 0)
        {
            eax = rd32(eax + 0xb8u);
    COW_AT(10012791)
            wr32(COW_IMG(0x10456900u), eax);
            if (eax == 0xfffffbe0u)
            {
    COW_AT(1001279d)
                wr32(sp0 - 0x254u, 1u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                COW_RET(0x100127a4u);
                cow_call_regs(g, COW_IMG(0x100163e0u), eax, g->ecx, g->edx, 1, 1, 1u);
                t291 = g->ecx;
                t292 = g->edx;
                ecx = t291;
                edx = t292;
    COW_AT(100127a4)
            }
        }
    }
    COW_AT(100127a7)
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
    COW_AT(100127c0)
        if (ebp != 0u)
        {
    COW_AT(100127c8)
            wr32(sp0 - 0x254u, 0u);
            wr32(sp0 - 0x258u, 7u);
            t293 = rd32(eax + 0xcu);
            wr32(sp0 - 0x25cu, t293);
            g->edx = rd32(t293);
            t294 = rd32(t293);
            g->esp = sp0 - 0x250u;
            COW_RET(0x100127d7u);
            cow_thiscall(g, rd32(t294 + 0xc8u), ecx, 3, t293, 7u, 0u);
            t295 = g->edx;
            edx = t295;
    COW_AT(100127d7)
            wr32(sp0 - 0x254u, 0u);
            wr32(sp0 - 0x258u, 0xeu);
            t296 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t296);
            g->eax = t296;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100127ebu);
            t297 = cow_thiscall(g, rd32(rd32(t296) + 0xc8u), rd32(t296), 3, t296, 0xeu, 0u);
            eax = t297;
    COW_AT(100127eb)
            wr32(sp0 - 0x254u, ebp);
            t298 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e4u);
            wr32(sp0 - 0x258u, t298);
            wr32(sp0 - 0x25cu, edi);
            g->ebx = 0u;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100127ffu);
            cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, edi, t298, ebp);
    COW_AT(100127ff)
            wr32(sp0 - 0x254u, 0xffffffffu);
            t299 = rd32(self + 0x320u);
            wr32(sp0 - 0x240u, t299);
            wr8(sp0 - 0x23du, 0u);
            t300 = rd32(sp0 - 0x240u);
            wr32(sp0 - 0x258u, t300);
            t301 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
            wr32(sp0 - 0x25cu, t301);
            g->edx = t301;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012826u);
            cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t301, t300, 0xffffffffu);
            t302 = g->edx;
            edx = t302;
    COW_AT(10012826)
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 7u);
            t303 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t303);
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001283bu);
            cow_thiscall(g, rd32(rd32(t303) + 0xc8u), rd32(t303), 3, t303, 7u, 1u);
    COW_AT(1001283b)
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 0xeu);
            t304 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t304);
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012851u);
            cow_thiscall(g, rd32(rd32(t304) + 0xc8u), rd32(t304), 3, t304, 0xeu, 1u);
    COW_AT(10012851)
            wr32(sp0 - 0x254u, 0xfu);
            wr32(sp0 - 0x258u, 0xa8u);
            t305 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x25cu, t305);
            g->eax = t305;
            g->edx = rd32(COW_IMG(0x1045666cu));
            t306 = rd32(COW_IMG(0x1045666cu));
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001286au);
            t307 = cow_thiscall(g, rd32(rd32(t305) + 0xc8u), rd32(t305), 3, t305, 0xa8u, 0xfu);
            t308 = g->edx;
            eax = t307;
            edx = t308;
        }
    }
    COW_AT(1001286a)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012875u);
    t309 = cow_fastcall(g, COW_IMG(0x101bce30u), rd32(COW_IMG(0x10662dbcu)), edx, 0);
    t310 = g->edx;
    eax = t309;
    edx = t310;
    COW_AT(10012875)
    g->edx = edx;
    t311 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 0x7cu;
    t312 = cow_bridge_indirect(g, COW_IMG(0x10005a40u), COW_IMG(0x10012880u), 117u, (const uint32_t[]){rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u)}, t311, g->edx, eax, 468u);
    t313 = g->ecx;
    t314 = g->edx;
    eax = t312;
    ecx = t313;
    edx = t314;
    COW_AT(10012880)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012885u);
    t315 = cow_stdcall(g, COW_IMG(0x10123e90u), 0);
    t316 = g->edx;
    eax = t315;
    edx = t316;
    COW_AT(10012885)
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012890u);
    t317 = cow_thiscall(g, COW_IMG(0x100088f0u), rd32(COW_IMG(0x10455c20u)), 0);
    t318 = g->edx;
    eax = t317;
    edx = t318;
    COW_AT(10012890)
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1001289a)
        g->ebx = 0u;
        g->esp = sp0 - 0x23cu;
        COW_RET(0x1001289fu);
        t319 = cow_call_regs(g, COW_IMG(0x101579c0u), eax, ecx, edx, 1, 5, rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u));
        eax = t319;
    }
    COW_AT(1001289f)
    t320 = rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    if ((uint8_t)t320 == 0u)
    {
        edx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        edx = rd32(COW_IMG(0x104568fcu));
    COW_AT(100128aa)
        if (rd32(COW_IMG(0x106627ecu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x106627ecu));
    COW_AT(100128b4)
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100128b9u);
            t321 = cow_thiscall(g, COW_IMG(0x101ab820u), ecx, 0);
            t322 = g->edx;
            eax = t321;
            edx = t322;
        }
    COW_AT(100128b9)
        if (rd32(COW_IMG(0x10662da8u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662da8u));
    COW_AT(100128c3)
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100128c8u);
            t323 = cow_thiscall(g, COW_IMG(0x101ae3e0u), ecx, 0);
            t324 = g->edx;
            eax = t323;
            edx = t324;
        }
    COW_AT(100128c8)
        if (rd32(COW_IMG(0x1066279cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1066279cu));
    COW_AT(100128d2)
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100128d7u);
            cow_thiscall(g, COW_IMG(0x101a2e80u), ecx, 0);
            t325 = g->edx;
            edx = t325;
        }
    }
    COW_AT(100128d7)
    t326 = rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    if ((uint8_t)t326 == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104568fcu));
    COW_AT(100128e1)
        if (rd32(COW_IMG(0x10662dccu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662dccu));
    COW_AT(100128eb)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100128f0u);
            t327 = cow_thiscall(g, COW_IMG(0x101c46a0u), ecx, 0);
            t328 = g->edx;
            eax = t327;
            edx = t328;
        }
    }
    COW_AT(100128f0)
    t329 = rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    if ((uint8_t)t329 == 0u)
    {
        ecx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104568fcu));
    COW_AT(100128fb)
        g->ebx = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012900u);
        t330 = cow_call_regs(g, COW_IMG(0x101ab770u), eax, g->ecx, g->edx, 1, 0);
        t331 = g->ecx;
        t332 = g->edx;
        eax = t330;
        ecx = t331;
        edx = t332;
    }
    COW_AT(10012900)
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012905u);
    t333 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 0);
    t334 = g->edx;
    eax = t333;
    edx = t334;
    COW_AT(10012905)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001290cu);
    t335 = cow_fastcall(g, COW_IMG(0x10154860u), eax, edx, 0);
    t336 = g->ecx;
    eax = t335;
    ecx = t336;
    COW_AT(1001290c)
    t337 = rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    if ((uint8_t)t337 == 0u)
    {
        edx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        edx = rd32(COW_IMG(0x104568fcu));
    COW_AT(1001291b)
        t338 = rd32(COW_IMG(0x106627ecu));
        if (t338 != 0u)
        {
    COW_AT(10012923)
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001292du);
            cow_call_regs(g, COW_IMG(0x101604b0u), g->eax, g->ecx, edx, 1, 0);
            t339 = g->edx;
            edx = t339;
    COW_AT(1001292d)
            t340 = rd32(COW_IMG(0x106627ecu));
            wr8(t340, 1u);
            g->ebx = 0u;
            g->edi = edi;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001293fu);
            t341 = cow_call_regs(g, COW_IMG(0x1015fa00u), t340, COW_IMG(0x10621838u), g->edx, 1, 0);
            t342 = g->edx;
            eax = t341;
            edx = t342;
    COW_AT(1001293f)
            g->ebx = 0u;
            g->eax = eax;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012949u);
            t343 = cow_fastcall(g, COW_IMG(0x1015f6a0u), COW_IMG(0x10621838u), edx, 0);
            t344 = g->edx;
            eax = t343;
            edx = t344;
    COW_AT(10012949)
            g->eax = eax;
            g->ecx = COW_IMG(0x10621838u);
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012953u);
            t345 = cow_call_regs(g, COW_IMG(0x10160650u), g->eax, g->ecx, edx, 1, 0);
            t346 = g->ecx;
            t347 = g->edx;
            eax = t345;
            ecx = t346;
            edx = t347;
        }
    COW_AT(10012953)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012958u);
        t348 = cow_stdcall(g, COW_IMG(0x1025e0d0u), 0);
        t349 = g->edx;
        eax = t348;
        edx = t349;
    COW_AT(10012958)
        g->eax = eax;
        g->ecx = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x1001295fu);
        t350 = cow_stdcall(g, COW_IMG(0x1025e100u), 0);
        t351 = g->ecx;
        t352 = g->edx;
        eax = t350;
        ecx = t351;
        edx = t352;
    COW_AT(1001295f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012964u);
        t353 = cow_stdcall(g, COW_IMG(0x1025e0d0u), 0);
        t354 = g->edx;
        eax = t353;
        edx = t354;
    COW_AT(10012964)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x1001296bu);
        t355 = cow_stdcall(g, COW_IMG(0x1025e110u), 0);
        t356 = g->edx;
        eax = t355;
        edx = t356;
    COW_AT(1001296b)
        t357 = rd32(self + 0x44u);
        if (t357 != 0x11u)
        {
    COW_AT(10012971)
            t358 = rd32(rd32(COW_IMG(0x10456a28u)));
            if (t358 != 0x90u)
            {
    COW_AT(1001297f)
                if (rd32(COW_IMG(0x106631d4u)) != 0u)
                {
                    ecx = rd32(COW_IMG(0x106631d4u));
    COW_AT(10012989)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    COW_RET(0x1001298eu);
                    t359 = cow_thiscall(g, COW_IMG(0x101d5680u), ecx, 0);
                    t360 = g->edx;
                    eax = t359;
                    edx = t360;
                }
            }
        }
    COW_AT(1001298e)
        if (rd32(COW_IMG(0x10456d1cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10456d1cu));
    COW_AT(10012998)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001299du);
            t361 = cow_thiscall(g, COW_IMG(0x10018850u), ecx, 0);
            t362 = g->edx;
            eax = t361;
            edx = t362;
        }
    }
    COW_AT(1001299d)
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x100129a8u);
    t363 = cow_call_regs(g, COW_IMG(0x101248a0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
    t364 = g->edx;
    eax = t363;
    edx = t364;
    COW_AT(100129a8)
    t365 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
    if (t365 == 0u)
    {
        ecx = rd32(COW_IMG(0x1045666cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1045666cu));
    COW_AT(100129b6)
        t366 = rd32(ecx + 0x1e8u);
        if (t366 != 0u)
        {
    COW_AT(100129be)
            wr32(sp0 - 0x254u, 0u);
            wr32(sp0 - 0x258u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100129c5u);
            t367 = cow_fastcall(g, COW_IMG(0x1000a1d0u), ecx, edx, 2, 0u, 0u);
            eax = t367;
    COW_AT(100129c5)
            wr32(sp0 - 0x254u, 0x3f800000u);
            t368 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1e0u);
            wr32(sp0 - 0x258u, t368);
            g->edx = t368;
            g->esp = sp0 - 0x250u;
            COW_RET(0x100129dcu);
            cow_call_regs(g, COW_IMG(0x1000abe0u), eax, rd32(COW_IMG(0x1045666cu)), g->edx, 0, 2, t368, 0x3f800000u);
            t369 = g->edx;
            edx = t369;
    COW_AT(100129dc)
            ecx = rd32(COW_IMG(0x1045666cu));
        }
    }
    COW_AT(100129e2)
    t370 = rd32(self + 0x31cu);
    wr32(sp0 - 0x254u, t370);
    wr32(sp0 - 0x258u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x100129efu);
    cow_call_regs(g, COW_IMG(0x1000a820u), t370, ecx, g->edx, 0, 2, 0u, t370);
    t371 = g->edx;
    edx = t371;
    COW_AT(100129ef)
    wr32(sp0 - 0x240u, 0xc3200000u);
    t372 = rd16(self + 0x12u);
    wr32(sp0 - 0x238u, t372);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        x0 = fr(g, (double)(int32_t)t372 * (double)rdf32(COW_IMG(0x10329cf8u)));
        goto L_10012a24;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    x0 = fr(g, (double)(int32_t)t372 * (double)rdf32(COW_IMG(0x10329cf8u)));
    COW_AT(10012a1a)
    if (ecx == 2u) goto L_10012a29;
    COW_AT(10012a1f)
    if (ecx == 3u) goto L_10012a29;
L_10012a24: ;
    COW_AT(10012a24)
    if (ecx != 1u) goto L_10012a31;
L_10012a29: ;
    COW_AT(10012a29)
    x1 = (double)rdf32(COW_IMG(0x10329cf4u));
L_10012a35: ;
    COW_AT(10012a35)
    t373 = rd16(self + 0x10u);
    wr32(sp0 - 0x238u, t373);
    wr32(sp0 - 0x254u, sp0 - 0x228u);
    wr32(sp0 - 0x228u, 0u);
    d374 = fr(g, (double)(int32_t)t373 * (double)rdf32(COW_IMG(0x10329cf0u)));
    wr32(sp0 - 0x264u, 0u);
    wrf32(sp0 - 0x224u, (float)(double)(float)d374);
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
    COW_RET(0x10012a7fu);
    t375 = cow_cdecl(g, COW_IMG(0x1021d4c0u), 5, 0u, 0u, 0x280u, 0x200u, sp0 - 0x228u);
    t376 = g->ecx;
    t377 = g->edx;
    eax = t375;
    ecx = t376;
    edx = t377;
    COW_AT(10012a7f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x264u;
    COW_RET(0x10012a84u);
    t378 = cow_stdcall(g, COW_IMG(0x101d0c70u), 0);
    t379 = g->ecx;
    t380 = g->edx;
    eax = t378;
    ecx = t379;
    edx = t380;
    COW_AT(10012a84)
    wr32(sp0 - 0x268u, 0u);
    wr32(sp0 - 0x26cu, 0x42400000u);
    wr32(sp0 - 0x270u, 0x43a50000u);
    wr32(sp0 - 0x274u, COW_IMG(0x1034f2b8u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x264u;
    COW_RET(0x10012a99u);
    t381 = cow_call_regs(g, COW_IMG(0x100384b0u), eax, g->ecx, g->edx, 1, 4, COW_IMG(0x1034f2b8u), 0x43a50000u, 0x42400000u, 0u);
    t382 = g->ecx;
    t383 = g->edx;
    eax = t381;
    ecx = t382;
    edx = t383;
    COW_AT(10012a99)
    g->ebx = 0u;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012aa1u);
    cow_fastcall(g, COW_IMG(0x10038520u), ecx, edx, 0);
    t384 = g->ecx;
    t385 = g->edx;
    ecx = t384;
    edx = t385;
    COW_AT(10012aa1)
    if (rd32(COW_IMG(0x104566e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(10012aaa)
        t386 = rd8(eax + 0x1cu);
        if (t386 & 1u)
        {
    COW_AT(10012ab0)
            wr32(sp0 - 0x228u, 0u);
            t387 = rd16(self + 0x12u);
            wr32(sp0 - 0x238u, t387);
            d388 = fr(g, (double)(int32_t)t387 - (double)rdf32(COW_IMG(0x10329cecu)));
            fpush(g, d388);
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012acdu);
            t389 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            eax = t389;
            edi = t387;
    COW_AT(10012acd)
            wr32(sp0 - 0x224u, eax);
            wr32(sp0 - 0x254u, sp0 - 0x228u);
            t390 = rd16(self + 0x10u);
            wr32(sp0 - 0x220u, t390);
            wr32(sp0 - 0x21cu, edi);
            g->ebx = 0u;
            g->edx = t390;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012aefu);
            t391 = cow_call_regs(g, COW_IMG(0x1000bb90u), sp0 - 0x228u, rd32(COW_IMG(0x1045666cu)), g->edx, 0, 1, sp0 - 0x228u);
            t392 = g->edx;
            eax = t391;
            edx = t392;
        }
    }
    COW_AT(10012aef)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012afau);
    t393 = cow_fastcall(g, COW_IMG(0x10009740u), rd32(COW_IMG(0x1045666cu)), edx, 0);
    t394 = g->edx;
    eax = t393;
    edx = t394;
    COW_AT(10012afa)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012b05u);
    t395 = cow_call_regs(g, COW_IMG(0x10009720u), g->eax, g->ecx, edx, 1, 0);
    eax = t395;
    COW_AT(10012b05)
    t396 = rd32(COW_IMG(0x103290f8u));
    wr32(self + 0x28u, 0u);
    wr8(sp0 - 0x239u, 0u);
    ebp = t396;
L_10012b12: ;
    COW_AT(10012b12)
    t397 = rd32(self + 0x1cu);
    wr32(sp0 - 0x238u, t397);
    g->edx = rd32(t397);
    t398 = rd32(t397);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012b20u);
    cow_thiscall(g, rd32(t398 + 0x30u), t397, 0);
    t399 = g->edx;
    d400 = cow_take_float(g);
    edx = t399;
    edi = t397;
    x0 = d400;
    COW_AT(10012b20)
    wrf32(sp0 - 0x238u, (float)(double)(float)x0);
    g->eax = rd32(edi);
    g->edx = edx;
    t401 = rd32(edi);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012b2bu);
    t402 = cow_thiscall(g, rd32(t401 + 0x24u), edi, 0);
    t403 = g->ecx;
    t404 = g->edx;
    d405 = cow_take_float(g);
    eax = t402;
    ecx = t403;
    edx = t404;
    x0 = d405;
    COW_AT(10012b2b)
    d406 = fr(g, x0 * (double)rdf32(sp0 - 0x238u));
    wrf32(COW_IMG(0x10456960u), (float)d406);
    d407 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(COW_IMG(0x10456960u)));
    wrf32(self + 0x2cu, (float)d407);
    wrf32(self + 0x28u, (float)d407);
    d408 = (double)(int32_t)rd32(self + 0x30u);
    if ((cow_fsw(g, d407, d408, 1u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d407, d408, 1u) & 0x100u;
        x0 = d407;
        goto L_10012b66;
    }
    eax = cow_fsw(g, d407, d408, 1u) & 0x100u;
    x0 = d407;
    COW_AT(10012b57)
    wr32(sp0 - 0x254u, 1u);
    wr8(sp0 - 0x239u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012b62u);
    t409 = cow_thiscall(g, ebp, ecx, 1, 1u);
    eax = t409;
    COW_AT(10012b62)
    goto L_10012b12;
L_10011bdc: ;
    COW_AT(10011bdc)
    if (eax != 0x15u) goto L_10011bee;
    COW_AT(10011be1)
    wr32(self + 0x44u, 0x11u);
    wr32(COW_IMG(0x10456948u), eax);
    edi = 0xcu;
    goto L_100121c4;
L_10011bee: ;
    COW_AT(10011bee)
    if (eax != 0xcau) goto L_10011c07;
    COW_AT(10011bf5)
    wr32(sp0 - 0x254u, 0xfa3u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011bffu);
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa3u);
    t44 = g->edx;
    edx = t44;
    COW_AT(10011bff)
    edi = 0xcu;
    goto L_100121c4;
L_10011c07: ;
    COW_AT(10011c07)
    if (eax != 0xcbu) goto L_10011c2b;
    COW_AT(10011c0e)
    t45 = rd32(rd32(COW_IMG(0x10456a28u)));
    if (t45 == 0x40u)
    {
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10011c4a;
    }
    edx = rd32(COW_IMG(0x10456a28u));
    COW_AT(10011c19)
    wr32(sp0 - 0x254u, 0xfa4u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c23u);
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa4u);
    t46 = g->edx;
    edx = t46;
    COW_AT(10011c23)
    edi = 0xcu;
    goto L_100121c4;
L_10011c2b: ;
    COW_AT(10011c2b)
    if (eax != 0xc9u) goto L_10011c44;
    COW_AT(10011c32)
    wr32(sp0 - 0x254u, 0xfa5u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c3cu);
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa5u);
    t47 = g->edx;
    edx = t47;
    COW_AT(10011c3c)
    edi = 0xcu;
    goto L_100121c4;
L_10011c44: ;
    COW_AT(10011c44)
    edx = rd32(COW_IMG(0x10456a28u));
L_10011c4a: ;
    COW_AT(10011c4a)
    t48 = rd32(self + 0x44u);
    if ((int32_t)t48 < 5) goto L_10011c6f;
    COW_AT(10011c50)
    t49 = rd32(edx);
    if (t49 == 0x40u) goto L_10011c6f;
    COW_AT(10011c55)
    t50 = rd32(COW_IMG(0x10456900u));
    if ((int32_t)t50 >= 0) goto L_10011c6f;
    COW_AT(10011c5d)
    wr32(sp0 - 0x254u, 0x7d1u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c67u);
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0x7d1u);
    t51 = g->edx;
    edx = t51;
    COW_AT(10011c67)
    edi = 0xcu;
    goto L_100121c4;
L_10011c6f: ;
    COW_AT(10011c6f)
    t52 = rd32(COW_IMG(0x1045666cu));
    wr8(t52 + 0x828u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t52;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c81u);
    t53 = cow_stdcall(g, COW_IMG(0x1018b130u), 0);
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(10011c81)
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c86u);
    t56 = cow_call_regs(g, COW_IMG(0x1018c2b0u), eax, ecx, g->edx, 1, 0);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(10011c86)
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c91u);
    t58 = cow_fastcall(g, COW_IMG(0x10251520u), rd32(COW_IMG(0x106693fcu)), edx, 0);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(10011c91)
    g->ebx = 0u;
    g->edi = 0xcu;
    g->ebp = 0x11u;
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011c9cu);
    t60 = cow_fastcall(g, COW_IMG(0x1018b860u), rd32(COW_IMG(0x1065cb04u)), edx, 0);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(10011c9c)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011ca7u);
    t62 = cow_fastcall(g, COW_IMG(0x10074c30u), rd32(COW_IMG(0x1047d140u)), edx, 0);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(10011ca7)
    wr32(sp0 - 0x254u, 1u);
    g->eax = eax;
    t64 = rd32(COW_IMG(0x106693fcu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011cb4u);
    t65 = cow_fastcall(g, COW_IMG(0x10251610u), t64, edx, 1, 1u);
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(10011cb4)
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011cb9u);
    cow_stdcall(g, COW_IMG(0x10036230u), 0);
    goto L_10011cb9;
L_10011cf0: ;
    COW_AT(10011cf0)
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 0u);
    wr32(sp0 - 0x25cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011cffu);
    t169 = cow_thiscall(g, COW_IMG(0x1000ae40u), rd32(COW_IMG(0x1045666cu)), 3, 0u, 0u, 1u);
    t170 = g->edx;
    eax = t169;
    edx = t170;
    COW_AT(10011cff)
    wr32(sp0 - 0x254u, 0x80000000u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011d0fu);
    cow_thiscall(g, COW_IMG(0x10009670u), rd32(COW_IMG(0x1045666cu)), 1, 0x80000000u);
    t171 = g->edx;
    edx = t171;
    COW_AT(10011d0f)
    wr8(sp0 - 0x23eu, 0x80u);
    wr8(sp0 - 0x23fu, 0x80u);
    wr8(sp0 - 0x240u, 0x80u);
    wr8(sp0 - 0x23du, 0x80u);
    t172 = rd32(sp0 - 0x240u);
    wr8(sp0 - 0x23eu, 0u);
    wr8(sp0 - 0x23fu, 0u);
    wr8(sp0 - 0x240u, 0u);
    wr8(sp0 - 0x23du, 0x80u);
    t173 = rd32(sp0 - 0x240u);
    wr32(self + 0x338u, t173);
    wr32(self + 0x334u, t172);
    g->eax = t172;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011d4fu);
    t174 = cow_thiscall(g, COW_IMG(0x10014ad0u), self, 0);
    t175 = g->edx;
    eax = t174;
    edx = t175;
    COW_AT(10011d4f)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
        goto L_100121c4;
    }
    COW_AT(10011d57)
    t176 = rd32(COW_IMG(0x10456948u));
    if (t176 == 0xcu) goto L_100121bd;
    COW_AT(10011d63)
    wr32(self + 0x44u, 0xdu);
    goto L_10011cb9;
L_10011d6f: ;
    COW_AT(10011d6f)
    t143 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x60u);
    if (t143 == 0u)
    {
        edx = rd32(COW_IMG(0x103d3cb8u));
    }
    else
    {
        edx = rd32(COW_IMG(0x103d3cb8u));
    COW_AT(10011d7f)
        wr32(sp0 - 0x254u, 1u);
        g->eax = eax;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011d85u);
        t144 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 1u);
        t145 = g->edx;
        eax = t144;
        edx = t145;
    COW_AT(10011d85)
        wr32(sp0 - 0x254u, eax);
        wr32(sp0 - 0x258u, sp0 - 0x238u);
        g->eax = sp0 - 0x238u;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011d99u);
        t146 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 0x238u, eax);
        t147 = g->edx;
        eax = t146;
        edx = t147;
    COW_AT(10011d99)
        t148 = rd32(eax);
        wr32(COW_IMG(0x104568ecu), t148);
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011da7u);
        t149 = cow_call_regs(g, COW_IMG(0x10071e90u), t148, rd32(t148), g->edx, 1, 0);
        t150 = g->edx;
        eax = t149;
        edx = t150;
    }
    COW_AT(10011da7)
    t151 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x28u);
    if (t151 != 0u)
    {
        ecx = rd32(COW_IMG(0x103d3cb8u));
    COW_AT(10011dcc)
        wr32(COW_IMG(0x10669014u), 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011dd7u);
        t154 = cow_stdcall(g, COW_IMG(0x10016410u), 0);
        t155 = g->ecx;
        t156 = g->edx;
        eax = t154;
        ecx = t155;
        edx = t156;
    COW_AT(10011dd7)
        if (eax == 0u)
        {
    COW_AT(10011e7b)
            wr32(self + 0x44u, 1u);
            edi = 1u;
        }
        else
        {
    COW_AT(10011ddf)
            if (eax == 1u)
            {
                eax = eax - 1u;
    COW_AT(10011e48)
                wr32(sp0 - 0x254u, 0u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x250u;
                COW_RET(0x10011e4eu);
                t165 = cow_cdecl(g, COW_IMG(0x10016400u), 1, 0u);
                t166 = g->ecx;
                eax = t165;
                ecx = t166;
    COW_AT(10011e4e)
                wr32(self + 0x44u, 8u);
                t167 = rd32(COW_IMG(0x104568fcu));
                wr8(t167 + 9u, 1u);
                if (rd8(COW_IMG(0x10669420u)) != 1u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10669420u));
                    edx = t167;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10669420u));
                    edx = t167;
    COW_AT(10011e6b)
                    wr32(COW_IMG(0x10456950u), 1u);
                }
    COW_AT(10011e71)
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                COW_RET(0x10011e76u);
                cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
                t168 = g->edx;
                edx = t168;
    COW_AT(10011e76)
                edi = 1u;
            }
            else
            {
                eax = eax - 1u;
    COW_AT(10011de2)
                if (eax != 1u)
                {
                    edi = 1u;
                }
                else
                {
                    eax = eax - 1u;
    COW_AT(10011de9)
                    t157 = rd8(COW_IMG(0x10669420u));
                    wr32(COW_IMG(0x1045694cu), 0u);
                    wr32(COW_IMG(0x10669014u), 1u);
                    if ((uint8_t)t157 != 1u)
                    {
                        eax = (eax & 0xffffff00u) | t157;
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | t157;
    COW_AT(10011dfe)
                        wr32(COW_IMG(0x10456950u), 1u);
                    }
    COW_AT(10011e04)
                    wr32(sp0 - 0x254u, 1u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    COW_RET(0x10011e0au);
                    t158 = cow_cdecl(g, COW_IMG(0x10245b70u), 1, 1u);
                    t159 = g->ecx;
                    t160 = g->edx;
                    eax = t158;
                    ecx = t159;
                    edx = t160;
    COW_AT(10011e0a)
                    wr32(sp0 - 0x258u, 0u);
                    g->edx = edx;
                    g->esp = sp0 - 0x254u;
                    COW_RET(0x10011e10u);
                    cow_cdecl(g, COW_IMG(0x10016400u), 1, 0u);
                    t161 = g->edx;
                    edx = t161;
    COW_AT(10011e10)
                    t162 = rd32(COW_IMG(0x104568fcu));
                    wr8(sp0 - 0x23eu, 0u);
                    wr8(sp0 - 0x23fu, 0u);
                    wr8(sp0 - 0x240u, 0u);
                    wr8(sp0 - 0x23du, 0x80u);
                    t163 = rd32(sp0 - 0x240u);
                    wr8(t162 + 9u, 1u);
                    wr32(self + 0x334u, t163);
                    wr32(self + 0x44u, 2u);
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    COW_RET(0x10011e43u);
                    cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
                    t164 = g->edx;
                    edx = t164;
    COW_AT(10011e43)
                    edi = 1u;
                }
            }
        }
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d3cb8u));
    COW_AT(10011db2)
        t152 = rd32(COW_IMG(0x104568fcu));
        wr8(t152 + 9u, 0u);
        wr32(self + 0x44u, 0xau);
        g->edx = t152;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011dc7u);
        cow_stdcall(g, COW_IMG(0x100dbe50u), 0);
        t153 = g->edx;
        edx = t153;
    COW_AT(10011dc7)
        edi = 1u;
    }
    goto L_100121c4;
L_10011e83: ;
    COW_AT(10011e83)
    t140 = rd32(COW_IMG(0x10456be4u));
    if (t140 == 0u) goto L_10011e9a;
    COW_AT(10011e8b)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011e92u);
    t141 = cow_fastcall(g, COW_IMG(0x100139e0u), self, edx, 0);
    t142 = g->edx;
    eax = t141;
    edx = t142;
    COW_AT(10011e92)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
        goto L_100121c4;
    }
L_10011e9a: ;
    COW_AT(10011e9a)
    wr32(self + 0x44u, 2u);
    edi = 0xcu;
    goto L_100121c4;
L_10011ea6: ;
    COW_AT(10011ea6)
    wr32(sp0 - 0x254u, COW_IMG(0x103502fcu));
    wr32(sp0 - 0x258u, 0x200u);
    wr32(sp0 - 0x25cu, sp0 - 0x200u);
    g->ebx = 0u;
    g->eax = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    COW_RET(0x10011ebau);
    t129 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x200u, 0x200u, COW_IMG(0x103502fcu), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u));
    t130 = g->edx;
    eax = t129;
    edx = t130;
    COW_AT(10011eba)
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    g->esp = sp0 - 0x24cu;
    COW_RET(0x10011ec4u);
    cow_call_regs(g, COW_IMG(0x10001e70u), eax, sp0 - 0x200u, g->edx, 1, 5, sp0 - 0x200u, sp0 - 0x200u, 0x200u, COW_IMG(0x103502fcu), rd32(sp0 - 0x250u));
    COW_AT(10011ec4)
    t131 = rd32(COW_IMG(0x103d3cb8u));
    wr32(t131 + 0x28u, 3u);
    wr32(self + 0x44u, 3u);
    wr16(self + 4u, 0u);
    t132 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x28u);
    if (t132 == 0u)
    {
        edx = t131;
        edi = 0xcu;
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3cb8u));
        edx = t131;
    COW_AT(10011eea)
        g->eax = eax;
        g->edx = edx;
        t133 = rd32(COW_IMG(0x103601bcu));
        g->esp = sp0 - 0x250u;
        COW_RET(0x10011ef5u);
        t134 = cow_thiscall(g, COW_IMG(0x100da6a0u), t133, 0);
        t135 = g->ecx;
        t136 = g->edx;
        eax = t134;
        ecx = t135;
        edx = t136;
    COW_AT(10011ef5)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(10011f0b)
            t138 = rd32(COW_IMG(0x104568fcu));
            wr8(t138 + 9u, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10011f1au);
            cow_stdcall(g, COW_IMG(0x1019c3e0u), 0);
            t139 = g->edx;
            edx = t139;
    COW_AT(10011f1a)
            edi = 0xcu;
        }
        else
        {
    COW_AT(10011ef9)
            wr32(sp0 - 0x254u, 5u);
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10011f00u);
            cow_cdecl(g, COW_IMG(0x100164c0u), 1, 5u);
            t137 = g->edx;
            edx = t137;
    COW_AT(10011f00)
            wr8(self + 0xau, 0u);
            edi = 0xcu;
        }
    }
    goto L_100121c4;
L_10011f1f: ;
    COW_AT(10011f1f)
    t126 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x24u);
    if (t126 == 0u) goto L_10011f3e;
    eax = rd32(COW_IMG(0x103d3cb8u));
    COW_AT(10011f29)
    wr32(edx, 0x20u);
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011f36u);
    t127 = cow_call_regs(g, COW_IMG(0x10015740u), eax, g->ecx, g->edx, 1, 0);
    t128 = g->edx;
    eax = t127;
    edx = t128;
    COW_AT(10011f36)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
        goto L_100121c4;
    }
L_10011f3e: ;
    COW_AT(10011f3e)
    wr32(self + 0x44u, 4u);
    edi = 0xcu;
    goto L_100121c4;
L_10011f4a: ;
    COW_AT(10011f4a)
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011f51u);
    t120 = cow_call_regs(g, COW_IMG(0x10013ac0u), eax, g->ecx, g->edx, 1, 0);
    t121 = g->edx;
    eax = t120;
    edx = t121;
    COW_AT(10011f51)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
    }
    else
    {
    COW_AT(10011f59)
        t122 = rd32(COW_IMG(0x10456950u));
        if (t122 != 0u) goto L_10011f6c;
    COW_AT(10011f61)
        t123 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x58u);
        if (t123 == 0u) goto L_10011f76;
L_10011f6c: ;
    COW_AT(10011f6c)
        wr32(COW_IMG(0x10456aa4u), 1u);
L_10011f76: ;
    COW_AT(10011f76)
        if (rd32(COW_IMG(0x10456d18u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10456d18u));
    COW_AT(10011f7f)
            wr32(sp0 - 0x254u, 7u);
            wr32(sp0 - 0x258u, COW_IMG(0x1035018cu));
            g->esp = sp0 - 0x250u;
            COW_RET(0x10011f91u);
            cow_thiscall(g, COW_IMG(0x100185a0u), eax + 0x184u, 2, COW_IMG(0x1035018cu), 7u);
    COW_AT(10011f91)
            t124 = rd32(rd32(COW_IMG(0x10456d18u)) + 0x18cu);
            t125 = rd32(COW_IMG(0x10456d18u));
            wr32(rd32(COW_IMG(0x10456a28u)) + 0x1cu, t124);
            edx = t125;
        }
    COW_AT(10011fa6)
        wr32(self + 0x44u, 5u);
        edi = 0xcu;
    }
    goto L_100121c4;
L_10011fb2: ;
    COW_AT(10011fb2)
    wr32(sp0 - 0x254u, self + 0x48u);
    wr32(edx, 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10011fc3u);
    t97 = cow_thiscall(g, COW_IMG(0x10013ad0u), self, 1, rd32(sp0 - 0x254u));
    t98 = g->ecx;
    t99 = g->edx;
    eax = t97;
    ecx = t98;
    edx = t99;
    COW_AT(10011fc3)
    if ((uint8_t)eax == 0u)
    {
        edi = self + 0x48u;
    }
    else
    {
    COW_AT(10011fcb)
        if (rd32(self + 0x48u) == 0u)
        {
            edi = rd32(self + 0x48u);
    COW_AT(10011fe4)
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 0u);
            t100 = rd32(COW_IMG(0x103601bcu));
            wr32(t100 + 0x10u, 1u);
            wr8(COW_IMG(0x10487f80u), 0u);
            wr8(COW_IMG(0x10487f81u), 0u);
            wr8(COW_IMG(0x1047d694u), 0u);
            g->ebx = 0u;
            g->edx = t100;
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001200bu);
            cow_call_regs(g, COW_IMG(0x10253690u), eax, ecx, g->edx, 1, 2, 0u, 1u);
            t101 = g->edx;
            edx = t101;
    COW_AT(1001200b)
            t102 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
            wr32(sp0 - 0x254u, t102);
            g->eax = t102;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012020u);
            t103 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t102);
            t104 = g->edx;
            eax = t103;
            edx = t104;
    COW_AT(10012020)
            wr32(sp0 - 0x254u, eax);
            g->eax = eax;
            g->edx = edx;
            t105 = rd32(COW_IMG(0x10662dccu));
            g->esp = sp0 - 0x250u;
            COW_RET(0x1001202cu);
            t106 = cow_thiscall(g, COW_IMG(0x101c4cc0u), t105, 1, eax);
            t107 = g->ecx;
            t108 = g->edx;
            eax = t106;
            ecx = t107;
            edx = t108;
    COW_AT(1001202c)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(10012030)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                COW_RET(0x1001203bu);
                t109 = cow_thiscall(g, COW_IMG(0x101c4cd0u), rd32(COW_IMG(0x10662dccu)), 0);
                t110 = g->edx;
                eax = t109;
                edx = t110;
    COW_AT(1001203b)
                if ((uint8_t)eax != 1u)
                {
    COW_AT(1001203f)
                    g->edx = edx;
                    g->esp = sp0 - 0x250u;
                    COW_RET(0x1001204au);
                    cow_thiscall(g, COW_IMG(0x101c4d10u), rd32(COW_IMG(0x10662dccu)), 0);
                    t111 = g->edx;
                    edx = t111;
                }
    COW_AT(1001204a)
                t112 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
                wr32(sp0 - 0x254u, t112);
                g->eax = t112;
                g->edx = edx;
                g->esp = sp0 - 0x250u;
                COW_RET(0x1001205cu);
                t113 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t112);
                t114 = g->edx;
                eax = t113;
                edx = t114;
    COW_AT(1001205c)
                wr32(sp0 - 0x254u, eax);
                g->eax = eax;
                g->edx = edx;
                t115 = rd32(COW_IMG(0x10662dccu));
                g->esp = sp0 - 0x250u;
                COW_RET(0x10012068u);
                t116 = cow_thiscall(g, COW_IMG(0x101c4ce0u), t115, 1, eax);
                t117 = g->ecx;
                t118 = g->edx;
                eax = t116;
                ecx = t117;
                edx = t118;
            }
    COW_AT(10012068)
            wr32(sp0 - 0x254u, 1u);
            wr32(sp0 - 0x258u, 1u);
            g->ebx = 0u;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012071u);
            cow_call_regs(g, COW_IMG(0x10253690u), eax, ecx, g->edx, 1, 2, 1u, 1u);
            t119 = g->edx;
            edx = t119;
    COW_AT(10012071)
            wr32(self + 0x44u, 6u);
        }
        else
        {
            edi = rd32(self + 0x48u);
    COW_AT(10011fd1)
            if (edi != 1u)
            {
                edi = edi - 1u;
            }
            else
            {
                edi = edi - 1u;
    COW_AT(10011fd8)
                wr32(self + 0x44u, 0xdu);
            }
        }
    }
    goto L_100121c4;
L_10012080: ;
    COW_AT(10012080)
    wr32(edx, 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001208du);
    t95 = cow_thiscall(g, COW_IMG(0x10013df0u), self, 0);
    t96 = g->edx;
    eax = t95;
    edx = t96;
    COW_AT(1001208d)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
    }
    else
    {
    COW_AT(10012095)
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_100120a1: ;
    COW_AT(100120a1)
    wr32(edx, 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x100120aeu);
    t93 = cow_thiscall(g, COW_IMG(0x10013f10u), self, 0);
    t94 = g->edx;
    eax = t93;
    edx = t94;
    COW_AT(100120ae)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
    }
    else
    {
    COW_AT(100120b6)
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_100120c2: ;
    COW_AT(100120c2)
    wr32(edx, 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x100120cfu);
    t91 = cow_thiscall(g, COW_IMG(0x10014030u), self, 0);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    COW_AT(100120cf)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
    }
    else
    {
    COW_AT(100120d7)
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_100120e3: ;
    COW_AT(100120e3)
    wr32(edx, 0x70u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x100120f0u);
    t89 = cow_stdcall(g, COW_IMG(0x10014120u), 0);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    COW_AT(100120f0)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
    }
    else
    {
    COW_AT(100120f8)
        wr32(self + 0x44u, 0xau);
        edi = 0xcu;
    }
    goto L_100121c4;
L_10012104: ;
    COW_AT(10012104)
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001210bu);
    cow_thiscall(g, COW_IMG(0x10014170u), self, 0);
    t88 = g->edx;
    edx = t88;
    COW_AT(1001210b)
    edi = 0xcu;
    goto L_100121c4;
L_10012110: ;
    COW_AT(10012110)
    t83 = rd8(edx + 0x18u);
    if ((t83 & 8u) == 0u)
    {
    COW_AT(1001212c)
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012131u);
        cow_stdcall(g, COW_IMG(0x10010520u), 0);
        t85 = g->edx;
        edx = t85;
    COW_AT(10012131)
        t86 = rd32(COW_IMG(0x103601bcu));
        wr32(t86 + 0x10u, 0u);
        wr32(rd32(COW_IMG(0x10456a28u)), 0x70u);
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x1001214cu);
        cow_thiscall(g, COW_IMG(0x100149b0u), self, 0);
        t87 = g->edx;
        edx = t87;
    COW_AT(1001214c)
        edi = 0xcu;
    }
    else
    {
    COW_AT(10012116)
        wr32(sp0 - 0x254u, 1u);
        wr32(self + 0x44u, 0xdu);
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012124u);
        cow_call_regs(g, COW_IMG(0x100163c0u), eax, g->ecx, g->edx, 1, 1, rd32(sp0 - 0x254u));
        t84 = g->edx;
        edx = t84;
    COW_AT(10012124)
        edi = 0xcu;
    }
    goto L_100121c4;
L_1001214e: ;
    COW_AT(1001214e)
    t73 = rd32(COW_IMG(0x103601bcu));
    wr32(t73 + 0x10u, 0u);
    t74 = rd32(COW_IMG(0x10456a28u));
    wr32(t74, 0x70u);
    g->eax = t74;
    g->edx = t73;
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012169u);
    t75 = cow_thiscall(g, COW_IMG(0x10014a20u), self, 0);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    COW_AT(10012169)
    if ((uint8_t)eax == 0u)
    {
        edi = 0xcu;
    }
    else
    {
    COW_AT(1001216d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012172u);
        t78 = cow_stdcall(g, COW_IMG(0x100361d0u), 0);
        t79 = g->edx;
        eax = t78;
        edx = t79;
    COW_AT(10012172)
        wr32(sp0 - 0x254u, 2u);
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x1001217fu);
        t80 = cow_call_regs(g, COW_IMG(0x10239480u), eax, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 2u);
        t81 = g->edx;
        eax = t80;
        edx = t81;
    COW_AT(1001217f)
        wr32(sp0 - 0x254u, 0u);
        wr32(sp0 - 0x258u, 1u);
        wr32(sp0 - 0x25cu, COW_IMG(0x103502e8u));
        g->ebx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012191u);
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
        t82 = g->edx;
        edx = t82;
    COW_AT(10012191)
        wr32(self + 0x44u, 7u);
        edi = 0xcu;
    }
    goto L_100121c4;
L_1001219a: ;
    COW_AT(1001219a)
    g->eax = eax;
    g->esp = sp0 - 0x250u;
    COW_RET(0x1001219fu);
    t70 = cow_stdcall(g, COW_IMG(0x10010520u), 0);
    eax = t70;
    COW_AT(1001219f)
    wr32(rd32(COW_IMG(0x103601bcu)) + 0x10u, 0u);
    t71 = rd32(COW_IMG(0x10456a28u));
    wr32(t71, 0xa0u);
    g->edx = t71;
    g->esp = sp0 - 0x250u;
    COW_RET(0x100121bbu);
    cow_thiscall(g, COW_IMG(0x10014a30u), self, 0);
    t72 = g->edx;
    edx = t72;
    COW_AT(100121bb)
    edi = 0xcu;
    goto L_100121c4;
L_100121bd: ;
    COW_AT(100121bd)
    wr32(self + 0x44u, 0xbu);
    edi = 0xcu;
    goto L_100121c4;
L_10012a31: ;
    COW_AT(10012a31)
    x1 = cow_bits2f(0xc3200000u);
    goto L_10012a35;
L_10012b66: ;
    COW_AT(10012b66)
    t410 = rd8(sp0 - 0x239u);
    COW_AT(10012bc4)
    if ((uint8_t)t410 != 1u)
    {
    COW_AT(10012b6d)
        d411 = (double)(int32_t)rd32(self + 0x30u);
        if (!(x0 < d411))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d411, 0u);
            goto L_10012bc6;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d411, 0u);
L_10012b7b: ;
    COW_AT(10012b7b)
        t412 = rd32(self + 0x1cu);
        wr32(sp0 - 0x238u, t412);
        g->edx = rd32(t412);
        t413 = rd32(t412);
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012b89u);
        cow_thiscall(g, rd32(t413 + 0x30u), t412, 0);
        t414 = g->edx;
        d415 = cow_take_float(g);
        edx = t414;
        edi = t412;
        x0 = d415;
    COW_AT(10012b89)
        wrf32(sp0 - 0x238u, (float)(double)(float)x0);
        g->eax = rd32(edi);
        g->edx = edx;
        t416 = rd32(edi);
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012b94u);
        t417 = cow_thiscall(g, rd32(t416 + 0x24u), edi, 0);
        t418 = g->ecx;
        t419 = g->edx;
        d420 = cow_take_float(g);
        eax = t417;
        ecx = t418;
        edx = t419;
        x0 = d420;
    COW_AT(10012b94)
        d421 = fr(g, x0 * (double)rdf32(sp0 - 0x238u));
        wr32(sp0 - 0x254u, 0u);
        wrf32(COW_IMG(0x10456960u), (float)d421);
        d422 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(COW_IMG(0x10456960u)));
        wrf32(self + 0x2cu, (float)d422);
        wrf32(self + 0x28u, (float)d422);
        g->eax = eax;
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012bb3u);
        t423 = cow_thiscall(g, ebp, ecx, 1, rd32(sp0 - 0x254u));
        eax = t423;
    COW_AT(10012bb3)
        d424 = (double)(int32_t)rd32(self + 0x30u);
        d425 = (double)rdf32(self + 0x28u);
        if ((cow_fsw(g, d424, d425, 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d424, d425, 0u) & 0x4100u;
            goto L_10012b7b;
        }
        eax = cow_fsw(g, d424, d425, 0u) & 0x4100u;
    COW_AT(10012bc2)
    }
L_10012bc6: ;
    COW_AT(10012bc6)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x1cu));
    t426 = rd32(self + 0x1cu);
    t427 = rd32(rd32(self + 0x1cu));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012bceu);
    t428 = cow_thiscall(g, rd32(t427 + 0x24u), t426, 0);
    t429 = g->ecx;
    t430 = g->edx;
    d431 = cow_take_float(g);
    eax = t428;
    ecx = t429;
    edx = t430;
    x0 = d431;
    COW_AT(10012bce)
    d432 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / x0) + (double)rdf32(self + 0x3cu));
    g->edx = edx;
    fpush(g, d432);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012bdeu);
    t433 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t434 = g->edx;
    eax = t433;
    edx = t434;
    x0 = d432;
    COW_AT(10012bde)
    wr32(sp0 - 0x238u, eax);
    t435 = rd32(self + 0x1cu);
    wr32(self + 0x38u, eax);
    wrf32(self + 0x3cu, (float)fr(g, x0 - (double)(int32_t)eax));
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012bf8u);
    cow_thiscall(g, rd32(rd32(t435) + 0x20u), t435, 0);
    COW_AT(10012bf8)
    t436 = rd32(COW_IMG(0x10456974u)) + 1u & 3u;
    t437 = rd32(COW_IMG(0x10456974u));
    d438 = (double)rdf32(self + 0x28u);
    wr32(COW_IMG(0x10456974u), t436);
    t439 = rd32(self + 0x28u);
    wr32(COW_IMG(0x10456964u) + t436 * 4u, t439);
    wr32(self + 0x2cu, 0u);
    eax = COW_IMG(0x10456964u);
    ecx = t437;
    edx = t439;
    x0 = d438;
L_10012c1e: ;
    COW_AT(10012c1e)
    d440 = fr(g, (double)rdf32(eax) + (double)rdf32(self + 0x2cu));
    wrf32(self + 0x2cu, (float)d440);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10456974u))
    {
        eax = eax + 4u;
        goto L_10012c1e;
    }
    eax = eax + 4u;
    COW_AT(10012c30)
    d441 = fr(g, (double)rdf32(self + 0x2cu) * (double)rdf32(COW_IMG(0x10329ce4u)));
    wrf32(self + 0x2cu, (float)d441);
    g->edx = edx;
    fpush(g, d441);
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012c41u);
    t442 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t443 = g->edx;
    eax = t442;
    edx = t443;
    COW_AT(10012c41)
    wr32(sp0 - 0x238u, eax);
    wrf32(self + 0x28u, (float)(double)(int32_t)eax);
    d444 = (double)(float)(double)(int32_t)rd32(self + 0x30u);
    wrf32(sp0 - 0x240u, (float)d444);
    if (!((double)(int32_t)eax < d444))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)eax, d444, 1u);
        loc_240_f = d444;
    }
    else
    {
        loc_240_f = d444;
    COW_AT(10012c5e)
        wr32(self + 0x28u, cow_f2bits(loc_240_f));
        eax = cow_f2bits(loc_240_f);
        loc_240_f = (double)rdf32(sp0 - 0x240u);
    }
    COW_AT(10012c65)
    d445 = (double)rdf32(self + 0x28u);
    if ((cow_fsw(g, d445, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d445, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d445, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u;
    COW_AT(10012c77)
        wr32(self + 0x28u, 0x41a00000u);
        loc_240_f = (double)rdf32(sp0 - 0x240u);
    }
    COW_AT(10012c7e)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329ce0u)), 1u) & 0x4100u) == 0u)
    {
    COW_AT(10012c8d)
        x0 = (double)rdf32(COW_IMG(0x10329ce0u));
    }
    COW_AT(10012c95)
    wrf32(self + 0x2cu, (float)x0);
    d446 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(self + 0x28u));
    wrf32(COW_IMG(0x10456960u), (float)d446);
    t447 = rd32(self + 0x34u) + 1u;
    t448 = rd32(self + 0x34u);
    wr32(self + 0x34u, t447);
    if (t448 + 1u != 0u)
    {
        eax = t447;
    }
    else
    {
        eax = t447;
    COW_AT(10012cb5)
        wr32(self + 0x34u, 1u);
    }
    COW_AT(10012cb8)
    if (rd32(self + 0x20u) == 0u)
    {
        ecx = rd32(self + 0x20u);
        loc_240_f = (double)rdf32(sp0 - 0x240u);
    }
    else
    {
        ecx = rd32(self + 0x20u);
    COW_AT(10012cc3)
        g->eax = eax;
        g->edx = rd32(ecx);
        t449 = rd32(ecx);
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012cc8u);
        t450 = cow_thiscall(g, rd32(t449 + 0x28u), ecx, 0);
        t451 = g->ecx;
        t452 = g->edx;
        d453 = cow_take_float(g);
        eax = t450;
        ecx = t451;
        edx = t452;
        x0 = d453;
    COW_AT(10012cc8)
        wrf32(sp0 - 0x240u, (float)(double)(float)x0);
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cdcu)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cdcu)), 0u) & 0x4100u;
            loc_240_f = (double)(float)x0;
        }
        else
        {
            loc_240_f = (double)(float)x0;
    COW_AT(10012cdf)
            wr32(sp0 - 0x254u, sp0 - 0x228u);
            g->eax = sp0 - 0x228u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x250u;
            COW_RET(0x10012ceau);
            t454 = cow_stdcall(g, rd32(COW_IMG(0x1032919cu)), 1, sp0 - 0x228u);   /* kernel32.dll!GetLocalTime */
            t455 = g->ecx;
            t456 = g->edx;
            eax = t454;
            ecx = t455;
            edx = t456;
    COW_AT(10012cea)
            if (rd16(sp0 - 0x21cu) == rd16(COW_IMG(0x103501a4u)))
            {
                ecx = (ecx & 0xffff0000u) | rd16(sp0 - 0x21cu);
                loc_240_f = (double)rdf32(sp0 - 0x240u);
            }
            else
            {
    COW_AT(10012cfc)
                g->edx = rd32(rd32(self + 0x20u));
                t457 = rd32(rd32(self + 0x20u));
                g->esp = sp0 - 0x250u;
                COW_RET(0x10012d04u);
                cow_thiscall(g, rd32(t457 + 0x20u), rd32(self + 0x20u), 0);
                t458 = g->edx;
                edx = t458;
    COW_AT(10012d04)
                t459 = (uint16_t)rd32(sp0 - 0x21cu) - (uint16_t)rd32(COW_IMG(0x103501a4u));
                wr32(sp0 - 0x238u, t459);
                if (!((double)(int32_t)t459 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (t459 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)t459, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    ecx = (uint16_t)rd32(COW_IMG(0x103501a4u));
                    x0 = (double)(int32_t)t459;
                }
                else
                {
                    eax = (t459 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)t459, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    ecx = (uint16_t)rd32(COW_IMG(0x103501a4u));
                    x0 = (double)(int32_t)t459;
    COW_AT(10012d30)
                    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329ce8u)));
                }
    COW_AT(10012d36)
                d460 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329cd8u)));
                wrf32(sp0 - 0x238u, (float)(double)(float)d460);
                d461 = fr(g, (double)rdf32(sp0 - 0x240u) - (double)(float)d460);
                if (!(d461 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    loc_238_f = (double)(float)d460;
                    x0 = d461;
                }
                else
                {
                    loc_238_f = (double)(float)d460;
                    x0 = d461;
    COW_AT(10012d55)
                    x0 = -x0;
                }
    COW_AT(10012d57)
                if (rd32(COW_IMG(0x1045695cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x1045695cu));
                    goto L_10012e0b;
                }
                eax = rd32(COW_IMG(0x1045695cu));
    COW_AT(10012d64)
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    goto L_10012df0;
                }
                eax = eax - 1u;
    COW_AT(10012d6b)
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    goto L_10012e11;
                }
                eax = eax - 1u;
    COW_AT(10012d72)
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u) != 0u)
                {
    COW_AT(10012dbd)
                    t472 = rd32(COW_IMG(0x10456958u)) + 1u;
                    t473 = rd32(COW_IMG(0x10456958u));
                    wr32(COW_IMG(0x10456958u), t472);
                    if ((int32_t)t473 <= 2)
                    {
                        eax = t472;
                        ecx = t473;
                    }
                    else
                    {
                        eax = t472;
    COW_AT(10012dcf)
                        wr32(sp0 - 0x254u, 0x3f800000u);
                        g->eax = eax;
                        g->edx = rd32(rd32(self + 0x1cu));
                        t474 = rd32(self + 0x1cu);
                        t475 = rd32(rd32(self + 0x1cu));
                        g->esp = sp0 - 0x250u;
                        COW_RET(0x10012ddcu);
                        t476 = cow_thiscall(g, rd32(t475 + 0x34u), t474, 1, 0x3f800000u);
                        t477 = g->ecx;
                        t478 = g->edx;
                        eax = t476;
                        ecx = t477;
                        edx = t478;
    COW_AT(10012ddc)
                        wr32(COW_IMG(0x1045695cu), 1u);
                        wr32(COW_IMG(0x10456954u), 0u);
                        wr32(COW_IMG(0x10456958u), 0u);
                    }
                }
                else
                {
                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u;
    COW_AT(10012d81)
                    d462 = fr(g, (double)rdf32(sp0 - 0x240u) / loc_238_f);
                    wr32(COW_IMG(0x10456958u), 0u);
                    t463 = rd32(self + 0x1cu);
                    wr32(sp0 - 0x254u, t463);
                    wrf32(sp0 - 0x254u, (float)(double)(float)d462);
                    g->edx = rd32(t463);
                    t464 = rd32(t463);
                    g->esp = sp0 - 0x250u;
                    COW_RET(0x10012d9bu);
                    cow_thiscall(g, rd32(t464 + 0x34u), t463, 1, cow_f2bits((double)(float)d462));
                    t465 = g->ecx;
                    t466 = g->edx;
                    ecx = t465;
                    edx = t466;
    COW_AT(10012d9b)
                    t467 = rd32(COW_IMG(0x10456954u)) + 1u;
                    t468 = rd32(COW_IMG(0x10456954u));
                    wr32(COW_IMG(0x10456954u), t467);
                    if ((int32_t)(t468 + 1u) <= 45)
                    {
                        eax = t467;
                    }
                    else
                    {
                        eax = t467;
    COW_AT(10012dab)
                        wr32(sp0 - 0x254u, 1u);
                        wr32(sp0 - 0x258u, 0u);
                        wr32(COW_IMG(0x10456954u), 0u);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x250u;
                        COW_RET(0x10012db8u);
                        t469 = cow_cdecl(g, COW_IMG(0x101037f0u), 2, 0u, 1u);
                        t470 = g->ecx;
                        t471 = g->edx;
                        eax = t469;
                        ecx = t470;
                        edx = t471;
    COW_AT(10012db8)
                    }
                }
L_10012e13: ;
    COW_AT(10012e13)
                t479 = rd16(sp0 - 0x21cu);
                wr16(COW_IMG(0x103501a4u), (uint16_t)t479);
                eax = (eax & 0xffff0000u) | t479;
                loc_240_f = (double)rdf32(sp0 - 0x240u);
            }
        }
    }
    COW_AT(10012e1e)
    g->esp = sp0 - 0x250u;
    COW_RET(0x10012e23u);
    cow_stdcall(g, COW_IMG(0x10015510u), 0);
    COW_AT(10012e23)
    t480 = rd32(self + 0x334u);
    t481 = rd32(self + 0x328u);
    t482 = rd32(self + 0x338u);
    wr32(self + 0x31cu, t480);
    wr32(self + 0x320u, t482);
    wr32(self + 0x324u, t481);
    if ((uint8_t)rd32(COW_IMG(0x10350174u)) <= 0x80u)
    {
        edx = t482;
    }
    else
    {
        eax = rd32(COW_IMG(0x10350174u));
    COW_AT(10012e50)
        t483 = (uint8_t)eax + rd8(self + 0x325u) - 0x80u;
        wr32(sp0 - 0x238u, t483);
        if ((uint8_t)eax + rd8(self + 0x326u) - 0x80u <= 0xffu)
        {
            ecx = (uint8_t)eax + rd8(self + 0x326u) - 0x80u;
            eax = (uint8_t)eax + rd8(self + 0x324u) - 0x80u;
            edx = rd8(self + 0x324u);
            loc_238 = t483;
        }
        else
        {
            eax = (uint8_t)eax + rd8(self + 0x324u) - 0x80u;
            edx = rd8(self + 0x324u);
            loc_238 = t483;
    COW_AT(10012e85)
            ecx = 0xffu;
        }
    COW_AT(10012e8a)
        if (loc_238 <= 0xffu)
        {
    COW_AT(10012e9b)
            edx = (edx & 0xffffff00u) | (uint8_t)loc_238;
        }
        else
        {
    COW_AT(10012e94)
            edx = 0xffu;
        }
    COW_AT(10012e9f)
        if (eax > 0xffu)
        {
    COW_AT(10012ea6)
            eax = 0xffu;
        }
    COW_AT(10012eab)
        wr8(sp0 - 0x23eu, (uint8_t)ecx);
        wr8(sp0 - 0x23fu, (uint8_t)edx);
        wr8(sp0 - 0x240u, (uint8_t)eax);
        wr8(sp0 - 0x23du, 0u);
        t484 = rd32(sp0 - 0x240u);
        wr32(self + 0x324u, t484);
    }
    COW_AT(10012ec5)
    t485 = rd8(rd32(COW_IMG(0x1045666cu)) + 0x915u);
    if ((uint8_t)t485 == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
    COW_AT(10012ed2)
        g->esp = sp0 - 0x250u;
        COW_RET(0x10012eddu);
        t486 = cow_call_regs(g, COW_IMG(0x10017230u), eax, eax + 0x1f4u, g->edx, 1, 0);
        eax = t486;
    }
    COW_AT(10012edd)
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return (eax & 0xffffff00u) | rd8(self + 0xau);
L_10012df0: ;
    COW_AT(10012df0)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cd4u)), 0u) & 0x100u;
    COW_AT(10012dff)
        wr32(COW_IMG(0x1045695cu), 2u);
    }
    goto L_10012e13;
L_10012e0b: ;
    COW_AT(10012e0b)
    wr32(COW_IMG(0x1045695cu), 1u);
L_10012e11: ;
    COW_AT(10012e11)
    goto L_10012e13;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10011a00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10011a24u:
    {
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x250u);
        in_esi = rd32(sp0 - 0x24cu);
        in_ebp = rd32(sp0 - 0x248u);
        in_ebx = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10011a34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x250u);
        in_esi = rd32(sp0 - 0x24cu);
        in_ebp = rd32(sp0 - 0x248u);
        in_ebx = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10011a3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x250u);
        in_esi = rd32(sp0 - 0x24cu);
        in_ebp = rd32(sp0 - 0x248u);
        in_ebx = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10011a3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x250u);
        in_esi = rd32(sp0 - 0x24cu);
        in_ebp = rd32(sp0 - 0x248u);
        in_ebx = rd32(sp0 - 0x244u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10011a44u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011a4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_244;
        uint32_t loc_248;
        uint32_t loc_24c;
        uint32_t loc_250;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_248 = rd32(sp0 - 0x248u);
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011a57u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011a5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011a6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        (void)sp0;
        return 1;
    }
    case 0x10011a73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x10011a83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        (void)sp0;
        return 1;
    }
    case 0x10011a8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x254u;
        (void)sp0;
        return 1;
    }
    case 0x10011a9au:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011aa5u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011ab0u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011abbu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011ac6u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011ad0u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011ad6u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011adau:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011adfu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011aeau:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011aeeu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011b0eu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011b28u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011b35u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011b55u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011b73u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10011b8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011b98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ba3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011baeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011be1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011beeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bf5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011bffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011c9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ca7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cf0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011cffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011d0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011d4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011d57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011d63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011d6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10011d7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011d85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011d99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        wr32(sp0 - 0x258u, sp0 - 0x238u);
        (void)sp0;
        return 1;
    }
    case 0x10011da7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011db2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011dc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011dccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011dd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011ddfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011de2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011de9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011dfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x258u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10011e83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011e8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011e92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011e9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ea6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ebau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        wr32(sp0 - 0x25cu, sp0 - 0x200u);
        wr32(sp0 - 0x258u, 0x200u);
        wr32(sp0 - 0x254u, COW_IMG(0x103502fcu));
        (void)sp0;
        return 1;
    }
    case 0x10011ec4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x260u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        wr32(sp0 - 0x260u, sp0 - 0x200u);
        wr32(sp0 - 0x25cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10011eeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ef5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011ef9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011f91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011fa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10011fb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10011fc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10011fcbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10011fd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10011fd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10011fe4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001200bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x258u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012020u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001202cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012030u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001203bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001203fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001204au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001205cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012068u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x258u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012080u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001208du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012095u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100120f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012104u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001210bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012110u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012116u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001212cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012131u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001214cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001214eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012169u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001216du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012172u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001217fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10012191u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001219au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001219fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100121bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100121bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100121c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100121d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100121deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100121e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100121f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012200u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001220cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001221eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001222cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012231u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012239u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001224fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012266u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001227du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012294u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100122abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100122c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100122d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100122f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012307u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001231fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012337u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001234cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012361u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012381u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001239au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100123a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100123bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100123d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100123fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012413u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        wr32(sp0 - 0x254u, sp0 - 0x238u);
        (void)sp0;
        return 1;
    }
    case 0x10012428u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001243cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001244bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x258u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        wr32(sp0 - 0x258u, sp0 - 0x238u);
        wr32(sp0 - 0x254u, sp0 - 0x238u);
        (void)sp0;
        return 1;
    }
    case 0x10012465u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001246au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012471u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001247au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100124b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100124cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100124e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100124f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001250fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012526u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001253du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012554u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x1001256au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012581u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012598u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100125aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100125c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100125deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x100125f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012608u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->ebp = 0x11u;
        (void)sp0;
        return 1;
    }
    case 0x10012648u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012683u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012699u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100126a6u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100126e2u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x1001274au:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x258u, sp0 - 0x228u);
        wr32(sp0 - 0x254u, sp0 - 0x238u);
        (void)sp0;
        return 1;
    }
    case 0x1001275eu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012773u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001277eu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012787u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012791u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001279du:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127a4u:
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
        g->esp = sp0 - 0x254u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127a7u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127c0u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127c8u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127d7u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127ebu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100127ffu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012826u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001283bu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012851u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001286au:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012875u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012880u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012885u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012890u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001289au:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001289fu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128aau:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128b4u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128b9u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128c3u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128c8u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128d2u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128d7u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128e1u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128ebu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128f0u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100128fbu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012900u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012905u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001290cu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001291bu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012923u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001292du:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001293fu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012949u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012953u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012958u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001295fu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012964u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001296bu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012971u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001297fu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012989u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001298eu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012998u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001299du:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129a8u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129b6u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129beu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129c5u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129dcu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129e2u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100129efu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012a1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, 0xc3200000u);
        (void)sp0;
        return 1;
    }
    case 0x10012a1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, 0xc3200000u);
        (void)sp0;
        return 1;
    }
    case 0x10012a24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, 0xc3200000u);
        (void)sp0;
        return 1;
    }
    case 0x10012a29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012a31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, 0xc3200000u);
        (void)sp0;
        return 1;
    }
    case 0x10012a35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012a7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x264u;
        g->ebx = 0u;
        g->edi = sp0 - 0x264u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012a84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x264u;
        g->ebx = 0u;
        g->edi = sp0 - 0x264u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012a99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->edi = sp0 - 0x264u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012aa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = sp0 - 0x264u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012aaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = sp0 - 0x264u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012ab0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = sp0 - 0x264u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012acdu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012aefu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012afau:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012b05u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012b12u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b62u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b7bu:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012b94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bb3u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bc2u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bc4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bc6u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bdeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012bf8u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012c95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012cb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012cb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012cc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012cc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012cdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_240_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_240_f = rdf32(sp0 - 0x240u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012ceau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012cfcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238 = rd32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012d9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012dabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012db8u:
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
        g->esp = sp0 - 0x258u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012dbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012dcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012ddcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10012df0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012dffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012e0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012e11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238_f = rdf32(sp0 - 0x238u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        wr32(sp0 - 0x254u, sp0 - 0x228u);
        (void)sp0;
        return 1;
    }
    case 0x10012e13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_238_f;
        double loc_240_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_240_f = rdf32(sp0 - 0x240u);
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e23u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e50u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012e9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012ea6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012eabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012ec5u:
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
        g->esp = sp0 - 0x250u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10012ed2u:
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
        g->esp = sp0 - 0x250u;
        (void)sp0;
        return 1;
    }
    case 0x10012eddu:
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
        g->esp = sp0 - 0x250u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10011a00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10011a00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
