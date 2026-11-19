/* f_0x1026a8cd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1026a8cd(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10068;
    uint32_t loc_10084;
    uint32_t loc_1008c;
    uint32_t loc_10090;
    uint32_t loc_200dc;
    uint32_t loc_30134;
    uint32_t loc_3014c;
    uint32_t loc_30150;
    uint32_t loc_30154;
    uint32_t loc_4178c;
    uint32_t loc_41798;
    uint32_t loc_4179c;
    uint32_t loc_417a0;
    uint32_t loc_8;
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
    uint32_t t569;
    uint32_t t57;
    uint32_t t570;
    uint32_t t571;
    uint32_t t572;
    uint32_t t573;
    uint32_t t574;
    uint32_t t575;
    uint32_t t576;
    uint32_t t577;
    uint32_t t578;
    uint32_t t579;
    uint32_t t58;
    uint32_t t580;
    uint32_t t581;
    uint32_t t582;
    uint32_t t583;
    uint32_t t584;
    uint32_t t585;
    uint32_t t586;
    uint32_t t587;
    uint32_t t588;
    uint32_t t589;
    uint32_t t59;
    uint32_t t590;
    uint32_t t591;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 268228u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026a8dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_1026a8da;
    case 0x1026a957u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_41798 = rd32(sp0 - 0x41798u); goto E_1026a957;
    case 0x1026a967u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026a967;
    case 0x1026a96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026a96e;
    case 0x1026a984u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026a984;
    case 0x1026a993u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026a993;
    case 0x1026a9a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026a9a0;
    case 0x1026a9acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026a9ac;
    case 0x1026a9bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026a9bb;
    case 0x1026a9d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026a9d0;
    case 0x1026a9d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026a9d9;
    case 0x1026aa0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026aa0a;
    case 0x1026aa39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026aa39;
    case 0x1026aa4du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026aa4d;
    case 0x1026aa6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026aa6b;
    case 0x1026aa9au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026aa9a;
    case 0x1026aa9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30150 = rd32(sp0 - 0x30150u); loc_3014c = rd32(sp0 - 0x3014cu); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026aa9f;
    case 0x1026aad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aad4;
    case 0x1026aae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aae5;
    case 0x1026aafau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aafa;
    case 0x1026aaffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aaff;
    case 0x1026ab0du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab0d;
    case 0x1026ab14u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab14;
    case 0x1026ab23u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026ab23;
    case 0x1026ab30u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab30;
    case 0x1026ab37u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab37;
    case 0x1026ab44u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab44;
    case 0x1026ab4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab4b;
    case 0x1026ab50u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026ab50;
    case 0x1026ab6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab6b;
    case 0x1026ab72u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab72;
    case 0x1026ab77u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab77;
    case 0x1026ab84u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab84;
    case 0x1026ab8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab8b;
    case 0x1026ab97u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ab97;
    case 0x1026aba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aba7;
    case 0x1026abaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abae;
    case 0x1026abb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abb3;
    case 0x1026abd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abd2;
    case 0x1026abd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abd9;
    case 0x1026abdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abde;
    case 0x1026abebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abeb;
    case 0x1026abf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abf2;
    case 0x1026abfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026abfe;
    case 0x1026ac0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac0e;
    case 0x1026ac15u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac15;
    case 0x1026ac1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac1a;
    case 0x1026ac39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac39;
    case 0x1026ac40u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac40;
    case 0x1026ac45u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac45;
    case 0x1026ac52u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac52;
    case 0x1026ac59u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac59;
    case 0x1026ac65u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac65;
    case 0x1026ac75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac75;
    case 0x1026ac7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac7c;
    case 0x1026ac81u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ac81;
    case 0x1026acbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10068 = rd32(sp0 - 0x10068u); goto E_1026acbc;
    case 0x1026acc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026acc3;
    case 0x1026acc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026acc8;
    case 0x1026acd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026acd5;
    case 0x1026acdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026acdc;
    case 0x1026ace8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ace8;
    case 0x1026acf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026acf8;
    case 0x1026acffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026acff;
    case 0x1026ad04u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad04;
    case 0x1026ad3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad3f;
    case 0x1026ad46u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad46;
    case 0x1026ad4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad4b;
    case 0x1026ad58u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad58;
    case 0x1026ad5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad5f;
    case 0x1026ad6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad6b;
    case 0x1026ad7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad7b;
    case 0x1026ad82u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad82;
    case 0x1026ad87u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ad87;
    case 0x1026adadu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026adad;
    case 0x1026adb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026adb4;
    case 0x1026add3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026add3;
    case 0x1026addau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026adda;
    case 0x1026addfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026addf;
    case 0x1026adecu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026adec;
    case 0x1026adf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026adf3;
    case 0x1026adffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026adff;
    case 0x1026ae0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae0f;
    case 0x1026ae16u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae16;
    case 0x1026ae1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae1b;
    case 0x1026ae27u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae27;
    case 0x1026ae2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae2e;
    case 0x1026ae3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae3b;
    case 0x1026ae42u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae42;
    case 0x1026ae4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae4e;
    case 0x1026ae5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae5e;
    case 0x1026ae65u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae65;
    case 0x1026ae6au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae6a;
    case 0x1026ae78u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae78;
    case 0x1026ae80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae80;
    case 0x1026ae8du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae8d;
    case 0x1026ae94u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ae94;
    case 0x1026aea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aea0;
    case 0x1026aeb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aeb0;
    case 0x1026aeb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aeb7;
    case 0x1026aebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aebc;
    case 0x1026aed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aed5;
    case 0x1026aedcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aedc;
    case 0x1026aee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aee1;
    case 0x1026aeebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aeeb;
    case 0x1026aefau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026aefa;
    case 0x1026af0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026af0a;
    case 0x1026af11u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026af11;
    case 0x1026af16u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026af16;
    case 0x1026af1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026af1b;
    case 0x1026af33u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); goto E_1026af33;
    case 0x1026af38u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); goto E_1026af38;
    case 0x1026af44u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026af44;
    case 0x1026af5au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026af5a;
    case 0x1026af6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026af6e;
    case 0x1026af7du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026af7d;
    case 0x1026af86u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026af86;
    case 0x1026af92u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026af92;
    case 0x1026afa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026afa5;
    case 0x1026afa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026afa8;
    case 0x1026afaau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026afaa;
    case 0x1026afc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026afc0;
    case 0x1026afddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026afdd;
    case 0x1026afefu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_41798 = rd32(sp0 - 0x41798u); goto E_1026afef;
    case 0x1026affcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026affc;
    case 0x1026b003u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b003;
    case 0x1026b010u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b010;
    case 0x1026b017u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b017;
    case 0x1026b01cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_41798 = rd32(sp0 - 0x41798u); goto E_1026b01c;
    case 0x1026b029u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_41798 = rd32(sp0 - 0x41798u); goto E_1026b029;
    case 0x1026b03au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b03a;
    case 0x1026b046u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b046;
    case 0x1026b04fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b04f;
    case 0x1026b054u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b054;
    case 0x1026b06fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b06f;
    case 0x1026b071u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b071;
    case 0x1026b07du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b07d;
    case 0x1026b092u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b092;
    case 0x1026b0a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b0a0;
    case 0x1026b0acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b0ac;
    case 0x1026b0bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b0bb;
    case 0x1026b0d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b0d1;
    case 0x1026b0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b0e6;
    case 0x1026b0f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b0f9;
    case 0x1026b100u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b100;
    case 0x1026b10du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b10d;
    case 0x1026b114u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b114;
    case 0x1026b120u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b120;
    case 0x1026b12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b12f;
    case 0x1026b145u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b145;
    case 0x1026b15au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b15a;
    case 0x1026b16du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b16d;
    case 0x1026b17bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b17b;
    case 0x1026b194u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b194;
    case 0x1026b19fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b19f;
    case 0x1026b1afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b1af;
    case 0x1026b1c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b1c9;
    case 0x1026b1d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b1d0;
    case 0x1026b1dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b1df;
    case 0x1026b1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b1ec;
    case 0x1026b1f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b1f3;
    case 0x1026b1ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b1ff;
    case 0x1026b20eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b20e;
    case 0x1026b224u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b224;
    case 0x1026b239u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b239;
    case 0x1026b242u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b242;
    case 0x1026b247u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b247;
    case 0x1026b24du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b24d;
    case 0x1026b256u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b256;
    case 0x1026b263u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b263;
    case 0x1026b26au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b26a;
    case 0x1026b276u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b276;
    case 0x1026b285u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b285;
    case 0x1026b29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b29b;
    case 0x1026b2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b2b0;
    case 0x1026b2c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b2c9;
    case 0x1026b2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026b2ee;
    case 0x1026b30cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b30c;
    case 0x1026b313u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b313;
    case 0x1026b318u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b318;
    case 0x1026b325u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b325;
    case 0x1026b32cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b32c;
    case 0x1026b338u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b338;
    case 0x1026b347u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b347;
    case 0x1026b35du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b35d;
    case 0x1026b372u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b372;
    case 0x1026b399u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b399;
    case 0x1026b3a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b3a0;
    case 0x1026b3afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b3af;
    case 0x1026b3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b3b1;
    case 0x1026b3e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b3e7;
    case 0x1026b3e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b3e9;
    case 0x1026b3f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b3f2;
    case 0x1026b3f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b3f4;
    case 0x1026b3f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b3f9;
    case 0x1026b406u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b406;
    case 0x1026b41cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b41c;
    case 0x1026b42fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b42f;
    case 0x1026b43cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b43c;
    case 0x1026b443u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b443;
    case 0x1026b44fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b44f;
    case 0x1026b45eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b45e;
    case 0x1026b474u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b474;
    case 0x1026b489u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b489;
    case 0x1026b4b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b4b1;
    case 0x1026b4cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b4cd;
    case 0x1026b4d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b4d2;
    case 0x1026b4dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b4df;
    case 0x1026b4e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b4e6;
    case 0x1026b4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b4fa;
    case 0x1026b4ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_10068 = rd32(sp0 - 0x10068u); loc_8 = rd32(sp0 - 8u); goto E_1026b4ff;
    case 0x1026b50cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b50c;
    case 0x1026b513u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b513;
    case 0x1026b520u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b520;
    case 0x1026b527u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b527;
    case 0x1026b54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b54e;
    case 0x1026b569u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b569;
    case 0x1026b578u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b578;
    case 0x1026b587u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b587;
    case 0x1026b59du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b59d;
    case 0x1026b5afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b5af;
    case 0x1026b5b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b5b1;
    case 0x1026b5b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b5b3;
    case 0x1026b5b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b5b8;
    case 0x1026b5bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_10090 = rd32(sp0 - 0x10090u); goto E_1026b5bd;
    case 0x1026b5d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b5d0;
    case 0x1026b5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b5de;
    case 0x1026b605u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b605;
    case 0x1026b60cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b60c;
    case 0x1026b61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30134 = rd32(sp0 - 0x30134u); goto E_1026b61b;
    case 0x1026b628u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b628;
    case 0x1026b62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b62f;
    case 0x1026b634u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30134 = rd32(sp0 - 0x30134u); goto E_1026b634;
    case 0x1026b641u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b641;
    case 0x1026b648u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b648;
    case 0x1026b663u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b663;
    case 0x1026b66au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b66a;
    case 0x1026b66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b66f;
    case 0x1026b67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b67c;
    case 0x1026b683u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b683;
    case 0x1026b68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b68f;
    case 0x1026b697u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b697;
    case 0x1026b6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6b6;
    case 0x1026b6bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6bd;
    case 0x1026b6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6c2;
    case 0x1026b6cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6cf;
    case 0x1026b6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6d6;
    case 0x1026b6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6e2;
    case 0x1026b6eau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b6ea;
    case 0x1026b709u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b709;
    case 0x1026b710u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b710;
    case 0x1026b715u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b715;
    case 0x1026b722u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b722;
    case 0x1026b729u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b729;
    case 0x1026b735u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b735;
    case 0x1026b73du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b73d;
    case 0x1026b778u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b778;
    case 0x1026b77fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b77f;
    case 0x1026b784u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b784;
    case 0x1026b791u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b791;
    case 0x1026b798u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b798;
    case 0x1026b7a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b7a4;
    case 0x1026b7acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b7ac;
    case 0x1026b7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b7e7;
    case 0x1026b7eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b7ee;
    case 0x1026b7f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b7f3;
    case 0x1026b800u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b800;
    case 0x1026b807u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b807;
    case 0x1026b813u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b813;
    case 0x1026b81bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b81b;
    case 0x1026b831u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b831;
    case 0x1026b838u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); goto E_1026b838;
    case 0x1026b842u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); goto E_1026b842;
    case 0x1026b850u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b850;
    case 0x1026b858u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b858;
    case 0x1026b865u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b865;
    case 0x1026b86cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b86c;
    case 0x1026b876u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); goto E_1026b876;
    case 0x1026b889u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b889;
    case 0x1026b891u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b891;
    case 0x1026b89eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b89e;
    case 0x1026b8a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b8a5;
    case 0x1026b8afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); goto E_1026b8af;
    case 0x1026b8bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b8bb;
    case 0x1026b8cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); goto E_1026b8cd;
    case 0x1026b8d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); loc_30154 = rd32(sp0 - 0x30154u); goto E_1026b8d7;
    case 0x1026b8e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); loc_30154 = rd32(sp0 - 0x30154u); goto E_1026b8e4;
    case 0x1026b8f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b8f1;
    case 0x1026b8f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b8f8;
    case 0x1026b904u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b904;
    case 0x1026b91au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b91a;
    case 0x1026b953u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b953;
    case 0x1026b965u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4178c = rd32(sp0 - 0x4178cu); loc_30154 = rd32(sp0 - 0x30154u); goto E_1026b965;
    case 0x1026b972u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b972;
    case 0x1026b979u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b979;
    case 0x1026b985u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b985;
    case 0x1026b994u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b994;
    case 0x1026b997u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b997;
    case 0x1026b9a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9a8;
    case 0x1026b9b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9b4;
    case 0x1026b9bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9bd;
    case 0x1026b9c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30154 = rd32(sp0 - 0x30154u); loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9c2;
    case 0x1026b9d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_417a0 = rd32(sp0 - 0x417a0u); loc_30154 = rd32(sp0 - 0x30154u); loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9d1;
    case 0x1026b9e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026b9e0;
    case 0x1026b9f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9f2;
    case 0x1026b9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026b9f7;
    case 0x1026ba04u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026ba04;
    case 0x1026ba10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ba10;
    case 0x1026ba1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ba1f;
    case 0x1026ba35u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ba35;
    case 0x1026ba4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ba4e;
    case 0x1026ba74u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ba74;
    case 0x1026ba89u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026ba89;
    case 0x1026ba9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026ba9f;
    case 0x1026baaau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026baaa;
    case 0x1026bab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bab6;
    case 0x1026baddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026badd;
    case 0x1026baf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026baf4;
    case 0x1026bb1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bb1b;
    case 0x1026bb22u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bb22;
    case 0x1026bb31u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026bb31;
    case 0x1026bb33u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); goto E_1026bb33;
    case 0x1026bb57u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026bb57;
    case 0x1026bb59u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026bb59;
    case 0x1026bb5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026bb5b;
    case 0x1026bb64u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026bb64;
    case 0x1026bb89u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bb89;
    case 0x1026bba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bba4;
    case 0x1026bbacu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10090 = rd32(sp0 - 0x10090u); loc_10084 = rd32(sp0 - 0x10084u); loc_8 = rd32(sp0 - 8u); goto E_1026bbac;
    case 0x1026bbb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbb1;
    case 0x1026bbb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbb6;
    case 0x1026bbc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbc3;
    case 0x1026bbcau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbca;
    case 0x1026bbdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbde;
    case 0x1026bbebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbeb;
    case 0x1026bbf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bbf2;
    case 0x1026bc08u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc08;
    case 0x1026bc23u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc23;
    case 0x1026bc32u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc32;
    case 0x1026bc41u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc41;
    case 0x1026bc57u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc57;
    case 0x1026bc69u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc69;
    case 0x1026bc6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc6b;
    case 0x1026bc6du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bc6d;
    case 0x1026bc72u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026bc72;
    case 0x1026bc77u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_41798 = rd32(sp0 - 0x41798u); loc_30154 = rd32(sp0 - 0x30154u); loc_1008c = rd32(sp0 - 0x1008cu); goto E_1026bc77;
    case 0x1026bcb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026bcb9;
    case 0x1026bcd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bcd4;
    case 0x1026bce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); loc_30154 = rd32(sp0 - 0x30154u); loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026bce3;
    case 0x1026bcecu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); loc_30154 = rd32(sp0 - 0x30154u); loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026bcec;
    case 0x1026bceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); loc_30154 = rd32(sp0 - 0x30154u); loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026bcee;
    case 0x1026bd0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd0c;
    case 0x1026bd13u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd13;
    case 0x1026bd1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd1f;
    case 0x1026bd31u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); loc_30154 = rd32(sp0 - 0x30154u); loc_30150 = rd32(sp0 - 0x30150u); loc_200dc = rd32(sp0 - 0x200dcu); goto E_1026bd31;
    case 0x1026bd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd4c;
    case 0x1026bd53u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd53;
    case 0x1026bd5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd5f;
    case 0x1026bd6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd6e;
    case 0x1026bd7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd7e;
    case 0x1026bd85u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd85;
    case 0x1026bd96u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_4179c = rd32(sp0 - 0x4179cu); goto E_1026bd96;
    case 0x1026bd9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bd9b;
    case 0x1026bda0u: ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026bda0;
    case 0x1026bdafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1026bdaf;
    default: break;
    }
#endif

    COW_AT(1026a8cd)
    wr32(sp0 - 4u, in_ebp);
    COW_AT(1026a8da)
    wr32(sp0 - 0x417a8u, in_esi);
    wr32(sp0 - 0x417acu, in_edi);
    edi = sp0 - 0x417a4u;
    eax = 0xccccccccu;
    ecx = 0x105e8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x41794u, arg1);
    wr32(sp0 - 0x10088u, 0x21u);
    wr32(sp0 - 0x10080u, 0u);
    wr32(sp0 - 0x1007cu, 0x64u);
    wr32(sp0 - 0x41788u, sp0 - 0x10064u);
    wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
    wr32(sp0 - 0x417a4u, 1u);
    wr32(sp0 - 0x10094u, 0u);
    wr32(sp0 - 0x41798u, 0u);
    wr32(sp0 - 0x417b0u, arg1);
    g->eax = arg1;
    g->ecx = sp0 - 0x10064u;
    g->edx = sp0 - 0x401b4u;
    g->esp = sp0 - 0x417b0u;
    t1 = cow_stdcall(g, COW_IMG(0x1026d76cu), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026a957)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0a68u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0a68u));   /* kernel32.dll!OutputDebugStringA */
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026a967)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t7 = g->edx;
    edx = t7;
    COW_AT(1026a96e)
    wr32(sp0 - 0x200dcu, 0xffffffffu);
    wr32(sp0 - 0x30150u, 0u);
    loc_200dc = 0xffffffffu;
    loc_30150 = 0u;
