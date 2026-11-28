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
    uint32_t loc_23d0;
    uint32_t loc_23d4;
    uint32_t loc_23d8;
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
    uint32_t t511;
    uint32_t t512;
    uint32_t t513;
    uint32_t t514;
    uint32_t t515;
    uint32_t t516;
    uint32_t t517;
    uint32_t t518;
    uint32_t t519;
    uint32_t t52;
    uint32_t t520;
    uint32_t t521;
    uint32_t t522;
    uint32_t t523;
    uint32_t t524;
    uint32_t t525;
    uint32_t t526;
    uint32_t t527;
    uint32_t t528;
    uint32_t t529;
    uint32_t t53;
    uint32_t t530;
    uint32_t t531;
    uint32_t t532;
    uint32_t t533;
    uint32_t t534;
    uint32_t t535;
    uint32_t t536;
    uint32_t t537;
    uint32_t t538;
    uint32_t t539;
    uint32_t t54;
    uint32_t t540;
    uint32_t t541;
    uint32_t t542;
    uint32_t t543;
    uint32_t t544;
    uint32_t t545;
    uint32_t t546;
    uint32_t t547;
    uint32_t t548;
    uint32_t t549;
    uint32_t t55;
    uint32_t t550;
    uint32_t t551;
    uint32_t t552;
    uint32_t t553;
    uint32_t t554;
    uint32_t t555;
    uint32_t t556;
    uint32_t t557;
    uint32_t t558;
    uint32_t t559;
    uint32_t t56;
    uint32_t t560;
    uint32_t t561;
    uint32_t t562;
    uint32_t t563;
    uint32_t t564;
    uint32_t t565;
    uint32_t t566;
    uint32_t t567;
    uint32_t t568;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 9184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b00bau: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_101b00ba;
    case 0x101b00d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b00d1;
    case 0x101b00dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b00df;
    case 0x101b00ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b00eb;
    case 0x101b00fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b00fd;
    case 0x101b0101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0101;
    case 0x101b0105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0105;
    case 0x101b0118u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0118;
    case 0x101b012du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b012d;
    case 0x101b0136u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0136;
    case 0x101b0145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0145;
    case 0x101b014au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b014a;
    case 0x101b0151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0151;
    case 0x101b0157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0157;
    case 0x101b015cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b015c;
    case 0x101b016cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b016c;
    case 0x101b0188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0188;
    case 0x101b0196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0196;
    case 0x101b01a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b01a2;
    case 0x101b01a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01a7;
    case 0x101b01adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01ad;
    case 0x101b01b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01b8;
    case 0x101b01bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01bb;
    case 0x101b01c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01c0;
    case 0x101b01c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01c5;
    case 0x101b01cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01ca;
    case 0x101b01ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01cc;
    case 0x101b01d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01d1;
    case 0x101b01e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01e1;
    case 0x101b01f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01f6;
    case 0x101b01ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b01ff;
    case 0x101b0205u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0205;
    case 0x101b0214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0214;
    case 0x101b0223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0223;
    case 0x101b022fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b022f;
    case 0x101b023fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b023f;
    case 0x101b0246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0246;
    case 0x101b024fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b024f;
    case 0x101b0257u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0257;
    case 0x101b0260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0260;
    case 0x101b0268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0268;
    case 0x101b026fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b026f;
    case 0x101b0273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0273;
    case 0x101b0279u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0279;
    case 0x101b027du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b027d;
    case 0x101b0283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0283;
    case 0x101b028bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b028b;
    case 0x101b029bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b029b;
    case 0x101b02a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02a1;
    case 0x101b02b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02b0;
    case 0x101b02b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02b6;
    case 0x101b02c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02c5;
    case 0x101b02ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02cc;
    case 0x101b02d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02d3;
    case 0x101b02dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02db;
    case 0x101b02e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02e3;
    case 0x101b02e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b02e7;
    case 0x101b02ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b02ec;
    case 0x101b02f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b02f1;
    case 0x101b02fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b02fa;
    case 0x101b0307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0307;
    case 0x101b0313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0313;
    case 0x101b0329u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0329;
    case 0x101b032fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b032f;
    case 0x101b0337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0337;
    case 0x101b033fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b033f;
    case 0x101b0346u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0346;
    case 0x101b034au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b034a;
    case 0x101b0355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0355;
    case 0x101b0359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0359;
    case 0x101b035eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b035e;
    case 0x101b0363u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0363;
    case 0x101b036au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b036a;
    case 0x101b036eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b036e;
    case 0x101b0375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0375;
    case 0x101b0381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0381;
    case 0x101b0388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0388;
    case 0x101b039cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b039c;
    case 0x101b03a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03a8;
    case 0x101b03b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03b4;
    case 0x101b03c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03c0;
    case 0x101b03d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b03d0;
    case 0x101b03e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b03e3;
    case 0x101b03f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b03f1;
    case 0x101b03f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b03f3;
    case 0x101b03fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b03fd;
    case 0x101b040fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b040f;
    case 0x101b0414u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0414;
    case 0x101b041bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b041b;
    case 0x101b0424u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0424;
    case 0x101b042fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b042f;
    case 0x101b043eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b043e;
    case 0x101b044bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b044b;
    case 0x101b0459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0459;
    case 0x101b0463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0463;
    case 0x101b0472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0472;
    case 0x101b047du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b047d;
    case 0x101b0484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0484;
    case 0x101b0488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0488;
    case 0x101b0498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0498;
    case 0x101b04b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b04b4;
    case 0x101b04c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b04c2;
    case 0x101b04ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b04ce;
    case 0x101b04d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b04d3;
    case 0x101b04ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b04dd;
    case 0x101b04e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b04e4;
    case 0x101b04f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b04f3;
    case 0x101b050fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b050f;
    case 0x101b051eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b051e;
    case 0x101b052cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b052c;
    case 0x101b0531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0531;
    case 0x101b0537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0537;
    case 0x101b053bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b053b;
    case 0x101b053fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b053f;
    case 0x101b054fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b054f;
    case 0x101b0558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0558;
    case 0x101b055fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b055f;
    case 0x101b0569u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0569;
    case 0x101b057au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b057a;
    case 0x101b0589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0589;
    case 0x101b0597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0597;
    case 0x101b059cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b059c;
    case 0x101b05abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b05ab;
    case 0x101b05c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b05c7;
    case 0x101b05d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b05d1;
    case 0x101b05e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b05e0;
    case 0x101b05e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b05e7;
    case 0x101b05ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b05ec;
    case 0x101b05f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b05f3;
    case 0x101b05f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b05f8;
    case 0x101b0607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0607;
    case 0x101b061cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b061c;
    case 0x101b0621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0621;
    case 0x101b0629u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0629;
    case 0x101b0631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0631;
    case 0x101b0641u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0641;
    case 0x101b065du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b065d;
    case 0x101b066cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b066c;
    case 0x101b067cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b067c;
    case 0x101b0681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0681;
    case 0x101b0688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0688;
    case 0x101b0691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0691;
    case 0x101b0696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0696;
    case 0x101b069eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b069e;
    case 0x101b06a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b06a6;
    case 0x101b06b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b06b5;
    case 0x101b06d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b06d1;
    case 0x101b06e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b06e0;
    case 0x101b06e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b06e9;
    case 0x101b06fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b06fb;
    case 0x101b0703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0703;
    case 0x101b070fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b070f;
    case 0x101b0716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0716;
    case 0x101b071fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b071f;
    case 0x101b0724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0724;
    case 0x101b072cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b072c;
    case 0x101b0732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0732;
    case 0x101b0740u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0740;
    case 0x101b0745u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0745;
    case 0x101b074cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b074c;
    case 0x101b0754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0754;
    case 0x101b0759u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0759;
    case 0x101b075eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b075e;
    case 0x101b0763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0763;
    case 0x101b0771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0771;
    case 0x101b0777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0777;
    case 0x101b077cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b077c;
    case 0x101b0781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0781;
    case 0x101b078fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b078f;
    case 0x101b07a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07a4;
    case 0x101b07b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07b3;
    case 0x101b07bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b07bc;
    case 0x101b07c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b07c1;
    case 0x101b07d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07d0;
    case 0x101b07d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07d6;
    case 0x101b07dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07dc;
    case 0x101b07e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07e4;
    case 0x101b07f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b07f4;
    case 0x101b07fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b07fc;
    case 0x101b0810u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0810;
    case 0x101b081eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b081e;
    case 0x101b0827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0827;
    case 0x101b082cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b082c;
    case 0x101b0833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0833;
    case 0x101b0838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0838;
    case 0x101b083du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b083d;
    case 0x101b0841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0841;
    case 0x101b0845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0845;
    case 0x101b084du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b084d;
    case 0x101b0855u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0855;
    case 0x101b0864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0864;
    case 0x101b0887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0887;
    case 0x101b088du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b088d;
    case 0x101b0892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0892;
    case 0x101b08a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08a1;
    case 0x101b08b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08b5;
    case 0x101b08bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08ba;
    case 0x101b08beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08be;
    case 0x101b08c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08c2;
    case 0x101b08ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08ce;
    case 0x101b08deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08de;
    case 0x101b08ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b08ec;
    case 0x101b08fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08fa;
    case 0x101b08feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b08fe;
    case 0x101b090eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b090e;
    case 0x101b092au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b092a;
    case 0x101b0936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0936;
    case 0x101b093bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b093b;
    case 0x101b0946u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0946;
    case 0x101b094bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b094b;
    case 0x101b0959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0959;
    case 0x101b0963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0963;
    case 0x101b0974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0974;
    case 0x101b097fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b097f;
    case 0x101b0984u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0984;
    case 0x101b0993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0993;
    case 0x101b09a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09a2;
    case 0x101b09a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09a9;
    case 0x101b09b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09b1;
    case 0x101b09b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09b7;
    case 0x101b09bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09bf;
    case 0x101b09c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09c5;
    case 0x101b09cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09cd;
    case 0x101b09d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09d3;
    case 0x101b09e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09e3;
    case 0x101b09eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09ea;
    case 0x101b09eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09ee;
    case 0x101b09f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09f5;
    case 0x101b09f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b09f9;
    case 0x101b0a08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a08;
    case 0x101b0a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0a16;
    case 0x101b0a27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a27;
    case 0x101b0a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a3e;
    case 0x101b0a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a53;
    case 0x101b0a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a59;
    case 0x101b0a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a61;
    case 0x101b0a69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a69;
    case 0x101b0a70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a70;
    case 0x101b0a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a74;
    case 0x101b0a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a7f;
    case 0x101b0a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0a83;
    case 0x101b0a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0a88;
    case 0x101b0a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a8d;
    case 0x101b0a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a94;
    case 0x101b0a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a98;
    case 0x101b0a9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0a9f;
    case 0x101b0aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0aab;
    case 0x101b0ab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0ab2;
    case 0x101b0ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0ac1;
    case 0x101b0addu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0add;
    case 0x101b0aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0aec;
    case 0x101b0b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b06;
    case 0x101b0b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b16;
    case 0x101b0b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b1d;
    case 0x101b0b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b2f;
    case 0x101b0b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b3e;
    case 0x101b0b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b4c;
    case 0x101b0b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b50;
    case 0x101b0b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b52;
    case 0x101b0b5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b0b5c;
    case 0x101b0b61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b61;
    case 0x101b0b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b66;
    case 0x101b0b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b71;
    case 0x101b0b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b7a;
    case 0x101b0b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b82;
    case 0x101b0b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b89;
    case 0x101b0b8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0b8e;
    case 0x101b0b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0b9d;
    case 0x101b0bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0bb9;
    case 0x101b0bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0bc7;
    case 0x101b0bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0bd1;
    case 0x101b0bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0bdb;
    case 0x101b0bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0bf1;
    case 0x101b0c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0c0d;
    case 0x101b0c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c1c;
    case 0x101b0c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c21;
    case 0x101b0c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c2a;
    case 0x101b0c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c3f;
    case 0x101b0c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c54;
    case 0x101b0c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c5f;
    case 0x101b0c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c68;
    case 0x101b0c70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c70;
    case 0x101b0c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c77;
    case 0x101b0c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0c7c;
    case 0x101b0c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0c8b;
    case 0x101b0ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0ca0;
    case 0x101b0ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0ca7;
    case 0x101b0cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0cb6;
    case 0x101b0cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0cc0;
    case 0x101b0ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0cca;
    case 0x101b0cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0cd6;
    case 0x101b0cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0cdb;
    case 0x101b0ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0ce4;
    case 0x101b0cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0cf3;
    case 0x101b0d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d08;
    case 0x101b0d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d11;
    case 0x101b0d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d17;
    case 0x101b0d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d1b;
    case 0x101b0d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d22;
    case 0x101b0d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d29;
    case 0x101b0d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d31;
    case 0x101b0d39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d39;
    case 0x101b0d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0d41;
    case 0x101b0d46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0d46;
    case 0x101b0d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d4b;
    case 0x101b0d52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d52;
    case 0x101b0d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d5a;
    case 0x101b0d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d60;
    case 0x101b0d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d68;
    case 0x101b0d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d6e;
    case 0x101b0d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d76;
    case 0x101b0d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0d86;
    case 0x101b0da2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0da2;
    case 0x101b0db0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0db0;
    case 0x101b0db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0db9;
    case 0x101b0dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0dbe;
    case 0x101b0dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0dc4;
    case 0x101b0dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0dd9;
    case 0x101b0de0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0de0;
    case 0x101b0de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0de4;
    case 0x101b0de8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0de8;
    case 0x101b0e04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0e04;
    case 0x101b0e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e09;
    case 0x101b0e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e10;
    case 0x101b0e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e14;
    case 0x101b0e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e1c;
    case 0x101b0e2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e2a;
    case 0x101b0e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e3a;
    case 0x101b0e56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0e56;
    case 0x101b0e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e65;
    case 0x101b0e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e6d;
    case 0x101b0e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e74;
    case 0x101b0e7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e7c;
    case 0x101b0e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e8b;
    case 0x101b0e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0e8c;
    case 0x101b0e9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0e9a;
    case 0x101b0eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0eb6;
    case 0x101b0ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0ec5;
    case 0x101b0eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0ece;
    case 0x101b0ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0ed3;
    case 0x101b0edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0eda;
    case 0x101b0edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0ede;
    case 0x101b0eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0eee;
    case 0x101b0f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0f0a;
    case 0x101b0f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f19;
    case 0x101b0f20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f20;
    case 0x101b0f25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f25;
    case 0x101b0f2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f2a;
    case 0x101b0f32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f32;
    case 0x101b0f3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f3b;
    case 0x101b0f4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f4b;
    case 0x101b0f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b0f5d;
    case 0x101b0f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f6c;
    case 0x101b0f71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0f71;
    case 0x101b0f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f76;
    case 0x101b0f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f7d;
    case 0x101b0f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0f82;
    case 0x101b0f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0f90;
    case 0x101b0f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0f98;
    case 0x101b0facu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b0fac;
    case 0x101b0fbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0fbb;
    case 0x101b0fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0fc0;
    case 0x101b0fc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b0fc8;
    case 0x101b0fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0fd4;
    case 0x101b0fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b0fe6;
    case 0x101b0ff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b0ff7;
    case 0x101b1008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1008;
    case 0x101b100fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b100f;
    case 0x101b1010u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1010;
    case 0x101b1014u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1014;
    case 0x101b101du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b101d;
    case 0x101b102cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b102c;
    case 0x101b103eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b103e;
    case 0x101b104cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b104c;
    case 0x101b1051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b1051;
    case 0x101b1055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1055;
    case 0x101b105bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b105b;
    case 0x101b1063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b1063;
    case 0x101b1069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b1069;
    case 0x101b1072u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1072;
    case 0x101b1081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b1081;
    case 0x101b1089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1089;
    case 0x101b109du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b109d;
    case 0x101b10acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10ac;
    case 0x101b10b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10b3;
    case 0x101b10bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10bb;
    case 0x101b10c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10c1;
    case 0x101b10c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10c9;
    case 0x101b10d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10d9;
    case 0x101b10ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b10eb;
    case 0x101b1104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b1104;
    case 0x101b110eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b110e;
    case 0x101b111eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b111e;
    case 0x101b1129u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); goto E_101b1129;
    case 0x101b1138u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b1138;
    case 0x101b113au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b113a;
    case 0x101b1149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101b1149;
    case 0x101b114bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b114b;
    case 0x101b1157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b1157;
    case 0x101b1160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1160;
    case 0x101b1165u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b1165;
    case 0x101b1167u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_23d8 = rd32(sp0 - 0x23d8u); loc_23d4 = rd32(sp0 - 0x23d4u); loc_23d0 = rd32(sp0 - 0x23d0u); goto E_101b1167;
    case 0x101b1177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b1177;
    case 0x101b1183u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_101b1183;
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
    COW_RET(0x101b00d1u);
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
    COW_RET(0x101b00dfu);
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
        COW_RET(0x101b00fdu);
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
    t10 = (uint8_t)rd32(sp0 + 8u);
    wr32(sp0 - 0x23d0u, t10);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0118u);
    t11 = cow_cdecl(g, COW_IMG(0x101aff00u), 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    ebp = t10;
    COW_AT(101b0118)
    wr8(sp0 - 0x23bcu, (uint8_t)eax);
    if (rd8(self + 0xf0ecu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b01ad;
    }
    COW_AT(101b012d)
    if (ebp - 1u > 0xcfu) goto L_101b0151;
    ebp = ebp - 1u;
    COW_AT(101b0136)
    t14 = rd32(COW_IMG(0x101b1194u) + rd8(COW_IMG(0x101b11a4u) + ebp) * 4u);
    switch (t14 - RD)
    {
    case 0x101b0145u: eax = rd8(COW_IMG(0x101b11a4u) + ebp); goto L_101b0145;
    case 0x101b0151u: goto L_101b0151;
    case 0x101b0157u: eax = rd8(COW_IMG(0x101b11a4u) + ebp); goto L_101b0157;
    case 0x101b01a7u: goto L_101b01a7;
    default: rt_fatal(g, COW_IMG(0x101b013eu), "switch");
    }
    return 0;
L_101b0145: ;
    COW_AT(101b0145)
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b014au);
    t26 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    eax = t26;
    COW_AT(101b014a)
    g->edx = rd32(self);
    t27 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0151u);
    cow_thiscall(g, rd32(t27 + 0x70u), self, 0);
    t28 = g->edx;
    edx = t28;
