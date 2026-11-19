/* f_0x101b00b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_101b00b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_23cc;
    uint32_t loc_23d0;
    uint32_t loc_23d4;
    uint32_t loc_23d8;
    uint32_t loc_23dc;
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
    uint32_t t487;
    uint32_t t488;
    uint32_t t489;
    uint32_t t49;
    uint32_t t490;
    uint32_t t491;
    uint32_t t492;
    uint32_t t493;
    uint32_t t494;
    uint32_t t495;
    uint32_t t496;
    uint32_t t497;
    uint32_t t498;
    uint32_t t499;
    uint32_t t5;
    uint32_t t50;
    uint32_t t500;
    uint32_t t501;
    uint32_t t502;
    uint32_t t503;
    uint32_t t504;
    uint32_t t505;
    uint32_t t506;
    uint32_t t507;
    uint32_t t508;
    uint32_t t509;
    uint32_t t51;
    uint32_t t510;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 9184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b00bau: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_101b00ba;
    case 0x101b00d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b00d1;
    case 0x101b00dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b00df;
    case 0x101b00ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b00eb;
    case 0x101b00fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b00fd;
    case 0x101b0101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0101;
    case 0x101b0105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0105;
    case 0x101b0118u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0118;
    case 0x101b012du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b012d;
    case 0x101b0136u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0136;
    case 0x101b0145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0145;
    case 0x101b014au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b014a;
    case 0x101b0151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0151;
    case 0x101b0157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0157;
    case 0x101b015cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b015c;
    case 0x101b016cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b016c;
    case 0x101b0188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0188;
    case 0x101b0196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0196;
    case 0x101b01a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b01a2;
    case 0x101b01a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01a7;
    case 0x101b01adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01ad;
    case 0x101b01b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01b8;
    case 0x101b01bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01bb;
    case 0x101b01c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01c0;
    case 0x101b01c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01c5;
    case 0x101b01cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b01ca;
    case 0x101b01ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01cc;
    case 0x101b01d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01d1;
    case 0x101b01e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b01e1;
    case 0x101b01f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01f6;
    case 0x101b01ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b01ff;
    case 0x101b0205u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0205;
    case 0x101b0214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0214;
    case 0x101b0223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0223;
    case 0x101b022fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b022f;
    case 0x101b023fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b023f;
    case 0x101b0246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0246;
    case 0x101b024fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b024f;
    case 0x101b0257u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0257;
    case 0x101b0260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0260;
    case 0x101b0268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0268;
    case 0x101b026fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b026f;
    case 0x101b0273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0273;
    case 0x101b0279u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0279;
    case 0x101b027du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b027d;
    case 0x101b0283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0283;
    case 0x101b028bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b028b;
    case 0x101b029bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b029b;
    case 0x101b02a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02a1;
    case 0x101b02b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02b0;
    case 0x101b02b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b02b6;
    case 0x101b02c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b02c5;
    case 0x101b02ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02cc;
    case 0x101b02d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02d3;
    case 0x101b02dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02db;
    case 0x101b02e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02e3;
    case 0x101b02e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b02e7;
    case 0x101b02ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b02ec;
    case 0x101b02f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b02f1;
    case 0x101b02fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b02fa;
    case 0x101b0307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0307;
    case 0x101b0313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0313;
    case 0x101b0329u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0329;
    case 0x101b032fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b032f;
    case 0x101b0337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0337;
    case 0x101b033fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b033f;
    case 0x101b0346u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0346;
    case 0x101b034au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b034a;
    case 0x101b0355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0355;
    case 0x101b0359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0359;
    case 0x101b035eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b035e;
    case 0x101b0363u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0363;
    case 0x101b036au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b036a;
    case 0x101b036eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b036e;
    case 0x101b0375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0375;
    case 0x101b0381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0381;
    case 0x101b0388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0388;
    case 0x101b039cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b039c;
    case 0x101b03a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03a8;
    case 0x101b03b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03b4;
    case 0x101b03c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03c0;
    case 0x101b03d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b03d0;
    case 0x101b03e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03e3;
    case 0x101b03f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b03f1;
    case 0x101b03f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b03f3;
    case 0x101b03fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b03fd;
    case 0x101b040fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b040f;
    case 0x101b0414u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0414;
    case 0x101b041bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b041b;
    case 0x101b0424u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0424;
    case 0x101b042fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b042f;
    case 0x101b043eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b043e;
    case 0x101b044bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b044b;
    case 0x101b0459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0459;
    case 0x101b0463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0463;
    case 0x101b0472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0472;
    case 0x101b047du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b047d;
    case 0x101b0484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0484;
    case 0x101b0488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0488;
    case 0x101b0498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0498;
    case 0x101b04b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b04b4;
    case 0x101b04c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b04c2;
    case 0x101b04ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b04ce;
    case 0x101b04d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b04d3;
    case 0x101b04ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b04dd;
    case 0x101b04e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b04e4;
    case 0x101b04f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b04f3;
    case 0x101b050fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b050f;
    case 0x101b051eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b051e;
    case 0x101b052cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b052c;
    case 0x101b0531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0531;
    case 0x101b0537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0537;
    case 0x101b053bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b053b;
    case 0x101b053fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b053f;
    case 0x101b054fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b054f;
    case 0x101b0558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0558;
    case 0x101b055fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b055f;
    case 0x101b0569u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0569;
    case 0x101b057au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b057a;
    case 0x101b0589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0589;
    case 0x101b0597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0597;
    case 0x101b059cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b059c;
    case 0x101b05abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b05ab;
    case 0x101b05c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b05c7;
    case 0x101b05d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b05d1;
    case 0x101b05e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b05e0;
    case 0x101b05e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b05e7;
    case 0x101b05ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b05ec;
    case 0x101b05f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b05f3;
    case 0x101b05f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b05f8;
    case 0x101b0607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0607;
    case 0x101b061cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b061c;
    case 0x101b0621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0621;
    case 0x101b0629u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0629;
    case 0x101b0631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0631;
    case 0x101b0641u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0641;
    case 0x101b065du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b065d;
    case 0x101b066cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b066c;
    case 0x101b067cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b067c;
    case 0x101b0681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0681;
    case 0x101b0688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0688;
    case 0x101b0691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0691;
    case 0x101b0696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0696;
    case 0x101b069eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b069e;
    case 0x101b06a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b06a6;
    case 0x101b06b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b06b5;
    case 0x101b06d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b06d1;
    case 0x101b06e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b06e0;
    case 0x101b06e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b06e9;
    case 0x101b06fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b06fb;
    case 0x101b0703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0703;
    case 0x101b070fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b070f;
    case 0x101b0716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0716;
    case 0x101b071fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b071f;
    case 0x101b0724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0724;
    case 0x101b072cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b072c;
    case 0x101b0732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0732;
    case 0x101b0740u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0740;
    case 0x101b0745u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0745;
    case 0x101b074cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b074c;
    case 0x101b0754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0754;
    case 0x101b0759u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0759;
    case 0x101b075eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b075e;
    case 0x101b0763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0763;
    case 0x101b0771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0771;
    case 0x101b0777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0777;
    case 0x101b077cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b077c;
    case 0x101b0781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23cc = rd32(sp0 - 0x23ccu); goto E_101b0781;
    case 0x101b078fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b078f;
    case 0x101b07a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); goto E_101b07a4;
    case 0x101b07b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b07b3;
    case 0x101b07bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b07bc;
    case 0x101b07c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23cc = rd32(sp0 - 0x23ccu); goto E_101b07c1;
    case 0x101b07d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b07d0;
    case 0x101b07d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b07d6;
    case 0x101b07dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b07dc;
    case 0x101b07e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b07e4;
    case 0x101b07f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b07f4;
    case 0x101b07fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b07fc;
    case 0x101b0810u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); goto E_101b0810;
    case 0x101b081eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b081e;
    case 0x101b0827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0827;
    case 0x101b082cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b082c;
    case 0x101b0833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0833;
    case 0x101b0838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0838;
    case 0x101b083du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b083d;
    case 0x101b0841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0841;
    case 0x101b0845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0845;
    case 0x101b084du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b084d;
    case 0x101b0855u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0855;
    case 0x101b0864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0864;
    case 0x101b0887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0887;
    case 0x101b088du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b088d;
    case 0x101b0892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0892;
    case 0x101b08a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08a1;
    case 0x101b08b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08b5;
    case 0x101b08bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b08ba;
    case 0x101b08beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b08be;
    case 0x101b08c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b08c2;
    case 0x101b08ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08ce;
    case 0x101b08deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b08de;
    case 0x101b08ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08ec;
    case 0x101b08fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b08fa;
    case 0x101b08feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b08fe;
    case 0x101b090eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b090e;
    case 0x101b092au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b092a;
    case 0x101b0936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0936;
    case 0x101b093bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b093b;
    case 0x101b0946u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0946;
    case 0x101b094bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b094b;
    case 0x101b0959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0959;
    case 0x101b0963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0963;
    case 0x101b0974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0974;
    case 0x101b097fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b097f;
    case 0x101b0984u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0984;
    case 0x101b0993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0993;
    case 0x101b09a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b09a2;
    case 0x101b09a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09a9;
    case 0x101b09b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09b1;
    case 0x101b09b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09b7;
    case 0x101b09bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09bf;
    case 0x101b09c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09c5;
    case 0x101b09cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09cd;
    case 0x101b09d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b09d3;
    case 0x101b09e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09e3;
    case 0x101b09eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09ea;
    case 0x101b09eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09ee;
    case 0x101b09f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09f5;
    case 0x101b09f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b09f9;
    case 0x101b0a08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a08;
    case 0x101b0a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0a16;
    case 0x101b0a27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a27;
    case 0x101b0a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a3e;
    case 0x101b0a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0a53;
    case 0x101b0a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a59;
    case 0x101b0a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a61;
    case 0x101b0a69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a69;
    case 0x101b0a70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a70;
    case 0x101b0a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a74;
    case 0x101b0a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a7f;
    case 0x101b0a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0a83;
    case 0x101b0a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0a88;
    case 0x101b0a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a8d;
    case 0x101b0a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a94;
    case 0x101b0a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a98;
    case 0x101b0a9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0a9f;
    case 0x101b0aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0aab;
    case 0x101b0ab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0ab2;
    case 0x101b0ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0ac1;
    case 0x101b0addu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0add;
    case 0x101b0aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0aec;
    case 0x101b0b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b06;
    case 0x101b0b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b16;
    case 0x101b0b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b1d;
    case 0x101b0b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b2f;
    case 0x101b0b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b3e;
    case 0x101b0b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b4c;
    case 0x101b0b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b50;
    case 0x101b0b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b52;
    case 0x101b0b5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b0b5c;
    case 0x101b0b61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b61;
    case 0x101b0b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0b66;
    case 0x101b0b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0b71;
    case 0x101b0b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0b7a;
    case 0x101b0b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0b82;
    case 0x101b0b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b89;
    case 0x101b0b8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0b8e;
    case 0x101b0b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0b9d;
    case 0x101b0bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0bb9;
    case 0x101b0bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0bc7;
    case 0x101b0bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0bd1;
    case 0x101b0bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0bdb;
    case 0x101b0bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0bf1;
    case 0x101b0c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c0d;
    case 0x101b0c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c1c;
    case 0x101b0c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0c21;
    case 0x101b0c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c2a;
    case 0x101b0c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0c3f;
    case 0x101b0c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c54;
    case 0x101b0c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c5f;
    case 0x101b0c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c68;
    case 0x101b0c70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c70;
    case 0x101b0c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0c77;
    case 0x101b0c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c7c;
    case 0x101b0c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0c8b;
    case 0x101b0ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23dc = rd32(sp0 - 0x23dcu); loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); goto E_101b0ca0;
    case 0x101b0ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0ca7;
    case 0x101b0cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0cb6;
    case 0x101b0cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0cc0;
    case 0x101b0ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0cca;
    case 0x101b0cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0cd6;
    case 0x101b0cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0cdb;
    case 0x101b0ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0ce4;
    case 0x101b0cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0cf3;
    case 0x101b0d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0d08;
    case 0x101b0d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0d11;
    case 0x101b0d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d17;
    case 0x101b0d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d1b;
    case 0x101b0d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d22;
    case 0x101b0d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d29;
    case 0x101b0d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d31;
    case 0x101b0d39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d39;
    case 0x101b0d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0d41;
    case 0x101b0d46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0d46;
    case 0x101b0d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0d4b;
    case 0x101b0d52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d52;
    case 0x101b0d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d5a;
    case 0x101b0d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d60;
    case 0x101b0d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d68;
    case 0x101b0d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d6e;
    case 0x101b0d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d76;
    case 0x101b0d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0d86;
    case 0x101b0da2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0da2;
    case 0x101b0db0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0db0;
    case 0x101b0db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0db9;
    case 0x101b0dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0dbe;
    case 0x101b0dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0dc4;
    case 0x101b0dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0dd9;
    case 0x101b0de0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0de0;
    case 0x101b0de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0de4;
    case 0x101b0de8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0de8;
    case 0x101b0e04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0e04;
    case 0x101b0e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e09;
    case 0x101b0e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e10;
    case 0x101b0e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e14;
    case 0x101b0e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e1c;
    case 0x101b0e2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e2a;
    case 0x101b0e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e3a;
    case 0x101b0e56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0e56;
    case 0x101b0e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e65;
    case 0x101b0e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e6d;
    case 0x101b0e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e74;
    case 0x101b0e7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e7c;
    case 0x101b0e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e8b;
    case 0x101b0e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0e8c;
    case 0x101b0e9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0e9a;
    case 0x101b0eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); goto E_101b0eb6;
    case 0x101b0ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0ec5;
    case 0x101b0eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0ece;
    case 0x101b0ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0ed3;
    case 0x101b0edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0eda;
    case 0x101b0edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0ede;
    case 0x101b0eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0eee;
    case 0x101b0f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0f0a;
    case 0x101b0f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f19;
    case 0x101b0f20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f20;
    case 0x101b0f25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f25;
    case 0x101b0f2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f2a;
    case 0x101b0f32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f32;
    case 0x101b0f3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f3b;
    case 0x101b0f4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f4b;
    case 0x101b0f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0f5d;
    case 0x101b0f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f6c;
    case 0x101b0f71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b0f71;
    case 0x101b0f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0f76;
    case 0x101b0f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f7d;
    case 0x101b0f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0f82;
    case 0x101b0f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f90;
    case 0x101b0f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0f98;
    case 0x101b0facu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); goto E_101b0fac;
    case 0x101b0fbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0fbb;
    case 0x101b0fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0fc0;
    case 0x101b0fc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b0fc8;
    case 0x101b0fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0fd4;
    case 0x101b0fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0fe6;
    case 0x101b0ff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b0ff7;
    case 0x101b1008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1008;
    case 0x101b100fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b100f;
    case 0x101b1010u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1010;
    case 0x101b1014u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1014;
    case 0x101b101du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b101d;
    case 0x101b102cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b102c;
    case 0x101b103eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b103e;
    case 0x101b104cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b104c;
    case 0x101b1051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b1051;
    case 0x101b1055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1055;
    case 0x101b105bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b105b;
    case 0x101b1063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1063;
    case 0x101b1069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1069;
    case 0x101b1072u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1072;
    case 0x101b1081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1081;
    case 0x101b1089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1089;
    case 0x101b109du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); goto E_101b109d;
    case 0x101b10acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b10ac;
    case 0x101b10b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b10b3;
    case 0x101b10bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b10bb;
    case 0x101b10c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b10c1;
    case 0x101b10c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b10c9;
    case 0x101b10d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b10d9;
    case 0x101b10ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b10eb;
    case 0x101b1104u: ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1104;
    case 0x101b110eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b110e;
    case 0x101b111eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b111e;
    case 0x101b1129u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1129;
    case 0x101b1138u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b1138;
    case 0x101b113au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b113a;
    case 0x101b1149u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b1149;
    case 0x101b114bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b114b;
    case 0x101b1157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b1157;
    case 0x101b1160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1160;
    case 0x101b1165u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b1165;
    case 0x101b1167u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1167;
    case 0x101b1177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b1177;
    case 0x101b1183u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b1183;
    default: break;
    }
#endif

    COW_AT(101b00b0)
    COW_AT(101b00ba)
    wr32(sp0 - 0x23c0u, in_ebx);
    wr32(sp0 - 0x23c4u, in_ebp);
    wr32(sp0 - 0x23c8u, in_esi);
    wr32(sp0 - 0x23ccu, in_edi);
    wr8(sp0 - 0x23b5u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b4710u), sp0 - 0x21e4u, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(101b00d1)
    t2 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t2);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t2;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t4 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(101b00df)
    if (rd8(self + 0xf0ecu) != 0u)
    {
        edi = eax;
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
    COW_AT(101b0101)
        ebx = rd32(sp0 - 0x23b4u);
    }
    else
    {
        edi = eax;
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
    COW_AT(101b00eb)
        wr32(sp0 - 0x23d0u, 0x1c2u);
        wr32(sp0 - 0x23d4u, sp0 - 0x23a8u);
        wr32(sp0 - 0x23d8u, 8u);
        wr32(sp0 - 0x23dcu, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0x23a8u;
        g->esp = sp0 - 0x23ccu;
        t7 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, edi, 8u, sp0 - 0x23a8u, 0x1c2u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(101b00fd)
        ebx = eax;
    }
    COW_AT(101b0105)
    wr32(sp0 - 0x23d0u, (uint8_t)arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t10 = cow_cdecl(g, COW_IMG(0x101aff00u), 1, (uint8_t)arg2);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(101b0118)
    wr8(sp0 - 0x23bcu, (uint8_t)eax);
    if (rd8(self + 0xf0ecu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b01ad;
    }
    COW_AT(101b012d)
    if ((uint8_t)arg2 - 1u > 0xcfu) goto L_101b0151;
    COW_AT(101b0136)
    t13 = rd32(COW_IMG(0x101b1194u) + rd8(COW_IMG(0x101b11a4u) + (uint8_t)arg2 - 1u) * 4u);
    switch (t13 - RD)
    {
    case 0x101b0145u: eax = rd8(COW_IMG(0x101b11a4u) + (uint8_t)arg2 - 1u); goto L_101b0145;
    case 0x101b0151u: goto L_101b0151;
    case 0x101b0157u: eax = rd8(COW_IMG(0x101b11a4u) + (uint8_t)arg2 - 1u); goto L_101b0157;
    case 0x101b01a7u: goto L_101b01a7;
    default: rt_fatal(g, COW_IMG(0x101b013eu), "switch");
    }
    return 0;
L_101b0145: ;
    COW_AT(101b0145)
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    t23 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    eax = t23;
    COW_AT(101b014a)
    g->edx = rd32(self);
    t24 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(t24 + 0x70u), self, 0);
    t25 = g->edx;
    edx = t25;
L_101b0151: ;
    COW_AT(101b0151)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
L_101b0f82: ;
    COW_AT(101b0f82)
    t486 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t486);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t486, loc_23d0);
    COW_AT(101b0f90)
    wr32(sp0 - 0x23d0u, arg4);
    edx = arg4;
L_101b0f98: ;
    COW_AT(101b0f98)
    wr32(sp0 - 0x23d4u, arg3);
    t487 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t487);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t487, arg3, arg4);
    t488 = g->ecx;
    ecx = t488;
    COW_AT(101b0fac)
    t489 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t489);
    eax = t489;
    edx = rd32(COW_IMG(0x103d3c64u));
    loc_23d0 = t489;
L_101b1160: ;
    COW_AT(101b1160)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t504 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_23d0);
    t505 = g->ecx;
    eax = t504;
    ecx = t505;
L_101b1165: ;
    COW_AT(101b1165)
    edi = eax;
L_101b1167: ;
    COW_AT(101b1167)
    wr32(sp0 - 0x23d0u, edi);
    t506 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t506);
    g->eax = t506;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t507 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t508 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t506, edi);
    t509 = g->edx;
    eax = t508;
    edx = t509;
    COW_AT(101b1177)
    g->esp = sp0 - 0x23ccu;
    t510 = cow_call_regs(g, COW_IMG(0x101b4780u), eax, sp0 - 0x21e4u, edx, 1, 0);
    eax = t510;
    COW_AT(101b1183)
    g->ebx = rd32(sp0 - 0x23c0u);
    g->esi = rd32(sp0 - 0x23c8u);
    g->edi = rd32(sp0 - 0x23ccu);
    g->ebp = rd32(sp0 - 0x23c4u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x23b5u);
L_101b0157: ;
    COW_AT(101b0157)
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    t14 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    eax = t14;
    COW_AT(101b015c)
    wr32(sp0 - 0x23d0u, edi);
    t15 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t15);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t15, edi);
    COW_AT(101b016c)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t16 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t16);
    g->edx = t16;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t16, arg3, arg4);
    t17 = g->edx;
    edx = t17;
    COW_AT(101b0188)
    t18 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t18);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t19 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t20 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t18);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(101b0196)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
    t22 = g->ecx;
    ecx = t22;
    edi = eax;
    COW_AT(101b01a2)
    goto L_101b1167;
L_101b01a7: ;
    COW_AT(101b01a7)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
L_101b1072: ;
    COW_AT(101b1072)
    t265 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t265);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t265, loc_23d0);
    COW_AT(101b1081)
    wr32(sp0 - 0x23d0u, arg4);
L_101b1089: ;
    COW_AT(101b1089)
    wr32(sp0 - 0x23d4u, arg3);
    t266 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t266);
    g->eax = t266;
    g->esp = sp0 - 0x23ccu;
    t267 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t266, arg3, arg4);
    eax = t267;
    COW_AT(101b109d)
    t268 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t268);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t268;
    loc_23d0 = t268;
    goto L_101b1160;
L_101b01ad: ;
    COW_AT(101b01ad)
    if (rd32(self + 0xf10cu) != 1u)
    {
        ecx = rd32(self + 0xf10cu);
        goto L_101b01f6;
    }
    ecx = rd32(self + 0xf10cu);
    COW_AT(101b01b8)
    if ((uint8_t)arg2 == 1u)
    {
    COW_AT(101b01cc)
        g->eax = eax;
        g->esp = sp0 - 0x23ccu;
        t27 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        eax = t27;
    }
    else
    {
    COW_AT(101b01bb)
        if ((uint8_t)arg2 - 1u == 0x1bu) goto L_101b01c5;
    COW_AT(101b01c0)
        if ((uint8_t)arg2 - 0x1cu != 0x29u) goto L_101b01d1;
L_101b01c5: ;
    COW_AT(101b01c5)
        g->eax = eax;
        g->esp = sp0 - 0x23ccu;
        t26 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        eax = t26;
    COW_AT(101b01ca)
    }
L_101b01d1: ;
    COW_AT(101b01d1)
    wr32(sp0 - 0x23d0u, edi);
    t28 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t28);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t28, edi);
    COW_AT(101b01e1)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    eax = arg4;
L_101b114b: ;
    COW_AT(101b114b)
    t501 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t501);
    g->edx = t501;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t501, arg3, arg4);
    t502 = g->edx;
    edx = t502;
    COW_AT(101b1157)
    t503 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t503);
    eax = rd32(COW_IMG(0x103d3c64u));
    ecx = t503;
    loc_23d0 = t503;
    goto L_101b1160;
L_101b01f6: ;
    COW_AT(101b01f6)
    if ((int32_t)(uint8_t)arg2 > 69) goto L_101b0984;
    COW_AT(101b01ff)
    if ((uint8_t)arg2 == 0x45u) goto L_101b082c;
    COW_AT(101b0205)
    if ((uint8_t)arg2 + 0x40u > 0x84u) goto L_101b10eb;
    COW_AT(101b0214)
    t29 = rd32(COW_IMG(0x101b1274u) + rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u) * 4u);
    switch (t29 - RD)
    {
    case 0x101b0223u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b0223;
    case 0x101b02b6u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b02b6;
    case 0x101b0329u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b0329;
    case 0x101b047du: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b047d;
    case 0x101b05ecu: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b05ec;
    case 0x101b0681u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b0681;
    case 0x101b070fu: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b070f;
    case 0x101b0732u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b0732;
    case 0x101b07d6u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b07d6;
    case 0x101b082cu: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b082c;
    case 0x101b09d3u: goto L_101b09d3;
    case 0x101b0d08u: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b0d08;
    case 0x101b10acu: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b10ac;
    case 0x101b10ebu: edx = rd8(COW_IMG(0x101b12acu) + (uint8_t)arg2 + 0x40u); goto L_101b10eb;
    default: rt_fatal(g, COW_IMG(0x101b021cu), "switch");
    }
    return 0;
L_101b0223: ;
    COW_AT(101b0223)
    if ((uint8_t)arg4 != 1u) goto L_101b0268;
    COW_AT(101b022f)
    wr32(sp0 - 0x23d0u, sp0 - 0x23acu);
    wr32(sp0 - 0x23d4u, sp0 - 0x23b0u);
    wr32(sp0 - 0x23d8u, edi);
    g->eax = sp0 - 0x23acu;
    g->ecx = sp0 - 0x23b0u;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t190 = cow_stdcall(g, COW_IMG(0x102bc882u), 3, edi, sp0 - 0x23b0u, sp0 - 0x23acu);
    t191 = g->ecx;
    t192 = g->edx;
    eax = t190;
    ecx = t191;
    edx = t192;
    COW_AT(101b023f)
    if (rd32(sp0 - 0x23b0u) != 0x19u)
    {
    COW_AT(101b0257)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 3u);
        g->ecx = ecx;
        g->esp = sp0 - 0x23ccu;
        cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 3u, 0u);
        t194 = g->ecx;
        ecx = t194;
    COW_AT(101b0260)
    }
    else
    {
    COW_AT(101b0246)
        wr32(sp0 - 0x23d0u, 1u);
        wr32(sp0 - 0x23d4u, 3u);
        g->ecx = ecx;
        g->esp = sp0 - 0x23ccu;
        cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 3u, 1u);
        t193 = g->ecx;
        ecx = t193;
    COW_AT(101b024f)
    }
    goto L_101b1167;
L_101b0268: ;
    COW_AT(101b0268)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t195 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t196 = g->ecx;
    t197 = g->edx;
    eax = t195;
    ecx = t196;
    edx = t197;
    COW_AT(101b026f)
    if ((uint8_t)eax != 0u) goto L_101b02a1;
    COW_AT(101b0273)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t198 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t199 = g->ecx;
    t200 = g->edx;
    eax = t198;
    ecx = t199;
    edx = t200;
    COW_AT(101b0279)
    if (eax == 0u) goto L_101b02a1;
    COW_AT(101b027d)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t201 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t202 = g->ecx;
    eax = t201;
    ecx = t202;
    COW_AT(101b0283)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b028b)
    wr32(sp0 - 0x23d0u, edi);
    t203 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t203);
    g->eax = t203;
    g->esp = sp0 - 0x23ccu;
    t204 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t203, edi);
    eax = t204;
    COW_AT(101b029b)
    wr32(sp0 - 0x23d0u, arg4);
L_101b07fc: ;
    COW_AT(101b07fc)
    wr32(sp0 - 0x23d4u, arg3);
    t205 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t205);
    g->edx = t205;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t205, arg3, arg4);
    t206 = g->edx;
    edx = t206;
    COW_AT(101b0810)
    t207 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t207);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t208 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t209 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t207);
    eax = t209;
    COW_AT(101b081e)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    t210 = g->ecx;
    ecx = t210;
    edi = eax;
    COW_AT(101b0827)
    goto L_101b1167;
L_101b02a1: ;
    COW_AT(101b02a1)
    wr32(sp0 - 0x23d0u, edi);
    t211 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t211);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t211, edi);
    COW_AT(101b02b0)
    wr32(sp0 - 0x23d0u, arg4);
    goto L_101b1089;
L_101b02b6: ;
    COW_AT(101b02b6)
    if (arg1 != 0u) goto L_101b1167;
    COW_AT(101b02c5)
    g->eax = rd32(self);
    t174 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t175 = cow_thiscall(g, rd32(t174 + 0x70u), self, 0);
    eax = t175;
    COW_AT(101b02cc)
    g->eax = eax;
    g->edx = rd32(self);
    t176 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t177 = cow_thiscall(g, rd32(t176 + 0x68u), self, 0);
    t178 = g->edx;
    eax = t177;
    edx = t178;
    COW_AT(101b02d3)
    wr32(sp0 - 0x23d0u, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t179 = rd32(self);
    g->esp = sp0 - 0x23d0u;
    t180 = cow_thiscall(g, rd32(t179 + 0x64u), self, 0);
    t181 = g->edx;
    eax = t180;
    edx = t181;
    COW_AT(101b02db)
    wr32(sp0 - 0x23d4u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t182 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x23d0u));
    t183 = g->ecx;
    t184 = g->edx;
    eax = t182;
    ecx = t183;
    edx = t184;
    COW_AT(101b02e3)
    if ((int32_t)eax >= 0) goto L_101b02f1;
    COW_AT(101b02e7)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t185 = g->ecx;
    ecx = t185;
    COW_AT(101b02ec)
    goto L_101b1167;
L_101b02f1: ;
    COW_AT(101b02f1)
    wr32(sp0 - 0x23d0u, 0u);
    g->eax = eax;
    g->edx = rd32(self);
    t186 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t187 = cow_thiscall(g, rd32(t186 + 0x60u), self, 1, 0u);
    t188 = g->ecx;
    t189 = g->edx;
    eax = t187;
    ecx = t188;
    edx = t189;
L_101b02fa: ;
    COW_AT(101b02fa)
    wr32(sp0 - 0x23d0u, edi);
    wr8(self + 0xf120u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t344 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t345 = g->ecx;
    t346 = g->edx;
    eax = t344;
    ecx = t345;
    edx = t346;
    COW_AT(101b0307)
    t347 = -(eax != 0u) + 1u;
    wr32(sp0 - 0x23d0u, t347);
    wr32(sp0 - 0x23d4u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, t347);
    t348 = g->ecx;
    ecx = t348;
    COW_AT(101b0313)
    wr8(self + 0xf123u, 0u);
    wr32(self + 0xf2f0u, 0u);
    goto L_101b1167;
L_101b0329: ;
    COW_AT(101b0329)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t143 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t144 = g->edx;
    eax = t143;
    edx = t144;
    COW_AT(101b032f)
    if (eax == 0u) goto L_101b0414;
    COW_AT(101b0337)
    if ((int32_t)ebx <= 0) goto L_101b0414;
    COW_AT(101b033f)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t145 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t146 = g->edx;
    eax = t145;
    edx = t146;
    COW_AT(101b0346)
    if ((uint8_t)eax == 0u) goto L_101b0363;
    COW_AT(101b034a)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t147 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t148 = g->ecx;
    t149 = g->edx;
    eax = t147;
    ecx = t148;
    edx = t149;
    COW_AT(101b0355)
    if ((uint8_t)eax == 0u) goto L_101b0363;
    COW_AT(101b0359)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t150 = g->ecx;
    ecx = t150;
    COW_AT(101b035e)
    goto L_101b1167;
L_101b0363: ;
    COW_AT(101b0363)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t151 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t152 = g->edx;
    eax = t151;
    edx = t152;
    COW_AT(101b036a)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b036e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        t153 = cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
        t154 = g->ecx;
        t155 = g->edx;
        eax = t153;
        ecx = t154;
        edx = t155;
    COW_AT(101b0375)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 3u);
        wr32(sp0 - 0x23d8u, 0x15u);
        wr32(sp0 - 0x23dcu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 3u, 0u);
        t156 = g->edx;
        edx = t156;
    COW_AT(101b0381)
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
        t157 = g->edx;
        edx = t157;
    }
    COW_AT(101b0388)
    t158 = rd32(self + 0xf128u) + 1u;
    wr32(self + 0xf128u, t158);
    if (t158 != 1u)
    {
        eax = t158;
        goto L_101b03f3;
    }
    eax = t158;
    ecx = t158;
L_101b039c: ;
    COW_AT(101b039c)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 2u);
    wr32(sp0 - 0x23d8u, 0x15u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t436 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t437 = g->ecx;
    t438 = g->edx;
    eax = t436;
    ecx = t437;
    edx = t438;
    COW_AT(101b03a8)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 2u);
    wr32(sp0 - 0x23d8u, 0x15u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t439 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t440 = g->ecx;
    t441 = g->edx;
    eax = t439;
    ecx = t440;
    edx = t441;
    COW_AT(101b03b4)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, 0x12u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    t442 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, 0u, 0u);
    eax = t442;
    COW_AT(101b03c0)
    wr32(sp0 - 0x23d0u, edi);
    t443 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t443);
    g->eax = eax;
    g->edx = t443;
    g->esp = sp0 - 0x23ccu;
    t444 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t443, edi);
    t445 = g->edx;
    eax = t444;
    edx = t445;
    COW_AT(101b03d0)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, COW_IMG(0x10377cbcu));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    t446 = g->edx;
    edx = t446;
    COW_AT(101b03e3)
    t447 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t447);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t448 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t449 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t447);
    eax = t449;
    COW_AT(101b03f1)
    edi = eax;
L_101b03f3: ;
    COW_AT(101b03f3)
    g->edx = rd32(rd32(self + 0xf104u));
    t450 = rd32(self + 0xf104u);
    t451 = rd32(rd32(self + 0xf104u));
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(t451), t450, 0);
    t452 = g->ecx;
    t453 = g->edx;
    ecx = t452;
    edx = t453;
    COW_AT(101b03fd)
    wr8(self + 0xf123u, 1u);
    wr32(sp0 - 0x23d0u, sp0 - 0x23b4u);
    wr32(sp0 - 0x23d4u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x102bc870u), 2, edi, sp0 - 0x23b4u);
    t454 = g->ecx;
    ecx = t454;
    COW_AT(101b040f)
    goto L_101b1167;
L_101b0414: ;
    COW_AT(101b0414)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t159 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t160 = g->ecx;
    t161 = g->edx;
    eax = t159;
    ecx = t160;
    edx = t161;
    COW_AT(101b041b)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0f82;
    }
    loc_23d0 = edi;
    COW_AT(101b0424)
    if ((uint8_t)arg3 == 0u) goto L_101b0463;
    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    COW_AT(101b042f)
    t162 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t162);
    g->eax = eax;
    g->edx = t162;
    g->esp = sp0 - 0x23ccu;
    t163 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t162, loc_23d0);
    t164 = g->edx;
    eax = t163;
    edx = t164;
    COW_AT(101b043e)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, 0x26u);
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x26u, 0u, 0u);
    t165 = g->edx;
    edx = t165;
    COW_AT(101b044b)
    t166 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t166);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t166;
    t167 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t168 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t166);
    t169 = g->ecx;
    eax = t168;
    ecx = t169;
    COW_AT(101b0459)
    wr8(sp0 - 0x23b5u, 1u);
    goto L_101b1165;
L_101b0463: ;
    COW_AT(101b0463)
    t170 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t170);
    g->eax = t170;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t171 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23d0u;
    t172 = cow_stdcall(g, COW_IMG(0x101aff60u), 1, t170);
    t173 = g->edx;
    eax = t172;
    edx = t173;
    COW_AT(101b0472)
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, 0u);
    wr32(sp0 - 0x23dcu, 0x28u);
    loc_23d4 = 0u;
    loc_23d8 = 0u;
    loc_23dc = 0x28u;
L_101b0ca0: ;
    COW_AT(101b0ca0)
    g->eax = eax;
    g->esp = sp0 - 0x23d0u;
    t369 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_23dc, loc_23d8, loc_23d4);
    eax = t369;
    COW_AT(101b0ca7)
    t370 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t370);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    t371 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t372 = cow_stdcall(g, COW_IMG(0x101aff50u), 2, t370, rd32(sp0 - 0x23d0u));
    t373 = g->ecx;
    eax = t372;
    ecx = t373;
    COW_AT(101b0cb6)
    wr8(sp0 - 0x23b5u, 1u);
    goto L_101b1165;
L_101b047d: ;
    COW_AT(101b047d)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t90 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t91 = g->ecx;
    t92 = g->edx;
    eax = t90;
    ecx = t91;
    edx = t92;
    COW_AT(101b0484)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101b04d3)
        if (rd8(self + 0xf123u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b0531)
            wr32(sp0 - 0x23d0u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            t113 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
            t114 = g->edx;
            eax = t113;
            edx = t114;
    COW_AT(101b0537)
            if (eax == 0u) goto L_101b059c;
    COW_AT(101b053b)
            if ((int32_t)ebx <= 0) goto L_101b059c;
    COW_AT(101b053f)
            wr32(sp0 - 0x23d0u, edi);
            t115 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t115);
            g->edx = t115;
            g->esp = sp0 - 0x23ccu;
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t115, edi);
            t116 = g->edx;
            edx = t116;
    COW_AT(101b054f)
            wr32(sp0 - 0x23d0u, 0u);
            g->eax = rd32(self);
            t117 = rd32(self);
            g->esp = sp0 - 0x23ccu;
            t118 = cow_thiscall(g, rd32(t117 + 0x60u), self, 1, 0u);
            eax = t118;
    COW_AT(101b0558)
            g->eax = eax;
            g->edx = rd32(self);
            t119 = rd32(self);
            g->esp = sp0 - 0x23ccu;
            t120 = cow_thiscall(g, rd32(t119 + 0x5cu), self, 0);
            t121 = g->edx;
            eax = t120;
            edx = t121;
    COW_AT(101b055f)
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
            t122 = g->edx;
            edx = t122;
    COW_AT(101b0569)
            t123 = rd32(self + 0xf104u);
            wr8(self + 0xf120u, 0u);
            g->eax = rd32(t123);
            t124 = rd32(t123);
            g->esp = sp0 - 0x23ccu;
            t125 = cow_thiscall(g, rd32(t124), t123, 0);
            eax = t125;
    COW_AT(101b057a)
            t126 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t126);
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103d3c64u));
            g->edx = t126;
            t127 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            t128 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t126);
            t129 = g->ecx;
            t130 = g->edx;
            eax = t128;
            ecx = t129;
            edx = t130;
    COW_AT(101b0589)
            wr8(self + 0xf123u, 0u);
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            t131 = g->ecx;
            ecx = t131;
            edi = eax;
    COW_AT(101b0597)
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b04dd)
            g->edx = rd32(self);
            t102 = rd32(self);
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, rd32(t102 + 0x70u), self, 0);
            t103 = g->edx;
            edx = t103;
    COW_AT(101b04e4)
            wr32(sp0 - 0x23d0u, edi);
            t104 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t104);
            g->esp = sp0 - 0x23ccu;
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t104, edi);
    COW_AT(101b04f3)
            wr32(sp0 - 0x23d0u, arg4);
            wr32(sp0 - 0x23d4u, arg3);
            t105 = rd32(sp0 - 0x23bcu);
            wr32(sp0 - 0x23d8u, t105);
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t105, arg3, arg4);
            t106 = g->ecx;
            ecx = t106;
    COW_AT(101b050f)
            t107 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t107);
            g->eax = t107;
            g->ecx = ecx;
            g->edx = rd32(COW_IMG(0x103d3c64u));
            t108 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            t109 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t107);
            t110 = g->ecx;
            t111 = g->edx;
            eax = t109;
            ecx = t110;
            edx = t111;
    COW_AT(101b051e)
            wr8(self + 0xf123u, 0u);
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            t112 = g->ecx;
            ecx = t112;
            edi = eax;
    COW_AT(101b052c)
        }
    }
    else
    {
    COW_AT(101b0488)
        wr32(sp0 - 0x23d0u, edi);
        t93 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d4u, t93);
        g->esp = sp0 - 0x23ccu;
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t93, edi);
    COW_AT(101b0498)
        wr32(sp0 - 0x23d0u, arg4);
        wr32(sp0 - 0x23d4u, arg3);
        t94 = rd32(sp0 - 0x23bcu);
        wr32(sp0 - 0x23d8u, t94);
        g->edx = t94;
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t94, arg3, arg4);
        t95 = g->edx;
        edx = t95;
    COW_AT(101b04b4)
        t96 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t96);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        g->ecx = t96;
        g->edx = edx;
        t97 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x23ccu;
        t98 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t96);
        t99 = g->ecx;
        t100 = g->edx;
        eax = t98;
        ecx = t99;
        edx = t100;
    COW_AT(101b04c2)
        wr8(sp0 - 0x23b5u, 1u);
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        t101 = g->ecx;
        ecx = t101;
        edi = eax;
    COW_AT(101b04ce)
    }
    goto L_101b1167;
L_101b059c: ;
    COW_AT(101b059c)
    wr32(sp0 - 0x23d0u, edi);
    t132 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t132);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t132, edi);
    COW_AT(101b05ab)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t133 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t133);
    g->eax = arg3;
    g->edx = arg4;
    g->esp = sp0 - 0x23ccu;
    t134 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t133, arg3, arg4);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    COW_AT(101b05c7)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
    t136 = g->ecx;
    ecx = t136;
    COW_AT(101b05d1)
    t137 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t137);
    g->eax = t137;
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t138 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t139 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t137);
    t140 = g->ecx;
    t141 = g->edx;
    eax = t139;
    ecx = t140;
    edx = t141;
    COW_AT(101b05e0)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t142 = g->ecx;
    ecx = t142;
    edi = eax;
    COW_AT(101b05e7)
    goto L_101b1167;
L_101b05ec: ;
    COW_AT(101b05ec)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t76 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(101b05f3)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b061c;
    }
    loc_23d0 = edi;
    COW_AT(101b05f8)
    t79 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t79);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t79, loc_23d0);
    COW_AT(101b0607)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    eax = arg4;
    goto L_101b114b;
L_101b061c: ;
    COW_AT(101b061c)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t80 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t81 = g->ecx;
    eax = t80;
    ecx = t81;
    COW_AT(101b0621)
    if (eax == 0u) goto L_101b10c9;
    COW_AT(101b0629)
    if ((int32_t)ebx <= 0) goto L_101b10c9;
    COW_AT(101b0631)
    wr32(sp0 - 0x23d0u, edi);
    t82 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t82);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t82, edi);
    COW_AT(101b0641)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t83 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t83);
    g->eax = t83;
    g->esp = sp0 - 0x23ccu;
    t84 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t83, arg3, arg4);
    eax = t84;
    COW_AT(101b065d)
    t85 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t85);
    g->eax = eax;
    g->edx = t85;
    g->esp = sp0 - 0x23ccu;
    t86 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t85);
    t87 = g->edx;
    eax = t86;
    edx = t87;
    COW_AT(101b066c)
    t88 = rd32(self);
    wr8(self + 0xf123u, 0u);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(t88 + 0x70u), self, 0);
    t89 = g->ecx;
    ecx = t89;
    edi = eax;
    COW_AT(101b067c)
    goto L_101b1167;
L_101b0681: ;
    COW_AT(101b0681)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t61 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(101b0688)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax != 0u)
    {
        loc_23d0 = edi;
        goto L_101b1072;
    }
    loc_23d0 = edi;
    COW_AT(101b0691)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t64 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(101b0696)
    if (eax == 0u) goto L_101b10c9;
    COW_AT(101b069e)
    if ((int32_t)ebx <= 0) goto L_101b10c9;
    COW_AT(101b06a6)
    wr32(sp0 - 0x23d0u, edi);
    t66 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t66);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t66, edi);
    COW_AT(101b06b5)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t67 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t67);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t67, arg3, arg4);
    t68 = g->ecx;
    ecx = t68;
    COW_AT(101b06d1)
    t69 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t69);
    g->eax = t69;
    g->esp = sp0 - 0x23ccu;
    t70 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t69);
    eax = t70;
    COW_AT(101b06e0)
    g->edx = rd32(self);
    t71 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(t71 + 0x70u), self, 0);
    t72 = g->ecx;
    t73 = g->edx;
    ecx = t72;
    edx = t73;
    edi = eax;
    COW_AT(101b06e9)
    wr32(sp0 - 0x23d0u, 0x1c2u);
    wr32(sp0 - 0x23d4u, sp0 - 0x23a8u);
    wr32(sp0 - 0x23d8u, 8u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = sp0 - 0x23a8u;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t74 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, edi, 8u, sp0 - 0x23a8u, 0x1c2u);
    t75 = g->ecx;
    eax = t74;
    ecx = t75;
    COW_AT(101b06fb)
    if ((int32_t)eax <= 0)
    {
    COW_AT(101b0703)
        wr8(self + 0xf120u, 0u);
    }
    goto L_101b1167;
L_101b070f: ;
    COW_AT(101b070f)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t55 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(101b0716)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax != 0u)
    {
        loc_23d0 = edi;
        goto L_101b1072;
    }
    loc_23d0 = edi;
    COW_AT(101b071f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t58 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t59 = g->ecx;
    t60 = g->edx;
    eax = t58;
    ecx = t59;
    edx = t60;
    COW_AT(101b0724)
    if (eax != 0u) goto L_101b1167;
    COW_AT(101b072c)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
    goto L_101b0f82;
L_101b0732: ;
    COW_AT(101b0732)
    if ((uint8_t)arg4 != 1u) goto L_101b0759;
    COW_AT(101b0740)
    g->edx = rd32(self);
    t33 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(t33 + 0x70u), self, 0);
    t34 = g->edx;
    edx = t34;
    COW_AT(101b0745)
    g->eax = rd32(self);
    t35 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t36 = cow_thiscall(g, rd32(t35 + 0x68u), self, 0);
    eax = t36;
    COW_AT(101b074c)
    wr32(sp0 - 0x23d0u, eax);
    g->eax = eax;
    g->edx = rd32(self);
    t37 = rd32(self);
    g->esp = sp0 - 0x23d0u;
    t38 = cow_thiscall(g, rd32(t37 + 0x64u), self, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(101b0754)
    ebx = arg4;
L_101b0d31: ;
    COW_AT(101b0d31)
    wr32(sp0 - 0x23d4u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t340 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x23d0u));
    t341 = g->ecx;
    t342 = g->edx;
    eax = t340;
    ecx = t341;
    edx = t342;
    COW_AT(101b0d39)
    if ((int32_t)eax >= 0) goto L_101b02fa;
    COW_AT(101b0d41)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t343 = g->ecx;
    ecx = t343;
    COW_AT(101b0d46)
    goto L_101b1167;
L_101b0759: ;
    COW_AT(101b0759)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t40 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t41 = g->ecx;
    t42 = g->edx;
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(101b075e)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0777;
    }
    loc_23d0 = edi;
    COW_AT(101b0763)
    t43 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t43);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t43, loc_23d0);
    COW_AT(101b0771)
    wr32(sp0 - 0x23d0u, arg4);
    goto L_101b1089;
L_101b0777: ;
    COW_AT(101b0777)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23c8u;
    t44 = cow_stdcall(g, COW_IMG(0x102bc87cu), 2, loc_23d0, rd32(sp0 - 0x23ccu));
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(101b077c)
    wr32(sp0 - 0x23ccu, edi);
    if (eax == 0u)
    {
        loc_23cc = edi;
        goto L_101b07c1;
    }
    loc_23cc = edi;
    COW_AT(101b0781)
    t46 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t46);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 1, t46);
    COW_AT(101b078f)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t47 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t47);
    g->eax = t47;
    g->esp = sp0 - 0x23ccu;
    t48 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t47, arg3, arg4);
    eax = t48;
    COW_AT(101b07a4)
    t49 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t49);
    g->eax = eax;
    g->edx = t49;
    g->esp = sp0 - 0x23ccu;
    t50 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t49);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(101b07b3)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    t52 = g->ecx;
    ecx = t52;
    edi = eax;
    COW_AT(101b07bc)
    goto L_101b1167;
L_101b07c1: ;
    COW_AT(101b07c1)
    t53 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t53);
    g->edx = t53;
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 1, t53);
    t54 = g->edx;
    edx = t54;
    COW_AT(101b07d0)
    wr32(sp0 - 0x23d0u, arg4);
    goto L_101b0f98;
L_101b07d6: ;
    COW_AT(101b07d6)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t30 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t31 = g->ecx;
    eax = t30;
    ecx = t31;
    COW_AT(101b07dc)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b07e4)
    wr32(sp0 - 0x23d0u, edi);
    t32 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t32);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t32, edi);
    COW_AT(101b07f4)
    wr32(sp0 - 0x23d0u, arg4);
    eax = arg4;
    goto L_101b07fc;
L_101b082c: ;
    COW_AT(101b082c)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t212 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t213 = g->ecx;
    t214 = g->edx;
    eax = t212;
    ecx = t213;
    edx = t214;
    COW_AT(101b0833)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b08b5;
    }
    loc_23d0 = edi;
    COW_AT(101b0838)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t215 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t216 = g->ecx;
    t217 = g->edx;
    eax = t215;
    ecx = t216;
    edx = t217;
    COW_AT(101b083d)
    if (eax != 0u)
    {
    COW_AT(101b0841)
        if ((int32_t)ebx > 0)
        {
    COW_AT(101b0845)
            wr32(sp0 - 0x23d0u, 0u);
            wr32(sp0 - 0x23d4u, edi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            t218 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 0u);
            t219 = g->ecx;
            t220 = g->edx;
            eax = t218;
            ecx = t219;
            edx = t220;
    COW_AT(101b084d)
            wr32(sp0 - 0x23d0u, 1u);
            wr32(sp0 - 0x23d4u, edi);
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 1u);
            t221 = g->edx;
            edx = t221;
        }
    }
    COW_AT(101b0855)
    wr32(sp0 - 0x23d0u, edi);
    t222 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t222);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t222, edi);
    COW_AT(101b0864)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t223 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t223);
    wr8(self + 0xf120u, 0u);
    g->eax = arg3;
    g->edx = arg4;
    g->esp = sp0 - 0x23ccu;
    t224 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t223, arg3, arg4);
    t225 = g->ecx;
    t226 = g->edx;
    eax = t224;
    ecx = t225;
    edx = t226;
    COW_AT(101b0887)
    if ((int32_t)eax >= 0)
    {
    COW_AT(101b08a1)
        t229 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t229);
        eax = t229;
        edx = rd32(COW_IMG(0x103d3c64u));
        ebp = 1u;
        loc_23d0 = t229;
    }
    else
    {
        ebp = eax;
    COW_AT(101b088d)
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t227 = g->ecx;
        ecx = t227;
    COW_AT(101b0892)
        t228 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t228);
        eax = t228;
        edx = rd32(COW_IMG(0x103d3c64u));
        loc_23d0 = t228;
    }
L_101b0936: ;
    COW_AT(101b0936)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t247 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_23d0);
    t248 = g->ecx;
    t249 = g->edx;
    eax = t247;
    ecx = t248;
    edx = t249;
    COW_AT(101b093b)
    if (ebp != 1u)
    {
        edi = eax;
        goto L_101b1167;
    }
    edi = eax;
L_101b0946: ;
    COW_AT(101b0946)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t250 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t251 = g->ecx;
    t252 = g->edx;
    eax = t250;
    ecx = t251;
    edx = t252;
    COW_AT(101b094b)
    if (rd8(self + 0xf100u) != 0u)
    {
    COW_AT(101b0959)
        if (rd32(self + 0xf0f4u) != 0u)
        {
            eax = rd32(self + 0xf0f4u);
    COW_AT(101b0974)
            t253 = rd32(COW_IMG(0x1066269cu));
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, COW_IMG(0x101911a0u), t253, 0);
            t254 = g->ecx;
            ecx = t254;
    COW_AT(101b097f)
        }
        else
        {
    COW_AT(101b0963)
            wr32(rd32(COW_IMG(0x10662dacu)) + 0x14u, 0u);
        }
    }
    goto L_101b1167;
L_101b08b5: ;
    COW_AT(101b08b5)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t230 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t231 = g->ecx;
    t232 = g->edx;
    eax = t230;
    ecx = t231;
    edx = t232;
    COW_AT(101b08ba)
    if (eax == 0u) goto L_101b08fe;
    COW_AT(101b08be)
    if ((int32_t)ebx <= 0) goto L_101b08fe;
    COW_AT(101b08c2)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 1u);
    wr32(sp0 - 0x23d8u, 0x15u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    t233 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 1u, 0u);
    eax = t233;
    COW_AT(101b08ce)
    wr32(sp0 - 0x23d0u, edi);
    t234 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t234);
    g->eax = eax;
    g->edx = t234;
    g->esp = sp0 - 0x23ccu;
    t235 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t234, edi);
    t236 = g->edx;
    eax = t235;
    edx = t236;
    COW_AT(101b08de)
    wr32(sp0 - 0x23d0u, 0x800u);
    wr32(sp0 - 0x23d4u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    cow_call_regs(g, COW_IMG(0x101b20e0u), eax, self, g->edx, 0, 2, 0u, 0x800u);
    t237 = g->edx;
    edx = t237;
    COW_AT(101b08ec)
    t238 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t238);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t238;
    g->edx = edx;
    t239 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t240 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t238);
    t241 = g->ecx;
    t242 = g->edx;
    eax = t240;
    ecx = t241;
    edx = t242;
    COW_AT(101b08fa)
    edi = eax;
    goto L_101b0946;
L_101b08fe: ;
    COW_AT(101b08fe)
    wr32(sp0 - 0x23d0u, edi);
    t243 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t243);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t243, edi);
    COW_AT(101b090e)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t244 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t244);
    g->eax = t244;
    g->esp = sp0 - 0x23ccu;
    t245 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t244, arg3, arg4);
    eax = t245;
    COW_AT(101b092a)
    t246 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t246);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t246;
    ebp = eax;
    loc_23d0 = t246;
    goto L_101b0936;
L_101b0984: ;
    COW_AT(101b0984)
    if ((uint8_t)arg2 - 0x47u > 0x8au) goto L_101b10eb;
    COW_AT(101b0993)
    t255 = rd32(COW_IMG(0x101b1334u) + rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u) * 4u);
    switch (t255 - RD)
    {
    case 0x101b09a2u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b09a2;
    case 0x101b09d3u: goto L_101b09d3;
    case 0x101b0a53u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0a53;
    case 0x101b0b66u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0b66;
    case 0x101b0c54u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0c54;
    case 0x101b0d08u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0d08;
    case 0x101b0dbeu: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0dbe;
    case 0x101b0ed3u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0ed3;
    case 0x101b0f76u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b0f76;
    case 0x101b1063u: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b1063;
    case 0x101b10acu: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b10ac;
    case 0x101b10ebu: edx = rd8(COW_IMG(0x101b1364u) + (uint8_t)arg2 - 0x47u); goto L_101b10eb;
    default: rt_fatal(g, COW_IMG(0x101b099bu), "switch");
    }
    return 0;
L_101b09a2: ;
    COW_AT(101b09a2)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t471 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t472 = g->ecx;
    t473 = g->edx;
    eax = t471;
    ecx = t472;
    edx = t473;
    COW_AT(101b09a9)
    if ((uint8_t)eax != 0u) goto L_101b0151;
    COW_AT(101b09b1)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t474 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t475 = g->ecx;
    t476 = g->edx;
    eax = t474;
    ecx = t475;
    edx = t476;
    COW_AT(101b09b7)
    if (eax == 0u) goto L_101b0151;
    COW_AT(101b09bf)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t477 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t478 = g->ecx;
    t479 = g->edx;
    eax = t477;
    ecx = t478;
    edx = t479;
    COW_AT(101b09c5)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b09cd)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
L_101b0e8c: ;
    COW_AT(101b0e8c)
    t480 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t480);
    g->esp = sp0 - 0x23d0u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 1, t480);
    COW_AT(101b0e9a)
    wr32(sp0 - 0x23d4u, arg3);
    wr32(sp0 - 0x23d8u, arg2);
    t481 = rd32(sp0 - 0x23c0u);
    wr32(sp0 - 0x23dcu, t481);
    g->esp = sp0 - 0x23d0u;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t481, arg2, arg3);
    t482 = g->ecx;
    ecx = t482;
    COW_AT(101b0eb6)
    t483 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t483);
    g->eax = t483;
    g->esp = sp0 - 0x23d0u;
    t484 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t483);
    eax = t484;
    COW_AT(101b0ec5)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 1, rd32(sp0 - 0x23d0u));
    t485 = g->ecx;
    ecx = t485;
    edi = eax;
    COW_AT(101b0ece)
    goto L_101b1167;
L_101b09d3: ;
    COW_AT(101b09d3)
    wr32(sp0 - 0x23d0u, edi);
    t455 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t455);
    g->eax = eax;
    g->edx = t455;
    g->esp = sp0 - 0x23ccu;
    t456 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t455, edi);
    t457 = g->edx;
    eax = t456;
    edx = t457;
    COW_AT(101b09e3)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t458 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t459 = g->edx;
    eax = t458;
    edx = t459;
    COW_AT(101b09ea)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101b09ee)
        g->eax = rd32(self);
        t460 = rd32(self);
        g->esp = sp0 - 0x23ccu;
        t461 = cow_thiscall(g, rd32(t460 + 0x20u), self, 0);
        eax = t461;
    COW_AT(101b09f5)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101b09f9)
            t462 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t462);
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103d3c64u));
            g->edx = t462;
            t463 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            t464 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t462);
            t465 = g->ecx;
            t466 = g->edx;
            eax = t464;
            ecx = t465;
            edx = t466;
    COW_AT(101b0a08)
            wr32(sp0 - 0x23d0u, 0u);
            wr32(sp0 - 0x23d4u, 3u);
            wr32(sp0 - 0x23d8u, 0x15u);
            wr32(sp0 - 0x23dcu, eax);
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            cow_stdcall(g, COW_IMG(0x102bc858u), 4, eax, 0x15u, 3u, 0u);
            t467 = g->edx;
            edx = t467;
            edi = eax;
    COW_AT(101b0a16)
            t468 = rd32(self);
            wr32(self + 0xf128u, 0u);
            g->eax = t468;
            g->esp = sp0 - 0x23ccu;
            t469 = cow_thiscall(g, rd32(t468 + 0x70u), self, 0);
            eax = t469;
    COW_AT(101b0a27)
            wr8(self + 0xf123u, 0u);
            wr32(sp0 - 0x23d0u, edi);
            t470 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t470);
            g->esp = sp0 - 0x23ccu;
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t470, edi);
        }
    }
    COW_AT(101b0a3e)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    eax = arg4;
    goto L_101b114b;
L_101b0a53: ;
    COW_AT(101b0a53)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t394 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t395 = g->ecx;
    t396 = g->edx;
    eax = t394;
    ecx = t395;
    edx = t396;
    COW_AT(101b0a59)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b0a61)
    if ((int32_t)ebx <= 0) goto L_101b1167;
    COW_AT(101b0a69)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t397 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t398 = g->edx;
    eax = t397;
    edx = t398;
    COW_AT(101b0a70)
    if ((uint8_t)eax == 0u) goto L_101b0a8d;
    COW_AT(101b0a74)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t399 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t400 = g->ecx;
    t401 = g->edx;
    eax = t399;
    ecx = t400;
    edx = t401;
    COW_AT(101b0a7f)
    if ((uint8_t)eax == 0u) goto L_101b0a8d;
    COW_AT(101b0a83)
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t402 = g->ecx;
    ecx = t402;
    COW_AT(101b0a88)
    goto L_101b1167;
L_101b0a8d: ;
    COW_AT(101b0a8d)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t403 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t404 = g->edx;
    eax = t403;
    edx = t404;
    COW_AT(101b0a94)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b0a98)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        t405 = cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
        t406 = g->ecx;
        t407 = g->edx;
        eax = t405;
        ecx = t406;
        edx = t407;
    COW_AT(101b0a9f)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 3u);
        wr32(sp0 - 0x23d8u, 0x15u);
        wr32(sp0 - 0x23dcu, edi);
        g->eax = eax;
        g->esp = sp0 - 0x23ccu;
        t408 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 3u, 0u);
        eax = t408;
    COW_AT(101b0aab)
        g->edx = rd32(self);
        t409 = rd32(self);
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, rd32(t409 + 0x70u), self, 0);
        t410 = g->edx;
        edx = t410;
    }
    COW_AT(101b0ab2)
    wr32(sp0 - 0x23d0u, edi);
    t411 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t411);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t411, edi);
    COW_AT(101b0ac1)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t412 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t412);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t412, arg3, arg4);
    t413 = g->ecx;
    ecx = t413;
    COW_AT(101b0add)
    t414 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t414);
    g->eax = t414;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t415 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t416 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t414);
    t417 = g->edx;
    eax = t416;
    edx = t417;
    COW_AT(101b0aec)
    t418 = rd32(self + 0xf128u) + 1u;
    wr32(self + 0xf128u, t418);
    if (t418 == 1u)
    {
        ecx = t418;
        edi = eax;
        eax = t418;
        goto L_101b039c;
    }
    ecx = t418;
    edi = eax;
    COW_AT(101b0b06)
    wr32(sp0 - 0x23d0u, edi);
    t419 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t419);
    g->eax = t419;
    g->esp = sp0 - 0x23ccu;
    t420 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t419, edi);
    eax = t420;
    COW_AT(101b0b16)
    g->eax = eax;
    g->edx = rd32(self);
    t421 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t422 = cow_thiscall(g, rd32(t421 + 0x1cu), self, 0);
    t423 = g->edx;
    eax = t422;
    edx = t423;
    COW_AT(101b0b1d)
    wr32(sp0 - 0x23d0u, sp0 - 0x21e4u);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, sp0 - 0x21e4u);
    t424 = g->ecx;
    ecx = t424;
    ebp = eax + 1u;
    COW_AT(101b0b2f)
    t425 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t425);
    g->eax = t425;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t426 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t427 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t425);
    t428 = g->edx;
    eax = t427;
    edx = t428;
    COW_AT(101b0b3e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t429 = cow_thiscall(g, COW_IMG(0x101b4b70u), sp0 - 0x21e4u, 0);
    t430 = g->ecx;
    t431 = g->edx;
    ecx = t430;
    edx = t431;
    edi = eax;
    eax = t429;
    COW_AT(101b0b4c)
    if ((int32_t)eax <= (int32_t)ebp)
    {
    COW_AT(101b0b50)
        ebp = 0u;
    }
    COW_AT(101b0b52)
    wr32(sp0 - 0x23d0u, ebp);
    wr32(sp0 - 0x23d4u, ebp);
    wr32(sp0 - 0x23d8u, 0x12u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t432 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, ebp, ebp);
    t433 = g->ecx;
    t434 = g->edx;
    eax = t432;
    ecx = t433;
    edx = t434;
    COW_AT(101b0b5c)
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    t435 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    eax = t435;
    COW_AT(101b0b61)
    goto L_101b03f3;
L_101b0b66: ;
    COW_AT(101b0b66)
    if (rd32(self + 0xf108u) == 4u)
    {
        eax = rd32(self + 0xf108u);
        goto L_101b0b82;
    }
    eax = rd32(self + 0xf108u);
    COW_AT(101b0b71)
    if (eax != 5u) goto L_101b1167;
    COW_AT(101b0b7a)
    if (ecx != 0u) goto L_101b1167;
L_101b0b82: ;
    COW_AT(101b0b82)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t377 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t378 = g->ecx;
    t379 = g->edx;
    eax = t377;
    ecx = t378;
    edx = t379;
    COW_AT(101b0b89)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0bd1;
    }
    loc_23d0 = edi;
    COW_AT(101b0b8e)
    t380 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t380);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t380, loc_23d0);
    COW_AT(101b0b9d)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t381 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t381);
    g->edx = t381;
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t381, arg3, arg4);
    t382 = g->edx;
    edx = t382;
    COW_AT(101b0bb9)
    t383 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t383);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t383;
    t384 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t385 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t383);
    t386 = g->ecx;
    eax = t385;
    ecx = t386;
    COW_AT(101b0bc7)
    wr8(sp0 - 0x23b5u, 1u);
    goto L_101b1165;
L_101b0bd1: ;
    COW_AT(101b0bd1)
    if (rd32(self + 0xf128u) != 0u)
    {
        eax = rd32(self + 0xf128u);
        goto L_101b0c1c;
    }
L_101b0bdb: ;
    COW_AT(101b0bdb)
    wr8(self + 0xf120u, 0u);
    t387 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t387);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t387, loc_23d0);
    COW_AT(101b0bf1)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t388 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t388);
    g->eax = t388;
    g->esp = sp0 - 0x23ccu;
    t389 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t388, arg3, arg4);
    eax = t389;
    COW_AT(101b0c0d)
    t390 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t390);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t390;
    loc_23d0 = t390;
    goto L_101b1160;
L_101b0c1c: ;
    COW_AT(101b0c1c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t391 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t392 = g->edx;
    eax = t391;
    edx = t392;
    COW_AT(101b0c21)
    wr32(sp0 - 0x23d0u, edi);
    if (eax != 0u)
    {
        loc_23d0 = edi;
        goto L_101b0f82;
    }
    loc_23d0 = edi;
    COW_AT(101b0c2a)
    wr8(self + 0xf120u, (uint8_t)eax);
    t393 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t393);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t393, loc_23d0);
    COW_AT(101b0c3f)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    eax = arg4;
    goto L_101b114b;
L_101b0c54: ;
    COW_AT(101b0c54)
    if (rd32(self + 0xf108u) == 4u)
    {
        eax = rd32(self + 0xf108u);
        goto L_101b0c70;
    }
    eax = rd32(self + 0xf108u);
    COW_AT(101b0c5f)
    if (eax != 5u) goto L_101b1167;
    COW_AT(101b0c68)
    if (ecx != 0u) goto L_101b1167;
L_101b0c70: ;
    COW_AT(101b0c70)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t364 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t365 = g->ecx;
    t366 = g->edx;
    eax = t364;
    ecx = t365;
    edx = t366;
    COW_AT(101b0c77)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0cc0;
    }
    loc_23d0 = edi;
    COW_AT(101b0c7c)
    t367 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t367);
    g->esp = sp0 - 0x23d0u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 1, t367);
    COW_AT(101b0c8b)
    wr32(sp0 - 0x23d4u, arg3);
    wr32(sp0 - 0x23d8u, arg2);
    t368 = rd32(sp0 - 0x23c0u);
    wr32(sp0 - 0x23dcu, t368);
    eax = t368;
    edx = arg2;
    loc_23d4 = arg3;
    loc_23d8 = arg2;
    loc_23dc = t368;
    goto L_101b0ca0;
L_101b0cc0: ;
    COW_AT(101b0cc0)
    if (rd32(self + 0xf128u) != 0u)
    {
        eax = rd32(self + 0xf128u);
        goto L_101b0cd6;
    }
    COW_AT(101b0cca)
    wr8(self + 0xf120u, 0u);
    goto L_101b0f82;
L_101b0cd6: ;
    COW_AT(101b0cd6)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t374 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t375 = g->ecx;
    eax = t374;
    ecx = t375;
    COW_AT(101b0cdb)
    wr32(sp0 - 0x23d0u, edi);
    if (eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0bdb;
    }
    loc_23d0 = edi;
    COW_AT(101b0ce4)
    t376 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t376);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t376, loc_23d0);
    COW_AT(101b0cf3)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    eax = arg4;
    goto L_101b114b;
L_101b0d08: ;
    COW_AT(101b0d08)
    if (rd32(self + 0xf0fcu) != 1u) goto L_101b0d4b;
    COW_AT(101b0d11)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t330 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t331 = g->edx;
    eax = t330;
    edx = t331;
    COW_AT(101b0d17)
    if (eax == 0u) goto L_101b0d4b;
    COW_AT(101b0d1b)
    g->eax = rd32(self);
    t332 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t333 = cow_thiscall(g, rd32(t332 + 0x70u), self, 0);
    eax = t333;
    COW_AT(101b0d22)
    g->eax = eax;
    g->edx = rd32(self);
    t334 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t335 = cow_thiscall(g, rd32(t334 + 0x68u), self, 0);
    t336 = g->edx;
    eax = t335;
    edx = t336;
    COW_AT(101b0d29)
    wr32(sp0 - 0x23d0u, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t337 = rd32(self);
    g->esp = sp0 - 0x23d0u;
    t338 = cow_thiscall(g, rd32(t337 + 0x64u), self, 0);
    t339 = g->edx;
    eax = t338;
    edx = t339;
    goto L_101b0d31;
L_101b0d4b: ;
    COW_AT(101b0d4b)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t349 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t350 = g->ecx;
    t351 = g->edx;
    eax = t349;
    ecx = t350;
    edx = t351;
    COW_AT(101b0d52)
    if ((uint8_t)eax != 0u) goto L_101b0151;
    COW_AT(101b0d5a)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t352 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t353 = g->ecx;
    t354 = g->edx;
    eax = t352;
    ecx = t353;
    edx = t354;
    COW_AT(101b0d60)
    if (eax == 0u) goto L_101b0151;
    COW_AT(101b0d68)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t355 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t356 = g->ecx;
    eax = t355;
    ecx = t356;
    COW_AT(101b0d6e)
    if (eax != 0u)
    {
    COW_AT(101b0d76)
        wr32(sp0 - 0x23d0u, edi);
        t357 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d4u, t357);
        g->esp = sp0 - 0x23ccu;
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t357, edi);
    COW_AT(101b0d86)
        wr32(sp0 - 0x23d0u, arg4);
        wr32(sp0 - 0x23d4u, arg3);
        t358 = rd32(sp0 - 0x23bcu);
        wr32(sp0 - 0x23d8u, t358);
        g->edx = t358;
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t358, arg3, arg4);
        t359 = g->edx;
        edx = t359;
    COW_AT(101b0da2)
        t360 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t360);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        t361 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x23ccu;
        t362 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t360);
        eax = t362;
    COW_AT(101b0db0)
        g->esp = sp0 - 0x23ccu;
        cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
        t363 = g->ecx;
        ecx = t363;
        edi = eax;
    COW_AT(101b0db9)
    }
    goto L_101b1167;
L_101b0dbe: ;
    COW_AT(101b0dbe)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    t307 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    eax = t307;
    COW_AT(101b0dc4)
    wr32(sp0 - 0x23d0u, edi);
    t308 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t308);
    g->eax = eax;
    g->edx = t308;
    g->esp = sp0 - 0x23ccu;
    t309 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t308, edi);
    t310 = g->edx;
    edx = t310;
    ebx = (ebx & 0xffffff00u) | eax != 0u;
    eax = t309;
    COW_AT(101b0dd9)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t311 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t312 = g->edx;
    eax = t311;
    edx = t312;
    COW_AT(101b0de0)
    if ((uint8_t)eax == 0u) goto L_101b0e09;
    COW_AT(101b0de4)
    if ((uint8_t)ebx != 0u) goto L_101b0e09;
    COW_AT(101b0de8)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t313 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t313);
    g->esp = sp0 - 0x23ccu;
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t313, arg3, arg4);
    t314 = g->ecx;
    ecx = t314;
    COW_AT(101b0e04)
    goto L_101b1167;
L_101b0e09: ;
    COW_AT(101b0e09)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t315 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t316 = g->edx;
    eax = t315;
    edx = t316;
    COW_AT(101b0e10)
    if ((uint8_t)eax == 0u) goto L_101b0e65;
    COW_AT(101b0e14)
    if ((uint8_t)ebx == 0u) goto L_101b10d9;
    COW_AT(101b0e1c)
    t317 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t317);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t317;
    t318 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t319 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t317);
    t320 = g->ecx;
    eax = t319;
    ecx = t320;
    COW_AT(101b0e2a)
    wr32(sp0 - 0x23d0u, eax);
    t321 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t321);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t321, eax);
    COW_AT(101b0e3a)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t322 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t322);
    g->eax = t322;
    g->esp = sp0 - 0x23ccu;
    t323 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t322, arg3, arg4);
    eax = t323;
    COW_AT(101b0e56)
    t324 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t324);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t324;
    loc_23d0 = t324;
    goto L_101b1160;
L_101b0e65: ;
    COW_AT(101b0e65)
    if ((uint8_t)ebx == 0u) goto L_101b10d9;
    COW_AT(101b0e6d)
    g->eax = rd32(self);
    t325 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t326 = cow_thiscall(g, rd32(t325 + 0x20u), self, 0);
    eax = t326;
    COW_AT(101b0e74)
    if ((uint8_t)eax == 0u) goto L_101b10d9;
    COW_AT(101b0e7c)
    t327 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t327);
    g->eax = eax;
    g->edx = t327;
    g->esp = sp0 - 0x23ccu;
    t328 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t327);
    t329 = g->edx;
    eax = t328;
    edx = t329;
    COW_AT(101b0e8b)
    wr32(sp0 - 0x23d0u, eax);
    loc_23d0 = eax;
    goto L_101b0e8c;
L_101b0ed3: ;
    COW_AT(101b0ed3)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t290 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t291 = g->ecx;
    t292 = g->edx;
    eax = t290;
    ecx = t291;
    edx = t292;
    COW_AT(101b0eda)
    if ((uint8_t)eax == 0u) goto L_101b0f19;
    COW_AT(101b0ede)
    wr32(sp0 - 0x23d0u, edi);
    t293 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t293);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t293, edi);
    COW_AT(101b0eee)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    t294 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t294);
    g->eax = t294;
    g->esp = sp0 - 0x23ccu;
    t295 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t294, arg3, arg4);
    eax = t295;
    COW_AT(101b0f0a)
    t296 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t296);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t296;
    loc_23d0 = t296;
    goto L_101b1160;
L_101b0f19: ;
    COW_AT(101b0f19)
    g->eax = rd32(self);
    t297 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    t298 = cow_thiscall(g, rd32(t297 + 0x1cu), self, 0);
    t299 = g->ecx;
    eax = t298;
    ecx = t299;
    COW_AT(101b0f20)
    if ((int32_t)eax > 7)
    {
    COW_AT(101b0f25)
        eax = 7u;
    }
    COW_AT(101b0f2a)
    if ((int32_t)eax > 0)
    {
    COW_AT(101b0f32)
        ebp = eax;
L_101b0f3b: ;
    COW_AT(101b0f3b)
        wr32(sp0 - 0x23d0u, edi);
        t300 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d4u, t300);
        g->edx = t300;
        g->esp = sp0 - 0x23ccu;
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t300, edi);
        t301 = g->edx;
        edx = t301;
    COW_AT(101b0f4b)
        wr32(sp0 - 0x23d0u, arg4);
        wr32(sp0 - 0x23d4u, arg3);
        wr32(sp0 - 0x23d8u, 0x26u);
        g->eax = arg4;
        g->esp = sp0 - 0x23ccu;
        t302 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x26u, arg3, arg4);
        eax = t302;
    COW_AT(101b0f5d)
        t303 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t303);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103d3c64u));
        t304 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x23ccu;
        t305 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t303);
        t306 = g->ecx;
        eax = t305;
        ecx = t306;
    COW_AT(101b0f6c)
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            edi = eax;
            goto L_101b0f3b;
        }
        edi = eax;
    COW_AT(101b0f71)
    }
    goto L_101b1167;
L_101b0f76: ;
    COW_AT(101b0f76)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t269 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t270 = g->ecx;
    t271 = g->edx;
    eax = t269;
    ecx = t270;
    edx = t271;
    COW_AT(101b0f7d)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0fbb;
    }
    loc_23d0 = edi;
    goto L_101b0f82;
L_101b0fbb: ;
    COW_AT(101b0fbb)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t272 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t273 = g->ecx;
    t274 = g->edx;
    eax = t272;
    ecx = t273;
    edx = t274;
    COW_AT(101b0fc0)
    if (eax != 0u)
    {
    COW_AT(101b0fc8)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 0u);
        wr32(sp0 - 0x23d8u, 0u);
        wr32(sp0 - 0x23dcu, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        t275 = cow_stdcall(g, COW_IMG(0x102bc86au), 4, edi, 0u, 0u, 0u);
        t276 = g->edx;
        eax = t275;
        edx = t276;
    COW_AT(101b0fd4)
        wr32(sp0 - 0x23d0u, COW_IMG(0x1037c44cu));
        wr32(sp0 - 0x23d4u, eax);
        wr32(sp0 - 0x23d8u, sp0 - 0x23bcu);
        g->eax = eax;
        g->ecx = sp0 - 0x23bcu;
        g->esp = sp0 - 0x23c8u;
        t277 = cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x23bcu, eax, COW_IMG(0x1037c44cu), rd32(sp0 - 0x23ccu));
        t278 = g->ecx;
        ecx = t278;
        ebp = eax;
        eax = t277;
    COW_AT(101b0fe6)
        wr32(sp0 - 0x23d0u, ebp);
        t279 = rd32(sp0 - 0x23bcu);
        wr32(sp0 - 0x23d4u, t279);
        wr32(sp0 - 0x23d8u, 0u);
        wr32(sp0 - 0x23dcu, edi);
        g->edx = t279;
        g->esp = sp0 - 0x23ccu;
        cow_stdcall(g, COW_IMG(0x102bc86au), 4, edi, 0u, t279, ebp);
        t280 = g->edx;
        edx = t280;
    COW_AT(101b0ff7)
        if ((int32_t)(rd32(rd32(sp0 - 0x23bcu) + 8u) - rd32(rd32(sp0 - 0x23bcu) + 0xcu)) <= 7)
        {
            eax = rd32(rd32(sp0 - 0x23bcu) + 8u) - rd32(rd32(sp0 - 0x23bcu) + 0xcu);
            ecx = rd32(sp0 - 0x23bcu);
    COW_AT(101b100f)
            eax = eax - 1u;
        }
        else
        {
            ecx = rd32(sp0 - 0x23bcu);
    COW_AT(101b1008)
            eax = 7u;
        }
    COW_AT(101b1010)
        if ((int32_t)eax > 0)
        {
    COW_AT(101b1014)
            ebp = eax;
L_101b101d: ;
    COW_AT(101b101d)
            wr32(sp0 - 0x23d0u, edi);
            t281 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t281);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            t282 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            t283 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t281, edi);
            eax = t283;
    COW_AT(101b102c)
            wr32(sp0 - 0x23d0u, arg4);
            wr32(sp0 - 0x23d4u, arg3);
            wr32(sp0 - 0x23d8u, 0x28u);
            g->edx = arg4;
            g->esp = sp0 - 0x23ccu;
            cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x28u, arg3, arg4);
            t284 = g->edx;
            edx = t284;
    COW_AT(101b103e)
            t285 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t285);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            g->edx = edx;
            t286 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            t287 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t285);
            t288 = g->edx;
            eax = t287;
            edx = t288;
    COW_AT(101b104c)
            if (ebp != 1u)
            {
                ebp = ebp - 1u;
                edi = eax;
                goto L_101b101d;
            }
            edi = eax;
    COW_AT(101b1051)
            ecx = rd32(sp0 - 0x23bcu);
        }
    COW_AT(101b1055)
        wr32(sp0 - 0x23d0u, ecx);
        g->esp = sp0 - 0x23ccu;
        cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, edx, 1, 1, ecx);
        t289 = g->ecx;
        ecx = t289;
    COW_AT(101b105b)
    }
    goto L_101b1167;
L_101b1063: ;
    COW_AT(101b1063)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t262 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t263 = g->ecx;
    t264 = g->edx;
    eax = t262;
    ecx = t263;
    edx = t264;
    COW_AT(101b1069)
    wr32(sp0 - 0x23d0u, edi);
    if (eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0f82;
    }
    loc_23d0 = edi;
    goto L_101b1072;
L_101b10ac: ;
    COW_AT(101b10ac)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    t256 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t257 = g->ecx;
    t258 = g->edx;
    eax = t256;
    ecx = t257;
    edx = t258;
    COW_AT(101b10b3)
    if ((uint8_t)eax != 0u) goto L_101b1167;
    COW_AT(101b10bb)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    t259 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t260 = g->ecx;
    eax = t259;
    ecx = t260;
    COW_AT(101b10c1)
    if (eax == 0u) goto L_101b1167;
L_101b10c9: ;
    COW_AT(101b10c9)
    wr32(sp0 - 0x23d0u, edi);
    t261 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t261);
    g->esp = sp0 - 0x23ccu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t261, edi);
L_101b10d9: ;
    COW_AT(101b10d9)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    eax = arg4;
    goto L_101b114b;
L_101b10eb: ;
    COW_AT(101b10eb)
    if (arg1 != 0u)
    {
    COW_AT(101b1104)
        if (rd8(self + 0xf123u) != 0u)
        {
    COW_AT(101b110e)
            wr32(sp0 - 0x23d0u, edi);
            t490 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t490);
            g->eax = t490;
            g->edx = rd32(COW_IMG(0x103d3c64u));
            t491 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            t492 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t490, edi);
            t493 = g->edx;
            eax = t492;
            edx = t493;
    COW_AT(101b111e)
            wr32(sp0 - 0x23d0u, arg4);
            wr32(sp0 - 0x23d4u, arg3);
            wr32(sp0 - 0x23d8u, 0x1bu);
            g->eax = eax;
            g->esp = sp0 - 0x23ccu;
            t494 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, arg3, arg4);
            eax = t494;
    COW_AT(101b1129)
            t495 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t495);
            g->eax = eax;
            g->edx = t495;
            g->esp = sp0 - 0x23ccu;
            t496 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t495);
            t497 = g->edx;
            eax = t496;
            edx = t497;
    COW_AT(101b1138)
            edi = eax;
        }
    }
    COW_AT(101b113a)
    wr32(sp0 - 0x23d0u, edi);
    t498 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t498);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t499 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    t500 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t498, edi);
    eax = t500;
    COW_AT(101b1149)
    wr32(sp0 - 0x23d0u, arg4);
    wr32(sp0 - 0x23d4u, arg3);
    goto L_101b114b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b00b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b00bau:
    {
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x23bcu;
        g->eax = 0x23bcu;
        (void)sp0;
        return 1;
    }
    case 0x101b00d1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b00dfu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b00ebu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b00fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d4u, sp0 - 0x23a8u);
        (void)sp0;
        return 1;
    }
    case 0x101b0101u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0105u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0118u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b012du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b0136u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101b0145u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b014au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0151u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0157u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b015cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b016cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0188u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0196u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b01b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b01bbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101b01c0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b01c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01cau:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01e1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01f6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b01ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        g->zf = (uint8_t)((uint8_t)arg2 == 0x45u);
        (void)sp0;
        return 1;
    }
    case 0x101b0205u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b0214u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2 + 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x101b0223u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b022fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b023fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d4u, sp0 - 0x23b0u);
        wr32(sp0 - 0x23d0u, sp0 - 0x23acu);
        (void)sp0;
        return 1;
    }
    case 0x101b0246u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d4u, sp0 - 0x23b0u);
        wr32(sp0 - 0x23d0u, sp0 - 0x23acu);
        (void)sp0;
        return 1;
    }
    case 0x101b024fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d4u;
        (void)sp0;
        return 1;
    }
    case 0x101b0257u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d4u, sp0 - 0x23b0u);
        wr32(sp0 - 0x23d0u, sp0 - 0x23acu);
        (void)sp0;
        return 1;
    }
    case 0x101b0260u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d4u;
        (void)sp0;
        return 1;
    }
    case 0x101b0268u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b026fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0273u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0279u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b027du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0283u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b028bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b029bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b02a1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b02b0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b02b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02ccu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02d3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02dbu:
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
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b02e3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02f1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0307u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0313u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0329u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b032fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0337u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b033fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0346u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b034au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0355u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0359u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b035eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0363u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b036au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b036eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0375u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0381u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0388u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b039cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03d0u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03f1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03f3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b03fdu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b040fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d0u, sp0 - 0x23b4u);
        (void)sp0;
        return 1;
    }
    case 0x101b0414u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b041bu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0424u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b042fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b043eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b044bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0459u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0463u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0472u:
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
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b047du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0484u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0488u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0498u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04d3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04ddu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04e4u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b04f3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b050fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b051eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b052cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0531u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0537u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b053bu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b053fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b054fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0558u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b055fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0569u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b057au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0589u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0597u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b059cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05abu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05f3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b05f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0607u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b061cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0621u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0629u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0631u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0641u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b065du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b066cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b067cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0688u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0691u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0696u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b069eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b06a6u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b06b5u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b06d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b06e0u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b06e9u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b06fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d4u, sp0 - 0x23a8u);
        (void)sp0;
        return 1;
    }
    case 0x101b0703u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d4u, sp0 - 0x23a8u);
        (void)sp0;
        return 1;
    }
    case 0x101b070fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0716u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b071fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0724u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b072cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0732u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0740u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b0745u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b074cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0754u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23d0u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0759u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b075eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0763u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0771u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0777u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b077cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23c8u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b0781u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23cc = rd32(sp0 - 0x23ccu);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b078fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b07a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07b3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07c1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23cc = rd32(sp0 - 0x23ccu);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b07d0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b07d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07dcu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07e4u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07f4u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07fcu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23d0u;
        wr32(sp0 - 0x23d0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x101b0810u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b081eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0827u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b082cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0833u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0838u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b083du:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0841u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0845u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b084du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0855u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0864u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0887u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b088du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0892u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b08bau:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08beu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08c2u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08deu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08fau:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b08feu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b090eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b092au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0936u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b093bu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0946u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b094bu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0959u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0974u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b097fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0984u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b0993u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebp = (uint8_t)arg2 - 0x47u;
        (void)sp0;
        return 1;
    }
    case 0x101b09a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09a9u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09b1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09b7u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09bfu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09c5u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09cdu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09e3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09eau:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09eeu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09f5u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b09f9u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a08u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a27u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a3eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a59u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a61u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a69u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a70u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a74u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a7fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a8du:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a94u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a98u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0a9fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0aabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0ab2u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0ac1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0addu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0aecu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b06u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b16u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b1du:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b2fu:
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
        g->esp = sp0 - 0x23ccu;
        wr32(sp0 - 0x23d0u, sp0 - 0x21e4u);
        (void)sp0;
        return 1;
    }
    case 0x101b0b3eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b4cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b50u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b52u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b61u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b89u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0b8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0b9du:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0bb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0bc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0bd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0bdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0bf1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0c21u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c2au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0c3fu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c77u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0c7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0c8bu:
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
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0ca0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        uint32_t loc_23dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23dc = rd32(sp0 - 0x23dcu);
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        g->esp = sp0 - 0x23dcu;
        (void)sp0;
        return 1;
    }
    case 0x101b0ca7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0cb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0cc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0ccau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0cd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0cdbu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0ce4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0cf3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d17u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d1bu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d22u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d29u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d31u:
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
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0d39u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d52u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d5au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d60u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d68u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d6eu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d76u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0d86u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0da2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0db0u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0db9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0dbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0dc4u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0dd9u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0de0u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0de4u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0de8u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e09u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e10u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e14u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e1cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e2au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e3au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e65u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e6du:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e74u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e7cu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e8bu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0e8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0e9au:
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
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0eb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0ec5u:
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
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0eceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0ed3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0edau:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0edeu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0eeeu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f19u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f20u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f25u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f2au:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f32u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f3bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b0f4bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b0f5du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b0f6cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b0f71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f7du:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0f90u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f98u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23d0u;
        wr32(sp0 - 0x23d0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x101b0facu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0fbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0fc0u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0fc8u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0fd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0fe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d8u;
        wr32(sp0 - 0x23d8u, sp0 - 0x23bcu);
        (void)sp0;
        return 1;
    }
    case 0x101b0ff7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1008u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b100fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1010u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1014u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b101du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b102cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b103eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b104cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101b1051u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1055u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b105bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1063u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1069u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1072u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1081u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1089u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x23d0u;
        wr32(sp0 - 0x23d0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x101b109du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10b3u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10bbu:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10c1u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10c9u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10d9u:
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
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b10ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1104u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->eax = arg1;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b110eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b111eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b1129u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b1138u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b113au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b1149u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23ccu;
        g->ebx = arg3;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101b114bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x23d4u;
        wr32(sp0 - 0x23d4u, arg3);
        wr32(sp0 - 0x23d0u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x101b1157u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1160u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1165u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1167u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1177u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1183u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b00b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b00b0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