L_1026a993: ;
    COW_AT(1026a993)
    if ((int32_t)loc_30150 >= 100) goto L_1026bcb9;
    COW_AT(1026a9a0)
    wr32(sp0 - 0x3014cu, 0u);
    loc_3014c = 0u;
L_1026a9bb: ;
    COW_AT(1026a9bb)
    if ((int32_t)loc_3014c >= (int32_t)rd32(rd32(sp0 - 0x41794u) + 4u)) goto L_1026aa9f;
    COW_AT(1026a9d0)
    if (loc_3014c != 0u)
    {
    COW_AT(1026aa0a)
        t9 = loc_3014c * 0x10058u + rd32(rd32(sp0 - 0x41794u)) - 0x10058u;
        wr32(loc_3014c * 0x10058u + rd32(rd32(sp0 - 0x41794u)) + 0x14u, t9);
    }
    else
    {
    COW_AT(1026a9d9)
        wr32(loc_3014c * 0x10058u + rd32(rd32(sp0 - 0x41794u)) + 0x14u, sp0 - 0x401b4u);
        t8 = rd32(rd32(sp0 - 0x41794u));
        wr32(sp0 - 0x4019cu, t8);
    }
    COW_AT(1026aa39)
    if (loc_3014c != rd32(rd32(sp0 - 0x41794u) + 4u) - 1u)
    {
    COW_AT(1026aa6b)
        t10 = loc_3014c * 0x10058u + rd32(rd32(sp0 - 0x41794u)) + 0x10058u;
        wr32(loc_3014c * 0x10058u + rd32(rd32(sp0 - 0x41794u)) + 0x18u, t10);
    }
    else
    {
    COW_AT(1026aa4d)
        wr32(loc_3014c * 0x10058u + rd32(rd32(sp0 - 0x41794u)) + 0x18u, 0u);
    }
    COW_AT(1026aa9a)
    COW_AT(1026a9ac)
    wr32(sp0 - 0x3014cu, loc_3014c + 1u);
    loc_3014c = loc_3014c + 1u;
    goto L_1026a9bb;
L_1026a984: ;
    COW_AT(1026a984)
    t198 = rd32(sp0 - 0x30150u) + 1u;
    wr32(sp0 - 0x30150u, t198);
    loc_200dc = rd32(sp0 - 0x200dcu);
    loc_30150 = t198;
    goto L_1026a993;
L_1026aa9f: ;
    COW_AT(1026aa9f)
    wr32(sp0 - 0x401a0u, 0u);
    wr32(sp0 - 0x10050u, 0u);
    wr32(sp0 - 0x1004cu, 0u);
    wr32(sp0 - 0x417b0u, 0u);
    wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
    g->eax = sp0 - 0x10064u;
    g->ecx = sp0 - 0x200ecu;
    g->esp = sp0 - 0x417a8u;
    t11 = cow_cdecl(g, COW_IMG(0x1026ccc5u), 3, sp0 - 0x200ecu, 0u, rd32(sp0 - 0x417acu));
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    COW_AT(1026aad4)
    wr32(sp0 - 0x417b0u, 0u);
    wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
    g->esp = sp0 - 0x417a8u;
    cow_cdecl(g, COW_IMG(0x1026ccc5u), 3, sp0 - 0x30144u, 0u, rd32(sp0 - 0x417acu));
    COW_AT(1026aae5)
    if (rd8(rd32(rd32(sp0 - 0x41794u) + 0xcu)) == 2u)
    {
        eax = rd32(sp0 - 0x41794u);
        ecx = rd32(rd32(sp0 - 0x41794u) + 0xcu);
        edx = rd8(rd32(rd32(sp0 - 0x41794u) + 0xcu));
        goto L_1026aaff;
    }
    edx = rd8(rd32(rd32(sp0 - 0x41794u) + 0xcu));
    COW_AT(1026aafa)
    COW_AT(1026bd9b)
    loc_200dc = rd32(sp0 - 0x200dcu);
L_1026bcb9: ;
    COW_AT(1026bcb9)
    wr32(sp0 - 0x417a4u, 0u);
    t561 = rd32(sp0 - 0x1004cu);
    wr32(sp0 - 0x30154u, t561);
    loc_30154 = t561;
L_1026bce3: ;
    COW_AT(1026bce3)
    if (loc_30154 != 0u) goto L_1026bcee;
    COW_AT(1026bcec)
    COW_AT(1026bd31)
    wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b4u, 0x8004667eu);
    wr32(sp0 - 0x417b8u, loc_200dc);
    g->eax = sp0 - 0x417a4u;
    g->ecx = loc_200dc;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t562 = cow_stdcall(g, rd32(COW_IMG(0x10329464u)), 3, loc_200dc, 0x8004667eu, sp0 - 0x417a4u);   /* ws2_32.dll!ioctlsocket */
    t563 = g->ecx;
    t564 = g->edx;
    eax = t562;
    ecx = t563;
    edx = t564;
    COW_AT(1026bd4c)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t565 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t566 = g->ecx;
    eax = t565;
    ecx = t566;
    COW_AT(1026bd53)
    t567 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417b0u, t567);
    g->esp = sp0 - 0x417a4u;
    cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, ecx, t567, 1, 3, t567, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t568 = g->ecx;
    t569 = g->edx;
    ecx = t568;
    edx = t569;
    COW_AT(1026bd5f)
    t570 = rd32(sp0 - 0x41794u);
    wr32(sp0 - 0x417b0u, t570);
    g->eax = t570;
    g->ecx = ecx;
    g->esp = sp0 - 0x417a4u;
    t571 = cow_call_regs(g, COW_IMG(0x1026d751u), g->eax, g->ecx, edx, 1, 3, t570, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t572 = g->ecx;
    t573 = g->edx;
    eax = t571;
    ecx = t572;
    edx = t573;
    COW_AT(1026bd6e)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0d2cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t574 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0d2cu));   /* kernel32.dll!OutputDebugStringA */
    t575 = g->ecx;
    t576 = g->edx;
    eax = t574;
    ecx = t575;
    edx = t576;
    COW_AT(1026bd7e)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t577 = g->edx;
    edx = t577;
    COW_AT(1026bd85)
    t578 = rd32(sp0 - 0x41794u);
    wr32(t578 + 0x10u, 1u);
    ecx = t578;
    COW_AT(1026bda0)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = 0u;
    g->edx = edx;
    t579 = rd32(sp0 - 0x417a8u);
    t580 = rd32(sp0 - 0x417acu);
    g->esp = sp0 - 4u;
    t581 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t582 = g->edx;
    eax = t581;
    edx = t582;
    esi = t579;
    edi = t580;
    COW_AT(1026bdaf)
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1026aaff: ;
    COW_AT(1026aaff)
    wr32(sp0 - 0x417b0u, 6u);
    wr32(sp0 - 0x417b4u, 1u);
    wr32(sp0 - 0x417b8u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t13 = cow_stdcall(g, rd32(COW_IMG(0x1032948cu)), 3, 2u, 1u, 6u);   /* ws2_32.dll!socket */
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(1026ab0d)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t16 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(1026ab14)
    wr32(sp0 - 0x200dcu, eax);
    if (eax != 0xffffffffu)
    {
        loc_200dc = eax;
        goto L_1026ab50;
    }
    loc_200dc = eax;
    COW_AT(1026ab23)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0a80u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t19 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0a80u));   /* kernel32.dll!OutputDebugStringA */
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(1026ab30)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t22 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1026ab37)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t25 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(1026ab44)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t28 = g->edx;
    edx = t28;
    COW_AT(1026ab4b)
    goto L_1026a984;