L_101b0151: ;
    COW_AT(101b0151)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
L_101b0f82: ;
    COW_AT(101b0f82)
    t542 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t542);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0f90u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t542, loc_23d0);
    COW_AT(101b0f90)
    t543 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t543);
    edx = t543;
    loc_23d0 = t543;
L_101b0f98: ;
    COW_AT(101b0f98)
    t544 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t544);
    t545 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t545);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0facu);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t545, t544, loc_23d0);
    t546 = g->ecx;
    ecx = t546;
    COW_AT(101b0fac)
    t547 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t547);
    eax = t547;
    edx = rd32(COW_IMG(0x103d3c64u));
    loc_23d0 = t547;
L_101b1160: ;
    COW_AT(101b1160)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b1165u);
    t562 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_23d0);
    t563 = g->ecx;
    eax = t562;
    ecx = t563;
L_101b1165: ;
    COW_AT(101b1165)
    edi = eax;
L_101b1167: ;
    COW_AT(101b1167)
    wr32(sp0 - 0x23d0u, edi);
    t564 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t564);
    g->eax = t564;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t565 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b1177u);
    t566 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t564, edi);
    t567 = g->edx;
    eax = t566;
    edx = t567;
    COW_AT(101b1177)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b1183u);
    t568 = cow_call_regs(g, COW_IMG(0x101b4780u), eax, sp0 - 0x21e4u, edx, 1, 0);
    eax = t568;
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
    COW_RET(0x101b015cu);
    t15 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    eax = t15;
    COW_AT(101b015c)
    wr32(sp0 - 0x23d0u, edi);
    t16 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t16);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b016cu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t16, edi);
    COW_AT(101b016c)
    t17 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t17);
    t18 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t18);
    t19 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t19);
    g->edx = t19;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0188u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t19, t18, t17);
    t20 = g->edx;
    edx = t20;
    COW_AT(101b0188)
    t21 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t21);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t22 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0196u);
    t23 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t21);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(101b0196)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b01a2u);
    cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
    t25 = g->ecx;
    ecx = t25;
    edi = eax;
    COW_AT(101b01a2)
    goto L_101b1167;
