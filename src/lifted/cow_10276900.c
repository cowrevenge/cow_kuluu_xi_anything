/* f_0x10276900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10276900(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m14;
    uint32_t al_m4;
    uint32_t al_m8;
    double d106;
    double d113;
    double d120;
    double d127;
    double d134;
    double d141;
    double d148;
    double d155;
    double d16;
    double d162;
    double d181;
    double d188;
    double d237;
    double d256;
    double d257;
    double d258;
    double d259;
    double d266;
    double d273;
    double d280;
    double d293;
    double d294;
    double d295;
    double d296;
    double d336;
    double d35;
    double d42;
    double d438;
    double d439;
    double d440;
    double d456;
    double d457;
    double d458;
    double d491;
    double d492;
    double d493;
    double d509;
    double d510;
    double d511;
    double d544;
    double d545;
    double d546;
    double d645;
    double d658;
    double d659;
    double d660;
    double d661;
    double d668;
    double d669;
    double d670;
    double d671;
    double d684;
    double d691;
    double d698;
    double d79;
    double d80;
    double d81;
    double d88;
    double d89;
    double d90;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t160;
    uint32_t t161;
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
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
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
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
    uint32_t t263;
    uint32_t t264;
    uint32_t t265;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t272;
    uint32_t t274;
    uint32_t t275;
    uint32_t t276;
    uint32_t t277;
    uint32_t t278;
    uint32_t t279;
    uint32_t t28;
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
    uint32_t t44;
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
    uint32_t t51;
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
    uint32_t t592;
    uint32_t t593;
    uint32_t t594;
    uint32_t t595;
    uint32_t t596;
    uint32_t t597;
    uint32_t t598;
    uint32_t t599;
    uint32_t t6;
    uint32_t t60;
    uint32_t t600;
    uint32_t t601;
    uint32_t t602;
    uint32_t t603;
    uint32_t t604;
    uint32_t t605;
    uint32_t t606;
    uint32_t t607;
    uint32_t t608;
    uint32_t t609;
    uint32_t t61;
    uint32_t t610;
    uint32_t t611;
    uint32_t t612;
    uint32_t t613;
    uint32_t t614;
    uint32_t t615;
    uint32_t t616;
    uint32_t t617;
    uint32_t t618;
    uint32_t t619;
    uint32_t t62;
    uint32_t t620;
    uint32_t t621;
    uint32_t t622;
    uint32_t t623;
    uint32_t t624;
    uint32_t t625;
    uint32_t t626;
    uint32_t t627;
    uint32_t t628;
    uint32_t t629;
    uint32_t t63;
    uint32_t t630;
    uint32_t t631;
    uint32_t t632;
    uint32_t t633;
    uint32_t t634;
    uint32_t t635;
    uint32_t t636;
    uint32_t t637;
    uint32_t t638;
    uint32_t t639;
    uint32_t t64;
    uint32_t t640;
    uint32_t t641;
    uint32_t t642;
    uint32_t t643;
    uint32_t t644;
    uint32_t t646;
    uint32_t t647;
    uint32_t t648;
    uint32_t t649;
    uint32_t t65;
    uint32_t t650;
    uint32_t t651;
    uint32_t t652;
    uint32_t t653;
    uint32_t t654;
    uint32_t t655;
    uint32_t t656;
    uint32_t t657;
    uint32_t t66;
    uint32_t t662;
    uint32_t t663;
    uint32_t t664;
    uint32_t t665;
    uint32_t t666;
    uint32_t t667;
    uint32_t t67;
    uint32_t t672;
    uint32_t t673;
    uint32_t t674;
    uint32_t t675;
    uint32_t t676;
    uint32_t t677;
    uint32_t t678;
    uint32_t t679;
    uint32_t t68;
    uint32_t t680;
    uint32_t t681;
    uint32_t t682;
    uint32_t t683;
    uint32_t t685;
    uint32_t t686;
    uint32_t t687;
    uint32_t t688;
    uint32_t t689;
    uint32_t t69;
    uint32_t t690;
    uint32_t t692;
    uint32_t t693;
    uint32_t t694;
    uint32_t t695;
    uint32_t t696;
    uint32_t t697;
    uint32_t t699;
    uint32_t t7;
    uint32_t t70;
    uint32_t t700;
    uint32_t t701;
    uint32_t t702;
    uint32_t t703;
    uint32_t t704;
    uint32_t t705;
    uint32_t t706;
    uint32_t t707;
    uint32_t t708;
    uint32_t t709;
    uint32_t t71;
    uint32_t t710;
    uint32_t t711;
    uint32_t t712;
    uint32_t t713;
    uint32_t t714;
    uint32_t t715;
    uint32_t t716;
    uint32_t t717;
    uint32_t t718;
    uint32_t t719;
    uint32_t t72;
    uint32_t t720;
    uint32_t t721;
    uint32_t t722;
    uint32_t t723;
    uint32_t t724;
    uint32_t t725;
    uint32_t t726;
    uint32_t t727;
    uint32_t t728;
    uint32_t t729;
    uint32_t t73;
    uint32_t t730;
    uint32_t t731;
    uint32_t t732;
    uint32_t t733;
    uint32_t t734;
    uint32_t t735;
    uint32_t t736;
    uint32_t t737;
    uint32_t t738;
    uint32_t t739;
    uint32_t t74;
    uint32_t t740;
    uint32_t t741;
    uint32_t t742;
    uint32_t t743;
    uint32_t t744;
    uint32_t t745;
    uint32_t t746;
    uint32_t t747;
    uint32_t t748;
    uint32_t t749;
    uint32_t t75;
    uint32_t t750;
    uint32_t t751;
    uint32_t t752;
    uint32_t t753;
    uint32_t t754;
    uint32_t t755;
    uint32_t t756;
    uint32_t t757;
    uint32_t t758;
    uint32_t t759;
    uint32_t t76;
    uint32_t t760;
    uint32_t t761;
    uint32_t t762;
    uint32_t t763;
    uint32_t t764;
    uint32_t t765;
    uint32_t t766;
    uint32_t t767;
    uint32_t t768;
    uint32_t t769;
    uint32_t t77;
    uint32_t t770;
    uint32_t t771;
    uint32_t t772;
    uint32_t t773;
    uint32_t t774;
    uint32_t t775;
    uint32_t t776;
    uint32_t t777;
    uint32_t t778;
    uint32_t t779;
    uint32_t t78;
    uint32_t t780;
    uint32_t t781;
    uint32_t t782;
    uint32_t t783;
    uint32_t t784;
    uint32_t t785;
    uint32_t t786;
    uint32_t t787;
    uint32_t t788;
    uint32_t t789;
    uint32_t t790;
    uint32_t t791;
    uint32_t t792;
    uint32_t t793;
    uint32_t t794;
    uint32_t t795;
    uint32_t t796;
    uint32_t t797;
    uint32_t t798;
    uint32_t t799;
    uint32_t t8;
    uint32_t t800;
    uint32_t t801;
    uint32_t t802;
    uint32_t t803;
    uint32_t t804;
    uint32_t t805;
    uint32_t t806;
    uint32_t t807;
    uint32_t t808;
    uint32_t t809;
    uint32_t t810;
    uint32_t t811;
    uint32_t t812;
    uint32_t t813;
    uint32_t t814;
    uint32_t t815;
    uint32_t t816;
    uint32_t t817;
    uint32_t t818;
    uint32_t t819;
    uint32_t t82;
    uint32_t t820;
    uint32_t t821;
    uint32_t t822;
    uint32_t t823;
    uint32_t t824;
    uint32_t t825;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10276915u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_10276915;
    case 0x10276923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276923;
    case 0x10276930u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276930;
    case 0x1027693au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027693a;
    case 0x10276943u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276943;
    case 0x10276956u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276956;
    case 0x1027695cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027695c;
    case 0x10276966u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276966;
    case 0x1027696cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027696c;
    case 0x1027697du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027697d;
    case 0x10276983u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276983;
    case 0x10276999u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276999;
    case 0x1027699fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027699f;
    case 0x102769b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769b5;
    case 0x102769bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769bb;
    case 0x102769c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769c5;
    case 0x102769cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769cb;
    case 0x102769d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769d5;
    case 0x102769e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769e5;
    case 0x102769ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769eb;
    case 0x102769f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102769f5;
    case 0x10276a05u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a05;
    case 0x10276a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a0b;
    case 0x10276a18u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a18;
    case 0x10276a28u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a28;
    case 0x10276a2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a2e;
    case 0x10276a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a56;
    case 0x10276a5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a5c;
    case 0x10276a86u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a86;
    case 0x10276a8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276a8c;
    case 0x10276ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276ab6;
    case 0x10276abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276abc;
    case 0x10276ad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276ad2;
    case 0x10276ad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276ad8;
    case 0x10276aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276aee;
    case 0x10276af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276af4;
    case 0x10276b0au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b0a;
    case 0x10276b10u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b10;
    case 0x10276b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b26;
    case 0x10276b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b2c;
    case 0x10276b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b42;
    case 0x10276b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b48;
    case 0x10276b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b5e;
    case 0x10276b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b64;
    case 0x10276b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b7a;
    case 0x10276b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b80;
    case 0x10276b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b96;
    case 0x10276b9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276b9c;
    case 0x10276bb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276bb2;
    case 0x10276bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276bb8;
    case 0x10276bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276bc9;
    case 0x10276bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276bcf;
    case 0x10276be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276be0;
    case 0x10276be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276be6;
    case 0x10276bfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276bfc;
    case 0x10276c02u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c02;
    case 0x10276c18u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c18;
    case 0x10276c1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c1e;
    case 0x10276c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c2f;
    case 0x10276c35u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c35;
    case 0x10276c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c3f;
    case 0x10276c4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c4f;
    case 0x10276c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10276c55;
    case 0x10276c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276c5f;
    case 0x10276c70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m10 = rd32(sp1 - 0x10u); al_m8 = rd32(sp1 - 8u); goto E_10276c70;
    case 0x10276c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m10 = rd32(sp1 - 0x10u); al_m8 = rd32(sp1 - 8u); goto E_10276c78;
    case 0x10276c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276c82;
    case 0x10276c8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276c8c;
    case 0x10276c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10276c9d;
    case 0x10276ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m10 = rd32(sp1 - 0x10u); al_m8 = rd32(sp1 - 8u); goto E_10276ca8;
    case 0x10276caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276cae;
    case 0x10276cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276cb8;
    case 0x10276cc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10276cc9;
    case 0x10276cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276cdb;
    case 0x10276cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10276cec;
    case 0x10276cf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276cf6;
    case 0x10276cfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276cfc;
    case 0x10276d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d0f;
    case 0x10276d15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d15;
    case 0x10276d28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d28;
    case 0x10276d32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d32;
    case 0x10276d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d3c;
    case 0x10276d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d42;
    case 0x10276d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d76;
    case 0x10276d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d7c;
    case 0x10276d92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d92;
    case 0x10276d98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276d98;
    case 0x10276daeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276dae;
    case 0x10276db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276db4;
    case 0x10276dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276dca;
    case 0x10276dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276dd0;
    case 0x10276de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276de1;
    case 0x10276de7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276de7;
    case 0x10276e19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e19;
    case 0x10276e1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e1f;
    case 0x10276e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e30;
    case 0x10276e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e36;
    case 0x10276e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e40;
    case 0x10276e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m14 = rd32(sp1 - 0x14u); al_m10 = rd32(sp1 - 0x10u); al_m8 = rd32(sp1 - 8u); al_m4 = rd32(sp1 - 4u); goto E_10276e6c;
    case 0x10276e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e76;
    case 0x10276e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e85;
    case 0x10276e8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e8f;
    case 0x10276e9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276e9e;
    case 0x10276ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276ea8;
    case 0x10276ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276ebb;
    case 0x10276edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m14 = rd32(sp1 - 0x14u); al_m8 = rd32(sp1 - 8u); goto E_10276eda;
    case 0x10276ee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276ee4;
    case 0x10276eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276eee;
    case 0x10276ef4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276ef4;
    case 0x10276f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f0a;
    case 0x10276f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f10;
    case 0x10276f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f21;
    case 0x10276f27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f27;
    case 0x10276f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f38;
    case 0x10276f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f3e;
    case 0x10276f4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f4f;
    case 0x10276f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f55;
    case 0x10276f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f66;
    case 0x10276f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f6c;
    case 0x10276f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f80;
    case 0x10276f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f86;
    case 0x10276f97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f97;
    case 0x10276f9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276f9d;
    case 0x10276faeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276fae;
    case 0x10276fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276fb4;
    case 0x10276fc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276fc5;
    case 0x10276fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276fcb;
    case 0x10276fdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276fdc;
    case 0x10276fe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276fe2;
    case 0x10276ff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276ff3;
    case 0x10276ffcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10276ffc;
    case 0x1027700du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027700d;
    case 0x10277013u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277013;
    case 0x10277024u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277024;
    case 0x1027702au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027702a;
    case 0x1027703bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027703b;
    case 0x10277041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277041;
    case 0x10277052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277052;
    case 0x10277058u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277058;
    case 0x10277062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277062;
    case 0x10277073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277073;
    case 0x10277079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277079;
    case 0x1027708au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027708a;
    case 0x10277090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277090;
    case 0x1027709au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027709a;
    case 0x102770a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102770a4;
    case 0x102770b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102770b0;
    case 0x102770b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_102770b4;
    case 0x102770beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102770be;
    case 0x102770eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102770ea;
    case 0x10277103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10277103;
    case 0x10277109u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277109;
    case 0x10277113u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277113;
    case 0x10277124u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277124;
    case 0x1027712au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027712a;
    case 0x10277134u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277134;
    case 0x1027713eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027713e;
    case 0x1027714au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027714a;
    case 0x1027714eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_1027714e;
    case 0x10277158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277158;
    case 0x10277184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277184;
    case 0x1027719du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_1027719d;
    case 0x102771a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102771a3;
    case 0x102771adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102771ad;
    case 0x102771b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102771b0;
    case 0x102771bau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102771ba;
    case 0x102771c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102771c0;
    case 0x102771cau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102771ca;
    case 0x102771d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102771d4;
    case 0x102771e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m14 = rd32(sp1 - 0x14u); goto E_102771e6;
    case 0x102771f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102771f0;
    case 0x10277201u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277201;
    case 0x1027721au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m14 = rd32(sp1 - 0x14u); goto E_1027721a;
    case 0x10277220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277220;
    case 0x1027722au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027722a;
    case 0x1027722du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027722d;
    case 0x1027723bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027723b;
    case 0x10277241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277241;
    case 0x1027724bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027724b;
    case 0x10277255u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277255;
    case 0x10277261u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10277261;
    case 0x10277265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10277265;
    case 0x1027726fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027726f;
    case 0x1027729bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027729b;
    case 0x102772b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_102772b4;
    case 0x102772bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772ba;
    case 0x102772c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772c4;
    case 0x102772c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772c7;
    case 0x102772d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772d5;
    case 0x102772dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772db;
    case 0x102772e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772e5;
    case 0x102772efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102772ef;
    case 0x102772fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102772fb;
    case 0x102772ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_102772ff;
    case 0x10277309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277309;
    case 0x10277335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277335;
    case 0x1027734eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_1027734e;
    case 0x10277354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277354;
    case 0x1027735eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027735e;
    case 0x10277361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277361;
    case 0x1027736bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027736b;
    case 0x10277371u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10277371;
    case 0x1027737bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027737b;
    case 0x10277385u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10277385;
    case 0x10277397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m14 = rd32(sp1 - 0x14u); goto E_10277397;
    case 0x102773a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773a1;
    case 0x102773b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773b2;
    case 0x102773cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m14 = rd32(sp1 - 0x14u); goto E_102773cb;
    case 0x102773d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773d1;
    case 0x102773dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773db;
    case 0x102773deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773de;
    case 0x102773ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773ec;
    case 0x102773f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773f2;
    case 0x102773fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102773fc;
    case 0x10277406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277406;
    case 0x10277412u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10277412;
    case 0x10277416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10277416;
    case 0x10277420u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277420;
    case 0x1027744cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027744c;
    case 0x10277465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; al_m8 = rd32(sp1 - 8u); goto E_10277465;
    case 0x1027746bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027746b;
    case 0x10277475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277475;
    case 0x10277478u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277478;
    case 0x10277482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277482;
    case 0x10277488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277488;
    case 0x10277492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277492;
    case 0x1027749cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027749c;
    case 0x102774a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774a8;
    case 0x102774b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774b2;
    case 0x102774c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774c6;
    case 0x102774d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774d4;
    case 0x102774dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774da;
    case 0x102774e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774e4;
    case 0x102774e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774e7;
    case 0x102774ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774eb;
    case 0x102774f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102774f1;
    case 0x10277502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277502;
    case 0x10277508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277508;
    case 0x10277519u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277519;
    case 0x1027751fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027751f;
    case 0x10277530u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277530;
    case 0x10277536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277536;
    case 0x10277547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277547;
    case 0x1027754du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027754d;
    case 0x1027755eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027755e;
    case 0x10277564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277564;
    case 0x10277578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277578;
    case 0x1027757eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027757e;
    case 0x1027758fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027758f;
    case 0x10277595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277595;
    case 0x102775a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775a6;
    case 0x102775acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775ac;
    case 0x102775bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775bd;
    case 0x102775c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775c3;
    case 0x102775d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775d4;
    case 0x102775dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775da;
    case 0x102775e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775e4;
    case 0x102775edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775ed;
    case 0x102775f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775f7;
    case 0x102775fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102775fd;
    case 0x10277613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277613;
    case 0x10277619u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277619;
    case 0x10277623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277623;
    case 0x10277629u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277629;
    case 0x1027765cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027765c;
    case 0x10277662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277662;
    case 0x10277696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277696;
    case 0x1027769cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027769c;
    case 0x102776a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776a6;
    case 0x102776acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776ac;
    case 0x102776c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776c2;
    case 0x102776c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776c8;
    case 0x102776deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776de;
    case 0x102776e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776e4;
    case 0x102776fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102776fa;
    case 0x10277700u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277700;
    case 0x10277711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277711;
    case 0x10277717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277717;
    case 0x10277721u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277721;
    case 0x10277727u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277727;
    case 0x10277738u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277738;
    case 0x1027773eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027773e;
    case 0x1027774fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027774f;
    case 0x10277755u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277755;
    case 0x10277766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277766;
    case 0x1027776fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027776f;
    case 0x10277780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277780;
    case 0x10277786u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277786;
    case 0x10277790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277790;
    case 0x10277796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277796;
    case 0x102777a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777a7;
    case 0x102777adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777ad;
    case 0x102777beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777be;
    case 0x102777c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777c4;
    case 0x102777d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777d5;
    case 0x102777dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777db;
    case 0x102777ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777ec;
    case 0x102777f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102777f5;
    case 0x10277806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277806;
    case 0x1027780cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027780c;
    case 0x10277816u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277816;
    case 0x1027781cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027781c;
    case 0x10277826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277826;
    case 0x1027782cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027782c;
    case 0x1027783du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027783d;
    case 0x10277843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277843;
    case 0x10277854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277854;
    case 0x1027785au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027785a;
    case 0x1027786bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027786b;
    case 0x10277874u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277874;
    case 0x1027787eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027787e;
    case 0x10277884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277884;
    case 0x1027788eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027788e;
    case 0x10277894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10277894;
    case 0x1027789eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1027789e;
    case 0x102778a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102778a4;
    case 0x102778aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102778ae;
    default: break;
    }
#endif

    COW_AT(10276900)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x18u, in_ebx);
    wr32(sp1 - 0x1cu, in_esi);
    wr32(sp1 - 0x20u, in_edi);
    wr32(sp1 - 0x24u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10276915)
    wr32(sp1 - 0x28u, arg1);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b36b4u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b36b4u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10276923)
    wr32(sp1 - 0x30u, arg3 + 1u);
    wr32(sp1 - 0xcu, arg3 + 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b36b4u), arg1);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10276930)
    wr32(sp1 - 0x34u, COW_IMG(0x103b369cu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b369cu), rd32(sp1 - 0x30u));
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(1027693a)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b369cu), rd32(sp1 - 0x30u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(10276943)
    d16 = (double)rdf32(arg1 + 0x14u);
    wrf64(sp1 - 0x28u, d16);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b368cu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b368cu), cow_dlo(d16));
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(10276956)
    wr32(sp1 - 0x30u, arg3 + 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t20 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b368cu), rd32(sp1 - 0x28u));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1027695c)
    wr32(sp1 - 0x34u, COW_IMG(0x103b3674u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3674u), rd32(sp1 - 0x30u));
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(10276966)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3674u), rd32(sp1 - 0x30u));
    t26 = g->ecx;
    t27 = g->edx;
    ecx = t26;
    edx = t27;
    COW_AT(1027696c)
    t28 = rd32(arg1 + 0x11cu);
    wr32(sp1 - 0x3cu, t28);
    wr32(sp1 - 0x40u, COW_IMG(0x103b365cu));
    g->ebx = arg3 + 1u;
    g->eax = t28;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b365cu), t28);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(1027697d)
    wr32(sp1 - 0x44u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t32 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b365cu), rd32(sp1 - 0x3cu));
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(10276983)
    d35 = (double)rdf32(arg1 + 0x120u);
    wrf64(sp1 - 0x28u, d35);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3640u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3640u), cow_dlo(d35));
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(10276999)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t39 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3640u), rd32(sp1 - 0x28u));
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(1027699f)
    d42 = (double)rdf32(arg1 + 0x128u);
    wrf64(sp1 - 0x28u, d42);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3630u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t43 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3630u), cow_dlo(d42));
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(102769b5)
    wr32(sp1 - 0x30u, arg3 + 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t46 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b3630u), rd32(sp1 - 0x28u));
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(102769bb)
    wr32(sp1 - 0x34u, COW_IMG(0x103b3618u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t49 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3618u), rd32(sp1 - 0x30u));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(102769c5)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t52 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3618u), rd32(sp1 - 0x30u));
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(102769cb)
    wr32(sp1 - 0x3cu, COW_IMG(0x103b3610u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t55 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3610u), rd32(sp1 - 0x38u));
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(102769d5)
    wr32(sp1 - 0x40u, 3u);
    wr32(sp1 - 0x44u, 0u);
    wr32(sp1 - 0x48u, arg1 + 0x188u);
    g->eax = eax;
    g->ecx = arg1 + 0x188u;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t57 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x188u, 0u, 3u, COW_IMG(0x103b3610u), rd32(sp1 - 0x38u), rd32(sp1 - 0x34u), rd32(sp1 - 0x30u));
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(102769e5)
    wr32(sp1 - 0x4cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x40u;
    t60 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x48u), 0u);
    t61 = g->ecx;
    t62 = g->edx;
    eax = t60;
    ecx = t61;
    edx = t62;
    COW_AT(102769eb)
    wr32(sp1 - 0x50u, COW_IMG(0x103b3608u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x48u;
    t63 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3608u), rd32(sp1 - 0x4cu));
    t64 = g->ecx;
    eax = t63;
    ecx = t64;
    COW_AT(102769f5)
    wr32(sp1 - 0x54u, 3u);
    wr32(sp1 - 0x58u, 0u);
    wr32(sp1 - 0x5cu, arg1 + 0x1c8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = arg1 + 0x1c8u;
    g->esp = sp1 - 0x40u;
    t65 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x1c8u, 0u, 3u, COW_IMG(0x103b3608u), rd32(sp1 - 0x4cu), rd32(sp1 - 0x48u), rd32(sp1 - 0x44u));
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(10276a05)
    wr32(sp1 - 0x60u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x54u;
    t68 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x5cu), 0u);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(10276a0b)
    wr32(sp1 - 0x24u, COW_IMG(0x103b3600u));
    g->ebx = arg3 + 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3600u), rd32(sp1 - 0x20u));
    t71 = g->ecx;
    t72 = g->edx;
    ecx = t71;
    edx = t72;
    COW_AT(10276a18)
    wr32(sp1 - 0x28u, 3u);
    wr32(sp1 - 0x2cu, 0u);
    wr32(sp1 - 0x30u, arg1 + 0x248u);
    g->eax = arg1 + 0x248u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x14u;
    t73 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x248u, 0u, 3u, COW_IMG(0x103b3600u), rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u));
    t74 = g->ecx;
    t75 = g->edx;
    eax = t73;
    ecx = t74;
    edx = t75;
    COW_AT(10276a28)
    wr32(sp1 - 0x34u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x28u;
    t76 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x30u), 0u);
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(10276a2e)
    wr32(sp1 - 0x38u, ecx);
    d79 = (double)rdf32(arg1 + 0x290u);
    wrf64(sp1 - 0x28u, d79);
    d80 = (double)rdf32(arg1 + 0x28cu);
    wrf64(sp1 - 0x30u, d80);
    d81 = (double)rdf32(arg1 + 0x288u);
    wrf64(sp1 - 0x38u, d81);
    wr32(sp1 - 0x3cu, COW_IMG(0x103b35ecu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t82 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b35ecu), cow_dlo(d81));
    t83 = g->ecx;
    t84 = g->edx;
    eax = t82;
    ecx = t83;
    edx = t84;
    COW_AT(10276a56)
    wr32(sp1 - 0x40u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t85 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b35ecu), rd32(sp1 - 0x38u));
    t86 = g->ecx;
    t87 = g->edx;
    eax = t85;
    ecx = t86;
    edx = t87;
    COW_AT(10276a5c)
    d88 = (double)rdf32(arg1 + 0x29cu);
    wrf64(sp1 - 0x28u, d88);
    d89 = (double)rdf32(arg1 + 0x298u);
    wrf64(sp1 - 0x30u, d89);
    d90 = (double)rdf32(arg1 + 0x294u);
    wrf64(sp1 - 0x38u, d90);
    wr32(sp1 - 0x3cu, COW_IMG(0x103b35d4u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t91 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b35d4u), cow_dlo(d90));
    t92 = g->ecx;
    t93 = g->edx;
    eax = t91;
    ecx = t92;
    edx = t93;
    COW_AT(10276a86)
    wr32(sp1 - 0x40u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t94 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b35d4u), rd32(sp1 - 0x38u));
    t95 = g->ecx;
    t96 = g->edx;
    eax = t94;
    ecx = t95;
    edx = t96;
    COW_AT(10276a8c)
    d97 = (double)rdf32(arg1 + 0x2a8u);
    wrf64(sp1 - 0x28u, d97);
    d98 = (double)rdf32(arg1 + 0x2a4u);
    wrf64(sp1 - 0x30u, d98);
    d99 = (double)rdf32(arg1 + 0x2a0u);
    wrf64(sp1 - 0x38u, d99);
    wr32(sp1 - 0x3cu, COW_IMG(0x103b35bcu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t100 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b35bcu), cow_dlo(d99));
    t101 = g->ecx;
    t102 = g->edx;
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(10276ab6)
    wr32(sp1 - 0x40u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t103 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b35bcu), rd32(sp1 - 0x38u));
    t104 = g->ecx;
    t105 = g->edx;
    eax = t103;
    ecx = t104;
    edx = t105;
    COW_AT(10276abc)
    d106 = (double)rdf32(arg1 + 0x2acu);
    wrf64(sp1 - 0x28u, d106);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b35b0u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t107 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b35b0u), cow_dlo(d106));
    t108 = g->ecx;
    t109 = g->edx;
    eax = t107;
    ecx = t108;
    edx = t109;
    COW_AT(10276ad2)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t110 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b35b0u), rd32(sp1 - 0x28u));
    t111 = g->ecx;
    t112 = g->edx;
    eax = t110;
    ecx = t111;
    edx = t112;
    COW_AT(10276ad8)
    d113 = (double)rdf32(arg1 + 0x2b0u);
    wrf64(sp1 - 0x28u, d113);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b35a0u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t114 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b35a0u), cow_dlo(d113));
    t115 = g->ecx;
    t116 = g->edx;
    eax = t114;
    ecx = t115;
    edx = t116;
    COW_AT(10276aee)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t117 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b35a0u), rd32(sp1 - 0x28u));
    t118 = g->ecx;
    t119 = g->edx;
    eax = t117;
    ecx = t118;
    edx = t119;
    COW_AT(10276af4)
    d120 = (double)rdf32(arg1 + 0x2b4u);
    wrf64(sp1 - 0x28u, d120);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3590u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t121 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3590u), cow_dlo(d120));
    t122 = g->ecx;
    t123 = g->edx;
    eax = t121;
    ecx = t122;
    edx = t123;
    COW_AT(10276b0a)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t124 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3590u), rd32(sp1 - 0x28u));
    t125 = g->ecx;
    t126 = g->edx;
    eax = t124;
    ecx = t125;
    edx = t126;
    COW_AT(10276b10)
    d127 = (double)rdf32(arg1 + 0x2b8u);
    wrf64(sp1 - 0x28u, d127);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3584u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t128 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3584u), cow_dlo(d127));
    t129 = g->ecx;
    t130 = g->edx;
    eax = t128;
    ecx = t129;
    edx = t130;
    COW_AT(10276b26)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t131 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3584u), rd32(sp1 - 0x28u));
    t132 = g->ecx;
    t133 = g->edx;
    eax = t131;
    ecx = t132;
    edx = t133;
    COW_AT(10276b2c)
    d134 = (double)rdf32(arg1 + 0x2bcu);
    wrf64(sp1 - 0x28u, d134);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3578u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t135 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3578u), cow_dlo(d134));
    t136 = g->ecx;
    t137 = g->edx;
    eax = t135;
    ecx = t136;
    edx = t137;
    COW_AT(10276b42)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t138 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3578u), rd32(sp1 - 0x28u));
    t139 = g->ecx;
    t140 = g->edx;
    eax = t138;
    ecx = t139;
    edx = t140;
    COW_AT(10276b48)
    d141 = (double)rdf32(arg1 + 0x2c0u);
    wrf64(sp1 - 0x28u, d141);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b356cu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t142 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b356cu), cow_dlo(d141));
    t143 = g->ecx;
    t144 = g->edx;
    eax = t142;
    ecx = t143;
    edx = t144;
    COW_AT(10276b5e)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t145 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b356cu), rd32(sp1 - 0x28u));
    t146 = g->ecx;
    t147 = g->edx;
    eax = t145;
    ecx = t146;
    edx = t147;
    COW_AT(10276b64)
    d148 = (double)rdf32(arg1 + 0x2c4u);
    wrf64(sp1 - 0x28u, d148);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3560u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t149 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3560u), cow_dlo(d148));
    t150 = g->ecx;
    t151 = g->edx;
    eax = t149;
    ecx = t150;
    edx = t151;
    COW_AT(10276b7a)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t152 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3560u), rd32(sp1 - 0x28u));
    t153 = g->ecx;
    t154 = g->edx;
    eax = t152;
    ecx = t153;
    edx = t154;
    COW_AT(10276b80)
    d155 = (double)rdf32(arg1 + 0x2c8u);
    wrf64(sp1 - 0x28u, d155);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3550u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t156 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3550u), cow_dlo(d155));
    t157 = g->ecx;
    t158 = g->edx;
    eax = t156;
    ecx = t157;
    edx = t158;
    COW_AT(10276b96)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t159 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3550u), rd32(sp1 - 0x28u));
    t160 = g->ecx;
    t161 = g->edx;
    eax = t159;
    ecx = t160;
    edx = t161;
    COW_AT(10276b9c)
    d162 = (double)rdf32(arg1 + 0x2ccu);
    wrf64(sp1 - 0x28u, d162);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3540u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t163 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3540u), cow_dlo(d162));
    t164 = g->ecx;
    t165 = g->edx;
    eax = t163;
    ecx = t164;
    edx = t165;
    COW_AT(10276bb2)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t166 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3540u), rd32(sp1 - 0x28u));
    t167 = g->edx;
    eax = t166;
    edx = t167;
    COW_AT(10276bb8)
    t168 = rd32(arg1 + 0x2d4u);
    wr32(sp1 - 0x34u, t168);
    wr32(sp1 - 0x38u, COW_IMG(0x103b3530u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = t168;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t169 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3530u), t168);
    t170 = g->ecx;
    t171 = g->edx;
    eax = t169;
    ecx = t170;
    edx = t171;
    COW_AT(10276bc9)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x30u;
    t172 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3530u), rd32(sp1 - 0x34u));
    t173 = g->ecx;
    eax = t172;
    ecx = t173;
    COW_AT(10276bcf)
    t174 = rd32(arg1 + 0x2d8u);
    wr32(sp1 - 0x40u, t174);
    wr32(sp1 - 0x44u, COW_IMG(0x103b3520u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t174;
    g->esp = sp1 - 0x3cu;
    t175 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3520u), t174);
    t176 = g->ecx;
    t177 = g->edx;
    eax = t175;
    ecx = t176;
    edx = t177;
    COW_AT(10276be0)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t178 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3520u), rd32(sp1 - 0x40u));
    t179 = g->ecx;
    t180 = g->edx;
    eax = t178;
    ecx = t179;
    edx = t180;
    COW_AT(10276be6)
    d181 = (double)rdf32(arg1 + 0x2dcu);
    wrf64(sp1 - 0x28u, d181);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b350cu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t182 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b350cu), cow_dlo(d181));
    t183 = g->ecx;
    t184 = g->edx;
    eax = t182;
    ecx = t183;
    edx = t184;
    COW_AT(10276bfc)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t185 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b350cu), rd32(sp1 - 0x28u));
    t186 = g->ecx;
    t187 = g->edx;
    eax = t185;
    ecx = t186;
    edx = t187;
    COW_AT(10276c02)
    d188 = (double)rdf32(arg1 + 0x2e0u);
    wrf64(sp1 - 0x28u, d188);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3500u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t189 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3500u), cow_dlo(d188));
    t190 = g->ecx;
    t191 = g->edx;
    eax = t189;
    ecx = t190;
    edx = t191;
    COW_AT(10276c18)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3500u), rd32(sp1 - 0x28u));
    t192 = g->ecx;
    t193 = g->edx;
    ecx = t192;
    edx = t193;
    COW_AT(10276c1e)
    t194 = rd32(arg1 + 0x2e8u);
    wr32(sp1 - 0x34u, t194);
    wr32(sp1 - 0x38u, COW_IMG(0x103b34f4u));
    g->ebx = arg3 + 1u;
    g->eax = t194;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t195 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34f4u), t194);
    t196 = g->ecx;
    t197 = g->edx;
    eax = t195;
    ecx = t196;
    edx = t197;
    COW_AT(10276c2f)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t198 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b34f4u), rd32(sp1 - 0x34u));
    t199 = g->ecx;
    t200 = g->edx;
    eax = t198;
    ecx = t199;
    edx = t200;
    COW_AT(10276c35)
    wr32(sp1 - 0x40u, COW_IMG(0x103b34e8u));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t201 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34e8u), rd32(sp1 - 0x3cu));
    t202 = g->edx;
    eax = t201;
    edx = t202;
    COW_AT(10276c3f)
    wr32(sp1 - 0x44u, 3u);
    wr32(sp1 - 0x48u, 0u);
    wr32(sp1 - 0x4cu, arg1 + 0x2ecu);
    g->eax = eax;
    g->ecx = arg1 + 0x2ecu;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t203 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x2ecu, 0u, 3u, COW_IMG(0x103b34e8u), rd32(sp1 - 0x3cu), rd32(sp1 - 0x38u), rd32(sp1 - 0x34u));
    t204 = g->ecx;
    t205 = g->edx;
    eax = t203;
    ecx = t204;
    edx = t205;
    COW_AT(10276c4f)
    wr32(sp1 - 0x50u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t206 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x4cu), 0u);
    t207 = g->ecx;
    t208 = g->edx;
    eax = t206;
    ecx = t207;
    edx = t208;
    COW_AT(10276c55)
    wr32(sp1 - 0x54u, COW_IMG(0x103b34dcu));
    g->ebx = arg3 + 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x4cu;
    t209 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34dcu), rd32(sp1 - 0x50u));
    t210 = g->ecx;
    t211 = g->edx;
    eax = t209;
    ecx = t210;
    edx = t211;
    COW_AT(10276c5f)
    wr32(sp1 - 0x10u, 2u);
    ebx = arg1 + 0x32cu;
    al_m10 = 2u;
L_10276c70: ;
    COW_AT(10276c70)
    wr32(sp1 - 8u, 8u);
    al_m8 = 8u;
L_10276c78: ;
    COW_AT(10276c78)
    wr32(sp1 - 0x24u, 3u);
    wr32(sp1 - 0x28u, 0u);
    wr32(sp1 - 0x2cu, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x10u;
    t212 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, ebx, 0u, 3u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
    t213 = g->ecx;
    t214 = g->edx;
    eax = t212;
    ecx = t213;
    edx = t214;
    COW_AT(10276c82)
    wr32(sp1 - 0x30u, COW_IMG(0x10350e4cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x2cu));
    t215 = g->ecx;
    t216 = g->edx;
    ecx = t215;
    edx = t216;
    COW_AT(10276c8c)
    t217 = rd32(sp1 - 8u) - 1u;
    t218 = rd32(sp1 - 8u);
    wr32(sp1 - 8u, t217);
    if (t218 != 1u)
    {
        eax = t217;
        ebx = ebx + 0x40u;
        al_m10 = rd32(sp1 - 0x10u);
        al_m8 = t217;
        goto L_10276c78;
    }
    ebx = ebx + 0x40u;
    COW_AT(10276c9d)
    t219 = rd32(sp1 - 0x10u) - 1u;
    t220 = rd32(sp1 - 0x10u);
    wr32(sp1 - 0x10u, t219);
    if (t220 != 1u)
    {
        eax = t219;
        al_m10 = t219;
        goto L_10276c70;
    }
    eax = t219;
    COW_AT(10276ca8)
    wr32(sp1 - 0x24u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t221 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t222 = g->ecx;
    t223 = g->edx;
    eax = t221;
    ecx = t222;
    edx = t223;
    COW_AT(10276cae)
    wr32(sp1 - 0x28u, COW_IMG(0x103b34d0u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t224 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34d0u), rd32(sp1 - 0x24u));
    t225 = g->ecx;
    t226 = g->edx;
    eax = t224;
    ecx = t225;
    edx = t226;
    COW_AT(10276cb8)
    wr32(sp1 - 8u, 8u);
    ebx = arg1 + 0x72cu;
    al_m8 = 8u;
L_10276cc9: ;
    COW_AT(10276cc9)
    wrf64(sp1 - 0x28u, (double)rdf32(ebx));
    wr32(sp1 - 0x2cu, COW_IMG(0x103b34c8u));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34c8u), cow_dlo((double)rdf32(ebx)));
    t227 = g->ecx;
    t228 = g->edx;
    ecx = t227;
    edx = t228;
    COW_AT(10276cdb)
    t229 = rd32(sp1 - 8u) - 1u;
    t230 = rd32(sp1 - 8u);
    wr32(sp1 - 8u, t229);
    if (t230 != 1u)
    {
        eax = t229;
        ebx = ebx + 4u;
        al_m8 = t229;
        goto L_10276cc9;
    }
    eax = t229;
    ebx = ebx + 4u;
    COW_AT(10276cec)
    wr32(sp1 - 0x24u, COW_IMG(0x103b34c4u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x1cu;
    t231 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34c4u), rd32(sp1 - 0x20u));
    t232 = g->ecx;
    t233 = g->edx;
    eax = t231;
    ecx = t232;
    edx = t233;
    COW_AT(10276cf6)
    wr32(sp1 - 0x28u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x1cu;
    t234 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b34c4u), rd32(sp1 - 0x20u));
    t235 = g->ecx;
    t236 = g->edx;
    eax = t234;
    ecx = t235;
    edx = t236;
    COW_AT(10276cfc)
    d237 = (double)rdf32(arg1 + 0x74cu);
    wrf64(sp1 - 0x28u, d237);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b34b4u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t238 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34b4u), cow_dlo(d237));
    t239 = g->ecx;
    t240 = g->edx;
    eax = t238;
    ecx = t239;
    edx = t240;
    COW_AT(10276d0f)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x24u;
    t241 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b34b4u), rd32(sp1 - 0x28u));
    t242 = g->ecx;
    eax = t241;
    ecx = t242;
    COW_AT(10276d15)
    t243 = rd8(arg1 + 0x754u);
    wr32(sp1 - 0x34u, t243);
    wr32(sp1 - 0x38u, COW_IMG(0x103b34a0u));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = t243;
    g->esp = sp1 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b34a0u), t243);
    t244 = g->ecx;
    t245 = g->edx;
    ecx = t244;
    edx = t245;
    COW_AT(10276d28)
    t246 = rd32(sp1 - 0xcu);
    wr32(sp1 - 0x3cu, t246);
    g->eax = t246;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t247 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t246, COW_IMG(0x103b34a0u), rd32(sp1 - 0x34u));
    t248 = g->ecx;
    t249 = g->edx;
    eax = t247;
    ecx = t248;
    edx = t249;
    COW_AT(10276d32)
    wr32(sp1 - 0x40u, COW_IMG(0x103b3488u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t250 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3488u), rd32(sp1 - 0x3cu));
    t251 = g->ecx;
    t252 = g->edx;
    eax = t250;
    ecx = t251;
    edx = t252;
    COW_AT(10276d3c)
    wr32(sp1 - 0x44u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t253 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3488u), rd32(sp1 - 0x3cu));
    t254 = g->ecx;
    t255 = g->edx;
    eax = t253;
    ecx = t254;
    edx = t255;
    COW_AT(10276d42)
    d256 = (double)rdf32(arg1 + 0x764u);
    wrf64(sp1 - 0x28u, d256);
    d257 = (double)rdf32(arg1 + 0x760u);
    wrf64(sp1 - 0x30u, d257);
    d258 = (double)rdf32(arg1 + 0x75cu);
    wrf64(sp1 - 0x38u, d258);
    d259 = (double)rdf32(arg1 + 0x758u);
    wrf64(sp1 - 0x40u, d259);
    wr32(sp1 - 0x44u, COW_IMG(0x103b346cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t260 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b346cu), cow_dlo(d259));
    t261 = g->ecx;
    t262 = g->edx;
    eax = t260;
    ecx = t261;
    edx = t262;
    COW_AT(10276d76)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t263 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b346cu), rd32(sp1 - 0x40u));
    t264 = g->ecx;
    t265 = g->edx;
    eax = t263;
    ecx = t264;
    edx = t265;
    COW_AT(10276d7c)
    d266 = (double)rdf32(arg1 + 0x768u);
    wrf64(sp1 - 0x28u, d266);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b345cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t267 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b345cu), cow_dlo(d266));
    t268 = g->ecx;
    t269 = g->edx;
    eax = t267;
    ecx = t268;
    edx = t269;
    COW_AT(10276d92)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t270 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b345cu), rd32(sp1 - 0x28u));
    t271 = g->ecx;
    t272 = g->edx;
    eax = t270;
    ecx = t271;
    edx = t272;
    COW_AT(10276d98)
    d273 = (double)rdf32(arg1 + 0x76cu);
    wrf64(sp1 - 0x28u, d273);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b344cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t274 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b344cu), cow_dlo(d273));
    t275 = g->ecx;
    t276 = g->edx;
    eax = t274;
    ecx = t275;
    edx = t276;
    COW_AT(10276dae)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t277 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b344cu), rd32(sp1 - 0x28u));
    t278 = g->ecx;
    t279 = g->edx;
    eax = t277;
    ecx = t278;
    edx = t279;
    COW_AT(10276db4)
    d280 = (double)rdf32(arg1 + 0x770u);
    wrf64(sp1 - 0x28u, d280);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b343cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t281 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b343cu), cow_dlo(d280));
    t282 = g->ecx;
    t283 = g->edx;
    eax = t281;
    ecx = t282;
    edx = t283;
    COW_AT(10276dca)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t284 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b343cu), rd32(sp1 - 0x28u));
    t285 = g->edx;
    eax = t284;
    edx = t285;
    COW_AT(10276dd0)
    t286 = rd32(arg1 + 0x774u);
    wr32(sp1 - 0x34u, t286);
    wr32(sp1 - 0x38u, COW_IMG(0x103b342cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t286;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t287 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b342cu), t286);
    t288 = g->ecx;
    t289 = g->edx;
    eax = t287;
    ecx = t288;
    edx = t289;
    COW_AT(10276de1)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t290 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b342cu), rd32(sp1 - 0x34u));
    t291 = g->ecx;
    t292 = g->edx;
    eax = t290;
    ecx = t291;
    edx = t292;
    COW_AT(10276de7)
    wr32(sp1 - 0x40u, ecx);
    d293 = (double)rdf32(arg1 + 0x780u);
    wrf64(sp1 - 0x28u, d293);
    d294 = (double)rdf32(arg1 + 0x780u);
    wrf64(sp1 - 0x30u, d294);
    d295 = (double)rdf32(arg1 + 0x77cu);
    wrf64(sp1 - 0x38u, d295);
    d296 = (double)rdf32(arg1 + 0x778u);
    wrf64(sp1 - 0x40u, d296);
    wr32(sp1 - 0x44u, COW_IMG(0x103b3410u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t297 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3410u), cow_dlo(d296));
    t298 = g->ecx;
    t299 = g->edx;
    eax = t297;
    ecx = t298;
    edx = t299;
    COW_AT(10276e19)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x3cu;
    t300 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3410u), rd32(sp1 - 0x40u));
    t301 = g->ecx;
    eax = t300;
    ecx = t301;
    COW_AT(10276e1f)
    t302 = rd32(arg1 + 0x78cu);
    wr32(sp1 - 0x4cu, t302);
    wr32(sp1 - 0x50u, COW_IMG(0x103b33fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t302;
    g->esp = sp1 - 0x48u;
    t303 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b33fcu), t302);
    t304 = g->ecx;
    t305 = g->edx;
    eax = t303;
    ecx = t304;
    edx = t305;
    COW_AT(10276e30)
    wr32(sp1 - 0x54u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x48u;
    t306 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b33fcu), rd32(sp1 - 0x4cu));
    t307 = g->ecx;
    t308 = g->edx;
    eax = t306;
    ecx = t307;
    edx = t308;
    COW_AT(10276e36)
    wr32(sp1 - 0x58u, COW_IMG(0x103b33e4u));
    g->ebx = ebx;
    g->esp = sp1 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b33e4u), rd32(sp1 - 0x54u));
    COW_AT(10276e40)
    wr32(sp1 - 0x14u, 0u);
    wr32(sp1 - 0x10u, arg3 + 3u);
    wr32(sp1 - 4u, arg3 + 4u);
    wr32(sp1 - 8u, arg1 + 0x854u);
    ecx = arg3 + 3u;
    edx = arg1 + 0x854u;
    ebx = arg1 + 0x7a0u;
    al_m14 = 0u;
    al_m10 = arg3 + 3u;
    al_m4 = arg3 + 4u;
    al_m8 = arg1 + 0x854u;
L_10276e6c: ;
    COW_AT(10276e6c)
    wr32(sp1 - 0x24u, al_m10);
    g->eax = al_m10;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t309 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, al_m10, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t310 = g->edx;
    eax = t309;
    edx = t310;
    COW_AT(10276e76)
    t311 = rd32(sp1 - 0x14u);
    wr32(sp1 - 0x28u, t311);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b33d8u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t311;
    g->esp = sp1 - 0x24u;
    t312 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b33d8u), t311);
    t313 = g->ecx;
    eax = t312;
    ecx = t313;
    COW_AT(10276e85)
    t314 = rd32(sp1 - 4u);
    wr32(sp1 - 0x30u, t314);
    g->ecx = ecx;
    g->edx = t314;
    g->esp = sp1 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t314, COW_IMG(0x103b33d8u), rd32(sp1 - 0x28u));
    t315 = g->ecx;
    t316 = g->edx;
    ecx = t315;
    edx = t316;
    COW_AT(10276e8f)
    t317 = rd32(sp1 - 8u);
    wr32(sp1 - 0x34u, t317);
    wr32(sp1 - 0x38u, COW_IMG(0x103b33c8u));
    g->ebx = ebx;
    g->eax = t317;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t318 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b33c8u), t317);
    t319 = g->edx;
    eax = t318;
    edx = t319;
    COW_AT(10276e9e)
    t320 = rd32(sp1 - 4u);
    wr32(sp1 - 0x3cu, t320);
    g->ecx = t320;
    g->esp = sp1 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t320, COW_IMG(0x103b33c8u), rd32(sp1 - 0x34u));
    t321 = g->ecx;
    ecx = t321;
    COW_AT(10276ea8)
    wr32(sp1 - 0x40u, ebx + 0xcu);
    wr32(sp1 - 0x44u, ebx);
    wr32(sp1 - 0x48u, ebx - 0xcu);
    wr32(sp1 - 0x4cu, COW_IMG(0x103b33acu));
    g->ebx = ebx;
    g->edx = ebx + 0xcu;
    g->esp = sp1 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b33acu), ebx - 0xcu);
    t322 = g->edx;
    edx = t322;
    COW_AT(10276ebb)
    t323 = rd32(sp1 - 0x14u) + 1u;
    t324 = rd32(sp1 - 0x14u);
    wr32(sp1 - 0x14u, t323);
    t325 = rd32(sp1 - 8u) + 0x20u;
    wr32(sp1 - 8u, t325);
    if ((int32_t)(t324 + 1u) < 8)
    {
        ecx = t325;
        ebx = ebx + 0x60u;
        al_m14 = t323;
        al_m10 = rd32(sp1 - 0x10u);
        al_m4 = rd32(sp1 - 4u);
        al_m8 = t325;
        goto L_10276e6c;
    }
    eax = t323;
    ecx = t325;
    COW_AT(10276eda)
    t326 = rd32(sp1 - 0xcu);
    wr32(sp1 - 0x24u, t326);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t327 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t326, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t328 = g->ecx;
    t329 = g->edx;
    eax = t327;
    ecx = t328;
    edx = t329;
    ebx = t326;
    COW_AT(10276ee4)
    wr32(sp1 - 0x28u, COW_IMG(0x103b3394u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t330 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3394u), rd32(sp1 - 0x24u));
    t331 = g->ecx;
    t332 = g->edx;
    eax = t330;
    ecx = t331;
    edx = t332;
    COW_AT(10276eee)
    wr32(sp1 - 0x2cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t333 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3394u), rd32(sp1 - 0x24u));
    t334 = g->ecx;
    t335 = g->edx;
    eax = t333;
    ecx = t334;
    edx = t335;
    COW_AT(10276ef4)
    d336 = (double)rdf32(arg1 + 0x894u);
    wrf64(sp1 - 0x28u, d336);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b337cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t337 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b337cu), cow_dlo(d336));
    t338 = g->ecx;
    t339 = g->edx;
    eax = t337;
    ecx = t338;
    edx = t339;
    COW_AT(10276f0a)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t340 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b337cu), rd32(sp1 - 0x28u));
    t341 = g->edx;
    eax = t340;
    edx = t341;
    COW_AT(10276f10)
    t342 = rd32(arg1 + 0x898u);
    wr32(sp1 - 0x34u, t342);
    wr32(sp1 - 0x38u, COW_IMG(0x103b3368u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t342;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t343 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3368u), t342);
    t344 = g->ecx;
    t345 = g->edx;
    eax = t343;
    ecx = t344;
    edx = t345;
    COW_AT(10276f21)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x30u;
    t346 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3368u), rd32(sp1 - 0x34u));
    t347 = g->ecx;
    eax = t346;
    ecx = t347;
    COW_AT(10276f27)
    t348 = rd32(arg1 + 0x89cu);
    wr32(sp1 - 0x40u, t348);
    wr32(sp1 - 0x44u, COW_IMG(0x103b3358u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t348;
    g->esp = sp1 - 0x3cu;
    t349 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3358u), t348);
    t350 = g->ecx;
    t351 = g->edx;
    eax = t349;
    ecx = t350;
    edx = t351;
    COW_AT(10276f38)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3358u), rd32(sp1 - 0x40u));
    t352 = g->ecx;
    t353 = g->edx;
    ecx = t352;
    edx = t353;
    COW_AT(10276f3e)
    t354 = rd32(arg1 + 0x8a0u);
    wr32(sp1 - 0x4cu, t354);
    wr32(sp1 - 0x50u, COW_IMG(0x103b334cu));
    g->ebx = ebx;
    g->eax = t354;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x48u;
    t355 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b334cu), t354);
    t356 = g->ecx;
    t357 = g->edx;
    eax = t355;
    ecx = t356;
    edx = t357;
    COW_AT(10276f4f)
    wr32(sp1 - 0x54u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x48u;
    t358 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b334cu), rd32(sp1 - 0x4cu));
    t359 = g->edx;
    eax = t358;
    edx = t359;
    COW_AT(10276f55)
    t360 = rd32(arg1 + 0x8a4u);
    wr32(sp1 - 0x58u, t360);
    wr32(sp1 - 0x5cu, COW_IMG(0x103b3334u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t360;
    g->edx = edx;
    g->esp = sp1 - 0x54u;
    t361 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3334u), t360);
    t362 = g->ecx;
    t363 = g->edx;
    eax = t361;
    ecx = t362;
    edx = t363;
    COW_AT(10276f66)
    wr32(sp1 - 0x60u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x54u;
    t364 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3334u), rd32(sp1 - 0x58u));
    t365 = g->ecx;
    eax = t364;
    ecx = t365;
    COW_AT(10276f6c)
    t366 = rd32(arg1 + 0x8a8u);
    wr32(sp1 - 0x24u, t366);
    wr32(sp1 - 0x28u, COW_IMG(0x103b331cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t366;
    g->esp = sp1 - 0x20u;
    t367 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b331cu), t366);
    t368 = g->ecx;
    t369 = g->edx;
    eax = t367;
    ecx = t368;
    edx = t369;
    COW_AT(10276f80)
    wr32(sp1 - 0x2cu, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b331cu), rd32(sp1 - 0x24u));
    t370 = g->ecx;
    t371 = g->edx;
    ecx = t370;
    edx = t371;
    COW_AT(10276f86)
    t372 = rd32(arg1 + 0x8acu);
    wr32(sp1 - 0x30u, t372);
    wr32(sp1 - 0x34u, COW_IMG(0x103b3308u));
    g->ebx = ebx;
    g->eax = t372;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t373 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3308u), t372);
    t374 = g->ecx;
    t375 = g->edx;
    eax = t373;
    ecx = t374;
    edx = t375;
    COW_AT(10276f97)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t376 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3308u), rd32(sp1 - 0x30u));
    t377 = g->edx;
    eax = t376;
    edx = t377;
    COW_AT(10276f9d)
    wr32(sp1 - 0x3cu, arg1 + 0x8b0u);
    wr32(sp1 - 0x40u, COW_IMG(0x103b32fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = arg1 + 0x8b0u;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t378 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b32fcu), arg1 + 0x8b0u);
    t379 = g->ecx;
    t380 = g->edx;
    eax = t378;
    ecx = t379;
    edx = t380;
    COW_AT(10276fae)
    wr32(sp1 - 0x44u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x38u;
    t381 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b32fcu), rd32(sp1 - 0x3cu));
    t382 = g->ecx;
    eax = t381;
    ecx = t382;
    COW_AT(10276fb4)
    wr32(sp1 - 0x48u, arg1 + 0x8c0u);
    wr32(sp1 - 0x4cu, COW_IMG(0x103b32f0u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = arg1 + 0x8c0u;
    g->esp = sp1 - 0x44u;
    t383 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b32f0u), arg1 + 0x8c0u);
    t384 = g->ecx;
    t385 = g->edx;
    eax = t383;
    ecx = t384;
    edx = t385;
    COW_AT(10276fc5)
    wr32(sp1 - 0x50u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b32f0u), rd32(sp1 - 0x48u));
    t386 = g->ecx;
    t387 = g->edx;
    ecx = t386;
    edx = t387;
    COW_AT(10276fcb)
    wr32(sp1 - 0x54u, arg1 + 0x8c8u);
    wr32(sp1 - 0x58u, COW_IMG(0x103b32e0u));
    g->ebx = ebx;
    g->eax = arg1 + 0x8c8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t388 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b32e0u), arg1 + 0x8c8u);
    t389 = g->ecx;
    t390 = g->edx;
    eax = t388;
    ecx = t389;
    edx = t390;
    COW_AT(10276fdc)
    wr32(sp1 - 0x5cu, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t391 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b32e0u), rd32(sp1 - 0x54u));
    t392 = g->edx;
    eax = t391;
    edx = t392;
    COW_AT(10276fe2)
    wr32(sp1 - 0x60u, arg1 + 0x8d0u);
    wr32(sp1 - 0x64u, COW_IMG(0x103b32d0u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = arg1 + 0x8d0u;
    g->edx = edx;
    g->esp = sp1 - 0x5cu;
    t393 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b32d0u), arg1 + 0x8d0u);
    t394 = g->ecx;
    t395 = g->edx;
    eax = t393;
    ecx = t394;
    edx = t395;
    COW_AT(10276ff3)
    wr32(sp1 - 0x24u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x18u;
    t396 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t397 = g->ecx;
    eax = t396;
    ecx = t397;
    COW_AT(10276ffc)
    t398 = rd32(arg1 + 0x8d8u);
    wr32(sp1 - 0x28u, t398);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b32bcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t398;
    g->esp = sp1 - 0x24u;
    t399 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b32bcu), t398);
    t400 = g->ecx;
    t401 = g->edx;
    eax = t399;
    ecx = t400;
    edx = t401;
    COW_AT(1027700d)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b32bcu), rd32(sp1 - 0x28u));
    t402 = g->ecx;
    t403 = g->edx;
    ecx = t402;
    edx = t403;
    COW_AT(10277013)
    t404 = rd32(arg1 + 0x8dcu);
    wr32(sp1 - 0x34u, t404);
    wr32(sp1 - 0x38u, COW_IMG(0x103b32acu));
    g->ebx = ebx;
    g->eax = t404;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t405 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b32acu), t404);
    t406 = g->ecx;
    t407 = g->edx;
    eax = t405;
    ecx = t406;
    edx = t407;
    COW_AT(10277024)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t408 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b32acu), rd32(sp1 - 0x34u));
    t409 = g->edx;
    eax = t408;
    edx = t409;
    COW_AT(1027702a)
    t410 = rd32(arg1 + 0x8e0u);
    wr32(sp1 - 0x40u, t410);
    wr32(sp1 - 0x44u, COW_IMG(0x103b329cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t410;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t411 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b329cu), t410);
    t412 = g->ecx;
    t413 = g->edx;
    eax = t411;
    ecx = t412;
    edx = t413;
    COW_AT(1027703b)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x3cu;
    t414 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b329cu), rd32(sp1 - 0x40u));
    t415 = g->ecx;
    eax = t414;
    ecx = t415;
    COW_AT(10277041)
    t416 = rd32(arg1 + 0x8e4u);
    wr32(sp1 - 0x4cu, t416);
    wr32(sp1 - 0x50u, COW_IMG(0x103b3288u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t416;
    g->esp = sp1 - 0x48u;
    t417 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3288u), t416);
    t418 = g->ecx;
    t419 = g->edx;
    eax = t417;
    ecx = t418;
    edx = t419;
    COW_AT(10277052)
    wr32(sp1 - 0x54u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x48u;
    t420 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b3288u), rd32(sp1 - 0x4cu));
    t421 = g->ecx;
    t422 = g->edx;
    eax = t420;
    ecx = t421;
    edx = t422;
    COW_AT(10277058)
    wr32(sp1 - 0x58u, COW_IMG(0x103b3270u));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3270u), rd32(sp1 - 0x54u));
    t423 = g->ecx;
    t424 = g->edx;
    ecx = t423;
    edx = t424;
    COW_AT(10277062)
    if (rd32(arg1 + 0x940u) == 0u)
    {
        eax = rd32(arg1 + 0x940u);
    }
    else
    {
        eax = rd32(arg1 + 0x940u);
    COW_AT(10277073)
        wr32(sp1 - 0x24u, arg3 + 2u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
        t425 = g->ecx;
        t426 = g->edx;
        ecx = t425;
        edx = t426;
    COW_AT(10277079)
        t427 = rd32(arg1 + 0x940u);
        wr32(sp1 - 0x28u, t427);
        wr32(sp1 - 0x2cu, COW_IMG(0x103b325cu));
        g->ebx = ebx;
        g->eax = t427;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x24u;
        t428 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b325cu), t427);
        t429 = g->ecx;
        t430 = g->edx;
        eax = t428;
        ecx = t429;
        edx = t430;
    COW_AT(1027708a)
        wr32(sp1 - 0x30u, arg3 + 2u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x24u;
        t431 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b325cu), rd32(sp1 - 0x28u));
        t432 = g->ecx;
        t433 = g->edx;
        eax = t431;
        ecx = t432;
        edx = t433;
    COW_AT(10277090)
        wr32(sp1 - 0x34u, COW_IMG(0x103b324cu));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b324cu), rd32(sp1 - 0x30u));
        t434 = g->ecx;
        t435 = g->edx;
        ecx = t434;
        edx = t435;
    COW_AT(1027709a)
        if (arg2 != 0u)
        {
            eax = arg2;
        }
        else
        {
    COW_AT(102770a4)
            if ((int32_t)rd32(arg1 + 0x940u) <= 0)
            {
                eax = rd32(arg1 + 0x940u);
                ebx = 0u;
            }
            else
            {
                eax = rd32(arg1 + 0x940u);
    COW_AT(102770b0)
                wr32(sp1 - 8u, 0u);
                ebx = 0u;
                al_m8 = 0u;
L_102770b4: ;
    COW_AT(102770b4)
                t436 = rd32(sp1 - 0x10u);
                wr32(sp1 - 0x24u, t436);
                g->ecx = t436;
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t436, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t437 = g->ecx;
                ecx = t437;
    COW_AT(102770be)
                d438 = (double)rdf32(rd32(arg1 + 0x918u) + rd32(sp1 - 8u) + 8u);
                wrf64(sp1 - 0x28u, d438);
                d439 = (double)rdf32(rd32(arg1 + 0x918u) + rd32(sp1 - 8u) + 4u);
                wrf64(sp1 - 0x30u, d439);
                d440 = (double)rdf32(rd32(arg1 + 0x918u) + rd32(sp1 - 8u));
                wrf64(sp1 - 0x38u, d440);
                wr32(sp1 - 0x3cu, COW_IMG(0x103b323cu));
                g->ebx = ebx;
                g->edx = rd32(arg1 + 0x918u);
                t441 = rd32(arg1 + 0x918u);
                g->esp = sp1 - 0x34u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b323cu), cow_dlo(d440));
                t442 = g->edx;
                edx = t442;
    COW_AT(102770ea)
                t443 = rd32(sp1 - 8u) + 0xcu;
                wr32(sp1 - 8u, t443);
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x940u))
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = ebx + 1u;
                    al_m8 = t443;
                    goto L_102770b4;
                }
                eax = rd32(arg1 + 0x940u);
                ecx = t443;
                ebx = ebx + 1u;
            }
        }
    COW_AT(10277103)
        wr32(sp1 - 0x24u, arg3 + 2u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x18u;
        t444 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
        t445 = g->ecx;
        t446 = g->edx;
        eax = t444;
        ecx = t445;
        edx = t446;
    COW_AT(10277109)
        wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x20u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
        t447 = g->ecx;
        t448 = g->edx;
        ecx = t447;
        edx = t448;
    COW_AT(10277113)
        if (rd32(arg1 + 0x91cu) == 0u)
        {
            eax = rd32(arg1 + 0x91cu);
        }
        else
        {
            eax = rd32(arg1 + 0x91cu);
    COW_AT(10277124)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t449 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t450 = g->ecx;
            t451 = g->edx;
            eax = t449;
            ecx = t450;
            edx = t451;
    COW_AT(1027712a)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3228u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3228u), rd32(sp1 - 0x24u));
            t452 = g->ecx;
            t453 = g->edx;
            ecx = t452;
            edx = t453;
    COW_AT(10277134)
            if (arg2 != 0u)
            {
                eax = arg2;
            }
            else
            {
    COW_AT(1027713e)
                if ((int32_t)rd32(arg1 + 0x940u) <= 0)
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = 0u;
                }
                else
                {
                    eax = rd32(arg1 + 0x940u);
    COW_AT(1027714a)
                    wr32(sp1 - 8u, 0u);
                    ebx = 0u;
                    al_m8 = 0u;
L_1027714e: ;
    COW_AT(1027714e)
                    t454 = rd32(sp1 - 0x10u);
                    wr32(sp1 - 0x24u, t454);
                    g->ecx = t454;
                    g->esp = sp1 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t454, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t455 = g->ecx;
                    ecx = t455;
    COW_AT(10277158)
                    d456 = (double)rdf32(rd32(arg1 + 0x91cu) + rd32(sp1 - 8u) + 8u);
                    wrf64(sp1 - 0x28u, d456);
                    d457 = (double)rdf32(rd32(arg1 + 0x91cu) + rd32(sp1 - 8u) + 4u);
                    wrf64(sp1 - 0x30u, d457);
                    d458 = (double)rdf32(rd32(arg1 + 0x91cu) + rd32(sp1 - 8u));
                    wrf64(sp1 - 0x38u, d458);
                    wr32(sp1 - 0x3cu, COW_IMG(0x103b323cu));
                    g->ebx = ebx;
                    g->edx = rd32(arg1 + 0x91cu);
                    t459 = rd32(arg1 + 0x91cu);
                    g->esp = sp1 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b323cu), cow_dlo(d458));
                    t460 = g->edx;
                    edx = t460;
    COW_AT(10277184)
                    t461 = rd32(sp1 - 8u) + 0xcu;
                    wr32(sp1 - 8u, t461);
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x940u))
                    {
                        eax = rd32(arg1 + 0x940u);
                        ebx = ebx + 1u;
                        al_m8 = t461;
                        goto L_1027714e;
                    }
                    eax = rd32(arg1 + 0x940u);
                    ecx = t461;
                    ebx = ebx + 1u;
                }
            }
    COW_AT(1027719d)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t462 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t463 = g->ecx;
            t464 = g->edx;
            eax = t462;
            ecx = t463;
            edx = t464;
    COW_AT(102771a3)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            t465 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t466 = g->ecx;
            t467 = g->edx;
            eax = t465;
            ecx = t466;
            edx = t467;
    COW_AT(102771ad)
        }
    COW_AT(102771b0)
        if (arg1 + 0x920u == 0u)
        {
            ebx = arg1 + 0x920u;
        }
        else
        {
    COW_AT(102771ba)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t468 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t469 = g->ecx;
            t470 = g->edx;
            eax = t468;
            ecx = t469;
            edx = t470;
    COW_AT(102771c0)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3218u));
            g->ebx = arg1 + 0x920u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3218u), rd32(sp1 - 0x24u));
            t471 = g->ecx;
            t472 = g->edx;
            ecx = t471;
            edx = t472;
    COW_AT(102771ca)
            if (arg2 != 0u)
            {
                eax = arg2;
                ebx = arg1 + 0x920u;
            }
            else
            {
    COW_AT(102771d4)
                wr32(sp1 - 0x14u, 0u);
                if ((int32_t)rd32(arg1 + 0x940u) <= 0)
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = arg1 + 0x920u;
                    goto L_1027721a;
                }
                eax = rd32(arg1 + 0x940u);
                ebx = arg1 + 0x920u;
                al_m14 = 0u;
L_102771e6: ;
    COW_AT(102771e6)
                t473 = rd32(sp1 - 0x10u);
                wr32(sp1 - 0x24u, t473);
                g->ecx = t473;
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t473, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t474 = g->ecx;
                ecx = t474;
    COW_AT(102771f0)
                t475 = rd32(ebx + 4u);
                wr32(sp1 - 0x28u, t475);
                wr32(sp1 - 0x2cu, rd32(ebx));
                wr32(sp1 - 0x30u, COW_IMG(0x103b320cu));
                g->ebx = ebx;
                g->edx = t475;
                g->esp = sp1 - 0x28u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b320cu), rd32(ebx));
                t476 = g->edx;
                edx = t476;
    COW_AT(10277201)
                t477 = rd32(sp1 - 0x14u) + 1u;
                t478 = rd32(sp1 - 0x14u);
                wr32(sp1 - 0x14u, t477);
                if ((int32_t)(t478 + 1u) < (int32_t)rd32(arg1 + 0x940u))
                {
                    eax = t477;
                    ebx = ebx + 8u;
                    al_m14 = t477;
                    goto L_102771e6;
                }
                eax = t477;
                ecx = rd32(arg1 + 0x940u);
                ebx = ebx + 8u;
            }
L_1027721a: ;
    COW_AT(1027721a)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t479 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t480 = g->ecx;
            t481 = g->edx;
            eax = t479;
            ecx = t480;
            edx = t481;
    COW_AT(10277220)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t482 = g->ecx;
            t483 = g->edx;
            ecx = t482;
            edx = t483;
    COW_AT(1027722a)
        }
    COW_AT(1027722d)
        if (rd32(arg1 + 0x928u) != 0u)
        {
            eax = rd32(arg1 + 0x928u);
    COW_AT(1027723b)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t484 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t485 = g->ecx;
            t486 = g->edx;
            eax = t484;
            ecx = t485;
            edx = t486;
    COW_AT(10277241)
            wr32(sp1 - 0x28u, COW_IMG(0x103b31f8u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31f8u), rd32(sp1 - 0x24u));
            t487 = g->ecx;
            t488 = g->edx;
            ecx = t487;
            edx = t488;
    COW_AT(1027724b)
            if (arg2 != 0u)
            {
                eax = arg2;
            }
            else
            {
    COW_AT(10277255)
                if ((int32_t)rd32(arg1 + 0x940u) <= 0)
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = 0u;
                }
                else
                {
                    eax = rd32(arg1 + 0x940u);
    COW_AT(10277261)
                    wr32(sp1 - 8u, 0u);
                    ebx = 0u;
                    al_m8 = 0u;
L_10277265: ;
    COW_AT(10277265)
                    t489 = rd32(sp1 - 0x10u);
                    wr32(sp1 - 0x24u, t489);
                    g->ecx = t489;
                    g->esp = sp1 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t489, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t490 = g->ecx;
                    ecx = t490;
    COW_AT(1027726f)
                    d491 = (double)rdf32(rd32(arg1 + 0x928u) + rd32(sp1 - 8u) + 8u);
                    wrf64(sp1 - 0x28u, d491);
                    d492 = (double)rdf32(rd32(arg1 + 0x928u) + rd32(sp1 - 8u) + 4u);
                    wrf64(sp1 - 0x30u, d492);
                    d493 = (double)rdf32(rd32(arg1 + 0x928u) + rd32(sp1 - 8u));
                    wrf64(sp1 - 0x38u, d493);
                    wr32(sp1 - 0x3cu, COW_IMG(0x103b323cu));
                    g->ebx = ebx;
                    g->edx = rd32(arg1 + 0x928u);
                    t494 = rd32(arg1 + 0x928u);
                    g->esp = sp1 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b323cu), cow_dlo(d493));
                    t495 = g->edx;
                    edx = t495;
    COW_AT(1027729b)
                    t496 = rd32(sp1 - 8u) + 0xcu;
                    wr32(sp1 - 8u, t496);
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x940u))
                    {
                        eax = rd32(arg1 + 0x940u);
                        ebx = ebx + 1u;
                        al_m8 = t496;
                        goto L_10277265;
                    }
                    eax = rd32(arg1 + 0x940u);
                    ecx = t496;
                    ebx = ebx + 1u;
                }
            }
    COW_AT(102772b4)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t497 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t498 = g->ecx;
            t499 = g->edx;
            eax = t497;
            ecx = t498;
            edx = t499;
    COW_AT(102772ba)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t500 = g->ecx;
            t501 = g->edx;
            ecx = t500;
            edx = t501;
    COW_AT(102772c4)
        }
    COW_AT(102772c7)
        if (rd32(arg1 + 0x930u) == 0u)
        {
            eax = rd32(arg1 + 0x930u);
        }
        else
        {
            eax = rd32(arg1 + 0x930u);
    COW_AT(102772d5)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t502 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t503 = g->ecx;
            t504 = g->edx;
            eax = t502;
            ecx = t503;
            edx = t504;
    COW_AT(102772db)
            wr32(sp1 - 0x28u, COW_IMG(0x103b31e8u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31e8u), rd32(sp1 - 0x24u));
            t505 = g->ecx;
            t506 = g->edx;
            ecx = t505;
            edx = t506;
    COW_AT(102772e5)
            if (arg2 != 0u)
            {
                eax = arg2;
            }
            else
            {
    COW_AT(102772ef)
                if ((int32_t)rd32(arg1 + 0x940u) <= 0)
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = 0u;
                }
                else
                {
                    eax = rd32(arg1 + 0x940u);
    COW_AT(102772fb)
                    wr32(sp1 - 8u, 0u);
                    ebx = 0u;
                    al_m8 = 0u;
L_102772ff: ;
    COW_AT(102772ff)
                    t507 = rd32(sp1 - 0x10u);
                    wr32(sp1 - 0x24u, t507);
                    g->ecx = t507;
                    g->esp = sp1 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t507, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t508 = g->ecx;
                    ecx = t508;
    COW_AT(10277309)
                    d509 = (double)rdf32(rd32(arg1 + 0x930u) + rd32(sp1 - 8u) + 8u);
                    wrf64(sp1 - 0x28u, d509);
                    d510 = (double)rdf32(rd32(arg1 + 0x930u) + rd32(sp1 - 8u) + 4u);
                    wrf64(sp1 - 0x30u, d510);
                    d511 = (double)rdf32(rd32(arg1 + 0x930u) + rd32(sp1 - 8u));
                    wrf64(sp1 - 0x38u, d511);
                    wr32(sp1 - 0x3cu, COW_IMG(0x103b323cu));
                    g->ebx = ebx;
                    g->edx = rd32(arg1 + 0x930u);
                    t512 = rd32(arg1 + 0x930u);
                    g->esp = sp1 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b323cu), cow_dlo(d511));
                    t513 = g->edx;
                    edx = t513;
    COW_AT(10277335)
                    t514 = rd32(sp1 - 8u) + 0xcu;
                    wr32(sp1 - 8u, t514);
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x940u))
                    {
                        eax = rd32(arg1 + 0x940u);
                        ebx = ebx + 1u;
                        al_m8 = t514;
                        goto L_102772ff;
                    }
                    eax = rd32(arg1 + 0x940u);
                    ecx = t514;
                    ebx = ebx + 1u;
                }
            }
    COW_AT(1027734e)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t515 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t516 = g->ecx;
            t517 = g->edx;
            eax = t515;
            ecx = t516;
            edx = t517;
    COW_AT(10277354)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            t518 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t519 = g->ecx;
            t520 = g->edx;
            eax = t518;
            ecx = t519;
            edx = t520;
    COW_AT(1027735e)
        }
    COW_AT(10277361)
        if (arg1 + 0x934u == 0u)
        {
            ebx = arg1 + 0x934u;
        }
        else
        {
    COW_AT(1027736b)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t521 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t522 = g->ecx;
            t523 = g->edx;
            eax = t521;
            ecx = t522;
            edx = t523;
    COW_AT(10277371)
            wr32(sp1 - 0x28u, COW_IMG(0x103b31dcu));
            g->ebx = arg1 + 0x934u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31dcu), rd32(sp1 - 0x24u));
            t524 = g->ecx;
            t525 = g->edx;
            ecx = t524;
            edx = t525;
    COW_AT(1027737b)
            if (arg2 != 0u)
            {
                eax = arg2;
                ebx = arg1 + 0x934u;
            }
            else
            {
    COW_AT(10277385)
                wr32(sp1 - 0x14u, 0u);
                if ((int32_t)rd32(arg1 + 0x940u) <= 0)
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = arg1 + 0x934u;
                    goto L_102773cb;
                }
                eax = rd32(arg1 + 0x940u);
                ebx = arg1 + 0x934u;
                al_m14 = 0u;
L_10277397: ;
    COW_AT(10277397)
                t526 = rd32(sp1 - 0x10u);
                wr32(sp1 - 0x24u, t526);
                g->ecx = t526;
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t526, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t527 = g->ecx;
                ecx = t527;
    COW_AT(102773a1)
                t528 = rd32(ebx + 4u);
                wr32(sp1 - 0x28u, t528);
                wr32(sp1 - 0x2cu, rd32(ebx));
                wr32(sp1 - 0x30u, COW_IMG(0x103b320cu));
                g->ebx = ebx;
                g->edx = t528;
                g->esp = sp1 - 0x28u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b320cu), rd32(ebx));
                t529 = g->edx;
                edx = t529;
    COW_AT(102773b2)
                t530 = rd32(sp1 - 0x14u) + 1u;
                t531 = rd32(sp1 - 0x14u);
                wr32(sp1 - 0x14u, t530);
                if ((int32_t)(t531 + 1u) < (int32_t)rd32(arg1 + 0x940u))
                {
                    eax = t530;
                    ebx = ebx + 8u;
                    al_m14 = t530;
                    goto L_10277397;
                }
                eax = t530;
                ecx = rd32(arg1 + 0x940u);
                ebx = ebx + 8u;
            }
L_102773cb: ;
    COW_AT(102773cb)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t532 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t533 = g->ecx;
            t534 = g->edx;
            eax = t532;
            ecx = t533;
            edx = t534;
    COW_AT(102773d1)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t535 = g->ecx;
            t536 = g->edx;
            ecx = t535;
            edx = t536;
    COW_AT(102773db)
        }
    COW_AT(102773de)
        if (rd32(arg1 + 0x93cu) != 0u)
        {
            eax = rd32(arg1 + 0x93cu);
    COW_AT(102773ec)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t537 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t538 = g->ecx;
            t539 = g->edx;
            eax = t537;
            ecx = t538;
            edx = t539;
    COW_AT(102773f2)
            wr32(sp1 - 0x28u, COW_IMG(0x103b31ccu));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31ccu), rd32(sp1 - 0x24u));
            t540 = g->ecx;
            t541 = g->edx;
            ecx = t540;
            edx = t541;
    COW_AT(102773fc)
            if (arg2 != 0u)
            {
                eax = arg2;
            }
            else
            {
    COW_AT(10277406)
                if ((int32_t)rd32(arg1 + 0x940u) <= 0)
                {
                    eax = rd32(arg1 + 0x940u);
                    ebx = 0u;
                }
                else
                {
                    eax = rd32(arg1 + 0x940u);
    COW_AT(10277412)
                    wr32(sp1 - 8u, 0u);
                    ebx = 0u;
                    al_m8 = 0u;
L_10277416: ;
    COW_AT(10277416)
                    t542 = rd32(sp1 - 0x10u);
                    wr32(sp1 - 0x24u, t542);
                    g->ecx = t542;
                    g->esp = sp1 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t542, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t543 = g->ecx;
                    ecx = t543;
    COW_AT(10277420)
                    d544 = (double)rdf32(rd32(arg1 + 0x93cu) + rd32(sp1 - 8u) + 8u);
                    wrf64(sp1 - 0x28u, d544);
                    d545 = (double)rdf32(rd32(arg1 + 0x93cu) + rd32(sp1 - 8u) + 4u);
                    wrf64(sp1 - 0x30u, d545);
                    d546 = (double)rdf32(rd32(arg1 + 0x93cu) + rd32(sp1 - 8u));
                    wrf64(sp1 - 0x38u, d546);
                    wr32(sp1 - 0x3cu, COW_IMG(0x103b323cu));
                    g->ebx = ebx;
                    g->edx = rd32(arg1 + 0x93cu);
                    t547 = rd32(arg1 + 0x93cu);
                    g->esp = sp1 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b323cu), cow_dlo(d546));
                    t548 = g->edx;
                    edx = t548;
    COW_AT(1027744c)
                    t549 = rd32(sp1 - 8u) + 0xcu;
                    wr32(sp1 - 8u, t549);
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x940u))
                    {
                        eax = rd32(arg1 + 0x940u);
                        ebx = ebx + 1u;
                        al_m8 = t549;
                        goto L_10277416;
                    }
                    eax = rd32(arg1 + 0x940u);
                    ecx = t549;
                    ebx = ebx + 1u;
                }
            }
    COW_AT(10277465)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t550 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t551 = g->ecx;
            t552 = g->edx;
            eax = t550;
            ecx = t551;
            edx = t552;
    COW_AT(1027746b)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t553 = g->ecx;
            t554 = g->edx;
            ecx = t553;
            edx = t554;
    COW_AT(10277475)
        }
    COW_AT(10277478)
        if (rd32(arg1 + 0x950u) == 0u)
        {
            eax = rd32(arg1 + 0x950u);
        }
        else
        {
            eax = rd32(arg1 + 0x950u);
    COW_AT(10277482)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t555 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t556 = g->ecx;
            t557 = g->edx;
            eax = t555;
            ecx = t556;
            edx = t557;
    COW_AT(10277488)
            wr32(sp1 - 0x28u, COW_IMG(0x103b31bcu));
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31bcu), rd32(sp1 - 0x24u));
            t558 = g->ecx;
            t559 = g->edx;
            ecx = t558;
            edx = t559;
    COW_AT(10277492)
            if (arg2 != 0u)
            {
                eax = arg2;
            }
            else
            {
    COW_AT(1027749c)
                if ((int32_t)rd32(arg1 + 0x954u) <= 0)
                {
                    eax = rd32(arg1 + 0x954u);
                    ebx = 0u;
                    goto L_102774d4;
                }
                eax = rd32(arg1 + 0x954u);
                ebx = 0u;
L_102774a8: ;
    COW_AT(102774a8)
                t560 = rd32(sp1 - 0x10u);
                wr32(sp1 - 0x24u, t560);
                g->ecx = t560;
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t560, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t561 = g->ecx;
                ecx = t561;
    COW_AT(102774b2)
                t562 = rd32(ebx * 4u + rd32(arg1 + 0x950u));
                wr32(sp1 - 0x28u, t562);
                wr32(sp1 - 0x2cu, COW_IMG(0x103b31b4u));
                g->ebx = ebx;
                g->ecx = ecx;
                g->edx = rd32(arg1 + 0x950u);
                t563 = rd32(arg1 + 0x950u);
                g->esp = sp1 - 0x24u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31b4u), t562);
                t564 = g->ecx;
                t565 = g->edx;
                ecx = t564;
                edx = t565;
    COW_AT(102774c6)
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x954u))
                {
                    eax = rd32(arg1 + 0x954u);
                    ebx = ebx + 1u;
                    goto L_102774a8;
                }
                eax = rd32(arg1 + 0x954u);
                ebx = ebx + 1u;
            }
L_102774d4: ;
    COW_AT(102774d4)
            wr32(sp1 - 0x24u, arg3 + 2u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x18u;
            t566 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
            t567 = g->ecx;
            t568 = g->edx;
            eax = t566;
            ecx = t567;
            edx = t568;
    COW_AT(102774da)
            wr32(sp1 - 0x28u, COW_IMG(0x103b3238u));
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            t569 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x24u));
            t570 = g->ecx;
            t571 = g->edx;
            eax = t569;
            ecx = t570;
            edx = t571;
    COW_AT(102774e4)
        }
    COW_AT(102774e7)
        ebx = rd32(sp1 - 0xcu);
    }
    COW_AT(102774eb)
    wr32(sp1 - 0x24u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t572 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t573 = g->edx;
    eax = t572;
    edx = t573;
    COW_AT(102774f1)
    t574 = rd32(arg1 + 0x958u);
    wr32(sp1 - 0x28u, t574);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b31a4u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t574;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t575 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b31a4u), t574);
    t576 = g->ecx;
    t577 = g->edx;
    eax = t575;
    ecx = t576;
    edx = t577;
    COW_AT(10277502)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x24u;
    t578 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b31a4u), rd32(sp1 - 0x28u));
    t579 = g->ecx;
    eax = t578;
    ecx = t579;
    COW_AT(10277508)
    t580 = rd32(arg1 + 0x95cu);
    wr32(sp1 - 0x34u, t580);
    wr32(sp1 - 0x38u, COW_IMG(0x103b3190u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t580;
    g->esp = sp1 - 0x30u;
    t581 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3190u), t580);
    t582 = g->ecx;
    t583 = g->edx;
    eax = t581;
    ecx = t582;
    edx = t583;
    COW_AT(10277519)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3190u), rd32(sp1 - 0x34u));
    t584 = g->ecx;
    t585 = g->edx;
    ecx = t584;
    edx = t585;
    COW_AT(1027751f)
    t586 = rd32(arg1 + 0x960u);
    wr32(sp1 - 0x40u, t586);
    wr32(sp1 - 0x44u, COW_IMG(0x103b3180u));
    g->ebx = ebx;
    g->eax = t586;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t587 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3180u), t586);
    t588 = g->ecx;
    t589 = g->edx;
    eax = t587;
    ecx = t588;
    edx = t589;
    COW_AT(10277530)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t590 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3180u), rd32(sp1 - 0x40u));
    t591 = g->edx;
    eax = t590;
    edx = t591;
    COW_AT(10277536)
    t592 = rd32(arg1 + 0x964u);
    wr32(sp1 - 0x4cu, t592);
    wr32(sp1 - 0x50u, COW_IMG(0x103b316cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t592;
    g->edx = edx;
    g->esp = sp1 - 0x48u;
    t593 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b316cu), t592);
    t594 = g->ecx;
    t595 = g->edx;
    eax = t593;
    ecx = t594;
    edx = t595;
    COW_AT(10277547)
    wr32(sp1 - 0x54u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x48u;
    t596 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b316cu), rd32(sp1 - 0x4cu));
    t597 = g->ecx;
    eax = t596;
    ecx = t597;
    COW_AT(1027754d)
    wr32(sp1 - 0x58u, arg1 + 0x968u);
    wr32(sp1 - 0x5cu, COW_IMG(0x103b3160u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = arg1 + 0x968u;
    g->esp = sp1 - 0x54u;
    t598 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3160u), arg1 + 0x968u);
    t599 = g->ecx;
    t600 = g->edx;
    eax = t598;
    ecx = t599;
    edx = t600;
    COW_AT(1027755e)
    wr32(sp1 - 0x60u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x54u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3160u), rd32(sp1 - 0x58u));
    t601 = g->ecx;
    t602 = g->edx;
    ecx = t601;
    edx = t602;
    COW_AT(10277564)
    wr32(sp1 - 0x24u, arg1 + 0x970u);
    wr32(sp1 - 0x28u, COW_IMG(0x103b3150u));
    g->ebx = ebx;
    g->eax = arg1 + 0x970u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t603 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3150u), arg1 + 0x970u);
    t604 = g->ecx;
    t605 = g->edx;
    eax = t603;
    ecx = t604;
    edx = t605;
    COW_AT(10277578)
    wr32(sp1 - 0x2cu, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t606 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3150u), rd32(sp1 - 0x24u));
    t607 = g->edx;
    eax = t606;
    edx = t607;
    COW_AT(1027757e)
    t608 = rd32(arg1 + 0x990u);
    wr32(sp1 - 0x30u, t608);
    wr32(sp1 - 0x34u, COW_IMG(0x103b3144u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t608;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t609 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3144u), t608);
    t610 = g->ecx;
    t611 = g->edx;
    eax = t609;
    ecx = t610;
    edx = t611;
    COW_AT(1027758f)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x2cu;
    t612 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3144u), rd32(sp1 - 0x30u));
    t613 = g->ecx;
    eax = t612;
    ecx = t613;
    COW_AT(10277595)
    t614 = rd32(arg1 + 0x994u);
    wr32(sp1 - 0x3cu, t614);
    wr32(sp1 - 0x40u, COW_IMG(0x103b3134u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t614;
    g->esp = sp1 - 0x38u;
    t615 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3134u), t614);
    t616 = g->ecx;
    t617 = g->edx;
    eax = t615;
    ecx = t616;
    edx = t617;
    COW_AT(102775a6)
    wr32(sp1 - 0x44u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3134u), rd32(sp1 - 0x3cu));
    t618 = g->ecx;
    t619 = g->edx;
    ecx = t618;
    edx = t619;
    COW_AT(102775ac)
    t620 = rd32(arg1 + 0x998u);
    wr32(sp1 - 0x48u, t620);
    wr32(sp1 - 0x4cu, COW_IMG(0x103b3124u));
    g->ebx = ebx;
    g->eax = t620;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t621 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3124u), t620);
    t622 = g->ecx;
    t623 = g->edx;
    eax = t621;
    ecx = t622;
    edx = t623;
    COW_AT(102775bd)
    wr32(sp1 - 0x50u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t624 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3124u), rd32(sp1 - 0x48u));
    t625 = g->edx;
    eax = t624;
    edx = t625;
    COW_AT(102775c3)
    t626 = rd32(arg1 + 0x9a0u);
    wr32(sp1 - 0x54u, t626);
    wr32(sp1 - 0x58u, COW_IMG(0x103b3118u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t626;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t627 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3118u), t626);
    t628 = g->ecx;
    t629 = g->edx;
    eax = t627;
    ecx = t628;
    edx = t629;
    COW_AT(102775d4)
    wr32(sp1 - 0x5cu, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t630 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b3118u), rd32(sp1 - 0x54u));
    t631 = g->ecx;
    t632 = g->edx;
    eax = t630;
    ecx = t631;
    edx = t632;
    COW_AT(102775da)
    wr32(sp1 - 0x60u, COW_IMG(0x103b3100u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x58u;
    t633 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3100u), rd32(sp1 - 0x5cu));
    t634 = g->ecx;
    t635 = g->edx;
    eax = t633;
    ecx = t634;
    edx = t635;
    COW_AT(102775e4)
    wr32(sp1 - 0x24u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t636 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t637 = g->ecx;
    t638 = g->edx;
    eax = t636;
    ecx = t637;
    edx = t638;
    COW_AT(102775ed)
    wr32(sp1 - 0x28u, COW_IMG(0x103b30ecu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t639 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b30ecu), rd32(sp1 - 0x24u));
    t640 = g->ecx;
    t641 = g->edx;
    eax = t639;
    ecx = t640;
    edx = t641;
    COW_AT(102775f7)
    wr32(sp1 - 0x2cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t642 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b30ecu), rd32(sp1 - 0x24u));
    t643 = g->ecx;
    t644 = g->edx;
    eax = t642;
    ecx = t643;
    edx = t644;
    COW_AT(102775fd)
    d645 = (double)rdf32(arg1 + 0x9a4u);
    wrf64(sp1 - 0x28u, d645);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b30d8u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t646 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b30d8u), cow_dlo(d645));
    t647 = g->ecx;
    t648 = g->edx;
    eax = t646;
    ecx = t647;
    edx = t648;
    COW_AT(10277613)
    wr32(sp1 - 0x30u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t649 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b30d8u), rd32(sp1 - 0x28u));
    t650 = g->ecx;
    t651 = g->edx;
    eax = t649;
    ecx = t650;
    edx = t651;
    COW_AT(10277619)
    wr32(sp1 - 0x34u, COW_IMG(0x103b30c4u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t652 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b30c4u), rd32(sp1 - 0x30u));
    t653 = g->ecx;
    t654 = g->edx;
    eax = t652;
    ecx = t653;
    edx = t654;
    COW_AT(10277623)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t655 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b30c4u), rd32(sp1 - 0x30u));
    t656 = g->ecx;
    t657 = g->edx;
    eax = t655;
    ecx = t656;
    edx = t657;
    COW_AT(10277629)
    d658 = (double)rdf32(arg1 + 0x9b8u);
    wrf64(sp1 - 0x28u, d658);
    d659 = (double)rdf32(arg1 + 0x9b4u);
    wrf64(sp1 - 0x30u, d659);
    d660 = (double)rdf32(arg1 + 0x9b0u);
    wrf64(sp1 - 0x38u, d660);
    d661 = (double)rdf32(arg1 + 0x9acu);
    wrf64(sp1 - 0x40u, d661);
    wr32(sp1 - 0x44u, COW_IMG(0x103b30a8u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t662 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b30a8u), cow_dlo(d661));
    t663 = g->ecx;
    t664 = g->edx;
    eax = t662;
    ecx = t663;
    edx = t664;
    COW_AT(1027765c)
    wr32(sp1 - 0x48u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t665 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b30a8u), rd32(sp1 - 0x40u));
    t666 = g->ecx;
    t667 = g->edx;
    eax = t665;
    ecx = t666;
    edx = t667;
    COW_AT(10277662)
    d668 = (double)rdf32(arg1 + 0x9c8u);
    wrf64(sp1 - 0x28u, d668);
    d669 = (double)rdf32(arg1 + 0x9c4u);
    wrf64(sp1 - 0x30u, d669);
    d670 = (double)rdf32(arg1 + 0x9c0u);
    wrf64(sp1 - 0x38u, d670);
    d671 = (double)rdf32(arg1 + 0x9bcu);
    wrf64(sp1 - 0x40u, d671);
    wr32(sp1 - 0x44u, COW_IMG(0x103b3084u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t672 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3084u), cow_dlo(d671));
    t673 = g->ecx;
    t674 = g->edx;
    eax = t672;
    ecx = t673;
    edx = t674;
    COW_AT(10277696)
    wr32(sp1 - 0x48u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x3cu;
    t675 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b3084u), rd32(sp1 - 0x40u));
    t676 = g->ecx;
    t677 = g->edx;
    eax = t675;
    ecx = t676;
    edx = t677;
    COW_AT(1027769c)
    wr32(sp1 - 0x4cu, COW_IMG(0x103b3068u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t678 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3068u), rd32(sp1 - 0x48u));
    t679 = g->ecx;
    t680 = g->edx;
    eax = t678;
    ecx = t679;
    edx = t680;
    COW_AT(102776a6)
    wr32(sp1 - 0x50u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t681 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3068u), rd32(sp1 - 0x48u));
    t682 = g->ecx;
    t683 = g->edx;
    eax = t681;
    ecx = t682;
    edx = t683;
    COW_AT(102776ac)
    d684 = (double)rdf32(arg1 + 0x9ccu);
    wrf64(sp1 - 0x28u, d684);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3050u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t685 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3050u), cow_dlo(d684));
    t686 = g->ecx;
    t687 = g->edx;
    eax = t685;
    ecx = t686;
    edx = t687;
    COW_AT(102776c2)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t688 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3050u), rd32(sp1 - 0x28u));
    t689 = g->ecx;
    t690 = g->edx;
    eax = t688;
    ecx = t689;
    edx = t690;
    COW_AT(102776c8)
    d691 = (double)rdf32(arg1 + 0x9d0u);
    wrf64(sp1 - 0x28u, d691);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3034u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t692 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3034u), cow_dlo(d691));
    t693 = g->ecx;
    t694 = g->edx;
    eax = t692;
    ecx = t693;
    edx = t694;
    COW_AT(102776de)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t695 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3034u), rd32(sp1 - 0x28u));
    t696 = g->ecx;
    t697 = g->edx;
    eax = t695;
    ecx = t696;
    edx = t697;
    COW_AT(102776e4)
    d698 = (double)rdf32(arg1 + 0x9d4u);
    wrf64(sp1 - 0x28u, d698);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b3018u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t699 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3018u), cow_dlo(d698));
    t700 = g->ecx;
    t701 = g->edx;
    eax = t699;
    ecx = t700;
    edx = t701;
    COW_AT(102776fa)
    wr32(sp1 - 0x30u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x24u;
    t702 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b3018u), rd32(sp1 - 0x28u));
    t703 = g->ecx;
    eax = t702;
    ecx = t703;
    COW_AT(10277700)
    t704 = rd32(arg1 + 0x9d8u);
    wr32(sp1 - 0x34u, t704);
    wr32(sp1 - 0x38u, COW_IMG(0x103b2ffcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t704;
    g->esp = sp1 - 0x30u;
    t705 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2ffcu), t704);
    t706 = g->ecx;
    t707 = g->edx;
    eax = t705;
    ecx = t706;
    edx = t707;
    COW_AT(10277711)
    wr32(sp1 - 0x3cu, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t708 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b2ffcu), rd32(sp1 - 0x34u));
    t709 = g->ecx;
    t710 = g->edx;
    eax = t708;
    ecx = t709;
    edx = t710;
    COW_AT(10277717)
    wr32(sp1 - 0x40u, COW_IMG(0x103b2fe8u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t711 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2fe8u), rd32(sp1 - 0x3cu));
    t712 = g->ecx;
    t713 = g->edx;
    eax = t711;
    ecx = t712;
    edx = t713;
    COW_AT(10277721)
    wr32(sp1 - 0x44u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2fe8u), rd32(sp1 - 0x3cu));
    t714 = g->ecx;
    t715 = g->edx;
    ecx = t714;
    edx = t715;
    COW_AT(10277727)
    t716 = rd32(arg1 + 0x9dcu);
    wr32(sp1 - 0x48u, t716);
    wr32(sp1 - 0x4cu, COW_IMG(0x103b2fd4u));
    g->ebx = ebx;
    g->eax = t716;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t717 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2fd4u), t716);
    t718 = g->ecx;
    t719 = g->edx;
    eax = t717;
    ecx = t718;
    edx = t719;
    COW_AT(10277738)
    wr32(sp1 - 0x50u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    t720 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2fd4u), rd32(sp1 - 0x48u));
    t721 = g->edx;
    eax = t720;
    edx = t721;
    COW_AT(1027773e)
    t722 = rd32(arg1 + 0x9e0u);
    wr32(sp1 - 0x54u, t722);
    wr32(sp1 - 0x58u, COW_IMG(0x103b2fbcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t722;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t723 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2fbcu), t722);
    t724 = g->ecx;
    t725 = g->edx;
    eax = t723;
    ecx = t724;
    edx = t725;
    COW_AT(1027774f)
    wr32(sp1 - 0x5cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x50u;
    t726 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2fbcu), rd32(sp1 - 0x54u));
    t727 = g->ecx;
    eax = t726;
    ecx = t727;
    COW_AT(10277755)
    t728 = rd32(arg1 + 0x9e4u);
    wr32(sp1 - 0x60u, t728);
    wr32(sp1 - 0x64u, COW_IMG(0x103b2fa8u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t728;
    g->esp = sp1 - 0x5cu;
    t729 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2fa8u), t728);
    t730 = g->ecx;
    t731 = g->edx;
    eax = t729;
    ecx = t730;
    edx = t731;
    COW_AT(10277766)
    wr32(sp1 - 0x24u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t732 = g->ecx;
    t733 = g->edx;
    ecx = t732;
    edx = t733;
    COW_AT(1027776f)
    t734 = rd32(arg1 + 0x9e8u);
    wr32(sp1 - 0x28u, t734);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b2f94u));
    g->ebx = ebx;
    g->eax = t734;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t735 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f94u), t734);
    t736 = g->ecx;
    t737 = g->edx;
    eax = t735;
    ecx = t736;
    edx = t737;
    COW_AT(10277780)
    wr32(sp1 - 0x30u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t738 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b2f94u), rd32(sp1 - 0x28u));
    t739 = g->ecx;
    t740 = g->edx;
    eax = t738;
    ecx = t739;
    edx = t740;
    COW_AT(10277786)
    wr32(sp1 - 0x34u, COW_IMG(0x103b2f7cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t741 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f7cu), rd32(sp1 - 0x30u));
    t742 = g->ecx;
    t743 = g->edx;
    eax = t741;
    ecx = t742;
    edx = t743;
    COW_AT(10277790)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t744 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2f7cu), rd32(sp1 - 0x30u));
    t745 = g->edx;
    eax = t744;
    edx = t745;
    COW_AT(10277796)
    t746 = rd32(arg1 + 0xa04u);
    wr32(sp1 - 0x3cu, t746);
    wr32(sp1 - 0x40u, COW_IMG(0x103b2f70u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t746;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t747 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f70u), t746);
    t748 = g->ecx;
    t749 = g->edx;
    eax = t747;
    ecx = t748;
    edx = t749;
    COW_AT(102777a7)
    wr32(sp1 - 0x44u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x38u;
    t750 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2f70u), rd32(sp1 - 0x3cu));
    t751 = g->ecx;
    eax = t750;
    ecx = t751;
    COW_AT(102777ad)
    t752 = rd32(arg1 + 0xa08u);
    wr32(sp1 - 0x48u, t752);
    wr32(sp1 - 0x4cu, COW_IMG(0x103b2f60u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t752;
    g->esp = sp1 - 0x44u;
    t753 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f60u), t752);
    t754 = g->ecx;
    t755 = g->edx;
    eax = t753;
    ecx = t754;
    edx = t755;
    COW_AT(102777be)
    wr32(sp1 - 0x50u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2f60u), rd32(sp1 - 0x48u));
    t756 = g->ecx;
    t757 = g->edx;
    ecx = t756;
    edx = t757;
    COW_AT(102777c4)
    t758 = rd32(arg1 + 0xa0cu);
    wr32(sp1 - 0x54u, t758);
    wr32(sp1 - 0x58u, COW_IMG(0x103b2f50u));
    g->ebx = ebx;
    g->eax = t758;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t759 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f50u), t758);
    t760 = g->ecx;
    t761 = g->edx;
    eax = t759;
    ecx = t760;
    edx = t761;
    COW_AT(102777d5)
    wr32(sp1 - 0x5cu, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t762 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2f50u), rd32(sp1 - 0x54u));
    t763 = g->edx;
    eax = t762;
    edx = t763;
    COW_AT(102777db)
    t764 = rd32(arg1 + 0xa10u);
    wr32(sp1 - 0x60u, t764);
    wr32(sp1 - 0x64u, COW_IMG(0x103b2f40u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t764;
    g->edx = edx;
    g->esp = sp1 - 0x5cu;
    t765 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f40u), t764);
    t766 = g->ecx;
    t767 = g->edx;
    eax = t765;
    ecx = t766;
    edx = t767;
    COW_AT(102777ec)
    wr32(sp1 - 0x24u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x18u;
    t768 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t769 = g->ecx;
    eax = t768;
    ecx = t769;
    COW_AT(102777f5)
    t770 = rd32(arg1 + 0xa14u);
    wr32(sp1 - 0x28u, t770);
    wr32(sp1 - 0x2cu, COW_IMG(0x103b2f30u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t770;
    g->esp = sp1 - 0x24u;
    t771 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f30u), t770);
    t772 = g->ecx;
    t773 = g->edx;
    eax = t771;
    ecx = t772;
    edx = t773;
    COW_AT(10277806)
    wr32(sp1 - 0x30u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t774 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b2f30u), rd32(sp1 - 0x28u));
    t775 = g->ecx;
    t776 = g->edx;
    eax = t774;
    ecx = t775;
    edx = t776;
    COW_AT(1027780c)
    wr32(sp1 - 0x34u, COW_IMG(0x103b2f18u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t777 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f18u), rd32(sp1 - 0x30u));
    t778 = g->ecx;
    t779 = g->edx;
    eax = t777;
    ecx = t778;
    edx = t779;
    COW_AT(10277816)
    wr32(sp1 - 0x38u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x2cu;
    t780 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2f18u), rd32(sp1 - 0x30u));
    t781 = g->ecx;
    t782 = g->edx;
    eax = t780;
    ecx = t781;
    edx = t782;
    COW_AT(1027781c)
    wr32(sp1 - 0x3cu, COW_IMG(0x103b2f08u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    t783 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2f08u), rd32(sp1 - 0x38u));
    t784 = g->ecx;
    t785 = g->edx;
    eax = t783;
    ecx = t784;
    edx = t785;
    COW_AT(10277826)
    wr32(sp1 - 0x40u, arg3 + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x34u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2f08u), rd32(sp1 - 0x38u));
    t786 = g->ecx;
    t787 = g->edx;
    ecx = t786;
    edx = t787;
    COW_AT(1027782c)
    wr32(sp1 - 0x44u, arg1 + 0xa20u);
    wr32(sp1 - 0x48u, COW_IMG(0x103b2ef8u));
    g->ebx = ebx;
    g->eax = arg1 + 0xa20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x40u;
    t788 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2ef8u), arg1 + 0xa20u);
    t789 = g->ecx;
    t790 = g->edx;
    eax = t788;
    ecx = t789;
    edx = t790;
    COW_AT(1027783d)
    wr32(sp1 - 0x4cu, arg3 + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x40u;
    t791 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2ef8u), rd32(sp1 - 0x44u));
    t792 = g->edx;
    eax = t791;
    edx = t792;
    COW_AT(10277843)
    t793 = rd32(arg1 + 0xa30u);
    wr32(sp1 - 0x50u, t793);
    wr32(sp1 - 0x54u, COW_IMG(0x103b2eecu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = t793;
    g->edx = edx;
    g->esp = sp1 - 0x4cu;
    t794 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2eecu), t793);
    t795 = g->ecx;
    t796 = g->edx;
    eax = t794;
    ecx = t795;
    edx = t796;
    COW_AT(10277854)
    wr32(sp1 - 0x58u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x4cu;
    t797 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2eecu), rd32(sp1 - 0x50u));
    t798 = g->ecx;
    eax = t797;
    ecx = t798;
    COW_AT(1027785a)
    t799 = rd32(arg1 + 0xa3cu);
    wr32(sp1 - 0x5cu, t799);
    wr32(sp1 - 0x60u, COW_IMG(0x103b2ed8u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t799;
    g->esp = sp1 - 0x58u;
    t800 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2ed8u), t799);
    t801 = g->ecx;
    t802 = g->edx;
    eax = t800;
    ecx = t801;
    edx = t802;
    COW_AT(1027786b)
    wr32(sp1 - 0x24u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x18u;
    t803 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
    t804 = g->ecx;
    t805 = g->edx;
    eax = t803;
    ecx = t804;
    edx = t805;
    COW_AT(10277874)
    wr32(sp1 - 0x28u, COW_IMG(0x103b2ec4u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t806 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2ec4u), rd32(sp1 - 0x24u));
    t807 = g->ecx;
    t808 = g->edx;
    eax = t806;
    ecx = t807;
    edx = t808;
    COW_AT(1027787e)
    wr32(sp1 - 0x2cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    t809 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2ec4u), rd32(sp1 - 0x24u));
    t810 = g->ecx;
    t811 = g->edx;
    eax = t809;
    ecx = t810;
    edx = t811;
    COW_AT(10277884)
    wr32(sp1 - 0x30u, COW_IMG(0x103b2eacu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x28u;
    t812 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2eacu), rd32(sp1 - 0x2cu));
    t813 = g->ecx;
    t814 = g->edx;
    eax = t812;
    ecx = t813;
    edx = t814;
    COW_AT(1027788e)
    wr32(sp1 - 0x34u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x28u;
    t815 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, ebx, COW_IMG(0x103b2eacu), rd32(sp1 - 0x2cu));
    t816 = g->ecx;
    t817 = g->edx;
    eax = t815;
    ecx = t816;
    edx = t817;
    COW_AT(10277894)
    wr32(sp1 - 0x38u, COW_IMG(0x103b2e90u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t818 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2e90u), rd32(sp1 - 0x34u));
    t819 = g->ecx;
    t820 = g->edx;
    eax = t818;
    ecx = t819;
    edx = t820;
    COW_AT(1027789e)
    wr32(sp1 - 0x3cu, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t821 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b2e90u), rd32(sp1 - 0x34u));
    t822 = g->ecx;
    t823 = g->edx;
    eax = t821;
    ecx = t822;
    edx = t823;
    COW_AT(102778a4)
    wr32(sp1 - 0x40u, COW_IMG(0x103b2eacu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x38u;
    t824 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2eacu), rd32(sp1 - 0x3cu));
    t825 = g->edx;
    eax = t824;
    edx = t825;
    COW_AT(102778ae)
    g->ebx = rd32(sp1 - 0x18u);
    g->esi = rd32(sp1 - 0x1cu);
    g->edi = rd32(sp1 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10276900(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x10276915u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        wr32(sp1 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10276923u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b36b4u));
        wr32(sp1 - 0x28u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x10276930u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1027693au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x34u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp1 - 0x34u, COW_IMG(0x103b369cu));
        (void)sp0;
        return 1;
    }
    case 0x10276943u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276956u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b368cu));
        (void)sp0;
        return 1;
    }
    case 0x1027695cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276966u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x34u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b3674u));
        (void)sp0;
        return 1;
    }
    case 0x1027696cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027697du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x40u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b365cu));
        (void)sp0;
        return 1;
    }
    case 0x10276983u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x44u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276999u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3640u));
        (void)sp0;
        return 1;
    }
    case 0x1027699fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102769b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3630u));
        (void)sp0;
        return 1;
    }
    case 0x102769bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102769c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x34u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b3618u));
        (void)sp0;
        return 1;
    }
    case 0x102769cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102769d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x3cu, COW_IMG(0x103b3610u));
        (void)sp0;
        return 1;
    }
    case 0x102769e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x48u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102769ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x4cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102769f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x50u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x50u, COW_IMG(0x103b3608u));
        (void)sp0;
        return 1;
    }
    case 0x10276a05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x5cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x58u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10276a0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x60u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276a18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x24u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x24u, COW_IMG(0x103b3600u));
        (void)sp0;
        return 1;
    }
    case 0x10276a28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10276a2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x34u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276a56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x3cu, COW_IMG(0x103b35ecu));
        (void)sp0;
        return 1;
    }
    case 0x10276a5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x40u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276a86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x3cu, COW_IMG(0x103b35d4u));
        (void)sp0;
        return 1;
    }
    case 0x10276a8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x40u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ab6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x3cu, COW_IMG(0x103b35bcu));
        (void)sp0;
        return 1;
    }
    case 0x10276abcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x40u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ad2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b35b0u));
        (void)sp0;
        return 1;
    }
    case 0x10276ad8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276aeeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b35a0u));
        (void)sp0;
        return 1;
    }
    case 0x10276af4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276b0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3590u));
        (void)sp0;
        return 1;
    }
    case 0x10276b10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276b26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3584u));
        (void)sp0;
        return 1;
    }
    case 0x10276b2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276b42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3578u));
        (void)sp0;
        return 1;
    }
    case 0x10276b48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276b5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b356cu));
        (void)sp0;
        return 1;
    }
    case 0x10276b64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276b7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3560u));
        (void)sp0;
        return 1;
    }
    case 0x10276b80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276b96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3550u));
        (void)sp0;
        return 1;
    }
    case 0x10276b9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276bb2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3540u));
        (void)sp0;
        return 1;
    }
    case 0x10276bb8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276bc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b3530u));
        (void)sp0;
        return 1;
    }
    case 0x10276bcfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276be0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x44u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b3520u));
        (void)sp0;
        return 1;
    }
    case 0x10276be6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x48u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276bfcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b350cu));
        (void)sp0;
        return 1;
    }
    case 0x10276c02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3500u));
        (void)sp0;
        return 1;
    }
    case 0x10276c1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b34f4u));
        (void)sp0;
        return 1;
    }
    case 0x10276c35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c3fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x40u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b34e8u));
        (void)sp0;
        return 1;
    }
    case 0x10276c4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x4cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10276c55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x50u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c5fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c70u:
    {
        uint32_t al_m10;
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m10 = rd32(sp1 - 0x10u);
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c78u:
    {
        uint32_t al_m10;
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m10 = rd32(sp1 - 0x10u);
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276c9du:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ca8u:
    {
        uint32_t al_m10;
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m10 = rd32(sp1 - 0x10u);
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276caeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276cb8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276cc9u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276cdbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276cecu:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276cf6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x24u, COW_IMG(0x103b34c4u));
        (void)sp0;
        return 1;
    }
    case 0x10276cfcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276d0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b34b4u));
        (void)sp0;
        return 1;
    }
    case 0x10276d15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276d28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b34a0u));
        (void)sp0;
        return 1;
    }
    case 0x10276d32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276d3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b3488u));
        (void)sp0;
        return 1;
    }
    case 0x10276d42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276d76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b346cu));
        (void)sp0;
        return 1;
    }
    case 0x10276d7cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276d92u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b345cu));
        (void)sp0;
        return 1;
    }
    case 0x10276d98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276daeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b344cu));
        (void)sp0;
        return 1;
    }
    case 0x10276db4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276dcau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b343cu));
        (void)sp0;
        return 1;
    }
    case 0x10276dd0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276de1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b342cu));
        (void)sp0;
        return 1;
    }
    case 0x10276de7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b3410u));
        (void)sp0;
        return 1;
    }
    case 0x10276e1fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x50u, COW_IMG(0x103b33fcu));
        (void)sp0;
        return 1;
    }
    case 0x10276e36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e6cu:
    {
        uint32_t al_m10;
        uint32_t al_m14;
        uint32_t al_m4;
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m14 = rd32(sp1 - 0x14u);
        al_m10 = rd32(sp1 - 0x10u);
        al_m8 = rd32(sp1 - 8u);
        al_m4 = rd32(sp1 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b33d8u));
        (void)sp0;
        return 1;
    }
    case 0x10276e8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276e9eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b33c8u));
        (void)sp0;
        return 1;
    }
    case 0x10276ea8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ebbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276edau:
    {
        uint32_t al_m14;
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m14 = rd32(sp1 - 0x14u);
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ee4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276eeeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x28u, COW_IMG(0x103b3394u));
        (void)sp0;
        return 1;
    }
    case 0x10276ef4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b337cu));
        (void)sp0;
        return 1;
    }
    case 0x10276f10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b3368u));
        (void)sp0;
        return 1;
    }
    case 0x10276f27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b3358u));
        (void)sp0;
        return 1;
    }
    case 0x10276f3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x50u, COW_IMG(0x103b334cu));
        (void)sp0;
        return 1;
    }
    case 0x10276f55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f66u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x5cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x5cu, COW_IMG(0x103b3334u));
        (void)sp0;
        return 1;
    }
    case 0x10276f6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x60u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x28u, COW_IMG(0x103b331cu));
        (void)sp0;
        return 1;
    }
    case 0x10276f86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276f97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b3308u));
        (void)sp0;
        return 1;
    }
    case 0x10276f9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276faeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b32fcu));
        (void)sp0;
        return 1;
    }
    case 0x10276fb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276fc5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x4cu, COW_IMG(0x103b32f0u));
        (void)sp0;
        return 1;
    }
    case 0x10276fcbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276fdcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x58u, COW_IMG(0x103b32e0u));
        (void)sp0;
        return 1;
    }
    case 0x10276fe2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x5cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ff3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10276ffcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027700du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b32bcu));
        (void)sp0;
        return 1;
    }
    case 0x10277013u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277024u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b32acu));
        (void)sp0;
        return 1;
    }
    case 0x1027702au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027703bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b329cu));
        (void)sp0;
        return 1;
    }
    case 0x10277041u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277052u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x50u, COW_IMG(0x103b3288u));
        (void)sp0;
        return 1;
    }
    case 0x10277058u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277062u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277073u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277079u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027708au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b325cu));
        (void)sp0;
        return 1;
    }
    case 0x10277090u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027709au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102770a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102770b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102770b4u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102770beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102770eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277103u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277109u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277113u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277124u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027712au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277134u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027713eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027714au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027714eu:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277158u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277184u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027719du:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1 + 0x920u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x24u;
        g->ebx = arg1 + 0x920u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x28u;
        g->ebx = arg1 + 0x920u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1 + 0x920u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771e6u:
    {
        uint32_t al_m14;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m14 = rd32(sp1 - 0x14u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102771f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277201u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027721au:
    {
        uint32_t al_m14;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m14 = rd32(sp1 - 0x14u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277220u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027722au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027722du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027723bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277241u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027724bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277255u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277261u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277265u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027726fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027729bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772b4u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102772ffu:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277309u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277335u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027734eu:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277354u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027735eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277361u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027736bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1 + 0x934u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277371u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x24u;
        g->ebx = arg1 + 0x934u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027737bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x28u;
        g->ebx = arg1 + 0x934u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277385u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1 + 0x934u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277397u:
    {
        uint32_t al_m14;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m14 = rd32(sp1 - 0x14u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773cbu:
    {
        uint32_t al_m14;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m14 = rd32(sp1 - 0x14u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102773fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277406u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277412u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277416u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277420u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027744cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277465u:
    {
        uint32_t al_m8;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        al_m8 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027746bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277475u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277478u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277482u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277488u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277492u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027749cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102774f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277502u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b31a4u));
        (void)sp0;
        return 1;
    }
    case 0x10277508u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277519u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b3190u));
        (void)sp0;
        return 1;
    }
    case 0x1027751fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277530u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b3180u));
        (void)sp0;
        return 1;
    }
    case 0x10277536u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277547u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x50u, COW_IMG(0x103b316cu));
        (void)sp0;
        return 1;
    }
    case 0x1027754du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027755eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x5cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x5cu, COW_IMG(0x103b3160u));
        (void)sp0;
        return 1;
    }
    case 0x10277564u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x60u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277578u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x28u, COW_IMG(0x103b3150u));
        (void)sp0;
        return 1;
    }
    case 0x1027757eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027758fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b3144u));
        (void)sp0;
        return 1;
    }
    case 0x10277595u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102775a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b3134u));
        (void)sp0;
        return 1;
    }
    case 0x102775acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102775bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x4cu, COW_IMG(0x103b3124u));
        (void)sp0;
        return 1;
    }
    case 0x102775c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102775d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x58u, COW_IMG(0x103b3118u));
        (void)sp0;
        return 1;
    }
    case 0x102775dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x5cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102775e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x60u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102775edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102775f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x28u, COW_IMG(0x103b30ecu));
        (void)sp0;
        return 1;
    }
    case 0x102775fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277613u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b30d8u));
        (void)sp0;
        return 1;
    }
    case 0x10277619u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277623u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b30c4u));
        (void)sp0;
        return 1;
    }
    case 0x10277629u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027765cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b30a8u));
        (void)sp0;
        return 1;
    }
    case 0x10277662u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277696u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x44u, COW_IMG(0x103b3084u));
        (void)sp0;
        return 1;
    }
    case 0x1027769cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102776a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x4cu, COW_IMG(0x103b3068u));
        (void)sp0;
        return 1;
    }
    case 0x102776acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102776c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3050u));
        (void)sp0;
        return 1;
    }
    case 0x102776c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102776deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3034u));
        (void)sp0;
        return 1;
    }
    case 0x102776e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102776fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3018u));
        (void)sp0;
        return 1;
    }
    case 0x10277700u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277711u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b2ffcu));
        (void)sp0;
        return 1;
    }
    case 0x10277717u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277721u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b2fe8u));
        (void)sp0;
        return 1;
    }
    case 0x10277727u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277738u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x4cu, COW_IMG(0x103b2fd4u));
        (void)sp0;
        return 1;
    }
    case 0x1027773eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027774fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x58u, COW_IMG(0x103b2fbcu));
        (void)sp0;
        return 1;
    }
    case 0x10277755u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x5cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277766u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027776fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277780u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b2f94u));
        (void)sp0;
        return 1;
    }
    case 0x10277786u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277790u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b2f7cu));
        (void)sp0;
        return 1;
    }
    case 0x10277796u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102777a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x40u, COW_IMG(0x103b2f70u));
        (void)sp0;
        return 1;
    }
    case 0x102777adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102777beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x4cu, COW_IMG(0x103b2f60u));
        (void)sp0;
        return 1;
    }
    case 0x102777c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102777d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x58u, COW_IMG(0x103b2f50u));
        (void)sp0;
        return 1;
    }
    case 0x102777dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x5cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102777ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102777f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277806u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b2f30u));
        (void)sp0;
        return 1;
    }
    case 0x1027780cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277816u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x34u, COW_IMG(0x103b2f18u));
        (void)sp0;
        return 1;
    }
    case 0x1027781cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277826u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x3cu, COW_IMG(0x103b2f08u));
        (void)sp0;
        return 1;
    }
    case 0x1027782cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027783du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x48u, COW_IMG(0x103b2ef8u));
        (void)sp0;
        return 1;
    }
    case 0x10277843u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277854u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x54u, COW_IMG(0x103b2eecu));
        (void)sp0;
        return 1;
    }
    case 0x1027785au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027786bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x60u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x10277874u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027787eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x28u, COW_IMG(0x103b2ec4u));
        (void)sp0;
        return 1;
    }
    case 0x10277884u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027788eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x30u, COW_IMG(0x103b2eacu));
        (void)sp0;
        return 1;
    }
    case 0x10277894u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x1027789eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 2u;
        wr32(sp1 - 0x38u, COW_IMG(0x103b2e90u));
        (void)sp0;
        return 1;
    }
    case 0x102778a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102778aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10276900(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10276900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