L_1026ab50: ;
    COW_AT(1026ab50)
    wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b4u, 0x8004667eu);
    wr32(sp0 - 0x417b8u, loc_200dc);
    g->eax = sp0 - 0x417a4u;
    g->ecx = loc_200dc;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t29 = cow_stdcall(g, rd32(COW_IMG(0x10329464u)), 3, loc_200dc, 0x8004667eu, sp0 - 0x417a4u);   /* ws2_32.dll!ioctlsocket */
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(1026ab6b)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t32 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(1026ab72)
    if (eax != 0xffffffffu) goto L_1026abb3;
    COW_AT(1026ab77)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0a90u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t35 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0a90u));   /* kernel32.dll!OutputDebugStringA */
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(1026ab84)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t38 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t39 = g->ecx;
    eax = t38;
    ecx = t39;
    COW_AT(1026ab8b)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->edx = sp0 - 0x200ecu;
    g->esp = sp0 - 0x417a4u;
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t41 = g->ecx;
    t42 = g->edx;
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(1026ab97)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t43 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(1026aba7)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t46 = g->edx;
    edx = t46;
    COW_AT(1026abae)
    goto L_1026a984;
L_1026abb3: ;
    COW_AT(1026abb3)
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b8u, 1u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t47 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417c0u, t47);
    g->eax = sp0 - 0x417a4u;
    g->ecx = t47;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t48 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t47, 0xffffu, 1u, sp0 - 0x417a4u, 4u);   /* ws2_32.dll!setsockopt */
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(1026abd2)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t51 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(1026abd9)
    if (eax != 0xffffffffu) goto L_1026ac1a;
    COW_AT(1026abde)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0aa0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t54 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0aa0u));   /* kernel32.dll!OutputDebugStringA */
    t55 = g->ecx;
    t56 = g->edx;
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(1026abeb)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t57 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t58 = g->ecx;
    eax = t57;
    ecx = t58;
    COW_AT(1026abf2)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->edx = sp0 - 0x200ecu;
    g->esp = sp0 - 0x417a4u;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    COW_AT(1026abfe)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t62 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(1026ac0e)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t65 = g->edx;
    edx = t65;
    COW_AT(1026ac15)
    goto L_1026a984;
L_1026ac1a: ;
    COW_AT(1026ac1a)
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b8u, 4u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t66 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417c0u, t66);
    g->eax = sp0 - 0x417a4u;
    g->ecx = t66;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t67 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t66, 0xffffu, 4u, sp0 - 0x417a4u, 4u);   /* ws2_32.dll!setsockopt */
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(1026ac39)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t70 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t71 = g->ecx;
    t72 = g->edx;
    eax = t70;
    ecx = t71;
    edx = t72;
    COW_AT(1026ac40)
    if (eax != 0xffffffffu) goto L_1026ac81;
    COW_AT(1026ac45)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0ab4u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t73 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0ab4u));   /* kernel32.dll!OutputDebugStringA */
    t74 = g->ecx;
    t75 = g->edx;
    eax = t73;
    ecx = t74;
    edx = t75;
    COW_AT(1026ac52)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t76 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t77 = g->ecx;
    eax = t76;
    ecx = t77;
    COW_AT(1026ac59)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->edx = sp0 - 0x200ecu;
    g->esp = sp0 - 0x417a4u;
    t78 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t79 = g->ecx;
    t80 = g->edx;
    eax = t78;
    ecx = t79;
    edx = t80;
    COW_AT(1026ac65)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t81 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t82 = g->ecx;
    t83 = g->edx;
    eax = t81;
    ecx = t82;
    edx = t83;
    COW_AT(1026ac75)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t84 = g->edx;
    edx = t84;
    COW_AT(1026ac7c)
    goto L_1026a984;
L_1026ac81: ;
    COW_AT(1026ac81)
    wr32(sp0 - 0x10068u, 0x10000u);
    wr32(sp0 - 0x30158u, 4u);
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
    wr32(sp0 - 0x417b8u, 0x1002u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t85 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417c0u, t85);
    g->eax = 4u;
    g->ecx = sp0 - 0x10068u;
    g->edx = t85;
    g->esp = sp0 - 0x417acu;
    t86 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t85, 0xffffu, 0x1002u, sp0 - 0x10068u, 4u);   /* ws2_32.dll!setsockopt */
    t87 = g->ecx;
    t88 = g->edx;
    eax = t86;
    ecx = t87;
    edx = t88;
    COW_AT(1026acbc)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t89 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t90 = g->ecx;
    t91 = g->edx;
    eax = t89;
    ecx = t90;
    edx = t91;
    COW_AT(1026acc3)
    if (eax != 0xffffffffu) goto L_1026ad04;
    COW_AT(1026acc8)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0ac8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t92 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0ac8u));   /* kernel32.dll!OutputDebugStringA */
    t93 = g->ecx;
    t94 = g->edx;
    eax = t92;
    ecx = t93;
    edx = t94;
    COW_AT(1026acd5)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t95 = g->ecx;
    t96 = g->edx;
    ecx = t95;
    edx = t96;
    COW_AT(1026acdc)
    t97 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417b0u, t97);
    g->eax = t97;
    g->esp = sp0 - 0x417a4u;
    t98 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, ecx, edx, 1, 3, t97, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t99 = g->ecx;
    t100 = g->edx;
    eax = t98;
    ecx = t99;
    edx = t100;
    COW_AT(1026ace8)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t101 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t102 = g->ecx;
    t103 = g->edx;
    eax = t101;
    ecx = t102;
    edx = t103;
    COW_AT(1026acf8)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t104 = g->edx;
    edx = t104;
    COW_AT(1026acff)
    goto L_1026a984;
L_1026ad04: ;
    COW_AT(1026ad04)
    wr32(sp0 - 0x10068u, 0x10000u);
    wr32(sp0 - 0x30158u, 4u);
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
    wr32(sp0 - 0x417b8u, 0x1001u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t105 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417c0u, t105);
    g->eax = t105;
    g->ecx = 4u;
    g->edx = sp0 - 0x10068u;
    g->esp = sp0 - 0x417acu;
    t106 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t105, 0xffffu, 0x1001u, sp0 - 0x10068u, 4u);   /* ws2_32.dll!setsockopt */
    t107 = g->ecx;
    t108 = g->edx;
    eax = t106;
    ecx = t107;
    edx = t108;
    COW_AT(1026ad3f)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t109 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t110 = g->ecx;
    t111 = g->edx;
    eax = t109;
    ecx = t110;
    edx = t111;
    COW_AT(1026ad46)
    if (eax != 0xffffffffu) goto L_1026ad87;
    COW_AT(1026ad4b)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0adcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t112 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0adcu));   /* kernel32.dll!OutputDebugStringA */
    t113 = g->ecx;
    t114 = g->edx;
    eax = t112;
    ecx = t113;
    edx = t114;
    COW_AT(1026ad58)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t115 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t116 = g->edx;
    eax = t115;
    edx = t116;
    COW_AT(1026ad5f)
    t117 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417b0u, t117);
    g->eax = eax;
    g->esp = sp0 - 0x417a4u;
    t118 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, t117, edx, 1, 3, t117, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t119 = g->ecx;
    t120 = g->edx;
    eax = t118;
    ecx = t119;
    edx = t120;
    COW_AT(1026ad6b)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t121 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t122 = g->ecx;
    t123 = g->edx;
    eax = t121;
    ecx = t122;
    edx = t123;
    COW_AT(1026ad7b)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t124 = g->edx;
    edx = t124;
    COW_AT(1026ad82)
    goto L_1026a984;
L_1026ad87: ;
    COW_AT(1026ad87)
    wr16(sp0 - 0x200ecu, 2u);
    wr32(sp0 - 0x200e8u, 0u);
    t125 = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x41794u) + 8u);
    wr32(sp0 - 0x417b0u, t125);
    g->eax = t125;
    g->ecx = ecx;
    g->edx = rd32(sp0 - 0x41794u);
    t126 = rd32(sp0 - 0x41794u);
    g->esp = sp0 - 0x417acu;
    t127 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t125);   /* ws2_32.dll!htons */
    t128 = g->ecx;
    t129 = g->edx;
    eax = t127;
    ecx = t128;
    edx = t129;
    COW_AT(1026adad)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x417acu;
    t130 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    eax = t130;
    COW_AT(1026adb4)
    wr16(sp0 - 0x200eau, (uint16_t)eax);
    wr32(sp0 - 0x417b0u, 0x10u);
    wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
    t131 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417b8u, t131);
    g->eax = eax;
    g->ecx = sp0 - 0x200ecu;
    g->edx = t131;
    g->esp = sp0 - 0x417acu;
    t132 = cow_stdcall(g, rd32(COW_IMG(0x10329454u)), 3, t131, sp0 - 0x200ecu, 0x10u);   /* ws2_32.dll!bind */
    t133 = g->ecx;
    t134 = g->edx;
    eax = t132;
    ecx = t133;
    edx = t134;
    COW_AT(1026add3)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t135 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t136 = g->ecx;
    t137 = g->edx;
    eax = t135;
    ecx = t136;
    edx = t137;
    COW_AT(1026adda)
    if (eax != 0xffffffffu) goto L_1026ae1b;
    COW_AT(1026addf)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0af0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t138 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0af0u));   /* kernel32.dll!OutputDebugStringA */
    t139 = g->ecx;
    t140 = g->edx;
    eax = t138;
    ecx = t139;
    edx = t140;
    COW_AT(1026adec)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t141 = g->ecx;
    t142 = g->edx;
    ecx = t141;
    edx = t142;
    COW_AT(1026adf3)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = sp0 - 0x200ecu;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t143 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t144 = g->ecx;
    t145 = g->edx;
    eax = t143;
    ecx = t144;
    edx = t145;
    COW_AT(1026adff)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t146 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t147 = g->ecx;
    t148 = g->edx;
    eax = t146;
    ecx = t147;
    edx = t148;
    COW_AT(1026ae0f)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t149 = g->edx;
    edx = t149;
    COW_AT(1026ae16)
    goto L_1026a984;
L_1026ae1b: ;
    COW_AT(1026ae1b)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->esp = sp0 - 0x417acu;
    t150 = cow_call_regs(g, COW_IMG(0x1026d654u), g->eax, sp0 - 0x200ecu, edx, 1, 1, sp0 - 0x200ecu);
    t151 = g->ecx;
    t152 = g->edx;
    eax = t150;
    ecx = t151;
    edx = t152;
    COW_AT(1026ae27)
    if (eax != 0u) goto L_1026ae6a;
    COW_AT(1026ae2e)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0af8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t153 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0af8u));   /* kernel32.dll!OutputDebugStringA */
    t154 = g->ecx;
    t155 = g->edx;
    eax = t153;
    ecx = t154;
    edx = t155;
    COW_AT(1026ae3b)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t156 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t157 = g->ecx;
    eax = t156;
    ecx = t157;
    COW_AT(1026ae42)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->edx = sp0 - 0x200ecu;
    g->esp = sp0 - 0x417a4u;
    t158 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t159 = g->ecx;
    t160 = g->edx;
    eax = t158;
    ecx = t159;
    edx = t160;
    COW_AT(1026ae4e)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t161 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t162 = g->ecx;
    t163 = g->edx;
    eax = t161;
    ecx = t162;
    edx = t163;
    COW_AT(1026ae5e)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t164 = g->edx;
    edx = t164;
    COW_AT(1026ae65)
    goto L_1026a984;