L_101b01a7: ;
    COW_AT(101b01a7)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
L_101b1072: ;
    COW_AT(101b1072)
    t290 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t290);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b1081u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t290, loc_23d0);
    COW_AT(101b1081)
    t291 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t291);
    loc_23d0 = t291;
L_101b1089: ;
    COW_AT(101b1089)
    t292 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t292);
    t293 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t293);
    g->eax = t293;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b109du);
    t294 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t293, t292, loc_23d0);
    eax = t294;
    COW_AT(101b109d)
    t295 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t295);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t295;
    loc_23d0 = t295;
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
    if (ebp == 1u)
    {
    COW_AT(101b01cc)
        g->eax = eax;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b01d1u);
        t30 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        eax = t30;
    }
    else
    {
        ebp = ebp - 1u;
    COW_AT(101b01bb)
        if (ebp == 0x1bu) goto L_101b01c5;
        ebp = ebp - 0x1bu;
    COW_AT(101b01c0)
        if (ebp != 0x29u) goto L_101b01d1;
L_101b01c5: ;
    COW_AT(101b01c5)
        g->eax = eax;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b01cau);
        t29 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        eax = t29;
    COW_AT(101b01ca)
    }
L_101b01d1: ;
    COW_AT(101b01d1)
    wr32(sp0 - 0x23d0u, edi);
    t31 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t31);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b01e1u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t31, edi);
    COW_AT(101b01e1)
    t32 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t32);
    t33 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t33);
    eax = t32;
    loc_23d0 = t32;
    loc_23d4 = t33;
L_101b114b: ;
    COW_AT(101b114b)
    t559 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t559);
    g->edx = t559;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b1157u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t559, loc_23d4, loc_23d0);
    t560 = g->edx;
    edx = t560;
    COW_AT(101b1157)
    t561 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t561);
    eax = rd32(COW_IMG(0x103d3c64u));
    ecx = t561;
    loc_23d0 = t561;
    goto L_101b1160;
L_101b01f6: ;
    COW_AT(101b01f6)
    if ((int32_t)ebp > 69) goto L_101b0984;
    zf = ebp == 0x45u;
    COW_AT(101b01ff)
    if (zf) goto L_101b082c;
    COW_AT(101b0205)
    if (ebp + 0x40u > 0x84u) goto L_101b10eb;
    ebp = ebp + 0x40u;
    COW_AT(101b0214)
    t34 = rd32(COW_IMG(0x101b1274u) + rd8(COW_IMG(0x101b12acu) + ebp) * 4u);
    switch (t34 - RD)
    {
    case 0x101b0223u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b0223;
    case 0x101b02b6u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b02b6;
    case 0x101b0329u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b0329;
    case 0x101b047du: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b047d;
    case 0x101b05ecu: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b05ec;
    case 0x101b0681u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b0681;
    case 0x101b070fu: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b070f;
    case 0x101b0732u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b0732;
    case 0x101b07d6u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b07d6;
    case 0x101b082cu: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b082c;
    case 0x101b09d3u: goto L_101b09d3;
    case 0x101b0d08u: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b0d08;
    case 0x101b10acu: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b10ac;
    case 0x101b10ebu: edx = rd8(COW_IMG(0x101b12acu) + ebp); goto L_101b10eb;
    default: rt_fatal(g, COW_IMG(0x101b021cu), "switch");
    }
    return 0;
L_101b0223: ;
    COW_AT(101b0223)
    if ((uint8_t)rd32(sp0 + 0x10u) != 1u)
    {
        ebx = rd32(sp0 + 0x10u);
        goto L_101b0268;
    }
    COW_AT(101b022f)
    wr32(sp0 - 0x23d0u, sp0 - 0x23acu);
    wr32(sp0 - 0x23d4u, sp0 - 0x23b0u);
    wr32(sp0 - 0x23d8u, edi);
    g->eax = sp0 - 0x23acu;
    g->ecx = sp0 - 0x23b0u;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b023fu);
    t209 = cow_stdcall(g, COW_IMG(0x102bc882u), 3, edi, sp0 - 0x23b0u, sp0 - 0x23acu);
    t210 = g->ecx;
    t211 = g->edx;
    eax = t209;
    ecx = t210;
    edx = t211;
    COW_AT(101b023f)
    t212 = rd32(sp0 - 0x23b0u);
    if (t212 != 0x19u)
    {
    COW_AT(101b0257)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 3u);
        g->ecx = ecx;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0260u);
        cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 3u, 0u);
        t214 = g->ecx;
        ecx = t214;
    COW_AT(101b0260)
    }
    else
    {
    COW_AT(101b0246)
        wr32(sp0 - 0x23d0u, 1u);
        wr32(sp0 - 0x23d4u, 3u);
        g->ecx = ecx;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b024fu);
        cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 3u, 1u);
        t213 = g->ecx;
        ecx = t213;
    COW_AT(101b024f)
    }
    goto L_101b1167;
L_101b0268: ;
    COW_AT(101b0268)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b026fu);
    t215 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t216 = g->ecx;
    t217 = g->edx;
    eax = t215;
    ecx = t216;
    edx = t217;
    COW_AT(101b026f)
    if ((uint8_t)eax != 0u) goto L_101b02a1;
    COW_AT(101b0273)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0279u);
    t218 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t219 = g->ecx;
    t220 = g->edx;
    eax = t218;
    ecx = t219;
    edx = t220;
    COW_AT(101b0279)
    if (eax == 0u) goto L_101b02a1;
    COW_AT(101b027d)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0283u);
    t221 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t222 = g->ecx;
    eax = t221;
    ecx = t222;
    COW_AT(101b0283)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b028b)
    wr32(sp0 - 0x23d0u, edi);
    t223 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t223);
    g->eax = t223;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b029bu);
    t224 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t223, edi);
    eax = t224;
    COW_AT(101b029b)
    wr32(sp0 - 0x23d0u, ebx);
    loc_23d0 = ebx;
L_101b07fc: ;
    COW_AT(101b07fc)
    t225 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t225);
    t226 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t226);
    g->edx = t226;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0810u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t226, t225, loc_23d0);
    t227 = g->edx;
    edx = t227;
    COW_AT(101b0810)
    t228 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t228);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t229 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b081eu);
    t230 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t228);
    eax = t230;
    COW_AT(101b081e)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0827u);
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    t231 = g->ecx;
    ecx = t231;
    edi = eax;
    COW_AT(101b0827)
    goto L_101b1167;
L_101b02a1: ;
    COW_AT(101b02a1)
    wr32(sp0 - 0x23d0u, edi);
    t232 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t232);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b02b0u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t232, edi);
    COW_AT(101b02b0)
    wr32(sp0 - 0x23d0u, ebx);
    loc_23d0 = ebx;
    goto L_101b1089;
L_101b02b6: ;
    COW_AT(101b02b6)
    if (rd32(sp0 + 4u) != 0u) goto L_101b1167;
    COW_AT(101b02c5)
    g->eax = rd32(self);
    t193 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b02ccu);
    t194 = cow_thiscall(g, rd32(t193 + 0x70u), self, 0);
    eax = t194;
    COW_AT(101b02cc)
    g->eax = eax;
    g->edx = rd32(self);
    t195 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b02d3u);
    t196 = cow_thiscall(g, rd32(t195 + 0x68u), self, 0);
    t197 = g->edx;
    eax = t196;
    edx = t197;
    COW_AT(101b02d3)
    wr32(sp0 - 0x23d0u, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t198 = rd32(self);
    g->esp = sp0 - 0x23d0u;
    COW_RET(0x101b02dbu);
    t199 = cow_thiscall(g, rd32(t198 + 0x64u), self, 0);
    t200 = g->edx;
    eax = t199;
    edx = t200;
    COW_AT(101b02db)
    wr32(sp0 - 0x23d4u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b02e3u);
    t201 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x23d0u));
    t202 = g->ecx;
    t203 = g->edx;
    eax = t201;
    ecx = t202;
    edx = t203;
    COW_AT(101b02e3)
    if ((int32_t)eax >= 0) goto L_101b02f1;
    COW_AT(101b02e7)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b02ecu);
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t204 = g->ecx;
    ecx = t204;
    COW_AT(101b02ec)
    goto L_101b1167;
L_101b02f1: ;
    COW_AT(101b02f1)
    wr32(sp0 - 0x23d0u, 0u);
    g->eax = eax;
    g->edx = rd32(self);
    t205 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b02fau);
    t206 = cow_thiscall(g, rd32(t205 + 0x60u), self, 1, 0u);
    t207 = g->ecx;
    t208 = g->edx;
    eax = t206;
    ecx = t207;
    edx = t208;
L_101b02fa: ;
    COW_AT(101b02fa)
    wr32(sp0 - 0x23d0u, edi);
    wr8(self + 0xf120u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0307u);
    t382 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, rd32(sp0 - 0x23d0u));
    t383 = g->ecx;
    t384 = g->edx;
    eax = t382;
    ecx = t383;
    edx = t384;
    COW_AT(101b0307)
    t385 = -(eax != 0u) + 1u;
    wr32(sp0 - 0x23d0u, t385);
    wr32(sp0 - 0x23d4u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0313u);
    cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, t385);
    t386 = g->ecx;
    ecx = t386;
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
    COW_RET(0x101b032fu);
    t162 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t163 = g->edx;
    eax = t162;
    edx = t163;
    COW_AT(101b032f)
    if (eax == 0u) goto L_101b0414;
    COW_AT(101b0337)
    if ((int32_t)ebx <= 0) goto L_101b0414;
    COW_AT(101b033f)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0346u);
    t164 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t165 = g->edx;
    eax = t164;
    edx = t165;
    COW_AT(101b0346)
    if ((uint8_t)eax == 0u) goto L_101b0363;
    COW_AT(101b034a)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0355u);
    t166 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t167 = g->ecx;
    t168 = g->edx;
    eax = t166;
    ecx = t167;
    edx = t168;
    COW_AT(101b0355)
    if ((uint8_t)eax == 0u) goto L_101b0363;
    COW_AT(101b0359)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b035eu);
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t169 = g->ecx;
    ecx = t169;
    COW_AT(101b035e)
    goto L_101b1167;
