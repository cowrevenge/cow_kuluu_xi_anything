/* f_0x10094190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10094190(Guest* g)
{
    double d336;
    double d393;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_8;
    double loc_c_f;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100941b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100941b7;
    case 0x100941bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100941bf;
    case 0x100941c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100941c8;
    case 0x10094218u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094218;
    case 0x10094222u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094222;
    case 0x1009422bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009422b;
    case 0x1009423du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009423d;
    case 0x1009424du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009424d;
    case 0x10094255u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094255;
    case 0x1009426au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009426a;
    case 0x100942f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100942f0;
    case 0x10094301u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094301;
    case 0x10094329u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094329;
    case 0x1009432fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009432f;
    case 0x10094346u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094346;
    case 0x1009434du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009434d;
    case 0x10094362u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094362;
    case 0x1009437du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009437d;
    case 0x10094385u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094385;
    case 0x10094393u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094393;
    case 0x100943a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100943a2;
    case 0x100943a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100943a8;
    case 0x100943fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100943fc;
    case 0x10094401u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094401;
    case 0x10094427u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094427;
    case 0x1009489bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009489b;
    case 0x100948e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100948e6;
    case 0x10094915u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10094915;
    case 0x1009492fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009492f;
    case 0x1009493au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009493a;
    case 0x1009493cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009493c;
    case 0x10094fc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094fc5;
    case 0x10094fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094fcc;
    case 0x10094fd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094fd8;
    case 0x10094fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094fde;
    case 0x10094feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094fee;
    case 0x10094ffcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10094ffc;
    case 0x10095005u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10095005;
    case 0x1009500bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009500b;
    case 0x10095071u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10095071;
    case 0x10095076u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10095076;
    case 0x100950a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100950a7;
    case 0x1009524bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009524b;
    case 0x1009525eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009525e;
    case 0x10095270u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10095270;
    case 0x10095281u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10095281;
    case 0x100952f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100952f0;
    case 0x100952fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100952fa;
    case 0x10095334u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10095334;
    case 0x1009534eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1009534e;
    case 0x10095358u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10095358;
    default: break;
    }
#endif

    COW_AT(10094190)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x20u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x24u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(COW_IMG(0x1048559cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1048559cu));
        ecx = t3;
        edx = t4;
        loc_2c = in_ebx;
        loc_30 = in_esi;
        loc_34 = in_edi;
        goto L_10095358;
    }
    eax = rd32(COW_IMG(0x1048559cu));
    ecx = t3;
    edx = t4;
    COW_AT(100941b7)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u) goto L_100941c8;
    COW_AT(100941bf)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100941c8: ;
    COW_AT(100941c8)
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 9u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x10485ff8u), 0u);
    wr32(COW_IMG(0x10485ffcu), 0u);
    wr8(COW_IMG(0x10486000u), 0u);
    wr32(COW_IMG(0x10486004u), 0u);
    wr32(COW_IMG(0x10486008u), 0u);
    wr8(COW_IMG(0x1048600cu), 0u);
    wr8(COW_IMG(0x10486014u), 0u);
    wr32(COW_IMG(0x1048559cu), 0u);
    wr32(COW_IMG(0x104898fcu), 0u);
    if (rd32(t7 + 0x40dccu) == 0u)
    {
        eax = t7;
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = t7;
        ecx = t5;
        edx = t6;
        esi = rd32(t7 + 0x40dccu);
    COW_AT(10094218)
        if (rd32(eax + 0x40dd0u) != 0u)
        {
            edi = rd32(eax + 0x40dd0u);
    COW_AT(10094222)
            if ((rd8(eax + 0x40db2u) & 0x20u) != 0u)
            {
    COW_AT(1009423d)
                t11 = rd8(eax + 0x40db3u);
                wr32(sp0 - 0x38u, t11);
                wr32(sp0 - 0x3cu, edi);
                wr32(sp0 - 0x40u, esi);
                g->ecx = ecx;
                g->edx = t11;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x101776c0u), 5, esi, edi, t11, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t12 = g->ecx;
                t13 = g->edx;
                ecx = t12;
                edx = t13;
            }
            else
            {
    COW_AT(1009422b)
                t8 = rd8(eax + 0x40db3u);
                wr32(sp0 - 0x38u, t8);
                wr32(sp0 - 0x3cu, edi);
                wr32(sp0 - 0x40u, esi);
                g->ecx = t8;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10177650u), 5, esi, edi, t8, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
            }
    COW_AT(1009424d)
            eax = rd32(COW_IMG(0x104dfd98u));
        }
    }
    COW_AT(10094255)
    wr8(eax + 0x40db1u, rd8(eax + 0x40db1u) & 0xefu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t14 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (!(t14 >> 8u & 1u))
    {
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(10094362)
        wr32(sp0 - 0x38u, 3u);
        wr32(sp0 - 0x3cu, 9u);
        g->ebx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t44 = cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 3u);
        t45 = g->edx;
        if ((rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) & 0x40u) == 0u)
        {
            eax = t44;
            ecx = rd32(COW_IMG(0x104dfd98u));
            edx = t45;
        }
        else
        {
            eax = t44;
            ecx = rd32(COW_IMG(0x104dfd98u));
            edx = t45;
    COW_AT(1009437d)
            if (rd32(COW_IMG(0x106631d8u)) == 0u)
            {
    COW_AT(10094385)
                wr32(sp0 - 0x38u, 3u);
                g->eax = eax;
                g->esp = sp0 - 0x2cu;
                t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 3u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t47 = g->ecx;
                t48 = g->edx;
                if (t46 == 0u)
                {
                    eax = t46;
                    ecx = t47;
                    edx = t48;
    COW_AT(100943a2)
                    wr32(COW_IMG(0x106631d8u), 0u);
                }
                else
                {
                    eax = t46;
                    ecx = t47;
                    edx = t48;
    COW_AT(10094393)
                    wr8(eax, 0u);
                    wr8(eax + 1u, 0u);
                    wr8(eax + 2u, 0u);
                    wr32(COW_IMG(0x106631d8u), eax);
                }
            }
        }
    COW_AT(100943a8)
        wr32(sp0 - 0x38u, 4u);
        wr32(sp0 - 0x3cu, 9u);
        g->ebx = 0u;
        g->esp = sp0 - 0x34u;
        t49 = cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 4u);
        t50 = g->ecx;
        t51 = (t49 & 0xffffff00u) | rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40d7cu);
        wr32(sp0 - 0x40u, t51);
        wr32(sp0 - 0x44u, 0xau);
        g->ebx = 0u;
        g->esp = sp0 - 0x3cu;
        t52 = cow_call_regs(g, COW_IMG(0x10253610u), t51, t50, g->edx, 1, 2, 0xau, t51);
        t53 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7cu);
        wr32(sp0 - 0x48u, t53);
        g->ecx = t53;
        g->edx = rd32(COW_IMG(0x104dfd98u));
        t54 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0 - 0x44u;
        t55 = cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, t53);
        t56 = g->ecx;
        t57 = g->edx;
        wr32(sp0 - 0x4cu, 5u);
        wr32(sp0 - 0x50u, 9u);
        g->ebx = 0u;
        g->edx = t57;
        g->esp = sp0 - 0x48u;
        t58 = cow_call_regs(g, COW_IMG(0x10253610u), t55, t56, g->edx, 1, 2, 9u, 5u);
        t59 = g->edx;
        if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7cu) == rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7eu))
        {
            eax = (t58 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7eu);
            ecx = rd32(COW_IMG(0x104dfd98u));
            edx = t59;
        }
        else
        {
            eax = (t58 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7eu);
            ecx = rd32(COW_IMG(0x104dfd98u));
            edx = t59;
    COW_AT(100943fc)
            if ((uint16_t)eax != 0u)
            {
    COW_AT(10094401)
                wr32(sp0 - 0x38u, eax);
                wr32(sp0 - 0x3cu, 0xbu);
                g->ebx = 0u;
                g->esp = sp0 - 0x34u;
                t60 = cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 0xbu, eax);
                t61 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7eu);
                wr32(sp0 - 0x38u, t61);
                g->ecx = rd32(COW_IMG(0x1065cb04u));
                g->edx = rd32(COW_IMG(0x104dfd98u));
                t62 = rd32(COW_IMG(0x1065cb04u));
                t63 = rd32(COW_IMG(0x104dfd98u));
                t64 = cow_stdcall(g, COW_IMG(0x1018bac0u), 1, t61);
                t65 = g->ecx;
                t66 = g->edx;
                eax = t64;
                ecx = t65;
                edx = t66;
            }
        }
    }
    else
    {
        ecx = t15;
        edx = t16;
    COW_AT(1009426a)
        t17 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d80u);
        wr32(sp0 - 0x38u, t17);
        t18 = (edx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d82u);
        wr32(sp0 - 0x3cu, t18);
        g->ecx = t17;
        t19 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0 - 0x34u;
        t20 = cow_call_regs(g, COW_IMG(0x100f9650u), t19, g->ecx, g->edx, 1, 2, t18, t17);
        t21 = g->ecx;
        wr32(sp0 - 0x40u, 1u);
        wr32(sp0 - 0x44u, 9u);
        t22 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u);
        t23 = rd32(COW_IMG(0x104dfd98u));
        wr16(t23 + 0x40db0u, (t20 & 1u) << 0xcu ^ (t22 & 0xefffu));
        g->ebx = 0u;
        g->edx = t23;
        g->esp = sp0 - 0x3cu;
        t24 = cow_call_regs(g, COW_IMG(0x10253610u), ((t20 & 0xffff0000u) | (t20 & 1u)) << 0xcu ^ (t22 & 0xefffu), t22 & 0xefffu, g->edx, 1, 2, 9u, 1u);
        t25 = g->edx;
        t26 = (t25 & 0xffffff00u) | rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40d80u);
        wr32(sp0 - 0x48u, t26);
        wr32(sp0 - 0x4cu, 0xau);
        g->ebx = 0u;
        g->edx = t26;
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x10253610u), t24, rd32(COW_IMG(0x104dfd98u)), g->edx, 1, 2, 0xau, t26);
        t27 = g->edx;
        t28 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d80u);
        wr32(sp0 - 0x50u, t28);
        g->eax = t28;
        g->ecx = rd32(COW_IMG(0x104dfd98u));
        g->edx = t27;
        t29 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0 - 0x4cu;
        t30 = cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, t28);
        t31 = g->ecx;
        t32 = g->edx;
        wr32(sp0 - 0x54u, 2u);
        wr32(sp0 - 0x58u, 9u);
        g->ebx = 0u;
        g->edx = t32;
        g->esp = sp0 - 0x50u;
        cow_call_regs(g, COW_IMG(0x10253610u), t30, t31, g->edx, 1, 2, 9u, 2u);
        t33 = g->ecx;
        t34 = g->edx;
        if (rd32(COW_IMG(0x106631d4u)) != 0u)
        {
            ecx = t33;
            edx = t34;
        }
        else
        {
            eax = rd32(COW_IMG(0x106631d4u));
            ecx = t33;
            edx = t34;
    COW_AT(100942f0)
            wr32(sp0 - 0x38u, 0x85cu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t35 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x85cu);
            t36 = g->ecx;
            t37 = g->edx;
            if (t35 == 0u)
            {
                ecx = t36;
                edx = t37;
    COW_AT(10094329)
                wr32(COW_IMG(0x106631d4u), 0u);
            }
            else
            {
                eax = t35;
    COW_AT(10094301)
                t38 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d82u);
                wr32(sp0 - 0x38u, t38);
                t39 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d80u);
                wr32(sp0 - 0x3cu, t39);
                g->eax = eax;
                g->edx = t39;
                g->esp = sp0 - 0x34u;
                t40 = cow_thiscall(g, COW_IMG(0x101d2cc0u), eax, 2, t39, t38);
                t41 = g->ecx;
                t42 = g->edx;
                wr32(COW_IMG(0x106631d4u), t40);
                ecx = t41;
                edx = t42;
            }
        }
    COW_AT(1009432f)
        t43 = rd32(COW_IMG(0x104dfd98u));
        wr8(COW_IMG(0x10482f44u), 1u);
        if (rd16(t43 + 0x40d80u) != 0x2d4u)
        {
            eax = t43;
        }
        else
        {
            eax = t43;
    COW_AT(10094346)
            wr8(COW_IMG(0x1048098du), 1u);
        }
    COW_AT(1009434d)
        wr16(COW_IMG(0x10485ff0u), 0x7eu);
        wr8(COW_IMG(0x10482f43u), 1u);
    }
    COW_AT(10094427)
    wr32(sp0 - 0x38u, 6u);
    wr32(sp0 - 0x3cu, 9u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t67 = cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 6u);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x10099ae0u));
    wr32(sp0 - 0x44u, 0xdu);
    g->ecx = t68;
    g->edx = t69;
    g->esp = sp0 - 0x3cu;
    t70 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xdu, COW_IMG(0x10099ae0u));
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x1009b550u));
    wr32(sp0 - 0x4cu, 0xeu);
    g->ecx = t71;
    g->edx = t72;
    g->esp = sp0 - 0x44u;
    t73 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xeu, COW_IMG(0x1009b550u));
    t74 = g->ecx;
    t75 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x1009cee0u));
    wr32(sp0 - 0x54u, 0x67u);
    g->ecx = t74;
    g->edx = t75;
    g->esp = sp0 - 0x4cu;
    t76 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x67u, COW_IMG(0x1009cee0u));
    t77 = g->ecx;
    t78 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x1009cee0u));
    wr32(sp0 - 0x5cu, 0x68u);
    g->ecx = t77;
    g->edx = t78;
    g->esp = sp0 - 0x54u;
    t79 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x68u, COW_IMG(0x1009cee0u));
    t80 = g->ecx;
    t81 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100a0200u));
    wr32(sp0 - 0x64u, 0x32u);
    g->ecx = t80;
    g->edx = t81;
    g->esp = sp0 - 0x5cu;
    t82 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x32u, COW_IMG(0x100a0200u));
    t83 = g->ecx;
    t84 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x100a02d0u));
    wr32(sp0 - 0x6cu, 0x34u);
    g->ecx = t83;
    g->edx = t84;
    g->esp = sp0 - 0x64u;
    t85 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x34u, COW_IMG(0x100a02d0u));
    t86 = g->ecx;
    t87 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x100a03c0u));
    wr32(sp0 - 0x74u, 0x33u);
    g->ecx = t86;
    g->edx = t87;
    g->esp = sp0 - 0x6cu;
    t88 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x33u, COW_IMG(0x100a03c0u));
    t89 = g->ecx;
    t90 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x100a1580u));
    wr32(sp0 - 0x3cu, 0x14u);
    g->ecx = t89;
    g->edx = t90;
    g->esp = sp0 - 0x34u;
    t91 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x14u, COW_IMG(0x100a1580u));
    t92 = g->ecx;
    t93 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x100a2580u));
    wr32(sp0 - 0x44u, 0x16u);
    g->ecx = t92;
    g->edx = t93;
    g->esp = sp0 - 0x3cu;
    t94 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x16u, COW_IMG(0x100a2580u));
    t95 = g->ecx;
    t96 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x100a0ef0u));
    wr32(sp0 - 0x4cu, 0x36u);
    g->ecx = t95;
    g->edx = t96;
    g->esp = sp0 - 0x44u;
    t97 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x36u, COW_IMG(0x100a0ef0u));
    t98 = g->ecx;
    t99 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x100a1070u));
    wr32(sp0 - 0x54u, 0x43u);
    g->ecx = t98;
    g->edx = t99;
    g->esp = sp0 - 0x4cu;
    t100 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x43u, COW_IMG(0x100a1070u));
    t101 = g->ecx;
    t102 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x100a12a0u));
    wr32(sp0 - 0x5cu, 0x2au);
    g->ecx = t101;
    g->edx = t102;
    g->esp = sp0 - 0x54u;
    t103 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x2au, COW_IMG(0x100a12a0u));
    t104 = g->ecx;
    t105 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100a1dc0u));
    wr32(sp0 - 0x64u, 0x27u);
    g->ecx = t104;
    g->edx = t105;
    g->esp = sp0 - 0x5cu;
    t106 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x27u, COW_IMG(0x100a1dc0u));
    t107 = g->ecx;
    t108 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x1009d9c0u));
    wr32(sp0 - 0x6cu, 0x11u);
    g->ecx = t107;
    g->edx = t108;
    g->esp = sp0 - 0x64u;
    t109 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x11u, COW_IMG(0x1009d9c0u));
    t110 = g->ecx;
    t111 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x1009d0d0u));
    wr32(sp0 - 0x74u, 0x51u);
    g->ecx = t110;
    g->edx = t111;
    g->esp = sp0 - 0x6cu;
    t112 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x51u, COW_IMG(0x1009d0d0u));
    t113 = g->ecx;
    t114 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x1009d0f0u));
    wr32(sp0 - 0x3cu, 0x37u);
    g->ecx = t113;
    g->edx = t114;
    g->esp = sp0 - 0x34u;
    t115 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x37u, COW_IMG(0x1009d0f0u));
    t116 = g->ecx;
    t117 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x1009dd20u));
    wr32(sp0 - 0x44u, 0x39u);
    g->ecx = t116;
    g->edx = t117;
    g->esp = sp0 - 0x3cu;
    t118 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x39u, COW_IMG(0x1009dd20u));
    t119 = g->ecx;
    t120 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x1009d9d0u));
    wr32(sp0 - 0x4cu, 0x3au);
    g->ecx = t119;
    g->edx = t120;
    g->esp = sp0 - 0x44u;
    t121 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x3au, COW_IMG(0x1009d9d0u));
    t122 = g->ecx;
    t123 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x1009dee0u));
    wr32(sp0 - 0x54u, 0x38u);
    g->ecx = t122;
    g->edx = t123;
    g->esp = sp0 - 0x4cu;
    t124 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x38u, COW_IMG(0x1009dee0u));
    t125 = g->ecx;
    t126 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x100a2050u));
    wr32(sp0 - 0x5cu, 0x52u);
    g->ecx = t125;
    g->edx = t126;
    g->esp = sp0 - 0x54u;
    t127 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x52u, COW_IMG(0x100a2050u));
    t128 = g->ecx;
    t129 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100a2000u));
    wr32(sp0 - 0x64u, 0x53u);
    g->ecx = t128;
    g->edx = t129;
    g->esp = sp0 - 0x5cu;
    t130 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x53u, COW_IMG(0x100a2000u));
    t131 = g->ecx;
    t132 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x100a06e0u));
    wr32(sp0 - 0x6cu, 0x5au);
    g->ecx = t131;
    g->edx = t132;
    g->esp = sp0 - 0x64u;
    t133 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x5au, COW_IMG(0x100a06e0u));
    t134 = g->ecx;
    t135 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x1009ee40u));
    wr32(sp0 - 0x74u, 0x5bu);
    g->ecx = t134;
    g->edx = t135;
    g->esp = sp0 - 0x6cu;
    t136 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x5bu, COW_IMG(0x1009ee40u));
    t137 = g->ecx;
    t138 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x1009f2d0u));
    wr32(sp0 - 0x3cu, 0x65u);
    g->ecx = t137;
    g->edx = t138;
    g->esp = sp0 - 0x34u;
    t139 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x65u, COW_IMG(0x1009f2d0u));
    t140 = g->ecx;
    t141 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x100a00f0u));
    wr32(sp0 - 0x44u, 0x5cu);
    g->ecx = t140;
    g->edx = t141;
    g->esp = sp0 - 0x3cu;
    t142 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x5cu, COW_IMG(0x100a00f0u));
    t143 = g->ecx;
    t144 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x100a0110u));
    wr32(sp0 - 0x4cu, 0x5du);
    g->ecx = t143;
    g->edx = t144;
    g->esp = sp0 - 0x44u;
    t145 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x5du, COW_IMG(0x100a0110u));
    t146 = g->ecx;
    t147 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x100a0180u));
    wr32(sp0 - 0x54u, 0x48u);
    g->ecx = t146;
    g->edx = t147;
    g->esp = sp0 - 0x4cu;
    t148 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x48u, COW_IMG(0x100a0180u));
    t149 = g->ecx;
    t150 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x100a00c0u));
    wr32(sp0 - 0x5cu, 0x54u);
    g->ecx = t149;
    g->edx = t150;
    g->esp = sp0 - 0x54u;
    t151 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x54u, COW_IMG(0x100a00c0u));
    t152 = g->ecx;
    t153 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100a38b0u));
    wr32(sp0 - 0x64u, 0x4bu);
    g->ecx = t152;
    g->edx = t153;
    g->esp = sp0 - 0x5cu;
    t154 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x4bu, COW_IMG(0x100a38b0u));
    t155 = g->ecx;
    t156 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x100a3ac0u));
    wr32(sp0 - 0x6cu, 0x4cu);
    g->ecx = t155;
    g->edx = t156;
    g->esp = sp0 - 0x64u;
    t157 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x4cu, COW_IMG(0x100a3ac0u));
    t158 = g->ecx;
    t159 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x100a2f70u));
    wr32(sp0 - 0x74u, 0x4du);
    g->ecx = t158;
    g->edx = t159;
    g->esp = sp0 - 0x6cu;
    t160 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x4du, COW_IMG(0x100a2f70u));
    t161 = g->ecx;
    t162 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x1009e400u));
    wr32(sp0 - 0x3cu, 0x28u);
    g->ecx = t161;
    g->edx = t162;
    g->esp = sp0 - 0x34u;
    t163 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x28u, COW_IMG(0x1009e400u));
    t164 = g->ecx;
    t165 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x1009e8d0u));
    wr32(sp0 - 0x44u, 0x29u);
    g->ecx = t164;
    g->edx = t165;
    g->esp = sp0 - 0x3cu;
    t166 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x29u, COW_IMG(0x1009e8d0u));
    t167 = g->ecx;
    t168 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x1009eb10u));
    wr32(sp0 - 0x4cu, 0x2du);
    g->ecx = t167;
    g->edx = t168;
    g->esp = sp0 - 0x44u;
    t169 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x2du, COW_IMG(0x1009eb10u));
    t170 = g->ecx;
    t171 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x100998a0u));
    wr32(sp0 - 0x54u, 0x5eu);
    g->ecx = t170;
    g->edx = t171;
    g->esp = sp0 - 0x4cu;
    t172 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x5eu, COW_IMG(0x100998a0u));
    t173 = g->ecx;
    t174 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x100998d0u));
    wr32(sp0 - 0x5cu, 0x71u);
    g->ecx = t173;
    g->edx = t174;
    g->esp = sp0 - 0x54u;
    t175 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x71u, COW_IMG(0x100998d0u));
    t176 = g->ecx;
    t177 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100999a0u));
    wr32(sp0 - 0x64u, 0x72u);
    g->ecx = t176;
    g->edx = t177;
    g->esp = sp0 - 0x5cu;
    t178 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x72u, COW_IMG(0x100999a0u));
    t179 = g->ecx;
    t180 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x100994a0u));
    wr32(sp0 - 0x6cu, 0x61u);
    g->ecx = t179;
    g->edx = t180;
    g->esp = sp0 - 0x64u;
    t181 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x61u, COW_IMG(0x100994a0u));
    t182 = g->ecx;
    t183 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x10099400u));
    wr32(sp0 - 0x74u, 0x62u);
    g->ecx = t182;
    g->edx = t183;
    g->esp = sp0 - 0x6cu;
    t184 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x62u, COW_IMG(0x10099400u));
    t185 = g->ecx;
    t186 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x10099430u));
    wr32(sp0 - 0x3cu, 0x119u);
    g->ecx = t185;
    g->edx = t186;
    g->esp = sp0 - 0x34u;
    t187 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x119u, COW_IMG(0x10099430u));
    t188 = g->ecx;
    t189 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x10099270u));
    wr32(sp0 - 0x44u, 0x63u);
    g->ecx = t188;
    g->edx = t189;
    g->esp = sp0 - 0x3cu;
    t190 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x63u, COW_IMG(0x10099270u));
    t191 = g->ecx;
    t192 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x10099640u));
    wr32(sp0 - 0x4cu, 0x113u);
    g->ecx = t191;
    g->edx = t192;
    g->esp = sp0 - 0x44u;
    t193 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x113u, COW_IMG(0x10099640u));
    t194 = g->ecx;
    t195 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x10099660u));
    wr32(sp0 - 0x54u, 0x118u);
    g->ecx = t194;
    g->edx = t195;
    g->esp = sp0 - 0x4cu;
    t196 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x118u, COW_IMG(0x10099660u));
    t197 = g->ecx;
    t198 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x10099710u));
    wr32(sp0 - 0x5cu, 0x11au);
    g->ecx = t197;
    g->edx = t198;
    g->esp = sp0 - 0x54u;
    t199 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x11au, COW_IMG(0x10099710u));
    t200 = g->ecx;
    t201 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100999f0u));
    wr32(sp0 - 0x64u, 0x5fu);
    g->ecx = t200;
    g->edx = t201;
    g->esp = sp0 - 0x5cu;
    t202 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x5fu, COW_IMG(0x100999f0u));
    t203 = g->ecx;
    t204 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x10099a20u));
    wr32(sp0 - 0x6cu, 0x60u);
    g->ecx = t203;
    g->edx = t204;
    g->esp = sp0 - 0x64u;
    t205 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x60u, COW_IMG(0x10099a20u));
    t206 = g->ecx;
    t207 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x10098710u));
    wr32(sp0 - 0x74u, 0x55u);
    g->ecx = t206;
    g->edx = t207;
    g->esp = sp0 - 0x6cu;
    t208 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x55u, COW_IMG(0x10098710u));
    t209 = g->ecx;
    t210 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x10098ad0u));
    wr32(sp0 - 0x3cu, 0x56u);
    g->ecx = t209;
    g->edx = t210;
    g->esp = sp0 - 0x34u;
    t211 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x56u, COW_IMG(0x10098ad0u));
    t212 = g->ecx;
    t213 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x10098e90u));
    wr32(sp0 - 0x44u, 0x75u);
    g->ecx = t212;
    g->edx = t213;
    g->esp = sp0 - 0x3cu;
    t214 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x75u, COW_IMG(0x10098e90u));
    t215 = g->ecx;
    t216 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x10098f30u));
    wr32(sp0 - 0x4cu, 0x77u);
    g->ecx = t215;
    g->edx = t216;
    g->esp = sp0 - 0x44u;
    t217 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x77u, COW_IMG(0x10098f30u));
    t218 = g->ecx;
    t219 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x10098f50u));
    wr32(sp0 - 0x54u, 0x76u);
    g->ecx = t218;
    g->edx = t219;
    g->esp = sp0 - 0x4cu;
    t220 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x76u, COW_IMG(0x10098f50u));
    t221 = g->ecx;
    t222 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x10099070u));
    wr32(sp0 - 0x5cu, 0x110u);
    g->ecx = t221;
    g->edx = t222;
    g->esp = sp0 - 0x54u;
    t223 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x110u, COW_IMG(0x10099070u));
    t224 = g->ecx;
    t225 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100990e0u));
    wr32(sp0 - 0x64u, 0x111u);
    g->ecx = t224;
    g->edx = t225;
    g->esp = sp0 - 0x5cu;
    t226 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x111u, COW_IMG(0x100990e0u));
    t227 = g->ecx;
    t228 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x10099150u));
    wr32(sp0 - 0x6cu, 0x112u);
    g->ecx = t227;
    g->edx = t228;
    g->esp = sp0 - 0x64u;
    t229 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x112u, COW_IMG(0x10099150u));
    t230 = g->ecx;
    t231 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x1009f3c0u));
    wr32(sp0 - 0x74u, 0x57u);
    g->ecx = t230;
    g->edx = t231;
    g->esp = sp0 - 0x6cu;
    t232 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x57u, COW_IMG(0x1009f3c0u));
    t233 = g->ecx;
    t234 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x1009fed0u));
    wr32(sp0 - 0x3cu, 0x58u);
    g->ecx = t233;
    g->edx = t234;
    g->esp = sp0 - 0x34u;
    t235 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x58u, COW_IMG(0x1009fed0u));
    t236 = g->ecx;
    t237 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x100a1600u));
    wr32(sp0 - 0x44u, 0x3bu);
    g->ecx = t236;
    g->edx = t237;
    g->esp = sp0 - 0x3cu;
    t238 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x3bu, COW_IMG(0x100a1600u));
    t239 = g->ecx;
    t240 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x100a15f0u));
    wr32(sp0 - 0x4cu, 0x2eu);
    g->ecx = t239;
    g->edx = t240;
    g->esp = sp0 - 0x44u;
    t241 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x2eu, COW_IMG(0x100a15f0u));
    t242 = g->ecx;
    t243 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x1009fac0u));
    wr32(sp0 - 0x54u, 0x2fu);
    g->ecx = t242;
    g->edx = t243;
    g->esp = sp0 - 0x4cu;
    t244 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x2fu, COW_IMG(0x1009fac0u));
    t245 = g->ecx;
    t246 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x1009fbf0u));
    wr32(sp0 - 0x5cu, 0x81u);
    g->ecx = t245;
    g->edx = t246;
    g->esp = sp0 - 0x54u;
    t247 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x81u, COW_IMG(0x1009fbf0u));
    t248 = g->ecx;
    t249 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x1009fd30u));
    wr32(sp0 - 0x64u, 0x115u);
    g->ecx = t248;
    g->edx = t249;
    g->esp = sp0 - 0x5cu;
    t250 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x115u, COW_IMG(0x1009fd30u));
    t251 = g->ecx;
    t252 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x1009fa00u));
    wr32(sp0 - 0x6cu, 0x59u);
    g->ecx = t251;
    g->edx = t252;
    g->esp = sp0 - 0x64u;
    t253 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x59u, COW_IMG(0x1009fa00u));
    t254 = g->ecx;
    t255 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x1009f990u));
    wr32(sp0 - 0x74u, 0x30u);
    g->ecx = t254;
    g->edx = t255;
    g->esp = sp0 - 0x6cu;
    t256 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x30u, COW_IMG(0x1009f990u));
    t257 = g->ecx;
    t258 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x100a2540u));
    wr32(sp0 - 0x3cu, 0xf9u);
    g->ecx = t257;
    g->edx = t258;
    g->esp = sp0 - 0x34u;
    t259 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xf9u, COW_IMG(0x100a2540u));
    t260 = g->ecx;
    t261 = g->edx;
    wr32(sp0 - 0x40u, COW_IMG(0x1009f7c0u));
    wr32(sp0 - 0x44u, 0x31u);
    g->ecx = t260;
    g->edx = t261;
    g->esp = sp0 - 0x3cu;
    t262 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x31u, COW_IMG(0x1009f7c0u));
    t263 = g->ecx;
    t264 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x10098610u));
    wr32(sp0 - 0x4cu, 0xb7u);
    g->ecx = t263;
    g->edx = t264;
    g->esp = sp0 - 0x44u;
    t265 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xb7u, COW_IMG(0x10098610u));
    t266 = g->ecx;
    t267 = g->edx;
    wr32(sp0 - 0x50u, COW_IMG(0x100a2100u));
    wr32(sp0 - 0x54u, 0x10eu);
    g->ecx = t266;
    g->edx = t267;
    g->esp = sp0 - 0x4cu;
    t268 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x10eu, COW_IMG(0x100a2100u));
    t269 = g->ecx;
    t270 = g->edx;
    wr32(sp0 - 0x58u, COW_IMG(0x100a2130u));
    wr32(sp0 - 0x5cu, 0x10fu);
    g->ecx = t269;
    g->edx = t270;
    g->esp = sp0 - 0x54u;
    t271 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x10fu, COW_IMG(0x100a2130u));
    t272 = g->ecx;
    t273 = g->edx;
    wr32(sp0 - 0x60u, COW_IMG(0x100a2160u));
    wr32(sp0 - 0x64u, 0xbfu);
    g->ecx = t272;
    g->edx = t273;
    g->esp = sp0 - 0x5cu;
    t274 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xbfu, COW_IMG(0x100a2160u));
    t275 = g->ecx;
    t276 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x100a21c0u));
    wr32(sp0 - 0x6cu, 0xe6u);
    g->ecx = t275;
    g->edx = t276;
    g->esp = sp0 - 0x64u;
    t277 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xe6u, COW_IMG(0x100a21c0u));
    t278 = g->ecx;
    t279 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x100a2610u));
    wr32(sp0 - 0x74u, 0x11du);
    g->ecx = t278;
    g->edx = t279;
    g->esp = sp0 - 0x6cu;
    t280 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x11du, COW_IMG(0x100a2610u));
    t281 = g->ecx;
    t282 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x100a2760u));
    wr32(sp0 - 0x3cu, 0x11eu);
    g->ecx = t281;
    g->edx = t282;
    g->esp = sp0 - 0x34u;
    t283 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x11eu, COW_IMG(0x100a2760u));
    t284 = g->ecx;
    t285 = g->edx;
    wr32(sp0 - 0x40u, 7u);
    wr32(sp0 - 0x44u, 9u);
    g->ebx = 0u;
    g->edx = t285;
    g->esp = sp0 - 0x3cu;
    t286 = cow_call_regs(g, COW_IMG(0x10253610u), t283, t284, g->edx, 1, 2, 9u, 7u);
    t287 = g->edx;
    g->edx = t287;
    g->esp = sp0 - 0x34u;
    t288 = cow_stdcall(g, COW_IMG(0x10151160u), 0);
    t289 = g->edx;
    g->edx = t289;
    t290 = cow_stdcall(g, COW_IMG(0x10203a30u), 0);
    t291 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    g->ecx = rd32(COW_IMG(0x106643a8u));
    g->edx = t291;
    t292 = rd32(COW_IMG(0x106643a8u));
    t293 = cow_stdcall(g, COW_IMG(0x10203be0u), 1, 1u);
    t294 = g->ecx;
    t295 = g->edx;
    g->ecx = t294;
    g->edx = t295;
    t296 = cow_stdcall(g, COW_IMG(0x101e3430u), 0);
    t297 = g->ecx;
    t298 = g->edx;
    g->ecx = t297;
    g->edx = t298;
    t299 = cow_stdcall(g, COW_IMG(0x1020f530u), 0);
    t300 = g->ecx;
    t301 = g->edx;
    g->ecx = t300;
    g->edx = t301;
    t302 = cow_stdcall(g, COW_IMG(0x101f7ab0u), 0);
    t303 = g->ecx;
    t304 = g->edx;
    g->ecx = t303;
    g->edx = t304;
    t305 = cow_stdcall(g, COW_IMG(0x10133850u), 0);
    t306 = g->ecx;
    t307 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x1015d880u));
    wr32(sp0 - 0x3cu, 0xbu);
    g->ecx = t306;
    g->edx = t307;
    t308 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0xbu, COW_IMG(0x1015d880u));
    t309 = g->ecx;
    t310 = g->edx;
    g->ecx = t309;
    g->edx = t310;
    g->esp = sp0 - 0x3cu;
    t311 = cow_stdcall(g, COW_IMG(0x101ab6a0u), 0);
    t312 = g->ecx;
    t313 = g->edx;
    g->ecx = t312;
    g->edx = t313;
    t314 = cow_stdcall(g, COW_IMG(0x10080350u), 0);
    t315 = g->ecx;
    t316 = g->edx;
    wr32(sp0 - 0x40u, 8u);
    wr32(sp0 - 0x44u, 9u);
    g->ebx = 0u;
    g->edx = t316;
    t317 = cow_call_regs(g, COW_IMG(0x10253610u), t314, t315, g->edx, 1, 2, 9u, 8u);
    t318 = g->ecx;
    t319 = g->edx;
    g->esp = sp0 - 0x34u;
    t320 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    wr16(COW_IMG(0x10485f7au), (uint16_t)t320);
    wr32(sp0 - 0x28u, 0u);
    t321 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c360u);
    wr32(sp0 - 0x10u, t321);
    t322 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c364u);
    wr32(sp0 - 0xcu, t322);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    t323 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c368u);
    wr32(sp0 - 8u, t323);
    wr32(sp0 - 4u, 0x3f800000u);
    g->eax = t323;
    g->edx = sp0 - 0x10u;
    t324 = rd32(COW_IMG(0x10631f24u));
    t325 = cow_thiscall(g, COW_IMG(0x10181520u), t324, 2, sp0 - 0x10u, sp0 - 0x10u);
    t326 = g->ecx;
    t327 = g->edx;
    if (t325 == 0xffffffffu)
    {
        eax = t325;
        ecx = t326;
        edx = t327;
        loc_28 = 0u;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = (double)rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
    COW_AT(1009489b)
        t328 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c368u);
        wr32(sp0 - 0x1cu, t328);
        t329 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c364u);
        wr32(sp0 - 0x18u, t329);
        t330 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c360u);
        wr32(sp0 - 0x14u, t330);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, 0x41f00000u);
        wr32(sp0 - 0x40u, t328);
        wr32(sp0 - 0x44u, t329);
        wr32(sp0 - 0x48u, t330);
        g->eax = t329;
        g->edx = t328;
        t331 = rd32(COW_IMG(0x10631f24u));
        g->esp = sp0 - 0x34u;
        t332 = cow_thiscall(g, COW_IMG(0x10181290u), t331, 5, t330, t329, t328, 0x41f00000u, sp0 - 0x28u);
        t333 = g->ecx;
        t334 = g->edx;
        if ((uint8_t)t332 != 1u)
        {
            eax = t332;
            ecx = t333;
            edx = t334;
            loc_28 = 0u;
            loc_10 = rd32(sp0 - 0x10u);
            loc_c_f = (double)rdf32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            ecx = t333;
    COW_AT(100948e6)
            t335 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c360u);
            d336 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x1032a22cu)));
            wr32(sp0 - 0x10u, t335);
            wrf32(sp0 - 0xcu, (float)(double)(float)d336);
            wr32(sp0 - 4u, 0x3f800000u);
            t337 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c368u);
            wr32(sp0 - 8u, t337);
            eax = t337;
            edx = t335;
            loc_28 = rd32(sp0 - 0x28u);
            loc_10 = t335;
            loc_c_f = (double)(float)d336;
            loc_8 = t337;
        }
    }
    COW_AT(10094915)
    wr32(sp0 - 0x38u, 9u);
    wr32(sp0 - 0x3cu, 9u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t338 = cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 9u);
    t339 = g->ecx;
    t340 = g->edx;
    wr32(sp0 - 0x40u, 0x2acu);
    g->edx = t340;
    g->esp = sp0 - 0x3cu;
    t341 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
    t342 = g->edx;
    if (t341 == 0u)
    {
    COW_AT(1009493a)
        esi = 0u;
    }
    else
    {
        eax = t341;
        edx = t342;
    COW_AT(1009492f)
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t343 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
        esi = t343;
    }
    COW_AT(1009493c)
    t344 = rd32(sp0 - 0x10u);
    wr32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u, esi);
    wr32(esi + 4u, t344);
    t345 = rd32(sp0 - 0xcu);
    wr32(esi + 8u, t345);
    t346 = rd32(sp0 - 8u);
    wr32(esi + 0xcu, t346);
    t347 = rd32(sp0 - 0x10u);
    wr32(esi + 0x24u, t347);
    t348 = rd32(sp0 - 0xcu);
    wr32(esi + 0x28u, t348);
    t349 = rd32(sp0 - 8u);
    wr32(esi + 0x2cu, t349);
    t350 = rd32(sp0 - 0x10u);
    wr32(esi + 0x44u, t350);
    t351 = rd32(sp0 - 0xcu);
    wr32(esi + 0x48u, t351);
    t352 = rd32(sp0 - 8u);
    wr32(esi + 0x4cu, t352);
    t353 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c380u);
    t354 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x14u, t353);
    t355 = rd32(t354 + 0x3c384u);
    wr32(esi + 0x18u, t355);
    t356 = rd32(t354 + 0x3c388u);
    wr32(esi + 0x1cu, t356);
    t357 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c380u);
    t358 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x34u, t357);
    t359 = rd32(t358 + 0x3c384u);
    wr32(esi + 0x38u, t359);
    t360 = rd32(t358 + 0x3c388u);
    wr32(esi + 0x3cu, t360);
    g->eax = t358 + 0x3c380u;
    g->edx = t360;
    g->esp = sp0 - 0x34u;
    t361 = cow_stdcall(g, COW_IMG(0x100fc4e0u), 0);
    t362 = g->edx;
    wr32(sp0 - 0x38u, t361);
    g->edx = t362;
    t363 = cow_thiscall(g, COW_IMG(0x10093430u), esi, 1, t361);
    t364 = g->ecx;
    t365 = g->edx;
    t366 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t367 = rd32(t366);
    wr32(esi + 0x74u, t367);
    t368 = rd32(t366 + 4u);
    wr32(esi + 0x78u, t368);
    t369 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40dbau);
    t370 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x16cu, t369);
    t371 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40dbau);
    t372 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x170u, t371);
    t373 = rd32(esi + 0x120u);
    t374 = t373 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 0xau << 0xdu ^ t373) & 0x2000u);
    wr32(esi + 0x120u, t374);
    t375 = rd32(COW_IMG(0x104dfd98u));
    wr8(esi + 0xecu, rd8(t375 + 0x40dbbu));
    t376 = t374 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 0xbu << 0xeu ^ t374) & 0x4000u);
    wr32(esi + 0x120u, t376);
    t377 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 0xcu << 0x12u ^ t376) & 0x40000u) ^ t376;
    t378 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x120u, t377);
    t379 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40daeu) & 7u;
    wr32(sp0 - 0x38u, t379);
    g->eax = rd32(COW_IMG(0x104dfd98u));
    g->edx = t377;
    t380 = rd32(COW_IMG(0x104dfd98u));
    t381 = cow_thiscall(g, COW_IMG(0x10097a20u), esi, 1, t379);
    t382 = g->edx;
    g->ebx = 0u;
    t383 = cow_thiscall(g, COW_IMG(0x1009ab30u), esi, 0);
    t384 = rd32(esi + 0x120u);
    t385 = t384 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 0xdu << 0x14u ^ t384) & 0x100000u);
    t386 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu);
    wr32(esi + 0x120u, t385);
    t387 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40daeu) >> 3u << 0x16u ^ t385) & 0x400000u) ^ t385;
    t388 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x120u, t387);
    wr8(sp0 - 0x14u, rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40daeu) >> 4u & 3u);
    t389 = (uint32_t)(uint8_t)rd32(sp0 - 0x14u) << 0x1eu;
    t390 = ((t389 ^ t387) & 0x3fffffffu) ^ t389;
    wr32(esi + 0x120u, t390);
    t391 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40daeu) >> 6u;
    wr32(sp0 - 0x14u, t391);
    t392 = rd32(COW_IMG(0x104dfd98u));
    d393 = fr(g, (double)(int32_t)t391 * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(esi + 0x15cu, (float)d393);
    t394 = (t392 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c406u);
    wr32(sp0 - 0x38u, t394);
    cow_thiscall(g, COW_IMG(0x1008cd20u), esi, 1, t394);
    t395 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40dd4u);
    t396 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x188u, t395);
    t397 = rd32(esi + 0x124u);
    t398 = t397 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 2u << 0x14u ^ t397) & 0x100000u);
    t399 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x124u, t398);
    t400 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 7u << 0x15u ^ t398) & 0x200000u) ^ t398;
    wr32(esi + 0x124u, t400);
    t401 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 3u << 0x17u ^ t400) & 0x800000u) ^ t400;
    wr32(esi + 0x124u, t401);
    t402 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 5u << 0x18u ^ t401) & 0x1000000u) ^ t401;
    wr32(esi + 0x124u, t402);
    t403 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 4u << 0x16u ^ t402) & 0x400000u) ^ t402;
    wr32(esi + 0x124u, t403);
    t404 = (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 6u) << 0x19u ^ t403) & 0x2000000u) ^ t403;
    t405 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u);
    wr32(esi + 0x124u, t404);
    t406 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 7u << 0x1au ^ t404) & 0x4000000u) ^ t404;
    wr32(esi + 0x124u, t406);
    t407 = (((uint32_t)rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40db1u) << 0x1bu ^ t406) & 0x8000000u) ^ t406;
    t408 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x124u, t407);
    g->eax = t406;
    t409 = cow_stdcall(g, COW_IMG(0x10095600u), 0);
    t410 = rd32(esi + 0x124u);
    t411 = t410 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 9u << 0x1cu ^ t410) & 0x10000000u);
    wr32(esi + 0x124u, t411);
    t412 = rd32(esi + 0x140u);
    t413 = t412 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 3u << 3u ^ t412) & 8u);
    wr32(esi + 0x140u, t413);
    t414 = rd32(esi + 0x128u);
    t415 = t414 ^ (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 0xau) << 4u ^ rd32(esi + 0x128u)) & 0x10u);
    t416 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u);
    t417 = rd32(esi + 0x128u);
    wr32(esi + 0x128u, t415);
    t418 = (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 0xbu) << 5u ^ t415) & 0x20u) ^ t415;
    t419 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u);
    wr32(esi + 0x128u, t418);
    t420 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db0u) >> 0xdu << 0xbu ^ t418) & 0x3800u) ^ t418;
    wr32(esi + 0x128u, t420);
    t421 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40de0u) + rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40de1u) * 0x100u + rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40de2u) * 0x10000u;
    t422 = rd32(esi + 0x128u);
    wr32(esi + 0x1d4u, t421);
    t423 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40de4u);
    wr8(esi + 0x1ffu, 0u);
    wr16(esi + 0x1f8u, 0u);
    t424 = t422 ^ (((uint32_t)(int8_t)t423 << 0xeu ^ t422) & 0x4000u);
    wr32(esi + 0x128u, t424);
    t425 = rd32(esi + 0x128u);
    t426 = t425 ^ (((uint32_t)(int8_t)rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u) << 0x10u ^ rd32(esi + 0x128u)) & 0x10000u);
    t427 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u);
    t428 = rd32(esi + 0x128u);
    wr32(esi + 0x128u, t426);
    t429 = (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u) >> 1u) << 6u ^ t426) & 0x40u) ^ t426;
    t430 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x128u, t429);
    t431 = (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 0xeu) << 8u ^ t429) & 0x100u) ^ t429;
    t432 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu);
    wr32(esi + 0x128u, t431);
    t433 = (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u) >> 3u) << 9u ^ t431) & 0x200u) ^ t431;
    t434 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u);
    t435 = rd32(esi + 0x12cu);
    wr32(esi + 0x128u, t433);
    t436 = t435 ^ ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u) >> 4u << 0xau ^ t435) & 0x400u);
    t437 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u);
    wr32(esi + 0x12cu, t436);
    t438 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u) >> 7u << 0x12u ^ t436) & 0x40000u) ^ t436;
    t439 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 0x12cu, t438);
    t440 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40dadu) & 1u;
    wr32(sp0 - 0x38u, t440);
    t441 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0x3cu, t441);
    g->ecx = t440;
    cow_call_regs(g, COW_IMG(0x1008a9e0u), g->eax, g->ecx, t441, 1, 2, t441, t440);
    t442 = g->ecx;
    t443 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 9u & 1u;
    wr32(sp0 - 0x40u, t443);
    t444 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0x44u, t444);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x1008aa30u), g->eax, g->ecx, t444, 1, 2, t444, t443);
    t445 = g->edx;
    t446 = (rd32(esi + 0x12cu) & 0xffff00ffu) | (rd32(esi + 0x12cu) >> 8u & 0xdfu) << 8u;
    wr32(esi + 0x12cu, t446);
    t447 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 5u << 0x19u ^ t446) & 0x2000000u) ^ t446;
    wr32(esi + 0x12cu, t447);
    t448 = ((rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dacu) >> 4u << 0x1bu ^ t447) & 0x8000000u) ^ t447;
    wr32(esi + 0x12cu, t448);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        edi = t435;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        edi = t435;
    COW_AT(10094fc5)
        if (eax <= 0x168u)
        {
    COW_AT(10094fd8)
            wr32(COW_IMG(0x10486004u), 0u);
        }
        else
        {
    COW_AT(10094fcc)
            wr32(COW_IMG(0x10486004u), eax - 0x168u);
            eax = eax - 0x168u;
        }
    COW_AT(10094fde)
        wr32(COW_IMG(0x10485ff8u), 1u);
        wr32(COW_IMG(0x10485ffcu), 0u);
    }
    COW_AT(10094fee)
    if (rd32(esi + 0x120u) >> 5u & 1u)
    {
        ecx = rd32(esi + 0x120u) >> 5u;
    }
    else
    {
        ecx = rd32(esi + 0x120u) >> 5u;
    COW_AT(10094ffc)
        if (rd16(esi + 0x210u) == 0u)
        {
    COW_AT(10095005)
            wr8(esi + 0xeeu, 0u);
        }
    }
    COW_AT(1009500b)
    wr32(sp0 - 0x38u, 0u);
    t449 = rd32(COW_IMG(0x104dfd98u)) + 0x40d96u;
    wr32(sp0 - 0x3cu, t449);
    t450 = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0x40u, t450);
    g->eax = t450;
    g->edx = t449;
    g->esp = sp0 - 0x24u;
    t451 = cow_thiscall_cdecl(g, COW_IMG(0x1009afe0u), ecx, 7, t450, t449, 0u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t452 = g->edx;
    t453 = rd32(esi + 0x120u);
    wr16(esi + 0xf4u, 0u);
    wr32(esi + 0x120u, t453 & 0xfffffffeu);
    g->ebx = 0u;
    g->esi = esi;
    g->edi = edi;
    g->esp = sp0 - 0x34u;
    t454 = cow_call_regs(g, COW_IMG(0x1008f740u), t451, esi, t452, 1, 0);
    t455 = g->edx;
    g->edx = t455;
    t456 = cow_thiscall(g, COW_IMG(0x101c4ae0u), rd32(COW_IMG(0x10662dccu)), 0);
    t457 = g->edx;
    g->edx = t457;
    t458 = cow_thiscall(g, COW_IMG(0x10092c20u), esi, 0);
    t459 = g->ecx;
    t460 = g->edx;
    g->ebx = 0u;
    g->ecx = t459;
    g->edx = t460;
    t461 = cow_stdcall(g, COW_IMG(0x10084210u), 0);
    t462 = g->ecx;
    t463 = g->edx;
    wr32(sp0 - 0x38u, 0xau);
    wr32(sp0 - 0x3cu, 9u);
    g->ebx = 0u;
    g->edx = t463;
    cow_call_regs(g, COW_IMG(0x10253610u), t461, t462, g->edx, 1, 2, 9u, 0xau);
    t464 = g->ecx;
    t465 = g->edx;
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x103601bcu));
        ecx = t464;
        edx = t465;
    }
    else
    {
        eax = rd32(COW_IMG(0x103601bcu));
        ecx = t464;
        edx = t465;
    COW_AT(10095071)
        if (rd32(eax + 0x10u) != 0u)
        {
    COW_AT(10095076)
            wr32(sp0 - 0x38u, 0u);
            wr32(COW_IMG(0x1035af48u), 0u);
            wr32(COW_IMG(0x1035af44u), 0u);
            wr32(COW_IMG(0x1035af40u), 0u);
            wr32(COW_IMG(0x1035af4cu), 0x3f800000u);
            g->ebx = 0u;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t466 = cow_cdecl(g, COW_IMG(0x100a8cc0u), 3, 0u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t467 = g->ecx;
            t468 = g->edx;
            eax = t466;
            ecx = t467;
            edx = t468;
        }
    }
    COW_AT(100950a7)
    wr32(sp0 - 0x38u, 0xbu);
    wr32(sp0 - 0x3cu, 9u);
    wr8(COW_IMG(0x10487eeeu), 0u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 0xbu);
    t469 = g->ecx;
    t470 = g->edx;
    t471 = (t469 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c35au);
    wr32(sp0 - 0x40u, t471);
    t472 = (t470 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x44u, t472);
    g->eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = t471;
    t473 = rd32(COW_IMG(0x104dfd98u));
    t474 = cow_call_regs(g, COW_IMG(0x1008a7d0u), g->eax, g->ecx, t472, 1, 4, t472, t471, 9u, 0xbu);
    t475 = g->ecx;
    t476 = g->edx;
    wr32(COW_IMG(0x10487e84u), t474);
    t477 = (t475 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c35au);
    wr32(sp0 - 0x48u, t477);
    t478 = (t476 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x4cu, t478);
    g->eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = t477;
    g->edx = t478;
    t479 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x3cu;
    t480 = cow_cdecl(g, COW_IMG(0x10095380u), 4, t478, t477, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t481 = g->ecx;
    t482 = g->edx;
    g->ecx = t481;
    g->esp = sp0 - 0x4cu;
    cow_call_regs(g, COW_IMG(0x10095430u), g->eax, g->ecx, t482, 1, 0);
    t483 = g->ecx;
    t484 = g->edx;
    t485 = (t483 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c35au);
    wr32(sp0 - 0x50u, t485);
    t486 = (t484 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x54u, t486);
    g->eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = t485;
    g->edx = t486;
    t487 = rd32(COW_IMG(0x104dfd98u));
    t488 = cow_cdecl(g, COW_IMG(0x10095590u), 2, t486, t485);
    t489 = g->ecx;
    t490 = g->edx;
    wr32(sp0 - 0x58u, 0xcu);
    wr32(sp0 - 0x5cu, 9u);
    wr8(COW_IMG(0x1048098cu), 1u);
    g->ebx = 0u;
    g->edx = t490;
    g->esp = sp0 - 0x54u;
    t491 = cow_call_regs(g, COW_IMG(0x10253610u), t488, t489, g->edx, 1, 2, 9u, 0xcu);
    t492 = g->ecx;
    t493 = g->edx;
    wr32(sp0 - 0x60u, 0xdu);
    wr32(sp0 - 0x64u, 9u);
    g->ebx = 0u;
    g->edx = t493;
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10253610u), t491, t492, g->edx, 1, 2, 9u, 0xdu);
    t494 = g->edx;
    t495 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40dc4u);
    t496 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x104855a4u), t495);
    t497 = rd16(t496 + 0x40dbeu);
    wr16(COW_IMG(0x10485fe0u), (uint16_t)t497);
    wr16(COW_IMG(0x10482f24u), rd16(t496 + 0x40dcau));
    wr32(sp0 - 0x38u, t495 * 0x3cu);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x1018bbe0u), sp0 - 0x20u, 1, t495 * 0x3cu);
    t498 = (uint16_t)rd32(COW_IMG(0x10482f24u)) * 0xe10u;
    wr32(sp0 - 0x38u, t498);
    cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x24u, 1, t498);
    t499 = g->ecx;
    t500 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x38u, t500);
    t501 = rd32(sp0 - 0x20u);
    wr16(COW_IMG(0x10485fe0u), rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40dbeu));
    wr32(sp0 - 0x3cu, t501);
    t502 = (uint16_t)rd32(COW_IMG(0x10485fe0u));
    wr32(sp0 - 0x40u, t502);
    g->eax = t501;
    g->edx = t500;
    g->esp = sp0 - 0x3cu;
    t503 = cow_thiscall(g, COW_IMG(0x1018bb10u), rd32(COW_IMG(0x1065cb04u)), 1, t502);
    t504 = g->edx;
    wr32(sp0 - 0x40u, t503);
    g->ebx = 0u;
    g->esi = esi;
    t505 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x101874f0u), t505, 3, t503, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t506 = g->ecx;
    t507 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40dc0u);
    t508 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x104855a4u), t507);
    t509 = rd16(t508 + 0x40dbcu);
    wr16(COW_IMG(0x10485fe0u), (uint16_t)t509);
    t510 = rd16(t508 + 0x40dc8u);
    wr16(COW_IMG(0x10482f24u), (uint16_t)t510);
    t511 = (t506 & 0xffff0000u) | t509;
    wr32(sp0 - 0x38u, t511);
    t512 = rd16(t508 + 0x40dbcu);
    wr16(COW_IMG(0x10485fe0u), (uint16_t)t512);
    wr32(sp0 - 0x3cu, 0u);
    g->eax = (t508 & 0xffff0000u) | t512;
    g->edx = (t507 & 0xffff0000u) | t510;
    g->esp = sp0 - 0x38u;
    t513 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x38u, 1, 0u);
    t514 = g->ecx;
    t515 = g->edx;
    wr32(sp0 - 0x3cu, t514);
    wr32(sp0 - 0x40u, 0u);
    g->edx = t515;
    g->esp = sp0 - 0x3cu;
    t516 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x3cu, 1, 0u);
    t517 = g->edx;
    t518 = (uint16_t)rd32(COW_IMG(0x10485fe0u));
    wr32(sp0 - 0x40u, t518);
    g->edx = t517;
    t519 = cow_thiscall(g, COW_IMG(0x1018bb10u), rd32(COW_IMG(0x1065cb04u)), 1, t518);
    t520 = g->edx;
    wr32(sp0 - 0x40u, t519);
    g->ebx = 0u;
    g->esi = esi;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x101874f0u), rd32(COW_IMG(0x1065cb04u)), 3, t519, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    eax = COW_IMG(0x10485fe4u);
    ecx = rd32(COW_IMG(0x104dfd98u)) + 0x40d84u;
    edx = rd32(COW_IMG(0x104dfd98u));
L_1009524b: ;
    COW_AT(1009524b)
    t521 = rd16(ecx);
    wr16(eax, (uint16_t)t521);
    if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10485feeu))
    {
        eax = eax + 2u;
        ecx = ecx + 2u;
        edx = (edx & 0xffff0000u) | t521;
        goto L_1009524b;
    }
    eax = eax + 2u;
    ecx = ecx + 2u;
    edx = (edx & 0xffff0000u) | t521;
    COW_AT(1009525e)
    wr16(COW_IMG(0x10485feeu), 0x6fu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t522 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t523 = g->ecx;
    t524 = g->edx;
    if ((uint8_t)t522 == 0u)
    {
        eax = t522;
        ecx = t523;
        edx = t524;
    }
    else
    {
        ecx = t523;
        edx = t524;
    COW_AT(10095270)
        wr16(COW_IMG(0x10485feau), 0x46u);
        wr16(COW_IMG(0x10485fe8u), 0x46u);
        eax = 0x46u;
    }
    COW_AT(10095281)
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t525 = cow_call_regs(g, COW_IMG(0x10093e50u), eax, ecx, g->edx, 1, 7, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t526 = g->edx;
    wr8(COW_IMG(0x10485ff4u), 0u);
    wr8(COW_IMG(0x10482f45u), 0u);
    wr32(COW_IMG(0x10482f20u), 0u);
    g->esp = sp0 - 0x34u;
    cow_fastcall(g, COW_IMG(0x1008b170u), esi, t526, 0);
    t527 = g->ecx;
    t528 = rd32(esi + 0x12cu);
    t529 = t528 ^ (((uint32_t)(int8_t)(rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u) >> 6u) << 0xdu ^ t528) & 0x2000u);
    t530 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40db2u);
    wr32(esi + 0x12cu, t529);
    g->edx = ((uint32_t)(int8_t)(t530 >> 6u) << 0xdu ^ t528) & 0x2000u;
    t531 = cow_call_regs(g, COW_IMG(0x10095650u), t529, ((t527 & 0xffff0000u) | t530) >> 6u, g->edx, 1, 0);
    t532 = g->ecx;
    t533 = g->edx;
    g->ebx = 0u;
    g->ecx = t532;
    g->edx = t533;
    t534 = cow_call_regs(g, COW_IMG(0x101a80d0u), t531, g->ecx, g->edx, 1, 0);
    t535 = g->ecx;
    t536 = g->edx;
    wr32(sp0 - 0x38u, 0xeu);
    wr32(sp0 - 0x3cu, 9u);
    g->ebx = 0u;
    g->edx = t536;
    cow_call_regs(g, COW_IMG(0x10253610u), t534, t535, g->edx, 1, 2, 9u, 0xeu);
    t537 = g->ecx;
    t538 = g->edx;
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d90u) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = t537;
        edx = t538;
    COW_AT(1009534e)
        g->ebx = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t552 = cow_call_regs(g, COW_IMG(0x100955d0u), eax, g->ecx, g->edx, 1, 0);
        t553 = g->ecx;
        t554 = g->edx;
        g->ecx = t553;
        g->edx = t554;
        t555 = cow_stdcall(g, COW_IMG(0x10095600u), 0);
        t556 = g->ecx;
        t557 = g->edx;
        eax = t555;
        ecx = t556;
        edx = t557;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = t537;
        edx = t538;
    COW_AT(100952f0)
        if ((int8_t)rd8(eax + 0x40d94u) >= 0)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 0x40d94u);
        }
        else
        {
    COW_AT(100952fa)
            wr32(sp0 - 0x38u, 0u);
            t539 = rd32(COW_IMG(0x104e2150u));
            wr8(COW_IMG(0x10485ff4u), 1u);
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t540 = cow_call_regs(g, COW_IMG(0x10136870u), t539, rd32(t539 + 0x30u), g->edx, 0, 3, 1u, 0u, 0u);
            t541 = g->edx;
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 1u);
            g->edx = t541;
            t542 = rd32(rd32(COW_IMG(0x104e2154u)) + 0x30u);
            t543 = cow_call_regs(g, COW_IMG(0x10136870u), t540, t542, g->edx, 0, 3, 1u, 0u, 0u);
            t544 = g->ecx;
            t545 = g->edx;
            wr32(sp0 - 0x38u, 0u);
            wr8(COW_IMG(0x10487fc9u), 1u);
            g->ebx = 0u;
            g->ecx = t544;
            g->edx = t545;
            g->esp = sp0 - 0x2cu;
            t546 = cow_cdecl(g, COW_IMG(0x100a8cc0u), 3, 0u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t547 = g->ecx;
            t548 = g->edx;
            eax = t546;
            ecx = t547;
            edx = t548;
        }
    COW_AT(10095334)
        wr32(sp0 - 0x38u, 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t549 = cow_call_regs(g, COW_IMG(0x10123e60u), eax, g->ecx, g->edx, 1, 1, 1u);
        t550 = g->ecx;
        t551 = g->edx;
        wr8(COW_IMG(0x10482f18u), 1u);
        wr8(COW_IMG(0x10487e48u), 1u);
        eax = t549;
        ecx = t550;
        edx = t551;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
    }
L_10095358: ;
    COW_AT(10095358)
    wr32(sp0 - 0x38u, 0xfu);
    wr32(sp0 - 0x3cu, 9u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t558 = cow_call_regs(g, COW_IMG(0x10253610u), eax, ecx, g->edx, 1, 2, 9u, 0xfu);
    t559 = g->ecx;
    t560 = g->edx;
    t561 = cow_stdcall(g, COW_IMG(0x102535f0u), 0);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (t561 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10094190(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100941b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100941bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100941c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094218u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094222u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009422bu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009423du:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009424du:
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
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094255u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009426au:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100942f0u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094301u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094329u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009432fu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094346u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009434du:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094362u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009437du:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094385u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094393u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100943a2u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100943a8u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100943fcu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094401u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094427u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009489bu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100948e6u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10094915u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009492fu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009493au:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009493cu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094fc5u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094fccu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094fd8u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094fdeu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094feeu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10094ffcu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095005u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009500bu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095071u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095076u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100950a7u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009524bu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009525eu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095270u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095281u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100952f0u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100952fau:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095334u:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009534eu:
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
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10095358u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10094190(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10094190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