L_1026ae6a: ;
    COW_AT(1026ae6a)
    wr32(sp0 - 0x417b0u, 8u);
    wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
    g->eax = sp0 - 0x200ecu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t165 = cow_cdecl(g, COW_IMG(0x1026d2f9u), 4, sp0 - 0x200ecu, 8u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t166 = g->ecx;
    t167 = g->edx;
    eax = t165;
    ecx = t166;
    edx = t167;
    COW_AT(1026ae78)
    if (eax != 0xffffffffu) goto L_1026aebc;
    COW_AT(1026ae80)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b08u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t168 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b08u));   /* kernel32.dll!OutputDebugStringA */
    t169 = g->ecx;
    t170 = g->edx;
    eax = t168;
    ecx = t169;
    edx = t170;
    COW_AT(1026ae8d)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t171 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t172 = g->edx;
    eax = t171;
    edx = t172;
    COW_AT(1026ae94)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t173 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), sp0 - 0x200ecu, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t174 = g->ecx;
    t175 = g->edx;
    eax = t173;
    ecx = t174;
    edx = t175;
    COW_AT(1026aea0)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t176 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t177 = g->ecx;
    t178 = g->edx;
    eax = t176;
    ecx = t177;
    edx = t178;
    COW_AT(1026aeb0)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t179 = g->edx;
    edx = t179;
    COW_AT(1026aeb7)
    goto L_1026a984;
L_1026aebc: ;
    COW_AT(1026aebc)
    t180 = rd32(rd32(sp0 - 0x41794u) + 4u);
    wr32(sp0 - 0x417b0u, t180);
    t181 = rd32(sp0 - 0x200dcu);
    wr32(sp0 - 0x417b4u, t181);
    g->eax = t180;
    g->ecx = t181;
    g->edx = rd32(sp0 - 0x41794u);
    t182 = rd32(sp0 - 0x41794u);
    g->esp = sp0 - 0x417acu;
    t183 = cow_stdcall(g, rd32(COW_IMG(0x10329440u)), 2, t181, t180);   /* ws2_32.dll!listen */
    t184 = g->ecx;
    t185 = g->edx;
    eax = t183;
    ecx = t184;
    edx = t185;
    COW_AT(1026aed5)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t186 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t187 = g->ecx;
    t188 = g->edx;
    eax = t186;
    ecx = t187;
    edx = t188;
    COW_AT(1026aedc)
    if (eax != 0xffffffffu) goto L_1026af16;
    COW_AT(1026aee1)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b18u));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t189 = cow_call_regs(g, COW_IMG(0x10316d20u), g->eax, g->ecx, edx, 1, 1, COW_IMG(0x103b0b18u));
    t190 = g->ecx;
    eax = t189;
    ecx = t190;
    COW_AT(1026aeeb)
    wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
    g->eax = eax;
    g->edx = sp0 - 0x200ecu;
    g->esp = sp0 - 0x417a4u;
    t191 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, sp0 - 0x200ecu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t192 = g->ecx;
    t193 = g->edx;
    eax = t191;
    ecx = t192;
    edx = t193;
    COW_AT(1026aefa)
    wr32(sp0 - 0x417b0u, 0x3e8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t194 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
    t195 = g->ecx;
    t196 = g->edx;
    eax = t194;
    ecx = t195;
    edx = t196;
    COW_AT(1026af0a)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t197 = g->edx;
    edx = t197;
    COW_AT(1026af11)
    goto L_1026a984;
L_1026af16: ;
    COW_AT(1026af16)
    g->eax = eax;
    g->esp = sp0 - 0x417acu;
    t199 = cow_fastcall(g, COW_IMG(0x1026d6bcu), ecx, edx, 0);
    eax = t199;
    COW_AT(1026af1b)
    wr32(sp0 - 0x4179cu, eax);
    if (rd8(rd32(rd32(sp0 - 0x41794u) + 0xcu)) == 2u)
    {
        ecx = rd32(rd32(sp0 - 0x41794u) + 0xcu);
        edx = rd8(rd32(rd32(sp0 - 0x41794u) + 0xcu));
        loc_4179c = eax;
        goto L_1026af38;
    }
    edx = rd8(rd32(rd32(sp0 - 0x41794u) + 0xcu));
    COW_AT(1026af33)
    COW_AT(1026bd96)
    loc_200dc = rd32(sp0 - 0x200dcu);
    goto L_1026bcb9;
L_1026af38: ;
    COW_AT(1026af38)
    wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
    g->eax = sp0 - 0x41784u;
    g->esp = sp0 - 0x417a4u;
    t200 = cow_cdecl(g, COW_IMG(0x1026d26cu), 3, sp0 - 0x41784u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    eax = t200;
    COW_AT(1026af44)
    wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
    wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
    g->esp = sp0 - 0x417a4u;
    cow_cdecl(g, COW_IMG(0x1026d27fu), 4, sp0 - 0x200ecu, sp0 - 0x41784u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026af5a)
    t201 = rd32(sp0 - 0x1004cu);
    wr32(sp0 - 0x30154u, t201);
    eax = sp0 - 0x10064u;
    loc_30154 = t201;
L_1026af7d: ;
    COW_AT(1026af7d)
    if (loc_30154 == 0u) goto L_1026afaa;
    COW_AT(1026af86)
    if (rd32(loc_30154 + 0x24u) != 6u)
    {
        ecx = loc_30154;
    COW_AT(1026af92)
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, loc_30154);
        g->esp = sp0 - 0x417a4u;
        cow_cdecl(g, COW_IMG(0x1026d27fu), 4, loc_30154, sp0 - 0x41784u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026afa5)
        loc_30154 = rd32(sp0 - 0x30154u);
    }
    COW_AT(1026afa8)
    COW_AT(1026af6e)
    t202 = rd32(loc_30154 + 0x18u);
    wr32(sp0 - 0x30154u, t202);
    eax = t202;
    loc_30154 = t202;
    goto L_1026af7d;
L_1026afaa: ;
    COW_AT(1026afaa)
    wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
    t203 = rd32(sp0 - 0x41794u) + 0x20u;
    wr32(sp0 - 0x417b4u, t203);
    g->esp = sp0 - 0x417a4u;
    cow_cdecl(g, COW_IMG(0x1026d27fu), 4, t203, sp0 - 0x41784u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026afc0)
    t204 = rd32(sp0 - 0x41794u);
    wr32(sp0 - 0x417b0u, t204);
    wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
    wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
    g->eax = t204;
    g->ecx = sp0 - 0x10080u;
    g->edx = sp0 - 0x41784u;
    g->esp = sp0 - 0x417acu;
    t205 = cow_cdecl(g, COW_IMG(0x1026d32bu), 3, sp0 - 0x41784u, sp0 - 0x10080u, t204);
    t206 = g->ecx;
    t207 = g->edx;
    eax = t205;
    ecx = t206;
    edx = t207;
    COW_AT(1026afdd)
    wr32(sp0 - 0x41798u, eax);
    if (eax != 0xffffffffu)
    {
        loc_41798 = eax;
    COW_AT(1026b01c)
        if ((int32_t)loc_41798 <= 0) goto L_1026bc77;
    COW_AT(1026b029)
        t220 = rd32(sp0 - 0x1004cu);
        wr32(sp0 - 0x30154u, t220);
        loc_30154 = t220;
L_1026b046: ;
    COW_AT(1026b046)
        if (loc_30154 != 0u) goto L_1026b054;
    COW_AT(1026b04f)
    COW_AT(1026b5bd)
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        g->eax = sp0 - 0x41784u;
        g->edx = edx;
        g->esp = sp0 - 0x417a8u;
        t221 = cow_thiscall_cdecl(g, COW_IMG(0x1026d2bdu), sp0 - 0x200ecu, 3, sp0 - 0x200ecu, sp0 - 0x41784u, rd32(sp0 - 0x417acu));
        t222 = g->edx;
        eax = t221;
        edx = t222;
    COW_AT(1026b5d0)
        if ((eax & 8u) == 0u) goto L_1026b997;
    COW_AT(1026b5de)
        wr32(sp0 - 0x30158u, 0x10u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30158u);
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        t223 = rd32(sp0 - 0x200dcu);
        wr32(sp0 - 0x417b8u, t223);
        g->eax = sp0 - 0x30144u;
        g->ecx = t223;
        g->edx = sp0 - 0x30158u;
        g->esp = sp0 - 0x417acu;
        t224 = cow_stdcall(g, rd32(COW_IMG(0x10329444u)), 3, t223, sp0 - 0x30144u, sp0 - 0x30158u);   /* ws2_32.dll!accept */
        t225 = g->ecx;
        t226 = g->edx;
        eax = t224;
        ecx = t225;
        edx = t226;
    COW_AT(1026b605)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t227 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t228 = g->ecx;
        t229 = g->edx;
        eax = t227;
        ecx = t228;
        edx = t229;
    COW_AT(1026b60c)
        wr32(sp0 - 0x30134u, eax);
        if (eax != 0xffffffffu)
        {
            loc_30134 = eax;
            goto L_1026b634;
        }
    COW_AT(1026b61b)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0bf8u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t230 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0bf8u));   /* kernel32.dll!OutputDebugStringA */
        t231 = g->ecx;
        t232 = g->edx;
        eax = t230;
        ecx = t231;
        edx = t232;
    COW_AT(1026b628)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t233 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t234 = g->ecx;
        t235 = g->edx;
        eax = t233;
        ecx = t234;
        edx = t235;
    COW_AT(1026b62f)
    }
    else
    {
    COW_AT(1026afef)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b20u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t208 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b20u));   /* kernel32.dll!OutputDebugStringA */
        t209 = g->ecx;
        t210 = g->edx;
        eax = t208;
        ecx = t209;
        edx = t210;
    COW_AT(1026affc)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t211 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t212 = g->ecx;
        t213 = g->edx;
        eax = t211;
        ecx = t212;
        edx = t213;
    COW_AT(1026b003)
        wr32(sp0 - 0x417b0u, 0x3e8u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t214 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x3e8u);   /* kernel32.dll!Sleep */
        t215 = g->ecx;
        t216 = g->edx;
        eax = t214;
        ecx = t215;
        edx = t216;
    COW_AT(1026b010)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t217 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t218 = g->ecx;
        t219 = g->edx;
        eax = t217;
        ecx = t218;
        edx = t219;
    COW_AT(1026b017)
    }
    goto L_1026af16;
L_1026b03a: ;
    COW_AT(1026b03a)
    wr32(sp0 - 0x30154u, loc_417a0);
    edx = loc_417a0;
    loc_30154 = loc_417a0;
    goto L_1026b046;
L_1026b054: ;
    COW_AT(1026b054)
    t429 = rd32(loc_30154 + 0x18u);
    wr32(sp0 - 0x417a0u, t429);
    if (rd32(loc_30154 + 0x24u) != 6u)
    {
        loc_417a0 = t429;
    COW_AT(1026b071)
        if (rd32(loc_30154 + 0x20u) == 0u)
        {
            eax = loc_30154;
            goto L_1026b0e6;
        }
        eax = loc_30154;
    COW_AT(1026b07d)
        t430 = rd32(sp0 - 0x4179cu) - rd32(loc_30154 + 0x1cu);
        wr32(sp0 - 0x417b0u, t430);
        g->eax = eax;
        g->esp = sp0 - 0x417acu;
        t431 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t430);
        eax = t431;
    COW_AT(1026b092)
        if ((int32_t)eax <= (int32_t)rd32(rd32(sp0 - 0x30154u) + 0x20u))
        {
            loc_30154 = rd32(sp0 - 0x30154u);
            loc_417a0 = rd32(sp0 - 0x417a0u);
            goto L_1026b0e6;
        }
        ecx = rd32(sp0 - 0x30154u);
    COW_AT(1026b0a0)
        t432 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t432);
        g->edx = t432;
        g->esp = sp0 - 0x417a4u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, t432, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t433 = g->ecx;
        t434 = g->edx;
        ecx = t433;
        edx = t434;
    COW_AT(1026b0ac)
        t435 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t435);
        g->eax = t435;
        g->esp = sp0 - 0x417a4u;
        t436 = cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t435, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        eax = t436;
    COW_AT(1026b0bb)
        t437 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t437);
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        g->esp = sp0 - 0x417a4u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), t437, 4, sp0 - 0x401b4u, t437, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b0d1)
        wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
        loc_417a0 = rd32(sp0 - 0x417a0u);
    }
    else
    {
        loc_417a0 = t429;
    COW_AT(1026b06f)
    }
    goto L_1026b03a;