L_101b0363: ;
    COW_AT(101b0363)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b036au);
    t170 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t171 = g->edx;
    eax = t170;
    edx = t171;
    COW_AT(101b036a)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b036e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0375u);
        t172 = cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
        t173 = g->ecx;
        t174 = g->edx;
        eax = t172;
        ecx = t173;
        edx = t174;
    COW_AT(101b0375)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 3u);
        wr32(sp0 - 0x23d8u, 0x15u);
        wr32(sp0 - 0x23dcu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0381u);
        cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 3u, 0u);
        t175 = g->edx;
        edx = t175;
    COW_AT(101b0381)
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0388u);
        cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
        t176 = g->edx;
        edx = t176;
    }
    COW_AT(101b0388)
    t177 = rd32(self + 0xf128u) + 1u;
    wr32(self + 0xf128u, t177);
    if (t177 != 1u)
    {
        eax = t177;
        goto L_101b03f3;
    }
    eax = t177;
    ecx = t177;
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
    COW_RET(0x101b03a8u);
    t488 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t489 = g->ecx;
    t490 = g->edx;
    eax = t488;
    ecx = t489;
    edx = t490;
    COW_AT(101b03a8)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 2u);
    wr32(sp0 - 0x23d8u, 0x15u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b03b4u);
    t491 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 2u, 0u);
    t492 = g->ecx;
    t493 = g->edx;
    eax = t491;
    ecx = t492;
    edx = t493;
    COW_AT(101b03b4)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, 0x12u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b03c0u);
    t494 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, 0u, 0u);
    eax = t494;
    COW_AT(101b03c0)
    wr32(sp0 - 0x23d0u, edi);
    t495 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t495);
    g->eax = eax;
    g->edx = t495;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b03d0u);
    t496 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t495, edi);
    t497 = g->edx;
    eax = t496;
    edx = t497;
    COW_AT(101b03d0)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, COW_IMG(0x10377cbcu));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b03e3u);
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    t498 = g->edx;
    edx = t498;
    COW_AT(101b03e3)
    t499 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t499);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t500 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b03f1u);
    t501 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t499);
    eax = t501;
    COW_AT(101b03f1)
    edi = eax;
L_101b03f3: ;
    COW_AT(101b03f3)
    g->edx = rd32(rd32(self + 0xf104u));
    t502 = rd32(self + 0xf104u);
    t503 = rd32(rd32(self + 0xf104u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b03fdu);
    cow_thiscall(g, rd32(t503), t502, 0);
    t504 = g->ecx;
    t505 = g->edx;
    ecx = t504;
    edx = t505;
    COW_AT(101b03fd)
    wr8(self + 0xf123u, 1u);
    wr32(sp0 - 0x23d0u, sp0 - 0x23b4u);
    wr32(sp0 - 0x23d4u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b040fu);
    cow_stdcall(g, COW_IMG(0x102bc870u), 2, edi, sp0 - 0x23b4u);
    t506 = g->ecx;
    ecx = t506;
    COW_AT(101b040f)
    goto L_101b1167;
L_101b0414: ;
    COW_AT(101b0414)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b041bu);
    t178 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t179 = g->ecx;
    t180 = g->edx;
    eax = t178;
    ecx = t179;
    edx = t180;
    COW_AT(101b041b)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0f82;
    }
    loc_23d0 = edi;
    COW_AT(101b0424)
    if (rd8(sp0 + 0xcu) == 0u) goto L_101b0463;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    COW_AT(101b042f)
    t181 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t181);
    g->eax = eax;
    g->edx = t181;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b043eu);
    t182 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t181, loc_23d0);
    t183 = g->edx;
    eax = t182;
    edx = t183;
    COW_AT(101b043e)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, 0x26u);
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b044bu);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x26u, 0u, 0u);
    t184 = g->edx;
    edx = t184;
    COW_AT(101b044b)
    t185 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t185);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t185;
    t186 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0459u);
    t187 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t185);
    t188 = g->ecx;
    eax = t187;
    ecx = t188;
    COW_AT(101b0459)
    wr8(sp0 - 0x23b5u, 1u);
    goto L_101b1165;
L_101b0463: ;
    COW_AT(101b0463)
    t189 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t189);
    g->eax = t189;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t190 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0472u);
    t191 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t189, loc_23d0);
    t192 = g->edx;
    eax = t191;
    edx = t192;
    COW_AT(101b0472)
    wr32(sp0 - 0x23d0u, 0u);
    wr32(sp0 - 0x23d4u, 0u);
    wr32(sp0 - 0x23d8u, 0x28u);
    loc_23d0 = 0u;
    loc_23d4 = 0u;
    loc_23d8 = 0x28u;
L_101b0ca0: ;
    COW_AT(101b0ca0)
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0ca7u);
    t411 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_23d8, loc_23d4, loc_23d0);
    eax = t411;
    COW_AT(101b0ca7)
    t412 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t412);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    t413 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0cb6u);
    t414 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t412);
    t415 = g->ecx;
    eax = t414;
    ecx = t415;
    COW_AT(101b0cb6)
    wr8(sp0 - 0x23b5u, 1u);
    goto L_101b1165;
L_101b047d: ;
    COW_AT(101b047d)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0484u);
    t103 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t104 = g->ecx;
    t105 = g->edx;
    eax = t103;
    ecx = t104;
    edx = t105;
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
            COW_RET(0x101b0537u);
            t130 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
            t131 = g->edx;
            eax = t130;
            edx = t131;
    COW_AT(101b0537)
            if (eax == 0u) goto L_101b059c;
    COW_AT(101b053b)
            if ((int32_t)ebx <= 0) goto L_101b059c;
    COW_AT(101b053f)
            wr32(sp0 - 0x23d0u, edi);
            t132 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t132);
            g->edx = t132;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b054fu);
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t132, edi);
            t133 = g->edx;
            edx = t133;
    COW_AT(101b054f)
            wr32(sp0 - 0x23d0u, 0u);
            g->eax = rd32(self);
            t134 = rd32(self);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0558u);
            t135 = cow_thiscall(g, rd32(t134 + 0x60u), self, 1, 0u);
            eax = t135;
    COW_AT(101b0558)
            g->eax = eax;
            g->edx = rd32(self);
            t136 = rd32(self);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b055fu);
            t137 = cow_thiscall(g, rd32(t136 + 0x5cu), self, 0);
            t138 = g->edx;
            eax = t137;
            edx = t138;
    COW_AT(101b055f)
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0569u);
            cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
            t139 = g->edx;
            edx = t139;
    COW_AT(101b0569)
            t140 = rd32(self + 0xf104u);
            wr8(self + 0xf120u, 0u);
            g->eax = rd32(t140);
            t141 = rd32(t140);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b057au);
            t142 = cow_thiscall(g, rd32(t141), t140, 0);
            eax = t142;
    COW_AT(101b057a)
            t143 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t143);
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103d3c64u));
            g->edx = t143;
            t144 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0589u);
            t145 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t143);
            t146 = g->ecx;
            t147 = g->edx;
            eax = t145;
            ecx = t146;
            edx = t147;
    COW_AT(101b0589)
            wr8(self + 0xf123u, 0u);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0597u);
            cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            t148 = g->ecx;
            ecx = t148;
            edi = eax;
    COW_AT(101b0597)
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b04dd)
            g->edx = rd32(self);
            t117 = rd32(self);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b04e4u);
            cow_thiscall(g, rd32(t117 + 0x70u), self, 0);
            t118 = g->edx;
            edx = t118;
    COW_AT(101b04e4)
            wr32(sp0 - 0x23d0u, edi);
            t119 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t119);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b04f3u);
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t119, edi);
    COW_AT(101b04f3)
            t120 = rd32(sp0 + 0x10u);
            wr32(sp0 - 0x23d0u, t120);
            t121 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x23d4u, t121);
            t122 = rd32(sp0 - 0x23bcu);
            wr32(sp0 - 0x23d8u, t122);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b050fu);
            cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t122, t121, t120);
            t123 = g->ecx;
            ecx = t123;
    COW_AT(101b050f)
            t124 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t124);
            g->eax = t124;
            g->ecx = ecx;
            g->edx = rd32(COW_IMG(0x103d3c64u));
            t125 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b051eu);
            t126 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t124);
            t127 = g->ecx;
            t128 = g->edx;
            eax = t126;
            ecx = t127;
            edx = t128;
    COW_AT(101b051e)
            wr8(self + 0xf123u, 0u);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b052cu);
            cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            t129 = g->ecx;
            ecx = t129;
            edi = eax;
    COW_AT(101b052c)
        }
    }
    else
    {
    COW_AT(101b0488)
        wr32(sp0 - 0x23d0u, edi);
        t106 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d4u, t106);
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0498u);
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t106, edi);
    COW_AT(101b0498)
        t107 = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x23d0u, t107);
        t108 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x23d4u, t108);
        t109 = rd32(sp0 - 0x23bcu);
        wr32(sp0 - 0x23d8u, t109);
        g->edx = t109;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b04b4u);
        cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t109, t108, t107);
        t110 = g->edx;
        edx = t110;
    COW_AT(101b04b4)
        t111 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t111);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        g->ecx = t111;
        g->edx = edx;
        t112 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b04c2u);
        t113 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t111);
        t114 = g->ecx;
        t115 = g->edx;
        eax = t113;
        ecx = t114;
        edx = t115;
    COW_AT(101b04c2)
        wr8(sp0 - 0x23b5u, 1u);
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b04ceu);
        cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        t116 = g->ecx;
        ecx = t116;
        edi = eax;
    COW_AT(101b04ce)
    }
    goto L_101b1167;
L_101b059c: ;
    COW_AT(101b059c)
    wr32(sp0 - 0x23d0u, edi);
    t149 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t149);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b05abu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t149, edi);
    COW_AT(101b05ab)
    t150 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t150);
    t151 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t151);
    t152 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t152);
    g->eax = t151;
    g->edx = t150;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b05c7u);
    t153 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t152, t151, t150);
    t154 = g->edx;
    eax = t153;
    edx = t154;
    COW_AT(101b05c7)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b05d1u);
    cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
    t155 = g->ecx;
    ecx = t155;
    COW_AT(101b05d1)
    t156 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t156);
    g->eax = t156;
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t157 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b05e0u);
    t158 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t156);
    t159 = g->ecx;
    t160 = g->edx;
    eax = t158;
    ecx = t159;
    edx = t160;
    COW_AT(101b05e0)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b05e7u);
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t161 = g->ecx;
    ecx = t161;
    edi = eax;
    COW_AT(101b05e7)
    goto L_101b1167;
L_101b05ec: ;
    COW_AT(101b05ec)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b05f3u);
    t85 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t86 = g->ecx;
    t87 = g->edx;
    eax = t85;
    ecx = t86;
    edx = t87;
    COW_AT(101b05f3)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b061c;
    }
    loc_23d0 = edi;
    COW_AT(101b05f8)
    t88 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t88);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0607u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t88, loc_23d0);
    COW_AT(101b0607)
    t89 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t89);
    t90 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t90);
    eax = t89;
    loc_23d0 = t89;
    loc_23d4 = t90;
    goto L_101b114b;
L_101b061c: ;
    COW_AT(101b061c)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0621u);
    t91 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t92 = g->ecx;
    eax = t91;
    ecx = t92;
    COW_AT(101b0621)
    if (eax == 0u) goto L_101b10c9;
    COW_AT(101b0629)
    if ((int32_t)ebx <= 0) goto L_101b10c9;
    COW_AT(101b0631)
    wr32(sp0 - 0x23d0u, edi);
    t93 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t93);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0641u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t93, edi);
    COW_AT(101b0641)
    t94 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t94);
    t95 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t95);
    t96 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t96);
    g->eax = t96;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b065du);
    t97 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t96, t95, t94);
    eax = t97;
    COW_AT(101b065d)
    t98 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t98);
    g->eax = eax;
    g->edx = t98;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b066cu);
    t99 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t98);
    t100 = g->edx;
    eax = t99;
    edx = t100;
    COW_AT(101b066c)
    t101 = rd32(self);
    wr8(self + 0xf123u, 0u);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b067cu);
    cow_thiscall(g, rd32(t101 + 0x70u), self, 0);
    t102 = g->ecx;
    ecx = t102;
    edi = eax;
    COW_AT(101b067c)
    goto L_101b1167;
L_101b0681: ;
    COW_AT(101b0681)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0688u);
    t68 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
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
    COW_RET(0x101b0696u);
    t71 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(101b0696)
    if (eax == 0u) goto L_101b10c9;
    COW_AT(101b069e)
    if ((int32_t)ebx <= 0) goto L_101b10c9;
    COW_AT(101b06a6)
    wr32(sp0 - 0x23d0u, edi);
    t73 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t73);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b06b5u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t73, edi);
    COW_AT(101b06b5)
    t74 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t74);
    t75 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t75);
    t76 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t76);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b06d1u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t76, t75, t74);
    t77 = g->ecx;
    ecx = t77;
    COW_AT(101b06d1)
    t78 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t78);
    g->eax = t78;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b06e0u);
    t79 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t78);
    eax = t79;
    COW_AT(101b06e0)
    g->edx = rd32(self);
    t80 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b06e9u);
    cow_thiscall(g, rd32(t80 + 0x70u), self, 0);
    t81 = g->ecx;
    t82 = g->edx;
    ecx = t81;
    edx = t82;
    edi = eax;
    COW_AT(101b06e9)
    wr32(sp0 - 0x23d0u, 0x1c2u);
    wr32(sp0 - 0x23d4u, sp0 - 0x23a8u);
    wr32(sp0 - 0x23d8u, 8u);
    wr32(sp0 - 0x23dcu, edi);
    g->eax = sp0 - 0x23a8u;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b06fbu);
    t83 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, edi, 8u, sp0 - 0x23a8u, 0x1c2u);
    t84 = g->ecx;
    eax = t83;
    ecx = t84;
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
    COW_RET(0x101b0716u);
    t62 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
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
    COW_RET(0x101b0724u);
    t65 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(101b0724)
    if (eax != 0u) goto L_101b1167;
    COW_AT(101b072c)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
    goto L_101b0f82;
L_101b0732: ;
    COW_AT(101b0732)
    if ((uint8_t)rd32(sp0 + 0x10u) != 1u)
    {
        ebx = rd32(sp0 + 0x10u);
        goto L_101b0759;
    }
    ebx = rd32(sp0 + 0x10u);
    COW_AT(101b0740)
    g->edx = rd32(self);
    t39 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0745u);
    cow_thiscall(g, rd32(t39 + 0x70u), self, 0);
    t40 = g->edx;
    edx = t40;
    COW_AT(101b0745)
    g->eax = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b074cu);
    t42 = cow_thiscall(g, rd32(t41 + 0x68u), self, 0);
    eax = t42;
    COW_AT(101b074c)
    wr32(sp0 - 0x23d0u, eax);
    g->eax = eax;
    g->edx = rd32(self);
    t43 = rd32(self);
    g->esp = sp0 - 0x23d0u;
    COW_RET(0x101b0754u);
    t44 = cow_thiscall(g, rd32(t43 + 0x64u), self, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(101b0754)
L_101b0d31: ;
    COW_AT(101b0d31)
    wr32(sp0 - 0x23d4u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d39u);
    t378 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, eax, rd32(sp0 - 0x23d0u));
    t379 = g->ecx;
    t380 = g->edx;
    eax = t378;
    ecx = t379;
    edx = t380;
    COW_AT(101b0d39)
    if ((int32_t)eax >= 0) goto L_101b02fa;
    COW_AT(101b0d41)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d46u);
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t381 = g->ecx;
    ecx = t381;
    COW_AT(101b0d46)
    goto L_101b1167;
L_101b0759: ;
    COW_AT(101b0759)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b075eu);
    t46 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(101b075e)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0777;
    }
    loc_23d0 = edi;
    COW_AT(101b0763)
    t49 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t49);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0771u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t49, loc_23d0);
    COW_AT(101b0771)
    wr32(sp0 - 0x23d0u, ebx);
    loc_23d0 = ebx;
    goto L_101b1089;
L_101b0777: ;
    COW_AT(101b0777)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b077cu);
    t50 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(101b077c)
    wr32(sp0 - 0x23d0u, edi);
    if (eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b07c1;
    }
    loc_23d0 = edi;
    COW_AT(101b0781)
    t52 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t52);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b078fu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t52, loc_23d0);
    COW_AT(101b078f)
    wr32(sp0 - 0x23d0u, ebx);
    t53 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t53);
    t54 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t54);
    g->eax = t54;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b07a4u);
    t55 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t54, t53, ebx);
    eax = t55;
    COW_AT(101b07a4)
    t56 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t56);
    g->eax = eax;
    g->edx = t56;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b07b3u);
    t57 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t56);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    COW_AT(101b07b3)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b07bcu);
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    t59 = g->ecx;
    ecx = t59;
    edi = eax;
    COW_AT(101b07bc)
    goto L_101b1167;
L_101b07c1: ;
    COW_AT(101b07c1)
    t60 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t60);
    g->edx = t60;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b07d0u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t60, loc_23d0);
    t61 = g->edx;
    edx = t61;
    COW_AT(101b07d0)
    wr32(sp0 - 0x23d0u, ebx);
    loc_23d0 = ebx;
    goto L_101b0f98;
L_101b07d6: ;
    COW_AT(101b07d6)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b07dcu);
    t35 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t36 = g->ecx;
    eax = t35;
    ecx = t36;
    COW_AT(101b07dc)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b07e4)
    wr32(sp0 - 0x23d0u, edi);
    t37 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t37);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b07f4u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t37, edi);
    COW_AT(101b07f4)
    t38 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t38);
    eax = t38;
    loc_23d0 = t38;
    goto L_101b07fc;
L_101b082c: ;
    COW_AT(101b082c)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0833u);
    t233 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t234 = g->ecx;
    t235 = g->edx;
    eax = t233;
    ecx = t234;
    edx = t235;
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
    COW_RET(0x101b083du);
    t236 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t237 = g->ecx;
    t238 = g->edx;
    eax = t236;
    ecx = t237;
    edx = t238;
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
            COW_RET(0x101b084du);
            t239 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 0u);
            t240 = g->ecx;
            t241 = g->edx;
            eax = t239;
            ecx = t240;
            edx = t241;
    COW_AT(101b084d)
            wr32(sp0 - 0x23d0u, 1u);
            wr32(sp0 - 0x23d4u, edi);
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0855u);
            cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 1u);
            t242 = g->edx;
            edx = t242;
        }
    }
    COW_AT(101b0855)
    wr32(sp0 - 0x23d0u, edi);
    t243 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t243);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0864u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t243, edi);
    COW_AT(101b0864)
    t244 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t244);
    t245 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t245);
    t246 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t246);
    wr8(self + 0xf120u, 0u);
    g->eax = t245;
    g->edx = t244;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0887u);
    t247 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, rd32(sp0 - 0x23d8u), rd32(sp0 - 0x23d4u), rd32(sp0 - 0x23d0u));
    t248 = g->ecx;
    t249 = g->edx;
    eax = t247;
    ecx = t248;
    edx = t249;
    COW_AT(101b0887)
    if ((int32_t)eax >= 0)
    {
    COW_AT(101b08a1)
        t252 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t252);
        eax = t252;
        edx = rd32(COW_IMG(0x103d3c64u));
        ebp = 1u;
        loc_23d0 = t252;
    }
    else
    {
        ebp = eax;
    COW_AT(101b088d)
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0892u);
        cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t250 = g->ecx;
        ecx = t250;
    COW_AT(101b0892)
        t251 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t251);
        eax = t251;
        edx = rd32(COW_IMG(0x103d3c64u));
        loc_23d0 = t251;
    }