L_1026b0e6: ;
    COW_AT(1026b0e6)
    wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
    wr32(sp0 - 0x417b4u, loc_30154);
    g->eax = eax;
    g->ecx = sp0 - 0x41784u;
    g->edx = loc_30154;
    g->esp = sp0 - 0x417a8u;
    t438 = cow_cdecl(g, COW_IMG(0x1026d2ebu), 3, loc_30154, sp0 - 0x41784u, rd32(sp0 - 0x417acu));
    t439 = g->ecx;
    t440 = g->edx;
    eax = t438;
    ecx = t439;
    edx = t440;
    COW_AT(1026b0f9)
    if (eax == 0u)
    {
    COW_AT(1026b15a)
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        t452 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b4u, t452);
        g->eax = t452;
        g->esp = sp0 - 0x417a8u;
        t453 = cow_thiscall_cdecl(g, COW_IMG(0x1026d2bdu), ecx, 3, t452, sp0 - 0x41784u, rd32(sp0 - 0x417acu));
        eax = t453;
    COW_AT(1026b16d)
        if (!(eax & 1u)) goto L_1026b5b8;
        eax = eax & 1u;
L_1026b17b: ;
    COW_AT(1026b17b)
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        t454 = rd32(sp0 - 0x30154u) + 0x803cu;
        wr32(sp0 - 0x417b4u, t454);
        g->eax = eax;
        g->esp = sp0 - 0x417a8u;
        t455 = cow_thiscall_cdecl(g, COW_IMG(0x1026d159u), sp0 - 0x30148u, 3, t454, sp0 - 0x30148u, rd32(sp0 - 0x417acu));
        eax = t455;
    COW_AT(1026b194)
        if ((int32_t)eax < 0) goto L_1026b5b1;
    COW_AT(1026b19f)
        if (rd32(rd32(sp0 - 0x30148u) + 0xcu) != 0u) goto L_1026b2c9;
    COW_AT(1026b1af)
        wr32(sp0 - 0x417b0u, 2u);
        wr32(sp0 - 0x417b4u, 4u);
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        t456 = rd32(rd32(sp0 - 0x30154u) + 0x10u);
        wr32(sp0 - 0x417bcu, t456);
        g->eax = t456;
        g->ecx = sp0 - 8u;
        g->edx = rd32(sp0 - 0x30154u);
        t457 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        t458 = cow_stdcall(g, rd32(COW_IMG(0x10329414u)), 4, t456, sp0 - 8u, 4u, 2u);   /* ws2_32.dll!recv */
        t459 = g->ecx;
        t460 = g->edx;
        eax = t458;
        ecx = t459;
        edx = t460;
    COW_AT(1026b1c9)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t461 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t462 = g->ecx;
        t463 = g->edx;
        eax = t461;
        ecx = t462;
        edx = t463;
    COW_AT(1026b1d0)
        wr32(sp0 - 0x10090u, eax);
        if (eax != 0u)
        {
            loc_10090 = eax;
            goto L_1026b239;
        }
    COW_AT(1026b1df)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b4cu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t464 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b4cu));   /* kernel32.dll!OutputDebugStringA */
        t465 = g->ecx;
        t466 = g->edx;
        eax = t464;
        ecx = t465;
        edx = t466;
    COW_AT(1026b1ec)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t467 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t468 = g->edx;
        eax = t467;
        edx = t468;
    COW_AT(1026b1f3)
        t469 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t469);
        g->eax = eax;
        g->esp = sp0 - 0x417a4u;
        t470 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), t469, 3, t469, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t471 = g->ecx;
        eax = t470;
        ecx = t471;
    COW_AT(1026b1ff)
        t472 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t472);
        g->edx = t472;
        g->esp = sp0 - 0x417a4u;
        cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t472, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t473 = g->edx;
        edx = t473;
    COW_AT(1026b20e)
        t474 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t474);
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        g->esp = sp0 - 0x417a4u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), sp0 - 0x401b4u, 4, sp0 - 0x401b4u, t474, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b224)
        wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
L_1026b5b8: ;
    COW_AT(1026b5b8)
        loc_417a0 = rd32(sp0 - 0x417a0u);
    }
    else
    {
    COW_AT(1026b100)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b38u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t441 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b38u));   /* kernel32.dll!OutputDebugStringA */
        t442 = g->ecx;
        t443 = g->edx;
        eax = t441;
        ecx = t442;
        edx = t443;
    COW_AT(1026b10d)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t444 = g->ecx;
        t445 = g->edx;
        ecx = t444;
        edx = t445;
    COW_AT(1026b114)
        t446 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t446);
        g->eax = t446;
        g->edx = edx;
        g->esp = sp0 - 0x417a4u;
        t447 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, t446, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t448 = g->edx;
        eax = t447;
        edx = t448;
    COW_AT(1026b120)
        t449 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t449);
        g->ecx = t449;
        g->esp = sp0 - 0x417a4u;
        cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t449, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t450 = g->ecx;
        ecx = t450;
    COW_AT(1026b12f)
        t451 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t451);
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        g->esp = sp0 - 0x417a4u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), ecx, 4, sp0 - 0x401b4u, t451, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b145)
        wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
        loc_417a0 = rd32(sp0 - 0x417a0u);
    }
    goto L_1026b03a;
L_1026b239: ;
    COW_AT(1026b239)
    if ((int32_t)loc_10090 >= 4) goto L_1026b247;
    COW_AT(1026b242)
    goto L_1026b5b8;
L_1026b247: ;
    COW_AT(1026b247)
    if ((int32_t)rd32(sp0 - 8u) < 8) goto L_1026b256;
    COW_AT(1026b24d)
    if ((int32_t)rd32(sp0 - 8u) <= 2920) goto L_1026b2b0;
L_1026b256: ;
    COW_AT(1026b256)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b60u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t476 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b60u));   /* kernel32.dll!OutputDebugStringA */
    t477 = g->ecx;
    t478 = g->edx;
    eax = t476;
    ecx = t477;
    edx = t478;
    COW_AT(1026b263)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t479 = g->ecx;
    t480 = g->edx;
    ecx = t479;
    edx = t480;
    COW_AT(1026b26a)
    t481 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t481);
    g->eax = t481;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t482 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, t481, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t483 = g->edx;
    eax = t482;
    edx = t483;
    COW_AT(1026b276)
    t484 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t484);
    g->ecx = t484;
    g->esp = sp0 - 0x417a4u;
    cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t484, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t485 = g->ecx;
    ecx = t485;
    COW_AT(1026b285)
    t486 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t486);
    wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
    g->esp = sp0 - 0x417a4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), ecx, 4, sp0 - 0x401b4u, t486, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b29b)
    wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
    goto L_1026b5b8;
L_1026b2b0: ;
    COW_AT(1026b2b0)
    t475 = rd32(sp0 - 8u);
    wr32(rd32(rd32(sp0 - 0x30148u)), t475);
    wr32(sp0 - 0x10084u, 0u);
    loc_10084 = 0u;
    loc_8 = rd32(sp0 - 8u);
L_1026b2ee: ;
    COW_AT(1026b2ee)
    wr32(sp0 - 0x417b0u, sp0 - 0x10068u);
    wr32(sp0 - 0x417b4u, 0x4004667fu);
    t489 = rd32(rd32(sp0 - 0x30154u) + 0x10u);
    wr32(sp0 - 0x417b8u, t489);
    g->eax = rd32(sp0 - 0x30154u);
    g->ecx = t489;
    g->edx = sp0 - 0x10068u;
    t490 = rd32(sp0 - 0x30154u);
    g->esp = sp0 - 0x417acu;
    t491 = cow_stdcall(g, rd32(COW_IMG(0x10329464u)), 3, t489, 0x4004667fu, sp0 - 0x10068u);   /* ws2_32.dll!ioctlsocket */
    t492 = g->ecx;
    t493 = g->edx;
    eax = t491;
    ecx = t492;
    edx = t493;
    COW_AT(1026b30c)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t494 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t495 = g->ecx;
    t496 = g->edx;
    eax = t494;
    ecx = t495;
    edx = t496;
    COW_AT(1026b313)
    if (eax != 0xffffffffu)
    {
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        loc_10068 = rd32(sp0 - 0x10068u);
        goto L_1026b372;
    }
    COW_AT(1026b318)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b80u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t497 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b80u));   /* kernel32.dll!OutputDebugStringA */
    t498 = g->ecx;
    t499 = g->edx;
    eax = t497;
    ecx = t498;
    edx = t499;
    COW_AT(1026b325)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t500 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t501 = g->ecx;
    eax = t500;
    ecx = t501;
    COW_AT(1026b32c)
    t502 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t502);
    g->edx = t502;
    g->esp = sp0 - 0x417a4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, t502, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t503 = g->ecx;
    t504 = g->edx;
    ecx = t503;
    edx = t504;
    COW_AT(1026b338)
    t505 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t505);
    g->eax = t505;
    g->esp = sp0 - 0x417a4u;
    t506 = cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t505, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    eax = t506;
    COW_AT(1026b347)
    t507 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t507);
    wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
    g->esp = sp0 - 0x417a4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), t507, 4, sp0 - 0x401b4u, t507, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b35d)
    wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
    goto L_1026b5b8;
L_1026b2c9: ;
    COW_AT(1026b2c9)
    t487 = rd32(rd32(rd32(sp0 - 0x30148u))) - rd32(rd32(sp0 - 0x30148u) + 0xcu);
    wr32(sp0 - 8u, t487);
    t488 = rd32(rd32(sp0 - 0x30148u) + 0xcu);
    wr32(sp0 - 0x10084u, t488);
    loc_10084 = t488;
    loc_8 = t487;
    goto L_1026b2ee;
L_1026b372: ;
    COW_AT(1026b372)
    wr32(sp0 - 0x417b0u, 0u);
    wr32(sp0 - 0x417b4u, loc_8);
    t508 = loc_10084 + rd32(rd32(sp0 - 0x30148u));
    wr32(sp0 - 0x417b8u, t508);
    t509 = rd32(rd32(sp0 - 0x30154u) + 0x10u);
    wr32(sp0 - 0x417bcu, t509);
    g->eax = t508;
    g->ecx = rd32(sp0 - 0x30154u);
    g->edx = t509;
    t510 = rd32(sp0 - 0x30154u);
    g->esp = sp0 - 0x417acu;
    t511 = cow_stdcall(g, rd32(COW_IMG(0x10329414u)), 4, t509, t508, loc_8, 0u);   /* ws2_32.dll!recv */
    t512 = g->ecx;
    t513 = g->edx;
    eax = t511;
    ecx = t512;
    edx = t513;
    COW_AT(1026b399)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t514 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t515 = g->ecx;
    t516 = g->edx;
    eax = t514;
    ecx = t515;
    edx = t516;
    COW_AT(1026b3a0)
    wr32(sp0 - 0x10090u, eax);
    if ((int32_t)eax > 0)
    {
        loc_10090 = eax;
        goto L_1026b3b1;
    }
    loc_10090 = eax;
    COW_AT(1026b3af)
    loc_10084 = rd32(sp0 - 0x10084u);
    loc_8 = rd32(sp0 - 8u);
    loc_10068 = rd32(sp0 - 0x10068u);
L_1026b3f9: ;
    COW_AT(1026b3f9)
    if ((int32_t)loc_10090 <= 0) goto L_1026b4ff;
    COW_AT(1026b406)
    if (loc_10084 != rd32(rd32(rd32(sp0 - 0x30148u))))
    {
        eax = rd32(sp0 - 0x30148u);
        ecx = rd32(rd32(sp0 - 0x30148u));
        edx = loc_10084;
        goto L_1026b4d2;
    }
    COW_AT(1026b41c)
    if (rd32(rd32(rd32(sp0 - 0x30148u)) + 4u) == rd32(COW_IMG(0x103907e0u))) goto L_1026b489;
    eax = rd32(sp0 - 0x30148u);
    ecx = rd32(rd32(sp0 - 0x30148u));
    edx = rd32(rd32(rd32(sp0 - 0x30148u)) + 4u);
    COW_AT(1026b42f)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0b98u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t520 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0b98u));   /* kernel32.dll!OutputDebugStringA */
    t521 = g->ecx;
    t522 = g->edx;
    eax = t520;
    ecx = t521;
    edx = t522;
    COW_AT(1026b43c)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t523 = g->ecx;
    t524 = g->edx;
    ecx = t523;
    edx = t524;
    COW_AT(1026b443)
    t525 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t525);
    g->eax = t525;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t526 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, t525, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t527 = g->edx;
    eax = t526;
    edx = t527;
    COW_AT(1026b44f)
    t528 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t528);
    g->ecx = t528;
    g->esp = sp0 - 0x417a4u;
    cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t528, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t529 = g->ecx;
    ecx = t529;
    COW_AT(1026b45e)
    t530 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t530);
    wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
    g->esp = sp0 - 0x417a4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), ecx, 4, sp0 - 0x401b4u, t530, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b474)
    wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
    goto L_1026b5b8;