L_101b0936: ;
    COW_AT(101b0936)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b093bu);
    t272 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, loc_23d0);
    t273 = g->ecx;
    t274 = g->edx;
    eax = t272;
    ecx = t273;
    edx = t274;
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
    COW_RET(0x101b094bu);
    t275 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t276 = g->ecx;
    t277 = g->edx;
    eax = t275;
    ecx = t276;
    edx = t277;
    COW_AT(101b094b)
    if (rd8(self + 0xf100u) != 0u)
    {
    COW_AT(101b0959)
        if (rd32(self + 0xf0f4u) != 0u)
        {
            eax = rd32(self + 0xf0f4u);
    COW_AT(101b0974)
            t278 = rd32(COW_IMG(0x1066269cu));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b097fu);
            cow_thiscall(g, COW_IMG(0x101911a0u), t278, 0);
            t279 = g->ecx;
            ecx = t279;
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
    COW_RET(0x101b08bau);
    t253 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t254 = g->ecx;
    t255 = g->edx;
    eax = t253;
    ecx = t254;
    edx = t255;
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
    COW_RET(0x101b08ceu);
    t256 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 1u, 0u);
    eax = t256;
    COW_AT(101b08ce)
    wr32(sp0 - 0x23d0u, edi);
    t257 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t257);
    g->eax = eax;
    g->edx = t257;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b08deu);
    t258 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t257, edi);
    t259 = g->edx;
    eax = t258;
    edx = t259;
    COW_AT(101b08de)
    wr32(sp0 - 0x23d0u, 0x800u);
    wr32(sp0 - 0x23d4u, 0u);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b08ecu);
    cow_call_regs(g, COW_IMG(0x101b20e0u), eax, self, edx, 0, 2, 0u, 0x800u);
    t260 = g->edx;
    edx = t260;
    COW_AT(101b08ec)
    t261 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t261);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t261;
    g->edx = edx;
    t262 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b08fau);
    t263 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t261);
    t264 = g->ecx;
    t265 = g->edx;
    eax = t263;
    ecx = t264;
    edx = t265;
    COW_AT(101b08fa)
    edi = eax;
    goto L_101b0946;
L_101b08fe: ;
    COW_AT(101b08fe)
    wr32(sp0 - 0x23d0u, edi);
    t266 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t266);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b090eu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t266, edi);
    COW_AT(101b090e)
    t267 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t267);
    t268 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t268);
    t269 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t269);
    g->eax = t269;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b092au);
    t270 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t269, t268, t267);
    eax = t270;
    COW_AT(101b092a)
    t271 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t271);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t271;
    ebp = eax;
    loc_23d0 = t271;
    goto L_101b0936;
L_101b0984: ;
    COW_AT(101b0984)
    if (ebp - 0x47u > 0x8au) goto L_101b10eb;
    ebp = ebp - 0x47u;
    COW_AT(101b0993)
    t280 = rd32(COW_IMG(0x101b1334u) + rd8(COW_IMG(0x101b1364u) + ebp) * 4u);
    switch (t280 - RD)
    {
    case 0x101b09a2u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b09a2;
    case 0x101b09d3u: goto L_101b09d3;
    case 0x101b0a53u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0a53;
    case 0x101b0b66u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0b66;
    case 0x101b0c54u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0c54;
    case 0x101b0d08u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0d08;
    case 0x101b0dbeu: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0dbe;
    case 0x101b0ed3u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0ed3;
    case 0x101b0f76u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b0f76;
    case 0x101b1063u: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b1063;
    case 0x101b10acu: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b10ac;
    case 0x101b10ebu: edx = rd8(COW_IMG(0x101b1364u) + ebp); goto L_101b10eb;
    default: rt_fatal(g, COW_IMG(0x101b099bu), "switch");
    }
    return 0;
L_101b09a2: ;
    COW_AT(101b09a2)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b09a9u);
    t525 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t526 = g->ecx;
    t527 = g->edx;
    eax = t525;
    ecx = t526;
    edx = t527;
    COW_AT(101b09a9)
    if ((uint8_t)eax != 0u) goto L_101b0151;
    COW_AT(101b09b1)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b09b7u);
    t528 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t529 = g->ecx;
    t530 = g->edx;
    eax = t528;
    ecx = t529;
    edx = t530;
    COW_AT(101b09b7)
    if (eax == 0u) goto L_101b0151;
    COW_AT(101b09bf)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b09c5u);
    t531 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t532 = g->ecx;
    t533 = g->edx;
    eax = t531;
    ecx = t532;
    edx = t533;
    COW_AT(101b09c5)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b09cd)
    wr32(sp0 - 0x23d0u, edi);
    loc_23d0 = edi;
L_101b0e8c: ;
    COW_AT(101b0e8c)
    t534 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t534);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e9au);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t534, loc_23d0);
    COW_AT(101b0e9a)
    t535 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t535);
    t536 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t536);
    t537 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t537);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0eb6u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t537, t536, t535);
    t538 = g->ecx;
    ecx = t538;
    COW_AT(101b0eb6)
    t539 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t539);
    g->eax = t539;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0ec5u);
    t540 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t539);
    eax = t540;
    COW_AT(101b0ec5)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0eceu);
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    t541 = g->ecx;
    ecx = t541;
    edi = eax;
    COW_AT(101b0ece)
    goto L_101b1167;
L_101b09d3: ;
    COW_AT(101b09d3)
    wr32(sp0 - 0x23d0u, edi);
    t507 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t507);
    g->eax = eax;
    g->edx = t507;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b09e3u);
    t508 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t507, edi);
    t509 = g->edx;
    eax = t508;
    edx = t509;
    COW_AT(101b09e3)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b09eau);
    t510 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t511 = g->edx;
    eax = t510;
    edx = t511;
    COW_AT(101b09ea)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101b09ee)
        g->eax = rd32(self);
        t512 = rd32(self);
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b09f5u);
        t513 = cow_thiscall(g, rd32(t512 + 0x20u), self, 0);
        eax = t513;
    COW_AT(101b09f5)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101b09f9)
            t514 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t514);
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103d3c64u));
            g->edx = t514;
            t515 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0a08u);
            t516 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t514);
            t517 = g->ecx;
            t518 = g->edx;
            eax = t516;
            ecx = t517;
            edx = t518;
    COW_AT(101b0a08)
            wr32(sp0 - 0x23d0u, 0u);
            wr32(sp0 - 0x23d4u, 3u);
            wr32(sp0 - 0x23d8u, 0x15u);
            wr32(sp0 - 0x23dcu, eax);
            g->edx = edx;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0a16u);
            cow_stdcall(g, COW_IMG(0x102bc858u), 4, eax, 0x15u, 3u, 0u);
            t519 = g->edx;
            edx = t519;
            edi = eax;
    COW_AT(101b0a16)
            t520 = rd32(self);
            wr32(self + 0xf128u, 0u);
            g->eax = t520;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0a27u);
            t521 = cow_thiscall(g, rd32(t520 + 0x70u), self, 0);
            eax = t521;
    COW_AT(101b0a27)
            wr8(self + 0xf123u, 0u);
            wr32(sp0 - 0x23d0u, edi);
            t522 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t522);
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b0a3eu);
            cow_stdcall(g, COW_IMG(0x101aff60u), 2, t522, edi);
        }
    }
    COW_AT(101b0a3e)
    t523 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t523);
    t524 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t524);
    eax = t523;
    loc_23d0 = t523;
    loc_23d4 = t524;
    goto L_101b114b;
L_101b0a53: ;
    COW_AT(101b0a53)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0a59u);
    t444 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t445 = g->ecx;
    t446 = g->edx;
    eax = t444;
    ecx = t445;
    edx = t446;
    COW_AT(101b0a59)
    if (eax == 0u) goto L_101b1167;
    COW_AT(101b0a61)
    if ((int32_t)ebx <= 0) goto L_101b1167;
    COW_AT(101b0a69)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0a70u);
    t447 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t448 = g->edx;
    eax = t447;
    edx = t448;
    COW_AT(101b0a70)
    if ((uint8_t)eax == 0u) goto L_101b0a8d;
    COW_AT(101b0a74)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0a7fu);
    t449 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t450 = g->ecx;
    t451 = g->edx;
    eax = t449;
    ecx = t450;
    edx = t451;
    COW_AT(101b0a7f)
    if ((uint8_t)eax == 0u) goto L_101b0a8d;
    COW_AT(101b0a83)
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0a88u);
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t452 = g->ecx;
    ecx = t452;
    COW_AT(101b0a88)
    goto L_101b1167;