L_1026b3b1: ;
    COW_AT(1026b3b1)
    t517 = loc_10090 + rd32(sp0 - 0x10084u);
    wr32(sp0 - 0x10084u, t517);
    t518 = rd32(sp0 - 8u) - loc_10090;
    wr32(sp0 - 8u, t518);
    t519 = rd32(sp0 - 0x10068u) - loc_10090;
    wr32(sp0 - 0x10068u, t519);
    if (t518 != 0u)
    {
        eax = t517;
        ecx = t518;
        edx = t519;
        loc_10084 = t517;
        loc_8 = t518;
        loc_10068 = t519;
        goto L_1026b3e9;
    }
    eax = t517;
    ecx = t518;
    edx = t519;
    loc_10084 = t517;
    loc_8 = t518;
    loc_10068 = t519;
    COW_AT(1026b3e7)
    goto L_1026b3f9;
L_1026b3e9: ;
    COW_AT(1026b3e9)
    if ((int32_t)loc_10068 > 0) goto L_1026b3f4;
    COW_AT(1026b3f2)
    goto L_1026b3f9;
L_1026b3f4: ;
    COW_AT(1026b3f4)
    goto L_1026b372;
L_1026b489: ;
    COW_AT(1026b489)
    t531 = rd32(sp0 - 0x4179cu);
    wr32(rd32(sp0 - 0x30154u) + 0x1cu, t531);
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t532 = rd32(sp0 - 0x30154u) + 0x803cu;
    wr32(sp0 - 0x417b4u, t532);
    g->edx = t532;
    g->esp = sp0 - 0x417a8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), sp0 - 0x10078u, 3, t532, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t533 = g->edx;
    edx = t533;
    COW_AT(1026b4b1)
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t534 = rd32(sp0 - 0x30154u) + 0xc044u;
    wr32(sp0 - 0x417b4u, t534);
    g->eax = sp0 - 0x10078u;
    g->esp = sp0 - 0x417a8u;
    t535 = cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), t534, 3, t534, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    eax = t535;
    COW_AT(1026b4cd)
    COW_AT(1026b4fa)
    COW_AT(1026b5af)
    COW_AT(1026b5b3)
    goto L_1026b17b;
L_1026b4d2: ;
    COW_AT(1026b4d2)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0bb4u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t536 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0bb4u));   /* kernel32.dll!OutputDebugStringA */
    t537 = g->ecx;
    t538 = g->edx;
    eax = t536;
    ecx = t537;
    edx = t538;
    COW_AT(1026b4df)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    COW_AT(1026b4e6)
    t539 = rd32(sp0 - 0x10084u);
    wr32(rd32(sp0 - 0x30148u) + 0xcu, t539);
    goto L_1026b5b8;
L_1026b4ff: ;
    COW_AT(1026b4ff)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0bd0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t540 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0bd0u));   /* kernel32.dll!OutputDebugStringA */
    t541 = g->ecx;
    t542 = g->edx;
    eax = t540;
    ecx = t541;
    edx = t542;
    COW_AT(1026b50c)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t543 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t544 = g->ecx;
    t545 = g->edx;
    eax = t543;
    ecx = t544;
    edx = t545;
    COW_AT(1026b513)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0bf0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t546 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0bf0u));   /* kernel32.dll!OutputDebugStringA */
    t547 = g->ecx;
    t548 = g->edx;
    eax = t546;
    ecx = t547;
    edx = t548;
    COW_AT(1026b520)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    COW_AT(1026b527)
    t549 = rd32(rd32(sp0 - 0x30148u));
    wr32(t549, 0u);
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t550 = rd32(sp0 - 0x30154u) + 0x803cu;
    wr32(sp0 - 0x417b4u, t550);
    g->esp = sp0 - 0x417a8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), t550, 3, t550, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t551 = g->ecx;
    ecx = t551;
    COW_AT(1026b54e)
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t552 = rd32(sp0 - 0x30154u) + 0xc044u;
    wr32(sp0 - 0x417b4u, t552);
    g->eax = t552;
    g->edx = sp0 - 0x10078u;
    g->esp = sp0 - 0x417a8u;
    t553 = cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), ecx, 3, t552, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t554 = g->edx;
    eax = t553;
    edx = t554;
    COW_AT(1026b569)
    t555 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t555);
    g->eax = eax;
    g->esp = sp0 - 0x417a4u;
    t556 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), t555, 3, t555, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t557 = g->ecx;
    eax = t556;
    ecx = t557;
    COW_AT(1026b578)
    t558 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t558);
    g->edx = t558;
    g->esp = sp0 - 0x417a4u;
    cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t558, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t559 = g->edx;
    edx = t559;
    COW_AT(1026b587)
    t560 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t560);
    wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
    g->esp = sp0 - 0x417a4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), sp0 - 0x401b4u, 4, sp0 - 0x401b4u, t560, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b59d)
    wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
    goto L_1026b5b8;
L_1026b5b1: ;
    COW_AT(1026b5b1)
    goto L_1026b5b8;
L_1026b634: ;
    COW_AT(1026b634)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0c08u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t236 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0c08u));   /* kernel32.dll!OutputDebugStringA */
    t237 = g->ecx;
    t238 = g->edx;
    eax = t236;
    ecx = t237;
    edx = t238;
    COW_AT(1026b641)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t239 = g->ecx;
    ecx = t239;
    COW_AT(1026b648)
    wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b4u, 0x8004667eu);
    t240 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417b8u, t240);
    g->eax = t240;
    g->ecx = ecx;
    g->edx = sp0 - 0x417a4u;
    g->esp = sp0 - 0x417acu;
    t241 = cow_stdcall(g, rd32(COW_IMG(0x10329464u)), 3, t240, 0x8004667eu, sp0 - 0x417a4u);   /* ws2_32.dll!ioctlsocket */
    t242 = g->ecx;
    t243 = g->edx;
    eax = t241;
    ecx = t242;
    edx = t243;
    COW_AT(1026b663)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t244 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t245 = g->ecx;
    t246 = g->edx;
    eax = t244;
    ecx = t245;
    edx = t246;
    COW_AT(1026b66a)
    if (eax != 0xffffffffu) goto L_1026b697;
    COW_AT(1026b66f)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0c18u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t247 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0c18u));   /* kernel32.dll!OutputDebugStringA */
    t248 = g->ecx;
    t249 = g->edx;
    eax = t247;
    ecx = t248;
    edx = t249;
    COW_AT(1026b67c)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t250 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t251 = g->edx;
    eax = t250;
    edx = t251;
    COW_AT(1026b683)
    t252 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417b0u, t252);
    g->eax = eax;
    g->esp = sp0 - 0x417a4u;
    t253 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, t252, edx, 1, 3, t252, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t254 = g->ecx;
    t255 = g->edx;
    eax = t253;
    ecx = t254;
    edx = t255;
    COW_AT(1026b68f)
    goto L_1026af16;
L_1026b697: ;
    COW_AT(1026b697)
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b8u, 1u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t256 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417c0u, t256);
    g->eax = t256;
    g->ecx = ecx;
    g->edx = sp0 - 0x417a4u;
    g->esp = sp0 - 0x417acu;
    t257 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t256, 0xffffu, 1u, sp0 - 0x417a4u, 4u);   /* ws2_32.dll!setsockopt */
    t258 = g->ecx;
    t259 = g->edx;
    eax = t257;
    ecx = t258;
    edx = t259;
    COW_AT(1026b6b6)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t260 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t261 = g->ecx;
    t262 = g->edx;
    eax = t260;
    ecx = t261;
    edx = t262;
    COW_AT(1026b6bd)
    if (eax != 0xffffffffu) goto L_1026b6ea;
    COW_AT(1026b6c2)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0c30u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t263 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0c30u));   /* kernel32.dll!OutputDebugStringA */
    t264 = g->ecx;
    t265 = g->edx;
    eax = t263;
    ecx = t264;
    edx = t265;
    COW_AT(1026b6cf)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t266 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t267 = g->edx;
    eax = t266;
    edx = t267;
    COW_AT(1026b6d6)
    t268 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417b0u, t268);
    g->eax = eax;
    g->esp = sp0 - 0x417a4u;
    t269 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, t268, edx, 1, 3, t268, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t270 = g->ecx;
    t271 = g->edx;
    eax = t269;
    ecx = t270;
    edx = t271;
    COW_AT(1026b6e2)
    goto L_1026af16;
L_1026b6ea: ;
    COW_AT(1026b6ea)
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b8u, 4u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t272 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417c0u, t272);
    g->eax = t272;
    g->ecx = ecx;
    g->edx = sp0 - 0x417a4u;
    g->esp = sp0 - 0x417acu;
    t273 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t272, 0xffffu, 4u, sp0 - 0x417a4u, 4u);   /* ws2_32.dll!setsockopt */
    t274 = g->ecx;
    t275 = g->edx;
    eax = t273;
    ecx = t274;
    edx = t275;
    COW_AT(1026b709)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t276 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t277 = g->ecx;
    t278 = g->edx;
    eax = t276;
    ecx = t277;
    edx = t278;
    COW_AT(1026b710)
    if (eax != 0xffffffffu) goto L_1026b73d;
    COW_AT(1026b715)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0c4cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t279 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0c4cu));   /* kernel32.dll!OutputDebugStringA */
    t280 = g->ecx;
    t281 = g->edx;
    eax = t279;
    ecx = t280;
    edx = t281;
    COW_AT(1026b722)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t282 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t283 = g->edx;
    eax = t282;
    edx = t283;
    COW_AT(1026b729)
    t284 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417b0u, t284);
    g->eax = eax;
    g->esp = sp0 - 0x417a4u;
    t285 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, t284, edx, 1, 3, t284, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t286 = g->ecx;
    t287 = g->edx;
    eax = t285;
    ecx = t286;
    edx = t287;
    COW_AT(1026b735)
    goto L_1026af16;
L_1026b73d: ;
    COW_AT(1026b73d)
    wr32(sp0 - 0x10068u, 0x10000u);
    wr32(sp0 - 0x30158u, 4u);
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
    wr32(sp0 - 0x417b8u, 0x1002u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t288 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417c0u, t288);
    g->eax = sp0 - 0x10068u;
    g->ecx = t288;
    g->edx = 4u;
    g->esp = sp0 - 0x417acu;
    t289 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t288, 0xffffu, 0x1002u, sp0 - 0x10068u, 4u);   /* ws2_32.dll!setsockopt */
    t290 = g->ecx;
    t291 = g->edx;
    eax = t289;
    ecx = t290;
    edx = t291;
    COW_AT(1026b778)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t292 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t293 = g->ecx;
    t294 = g->edx;
    eax = t292;
    ecx = t293;
    edx = t294;
    COW_AT(1026b77f)
    if (eax != 0xffffffffu) goto L_1026b7ac;
    COW_AT(1026b784)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0c68u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t295 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0c68u));   /* kernel32.dll!OutputDebugStringA */
    t296 = g->ecx;
    t297 = g->edx;
    eax = t295;
    ecx = t296;
    edx = t297;
    COW_AT(1026b791)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x417acu;
    t298 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t299 = g->ecx;
    eax = t298;
    ecx = t299;
    COW_AT(1026b798)
    t300 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417b0u, t300);
    g->eax = eax;
    g->esp = sp0 - 0x417a4u;
    t301 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, ecx, t300, 1, 3, t300, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t302 = g->ecx;
    t303 = g->edx;
    eax = t301;
    ecx = t302;
    edx = t303;
    COW_AT(1026b7a4)
    goto L_1026af16;
L_1026b7ac: ;
    COW_AT(1026b7ac)
    wr32(sp0 - 0x10068u, 0x10000u);
    wr32(sp0 - 0x30158u, 4u);
    wr32(sp0 - 0x417b0u, 4u);
    wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
    wr32(sp0 - 0x417b8u, 0x1001u);
    wr32(sp0 - 0x417bcu, 0xffffu);
    t304 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417c0u, t304);
    g->eax = 4u;
    g->ecx = sp0 - 0x10068u;
    g->edx = t304;
    g->esp = sp0 - 0x417acu;
    t305 = cow_stdcall(g, rd32(COW_IMG(0x1032945cu)), 5, t304, 0xffffu, 0x1001u, sp0 - 0x10068u, 4u);   /* ws2_32.dll!setsockopt */
    t306 = g->ecx;
    t307 = g->edx;
    eax = t305;
    ecx = t306;
    edx = t307;
    COW_AT(1026b7e7)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t308 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t309 = g->ecx;
    t310 = g->edx;
    eax = t308;
    ecx = t309;
    edx = t310;
    COW_AT(1026b7ee)
    if (eax != 0xffffffffu) goto L_1026b81b;
    COW_AT(1026b7f3)
    wr32(sp0 - 0x417b0u, COW_IMG(0x103b0c84u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t311 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0c84u));   /* kernel32.dll!OutputDebugStringA */
    t312 = g->ecx;
    t313 = g->edx;
    eax = t311;
    ecx = t312;
    edx = t313;
    COW_AT(1026b800)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t314 = g->ecx;
    t315 = g->edx;
    ecx = t314;
    edx = t315;
    COW_AT(1026b807)
    t316 = rd32(sp0 - 0x30134u);
    wr32(sp0 - 0x417b0u, t316);
    g->eax = t316;
    g->esp = sp0 - 0x417a4u;
    t317 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, ecx, edx, 1, 3, t316, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t318 = g->ecx;
    t319 = g->edx;
    eax = t317;
    ecx = t318;
    edx = t319;
    COW_AT(1026b813)
    goto L_1026af16;
L_1026b81b: ;
    COW_AT(1026b81b)
    wr32(sp0 - 0x4178cu, 1u);
    wr32(sp0 - 0x417b0u, sp0 - 0x30144u);
    g->eax = eax;
    g->esp = sp0 - 0x417acu;
    t320 = cow_call_regs(g, COW_IMG(0x1026d654u), g->eax, sp0 - 0x30144u, edx, 1, 1, sp0 - 0x30144u);
    t321 = g->ecx;
    eax = t320;
    ecx = t321;
    COW_AT(1026b831)
    if (eax != 0u)
    {
        loc_4178c = 1u;
    }
    else
    {
    COW_AT(1026b838)
        wr32(sp0 - 0x4178cu, 0u);
        loc_4178c = 0u;
    }
    COW_AT(1026b842)
    wr32(sp0 - 0x417b0u, 0u);
    wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x30144u;
    g->esp = sp0 - 0x417a4u;
    t322 = cow_cdecl(g, COW_IMG(0x1026d2f9u), 4, sp0 - 0x30144u, 0u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t323 = g->ecx;
    t324 = g->edx;
    eax = t322;
    ecx = t323;
    edx = t324;
    COW_AT(1026b850)
    if (eax != 0xffffffffu)
    {
        loc_4178c = rd32(sp0 - 0x4178cu);
    }
    else
    {
    COW_AT(1026b858)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0ca0u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t325 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0ca0u));   /* kernel32.dll!OutputDebugStringA */
        t326 = g->ecx;
        t327 = g->edx;
        eax = t325;
        ecx = t326;
        edx = t327;
    COW_AT(1026b865)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t328 = g->edx;
        edx = t328;
    COW_AT(1026b86c)
        wr32(sp0 - 0x4178cu, 0u);
        loc_4178c = 0u;
    }
    COW_AT(1026b876)
    t329 = rd32(sp0 - 0x10088u);
    wr32(sp0 - 0x417b0u, t329);
    wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
    g->eax = t329;
    g->ecx = sp0 - 0x30144u;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t330 = cow_cdecl(g, COW_IMG(0x1026d2f9u), 4, sp0 - 0x30144u, t329, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t331 = g->ecx;
    t332 = g->edx;
    eax = t330;
    ecx = t331;
    edx = t332;
    COW_AT(1026b889)
    if (eax != 0xffffffffu)
    {
        loc_4178c = rd32(sp0 - 0x4178cu);
    }
    else
    {
    COW_AT(1026b891)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0cb0u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t333 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0cb0u));   /* kernel32.dll!OutputDebugStringA */
        t334 = g->ecx;
        t335 = g->edx;
        eax = t333;
        ecx = t334;
        edx = t335;
    COW_AT(1026b89e)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x417acu;
        t336 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t337 = g->ecx;
        eax = t336;
        ecx = t337;
    COW_AT(1026b8a5)
        wr32(sp0 - 0x4178cu, 0u);
        loc_4178c = 0u;
    }
    COW_AT(1026b8af)
    wr32(sp0 - 0x417b0u, sp0 - 0x401b4u);
    g->eax = eax;
    g->edx = sp0 - 0x401b4u;
    g->esp = sp0 - 0x417a4u;
    t338 = cow_thiscall_cdecl(g, COW_IMG(0x1026bdb3u), ecx, 3, sp0 - 0x401b4u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t339 = g->ecx;
    t340 = g->edx;
    eax = t338;
    ecx = t339;
    edx = t340;
    COW_AT(1026b8bb)
    wr32(sp0 - 0x30154u, eax);
    if (eax != 0u)
    {
        loc_30154 = eax;
        loc_4178c = rd32(sp0 - 0x4178cu);
    }
    else
    {
        loc_30154 = eax;
    COW_AT(1026b8cd)
        wr32(sp0 - 0x4178cu, 0u);
        loc_4178c = 0u;
    }
    COW_AT(1026b8d7)
    if (loc_4178c != 1u)
    {
    COW_AT(1026b965)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0cd8u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t353 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0cd8u));   /* kernel32.dll!OutputDebugStringA */
        t354 = g->ecx;
        t355 = g->edx;
        eax = t353;
        ecx = t354;
        edx = t355;
    COW_AT(1026b972)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t356 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t357 = g->edx;
        eax = t356;
        edx = t357;
    COW_AT(1026b979)
        t358 = rd32(sp0 - 0x30134u);
        wr32(sp0 - 0x417b0u, t358);
        g->eax = eax;
        g->esp = sp0 - 0x417a4u;
        t359 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, t358, edx, 1, 3, t358, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t360 = g->ecx;
        eax = t359;
        ecx = t360;
    COW_AT(1026b985)
        wr32(sp0 - 0x417b0u, sp0 - 0x30144u);
        g->esp = sp0 - 0x417a4u;
        cow_call_regs(g, COW_IMG(0x1026d62du), g->eax, g->ecx, sp0 - 0x30144u, 1, 3, sp0 - 0x30144u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t361 = g->edx;
        edx = t361;
    COW_AT(1026b994)
    }
    else
    {
    COW_AT(1026b8e4)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0cc0u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t341 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0cc0u));   /* kernel32.dll!OutputDebugStringA */
        t342 = g->ecx;
        t343 = g->edx;
        eax = t341;
        ecx = t342;
        edx = t343;
    COW_AT(1026b8f1)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t344 = g->ecx;
        t345 = g->edx;
        ecx = t344;
        edx = t345;
    COW_AT(1026b8f8)
        t346 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t346);
        g->eax = t346;
        g->esp = sp0 - 0x417a4u;
        t347 = cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t346, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        eax = t347;
    COW_AT(1026b904)
        t348 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t348);
        wr32(sp0 - 0x417b4u, sp0 - 0x10064u);
        g->esp = sp0 - 0x417a4u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), t348, 4, sp0 - 0x10064u, t348, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026b91a)
        t349 = rd32(sp0 - 0x30134u);
        wr32(rd32(sp0 - 0x30154u) + 0x10u, t349);
        t350 = rd32(sp0 - 0x200f8u);
        wr32(rd32(sp0 - 0x30154u) + 0x1004cu, t350);
        wr32(sp0 - 0x417b0u, 0x10u);
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        t351 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b8u, t351);
        g->edx = t351;
        g->esp = sp0 - 0x417a4u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, t351, sp0 - 0x30144u, 0x10u, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t352 = g->edx;
        edx = t352;
    COW_AT(1026b953)
        wr32(rd32(sp0 - 0x30154u) + 0x24u, 4u);
    }
L_1026b997: ;
    COW_AT(1026b997)
    t362 = rd32(sp0 - 0x1004cu);
    wr32(sp0 - 0x30154u, t362);
    eax = sp0 - 0x10064u;
    ecx = t362;
    loc_30154 = t362;
L_1026b9b4: ;
    COW_AT(1026b9b4)
    if (loc_30154 != 0u) goto L_1026b9c2;
    COW_AT(1026b9bd)
L_1026bc77: ;
    COW_AT(1026bc77)
    goto L_1026af16;
L_1026b9a8: ;
    COW_AT(1026b9a8)
    t428 = rd32(sp0 - 0x417a0u);
    wr32(sp0 - 0x30154u, t428);
    edx = t428;
    loc_30154 = t428;
    goto L_1026b9b4;
L_1026b9c2: ;
    COW_AT(1026b9c2)
    t363 = rd32(loc_30154 + 0x18u);
    wr32(sp0 - 0x417a0u, t363);
    eax = loc_30154;
    ecx = t363;
    loc_417a0 = t363;
L_1026b9d1: ;
    COW_AT(1026b9d1)
    wr32(sp0 - 0x417b0u, loc_30154 + 0x2cu);
    g->eax = eax;
    g->edx = loc_30154 + 0x2cu;
    g->esp = sp0 - 0x417a4u;
    t364 = cow_thiscall_cdecl(g, COW_IMG(0x1026d199u), ecx, 3, loc_30154 + 0x2cu, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t365 = g->ecx;
    t366 = g->edx;
    eax = t364;
    ecx = t365;
    edx = t366;
    COW_AT(1026b9e0)
    wr32(sp0 - 0x1008cu, eax);
    if ((int32_t)eax >= 0)
    {
        loc_1008c = eax;
        goto L_1026b9f7;
    }
    COW_AT(1026b9f2)
L_1026bc72: ;
    COW_AT(1026bc72)
    goto L_1026b9a8;
L_1026b9f7: ;
    COW_AT(1026b9f7)
    if (loc_1008c != 5u) goto L_1026ba89;
    COW_AT(1026ba04)
    t367 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t367);
    g->eax = t367;
    g->edx = edx;
    g->esp = sp0 - 0x417a4u;
    t368 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), ecx, 3, t367, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t369 = g->edx;
    eax = t368;
    edx = t369;
    COW_AT(1026ba10)
    t370 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t370);
    g->ecx = t370;
    g->esp = sp0 - 0x417a4u;
    cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t370, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    t371 = g->ecx;
    ecx = t371;
    COW_AT(1026ba1f)
    t372 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t372);
    wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
    g->eax = sp0 - 0x401b4u;
    g->esp = sp0 - 0x417a4u;
    t373 = cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), ecx, 4, sp0 - 0x401b4u, t372, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    eax = t373;
    COW_AT(1026ba35)
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t374 = rd32(sp0 - 0x30154u) + 0x2cu;
    wr32(sp0 - 0x417b4u, t374);
    g->edx = t374;
    g->esp = sp0 - 0x417a8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), sp0 - 0x10078u, 3, t374, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t375 = g->edx;
    edx = t375;
    COW_AT(1026ba4e)
    wr32(sp0 - 0x10070u, 0u);
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t376 = rd32(sp0 - 0x30154u) + 0x4034u;
    wr32(sp0 - 0x417b4u, t376);
    g->eax = sp0 - 0x10078u;
    g->esp = sp0 - 0x417a8u;
    t377 = cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), t376, 3, t376, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t378 = g->ecx;
    eax = t377;
    ecx = t378;
    COW_AT(1026ba74)
    wr32(rd32(sp0 - 0x30154u) + 0x24u, 0u);
    goto L_1026bc72;
L_1026ba89: ;
    COW_AT(1026ba89)
    wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
    t379 = rd32(sp0 - 0x30154u) + 0x2cu;
    wr32(sp0 - 0x417b4u, t379);
    g->eax = sp0 - 0x30148u;
    g->esp = sp0 - 0x417a8u;
    t380 = cow_thiscall_cdecl(g, COW_IMG(0x1026d159u), t379, 3, t379, sp0 - 0x30148u, rd32(sp0 - 0x417acu));
    t381 = g->ecx;
    eax = t380;
    ecx = t381;
    COW_AT(1026ba9f)
    if ((int32_t)eax < 0) goto L_1026bc6b;
    COW_AT(1026baaa)
    if (rd32(rd32(sp0 - 0x30148u) + 0xcu) == 0u)
    {
    COW_AT(1026badd)
        t384 = rd32(rd32(rd32(sp0 - 0x30148u)));
        wr32(sp0 - 8u, t384);
        wr32(sp0 - 0x10084u, 0u);
        loc_8 = t384;
        loc_10084 = 0u;
    }
    else
    {
    COW_AT(1026bab6)
        t382 = rd32(rd32(rd32(sp0 - 0x30148u))) - rd32(rd32(sp0 - 0x30148u) + 0xcu);
        wr32(sp0 - 8u, t382);
        t383 = rd32(rd32(sp0 - 0x30148u) + 0xcu);
        wr32(sp0 - 0x10084u, t383);
        loc_8 = t382;
        loc_10084 = t383;
    }