L_101b0a8d: ;
    COW_AT(101b0a8d)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0a94u);
    t453 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t454 = g->edx;
    eax = t453;
    edx = t454;
    COW_AT(101b0a94)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b0a98)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0a9fu);
        t455 = cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
        t456 = g->ecx;
        t457 = g->edx;
        eax = t455;
        ecx = t456;
        edx = t457;
    COW_AT(101b0a9f)
        wr32(sp0 - 0x23d0u, 0u);
        wr32(sp0 - 0x23d4u, 3u);
        wr32(sp0 - 0x23d8u, 0x15u);
        wr32(sp0 - 0x23dcu, edi);
        g->eax = eax;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0aabu);
        t458 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 3u, 0u);
        eax = t458;
    COW_AT(101b0aab)
        g->edx = rd32(self);
        t459 = rd32(self);
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0ab2u);
        cow_thiscall(g, rd32(t459 + 0x70u), self, 0);
        t460 = g->edx;
        edx = t460;
    }
    COW_AT(101b0ab2)
    wr32(sp0 - 0x23d0u, edi);
    t461 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t461);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0ac1u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t461, edi);
    COW_AT(101b0ac1)
    t462 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t462);
    t463 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t463);
    t464 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t464);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0addu);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t464, t463, t462);
    t465 = g->ecx;
    ecx = t465;
    COW_AT(101b0add)
    t466 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t466);
    g->eax = t466;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t467 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0aecu);
    t468 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t466);
    t469 = g->edx;
    eax = t468;
    edx = t469;
    COW_AT(101b0aec)
    t470 = rd32(self + 0xf128u) + 1u;
    wr32(self + 0xf128u, t470);
    if (t470 == 1u)
    {
        ecx = t470;
        edi = eax;
        eax = t470;
        goto L_101b039c;
    }
    ecx = t470;
    edi = eax;
    COW_AT(101b0b06)
    wr32(sp0 - 0x23d0u, edi);
    t471 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t471);
    g->eax = t471;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b16u);
    t472 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t471, edi);
    eax = t472;
    COW_AT(101b0b16)
    g->eax = eax;
    g->edx = rd32(self);
    t473 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b1du);
    t474 = cow_thiscall(g, rd32(t473 + 0x1cu), self, 0);
    t475 = g->edx;
    eax = t474;
    edx = t475;
    COW_AT(101b0b1d)
    wr32(sp0 - 0x23d0u, sp0 - 0x21e4u);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b2fu);
    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, sp0 - 0x21e4u);
    t476 = g->ecx;
    ecx = t476;
    ebp = eax + 1u;
    COW_AT(101b0b2f)
    t477 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t477);
    g->eax = t477;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t478 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b3eu);
    t479 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t477);
    t480 = g->edx;
    eax = t479;
    edx = t480;
    COW_AT(101b0b3e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b4cu);
    t481 = cow_thiscall(g, COW_IMG(0x101b4b70u), sp0 - 0x21e4u, 0);
    t482 = g->ecx;
    t483 = g->edx;
    ecx = t482;
    edx = t483;
    edi = eax;
    eax = t481;
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
    COW_RET(0x101b0b5cu);
    t484 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, ebp, ebp);
    t485 = g->ecx;
    t486 = g->edx;
    eax = t484;
    ecx = t485;
    edx = t486;
    COW_AT(101b0b5c)
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b61u);
    t487 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    eax = t487;
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
    COW_RET(0x101b0b89u);
    t421 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t422 = g->ecx;
    t423 = g->edx;
    eax = t421;
    ecx = t422;
    edx = t423;
    COW_AT(101b0b89)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0bd1;
    }
    loc_23d0 = edi;
    COW_AT(101b0b8e)
    t424 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t424);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0b9du);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t424, loc_23d0);
    COW_AT(101b0b9d)
    t425 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t425);
    t426 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t426);
    t427 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t427);
    g->edx = t427;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0bb9u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t427, t426, t425);
    t428 = g->edx;
    edx = t428;
    COW_AT(101b0bb9)
    t429 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t429);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t429;
    t430 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0bc7u);
    t431 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t429);
    t432 = g->ecx;
    eax = t431;
    ecx = t432;
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
    t433 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t433);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0bf1u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t433, rd32(sp0 - 0x23d0u));
    COW_AT(101b0bf1)
    t434 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t434);
    t435 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t435);
    t436 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t436);
    g->eax = t436;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0c0du);
    t437 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t436, t435, t434);
    eax = t437;
    COW_AT(101b0c0d)
    t438 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t438);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t438;
    loc_23d0 = t438;
    goto L_101b1160;
L_101b0c1c: ;
    COW_AT(101b0c1c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0c21u);
    t439 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t440 = g->edx;
    eax = t439;
    edx = t440;
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
    t441 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t441);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0c3fu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t441, rd32(sp0 - 0x23d0u));
    COW_AT(101b0c3f)
    t442 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t442);
    t443 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t443);
    eax = t442;
    loc_23d0 = t442;
    loc_23d4 = t443;
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
    COW_RET(0x101b0c77u);
    t404 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t405 = g->ecx;
    t406 = g->edx;
    eax = t404;
    ecx = t405;
    edx = t406;
    COW_AT(101b0c77)
    wr32(sp0 - 0x23d0u, edi);
    if ((uint8_t)eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0cc0;
    }
    loc_23d0 = edi;
    COW_AT(101b0c7c)
    t407 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t407);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0c8bu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t407, loc_23d0);
    COW_AT(101b0c8b)
    t408 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t408);
    t409 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t409);
    t410 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t410);
    eax = t410;
    edx = t409;
    loc_23d0 = t408;
    loc_23d4 = t409;
    loc_23d8 = t410;
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
    loc_23d0 = rd32(sp0 - 0x23d0u);
    goto L_101b0f82;
L_101b0cd6: ;
    COW_AT(101b0cd6)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0cdbu);
    t416 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t417 = g->ecx;
    eax = t416;
    ecx = t417;
    COW_AT(101b0cdb)
    wr32(sp0 - 0x23d0u, edi);
    if (eax == 0u)
    {
        loc_23d0 = edi;
        goto L_101b0bdb;
    }
    loc_23d0 = edi;
    COW_AT(101b0ce4)
    t418 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t418);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0cf3u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t418, loc_23d0);
    COW_AT(101b0cf3)
    t419 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t419);
    t420 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t420);
    eax = t419;
    loc_23d0 = t419;
    loc_23d4 = t420;
    goto L_101b114b;
L_101b0d08: ;
    COW_AT(101b0d08)
    t367 = rd32(self + 0xf0fcu);
    if (t367 != 1u) goto L_101b0d4b;
    COW_AT(101b0d11)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d17u);
    t368 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t369 = g->edx;
    eax = t368;
    edx = t369;
    COW_AT(101b0d17)
    if (eax == 0u) goto L_101b0d4b;
    COW_AT(101b0d1b)
    g->eax = rd32(self);
    t370 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d22u);
    t371 = cow_thiscall(g, rd32(t370 + 0x70u), self, 0);
    eax = t371;
    COW_AT(101b0d22)
    g->eax = eax;
    g->edx = rd32(self);
    t372 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d29u);
    t373 = cow_thiscall(g, rd32(t372 + 0x68u), self, 0);
    t374 = g->edx;
    eax = t373;
    edx = t374;
    COW_AT(101b0d29)
    wr32(sp0 - 0x23d0u, eax);
    g->eax = rd32(self);
    g->edx = edx;
    t375 = rd32(self);
    g->esp = sp0 - 0x23d0u;
    COW_RET(0x101b0d31u);
    t376 = cow_thiscall(g, rd32(t375 + 0x64u), self, 0);
    t377 = g->edx;
    eax = t376;
    edx = t377;
    goto L_101b0d31;
L_101b0d4b: ;
    COW_AT(101b0d4b)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d52u);
    t387 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t388 = g->ecx;
    t389 = g->edx;
    eax = t387;
    ecx = t388;
    edx = t389;
    COW_AT(101b0d52)
    if ((uint8_t)eax != 0u) goto L_101b0151;
    COW_AT(101b0d5a)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d60u);
    t390 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t391 = g->ecx;
    t392 = g->edx;
    eax = t390;
    ecx = t391;
    edx = t392;
    COW_AT(101b0d60)
    if (eax == 0u) goto L_101b0151;
    COW_AT(101b0d68)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0d6eu);
    t393 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t394 = g->ecx;
    eax = t393;
    ecx = t394;
    COW_AT(101b0d6e)
    if (eax != 0u)
    {
    COW_AT(101b0d76)
        wr32(sp0 - 0x23d0u, edi);
        t395 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d4u, t395);
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0d86u);
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t395, edi);
    COW_AT(101b0d86)
        t396 = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x23d0u, t396);
        t397 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x23d4u, t397);
        t398 = rd32(sp0 - 0x23bcu);
        wr32(sp0 - 0x23d8u, t398);
        g->edx = t398;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0da2u);
        cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t398, t397, t396);
        t399 = g->edx;
        edx = t399;
    COW_AT(101b0da2)
        t400 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t400);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        t401 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0db0u);
        t402 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t400);
        eax = t402;
    COW_AT(101b0db0)
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0db9u);
        cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
        t403 = g->ecx;
        ecx = t403;
        edi = eax;
    COW_AT(101b0db9)
    }
    goto L_101b1167;
L_101b0dbe: ;
    COW_AT(101b0dbe)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0dc4u);
    t338 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    eax = t338;
    COW_AT(101b0dc4)
    wr32(sp0 - 0x23d0u, edi);
    t339 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t339);
    g->eax = eax;
    g->edx = t339;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0dd9u);
    t340 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t339, edi);
    t341 = g->edx;
    edx = t341;
    ebx = (ebx & 0xffffff00u) | eax != 0u;
    eax = t340;
    COW_AT(101b0dd9)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0de0u);
    t342 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t343 = g->edx;
    eax = t342;
    edx = t343;
    COW_AT(101b0de0)
    if ((uint8_t)eax == 0u) goto L_101b0e09;
    COW_AT(101b0de4)
    if ((uint8_t)ebx != 0u) goto L_101b0e09;
    COW_AT(101b0de8)
    t344 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t344);
    t345 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t345);
    t346 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t346);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e04u);
    cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t346, t345, t344);
    t347 = g->ecx;
    ecx = t347;
    COW_AT(101b0e04)
    goto L_101b1167;
L_101b0e09: ;
    COW_AT(101b0e09)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e10u);
    t348 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t349 = g->edx;
    eax = t348;
    edx = t349;
    COW_AT(101b0e10)
    if ((uint8_t)eax == 0u) goto L_101b0e65;
    COW_AT(101b0e14)
    if ((uint8_t)ebx == 0u) goto L_101b10d9;
    COW_AT(101b0e1c)
    t350 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t350);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t350;
    t351 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e2au);
    t352 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t350);
    t353 = g->ecx;
    eax = t352;
    ecx = t353;
    COW_AT(101b0e2a)
    wr32(sp0 - 0x23d0u, eax);
    t354 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t354);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e3au);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t354, eax);
    COW_AT(101b0e3a)
    t355 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t355);
    t356 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t356);
    t357 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t357);
    g->eax = t357;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e56u);
    t358 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t357, t356, t355);
    eax = t358;
    COW_AT(101b0e56)
    t359 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t359);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t359;
    loc_23d0 = t359;
    goto L_101b1160;