L_1026baf4: ;
    COW_AT(1026baf4)
    wr32(sp0 - 0x417b0u, 0u);
    wr32(sp0 - 0x417b4u, loc_8);
    t385 = loc_10084 + rd32(rd32(sp0 - 0x30148u));
    wr32(sp0 - 0x417b8u, t385);
    t386 = rd32(rd32(sp0 - 0x30154u) + 0x10u);
    wr32(sp0 - 0x417bcu, t386);
    g->eax = rd32(sp0 - 0x30154u);
    g->ecx = t386;
    g->edx = t385;
    t387 = rd32(sp0 - 0x30154u);
    g->esp = sp0 - 0x417acu;
    t388 = cow_stdcall(g, rd32(COW_IMG(0x10329418u)), 4, t386, t385, loc_8, 0u);   /* ws2_32.dll!send */
    t389 = g->ecx;
    t390 = g->edx;
    eax = t388;
    ecx = t389;
    edx = t390;
    COW_AT(1026bb1b)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t391 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t392 = g->ecx;
    t393 = g->edx;
    eax = t391;
    ecx = t392;
    edx = t393;
    COW_AT(1026bb22)
    wr32(sp0 - 0x10090u, eax);
    if ((int32_t)eax > 0)
    {
        loc_10090 = eax;
        goto L_1026bb33;
    }
    loc_10090 = eax;
    COW_AT(1026bb31)
    loc_8 = rd32(sp0 - 8u);
    loc_10084 = rd32(sp0 - 0x10084u);
L_1026bb5b: ;
    COW_AT(1026bb5b)
    if ((int32_t)loc_10090 <= 0) goto L_1026bbac;
    COW_AT(1026bb64)
    t396 = rd32(sp0 - 0x4179cu);
    wr32(rd32(sp0 - 0x30154u) + 0x1cu, t396);
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t397 = rd32(sp0 - 0x30154u) + 0x2cu;
    wr32(sp0 - 0x417b4u, t397);
    g->esp = sp0 - 0x417a8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), t397, 3, t397, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t398 = g->ecx;
    ecx = t398;
    COW_AT(1026bb89)
    wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
    t399 = rd32(sp0 - 0x30154u) + 0x4034u;
    wr32(sp0 - 0x417b4u, t399);
    g->eax = t399;
    g->esp = sp0 - 0x417a8u;
    t400 = cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), ecx, 3, t399, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
    t401 = g->ecx;
    eax = t400;
    ecx = t401;
    COW_AT(1026bba4)
    COW_AT(1026bc69)
    COW_AT(1026bc6d)
    loc_30154 = rd32(sp0 - 0x30154u);
    loc_417a0 = rd32(sp0 - 0x417a0u);
    goto L_1026b9d1;
L_1026bb33: ;
    COW_AT(1026bb33)
    t394 = rd32(sp0 - 8u) - loc_10090;
    wr32(sp0 - 8u, t394);
    t395 = loc_10090 + rd32(sp0 - 0x10084u);
    wr32(sp0 - 0x10084u, t395);
    if (t394 != 0u)
    {
        loc_8 = t394;
        loc_10084 = t395;
        goto L_1026bb59;
    }
    eax = t395;
    edx = t394;
    loc_8 = t394;
    loc_10084 = t395;
    COW_AT(1026bb57)
    goto L_1026bb5b;
L_1026bb59: ;
    COW_AT(1026bb59)
    goto L_1026baf4;
L_1026bbac: ;
    COW_AT(1026bbac)
    g->eax = eax;
    g->esp = sp0 - 0x417acu;
    t402 = cow_fastcall(g, COW_IMG(0x1026d68fu), ecx, edx, 0);
    t403 = g->ecx;
    t404 = g->edx;
    eax = t402;
    ecx = t403;
    edx = t404;
    COW_AT(1026bbb1)
    if (eax != 1u)
    {
    COW_AT(1026bbde)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0d18u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t411 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0d18u));   /* kernel32.dll!OutputDebugStringA */
        t412 = g->ecx;
        t413 = g->edx;
        eax = t411;
        ecx = t412;
        edx = t413;
    COW_AT(1026bbeb)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t414 = g->edx;
        edx = t414;
    COW_AT(1026bbf2)
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        t415 = rd32(sp0 - 0x30154u) + 0x2cu;
        wr32(sp0 - 0x417b4u, t415);
        g->esp = sp0 - 0x417a8u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), t415, 3, t415, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
        t416 = g->ecx;
        ecx = t416;
    COW_AT(1026bc08)
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        t417 = rd32(sp0 - 0x30154u) + 0x4034u;
        wr32(sp0 - 0x417b4u, t417);
        g->eax = t417;
        g->edx = sp0 - 0x10078u;
        g->esp = sp0 - 0x417a8u;
        t418 = cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), ecx, 3, t417, sp0 - 0x10078u, rd32(sp0 - 0x417acu));
        t419 = g->edx;
        eax = t418;
        edx = t419;
    COW_AT(1026bc23)
        t420 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t420);
        g->eax = eax;
        g->esp = sp0 - 0x417a4u;
        t421 = cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), t420, 3, t420, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t422 = g->ecx;
        eax = t421;
        ecx = t422;
    COW_AT(1026bc32)
        t423 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t423);
        g->edx = t423;
        g->esp = sp0 - 0x417a4u;
        cow_cdecl(g, COW_IMG(0x1026bdf0u), 3, t423, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t424 = g->edx;
        edx = t424;
    COW_AT(1026bc41)
        t425 = rd32(sp0 - 0x30154u);
        wr32(sp0 - 0x417b0u, t425);
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        g->eax = t425;
        g->esp = sp0 - 0x417a4u;
        t426 = cow_thiscall_cdecl(g, COW_IMG(0x1026be32u), sp0 - 0x401b4u, 4, sp0 - 0x401b4u, t425, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
        t427 = g->ecx;
        eax = t426;
        ecx = t427;
    COW_AT(1026bc57)
        wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
    }
    else
    {
    COW_AT(1026bbb6)
        wr32(sp0 - 0x417b0u, COW_IMG(0x103b0cf4u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x417acu;
        t405 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0cf4u));   /* kernel32.dll!OutputDebugStringA */
        t406 = g->ecx;
        t407 = g->edx;
        eax = t405;
        ecx = t406;
        edx = t407;
    COW_AT(1026bbc3)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->esp = sp0 - 0x417acu;
        t408 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        eax = t408;
    COW_AT(1026bbca)
        t409 = rd32(sp0 - 0x10084u);
        t410 = rd32(sp0 - 0x30148u);
        wr32(t410 + 0xcu, t409);
        ecx = t410;
    }
    goto L_1026bc72;
L_1026bc6b: ;
    COW_AT(1026bc6b)
    goto L_1026bc72;
L_1026bcd4: ;
    COW_AT(1026bcd4)
    t590 = rd32(rd32(sp0 - 0x30154u) + 0x18u);
    t591 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x30154u, t590);
    edx = t591;
    loc_200dc = rd32(sp0 - 0x200dcu);
    loc_30154 = t590;
    goto L_1026bce3;
L_1026bcee: ;
    COW_AT(1026bcee)
    wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
    wr32(sp0 - 0x417b4u, 0x8004667eu);
    t583 = rd32(loc_30154 + 0x10u);
    wr32(sp0 - 0x417b8u, t583);
    g->eax = t583;
    g->ecx = sp0 - 0x417a4u;
    g->edx = loc_30154;
    g->esp = sp0 - 0x417acu;
    t584 = cow_stdcall(g, rd32(COW_IMG(0x10329464u)), 3, t583, 0x8004667eu, sp0 - 0x417a4u);   /* ws2_32.dll!ioctlsocket */
    t585 = g->ecx;
    t586 = g->edx;
    eax = t584;
    ecx = t585;
    edx = t586;
    COW_AT(1026bd0c)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x417acu;
    t587 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t588 = g->edx;
    eax = t587;
    edx = t588;
    COW_AT(1026bd13)
    t589 = rd32(sp0 - 0x30154u);
    wr32(sp0 - 0x417b0u, t589);
    g->esp = sp0 - 0x417a4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d5acu), t589, 3, t589, rd32(sp0 - 0x417acu), rd32(sp0 - 0x417a8u));
    COW_AT(1026bd1f)
    wr32(rd32(sp0 - 0x30154u) + 0x24u, 6u);
    goto L_1026bcd4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026a8cd(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026a8dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x417a4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026a957u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_41798;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_41798 = rd32(sp0 - 0x41798u);
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x41794u, arg1);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        wr32(sp0 - 0x10088u, 0x21u);
        (void)sp0;
        return 1;
    }
    case 0x1026a967u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a96eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a984u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a993u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a9a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a9acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a9bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a9d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026a9d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aa0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aa39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aa4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aa6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aa9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aa9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_3014c;
        uint32_t loc_30150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_3014c = rd32(sp0 - 0x3014cu);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aad4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        wr32(sp0 - 0x1004cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1026aae5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aafau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aaffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ab97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aba7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abd2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026abfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ac81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10068 = rd32(sp0 - 0x10068u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ace8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026acffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        wr32(sp0 - 0x10068u, 0x10000u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ad87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026adadu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026adb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026add3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026addau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026addfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026adecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026adf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026adffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ae94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aea0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aeb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aeb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aebcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aed5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aedcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aee1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aeebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026aefau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x200ecu);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        uint32_t loc_30154;
        uint32_t loc_41798;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026af92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026afa5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026afa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026afaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026afc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026afddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026afefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_41798;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_41798 = rd32(sp0 - 0x41798u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026affcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b003u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b010u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b017u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b01cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_41798;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_41798 = rd32(sp0 - 0x41798u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b029u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_41798;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_41798 = rd32(sp0 - 0x41798u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 0x41784u);
        wr32(sp0 - 0x417b4u, sp0 - 0x10080u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b03au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b046u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b04fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b054u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b06fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b07du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b092u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b0a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b0acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b0bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b0d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b0e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b0f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b100u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b10du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b114u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b120u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b12fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b145u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b15au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b16du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b17bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b194u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b19fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b1ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b20eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b224u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b239u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b242u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b247u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b24du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b256u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b263u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b26au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b276u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b285u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b29bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b2b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b8u, sp0 - 8u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b2c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b2eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b30cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b313u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b318u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b325u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b32cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b338u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b347u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b35du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b372u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b399u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b3f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b406u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b41cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b42fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b43cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b443u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b44fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b45eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b474u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b489u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b4ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10068;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_10068 = rd32(sp0 - 0x10068u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b50cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b513u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b520u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b527u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b54eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b569u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b578u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b587u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b59du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        uint32_t loc_30154;
        uint32_t loc_41798;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b5deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x200ecu);
        wr32(sp0 - 0x417b0u, sp0 - 0x41784u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b605u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30158u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b60cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30158u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b61bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30134 = rd32(sp0 - 0x30134u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30158u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b628u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b62fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b634u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30134;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30134 = rd32(sp0 - 0x30134u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30158u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b641u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b648u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b663u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b66au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b66fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b67cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b683u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b68fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b697u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b6eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b709u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b710u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b715u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b722u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b729u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b735u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b73du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b778u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        wr32(sp0 - 0x10068u, 0x10000u);
        (void)sp0;
        return 1;
    }
    case 0x1026b77fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b791u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b798u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b7a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b7acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b7e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        wr32(sp0 - 0x10068u, 0x10000u);
        (void)sp0;
        return 1;
    }
    case 0x1026b7eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b7f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b800u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b807u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b813u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b81bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b831u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x4178cu, 1u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b838u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b842u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10068u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b850u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b858u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b865u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b86cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b876u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b889u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b891u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b89eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b8f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b904u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b91au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x10064u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b953u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b965u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30154;
        uint32_t loc_4178c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4178c = rd32(sp0 - 0x4178cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b972u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b979u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b985u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b994u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x417b0u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b997u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        uint32_t loc_30154;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        uint32_t loc_30154;
        uint32_t loc_417a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_417a0 = rd32(sp0 - 0x417a0u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026b9f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026ba9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026baaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bab6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026baddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026baf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10090;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bb89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10084;
        uint32_t loc_10090;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10090 = rd32(sp0 - 0x10090u);
        loc_10084 = rd32(sp0 - 0x10084u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bbf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b4u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x30148u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x10078u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bc77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1008c;
        uint32_t loc_30154;
        uint32_t loc_41798;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_41798 = rd32(sp0 - 0x41798u);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_1008c = rd32(sp0 - 0x1008cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bcb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bcd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bce3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        uint32_t loc_30154;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bcecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        uint32_t loc_30154;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bceeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        uint32_t loc_30154;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_200dc;
        uint32_t loc_30150;
        uint32_t loc_30154;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        loc_30154 = rd32(sp0 - 0x30154u);
        loc_30150 = rd32(sp0 - 0x30150u);
        loc_200dc = rd32(sp0 - 0x200dcu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b0u, sp0 - 0x417a4u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417b0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4179c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_4179c = rd32(sp0 - 0x4179cu);
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bd9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x417b4u, sp0 - 0x30144u);
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bda0u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x417acu;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x417acu;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    case 0x1026bdafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x41790u, sp0 - 0x401b4u);
        wr32(sp0 - 0x41788u, sp0 - 0x10064u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a8cd(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1026a8cd(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