L_101b0e65: ;
    COW_AT(101b0e65)
    if ((uint8_t)ebx == 0u) goto L_101b10d9;
    COW_AT(101b0e6d)
    g->eax = rd32(self);
    t360 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e74u);
    t361 = cow_thiscall(g, rd32(t360 + 0x20u), self, 0);
    eax = t361;
    COW_AT(101b0e74)
    if ((uint8_t)eax == 0u) goto L_101b10d9;
    COW_AT(101b0e7c)
    t362 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t362);
    g->eax = eax;
    g->edx = t362;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0e8bu);
    t363 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t362);
    t364 = g->edx;
    eax = t363;
    edx = t364;
    COW_AT(101b0e8b)
    wr32(sp0 - 0x23d0u, eax);
    loc_23d0 = eax;
    goto L_101b0e8c;
L_101b0ed3: ;
    COW_AT(101b0ed3)
    g->edx = edx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0edau);
    t318 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t319 = g->ecx;
    t320 = g->edx;
    eax = t318;
    ecx = t319;
    edx = t320;
    COW_AT(101b0eda)
    if ((uint8_t)eax == 0u) goto L_101b0f19;
    COW_AT(101b0ede)
    wr32(sp0 - 0x23d0u, edi);
    t321 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t321);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0eeeu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t321, edi);
    COW_AT(101b0eee)
    t322 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t322);
    t323 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t323);
    t324 = rd32(sp0 - 0x23bcu);
    wr32(sp0 - 0x23d8u, t324);
    g->eax = t324;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0f0au);
    t325 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t324, t323, t322);
    eax = t325;
    COW_AT(101b0f0a)
    t326 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d0u, t326);
    ecx = rd32(COW_IMG(0x103d3c64u));
    edx = t326;
    loc_23d0 = t326;
    goto L_101b1160;
L_101b0f19: ;
    COW_AT(101b0f19)
    g->eax = rd32(self);
    t327 = rd32(self);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b0f20u);
    t328 = cow_thiscall(g, rd32(t327 + 0x1cu), self, 0);
    t329 = g->ecx;
    eax = t328;
    ecx = t329;
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
        ebx = rd32(sp0 + 0xcu);
        ebp = eax;
L_101b0f3b: ;
    COW_AT(101b0f3b)
        wr32(sp0 - 0x23d0u, edi);
        t330 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d4u, t330);
        g->edx = t330;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0f4bu);
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t330, edi);
        t331 = g->edx;
        edx = t331;
    COW_AT(101b0f4b)
        t332 = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x23d0u, t332);
        wr32(sp0 - 0x23d4u, ebx);
        wr32(sp0 - 0x23d8u, 0x26u);
        g->eax = t332;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0f5du);
        t333 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x26u, ebx, t332);
        eax = t333;
    COW_AT(101b0f5d)
        t334 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x23d0u, t334);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103d3c64u));
        t335 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0f6cu);
        t336 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t334);
        t337 = g->ecx;
        eax = t336;
        ecx = t337;
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
    COW_RET(0x101b0f7du);
    t296 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t297 = g->ecx;
    t298 = g->edx;
    eax = t296;
    ecx = t297;
    edx = t298;
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
    COW_RET(0x101b0fc0u);
    t299 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, loc_23d0);
    t300 = g->ecx;
    t301 = g->edx;
    eax = t299;
    ecx = t300;
    edx = t301;
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
        COW_RET(0x101b0fd4u);
        t302 = cow_stdcall(g, COW_IMG(0x102bc86au), 4, edi, 0u, 0u, 0u);
        t303 = g->edx;
        eax = t302;
        edx = t303;
    COW_AT(101b0fd4)
        wr32(sp0 - 0x23d0u, COW_IMG(0x1037c44cu));
        wr32(sp0 - 0x23d4u, eax);
        wr32(sp0 - 0x23d8u, sp0 - 0x23bcu);
        g->eax = eax;
        g->ecx = sp0 - 0x23bcu;
        g->esp = sp0 - 0x23d0u;
        COW_RET(0x101b0fe6u);
        t304 = cow_cdecl(g, COW_IMG(0x101907a0u), 2, sp0 - 0x23bcu, eax);
        t305 = g->ecx;
        ecx = t305;
        ebp = eax;
        eax = t304;
    COW_AT(101b0fe6)
        wr32(sp0 - 0x23d0u, ebp);
        t306 = rd32(sp0 - 0x23bcu);
        wr32(sp0 - 0x23d4u, t306);
        wr32(sp0 - 0x23d8u, 0u);
        wr32(sp0 - 0x23dcu, edi);
        g->edx = t306;
        g->esp = sp0 - 0x23ccu;
        COW_RET(0x101b0ff7u);
        cow_stdcall(g, COW_IMG(0x102bc86au), 4, edi, 0u, t306, ebp);
        t307 = g->edx;
        edx = t307;
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
            ebx = rd32(sp0 + 0xcu);
            ebp = eax;
L_101b101d: ;
    COW_AT(101b101d)
            wr32(sp0 - 0x23d0u, edi);
            t308 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t308);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            t309 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b102cu);
            t310 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t308, edi);
            eax = t310;
    COW_AT(101b102c)
            t311 = rd32(sp0 + 0x10u);
            wr32(sp0 - 0x23d0u, t311);
            wr32(sp0 - 0x23d4u, ebx);
            wr32(sp0 - 0x23d8u, 0x28u);
            g->edx = t311;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b103eu);
            cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x28u, ebx, t311);
            t312 = g->edx;
            edx = t312;
    COW_AT(101b103e)
            t313 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t313);
            g->eax = rd32(COW_IMG(0x103d3c64u));
            g->edx = edx;
            t314 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b104cu);
            t315 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t313);
            t316 = g->edx;
            eax = t315;
            edx = t316;
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
        COW_RET(0x101b105bu);
        cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, edx, 1, 1, ecx);
        t317 = g->ecx;
        ecx = t317;
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
    COW_RET(0x101b1069u);
    t287 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t288 = g->ecx;
    t289 = g->edx;
    eax = t287;
    ecx = t288;
    edx = t289;
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
    COW_RET(0x101b10b3u);
    t281 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t282 = g->ecx;
    t283 = g->edx;
    eax = t281;
    ecx = t282;
    edx = t283;
    COW_AT(101b10b3)
    if ((uint8_t)eax != 0u) goto L_101b1167;
    COW_AT(101b10bb)
    wr32(sp0 - 0x23d0u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b10c1u);
    t284 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, edi);
    t285 = g->ecx;
    eax = t284;
    ecx = t285;
    COW_AT(101b10c1)
    if (eax == 0u) goto L_101b1167;
L_101b10c9: ;
    COW_AT(101b10c9)
    wr32(sp0 - 0x23d0u, edi);
    t286 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t286);
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b10d9u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t286, edi);
L_101b10d9: ;
    COW_AT(101b10d9)
    t365 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x23d0u, t365);
    t366 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x23d4u, t366);
    eax = t365;
    loc_23d0 = t365;
    loc_23d4 = t366;
    goto L_101b114b;
L_101b10eb: ;
    COW_AT(101b10eb)
    if (rd32(sp0 + 4u) == 0u)
    {
        ebx = rd32(sp0 + 0xcu);
        ebp = rd32(sp0 + 0x10u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ebx = rd32(sp0 + 0xcu);
        ebp = rd32(sp0 + 0x10u);
    COW_AT(101b1104)
        if (rd8(self + 0xf123u) != 0u)
        {
    COW_AT(101b110e)
            wr32(sp0 - 0x23d0u, edi);
            t548 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d4u, t548);
            g->eax = t548;
            g->edx = rd32(COW_IMG(0x103d3c64u));
            t549 = rd32(COW_IMG(0x103d3c64u));
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b111eu);
            t550 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t548, edi);
            t551 = g->edx;
            eax = t550;
            edx = t551;
    COW_AT(101b111e)
            wr32(sp0 - 0x23d0u, ebp);
            wr32(sp0 - 0x23d4u, ebx);
            wr32(sp0 - 0x23d8u, 0x1bu);
            g->eax = eax;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b1129u);
            t552 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, ebx, ebp);
            eax = t552;
    COW_AT(101b1129)
            t553 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
            wr32(sp0 - 0x23d0u, t553);
            g->eax = eax;
            g->edx = t553;
            g->esp = sp0 - 0x23ccu;
            COW_RET(0x101b1138u);
            t554 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t553);
            t555 = g->edx;
            eax = t554;
            edx = t555;
    COW_AT(101b1138)
            edi = eax;
        }
    }
    COW_AT(101b113a)
    wr32(sp0 - 0x23d0u, edi);
    t556 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x23d4u, t556);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t557 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x23ccu;
    COW_RET(0x101b1149u);
    t558 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t556, edi);
    eax = t558;
    COW_AT(101b1149)
    wr32(sp0 - 0x23d0u, ebp);
    wr32(sp0 - 0x23d4u, ebx);
    loc_23d0 = ebp;
    loc_23d4 = ebx;
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
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23bcu;
        g->eax = COW_IMG(0x101b00bau);
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0118u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b012du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0136u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b01ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0205u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0214u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d4u;
        (void)sp0;
        return 1;
    }
    case 0x101b0268u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b026fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0273u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0279u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b027du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0283u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b028bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b029bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b02b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0740u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b0745u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b074cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b075eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0763u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0771u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0777u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b077cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0781u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b078fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
        (void)sp0;
        return 1;
    }
    case 0x101b07d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b07fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0984u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0993u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t loc_23d0;
        uint32_t loc_23d4;
        uint32_t loc_23d8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d8u;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b0f98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b101du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b102cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b103eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b104cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1089u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d0u;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1104u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b110eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b111eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1129u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_23d8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d8 = rd32(sp0 - 0x23d8u);
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1138u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b113au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b1149u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23ccu;
        (void)sp0;
        return 1;
    }
    case 0x101b114bu:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_23d4 = rd32(sp0 - 0x23d4u);
        loc_23d0 = rd32(sp0 - 0x23d0u);
        g->esp = sp0 - 0x23d4u;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
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
