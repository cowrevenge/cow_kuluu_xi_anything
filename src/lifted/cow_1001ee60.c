/* f_0x1001ee60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001ee60(Guest* g)
{
    double d109;
    double d110;
    double d114;
    double d125;
    double d126;
    double d15;
    double d150;
    double d162;
    double d166;
    double d174;
    double d180;
    double d181;
    double d182;
    double d190;
    double d212;
    double d226;
    double d235;
    double d255;
    double d26;
    double d264;
    double d274;
    double d281;
    double d285;
    double d286;
    double d289;
    double d290;
    double d30;
    double d303;
    double d307;
    double d308;
    double d315;
    double d319;
    double d320;
    double d333;
    double d337;
    double d338;
    double d34;
    double d348;
    double d352;
    double d353;
    double d359;
    double d375;
    double d38;
    double d386;
    double d390;
    double d396;
    double d400;
    double d401;
    double d417;
    double d420;
    double d432;
    double d433;
    double d439;
    double d443;
    double d446;
    double d447;
    double d45;
    double d451;
    double d454;
    double d455;
    double d462;
    double d463;
    double d464;
    double d47;
    double d473;
    double d474;
    double d476;
    double d477;
    double d478;
    double d479;
    double d48;
    double d489;
    double d493;
    double d494;
    double d495;
    double d496;
    double d508;
    double d509;
    double d51;
    double d512;
    double d52;
    double d537;
    double d538;
    double d542;
    double d543;
    double d544;
    double d549;
    double d577;
    double d578;
    double d58;
    double d582;
    double d583;
    double d584;
    double d585;
    double d587;
    double d59;
    double d603;
    double d604;
    double d616;
    double d617;
    double d619;
    double d620;
    double d621;
    double d622;
    double d623;
    double d624;
    double d625;
    double d629;
    double d633;
    double d637;
    double d644;
    double d675;
    double d676;
    double d677;
    double d678;
    double d679;
    double d680;
    double d682;
    double d683;
    double d684;
    double d704;
    double d71;
    double d718;
    double d719;
    double d72;
    double d722;
    double d734;
    double d740;
    double d741;
    double d748;
    double d749;
    double d76;
    double d768;
    double d769;
    double d770;
    double d771;
    double d772;
    double d773;
    double d775;
    double d776;
    double d782;
    double d783;
    double d802;
    double d803;
    double d806;
    double d81;
    double d815;
    double d819;
    double d82;
    double d87;
    double d88;
    double d94;
    double d95;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_150;
    uint32_t loc_180;
    double loc_1cc_f;
    uint32_t loc_1d0;
    double loc_1d0_f;
    uint32_t loc_1d4;
    double loc_1d4_f;
    uint32_t loc_1d8;
    double loc_1d8_f;
    uint32_t loc_1e0;
    double loc_1e0_f;
    uint32_t loc_1e4;
    uint32_t loc_1e8;
    uint32_t loc_1ec;
    uint32_t loc_1f4;
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
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
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
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
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
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
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
    uint32_t t256;
    uint32_t t257;
    uint32_t t258;
    uint32_t t259;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
    uint32_t t263;
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
    uint32_t t275;
    uint32_t t276;
    uint32_t t277;
    uint32_t t278;
    uint32_t t279;
    uint32_t t28;
    uint32_t t280;
    uint32_t t282;
    uint32_t t283;
    uint32_t t284;
    uint32_t t287;
    uint32_t t288;
    uint32_t t29;
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
    uint32_t t300;
    uint32_t t301;
    uint32_t t302;
    uint32_t t304;
    uint32_t t305;
    uint32_t t306;
    uint32_t t309;
    uint32_t t31;
    uint32_t t310;
    uint32_t t311;
    uint32_t t312;
    uint32_t t313;
    uint32_t t314;
    uint32_t t316;
    uint32_t t317;
    uint32_t t318;
    uint32_t t32;
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
    uint32_t t334;
    uint32_t t335;
    uint32_t t336;
    uint32_t t339;
    uint32_t t340;
    uint32_t t341;
    uint32_t t342;
    uint32_t t343;
    uint32_t t344;
    uint32_t t345;
    uint32_t t346;
    uint32_t t347;
    uint32_t t349;
    uint32_t t35;
    uint32_t t350;
    uint32_t t351;
    uint32_t t354;
    uint32_t t355;
    uint32_t t356;
    uint32_t t357;
    uint32_t t358;
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
    uint32_t t376;
    uint32_t t377;
    uint32_t t378;
    uint32_t t379;
    uint32_t t380;
    uint32_t t381;
    uint32_t t382;
    uint32_t t383;
    uint32_t t384;
    uint32_t t385;
    uint32_t t387;
    uint32_t t388;
    uint32_t t389;
    uint32_t t39;
    uint32_t t391;
    uint32_t t392;
    uint32_t t393;
    uint32_t t394;
    uint32_t t395;
    uint32_t t397;
    uint32_t t398;
    uint32_t t399;
    uint32_t t4;
    uint32_t t40;
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
    uint32_t t418;
    uint32_t t419;
    uint32_t t42;
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
    uint32_t t434;
    uint32_t t435;
    uint32_t t436;
    uint32_t t437;
    uint32_t t438;
    uint32_t t44;
    uint32_t t440;
    uint32_t t441;
    uint32_t t442;
    uint32_t t444;
    uint32_t t445;
    uint32_t t448;
    uint32_t t449;
    uint32_t t450;
    uint32_t t452;
    uint32_t t453;
    uint32_t t456;
    uint32_t t457;
    uint32_t t458;
    uint32_t t459;
    uint32_t t46;
    uint32_t t460;
    uint32_t t461;
    uint32_t t465;
    uint32_t t466;
    uint32_t t467;
    uint32_t t468;
    uint32_t t469;
    uint32_t t470;
    uint32_t t471;
    uint32_t t472;
    uint32_t t475;
    uint32_t t480;
    uint32_t t481;
    uint32_t t482;
    uint32_t t483;
    uint32_t t484;
    uint32_t t485;
    uint32_t t486;
    uint32_t t487;
    uint32_t t488;
    uint32_t t49;
    uint32_t t490;
    uint32_t t491;
    uint32_t t492;
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
    uint32_t t510;
    uint32_t t511;
    uint32_t t513;
    uint32_t t514;
    uint32_t t515;
    uint32_t t516;
    uint32_t t517;
    uint32_t t518;
    uint32_t t519;
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
    uint32_t t539;
    uint32_t t54;
    uint32_t t540;
    uint32_t t541;
    uint32_t t545;
    uint32_t t546;
    uint32_t t547;
    uint32_t t548;
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
    uint32_t t579;
    uint32_t t580;
    uint32_t t581;
    uint32_t t586;
    uint32_t t588;
    uint32_t t589;
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
    uint32_t t618;
    uint32_t t62;
    uint32_t t626;
    uint32_t t627;
    uint32_t t628;
    uint32_t t63;
    uint32_t t630;
    uint32_t t631;
    uint32_t t632;
    uint32_t t634;
    uint32_t t635;
    uint32_t t636;
    uint32_t t638;
    uint32_t t639;
    uint32_t t64;
    uint32_t t640;
    uint32_t t641;
    uint32_t t642;
    uint32_t t643;
    uint32_t t645;
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
    uint32_t t658;
    uint32_t t659;
    uint32_t t66;
    uint32_t t660;
    uint32_t t661;
    uint32_t t662;
    uint32_t t663;
    uint32_t t664;
    uint32_t t665;
    uint32_t t666;
    uint32_t t667;
    uint32_t t668;
    uint32_t t669;
    uint32_t t67;
    uint32_t t670;
    uint32_t t671;
    uint32_t t672;
    uint32_t t673;
    uint32_t t674;
    uint32_t t68;
    uint32_t t681;
    uint32_t t685;
    uint32_t t686;
    uint32_t t687;
    uint32_t t688;
    uint32_t t689;
    uint32_t t69;
    uint32_t t690;
    uint32_t t691;
    uint32_t t692;
    uint32_t t693;
    uint32_t t694;
    uint32_t t695;
    uint32_t t696;
    uint32_t t697;
    uint32_t t698;
    uint32_t t699;
    uint32_t t7;
    uint32_t t70;
    uint32_t t700;
    uint32_t t701;
    uint32_t t702;
    uint32_t t703;
    uint32_t t705;
    uint32_t t706;
    uint32_t t707;
    uint32_t t708;
    uint32_t t709;
    uint32_t t710;
    uint32_t t711;
    uint32_t t712;
    uint32_t t713;
    uint32_t t714;
    uint32_t t715;
    uint32_t t716;
    uint32_t t717;
    uint32_t t720;
    uint32_t t721;
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
    uint32_t t735;
    uint32_t t736;
    uint32_t t737;
    uint32_t t738;
    uint32_t t739;
    uint32_t t74;
    uint32_t t742;
    uint32_t t743;
    uint32_t t744;
    uint32_t t745;
    uint32_t t746;
    uint32_t t747;
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
    uint32_t t760;
    uint32_t t761;
    uint32_t t762;
    uint32_t t763;
    uint32_t t764;
    uint32_t t765;
    uint32_t t766;
    uint32_t t767;
    uint32_t t77;
    uint32_t t774;
    uint32_t t777;
    uint32_t t778;
    uint32_t t779;
    uint32_t t78;
    uint32_t t780;
    uint32_t t781;
    uint32_t t784;
    uint32_t t785;
    uint32_t t786;
    uint32_t t787;
    uint32_t t788;
    uint32_t t789;
    uint32_t t79;
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
    uint32_t t80;
    uint32_t t800;
    uint32_t t801;
    uint32_t t804;
    uint32_t t805;
    uint32_t t807;
    uint32_t t808;
    uint32_t t809;
    uint32_t t810;
    uint32_t t811;
    uint32_t t812;
    uint32_t t813;
    uint32_t t814;
    uint32_t t816;
    uint32_t t817;
    uint32_t t818;
    uint32_t t820;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 528u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001ee7bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x1e8u); in_esi = rd32(sp0 - 0x1e4u); g->edi = rd32(sp0 - 0x1e8u); g->esi = rd32(sp0 - 0x1e4u); goto E_1001ee7b;
    case 0x1001ee8au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0x1e8u); in_esi = rd32(sp0 - 0x1e4u); g->edi = rd32(sp0 - 0x1e8u); g->esi = rd32(sp0 - 0x1e4u); goto E_1001ee8a;
    case 0x1001ee96u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x1e8u); in_esi = rd32(sp0 - 0x1e4u); g->edi = rd32(sp0 - 0x1e8u); g->esi = rd32(sp0 - 0x1e4u); goto E_1001ee96;
    case 0x1001eea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); goto E_1001eea2;
    case 0x1001eeaau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); loc_1e8 = rd32(sp0 - 0x1e8u); loc_1e4 = rd32(sp0 - 0x1e4u); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_1001eeaa;
    case 0x1001eeb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); goto E_1001eeb6;
    case 0x1001eebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); goto E_1001eebe;
    case 0x1001eed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001eed0;
    case 0x1001eee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001eee1;
    case 0x1001eeefu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001eeef;
    case 0x1001ef03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ef03;
    case 0x1001ef08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef08;
    case 0x1001ef18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef18;
    case 0x1001ef22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef22;
    case 0x1001ef2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef2e;
    case 0x1001ef42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef42;
    case 0x1001ef4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1d0 = rd32(sp0 - 0x1d0u); goto E_1001ef4a;
    case 0x1001ef53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ef53;
    case 0x1001ef60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ef60;
    case 0x1001ef67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1d0 = rd32(sp0 - 0x1d0u); goto E_1001ef67;
    case 0x1001ef71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef71;
    case 0x1001ef78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef78;
    case 0x1001ef86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1d0_f = rdf32(sp0 - 0x1d0u); goto E_1001ef86;
    case 0x1001ef90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef90;
    case 0x1001ef97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001ef97;
    case 0x1001efa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1cc_f = rdf32(sp0 - 0x1ccu); goto E_1001efa5;
    case 0x1001efb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001efb2;
    case 0x1001efb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1d4 = rd32(sp0 - 0x1d4u); goto E_1001efb6;
    case 0x1001efbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001efbb;
    case 0x1001efc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001efc4;
    case 0x1001efd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001efd6;
    case 0x1001efdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001efda;
    case 0x1001efe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001efe3;
    case 0x1001efecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001efec;
    case 0x1001effdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1001effd;
    case 0x1001f007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1d4 = rd32(sp0 - 0x1d4u); loc_1d0_f = rdf32(sp0 - 0x1d0u); goto E_1001f007;
    case 0x1001f012u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f012;
    case 0x1001f01fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f01f;
    case 0x1001f024u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f024;
    case 0x1001f03cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f03c;
    case 0x1001f040u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f040;
    case 0x1001f045u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f045;
    case 0x1001f04cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f04c;
    case 0x1001f061u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f061;
    case 0x1001f076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f076;
    case 0x1001f088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f088;
    case 0x1001f090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f090;
    case 0x1001f0a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f0a2;
    case 0x1001f0acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f0ac;
    case 0x1001f0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f0b0;
    case 0x1001f0c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f0c5;
    case 0x1001f0cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f0cf;
    case 0x1001f0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f0e0;
    case 0x1001f0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); goto E_1001f0e6;
    case 0x1001f0f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f0f2;
    case 0x1001f0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f0f7;
    case 0x1001f10fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f10f;
    case 0x1001f113u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f113;
    case 0x1001f128u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f128;
    case 0x1001f130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f130;
    case 0x1001f141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f141;
    case 0x1001f147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f147;
    case 0x1001f14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f14d;
    case 0x1001f152u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f152;
    case 0x1001f15au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f15a;
    case 0x1001f164u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f164;
    case 0x1001f16cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f16c;
    case 0x1001f179u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f179;
    case 0x1001f18eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f18e;
    case 0x1001f1a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f1a4;
    case 0x1001f1a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f1a8;
    case 0x1001f1adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f1ad;
    case 0x1001f1b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f1b4;
    case 0x1001f1c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f1c9;
    case 0x1001f1deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f1de;
    case 0x1001f1f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f1f0;
    case 0x1001f1f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f1f8;
    case 0x1001f20au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f20a;
    case 0x1001f214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f214;
    case 0x1001f218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f218;
    case 0x1001f22du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f22d;
    case 0x1001f237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f237;
    case 0x1001f248u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; goto E_1001f248;
    case 0x1001f24eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); goto E_1001f24e;
    case 0x1001f25au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f25a;
    case 0x1001f265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f265;
    case 0x1001f26bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f26b;
    case 0x1001f275u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f275;
    case 0x1001f277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f277;
    case 0x1001f281u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f281;
    case 0x1001f285u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f285;
    case 0x1001f28fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f28f;
    case 0x1001f2adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2ad;
    case 0x1001f2b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2b7;
    case 0x1001f2c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2c1;
    case 0x1001f2ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2cc;
    case 0x1001f2d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2d9;
    case 0x1001f2e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2e4;
    case 0x1001f2e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2e8;
    case 0x1001f2f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f2f4;
    case 0x1001f2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f2fe;
    case 0x1001f306u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f306;
    case 0x1001f310u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f310;
    case 0x1001f31eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f31e;
    case 0x1001f32bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f32b;
    case 0x1001f337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f337;
    case 0x1001f34au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f34a;
    case 0x1001f364u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f364;
    case 0x1001f373u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f373;
    case 0x1001f37bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f37b;
    case 0x1001f37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f37f;
    case 0x1001f386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f386;
    case 0x1001f38eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f38e;
    case 0x1001f392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f392;
    case 0x1001f39eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f39e;
    case 0x1001f3a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f3a2;
    case 0x1001f3b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f3b5;
    case 0x1001f3b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f3b9;
    case 0x1001f3ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f3cc;
    case 0x1001f3d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f3d6;
    case 0x1001f3dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f3db;
    case 0x1001f3e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f3e7;
    case 0x1001f3f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f3f3;
    case 0x1001f3f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f3f7;
    case 0x1001f402u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f402;
    case 0x1001f407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f407;
    case 0x1001f411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1e0_f = rdf32(sp0 - 0x1e0u); loc_150 = rd32(sp0 - 0x150u); goto E_1001f411;
    case 0x1001f41bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1e0_f = rdf32(sp0 - 0x1e0u); loc_150 = rd32(sp0 - 0x150u); goto E_1001f41b;
    case 0x1001f426u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f426;
    case 0x1001f42eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_150 = rd32(sp0 - 0x150u); goto E_1001f42e;
    case 0x1001f44bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f44b;
    case 0x1001f456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f456;
    case 0x1001f464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f464;
    case 0x1001f480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f480;
    case 0x1001f48du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f48d;
    case 0x1001f49cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f49c;
    case 0x1001f4aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4aa;
    case 0x1001f4b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4b5;
    case 0x1001f4c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4c0;
    case 0x1001f4cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4ca;
    case 0x1001f4d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4d4;
    case 0x1001f4e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4e1;
    case 0x1001f4ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f4ec;
    case 0x1001f500u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f500;
    case 0x1001f52bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f52b;
    case 0x1001f52eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1ec = rd32(sp0 - 0x1ecu); goto E_1001f52e;
    case 0x1001f537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f537;
    case 0x1001f53cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f53c;
    case 0x1001f541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f541;
    case 0x1001f546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1001f546;
    case 0x1001f54au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f54a;
    case 0x1001f556u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f556;
    case 0x1001f55cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f55c;
    case 0x1001f566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f566;
    case 0x1001f583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f583;
    case 0x1001f587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f587;
    case 0x1001f58cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f58c;
    case 0x1001f59au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f59a;
    case 0x1001f5a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f5a2;
    case 0x1001f5a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f5a7;
    case 0x1001f5acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f5ac;
    case 0x1001f5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f5b0;
    case 0x1001f5b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f5b2;
    case 0x1001f5ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f5cc;
    case 0x1001f5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f5de;
    case 0x1001f5f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f5f0;
    case 0x1001f5f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f5f6;
    case 0x1001f600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f600;
    case 0x1001f607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f607;
    case 0x1001f611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f611;
    case 0x1001f619u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f619;
    case 0x1001f628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f628;
    case 0x1001f63au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f63a;
    case 0x1001f646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f646;
    case 0x1001f64cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f64c;
    case 0x1001f655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f655;
    case 0x1001f667u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f667;
    case 0x1001f670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f670;
    case 0x1001f675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f675;
    case 0x1001f67du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f67d;
    case 0x1001f683u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f683;
    case 0x1001f68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f68f;
    case 0x1001f6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f6a2;
    case 0x1001f6b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f6b0;
    case 0x1001f6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f6c2;
    case 0x1001f6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f6d6;
    case 0x1001f6e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f6e6;
    case 0x1001f6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f6f5;
    case 0x1001f6f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f6f7;
    case 0x1001f708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f708;
    case 0x1001f716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f716;
    case 0x1001f71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f71b;
    case 0x1001f723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f723;
    case 0x1001f733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f733;
    case 0x1001f742u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f742;
    case 0x1001f758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001f758;
    case 0x1001f76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f76e;
    case 0x1001f777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f777;
    case 0x1001f77cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f77c;
    case 0x1001f79du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f79d;
    case 0x1001f7aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f7ae;
    case 0x1001f7c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f7c7;
    case 0x1001f7ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f7cc;
    case 0x1001f7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f7de;
    case 0x1001f7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f7eb;
    case 0x1001f7f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f7f2;
    case 0x1001f7ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f7ff;
    case 0x1001f806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f806;
    case 0x1001f812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f812;
    case 0x1001f81fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f81f;
    case 0x1001f826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f826;
    case 0x1001f82bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f82b;
    case 0x1001f834u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f834;
    case 0x1001f855u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f855;
    case 0x1001f862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f862;
    case 0x1001f86fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f86f;
    case 0x1001f876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f876;
    case 0x1001f87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f87b;
    case 0x1001f884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f884;
    case 0x1001f89fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f89f;
    case 0x1001f8a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f8a7;
    case 0x1001f8acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f8ac;
    case 0x1001f8b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f8b6;
    case 0x1001f8bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f8bb;
    case 0x1001f8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f8c3;
    case 0x1001f8c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f8c8;
    case 0x1001f8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f8cc;
    case 0x1001f8d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f8d1;
    case 0x1001f8dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f8da;
    case 0x1001f8f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f8f7;
    case 0x1001f904u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f904;
    case 0x1001f90bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f90b;
    case 0x1001f910u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f910;
    case 0x1001f914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f914;
    case 0x1001f919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f919;
    case 0x1001f922u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f922;
    case 0x1001f93du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f93d;
    case 0x1001f945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f945;
    case 0x1001f94au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001f94a;
    case 0x1001f94fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f94f;
    case 0x1001f954u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f954;
    case 0x1001f95du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f95d;
    case 0x1001f965u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f965;
    case 0x1001f968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f968;
    case 0x1001f972u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f972;
    case 0x1001f97au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f97a;
    case 0x1001f989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f989;
    case 0x1001f994u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001f994;
    case 0x1001f9a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f9a7;
    case 0x1001f9beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f9be;
    case 0x1001f9d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001f9d0;
    case 0x1001f9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f9df;
    case 0x1001f9e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f9e9;
    case 0x1001f9f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001f9f8;
    case 0x1001fa07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa07;
    case 0x1001fa27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa27;
    case 0x1001fa2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa2b;
    case 0x1001fa32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fa32;
    case 0x1001fa34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001fa34;
    case 0x1001fa3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fa3d;
    case 0x1001fa42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa42;
    case 0x1001fa4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001fa4a;
    case 0x1001fa4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa4f;
    case 0x1001fa74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa74;
    case 0x1001fa91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fa91;
    case 0x1001fa9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fa9c;
    case 0x1001faaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001faaa;
    case 0x1001fab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fab5;
    case 0x1001facau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001faca;
    case 0x1001faccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001facc;
    case 0x1001fadbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fadb;
    case 0x1001faf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001faf0;
    case 0x1001faf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001faf2;
    case 0x1001fb01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb01;
    case 0x1001fb0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb0b;
    case 0x1001fb16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb16;
    case 0x1001fb25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb25;
    case 0x1001fb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb32;
    case 0x1001fb41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001fb41;
    case 0x1001fb4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb4e;
    case 0x1001fb5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb5c;
    case 0x1001fb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fb84;
    case 0x1001fb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fb96;
    case 0x1001fba3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fba3;
    case 0x1001fbafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fbaf;
    case 0x1001fbbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_1001fbbc;
    case 0x1001fbe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fbe2;
    case 0x1001fbeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fbee;
    case 0x1001fbf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fbf8;
    case 0x1001fc08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fc08;
    case 0x1001fc19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fc19;
    case 0x1001fc28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fc28;
    case 0x1001fc59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fc59;
    case 0x1001fc66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fc66;
    case 0x1001fc78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fc78;
    case 0x1001fc8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fc8a;
    case 0x1001fc97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fc97;
    case 0x1001fca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fca6;
    case 0x1001fcb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fcb1;
    case 0x1001fcd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fcd8;
    case 0x1001fcf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fcf1;
    case 0x1001fcf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001fcf3;
    case 0x1001fcffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_1001fcff;
    case 0x1001fd12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_1001fd12;
    case 0x1001fd1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fd1c;
    case 0x1001fd2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_1001fd2e;
    case 0x1001fd41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_180 = rd32(sp0 - 0x180u); goto E_1001fd41;
    case 0x1001fd52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_180 = rd32(sp0 - 0x180u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fd52;
    case 0x1001fd5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fd5f;
    case 0x1001fd6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fd6a;
    case 0x1001fd79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_180 = rd32(sp0 - 0x180u); goto E_1001fd79;
    case 0x1001fd85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_180 = rd32(sp0 - 0x180u); goto E_1001fd85;
    case 0x1001fd96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_180 = rd32(sp0 - 0x180u); goto E_1001fd96;
    case 0x1001fdb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fdb4;
    case 0x1001fdbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fdbf;
    case 0x1001fdceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fdce;
    case 0x1001fdd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_180 = rd32(sp0 - 0x180u); goto E_1001fdd4;
    case 0x1001fde4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fde4;
    case 0x1001fdfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fdfb;
    case 0x1001fe11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1e0_f = rdf32(sp0 - 0x1e0u); goto E_1001fe11;
    case 0x1001fe1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fe1b;
    case 0x1001fe57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fe57;
    case 0x1001fe6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fe6d;
    case 0x1001fe73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1e0_f = rdf32(sp0 - 0x1e0u); loc_180 = rd32(sp0 - 0x180u); goto E_1001fe73;
    case 0x1001fe81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fe81;
    case 0x1001fe86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fe86;
    case 0x1001fe8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1001fe8e;
    case 0x1001fe90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fe90;
    case 0x1001fe98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fe98;
    case 0x1001feabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001feab;
    case 0x1001febeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001febe;
    case 0x1001fec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fec0;
    case 0x1001fecdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fecd;
    case 0x1001fedau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001feda;
    case 0x1001fee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001fee8;
    case 0x1001feeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001feea;
    case 0x1001fefcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001fefc;
    case 0x1001ff12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff12;
    case 0x1001ff2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff2e;
    case 0x1001ff32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001ff32;
    case 0x1001ff44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001ff44;
    case 0x1001ff49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff49;
    case 0x1001ff52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff52;
    case 0x1001ff5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff5b;
    case 0x1001ff74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff74;
    case 0x1001ff87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ff87;
    case 0x1001ff95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ff95;
    case 0x1001ffabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1d8_f = rdf32(sp0 - 0x1d8u); goto E_1001ffab;
    case 0x1001ffc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ffc3;
    case 0x1001ffddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ffdd;
    case 0x1001ffe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_1d8_f = rdf32(sp0 - 0x1d8u); goto E_1001ffe0;
    case 0x1001ffebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1001ffeb;
    case 0x1001fffau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1001fffa;
    case 0x10020007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020007;
    case 0x10020013u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020013;
    case 0x1002001fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002001f;
    case 0x10020029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020029;
    case 0x10020039u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020039;
    case 0x1002004au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002004a;
    case 0x1002007bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002007b;
    case 0x10020085u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020085;
    case 0x10020090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020090;
    case 0x1002009eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002009e;
    case 0x100200a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100200a8;
    case 0x100200bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100200bc;
    case 0x100200d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100200d2;
    case 0x100200d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100200d7;
    case 0x100200ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100200eb;
    case 0x100200fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100200fa;
    case 0x100200ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100200ff;
    case 0x10020115u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020115;
    case 0x10020124u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020124;
    case 0x1002013au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002013a;
    case 0x1002013fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002013f;
    case 0x10020148u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020148;
    case 0x1002014du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002014d;
    case 0x10020152u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020152;
    case 0x10020156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020156;
    case 0x10020158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020158;
    case 0x1002016fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002016f;
    case 0x10020181u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020181;
    case 0x10020196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020196;
    case 0x1002019cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1002019c;
    case 0x100201a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100201a8;
    case 0x100201aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100201ae;
    case 0x100201bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100201ba;
    case 0x100201bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100201bf;
    case 0x100201ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100201cc;
    case 0x100201d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100201d7;
    case 0x100201e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100201e6;
    case 0x100201ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100201eb;
    case 0x100201f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100201f2;
    case 0x10020204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020204;
    case 0x10020216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020216;
    case 0x10020224u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020224;
    case 0x1002022fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002022f;
    case 0x1002023au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002023a;
    case 0x1002024fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002024f;
    case 0x1002026au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002026a;
    case 0x10020284u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1d0_f = rdf32(sp0 - 0x1d0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020284;
    case 0x1002028cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); loc_1d0_f = rdf32(sp0 - 0x1d0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002028c;
    case 0x10020299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); loc_1d0_f = rdf32(sp0 - 0x1d0u); goto E_10020299;
    case 0x100202a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); goto E_100202a1;
    case 0x100202c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100202c4;
    case 0x100202e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100202e3;
    case 0x100202f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100202f3;
    case 0x100202f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100202f7;
    case 0x100202feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100202fe;
    case 0x10020303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020303;
    case 0x1002030au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002030a;
    case 0x10020313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020313;
    case 0x1002031fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1002031f;
    case 0x10020327u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020327;
    case 0x10020344u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1d4_f = rdf32(sp0 - 0x1d4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020344;
    case 0x1002034au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1d4_f = rdf32(sp0 - 0x1d4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002034a;
    case 0x10020352u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020352;
    case 0x10020367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020367;
    case 0x10020372u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020372;
    case 0x10020378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020378;
    case 0x10020384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020384;
    case 0x10020388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020388;
    case 0x10020394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020394;
    case 0x10020398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020398;
    case 0x100203b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1d4_f = rdf32(sp0 - 0x1d4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100203b5;
    case 0x100203bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1d4_f = rdf32(sp0 - 0x1d4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100203bb;
    case 0x100203c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1d4_f = rdf32(sp0 - 0x1d4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100203c1;
    case 0x100203c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100203c5;
    case 0x100203cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100203ca;
    case 0x10020425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020425;
    case 0x1002042du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002042d;
    case 0x10020436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020436;
    case 0x1002043au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002043a;
    case 0x10020446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020446;
    case 0x1002045bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002045b;
    case 0x10020465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020465;
    case 0x10020469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1cc_f = rdf32(sp0 - 0x1ccu); goto E_10020469;
    case 0x1002047eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1cc_f = rdf32(sp0 - 0x1ccu); goto E_1002047e;
    case 0x10020487u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020487;
    case 0x10020493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020493;
    case 0x1002049fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002049f;
    case 0x100204c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100204c4;
    case 0x100204cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100204cd;
    case 0x100204e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100204e3;
    case 0x100204e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100204e8;
    case 0x100204f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100204f6;
    case 0x10020503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020503;
    case 0x1002050au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002050a;
    case 0x10020516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020516;
    case 0x10020522u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020522;
    case 0x1002052bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1cc_f = rdf32(sp0 - 0x1ccu); goto E_1002052b;
    case 0x10020530u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020530;
    case 0x10020537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020537;
    case 0x10020549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020549;
    case 0x1002055du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002055d;
    case 0x10020583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1d0_f = rdf32(sp0 - 0x1d0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020583;
    case 0x1002059bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1d0_f = rdf32(sp0 - 0x1d0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002059b;
    case 0x100205a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1d0_f = rdf32(sp0 - 0x1d0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100205a1;
    case 0x100205b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100205b6;
    case 0x100205c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100205c5;
    case 0x100205cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100205cd;
    case 0x100205f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1e0 = rd32(sp0 - 0x1e0u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100205f6;
    case 0x100205fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100205fc;
    case 0x10020618u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020618;
    case 0x1002062au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002062a;
    case 0x1002062fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002062f;
    case 0x1002063du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002063d;
    case 0x1002064au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002064a;
    case 0x10020651u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020651;
    case 0x1002065bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002065b;
    case 0x1002066bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002066b;
    case 0x1002067cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002067c;
    case 0x1002068du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002068d;
    case 0x100206b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100206b4;
    case 0x100206d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100206d4;
    case 0x100206dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100206dc;
    case 0x100206efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100206ef;
    case 0x100206fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100206fa;
    case 0x10020710u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1d4_f = rdf32(sp0 - 0x1d4u); goto E_10020710;
    case 0x1002072bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1002072b;
    case 0x10020748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020748;
    case 0x1002074bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1d4_f = rdf32(sp0 - 0x1d4u); goto E_1002074b;
    case 0x10020756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10020756;
    case 0x10020765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020765;
    case 0x10020773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020773;
    case 0x10020785u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020785;
    case 0x10020796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020796;
    case 0x100207a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100207a9;
    case 0x100207b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100207b6;
    case 0x100207d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100207d6;
    case 0x100207dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100207da;
    case 0x100207eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100207ee;
    case 0x100207f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100207f9;
    case 0x100207fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100207fb;
    case 0x100207fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_100207fd;
    case 0x1002081du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_1002081d;
    case 0x10020821u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020821;
    case 0x10020837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020837;
    case 0x10020842u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020842;
    case 0x10020844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020844;
    case 0x10020846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020846;
    case 0x10020852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020852;
    case 0x1002085eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002085e;
    case 0x10020865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020865;
    case 0x10020872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020872;
    case 0x100208c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100208c8;
    case 0x100208d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100208d4;
    case 0x100208e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100208e8;
    case 0x100208fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100208fc;
    case 0x10020923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020923;
    case 0x10020927u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020927;
    case 0x1002092cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002092c;
    case 0x1002094cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002094c;
    case 0x10020950u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020950;
    case 0x10020952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020952;
    case 0x1002095du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002095d;
    case 0x10020962u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020962;
    case 0x10020971u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020971;
    case 0x10020980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020980;
    case 0x10020993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020993;
    case 0x100209bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100209bc;
    case 0x100209dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100209df;
    case 0x100209ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100209eb;
    case 0x100209f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100209f0;
    case 0x10020a19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020a19;
    case 0x10020a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020a3c;
    case 0x10020a48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020a48;
    case 0x10020a4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020a4f;
    case 0x10020a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020a5b;
    case 0x10020a67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020a67;
    case 0x10020a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); goto E_10020a7f;
    case 0x10020a9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020a9b;
    case 0x10020aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020aa3;
    case 0x10020ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020ab6;
    case 0x10020ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020ac4;
    case 0x10020adau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1d8_f = rdf32(sp0 - 0x1d8u); goto E_10020ada;
    case 0x10020af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020af2;
    case 0x10020b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020b0c;
    case 0x10020b0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1d8_f = rdf32(sp0 - 0x1d8u); goto E_10020b0f;
    case 0x10020b1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020b1a;
    case 0x10020b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1f4 = rd32(sp0 - 0x1f4u); loc_1ec = rd32(sp0 - 0x1ecu); goto E_10020b29;
    case 0x10020b37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020b37;
    case 0x10020b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020b47;
    case 0x10020b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10020b56;
    case 0x10020b5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); goto E_10020b5d;
    case 0x10020b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); goto E_10020b66;
    case 0x10020b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); goto E_10020b6c;
    case 0x10020b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020b7f;
    case 0x10020b81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10020b81;
    case 0x10020b93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1ec = rd32(sp0 - 0x1ecu); loc_1e8 = rd32(sp0 - 0x1e8u); loc_1e4 = rd32(sp0 - 0x1e4u); loc_1d8 = rd32(sp0 - 0x1d8u); goto E_10020b93;
    default: break;
    }
#endif

    COW_AT(1001ee60)
    wr32(sp0 - 0x1e4u, in_esi);
    wr32(sp0 - 0x1e8u, in_edi);
    wr32(sp0 - 0x1d8u, self);
    if (rd8(COW_IMG(0x10351220u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
        ebx = in_ebx;
        ebp = in_ebp;
        loc_1e4 = in_esi;
        loc_1e8 = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
    COW_AT(1001ee7b)
        if (arg1 == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            loc_1e4 = in_esi;
            loc_1e8 = in_edi;
        }
        else
        {
    COW_AT(1001ee8a)
            if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
            {
                eax = rd32(COW_IMG(0x104568fcu));
                edx = in_edx;
                loc_1e4 = in_esi;
                loc_1e8 = in_edi;
                loc_1d8 = self;
                goto L_1001eeaa;
            }
            eax = rd32(COW_IMG(0x104568fcu));
    COW_AT(1001ee96)
            wr32(sp0 - 0x1ecu, COW_IMG(0x10330ebcu));
            g->eax = eax;
            g->esp = sp0 - 0x1e8u;
            t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), arg1, in_edx, 1, COW_IMG(0x10330ebcu));
            t2 = g->edx;
            eax = t1;
            edx = t2;
    COW_AT(1001eea2)
            if ((uint8_t)eax == 0u)
            {
                ebx = in_ebx;
                ebp = in_ebp;
                loc_1e4 = rd32(sp0 - 0x1e4u);
                loc_1e8 = rd32(sp0 - 0x1e8u);
                goto L_10020b93;
            }
            loc_1e4 = rd32(sp0 - 0x1e4u);
            loc_1e8 = rd32(sp0 - 0x1e8u);
            loc_1d8 = rd32(sp0 - 0x1d8u);
L_1001eeaa: ;
    COW_AT(1001eeaa)
            wr32(sp0 - 0x1ecu, COW_IMG(0x10330684u));
            g->eax = eax;
            g->esp = sp0 - 0x1e8u;
            t3 = cow_fastcall(g, COW_IMG(0x1002c8f0u), arg1, edx, 1, COW_IMG(0x10330684u));
            t4 = g->edx;
            eax = t3;
            edx = t4;
    COW_AT(1001eeb6)
            if ((uint8_t)eax != 0u)
            {
                ebx = in_ebx;
                ebp = in_ebp;
                loc_1e4 = rd32(sp0 - 0x1e4u);
                loc_1e8 = rd32(sp0 - 0x1e8u);
            }
            else
            {
    COW_AT(1001eebe)
                wr32(sp0 - 0x1ecu, in_ebx);
                wr32(sp0 - 0x1f0u, self + 0x44u);
                wr32(sp0 - 0x1f4u, sp0 - 0x114u);
                g->ecx = sp0 - 0x114u;
                g->esp = sp0 - 0x1ecu;
                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x114u, self + 0x44u);
                t5 = g->ecx;
                ecx = t5;
    COW_AT(1001eed0)
                wr32(sp0 - 0x1f8u, self + 0x50u);
                wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
                g->eax = sp0 - 0x4cu;
                g->edx = self + 0x50u;
                g->esp = sp0 - 0x1f4u;
                t6 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, self + 0x50u);
                t7 = g->edx;
                eax = t6;
                edx = t7;
    COW_AT(1001eee1)
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t8 = cow_call_regs(g, COW_IMG(0x10158aa0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
                t9 = g->edx;
                eax = t8;
                edx = t9;
    COW_AT(1001eeef)
                t10 = rd32(COW_IMG(0x1057876cu));
                t11 = rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u);
                wr8(sp0 - 0x1d9u, (uint8_t)t11);
                g->ecx = t10;
                g->edx = (edx & 0xffffff00u) | t11;
                g->esp = sp0 - 0x1ecu;
                t12 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t13 = g->ecx;
                t14 = g->edx;
                d15 = cow_take_float(g);
                ecx = t13;
                edx = t14;
                ebx = (in_ebx & 0xffffff00u) | (uint8_t)eax;
                eax = t12;
                x0 = d15;
    COW_AT(1001ef03)
                g->edx = edx;
                fpush(g, x0);
                g->esp = sp0 - 0x1ecu;
                t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t17 = g->edx;
                eax = t16;
                edx = t17;
    COW_AT(1001ef08)
                t18 = rd32(COW_IMG(0x10456d74u)) - eax;
                t19 = rd32(COW_IMG(0x10456d74u));
                wr32(COW_IMG(0x10456d74u), t18);
                if ((int32_t)(t19 - eax) < 0)
                {
    COW_AT(1001ef18)
                    wr32(COW_IMG(0x10456d74u), 0u);
                }
    COW_AT(1001ef22)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t20 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
                t21 = g->ecx;
                t22 = g->edx;
                eax = t20;
                ecx = t21;
                edx = t22;
    COW_AT(1001ef2e)
                wr32(sp0 - 0x1d0u, 0u);
                wr32(sp0 - 0x1ccu, 0u);
                if ((uint8_t)ebx == 0u) goto L_1001ef4a;
    COW_AT(1001ef42)
                if (rd8(sp0 - 0x1d9u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
                    loc_1d0 = 0u;
                    goto L_1001ef67;
                }
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
L_1001ef4a: ;
    COW_AT(1001ef4a)
                wr32(sp0 - 0x1f0u, 6u);
                wr32(sp0 - 0x1f4u, 0x3fu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1e4u;
                t23 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 6u, rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
                t24 = g->ecx;
                t25 = g->edx;
                d26 = cow_take_float(g);
                eax = t23;
                ecx = t24;
                edx = t25;
                x0 = d26;
    COW_AT(1001ef53)
                wrf32(sp0 - 0x1d0u, (float)(double)(float)x0);
                wr32(sp0 - 0x1f8u, 7u);
                wr32(sp0 - 0x1fcu, 0x3fu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t27 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 7u, 0x3fu, 6u);
                t28 = g->ecx;
                t29 = g->edx;
                d30 = cow_take_float(g);
                eax = t27;
                ecx = t28;
                edx = t29;
                x0 = d30;
    COW_AT(1001ef60)
                wrf32(sp0 - 0x1ccu, (float)(double)(float)x0);
                loc_1d0 = rd32(sp0 - 0x1d0u);
L_1001ef67: ;
    COW_AT(1001ef67)
                wr32(sp0 - 0x1f0u, 0x8bu);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t31 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8bu);
                t32 = g->ecx;
                t33 = g->edx;
                eax = t31;
                ecx = t32;
                edx = t33;
    COW_AT(1001ef71)
                if (eax == 0u)
                {
                    loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                }
                else
                {
    COW_AT(1001ef78)
                    d34 = fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                    wrf32(sp0 - 0x1d0u, (float)(double)(float)d34);
                    loc_1d0_f = (double)(float)d34;
                }
    COW_AT(1001ef86)
                wr32(sp0 - 0x1f0u, 0x8cu);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t35 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8cu);
                t36 = g->ecx;
                t37 = g->edx;
                eax = t35;
                ecx = t36;
                edx = t37;
    COW_AT(1001ef90)
                if (eax == 0u)
                {
                    loc_1cc_f = (double)rdf32(sp0 - 0x1ccu);
                }
                else
                {
    COW_AT(1001ef97)
                    d38 = fr(g, (double)rdf32(sp0 - 0x1ccu) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                    wrf32(sp0 - 0x1ccu, (float)(double)(float)d38);
                    loc_1cc_f = (double)(float)d38;
                }
    COW_AT(1001efa5)
                wr32(sp0 - 0x1d4u, 0u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t39 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
                t40 = g->ecx;
                t41 = g->edx;
                eax = t39;
                ecx = t40;
                edx = t41;
    COW_AT(1001efb2)
                if ((uint8_t)eax == 0u)
                {
                    loc_1d4 = 0u;
                    loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                }
                else
                {
    COW_AT(1001efb6)
                    g->ebx = ebx;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1ecu;
                    t42 = cow_call_regs(g, COW_IMG(0x1025e190u), eax, g->ecx, g->edx, 1, 0);
                    t43 = g->ecx;
                    t44 = g->edx;
                    d45 = cow_take_float(g);
                    eax = t42;
                    ecx = t43;
                    edx = t44;
                    x0 = d45;
    COW_AT(1001efbb)
                    wrf32(sp0 - 0x1a8u, (float)(double)(float)x0);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1ecu;
                    cow_call_regs(g, COW_IMG(0x1025e120u), eax, g->ecx, g->edx, 1, 0);
                    t46 = g->edx;
                    d47 = cow_take_float(g);
                    edx = t46;
                    x0 = d47;
    COW_AT(1001efc4)
                    d48 = fr(g, (double)rdf32(sp0 - 0x1a8u) - x0);
                    wrf32(sp0 - 0x1d4u, (float)(double)(float)d48);
                    g->eax = rd32(arg1);
                    t49 = rd32(arg1);
                    g->esp = sp0 - 0x1ecu;
                    t50 = cow_thiscall(g, rd32(t49 + 0x330u), arg1, 0);
                    eax = t50;
    COW_AT(1001efd6)
                    if ((uint8_t)eax == 0u)
                    {
                        loc_1d4 = rd32(sp0 - 0x1d4u);
                        loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                    }
                    else
                    {
    COW_AT(1001efda)
                        if (rd8(COW_IMG(0x10487f81u)) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
                            loc_1d4 = rd32(sp0 - 0x1d4u);
                            loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(1001efe3)
                            if (rd8(COW_IMG(0x10456db0u)) != 0u)
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
                                loc_1d4 = rd32(sp0 - 0x1d4u);
                                loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                            }
                            else
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
    COW_AT(1001efec)
                                d51 = (double)rdf32(sp0 - 0x1d4u);
                                if (d51 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                    loc_1d4 = rd32(sp0 - 0x1d4u);
                                    loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001effd)
                                    d52 = (double)(float)-(double)rdf32(sp0 - 0x1d4u);
                                    wrf32(sp0 - 0x1d0u, (float)d52);
                                    loc_1d4 = rd32(sp0 - 0x1d4u);
                                    loc_1d0_f = d52;
                                }
                            }
                        }
                    }
                }
    COW_AT(1001f007)
                wr32(sp0 - 0x1f0u, in_ebp);
                g->eax = eax;
                g->edx = rd32(arg1);
                t53 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t54 = cow_thiscall(g, rd32(t53 + 0x340u), arg1, 0);
                t55 = g->ecx;
                t56 = g->edx;
                eax = t54;
                ecx = t55;
                edx = t56;
    COW_AT(1001f012)
                if ((uint8_t)eax == 0u)
                {
    COW_AT(1001f01f)
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t57 = g->edx;
                    d58 = cow_take_float(g);
                    edx = t57;
                    x0 = d58;
    COW_AT(1001f024)
                    d59 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x1d0u)) * (double)rdf32(COW_IMG(0x1032a3ecu)));
                    wrf32(sp0 - 0x1e0u, (float)(double)(float)d59);
                    g->eax = rd32(arg1);
                    g->edx = edx;
                    t60 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t61 = cow_thiscall(g, rd32(t60 + 0x330u), arg1, 0);
                    t62 = g->ecx;
                    t63 = g->edx;
                    eax = t61;
                    ecx = t62;
                    edx = t63;
    COW_AT(1001f03c)
                    if ((uint8_t)eax != 0u)
                    {
                        loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
                    }
                    else
                    {
    COW_AT(1001f040)
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t64 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t65 = g->ecx;
                        t66 = g->edx;
                        eax = t64;
                        ecx = t65;
                        edx = t66;
    COW_AT(1001f045)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t67 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t68 = g->edx;
                        edx = t68;
                        ebx = eax;
                        eax = t67;
    COW_AT(1001f04c)
                        wr32(sp0 - 0x1f4u, ebx + 0x50u);
                        wr32(sp0 - 0x1f8u, eax + 0x44u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
                        g->ecx = sp0 - 0x164u;
                        g->esp = sp0 - 0x1f0u;
                        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x164u, eax + 0x44u, ebx + 0x50u);
                        t69 = g->ecx;
                        ecx = t69;
                        ebx = ebx + 0x50u;
    COW_AT(1001f061)
                        wr32(sp0 - 0x200u, sp0 - 0x164u);
                        wr32(sp0 - 0x204u, sp0 - 0x164u);
                        g->eax = sp0 - 0x164u;
                        g->esp = sp0 - 0x1fcu;
                        t70 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x164u, sp0 - 0x164u);
                        d71 = cow_take_float(g);
                        eax = t70;
                        x0 = d71;
    COW_AT(1001f076)
                        if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x10329a18u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                            x0 = fr(g, sqrt(x0));
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                            x0 = fr(g, sqrt(x0));
    COW_AT(1001f088)
                            x0 = (double)rdf32(COW_IMG(0x10329a18u));
                        }
    COW_AT(1001f090)
                        d72 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3e8u)) / x0) * (double)rdf32(sp0 - 0x1e0u));
                        wrf32(sp0 - 0x1e0u, (float)(double)(float)d72);
                        loc_1e0_f = (double)(float)d72;
                    }
    COW_AT(1001f0a2)
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t73 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t74 = cow_thiscall(g, rd32(t73 + 0x330u), arg1, 0);
                    t75 = g->edx;
                    eax = t74;
                    edx = t75;
    COW_AT(1001f0ac)
                    if ((uint8_t)eax == 0u) goto L_1001f0cf;
    COW_AT(1001f0b0)
                    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        goto L_1001f0cf;
                    }
    COW_AT(1001f0c5)
                    wr32(sp0 - 0x1e0u, 0u);
                    loc_1e0 = 0u;
L_1001f0e6: ;
    COW_AT(1001f0e6)
                    wr32(sp0 - 0x1f4u, loc_1e0);
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t77 = cow_call_regs(g, COW_IMG(0x1001ebb0u), loc_1e0, self, g->edx, 0, 1, loc_1e0);
                    t78 = g->ecx;
                    t79 = g->edx;
                    eax = t77;
                    ecx = t78;
                    edx = t79;
    COW_AT(1001f0f2)
                    g->esp = sp0 - 0x1f0u;
                    t80 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    d81 = cow_take_float(g);
                    eax = t80;
                    x0 = d81;
    COW_AT(1001f0f7)
                    d82 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x1ccu)) * (double)rdf32(COW_IMG(0x1032a3e4u)));
                    wrf32(sp0 - 0x1a8u, (float)(double)(float)d82);
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t83 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t84 = cow_thiscall(g, rd32(t83 + 0x330u), arg1, 0);
                    t85 = g->ecx;
                    t86 = g->edx;
                    eax = t84;
                    ecx = t85;
                    edx = t86;
    COW_AT(1001f10f)
                    if ((uint8_t)eax == 0u) goto L_1001f130;
    COW_AT(1001f113)
                    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        goto L_1001f130;
                    }
                    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(1001f128)
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_1001f147: ;
    COW_AT(1001f147)
                    d88 = fr(g, x0 + (double)rdf32(self + 0x48u));
                    wrf32(self + 0x48u, (float)d88);
                }
    COW_AT(1001f14d)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t89 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
                t90 = g->edx;
                eax = t89;
                edx = t90;
    COW_AT(1001f152)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(1001f15a)
                    g->eax = rd32(arg1);
                    g->edx = edx;
                    t91 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t92 = cow_thiscall(g, rd32(t91 + 0x330u), arg1, 0);
                    t93 = g->edx;
                    eax = t92;
                    edx = t93;
    COW_AT(1001f164)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(1001f16c)
                        if (rd8(COW_IMG(0x10456db0u)) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
    COW_AT(1001f179)
                            d94 = (double)rdf32(sp0 - 0x1d4u);
                            if (d94 == (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001f18e)
                                d95 = (double)(float)-(double)rdf32(COW_IMG(0x10456db4u));
                                wrf32(sp0 - 0x1e0u, (float)d95);
                                g->eax = eax;
                                g->edx = rd32(arg1);
                                t96 = rd32(arg1);
                                g->esp = sp0 - 0x1f0u;
                                t97 = cow_thiscall(g, rd32(t96 + 0x330u), arg1, 0);
                                t98 = g->ecx;
                                t99 = g->edx;
                                eax = t97;
                                ecx = t98;
                                edx = t99;
    COW_AT(1001f1a4)
                                if ((uint8_t)eax != 0u)
                                {
                                    loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
                                }
                                else
                                {
    COW_AT(1001f1a8)
                                    g->eax = eax;
                                    g->ecx = ecx;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x1f0u;
                                    t100 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                                    t101 = g->ecx;
                                    t102 = g->edx;
                                    eax = t100;
                                    ecx = t101;
                                    edx = t102;
    COW_AT(1001f1ad)
                                    g->eax = eax;
                                    g->ecx = ecx;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x1f0u;
                                    t103 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                                    t104 = g->ecx;
                                    t105 = g->edx;
                                    ecx = t104;
                                    edx = t105;
                                    ebx = eax;
                                    eax = t103;
    COW_AT(1001f1b4)
                                    wr32(sp0 - 0x1f4u, ebx + 0x50u);
                                    wr32(sp0 - 0x1f8u, eax + 0x44u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x164u);
                                    g->eax = sp0 - 0x164u;
                                    g->esp = sp0 - 0x1f0u;
                                    t106 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x164u, eax + 0x44u, ebx + 0x50u);
                                    eax = t106;
                                    ebx = ebx + 0x50u;
    COW_AT(1001f1c9)
                                    wr32(sp0 - 0x200u, sp0 - 0x164u);
                                    wr32(sp0 - 0x204u, sp0 - 0x164u);
                                    g->eax = eax;
                                    g->edx = sp0 - 0x164u;
                                    g->esp = sp0 - 0x1fcu;
                                    t107 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x164u, sp0 - 0x164u);
                                    t108 = g->edx;
                                    d109 = cow_take_float(g);
                                    eax = t107;
                                    edx = t108;
                                    x0 = d109;
    COW_AT(1001f1de)
                                    if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x10329a18u))))
                                    {
                                        x0 = fr(g, sqrt(x0));
                                    }
                                    else
                                    {
                                        x0 = fr(g, sqrt(x0));
    COW_AT(1001f1f0)
                                        x0 = (double)rdf32(COW_IMG(0x10329a18u));
                                    }
    COW_AT(1001f1f8)
                                    d110 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3e8u)) / x0) * (double)rdf32(sp0 - 0x1e0u));
                                    wrf32(sp0 - 0x1e0u, (float)(double)(float)d110);
                                    loc_1e0_f = (double)(float)d110;
                                }
    COW_AT(1001f20a)
                                g->eax = rd32(arg1);
                                g->edx = edx;
                                t111 = rd32(arg1);
                                g->esp = sp0 - 0x1f0u;
                                t112 = cow_thiscall(g, rd32(t111 + 0x330u), arg1, 0);
                                t113 = g->edx;
                                eax = t112;
                                edx = t113;
    COW_AT(1001f214)
                                if ((uint8_t)eax == 0u) goto L_1001f237;
    COW_AT(1001f218)
                                if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                    goto L_1001f237;
                                }
                                eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(1001f22d)
                                wr32(sp0 - 0x1e0u, 0u);
                                loc_1e0 = 0u;
L_1001f24e: ;
    COW_AT(1001f24e)
                                wr32(sp0 - 0x1f4u, loc_1e0);
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t115 = cow_call_regs(g, COW_IMG(0x1001ebb0u), eax, self, g->edx, 0, 1, loc_1e0);
                                t116 = g->edx;
                                eax = t115;
                                edx = t116;
                            }
                        }
                    }
                }
    COW_AT(1001f25a)
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t117 = cow_call_regs(g, COW_IMG(0x10157cf0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
                t118 = g->edx;
                eax = t117;
                edx = t118;
    COW_AT(1001f265)
                if (eax != 0u)
                {
                    ebp = eax;
                }
                else
                {
    COW_AT(1001f26b)
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t119 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
                    eax = t119;
    COW_AT(1001f275)
                    ebp = eax;
                }
    COW_AT(1001f277)
                g->eax = eax;
                g->edx = rd32(arg1);
                t120 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t121 = cow_thiscall(g, rd32(t120 + 0x19cu), arg1, 0);
                t122 = g->edx;
                eax = t121;
                edx = t122;
    COW_AT(1001f281)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(1001f285)
                    g->eax = rd32(arg1);
                    t123 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t124 = cow_thiscall(g, rd32(t123 + 0x1bcu), arg1, 0);
                    eax = t124;
    COW_AT(1001f28f)
                    d125 = fr(g, (double)rdf32(eax + 4u) - (double)rdf32(COW_IMG(0x10456da0u)));
                    d126 = fr(g, d125 + (double)rdf32(self + 0x48u));
                    wrf32(self + 0x48u, (float)d126);
                    if (d125 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d125, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d125, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001f2ad)
                        wr32(COW_IMG(0x10456d74u), 0xau);
                    }
                }
    COW_AT(1001f2b7)
                g->eax = eax;
                g->edx = rd32(arg1);
                t127 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t128 = cow_thiscall(g, rd32(t127 + 0x1bcu), arg1, 0);
                t129 = g->ecx;
                t130 = g->edx;
                eax = t128;
                ecx = t129;
                edx = t130;
    COW_AT(1001f2c1)
                wr32(sp0 - 0x1f4u, eax);
                wr32(sp0 - 0x1f8u, COW_IMG(0x10456d9cu));
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x10456d9cu), eax);
                t131 = g->edx;
                edx = t131;
    COW_AT(1001f2cc)
                g->eax = rd32(arg1);
                g->edx = edx;
                t132 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t133 = cow_thiscall(g, rd32(t132 + 0x330u), arg1, 0);
                t134 = g->edx;
                eax = t133;
                edx = t134;
    COW_AT(1001f2d9)
                wr8(sp0 - 0x118u, (uint8_t)eax);
                if (ebp == 0u) goto L_1001f2e8;
    COW_AT(1001f2e4)
                if (arg1 != ebp) goto L_1001f2f4;
L_1001f2e8: ;
    COW_AT(1001f2e8)
                wr32(sp0 - 0x1f4u, 1u);
                g->edx = rd32(arg1);
                t135 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                cow_thiscall(g, rd32(t135 + 0x334u), arg1, 1, 1u);
                t136 = g->edx;
                edx = t136;
L_1001f2f4: ;
    COW_AT(1001f2f4)
                g->eax = rd32(arg1);
                t137 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t138 = cow_thiscall(g, rd32(t137 + 0x330u), arg1, 0);
                eax = t138;
    COW_AT(1001f2fe)
                if ((uint8_t)eax == 0u)
                {
    COW_AT(1001f44b)
                    g->eax = eax;
                    g->edx = rd32(ebp);
                    t183 = rd32(ebp);
                    g->esp = sp0 - 0x1f0u;
                    t184 = cow_thiscall(g, rd32(t183 + 0x1bcu), ebp, 0);
                    t185 = g->ecx;
                    t186 = g->edx;
                    eax = t184;
                    ecx = t185;
                    edx = t186;
    COW_AT(1001f456)
                    wr32(sp0 - 0x1f4u, eax);
                    wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                    g->eax = sp0 - 0x154u;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t187 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x154u, eax);
                    t188 = g->ecx;
                    t189 = g->edx;
                    eax = t187;
                    ecx = t188;
                    edx = t189;
    COW_AT(1001f464)
                    d190 = fr(g, (double)rdf32(COW_IMG(0x10456da8u)) + (double)rdf32(sp0 - 0x150u));
                    wrf32(sp0 - 0x150u, (float)(double)(float)d190);
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t191 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    eax = t191;
    COW_AT(1001f480)
                    g->eax = eax;
                    g->edx = rd32(ebp);
                    t192 = rd32(ebp);
                    g->esp = sp0 - 0x1f0u;
                    t193 = cow_thiscall(g, rd32(t192 + 0x1bcu), ebp, 0);
                    t194 = g->ecx;
                    t195 = g->edx;
                    ecx = t194;
                    edx = t195;
                    ebx = eax;
                    eax = t193;
    COW_AT(1001f48d)
                    wr32(sp0 - 0x1f4u, eax);
                    wr32(sp0 - 0x1f8u, ebx + 0x44u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                    g->eax = sp0 - 0x1b8u;
                    g->esp = sp0 - 0x1f0u;
                    t196 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1b8u, ebx + 0x44u, eax);
                    eax = t196;
                    ebx = ebx + 0x44u;
    COW_AT(1001f49c)
                    g->eax = eax;
                    g->edx = rd32(ebp);
                    t197 = rd32(ebp);
                    g->esp = sp0 - 0x1f0u;
                    t198 = cow_thiscall(g, rd32(t197 + 0x1bcu), ebp, 0);
                    t199 = g->edx;
                    eax = t198;
                    edx = t199;
    COW_AT(1001f4aa)
                    wr32(sp0 - 0x1f4u, eax);
                    g->eax = rd32(arg1);
                    g->edx = edx;
                    t200 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t201 = cow_thiscall(g, rd32(t200 + 0x1bcu), arg1, 1, eax);
                    t202 = g->edx;
                    eax = t201;
                    edx = t202;
    COW_AT(1001f4b5)
                    wr32(sp0 - 0x1f4u, eax);
                    wr32(sp0 - 0x1f8u, sp0 - 0x180u);
                    g->eax = eax;
                    g->ecx = sp0 - 0x180u;
                    g->esp = sp0 - 0x1ecu;
                    t203 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x180u, eax, rd32(sp0 - 0x1f0u));
                    t204 = g->ecx;
                    eax = t203;
                    ecx = t204;
    COW_AT(1001f4c0)
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b4u);
                    g->ecx = ecx;
                    g->edx = sp0 - 0x1b4u;
                    g->esp = sp0 - 0x1f8u;
                    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1b4u);
                    t205 = g->ecx;
                    t206 = g->edx;
                    ecx = t205;
                    edx = t206;
    COW_AT(1001f4ca)
                    wr32(sp0 - 0x200u, sp0 - 0x180u);
                    g->esp = sp0 - 0x1fcu;
                    t207 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x180u, g->ecx, g->edx, 1, 1, sp0 - 0x180u);
                    eax = t207;
    COW_AT(1001f4d4)
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t208 = rd32(arg1);
                    g->esp = sp0 - 0x1e8u;
                    t209 = cow_thiscall(g, rd32(t208 + 0x1bcu), arg1, 1, rd32(sp0 - 0x1ecu));
                    t210 = g->ecx;
                    t211 = g->edx;
                    eax = t209;
                    ecx = t210;
                    edx = t211;
    COW_AT(1001f4e1)
                    wr32(sp0 - 0x1ecu, eax);
                    wr32(sp0 - 0x1f0u, sp0 - 0x1b0u);
                    g->esp = sp0 - 0x1e8u;
                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1b0u, eax);
    COW_AT(1001f4ec)
                    wr32(sp0 - 0x1ecu, sp0 - 0x17cu);
                    wr32(sp0 - 0x1f0u, 0xdu);
                    g->esp = sp0 - 0x1f0u;
                    cow_thiscall(g, rd32(rd32(arg1) + 0x1c8u), arg1, 0);
    COW_AT(1001f500)
                    d212 = fr(g, (double)rdf32(sp0 - 0x1b4u) + (double)rdf32(sp0 - 0x180u));
                    wr32(sp0 - 0x1f4u, 0x3f000000u);
                    wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                    wrf32(sp0 - 0x1b4u, (float)(double)(float)d212);
                    wr32(sp0 - 0x200u, sp0 - 0x154u);
                    g->eax = sp0 - 0x154u;
                    g->edx = sp0 - 0x1b8u;
                    g->esp = sp0 - 0x1f0u;
                    t213 = cow_cdecl(g, COW_IMG(0x100276a0u), 4, sp0 - 0x154u, sp0 - 0x1b8u, sp0 - 0x154u, 0x3f000000u);
                    t214 = g->edx;
                    eax = t213;
                    edx = t214;
    COW_AT(1001f52b)
                    loc_1ec = sp0 - 0x17cu;
                }
                else
                {
    COW_AT(1001f306)
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t139 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t140 = cow_thiscall(g, rd32(t139 + 0x1bcu), arg1, 0);
                    t141 = g->ecx;
                    t142 = g->edx;
                    eax = t140;
                    ecx = t141;
                    edx = t142;
    COW_AT(1001f310)
                    wr32(sp0 - 0x1f4u, eax);
                    wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                    g->eax = sp0 - 0x154u;
                    g->esp = sp0 - 0x1f0u;
                    t143 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x154u, eax);
                    eax = t143;
    COW_AT(1001f31e)
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t144 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t145 = cow_thiscall(g, rd32(t144 + 0xc4u), arg1, 0);
                    t146 = g->edx;
                    eax = t145;
                    edx = t146;
    COW_AT(1001f32b)
                    if ((uint8_t)eax == 0x80u)
                    {
                        eax = (uint8_t)eax;
    COW_AT(1001f364)
                        wr32(sp0 - 0x1e0u, 0u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t151 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
                        t152 = g->edx;
                        eax = t151;
                        edx = t152;
    COW_AT(1001f373)
                        wr32(sp0 - 0x1f4u, eax);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t153 = cow_thiscall(g, COW_IMG(0x10084350u), arg1, 1, eax);
                        t154 = g->edx;
                        eax = t153;
                        edx = t154;
    COW_AT(1001f37b)
                        if ((uint8_t)eax != 0u) goto L_1001f3e7;
    COW_AT(1001f37f)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t155 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
                        t156 = g->edx;
                        eax = t155;
                        edx = t156;
    COW_AT(1001f386)
                        wr32(sp0 - 0x1f4u, eax);
                        g->eax = eax;
                        g->esp = sp0 - 0x1f0u;
                        t157 = cow_thiscall(g, COW_IMG(0x10084370u), arg1, 1, eax);
                        eax = t157;
    COW_AT(1001f38e)
                        if ((uint8_t)eax != 0u) goto L_1001f3e7;
    COW_AT(1001f392)
                        wr32(sp0 - 0x1f4u, 1u);
                        g->eax = eax;
                        g->edx = rd32(arg1);
                        t158 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t159 = cow_thiscall(g, rd32(t158 + 0x3ccu), arg1, 1, 1u);
                        t160 = g->ecx;
                        t161 = g->edx;
                        eax = t159;
                        ecx = t160;
                        edx = t161;
    COW_AT(1001f39e)
                        if (eax == 0u)
                        {
    COW_AT(1001f3d6)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t167 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                            t168 = g->edx;
                            eax = t167;
                            edx = t168;
    COW_AT(1001f3db)
                            t169 = rd32(eax + 0x54u);
                            wr32(sp0 - 0x150u, t169);
                            loc_150 = t169;
                        }
                        else
                        {
    COW_AT(1001f3a2)
                            d162 = fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax));
                            wrf32(sp0 - 0x1e0u, (float)(double)(float)d162);
                            g->eax = rd32(arg1);
                            g->edx = edx;
                            t163 = rd32(arg1);
                            g->esp = sp0 - 0x1f0u;
                            t164 = cow_thiscall(g, rd32(t163 + 0x14cu), arg1, 0);
                            t165 = g->edx;
                            eax = t164;
                            edx = t165;
    COW_AT(1001f3b5)
                            if ((uint8_t)eax == 0u)
                            {
                                loc_150 = rd32(sp0 - 0x150u);
                            }
                            else
                            {
    COW_AT(1001f3b9)
                                d166 = (double)rdf32(sp0 - 0x1e0u);
                                if ((cow_fsw(g, d166, (double)rdf32(COW_IMG(0x10329ea0u)), 0u) & 0x100u) != 0u)
                                {
                                    eax = cow_fsw(g, d166, (double)rdf32(COW_IMG(0x10329ea0u)), 0u) & 0x100u;
                                    loc_150 = rd32(sp0 - 0x150u);
                                }
                                else
                                {
                                    eax = cow_fsw(g, d166, (double)rdf32(COW_IMG(0x10329ea0u)), 0u) & 0x100u;
    COW_AT(1001f3cc)
                                    wr32(sp0 - 0x1e0u, 0x40200000u);
                                    loc_150 = rd32(sp0 - 0x150u);
                                }
                            }
                        }
L_1001f42e: ;
    COW_AT(1001f42e)
                        d182 = fr(g, cow_bits2f(loc_150) - fr(g, (double)rdf32(sp0 - 0x1e0u) * (double)rdf32(COW_IMG(0x10329a30u))));
                        wrf32(sp0 - 0x150u, (float)(double)(float)d182);
                        loc_1ec = rd32(sp0 - 0x1ecu);
                    }
                    else
                    {
                        eax = (uint8_t)eax;
    COW_AT(1001f337)
                        wr32(sp0 - 0x1f4u, sp0 - 0x5cu);
                        wr32(sp0 - 0x1f8u, eax);
                        g->eax = eax;
                        g->edx = rd32(arg1);
                        t147 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t148 = cow_thiscall(g, rd32(t147 + 0x1c8u), arg1, 2, eax, sp0 - 0x5cu);
                        t149 = g->edx;
                        eax = t148;
                        edx = t149;
    COW_AT(1001f34a)
                        d150 = fr(g, (double)rdf32(sp0 - 0x150u) + (double)rdf32(sp0 - 0x58u));
                        wrf32(sp0 - 0x150u, (float)(double)(float)d150);
                        loc_1ec = rd32(sp0 - 0x1ecu);
                    }
                }
    COW_AT(1001f52e)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t215 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
                t216 = g->ecx;
                t217 = g->edx;
                eax = t215;
                ecx = t216;
                edx = t217;
                ebx = ebx & 0xffffff00u;
    COW_AT(1001f537)
                if (eax == 0x2fu) goto L_1001f54a;
    COW_AT(1001f53c)
                if ((int32_t)eax <= 62) goto L_1001f546;
    COW_AT(1001f541)
                if ((int32_t)eax <= 83) goto L_1001f54a;
L_1001f546: ;
    COW_AT(1001f546)
                ebx = (ebx & 0xffffff00u) | 1u;
                edi = self;
L_1001f587: ;
    COW_AT(1001f587)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t227 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                t228 = g->edx;
                eax = t227;
                edx = t228;
    COW_AT(1001f58c)
                wr32(sp0 - 0x1f4u, eax + 0x50u);
                wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                g->eax = eax + 0x50u;
                g->ecx = sp0 - 0x194u;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t229 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x194u, eax + 0x50u);
                t230 = g->ecx;
                t231 = g->edx;
                eax = t229;
                ecx = t230;
                edx = t231;
    COW_AT(1001f59a)
                if ((uint8_t)ebx == 1u)
                {
    COW_AT(1001f5a2)
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t232 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t233 = g->ecx;
                    t234 = g->edx;
                    d235 = cow_take_float(g);
                    eax = t232;
                    ecx = t233;
                    edx = t234;
                    x0 = d235;
    COW_AT(1001f5a7)
                    g->ecx = ecx;
                    fpush(g, x0);
                    g->esp = sp0 - 0x1f0u;
                    t236 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t237 = g->ecx;
                    eax = t236;
                    ecx = t237;
    COW_AT(1001f5ac)
                    if ((int32_t)eax > 0)
                    {
    COW_AT(1001f5b0)
                        ebx = eax;
L_1001f5b2: ;
    COW_AT(1001f5b2)
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
                        g->eax = sp0 - 0x154u;
                        g->ecx = sp0 - 0x164u;
                        g->esp = sp0 - 0x1f0u;
                        t238 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x164u, sp0 - 0x154u, sp0 - 0x194u);
                        t239 = g->ecx;
                        eax = t238;
                        ecx = t239;
    COW_AT(1001f5cc)
                        wr32(sp0 - 0x200u, 0x3e800000u);
                        wr32(sp0 - 0x204u, sp0 - 0x164u);
                        g->edx = sp0 - 0x164u;
                        g->esp = sp0 - 0x1fcu;
                        cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x164u, 0x3e800000u);
                        t240 = g->edx;
                        edx = t240;
    COW_AT(1001f5de)
                        wr32(sp0 - 0x208u, sp0 - 0x164u);
                        wr32(sp0 - 0x20cu, sp0 - 0x194u);
                        g->eax = sp0 - 0x164u;
                        g->ecx = sp0 - 0x194u;
                        g->esp = sp0 - 0x204u;
                        t241 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, sp0 - 0x164u);
                        t242 = g->ecx;
                        eax = t241;
                        ecx = t242;
    COW_AT(1001f5f0)
                        if (ebx != 1u)
                        {
                            ebx = ebx - 1u;
                            goto L_1001f5b2;
                        }
                    }
                }
    COW_AT(1001f5f6)
                wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                g->eax = eax;
                g->edx = sp0 - 0x194u;
                g->esp = sp0 - 0x1f4u;
                t243 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                t244 = g->edx;
                eax = t243;
                edx = t244;
    COW_AT(1001f600)
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                cow_thiscall(g, COW_IMG(0x1001e780u), eax, 1, sp0 - 0x194u);
                t245 = g->edx;
                edx = t245;
    COW_AT(1001f607)
                g->eax = rd32(arg1);
                g->edx = edx;
                t246 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t247 = cow_thiscall(g, rd32(t246 + 0x330u), arg1, 0);
                t248 = g->ecx;
                t249 = g->edx;
                eax = t247;
                ecx = t248;
                edx = t249;
    COW_AT(1001f611)
                if ((uint8_t)eax == 0u)
                {
    COW_AT(100201e6)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t562 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t563 = g->ecx;
                    t564 = g->edx;
                    eax = t562;
                    ecx = t563;
                    edx = t564;
    COW_AT(100201eb)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x1f0u;
                    t565 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t566 = g->ecx;
                    ecx = t566;
                    edi = eax;
                    eax = t565;
    COW_AT(100201f2)
                    wr32(sp0 - 0x1f4u, edi + 0x50u);
                    wr32(sp0 - 0x1f8u, eax + 0x44u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                    g->edx = sp0 - 0x194u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x194u, eax + 0x44u, edi + 0x50u);
                    t567 = g->edx;
                    edx = t567;
    COW_AT(10020204)
                    wr32(sp0 - 0x200u, sp0 - 0x194u);
                    wr32(sp0 - 0x204u, sp0 - 0x164u);
                    g->eax = sp0 - 0x194u;
                    g->esp = sp0 - 0x1fcu;
                    t568 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x164u, sp0 - 0x194u);
                    eax = t568;
    COW_AT(10020216)
                    g->eax = eax;
                    g->edx = rd32(ebp);
                    t569 = rd32(ebp);
                    g->esp = sp0 - 0x1f0u;
                    t570 = cow_thiscall(g, rd32(t569 + 0x1bcu), ebp, 0);
                    t571 = g->edx;
                    eax = t570;
                    edx = t571;
    COW_AT(10020224)
                    wr32(sp0 - 0x1f4u, eax);
                    g->eax = rd32(arg1);
                    g->edx = edx;
                    t572 = rd32(arg1);
                    g->esp = sp0 - 0x1f4u;
                    t573 = cow_thiscall(g, rd32(t572 + 0x1bcu), arg1, 0);
                    t574 = g->edx;
                    eax = t573;
                    edx = t574;
    COW_AT(1002022f)
                    wr32(sp0 - 0x1f8u, eax);
                    wr32(sp0 - 0x1fcu, sp0 - 0x184u);
                    g->ecx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x184u, eax, rd32(sp0 - 0x1f4u));
                    t575 = g->ecx;
                    ecx = t575;
    COW_AT(1002023a)
                    wr32(sp0 - 0x200u, sp0 - 0x164u);
                    wr32(sp0 - 0x204u, sp0 - 0x164u);
                    g->eax = sp0 - 0x164u;
                    g->esp = sp0 - 0x1fcu;
                    t576 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x164u, sp0 - 0x164u);
                    d577 = cow_take_float(g);
                    eax = t576;
                    x0 = d577;
    COW_AT(1002024f)
                    wr32(sp0 - 0x208u, sp0 - 0x184u);
                    wr32(sp0 - 0x20cu, sp0 - 0x184u);
                    d578 = (double)(float)fr(g, sqrt(x0));
                    wrf32(sp0 - 0x1e0u, (float)d578);
                    g->eax = eax;
                    g->ecx = sp0 - 0x184u;
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x204u;
                    t579 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x184u, sp0 - 0x184u);
                    t580 = g->ecx;
                    t581 = g->edx;
                    d582 = cow_take_float(g);
                    eax = t579;
                    ecx = t580;
                    edx = t581;
                    x0 = d582;
    COW_AT(1002026a)
                    d583 = (double)(float)fr(g, sqrt(x0));
                    wrf32(sp0 - 0x1d0u, (float)d583);
                    d584 = (double)rdf32(sp0 - 0x1e0u);
                    if (!(d584 < (double)rdf32(COW_IMG(0x10329a18u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                        loc_1d0_f = d583;
                        loc_1e0 = rd32(sp0 - 0x1e0u);
                        x0 = fr(g, sqrt(x0));
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                        loc_1d0_f = d583;
                        x0 = fr(g, sqrt(x0));
    COW_AT(10020284)
                        wr32(sp0 - 0x1e0u, 0x3c23d70au);
                        loc_1e0 = 0x3c23d70au;
                    }
    COW_AT(1002028c)
                    if (x0 < (double)rdf32(COW_IMG(0x10329a18u)))
                    {
    COW_AT(10020299)
                        wr32(sp0 - 0x1d0u, 0x3c23d70au);
                    }
    COW_AT(100202a1)
                    d585 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_1e0));
                    wr32(sp0 - 0x1f4u, ecx);
                    wrf32(sp0 - 0x1f4u, (float)(double)(float)d585);
                    wr32(sp0 - 0x1f8u, sp0 - 0x164u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                    g->ecx = sp0 - 0x144u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x144u, sp0 - 0x164u, cow_f2bits((double)(float)d585));
                    t586 = g->ecx;
                    ecx = t586;
    COW_AT(100202c4)
                    d587 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x1d0u));
                    wrf32(sp0 - 0x1f4u, (float)(double)(float)d587);
                    wr32(sp0 - 0x1f8u, sp0 - 0x184u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
                    g->eax = sp0 - 0x1a4u;
                    g->ecx = ecx;
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1f0u;
                    t588 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x1a4u, sp0 - 0x184u, cow_f2bits((double)(float)d587));
                    t589 = g->ecx;
                    t590 = g->edx;
                    eax = t588;
                    ecx = t589;
                    edx = t590;
    COW_AT(100202e3)
                    wr32(sp0 - 0x1d4u, 0u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t591 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
                    t592 = g->ecx;
                    t593 = g->edx;
                    eax = t591;
                    ecx = t592;
                    edx = t593;
    COW_AT(100202f3)
                    if ((uint8_t)eax == 0u) goto L_10020352;
    COW_AT(100202f7)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t594 = cow_thiscall(g, COW_IMG(0x10084400u), arg1, 0);
                    t595 = g->edx;
                    eax = t594;
                    edx = t595;
    COW_AT(100202fe)
                    if (eax == 2u) goto L_10020313;
    COW_AT(10020303)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t596 = cow_thiscall(g, COW_IMG(0x10084400u), arg1, 0);
                    t597 = g->ecx;
                    t598 = g->edx;
                    eax = t596;
                    ecx = t597;
                    edx = t598;
    COW_AT(1002030a)
                    if (eax != 7u) goto L_100203c5;
L_10020313: ;
    COW_AT(10020313)
                    wr32(sp0 - 0x1f4u, 1u);
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t599 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t600 = cow_thiscall(g, rd32(t599 + 0x3c8u), arg1, 1, 1u);
                    t601 = g->ecx;
                    t602 = g->edx;
                    eax = t600;
                    ecx = t601;
                    edx = t602;
    COW_AT(1002031f)
                    if (eax == 0u) goto L_100203c5;
    COW_AT(10020327)
                    d603 = fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + 0xcu));
                    d604 = fr(g, (double)rdf32(eax + 0x10u) - (double)rdf32(eax + 0x14u));
                    wrf32(sp0 - 0x1d4u, (float)(double)(float)d603);
                    if ((cow_fsw(g, d604, (double)(float)d603, 1u) & 0x4100u) == 0u)
                    {
                        eax = cow_fsw(g, d604, (double)(float)d603, 1u) & 0x4100u;
                        x0 = d604;
                    }
                    else
                    {
                        eax = cow_fsw(g, d604, (double)(float)d603, 1u) & 0x4100u;
                        loc_1d4_f = (double)(float)d603;
                        x0 = d604;
    COW_AT(10020344)
                        x0 = loc_1d4_f;
                    }
    COW_AT(1002034a)
                    x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3acu)));
L_100203c1: ;
    COW_AT(100203c1)
                    wrf32(sp0 - 0x1d4u, (float)(double)(float)x0);
L_100203c5: ;
    COW_AT(100203c5)
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t618 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                    d619 = cow_take_float(g);
                    eax = t618;
                    x0 = d619;
    COW_AT(100203ca)
                    d620 = fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x1032a3bcu)));
                    d621 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a22cu)));
                    wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
                    wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                    d622 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3a8u)) + fr(g, d620 + (double)rdf32(sp0 - 0x1d4u))) * d621);
                    d623 = fr(g, d620 + (double)rdf32(sp0 - 0x1d4u));
                    wrf32(sp0 - 0x1a8u, (float)(double)(float)d622);
                    d624 = fr(g, fr(g, d623 + (double)rdf32(COW_IMG(0x1032a3a4u))) * d621);
                    wrf32(sp0 - 0x11cu, (float)(double)(float)d624);
                    d625 = fr(g, atan2(fr(g, (double)rdf32(COW_IMG(0x1032a3a0u)) / fr(g, (double)(float)d622 + (double)rdf32(sp0 - 0x1d0u))), 1.0));
                    wrf32(sp0 - 0x1ccu, (float)(double)(float)d625);
                    g->eax = eax;
                    g->ecx = sp0 - 0x1a4u;
                    g->edx = sp0 - 0x144u;
                    g->esp = sp0 - 0x1f0u;
                    t626 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x144u, sp0 - 0x1a4u);
                    t627 = g->ecx;
                    t628 = g->edx;
                    d629 = cow_take_float(g);
                    eax = t626;
                    ecx = t627;
                    edx = t628;
                    x0 = d629;
    COW_AT(10020425)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    fpush(g, x0);
                    g->esp = sp0 - 0x1e8u;
                    t630 = cow_cdecl(g, COW_IMG(0x10313820u), 2, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu));
                    t631 = g->ecx;
                    t632 = g->edx;
                    d633 = cow_take_float(g);
                    eax = t630;
                    ecx = t631;
                    edx = t632;
                    x0 = d633;
    COW_AT(1002042d)
                    wrf32(sp0 - 0x1d4u, (float)(double)(float)x0);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t634 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
                    t635 = g->ecx;
                    t636 = g->edx;
                    eax = t634;
                    ecx = t635;
                    edx = t636;
    COW_AT(10020436)
                    if ((uint8_t)eax == 0u) goto L_10020446;
    COW_AT(1002043a)
                    x0 = fr(g, (double)rdf32(sp0 - 0x1ccu) * (double)rdf32(COW_IMG(0x10329d38u)));
L_10020465: ;
    COW_AT(10020465)
                    wrf32(sp0 - 0x1ccu, (float)(double)(float)x0);
                    loc_1cc_f = (double)(float)x0;
L_10020469: ;
    COW_AT(10020469)
                    d637 = (double)rdf32(sp0 - 0x1d4u);
                    if ((cow_fsw(g, d637, loc_1cc_f, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d637, loc_1cc_f, 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d637, loc_1cc_f, 0u) & 0x4100u;
    COW_AT(1002047e)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t638 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x174u, 0);
                        t639 = g->edx;
                        eax = t638;
                        edx = t639;
    COW_AT(10020487)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t640 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x134u, 0);
                        t641 = g->edx;
                        eax = t640;
                        edx = t641;
    COW_AT(10020493)
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0xacu, 0);
                        t642 = g->ecx;
                        t643 = g->edx;
                        ecx = t642;
                        edx = t643;
    COW_AT(1002049f)
                        d644 = fr(g, (double)rdf32(sp0 - 0x1d4u) - (double)rdf32(sp0 - 0x1ccu));
                        wr32(sp0 - 0x1f4u, ecx);
                        wrf32(sp0 - 0x1f4u, (float)(double)(float)d644);
                        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
                        g->eax = sp0 - 0x144u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t645 = cow_thiscall(g, COW_IMG(0x10033420u), sp0 - 0x174u, 3, sp0 - 0x1a4u, sp0 - 0x144u, cow_f2bits((double)(float)d644));
                        t646 = g->edx;
                        eax = t645;
                        edx = t646;
    COW_AT(100204c4)
                        g->esp = sp0 - 0x1f0u;
                        cow_call_regs(g, COW_IMG(0x10032da0u), eax, sp0 - 0x174u, g->edx, 1, 0);
    COW_AT(100204cd)
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                        g->eax = sp0 - 0x194u;
                        g->edx = sp0 - 0x194u;
                        g->esp = sp0 - 0x1f0u;
                        t647 = cow_thiscall(g, COW_IMG(0x10033490u), sp0 - 0x174u, 2, sp0 - 0x194u, sp0 - 0x194u);
                        t648 = g->ecx;
                        t649 = g->edx;
                        eax = t647;
                        ecx = t648;
                        edx = t649;
    COW_AT(100204e3)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t650 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t651 = g->edx;
                        eax = t650;
                        edx = t651;
    COW_AT(100204e8)
                        wr32(sp0 - 0x1f4u, eax + 0x50u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                        g->eax = eax + 0x50u;
                        g->ecx = sp0 - 0x194u;
                        g->esp = sp0 - 0x1f0u;
                        t652 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, eax + 0x50u);
                        t653 = g->ecx;
                        eax = t652;
                        ecx = t653;
    COW_AT(100204f6)
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        g->eax = eax;
                        g->edx = sp0 - 0x194u;
                        g->esp = sp0 - 0x1f4u;
                        t654 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t655 = g->edx;
                        eax = t654;
                        edx = t655;
    COW_AT(10020503)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t656 = cow_thiscall(g, COW_IMG(0x1001e760u), eax, 1, sp0 - 0x194u);
                        t657 = g->edx;
                        eax = t656;
                        edx = t657;
    COW_AT(1002050a)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t658 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                        t659 = g->edx;
                        eax = t658;
                        edx = t659;
    COW_AT(10020516)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t660 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                        t661 = g->edx;
                        eax = t660;
                        edx = t661;
    COW_AT(10020522)
                        g->eax = eax;
                        g->ecx = sp0 - 0x174u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t662 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                        t663 = g->ecx;
                        t664 = g->edx;
                        eax = t662;
                        ecx = t663;
                        edx = t664;
                    }
    COW_AT(1002052b)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t665 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t666 = g->ecx;
                    t667 = g->edx;
                    eax = t665;
                    ecx = t666;
                    edx = t667;
    COW_AT(10020530)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t668 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t669 = g->ecx;
                    t670 = g->edx;
                    ecx = t669;
                    edx = t670;
                    edi = eax;
                    eax = t668;
    COW_AT(10020537)
                    wr32(sp0 - 0x1f4u, edi + 0x50u);
                    wr32(sp0 - 0x1f8u, eax + 0x44u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                    g->eax = sp0 - 0x194u;
                    g->esp = sp0 - 0x1f0u;
                    t671 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x194u, eax + 0x44u, edi + 0x50u);
                    eax = t671;
    COW_AT(10020549)
                    wr32(sp0 - 0x200u, 0x3f000000u);
                    wr32(sp0 - 0x204u, sp0 - 0x184u);
                    wr32(sp0 - 0x208u, sp0 - 0x184u);
                    g->eax = eax;
                    g->ecx = sp0 - 0x184u;
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1fcu;
                    t672 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x184u, sp0 - 0x184u, 0x3f000000u);
                    t673 = g->ecx;
                    t674 = g->edx;
                    eax = t672;
                    ecx = t673;
                    edx = t674;
    COW_AT(1002055d)
                    d675 = fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x10329a08u)));
                    wrf32(sp0 - 0x1d0u, (float)(double)(float)d675);
                    d676 = fr(g, (double)rdf32(sp0 - 0x1a8u) + (double)(float)d675);
                    d677 = (double)rdf32(sp0 - 0x1e0u);
                    if ((cow_fsw(g, d676, d677, 1u) & 0x4100u) == 0u)
                    {
                        eax = cow_fsw(g, d676, d677, 1u) & 0x4100u;
                        x0 = d676;
                    }
                    else
                    {
                        eax = cow_fsw(g, d676, d677, 1u) & 0x4100u;
                        loc_1d0_f = (double)(float)d675;
                        x0 = d676;
    COW_AT(10020583)
                        d678 = fr(g, (double)rdf32(sp0 - 0x11cu) + loc_1d0_f);
                        d679 = (double)rdf32(sp0 - 0x1e0u);
                        if (d678 < d679)
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d678, d679, 1u);
                            x0 = d678;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d678, d679, 1u);
                            x0 = d678;
    COW_AT(1002059b)
                            x0 = (double)rdf32(sp0 - 0x1e0u);
                        }
                    }
    COW_AT(100205a1)
                    d680 = fr(g, x0 - (double)rdf32(sp0 - 0x1e0u));
                    wr32(sp0 - 0x1e0u, 0u);
                    wrf32(sp0 - 0x1d0u, (float)(double)(float)d680);
                    g->esp = sp0 - 0x1f0u;
                    t681 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    d682 = cow_take_float(g);
                    eax = t681;
                    x0 = d682;
    COW_AT(100205b6)
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) == 0u)
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(100205c5)
                        x2 = (double)rdf32(sp0 - 0x1d0u);
                        x1 = cow_bits2f(0u);
L_100205cd: ;
    COW_AT(100205cd)
                        d683 = fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) * x2);
                        d684 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu)));
                        if ((cow_fsw(g, d684, (double)rdf32(COW_IMG(0x103295d8u)), 3u) & 0x4100u) == 0u)
                        {
                            eax = cow_fsw(g, d684, (double)rdf32(COW_IMG(0x103295d8u)), 3u) & 0x4100u;
                            x2 = fr(g, x2 - d683);
                            x1 = fr(g, x1 + d683);
                            x0 = d684;
                            goto L_100205cd;
                        }
                        x2 = fr(g, x2 - d683);
                        x1 = fr(g, x1 + d683);
                        x0 = d684;
    COW_AT(100205f6)
                        wrf32(sp0 - 0x1e0u, (float)(double)(float)x1);
                    }
    COW_AT(100205fc)
                    t685 = rd32(sp0 - 0x1e0u);
                    wr32(sp0 - 0x1f4u, t685);
                    wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                    g->edx = sp0 - 0x144u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x144u, sp0 - 0x144u, t685);
                    t686 = g->edx;
                    edx = t686;
    COW_AT(10020618)
                    wr32(sp0 - 0x200u, sp0 - 0x144u);
                    wr32(sp0 - 0x204u, sp0 - 0x194u);
                    g->eax = sp0 - 0x144u;
                    g->ecx = sp0 - 0x194u;
                    g->edx = edx;
                    g->esp = sp0 - 0x1fcu;
                    t687 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, sp0 - 0x144u);
                    t688 = g->ecx;
                    t689 = g->edx;
                    eax = t687;
                    ecx = t688;
                    edx = t689;
    COW_AT(1002062a)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x204u;
                    t690 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t691 = g->ecx;
                    eax = t690;
                    ecx = t691;
    COW_AT(1002062f)
                    wr32(sp0 - 0x208u, eax + 0x50u);
                    wr32(sp0 - 0x20cu, sp0 - 0x194u);
                    g->ecx = ecx;
                    g->edx = sp0 - 0x194u;
                    g->esp = sp0 - 0x204u;
                    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, eax + 0x50u);
                    t692 = g->ecx;
                    t693 = g->edx;
                    ecx = t692;
                    edx = t693;
    COW_AT(1002063d)
                    wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                    g->eax = sp0 - 0x194u;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f4u;
                    t694 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t695 = g->edx;
                    eax = t694;
                    edx = t695;
    COW_AT(1002064a)
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t696 = cow_thiscall(g, COW_IMG(0x1001e760u), eax, 1, sp0 - 0x194u);
                    eax = t696;
    COW_AT(10020651)
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t697 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    eax = t697;
    COW_AT(1002065b)
                    wr32(sp0 - 0x1b8u, rd32(eax));
                    g->eax = rd32(eax);
                    t698 = rd32(eax);
                    g->esp = sp0 - 0x1f0u;
                    t699 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    eax = t699;
    COW_AT(1002066b)
                    t700 = rd32(eax + 4u);
                    wr32(sp0 - 0x1b4u, t700);
                    g->eax = t700;
                    g->esp = sp0 - 0x1f0u;
                    t701 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    eax = t701;
    COW_AT(1002067c)
                    t702 = rd32(eax + 8u);
                    wr32(sp0 - 0x1b0u, t702);
                    g->eax = t702;
                    g->esp = sp0 - 0x1f0u;
                    t703 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    eax = t703;
    COW_AT(1002068d)
                    d704 = fr(g, (double)rdf32(sp0 - 0x1b4u) - (double)rdf32(COW_IMG(0x1032961cu)));
                    wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                    wr32(sp0 - 0x1f8u, sp0 - 0x108u);
                    t705 = rd32(eax + 0xcu);
                    wr32(sp0 - 0x1acu, t705);
                    wrf32(sp0 - 0x1b4u, (float)(double)(float)d704);
                    g->edx = sp0 - 0x108u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x108u, sp0 - 0x1b8u);
                    t706 = g->edx;
                    edx = t706;
    COW_AT(100206b4)
                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                    t707 = rd32(sp0 - 0x1d8u) + 0x44u;
                    wr32(sp0 - 0x1f8u, t707);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                    g->edx = edx;
                    t708 = rd32(COW_IMG(0x10631f24u));
                    t709 = rd32(sp0 - 0x1d8u);
                    g->esp = sp0 - 0x1f0u;
                    t710 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x1c8u, t708, g->edx, 0, 3, sp0 - 0x1b8u, t707, sp0 - 0x1c8u);
                    t711 = g->ecx;
                    t712 = g->edx;
                    eax = t710;
                    ecx = t711;
                    edx = t712;
                    ebx = t709;
                    edi = t707;
    COW_AT(100206d4)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(100206dc)
                        wr32(sp0 - 0x1f4u, edi);
                        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
                        g->eax = sp0 - 0x174u;
                        g->edx = sp0 - 0x1c8u;
                        g->esp = sp0 - 0x1f0u;
                        t713 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x174u, sp0 - 0x1c8u, edi);
                        t714 = g->edx;
                        eax = t713;
                        edx = t714;
    COW_AT(100206ef)
                        wr32(sp0 - 0x200u, edi);
                        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                        g->eax = eax;
                        g->ecx = sp0 - 0x1c8u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1fcu;
                        t715 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x1c8u, edi);
                        t716 = g->ecx;
                        t717 = g->edx;
                        d718 = cow_take_float(g);
                        eax = t715;
                        ecx = t716;
                        edx = t717;
                        x0 = d718;
    COW_AT(100206fa)
                        wrf32(sp0 - 0x1d4u, (float)(double)(float)x0);
                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            loc_1d4_f = (double)(float)x0;
    COW_AT(10020710)
                            d719 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_1d4_f);
                            wr32(sp0 - 0x1f4u, ecx);
                            wrf32(sp0 - 0x1f4u, (float)(double)(float)d719);
                            wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                            g->ecx = ecx;
                            g->edx = sp0 - 0x174u;
                            g->esp = sp0 - 0x1f0u;
                            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x174u, cow_f2bits((double)(float)d719));
                            t720 = g->ecx;
                            t721 = g->edx;
                            ecx = t720;
                            edx = t721;
    COW_AT(1002072b)
                            d722 = fr(g, (double)rdf32(sp0 - 0x1d4u) + (double)rdf32(COW_IMG(0x1032a39cu)));
                            wrf32(sp0 - 0x1f4u, (float)(double)(float)d722);
                            wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                            g->eax = sp0 - 0x174u;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t723 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x174u, cow_f2bits((double)(float)d722));
                            t724 = g->edx;
                            eax = t723;
                            edx = t724;
    COW_AT(10020748)
                        }
    COW_AT(1002074b)
                        wr32(sp0 - 0x1f4u, edi);
                        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                        g->eax = eax;
                        g->esp = sp0 - 0x1f0u;
                        t725 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x174u, edi);
                        eax = t725;
    COW_AT(10020756)
                        wr32(sp0 - 0x1f4u, sp0 - 0x174u);
                        g->edx = sp0 - 0x174u;
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x1001e760u), ebx, 1, sp0 - 0x174u);
                        t726 = g->edx;
                        edx = t726;
                    }
    COW_AT(10020765)
                    t727 = rd32(sp0 - 0x1d8u);
                    wr32(COW_IMG(0x10456d7cu), 0x41a00000u);
                    edi = t727;
                }
                else
                {
    COW_AT(1001f619)
                    if (rd32(COW_IMG(0x10456d70u)) == 0u)
                    {
                        eax = rd32(COW_IMG(0x10456d70u));
    COW_AT(1001f76e)
                        if (rd8(COW_IMG(0x10456d84u)) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456d84u));
                            goto L_1001f7de;
                        }
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456d84u));
    COW_AT(1001f777)
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t282 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                        t283 = g->ecx;
                        t284 = g->edx;
                        d285 = cow_take_float(g);
                        eax = t282;
                        ecx = t283;
                        edx = t284;
                        x0 = d285;
    COW_AT(1001f77c)
                        d286 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3dcu)) - x0) * (double)rdf32(COW_IMG(0x10329ce4u)));
                        wrf32(sp0 - 0x1e0u, (float)(double)(float)d286);
                        if (!((double)rdf32(COW_IMG(0x1032a3f0u)) < (double)(float)d286))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), (double)(float)d286, 0u);
                            loc_1e0_f = (double)(float)d286;
                            goto L_1001f7c7;
                        }
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), (double)(float)d286, 0u);
                        loc_1e0_f = (double)(float)d286;
    COW_AT(1001f79d)
                        if (!(loc_1e0_f < (double)rdf32(COW_IMG(0x1032961cu))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1e0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                            goto L_1001f7c7;
                        }
    COW_AT(1001f7ae)
                        wr32(sp0 - 0x1e0u, 0x43af0000u);
                        wr8(COW_IMG(0x10456d84u), 0u);
                        wr32(sp0 - 0x1f4u, 0x43af0000u);
                        eax = 0x43af0000u;
                        loc_1f4 = 0x43af0000u;
L_1001f94f: ;
    COW_AT(1001f94f)
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t356 = cow_cdecl(g, COW_IMG(0x10015290u), 1, loc_1f4);
                        t357 = g->ecx;
                        t358 = g->edx;
                        eax = t356;
                        ecx = t357;
                        edx = t358;
    COW_AT(1001f954)
                        g->ecx = ecx;
                        g->edx = edx;
                        d359 = (double)rdf32(sp0 - 0x1e0u);
                        fpush(g, d359);
                        g->esp = sp0 - 0x1f4u;
                        t360 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t361 = g->ecx;
                        t362 = g->edx;
                        eax = t360;
                        ecx = t361;
                        edx = t362;
    COW_AT(1001f95d)
                        wr32(sp0 - 0x1f8u, eax);
                        wr32(sp0 - 0x1fcu, 0x49u);
                        g->esp = sp0 - 0x1f4u;
                        t363 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x49u, eax);
                        eax = t363;
    COW_AT(1001f965)
L_1001f968: ;
    COW_AT(1001f968)
                        g->eax = eax;
                        g->edx = rd32(arg1);
                        t364 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t365 = cow_thiscall(g, rd32(t364 + 0x340u), arg1, 0);
                        t366 = g->ecx;
                        t367 = g->edx;
                        eax = t365;
                        ecx = t366;
                        edx = t367;
    COW_AT(1001f972)
                        if ((uint8_t)eax == 0u)
                        {
    COW_AT(1001f97a)
                            wr32(sp0 - 0x1f4u, 0x91u);
                            wr8(sp0 - 0x1d9u, 1u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t368 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x91u);
                            t369 = g->ecx;
                            t370 = g->edx;
                            eax = t368;
                            ecx = t369;
                            edx = t370;
    COW_AT(1001f989)
                            if (eax != 0u)
                            {
    COW_AT(1001f994)
                                wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                                wr32(sp0 - 0x1f8u, edi + 0x44u);
                                wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                g->ecx = sp0 - 0x1c8u;
                                g->esp = sp0 - 0x1f0u;
                                cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, edi + 0x44u, sp0 - 0x194u);
                                t371 = g->ecx;
                                ecx = t371;
    COW_AT(1001f9a7)
                                wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                                wr32(sp0 - 0x1c4u, 0u);
                                g->eax = sp0 - 0x1c8u;
                                g->ecx = ecx;
                                g->edx = sp0 - 0x1c8u;
                                g->esp = sp0 - 0x1fcu;
                                t372 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x1c8u, sp0 - 0x1c8u);
                                t373 = g->ecx;
                                t374 = g->edx;
                                d375 = cow_take_float(g);
                                eax = t372;
                                ecx = t373;
                                edx = t374;
                                x0 = d375;
    COW_AT(1001f9be)
                                if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x10329d38u))))
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329d38u)), 1u);
                                    x0 = fr(g, sqrt(x0));
    COW_AT(1001fa32)
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329d38u)), 1u);
                                    x0 = fr(g, sqrt(x0));
    COW_AT(1001f9d0)
                                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
                                    {
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
                                    }
                                    else
                                    {
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    COW_AT(1001f9df)
                                        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                        g->ecx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1f0u;
                                        t376 = cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1c8u);
                                        t377 = g->ecx;
                                        eax = t376;
                                        ecx = t377;
    COW_AT(1001f9e9)
                                        wr32(sp0 - 0x1f8u, 0x40466666u);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                        g->edx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1f4u;
                                        cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, 0x40466666u);
                                        t378 = g->edx;
                                        edx = t378;
    COW_AT(1001f9f8)
                                        wr32(sp0 - 0x200u, sp0 - 0x194u);
                                        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                                        g->esp = sp0 - 0x1fcu;
                                        cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, sp0 - 0x194u);
    COW_AT(1001fa07)
                                        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
                                        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                                        g->edx = sp0 - 0x164u;
                                        t379 = rd32(COW_IMG(0x10631f24u));
                                        g->esp = sp0 - 0x1f0u;
                                        t380 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x1c8u, t379, g->edx, 0, 3, sp0 - 0x194u, sp0 - 0x1c8u, sp0 - 0x164u);
                                        t381 = g->ecx;
                                        t382 = g->edx;
                                        eax = t380;
                                        ecx = t381;
                                        edx = t382;
    COW_AT(1001fa27)
                                        if ((uint8_t)eax != 0u)
                                        {
    COW_AT(1001fa2b)
                                            wr8(sp0 - 0x1d9u, 0u);
                                        }
                                    }
                                }
                            }
    COW_AT(1001fa34)
                            wr32(sp0 - 0x1d8u, 0u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t383 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                            t384 = g->ecx;
                            t385 = g->edx;
                            d386 = cow_take_float(g);
                            eax = t383;
                            ecx = t384;
                            edx = t385;
                            x0 = d386;
    COW_AT(1001fa3d)
                            g->ecx = ecx;
                            g->edx = edx;
                            fpush(g, x0);
                            g->esp = sp0 - 0x1f0u;
                            t387 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            t388 = g->ecx;
                            t389 = g->edx;
                            eax = t387;
                            ecx = t388;
                            edx = t389;
    COW_AT(1001fa42)
                            if ((int32_t)eax > 0)
                            {
    COW_AT(1001fa4a)
L_1001fa4f: ;
    COW_AT(1001fa4f)
                                d390 = fr(g, (double)rdf32(COW_IMG(0x10456d7cu)) - (double)rdf32(COW_IMG(0x1032961cu)));
                                wrf32(COW_IMG(0x10456d7cu), (float)d390);
                                if ((cow_fsw(g, d390, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
                                {
                                    eax = cow_fsw(g, d390, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                    loc_180 = rd32(sp0 - 0x180u);
                                }
                                else
                                {
    COW_AT(1001fa74)
                                    wr32(sp0 - 0x1f4u, edi + 0x44u);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                    wr32(COW_IMG(0x10456d7cu), 0u);
                                    g->eax = sp0 - 0x1c8u;
                                    g->edx = sp0 - 0x194u;
                                    g->esp = sp0 - 0x1f0u;
                                    t391 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, sp0 - 0x194u, edi + 0x44u);
                                    t392 = g->edx;
                                    eax = t391;
                                    edx = t392;
                                    ebp = edi + 0x44u;
    COW_AT(1001fa91)
                                    wr32(sp0 - 0x200u, ebp);
                                    wr32(sp0 - 0x204u, sp0 - 0x194u);
                                    g->eax = eax;
                                    g->ecx = sp0 - 0x194u;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x1fcu;
                                    t393 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x194u, ebp);
                                    t394 = g->ecx;
                                    t395 = g->edx;
                                    d396 = cow_take_float(g);
                                    eax = t393;
                                    ecx = t394;
                                    edx = t395;
                                    x0 = d396;
    COW_AT(1001fa9c)
                                    wrf32(sp0 - 0x1e0u, (float)(double)(float)x0);
                                    wr32(sp0 - 0x208u, 0x91u);
                                    g->ecx = ecx;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x204u;
                                    t397 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x91u);
                                    t398 = g->ecx;
                                    t399 = g->edx;
                                    eax = t397;
                                    ecx = t398;
                                    edx = t399;
    COW_AT(1001faaa)
                                    if (eax == 0u)
                                    {
                                        loc_180 = rd32(sp0 - 0x180u);
                                    }
                                    else
                                    {
    COW_AT(1001fab5)
                                        d400 = (double)rdf32(sp0 - 0x1d0u);
                                        if (!(d400 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d400, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1d0u);
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d400, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1d0u);
    COW_AT(1001faca)
                                            x0 = -x0;
                                        }
    COW_AT(1001facc)
                                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) == 0u)
                                        {
                                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
                                            goto L_1001fb01;
                                        }
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
    COW_AT(1001fadb)
                                        d401 = (double)rdf32(sp0 - 0x1ccu);
                                        if (!(d401 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d401, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1ccu);
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d401, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1ccu);
    COW_AT(1001faf0)
                                            x0 = -x0;
                                        }
    COW_AT(1001faf2)
                                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) != 0u) goto L_1001fb25;
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
L_1001fb01: ;
    COW_AT(1001fb01)
                                        g->eax = eax;
                                        g->edx = rd32(arg1);
                                        t402 = rd32(arg1);
                                        g->esp = sp0 - 0x1f0u;
                                        t403 = cow_thiscall(g, rd32(t402 + 0x1bcu), arg1, 0);
                                        t404 = g->ecx;
                                        t405 = g->edx;
                                        eax = t403;
                                        ecx = t404;
                                        edx = t405;
    COW_AT(1001fb0b)
                                        wr32(sp0 - 0x1f4u, eax);
                                        wr32(sp0 - 0x1f8u, COW_IMG(0x10456d90u));
                                        g->ecx = ecx;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x1f0u;
                                        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x10456d90u), eax);
                                        t406 = g->ecx;
                                        t407 = g->edx;
                                        ecx = t406;
                                        edx = t407;
    COW_AT(1001fb16)
                                        wr32(COW_IMG(0x10456d8cu), 4u);
L_1001fb32: ;
    COW_AT(1001fb32)
                                        wr32(sp0 - 0x1f4u, COW_IMG(0x10456d90u));
                                        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
                                        g->eax = sp0 - 0x184u;
                                        g->esp = sp0 - 0x1f0u;
                                        t408 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x184u, COW_IMG(0x10456d90u));
                                        eax = t408;
    COW_AT(1001fb41)
                                        g->eax = eax;
                                        g->edx = rd32(arg1);
                                        t409 = rd32(arg1);
                                        g->esp = sp0 - 0x1f0u;
                                        t410 = cow_thiscall(g, rd32(t409 + 0x1bcu), arg1, 0);
                                        t411 = g->ecx;
                                        t412 = g->edx;
                                        eax = t410;
                                        ecx = t411;
                                        edx = t412;
    COW_AT(1001fb4e)
                                        wr32(sp0 - 0x1f4u, eax);
                                        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                                        g->eax = sp0 - 0x144u;
                                        g->esp = sp0 - 0x1f0u;
                                        t413 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x144u, eax);
                                        eax = t413;
    COW_AT(1001fb5c)
                                        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                                        wr32(sp0 - 0x200u, sp0 - 0x184u);
                                        wr32(sp0 - 0x180u, 0u);
                                        wr32(sp0 - 0x140u, 0u);
                                        g->eax = eax;
                                        g->ecx = sp0 - 0x144u;
                                        g->edx = sp0 - 0x184u;
                                        g->esp = sp0 - 0x1f8u;
                                        t414 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x184u, sp0 - 0x144u);
                                        t415 = g->ecx;
                                        t416 = g->edx;
                                        d417 = cow_take_float(g);
                                        eax = t414;
                                        ecx = t415;
                                        edx = t416;
                                        x0 = d417;
    COW_AT(1001fb84)
                                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u) != 0u) goto L_1001fbaf;
    COW_AT(1001fb96)
                                        t418 = rd32(COW_IMG(0x10456d8cu)) - 1u;
                                        t419 = rd32(COW_IMG(0x10456d8cu));
                                        wr32(COW_IMG(0x10456d8cu), t418);
                                        if ((int32_t)(t419 - 1u) >= 0) goto L_1001fbaf;
                                        eax = t418;
    COW_AT(1001fba3)
                                        wr32(COW_IMG(0x10456d8cu), 0u);
                                        loc_180 = 0u;
L_1001fbbc: ;
    COW_AT(1001fbbc)
                                        d420 = (double)(float)-(double)rdf32(sp0 - 0x1e0u);
                                        wrf32(sp0 - 0x1a4u, (float)d420);
                                        wr32(sp0 - 0x1a0u, 0u);
                                        wr32(sp0 - 0x19cu, 0u);
                                        g->eax = eax;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x1f0u;
                                        t421 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xfcu, 0);
                                        t422 = g->edx;
                                        eax = t421;
                                        edx = t422;
    COW_AT(1001fbe2)
                                        g->edx = edx;
                                        g->esp = sp0 - 0x1f0u;
                                        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xfcu, 0);
                                        t423 = g->edx;
                                        edx = t423;
    COW_AT(1001fbee)
                                        g->eax = rd32(arg1);
                                        g->edx = edx;
                                        t424 = rd32(arg1);
                                        g->esp = sp0 - 0x1f0u;
                                        t425 = cow_thiscall(g, rd32(t424 + 0x1c0u), arg1, 0);
                                        t426 = g->edx;
                                        eax = t425;
                                        edx = t426;
    COW_AT(1001fbf8)
                                        t427 = rd32(eax + 4u);
                                        wr32(sp0 - 0x1f4u, t427);
                                        g->eax = eax;
                                        g->esp = sp0 - 0x1f0u;
                                        t428 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xfcu, 1, t427);
                                        eax = t428;
    COW_AT(1001fc08)
                                        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
                                        g->edx = sp0 - 0x1a4u;
                                        g->esp = sp0 - 0x1f0u;
                                        cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x1a4u);
                                        t429 = g->edx;
                                        edx = t429;
    COW_AT(1001fc19)
                                        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
                                        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                                        g->eax = sp0 - 0x1a4u;
                                        g->ecx = sp0 - 0x1b8u;
                                        g->esp = sp0 - 0x1f0u;
                                        t430 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1b8u, sp0 - 0x1a4u);
                                        t431 = g->ecx;
                                        eax = t430;
                                        ecx = t431;
    COW_AT(1001fc28)
                                        d432 = fr(g, (double)rdf32(ebp) - (double)rdf32(sp0 - 0x194u));
                                        wr32(sp0 - 0x170u, 0u);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                                        wrf32(sp0 - 0x174u, (float)(double)(float)d432);
                                        d433 = fr(g, (double)rdf32(ebp + 8u) - (double)rdf32(sp0 - 0x18cu));
                                        wrf32(sp0 - 0x16cu, (float)(double)(float)d433);
                                        g->ecx = ecx;
                                        g->edx = sp0 - 0x1b8u;
                                        g->esp = sp0 - 0x1f8u;
                                        cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1b8u);
                                        t434 = g->ecx;
                                        t435 = g->edx;
                                        ecx = t434;
                                        edx = t435;
    COW_AT(1001fc59)
                                        wr32(sp0 - 0x200u, sp0 - 0x174u);
                                        g->esp = sp0 - 0x1fcu;
                                        t436 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x174u, g->ecx, g->edx, 1, 1, sp0 - 0x174u);
                                        eax = t436;
    COW_AT(1001fc66)
                                        wr32(sp0 - 0x204u, sp0 - 0x174u);
                                        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
                                        g->eax = eax;
                                        g->edx = sp0 - 0x1b8u;
                                        g->esp = sp0 - 0x200u;
                                        t437 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x1b8u, sp0 - 0x174u);
                                        t438 = g->edx;
                                        d439 = cow_take_float(g);
                                        eax = t437;
                                        edx = t438;
                                        x0 = d439;
    COW_AT(1001fc78)
                                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x4100u) != 0u)
                                        {
                                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x4100u;
    COW_AT(1001fcf1)
                                        }
                                        else
                                        {
                                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x4100u;
    COW_AT(1001fc8a)
                                            if (!(x0 < (double)rdf32(COW_IMG(0x1032a3ccu))))
                                            {
                                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u);
                                            }
                                            else
                                            {
    COW_AT(1001fc97)
                                                wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                                                wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
                                                g->eax = sp0 - 0x194u;
                                                g->ecx = sp0 - 0x1a4u;
                                                g->esp = sp0 - 0x1f0u;
                                                t440 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1a4u, sp0 - 0x194u);
                                                t441 = g->ecx;
                                                eax = t440;
                                                ecx = t441;
    COW_AT(1001fca6)
                                                wr32(sp0 - 0x1fcu, ebp);
                                                wr32(sp0 - 0x200u, sp0 - 0x1a4u);
                                                g->edx = sp0 - 0x1a4u;
                                                g->esp = sp0 - 0x1f8u;
                                                cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x1a4u, ebp);
                                                t442 = g->edx;
                                                edx = t442;
    COW_AT(1001fcb1)
                                                d443 = fr(g, fr(g, (double)(int32_t)rd32(COW_IMG(0x1035121cu)) * (double)rdf32(COW_IMG(0x10329a18u))) * (double)rdf32(COW_IMG(0x1032a3e0u)));
                                                wrf32(sp0 - 0x1f4u, (float)(double)(float)d443);
                                                wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
                                                wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
                                                g->eax = sp0 - 0x1a4u;
                                                g->edx = edx;
                                                g->esp = sp0 - 0x1f0u;
                                                t444 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x1a4u, sp0 - 0x1a4u, cow_f2bits((double)(float)d443));
                                                t445 = g->edx;
                                                eax = t444;
                                                edx = t445;
    COW_AT(1001fcd8)
                                                d446 = fr(g, (double)rdf32(sp0 - 0x1a4u) + (double)rdf32(ebp));
                                                wrf32(ebp, (float)d446);
                                                d447 = fr(g, (double)rdf32(sp0 - 0x19cu) + (double)rdf32(ebp + 8u));
                                                wrf32(ebp + 8u, (float)d447);
                                            }
                                        }
    COW_AT(1001fcf3)
                                        g->eax = eax;
                                        g->ecx = sp0 - 0xfcu;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x1f0u;
                                        t448 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                                        t449 = g->ecx;
                                        t450 = g->edx;
                                        eax = t448;
                                        ecx = t449;
                                        edx = t450;
                                        loc_180 = rd32(sp0 - 0x180u);
                                    }
L_1001fcff: ;
    COW_AT(1001fcff)
                                    d451 = (double)rdf32(sp0 - 0x1e0u);
                                    if ((cow_fsw(g, d451, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u) != 0u)
                                    {
                                        eax = cow_fsw(g, d451, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u;
                                        goto L_1001fd2e;
                                    }
                                    eax = cow_fsw(g, d451, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u;
    COW_AT(1001fd12)
                                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                    g->ecx = ecx;
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1c8u);
                                    t452 = g->ecx;
                                    t453 = g->edx;
                                    ecx = t452;
                                    edx = t453;
    COW_AT(1001fd1c)
                                    loc_180 = rd32(sp0 - 0x180u);
                                    x0 = fr(g, fr(g, (double)rdf32(sp0 - 0x1e0u) - (double)rdf32(COW_IMG(0x1032a3c8u))) * (double)rdf32(COW_IMG(0x10329a08u)));
L_1001fd52: ;
    COW_AT(1001fd52)
                                    wrf32(sp0 - 0x1f4u, (float)(double)(float)x0);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                    g->eax = sp0 - 0x1c8u;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x1f0u;
                                    t456 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits((double)(float)x0));
                                    t457 = g->edx;
                                    eax = t456;
                                    edx = t457;
    COW_AT(1001fd5f)
                                    wr32(sp0 - 0x1fcu, ebp);
                                    wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                    g->eax = eax;
                                    g->esp = sp0 - 0x1f8u;
                                    t458 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, ebp);
                                    eax = t458;
    COW_AT(1001fd6a)
                                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                    g->eax = eax;
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    t459 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                    t460 = g->ecx;
                                    t461 = g->edx;
                                    eax = t459;
                                    ecx = t460;
                                    edx = t461;
                                    loc_180 = rd32(sp0 - 0x180u);
L_1001fd79: ;
    COW_AT(1001fd79)
                                    if (rd8(sp0 - 0x1d9u) == 0u)
                                    {
                                        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
                                    }
                                    else
                                    {
                                        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
    COW_AT(1001fd85)
                                        d462 = (double)rdf32(sp0 - 0x1e0u);
                                        if (d462 < (double)rdf32(COW_IMG(0x10329d38u)))
                                        {
    COW_AT(1001fd96)
                                            d463 = fr(g, (double)rdf32(COW_IMG(0x10329d38u)) - (double)rdf32(sp0 - 0x1e0u));
                                            wr32(sp0 - 0x1f4u, ecx);
                                            d464 = fr(g, d463 * (double)rdf32(COW_IMG(0x1032a3c0u)));
                                            wrf32(sp0 - 0x1f4u, (float)(double)(float)d464);
                                            wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                            g->eax = sp0 - 0x1c8u;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x1f0u;
                                            t465 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits((double)(float)d464));
                                            t466 = g->edx;
                                            eax = t465;
                                            edx = t466;
    COW_AT(1001fdb4)
                                            wr32(sp0 - 0x1fcu, ebp);
                                            wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                            g->eax = eax;
                                            g->esp = sp0 - 0x1f8u;
                                            t467 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, ebp);
                                            eax = t467;
    COW_AT(1001fdbf)
                                            wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                            g->edx = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f0u;
                                            cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                            t468 = g->edx;
                                            edx = t468;
    COW_AT(1001fdce)
                                            wr32(COW_IMG(0x10456d74u), 0xau);
                                            loc_180 = rd32(sp0 - 0x180u);
                                        }
    COW_AT(1001fdd4)
                                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                                        wr32(sp0 - 0x1f8u, ebp);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                        g->ecx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1f0u;
                                        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, ebp, sp0 - 0x194u);
                                        t469 = g->ecx;
                                        ecx = t469;
    COW_AT(1001fde4)
                                        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                                        wr32(sp0 - 0x1c4u, 0u);
                                        g->eax = sp0 - 0x1c8u;
                                        g->ecx = ecx;
                                        g->edx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1fcu;
                                        t470 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x1c8u, sp0 - 0x1c8u);
                                        t471 = g->ecx;
                                        t472 = g->edx;
                                        d473 = cow_take_float(g);
                                        eax = t470;
                                        ecx = t471;
                                        edx = t472;
                                        x0 = d473;
    COW_AT(1001fdfb)
                                        d474 = (double)(float)fr(g, sqrt(x0));
                                        wrf32(sp0 - 0x1e0u, (float)d474);
                                        if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x10329d38u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329d38u)), 0u);
                                            loc_180 = rd32(sp0 - 0x180u);
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329d38u)), 0u);
                                            loc_1e0_f = d474;
    COW_AT(1001fe11)
                                            wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                            g->ecx = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f0u;
                                            cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1c8u);
                                            t475 = g->ecx;
                                            ecx = t475;
    COW_AT(1001fe1b)
                                            d476 = fr(g, (double)rdf32(sp0 - 0x1c8u) * fr(g, (double)rdf32(COW_IMG(0x10329d38u)) - (double)rdf32(sp0 - 0x1e0u)));
                                            d477 = fr(g, (double)rdf32(COW_IMG(0x10329d38u)) - (double)rdf32(sp0 - 0x1e0u));
                                            wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                            wr32(sp0 - 0x1fcu, ebp);
                                            wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                            d478 = fr(g, d476 * (double)rdf32(COW_IMG(0x1032a3bcu)));
                                            wrf32(sp0 - 0x1c8u, (float)(double)(float)d478);
                                            d479 = fr(g, fr(g, (double)rdf32(sp0 - 0x1c0u) * d477) * (double)rdf32(COW_IMG(0x1032a3bcu)));
                                            wrf32(sp0 - 0x1c0u, (float)(double)(float)d479);
                                            g->eax = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f4u;
                                            t480 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x1c8u, ebp, sp0 - 0x1c8u);
                                            eax = t480;
    COW_AT(1001fe57)
                                            t481 = rd32(edi + 0x48u);
                                            wr32(sp0 - 0x1c4u, t481);
                                            wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                            g->eax = eax;
                                            g->edx = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f0u;
                                            t482 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                            t483 = g->ecx;
                                            t484 = g->edx;
                                            eax = t482;
                                            ecx = t483;
                                            edx = t484;
    COW_AT(1001fe6d)
                                            wr32(COW_IMG(0x10456d74u), 0xau);
                                            loc_180 = rd32(sp0 - 0x180u);
                                        }
                                    }
                                }
    COW_AT(1001fe73)
                                t485 = rd32(sp0 - 0x1d8u) + 1u;
                                wr32(sp0 - 0x1d8u, t485);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t486 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                                t487 = g->ecx;
                                t488 = g->edx;
                                d489 = cow_take_float(g);
                                eax = t486;
                                ecx = t487;
                                edx = t488;
                                ebp = t485;
                                x0 = d489;
    COW_AT(1001fe81)
                                g->ecx = ecx;
                                g->edx = edx;
                                fpush(g, x0);
                                g->esp = sp0 - 0x1f0u;
                                t490 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t491 = g->ecx;
                                t492 = g->edx;
                                eax = t490;
                                ecx = t491;
                                edx = t492;
    COW_AT(1001fe86)
                                if ((int32_t)ebp < (int32_t)eax) goto L_1001fa4f;
    COW_AT(1001fe8e)
                            }
                        }
    COW_AT(1001fe90)
                        if (rd32(COW_IMG(0x10456d74u)) == 0u)
                        {
    COW_AT(1001fe98)
                            if ((double)rdf32(COW_IMG(0x10456d7cu)) <= (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001feab)
                                d493 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(edi + 0x54u));
                                if (!(d493 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d493, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    x0 = d493;
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d493, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    x0 = d493;
    COW_AT(1001febe)
                                    x0 = -x0;
                                }
    COW_AT(1001fec0)
                                if (x0 < (double)rdf32(COW_IMG(0x10456d78u)))
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10456d78u)), 1u);
    COW_AT(1001fecd)
                                    d494 = (double)rdf32(edi + 0x48u);
                                    d495 = (double)rdf32(edi + 0x54u);
                                    if (d494 < d495)
                                    {
    COW_AT(1001feda)
                                        d496 = fr(g, (double)rdf32(edi + 0x48u) - fr(g, (double)rdf32(COW_IMG(0x10456d78u)) - x0));
                                        wrf32(edi + 0x48u, (float)d496);
                                    }
                                }
    COW_AT(1001fee8)
                            }
                        }
    COW_AT(1001feea)
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
                        g->eax = sp0 - 0x194u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t497 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x108u, sp0 - 0x194u);
                        t498 = g->edx;
                        eax = t497;
                        edx = t498;
    COW_AT(1001fefc)
                        if (!((double)rdf32(COW_IMG(0x10456d7cu)) <= (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            goto L_1001ff32;
                        }
    COW_AT(1001ff12)
                        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
                        wr32(sp0 - 0x1f8u, edi + 0x44u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                        g->edx = sp0 - 0x164u;
                        t499 = rd32(COW_IMG(0x10631f24u));
                        g->esp = sp0 - 0x1f0u;
                        t500 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x194u, t499, g->edx, 0, 3, sp0 - 0x194u, edi + 0x44u, sp0 - 0x164u);
                        t501 = g->ecx;
                        t502 = g->edx;
                        eax = t500;
                        ecx = t501;
                        edx = t502;
                        ebp = edi + 0x44u;
    COW_AT(1001ff2e)
                        if ((uint8_t)eax != 0u) goto L_1001ff49;
L_1001ff32: ;
    COW_AT(1001ff32)
                        wr32(sp0 - 0x1f4u, 1u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x1001e320u), edi + 0xbcu, 2, sp0 - 0x194u, 1u);
                        t518 = g->ecx;
                        t519 = g->edx;
                        ecx = t518;
                        edx = t519;
    COW_AT(1001ff44)
                        ebx = 0u;
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x10456d70u));
    COW_AT(1001f628)
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
                        g->ecx = sp0 - 0x194u;
                        g->edx = sp0 - 0x108u;
                        g->esp = sp0 - 0x1f0u;
                        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x108u, sp0 - 0x194u);
                        t250 = g->ecx;
                        t251 = g->edx;
                        ecx = t250;
                        edx = t251;
    COW_AT(1001f63a)
                        if (rd32(COW_IMG(0x10456d74u)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x10456d74u));
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x10456d74u));
    COW_AT(1001f646)
                            wr8(edi + 0xf0u, 0u);
                        }
    COW_AT(1001f64c)
                        if ((int8_t)rd8(edi + 0xf0u) >= 4)
                        {
    COW_AT(1001f667)
                            wr32(sp0 - 0x1d8u, 0u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t252 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                            t253 = g->ecx;
                            t254 = g->edx;
                            d255 = cow_take_float(g);
                            eax = t252;
                            ecx = t253;
                            edx = t254;
                            x0 = d255;
    COW_AT(1001f670)
                            g->edx = edx;
                            fpush(g, x0);
                            g->esp = sp0 - 0x1f0u;
                            t256 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                            t257 = g->edx;
                            eax = t256;
                            edx = t257;
    COW_AT(1001f675)
                            if ((int32_t)eax <= 0)
                            {
                                ebx = 0u;
                            }
                            else
                            {
    COW_AT(1001f67d)
                                ebx = edi + 0xbcu;
L_1001f683: ;
    COW_AT(1001f683)
                                wr32(sp0 - 0x1f4u, sp0 - 0x174u);
                                g->eax = sp0 - 0x174u;
                                g->esp = sp0 - 0x1f0u;
                                t258 = cow_thiscall(g, COW_IMG(0x1001e3b0u), ebx, 1, sp0 - 0x174u);
                                eax = t258;
    COW_AT(1001f68f)
                                wr32(sp0 - 0x1f4u, edi + 0x44u);
                                wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                                wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                g->ecx = sp0 - 0x174u;
                                g->edx = sp0 - 0x1c8u;
                                g->esp = sp0 - 0x1f0u;
                                cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, sp0 - 0x174u, edi + 0x44u);
                                t259 = g->ecx;
                                t260 = g->edx;
                                ecx = t259;
                                edx = t260;
                                ebp = edi + 0x44u;
    COW_AT(1001f6a2)
                                wr32(sp0 - 0x200u, ebp);
                                wr32(sp0 - 0x204u, sp0 - 0x174u);
                                g->eax = sp0 - 0x174u;
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1fcu;
                                t261 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x174u, ebp);
                                t262 = g->ecx;
                                t263 = g->edx;
                                d264 = cow_take_float(g);
                                eax = t261;
                                ecx = t262;
                                edx = t263;
                                x0 = d264;
    COW_AT(1001f6b0)
                                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u;
    COW_AT(1001f6f7)
                                    wr8(edi + 0xf0u, 0u);
                                    wr32(COW_IMG(0x10456d70u), 0u);
                                }
                                else
                                {
                                    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u;
    COW_AT(1001f6c2)
                                    wr32(sp0 - 0x1f4u, 0x3d4ccccdu);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x1c8u, sp0 - 0x1c8u, 0x3d4ccccdu);
                                    t265 = g->edx;
                                    edx = t265;
    COW_AT(1001f6d6)
                                    wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                    wr32(sp0 - 0x204u, ebp);
                                    wr32(sp0 - 0x208u, sp0 - 0x1c8u);
                                    g->eax = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1fcu;
                                    t266 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x1c8u, ebp, sp0 - 0x1c8u);
                                    eax = t266;
    COW_AT(1001f6e6)
                                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                    g->eax = eax;
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    t267 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                    t268 = g->ecx;
                                    t269 = g->edx;
                                    eax = t267;
                                    ecx = t268;
                                    edx = t269;
    COW_AT(1001f6f5)
                                }
    COW_AT(1001f708)
                                t270 = rd32(sp0 - 0x1d8u) + 1u;
                                wr32(sp0 - 0x1d8u, t270);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t271 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                                t272 = g->ecx;
                                t273 = g->edx;
                                d274 = cow_take_float(g);
                                eax = t271;
                                ecx = t272;
                                edx = t273;
                                ebp = t270;
                                x0 = d274;
    COW_AT(1001f716)
                                g->edx = edx;
                                fpush(g, x0);
                                g->esp = sp0 - 0x1f0u;
                                t275 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t276 = g->edx;
                                eax = t275;
                                edx = t276;
    COW_AT(1001f71b)
                                if ((int32_t)ebp < (int32_t)eax) goto L_1001f683;
                            }
    COW_AT(1001f723)
                            wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                            g->eax = sp0 - 0x1b8u;
                            g->esp = sp0 - 0x1f0u;
                            t277 = cow_thiscall(g, COW_IMG(0x1001e3b0u), edi + 0xbcu, 1, sp0 - 0x1b8u);
                            eax = t277;
    COW_AT(1001f733)
                            wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                            wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                            g->eax = eax;
                            g->ecx = sp0 - 0x194u;
                            g->edx = sp0 - 0x1b8u;
                            g->esp = sp0 - 0x1f0u;
                            t278 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x1b8u, sp0 - 0x194u);
                            t279 = g->ecx;
                            t280 = g->edx;
                            d281 = cow_take_float(g);
                            eax = t278;
                            ecx = t279;
                            edx = t280;
                            x0 = d281;
    COW_AT(1001f742)
                            if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u) == 0u)
                            {
    COW_AT(1001f758)
                                wr8(edi + 0xf0u, 0u);
                                wr32(COW_IMG(0x10456d70u), 0u);
                            }
                        }
                        else
                        {
    COW_AT(1001f655)
                            wr8(edi + 0xf0u, 0u);
                            wr32(COW_IMG(0x10456d70u), 0u);
                            ebx = 0u;
                        }
                    }
L_1001fffa: ;
    COW_AT(1001fffa)
                    if ((int32_t)rd32(COW_IMG(0x10456d88u)) <= 0)
                    {
                        eax = rd32(COW_IMG(0x10456d88u));
    COW_AT(100201bf)
                        wr32(sp0 - 0x1f4u, 0xffffffffu);
                        wr32(sp0 - 0x1f8u, 4u);
                        wr32(sp0 - 0x1fcu, 0x51u);
                        wr32(sp0 - 0x200u, 0x3fu);
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1e4u;
                        t560 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x51u, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
                        t561 = g->edx;
                        eax = t560;
                        edx = t561;
    COW_AT(100201cc)
                        if ((uint8_t)eax != 0u)
                        {
    COW_AT(100201d7)
                            wr32(COW_IMG(0x10456d88u), 8u);
                        }
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x10456d88u));
    COW_AT(10020007)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t520 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xfcu, 0);
                        t521 = g->edx;
                        eax = t520;
                        edx = t521;
    COW_AT(10020013)
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xfcu, 0);
                        t522 = g->edx;
                        edx = t522;
    COW_AT(1002001f)
                        g->eax = rd32(arg1);
                        g->edx = edx;
                        t523 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t524 = cow_thiscall(g, rd32(t523 + 0x1c0u), arg1, 0);
                        t525 = g->edx;
                        eax = t524;
                        edx = t525;
    COW_AT(10020029)
                        t526 = rd32(eax + 4u);
                        wr32(sp0 - 0x1f4u, t526);
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xfcu, 1, t526);
    COW_AT(10020039)
                        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                        wr32(sp0 - 0x1f8u, 2u);
                        g->eax = sp0 - 0x184u;
                        g->esp = sp0 - 0x1f0u;
                        t527 = cow_thiscall(g, rd32(rd32(arg1) + 0x1c8u), arg1, 2, 2u, sp0 - 0x184u);
                        eax = t527;
    COW_AT(1002004a)
                        t528 = rd32(sp0 - 0x180u);
                        wr32(sp0 - 0x1b4u, t528);
                        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                        wr32(sp0 - 0x1b8u, 0xc0400000u);
                        wr32(sp0 - 0x1b0u, 0u);
                        wr32(sp0 - 0x1acu, 0x3f800000u);
                        g->edx = sp0 - 0x1b8u;
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x1b8u);
                        t529 = g->edx;
                        edx = t529;
    COW_AT(1002007b)
                        g->eax = rd32(arg1);
                        g->edx = edx;
                        t530 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t531 = cow_thiscall(g, rd32(t530 + 0x1bcu), arg1, 0);
                        t532 = g->edx;
                        eax = t531;
                        edx = t532;
    COW_AT(10020085)
                        wr32(sp0 - 0x1f4u, eax);
                        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                        g->ecx = sp0 - 0x1b8u;
                        g->esp = sp0 - 0x1f0u;
                        cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1b8u, eax);
                        t533 = g->ecx;
                        ecx = t533;
    COW_AT(10020090)
                        wr32(sp0 - 0x1fcu, edi + 0x44u);
                        wr32(sp0 - 0x200u, sp0 - 0x184u);
                        g->eax = edi + 0x44u;
                        g->edx = sp0 - 0x184u;
                        g->esp = sp0 - 0x1f8u;
                        t534 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x184u, edi + 0x44u);
                        t535 = g->edx;
                        eax = t534;
                        edx = t535;
    COW_AT(1002009e)
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        cow_stdcall(g, COW_IMG(0x1001e4d0u), 0);
                        t536 = g->edx;
                        d537 = cow_take_float(g);
                        edx = t536;
                        x0 = d537;
    COW_AT(100200a8)
                        d538 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032a3b8u)));
                        wrf32(sp0 - 0x1a8u, (float)(double)(float)d538);
                        g->eax = rd32(arg1);
                        g->edx = edx;
                        t539 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t540 = cow_thiscall(g, rd32(t539 + 0x1c0u), arg1, 0);
                        t541 = g->edx;
                        eax = t540;
                        edx = t541;
    COW_AT(100200bc)
                        d542 = fr(g, (double)rdf32(sp0 - 0x1a8u) - (double)rdf32(eax + 4u));
                        if (!(d542 < (double)rdf32(COW_IMG(0x1032a3b4u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d542, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
                            ecx = 0u;
                            x0 = d542;
                            goto L_100200eb;
                        }
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d542, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
                        ecx = 0u;
                        x0 = d542;
L_100200d2: ;
    COW_AT(100200d2)
                        if ((int32_t)ecx >= 100) goto L_100200eb;
    COW_AT(100200d7)
                        d543 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032a3b0u)));
                        if (d543 < (double)rdf32(COW_IMG(0x1032a3b4u)))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d543, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
                            ecx = ecx + 1u;
                            x0 = d543;
                            goto L_100200d2;
                        }
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d543, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
                        ecx = ecx + 1u;
                        x0 = d543;
L_100200eb: ;
    COW_AT(100200eb)
                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u;
                            goto L_10020115;
                        }
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u;
L_100200fa: ;
    COW_AT(100200fa)
                        if ((int32_t)ecx >= 100) goto L_10020115;
    COW_AT(100200ff)
                        d544 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032a3b0u)));
                        if ((cow_fsw(g, d544, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u) == 0u)
                        {
                            eax = cow_fsw(g, d544, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u;
                            ecx = ecx + 1u;
                            x0 = d544;
                            goto L_100200fa;
                        }
                        eax = cow_fsw(g, d544, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u;
                        ecx = ecx + 1u;
                        x0 = d544;
L_10020115: ;
    COW_AT(10020115)
                        if (!(fabs(x0) < (double)rdf32(COW_IMG(0x1032a3e0u))))
                        {
    COW_AT(1002013f)
                            if (rd32(COW_IMG(0x10456d88u)) == 0u)
                            {
                                eax = rd32(COW_IMG(0x10456d88u));
                            }
                            else
                            {
                                eax = rd32(COW_IMG(0x10456d88u));
    COW_AT(10020148)
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t546 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                                t547 = g->ecx;
                                t548 = g->edx;
                                d549 = cow_take_float(g);
                                eax = t546;
                                ecx = t547;
                                edx = t548;
                                x0 = d549;
    COW_AT(1002014d)
                                g->edx = edx;
                                fpush(g, x0);
                                g->esp = sp0 - 0x1f0u;
                                t550 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t551 = g->edx;
                                eax = t550;
                                edx = t551;
    COW_AT(10020152)
                                if ((int32_t)eax > 0)
                                {
    COW_AT(10020156)
                                    ebp = eax;
L_10020158: ;
    COW_AT(10020158)
                                    wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                                    g->eax = sp0 - 0x144u;
                                    g->edx = sp0 - 0x1b8u;
                                    g->esp = sp0 - 0x1f0u;
                                    t552 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x144u, sp0 - 0x1b8u, sp0 - 0x184u);
                                    t553 = g->edx;
                                    eax = t552;
                                    edx = t553;
    COW_AT(1002016f)
                                    wr32(sp0 - 0x200u, 0x3e000000u);
                                    wr32(sp0 - 0x204u, sp0 - 0x144u);
                                    g->ecx = sp0 - 0x144u;
                                    g->esp = sp0 - 0x1fcu;
                                    cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x144u, 0x3e000000u);
                                    t554 = g->ecx;
                                    ecx = t554;
    COW_AT(10020181)
                                    wr32(sp0 - 0x208u, sp0 - 0x144u);
                                    wr32(sp0 - 0x20cu, sp0 - 0x184u);
                                    g->eax = sp0 - 0x184u;
                                    g->edx = sp0 - 0x144u;
                                    g->esp = sp0 - 0x204u;
                                    t555 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x184u, sp0 - 0x144u);
                                    t556 = g->edx;
                                    eax = t555;
                                    edx = t556;
    COW_AT(10020196)
                                    if (ebp != 1u)
                                    {
                                        ebp = ebp - 1u;
                                        goto L_10020158;
                                    }
                                }
    COW_AT(1002019c)
                                wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t557 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x184u);
                                t558 = g->edx;
                                eax = t557;
                                edx = t558;
    COW_AT(100201a8)
                                wr32(COW_IMG(0x10456d88u), rd32(COW_IMG(0x10456d88u)) - 1u);
                            }
    COW_AT(100201ae)
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                            t559 = g->edx;
                            edx = t559;
    COW_AT(100201ba)
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs(x0), (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
    COW_AT(10020124)
                            wr32(COW_IMG(0x10456d88u), 0u);
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                            t545 = g->edx;
                            edx = t545;
    COW_AT(1002013a)
                        }
                    }
                }
    COW_AT(10020773)
                t728 = rd32(sp0 - 0x118u);
                wr32(sp0 - 0x1f4u, t728);
                g->eax = rd32(arg1);
                t729 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t730 = cow_thiscall(g, rd32(t729 + 0x334u), arg1, 1, t728);
                t731 = g->ecx;
                eax = t730;
                ecx = t731;
    COW_AT(10020785)
                wr32(sp0 - 0x1f4u, edi + 0x44u);
                wr32(sp0 - 0x1f8u, sp0 - 0x114u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x1f0u;
                t732 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x114u, edi + 0x44u);
                t733 = g->ecx;
                d734 = cow_take_float(g);
                eax = t732;
                ecx = t733;
                esi = edi + 0x44u;
                x0 = d734;
    COW_AT(10020796)
                if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) == 0u)
                {
                    ebp = rd32(sp0 - 0x1f0u);
                    goto L_100207b6;
                }
                ebp = rd32(sp0 - 0x1f0u);
    COW_AT(100207a9)
                if ((int32_t)rd32(COW_IMG(0x10456d80u)) <= 0)
                {
                    eax = rd32(COW_IMG(0x10456d80u));
                    goto L_10020a67;
                }
L_100207b6: ;
    COW_AT(100207b6)
                wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
                wr32(sp0 - 0x1f4u, 0x41200000u);
                t735 = rd32(edi + 0x4cu);
                wr32(sp0 - 0x1f8u, t735);
                t736 = rd32(edi + 0x48u);
                wr32(sp0 - 0x1fcu, t736);
                wr32(sp0 - 0x200u, rd32(esi));
                g->eax = rd32(esi);
                g->edx = t736;
                t737 = rd32(esi);
                g->esp = sp0 - 0x1ecu;
                t738 = cow_thiscall(g, COW_IMG(0x10181210u), rd32(COW_IMG(0x10631f24u)), 5, t737, t736, t735, 0x41200000u, sp0 - 0x1d8u);
                t739 = g->edx;
                eax = t738;
                edx = t739;
    COW_AT(100207d6)
                if ((uint8_t)eax != 1u) goto L_100207fd;
    COW_AT(100207da)
                d740 = fr(g, (double)rdf32(sp0 - 0x1d8u) - (double)rdf32(COW_IMG(0x1032a398u)));
                d741 = (double)rdf32(edi + 0x48u);
                if (!(d740 < d741))
                {
                    x0 = d740;
                    goto L_100207fb;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d740, d741, 1u);
                x0 = d740;
    COW_AT(100207ee)
                wrf32(edi + 0x48u, (float)x0);
                wr32(sp0 - 0x1f0u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t742 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, esi);
                t743 = g->edx;
                eax = t742;
                edx = t743;
    COW_AT(100207f9)
L_10020846: ;
    COW_AT(10020846)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t752 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xfcu, 0);
                t753 = g->edx;
                eax = t752;
                edx = t753;
    COW_AT(10020852)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t754 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x9cu, 0);
                t755 = g->edx;
                eax = t754;
                edx = t755;
    COW_AT(1002085e)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t756 = cow_thiscall(g, COW_IMG(0x10021c10u), edi, 0);
                t757 = g->edx;
                eax = t756;
                edx = t757;
    COW_AT(10020865)
                wr32(sp0 - 0x1f0u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x1ecu;
                t758 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0xfcu, 1, eax);
                eax = t758;
    COW_AT(10020872)
                wr32(sp0 - 0x1f0u, sp0 - 0xfcu);
                wr32(sp0 - 0x134u, 0xbe2e147bu);
                wr32(sp0 - 0x130u, 0u);
                wr32(sp0 - 0x12cu, 0u);
                wr32(sp0 - 0x128u, 0x3e2e147bu);
                wr32(sp0 - 0x124u, 0u);
                wr32(sp0 - 0x120u, 0u);
                g->eax = eax;
                g->edx = sp0 - 0xfcu;
                g->esp = sp0 - 0x1ecu;
                t759 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x9cu, 1, sp0 - 0xfcu);
                t760 = g->edx;
                eax = t759;
                edx = t760;
    COW_AT(100208c8)
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x9cu, 0);
                t761 = g->edx;
                edx = t761;
    COW_AT(100208d4)
                wr32(sp0 - 0x1f0u, sp0 - 0x134u);
                g->eax = sp0 - 0x134u;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t762 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x134u);
                t763 = g->edx;
                eax = t762;
                edx = t763;
    COW_AT(100208e8)
                wr32(sp0 - 0x1f0u, sp0 - 0x128u);
                g->esp = sp0 - 0x1ecu;
                cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x128u);
    COW_AT(100208fc)
                wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                wr32(sp0 - 0x1f4u, sp0 - 0x134u);
                wr32(sp0 - 0x1f8u, sp0 - 0x128u);
                t764 = rd32(COW_IMG(0x10631f24u));
                wr8(sp0 - 0x1d9u, 0u);
                g->esp = sp0 - 0x1ecu;
                t765 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x134u, t764, g->edx, 0, 3, sp0 - 0x128u, sp0 - 0x134u, sp0 - 0x1b8u);
                eax = t765;
                ebx = ebx & 0xffffff00u;
    COW_AT(10020923)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(10020927)
                    wr8(sp0 - 0x1d9u, 1u);
                }
    COW_AT(1002092c)
                wr32(sp0 - 0x1f0u, sp0 - 0x184u);
                wr32(sp0 - 0x1f4u, sp0 - 0x128u);
                wr32(sp0 - 0x1f8u, sp0 - 0x134u);
                g->edx = sp0 - 0x184u;
                g->esp = sp0 - 0x1ecu;
                t766 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x128u, rd32(COW_IMG(0x10631f24u)), g->edx, 0, 3, sp0 - 0x134u, sp0 - 0x128u, sp0 - 0x184u);
                t767 = g->edx;
                eax = t766;
                edx = t767;
    COW_AT(1002094c)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(10020950)
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
    COW_AT(10020952)
                if (rd8(sp0 - 0x1d9u) != 1u) goto L_100209eb;
    COW_AT(1002095d)
                if ((uint8_t)ebx != 1u) goto L_10020993;
    COW_AT(10020962)
                d768 = (double)rdf32(sp0 - 0x1b8u);
                d769 = (double)rdf32(sp0 - 0x184u);
                if (d768 != d769)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d768, d769, 0u);
                    goto L_10020993;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d768, d769, 0u);
    COW_AT(10020971)
                d770 = (double)rdf32(sp0 - 0x1b4u);
                d771 = (double)rdf32(sp0 - 0x180u);
                if (d770 != d771)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d770, d771, 0u);
                    goto L_10020993;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d770, d771, 0u);
    COW_AT(10020980)
                d772 = (double)rdf32(sp0 - 0x1b0u);
                d773 = (double)rdf32(sp0 - 0x17cu);
                if (d772 == d773)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d772, d773, 0u);
                    goto L_10020a48;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d772, d773, 0u);
L_10020993: ;
    COW_AT(10020993)
                wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                wr32(sp0 - 0x1a4u, 0u);
                wr32(sp0 - 0x1a0u, 0u);
                wr32(sp0 - 0x19cu, 0u);
                g->edx = sp0 - 0x1b8u;
                g->esp = sp0 - 0x1ecu;
                cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x1b8u);
                t774 = g->edx;
                edx = t774;
    COW_AT(100209bc)
                d775 = fr(g, cow_bits2f(0u) + (double)rdf32(sp0 - 0x1b8u));
                wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                d776 = fr(g, d775 + (double)rdf32(COW_IMG(0x1032a398u)));
                wrf32(sp0 - 0x1a4u, (float)(double)(float)d776);
                g->eax = sp0 - 0x1a4u;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t777 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x1a4u);
                t778 = g->edx;
                eax = t777;
                edx = t778;
    COW_AT(100209df)
                wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t779 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1a4u);
                t780 = g->edx;
                eax = t779;
                edx = t780;
L_100209eb: ;
    COW_AT(100209eb)
                if ((uint8_t)ebx == 1u)
                {
    COW_AT(100209f0)
                    wr32(sp0 - 0x1f0u, sp0 - 0x184u);
                    wr32(sp0 - 0x1a4u, 0u);
                    wr32(sp0 - 0x1a0u, 0u);
                    wr32(sp0 - 0x19cu, 0u);
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1ecu;
                    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x184u);
                    t781 = g->edx;
                    edx = t781;
    COW_AT(10020a19)
                    d782 = fr(g, (double)rdf32(COW_IMG(0x1032a398u)) - (double)rdf32(sp0 - 0x184u));
                    wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                    d783 = (double)(float)fr(g, cow_bits2f(0u) - d782);
                    wrf32(sp0 - 0x1a4u, (float)d783);
                    g->eax = sp0 - 0x1a4u;
                    g->edx = edx;
                    g->esp = sp0 - 0x1ecu;
                    t784 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x1a4u);
                    t785 = g->edx;
                    eax = t784;
                    edx = t785;
    COW_AT(10020a3c)
                    wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1ecu;
                    t786 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1a4u);
                    t787 = g->edx;
                    eax = t786;
                    edx = t787;
                }
L_10020a48: ;
    COW_AT(10020a48)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t788 = cow_thiscall(g, COW_IMG(0x10021c10u), edi, 0);
                t789 = g->edx;
                eax = t788;
                edx = t789;
    COW_AT(10020a4f)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t790 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                t791 = g->edx;
                eax = t790;
                edx = t791;
    COW_AT(10020a5b)
                g->eax = eax;
                g->ecx = sp0 - 0xfcu;
                g->esp = sp0 - 0x1ecu;
                t792 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                t793 = g->ecx;
                eax = t792;
                ecx = t793;
L_10020a67: ;
    COW_AT(10020a67)
                if (!((double)rdf32(COW_IMG(0x10456d7cu)) <= (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    ebx = rd32(sp0 - 0x1ecu);
                }
                else
                {
                    ebx = rd32(sp0 - 0x1ecu);
    COW_AT(10020a7f)
                    wr32(sp0 - 0x1ecu, sp0 - 0xbcu);
                    wr32(sp0 - 0x1f0u, esi);
                    wr32(sp0 - 0x1f4u, sp0 - 0x108u);
                    t794 = rd32(COW_IMG(0x10631f24u));
                    g->esp = sp0 - 0x1e8u;
                    t795 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x108u, t794, g->edx, 0, 3, sp0 - 0x108u, esi, sp0 - 0xbcu);
                    t796 = g->ecx;
                    eax = t795;
                    ecx = t796;
    COW_AT(10020a9b)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(10020aa3)
                        wr32(sp0 - 0x1ecu, esi);
                        wr32(sp0 - 0x1f0u, sp0 - 0xbcu);
                        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                        g->ecx = sp0 - 0xbcu;
                        g->edx = sp0 - 0x1b8u;
                        g->esp = sp0 - 0x1e8u;
                        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1b8u, sp0 - 0xbcu, esi);
                        t797 = g->ecx;
                        t798 = g->edx;
                        ecx = t797;
                        edx = t798;
    COW_AT(10020ab6)
                        wr32(sp0 - 0x1f8u, esi);
                        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
                        g->eax = sp0 - 0xbcu;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f4u;
                        t799 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0xbcu, esi);
                        t800 = g->ecx;
                        t801 = g->edx;
                        d802 = cow_take_float(g);
                        eax = t799;
                        ecx = t800;
                        edx = t801;
                        x0 = d802;
    COW_AT(10020ac4)
                        wrf32(sp0 - 0x1d8u, (float)(double)(float)x0);
                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            loc_1d8_f = (double)(float)x0;
    COW_AT(10020ada)
                            d803 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_1d8_f);
                            wr32(sp0 - 0x1ecu, ecx);
                            wrf32(sp0 - 0x1ecu, (float)(double)(float)d803);
                            wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                            g->eax = eax;
                            g->ecx = sp0 - 0x1b8u;
                            g->esp = sp0 - 0x1e8u;
                            t804 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1b8u, cow_f2bits((double)(float)d803));
                            t805 = g->ecx;
                            eax = t804;
                            ecx = t805;
    COW_AT(10020af2)
                            d806 = fr(g, (double)rdf32(sp0 - 0x1d8u) + (double)rdf32(COW_IMG(0x1032a39cu)));
                            wrf32(sp0 - 0x1ecu, (float)(double)(float)d806);
                            wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                            g->ecx = ecx;
                            g->edx = sp0 - 0x1b8u;
                            g->esp = sp0 - 0x1e8u;
                            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1b8u, cow_f2bits((double)(float)d806));
                            t807 = g->ecx;
                            t808 = g->edx;
                            ecx = t807;
                            edx = t808;
    COW_AT(10020b0c)
                        }
    COW_AT(10020b0f)
                        wr32(sp0 - 0x1ecu, esi);
                        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                        g->eax = sp0 - 0x1b8u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1e8u;
                        t809 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1b8u, esi);
                        t810 = g->edx;
                        eax = t809;
                        edx = t810;
    COW_AT(10020b1a)
                        wr32(sp0 - 0x1ecu, sp0 - 0x1b8u);
                        g->eax = eax;
                        g->esp = sp0 - 0x1e8u;
                        t811 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1b8u);
                        t812 = g->ecx;
                        eax = t811;
                        ecx = t812;
                    }
                }
    COW_AT(10020b29)
                wr32(sp0 - 0x1ecu, esi);
                wr32(sp0 - 0x1f0u, sp0 - 0x114u);
                g->eax = eax;
                g->edx = sp0 - 0x114u;
                g->esp = sp0 - 0x1e8u;
                t813 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x114u, esi);
                t814 = g->edx;
                d815 = cow_take_float(g);
                eax = t813;
                edx = t814;
                x0 = d815;
    COW_AT(10020b37)
                if (x0 < (double)rdf32(COW_IMG(0x1032a1a8u)))
                {
    COW_AT(10020b47)
                    wr32(sp0 - 0x1ecu, sp0 - 0x114u);
                    g->eax = sp0 - 0x114u;
                    g->edx = edx;
                    g->esp = sp0 - 0x1e8u;
                    t816 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x114u);
                    t817 = g->edx;
                    eax = t816;
                    edx = t817;
    COW_AT(10020b56)
                    g->edx = edx;
                    g->esp = sp0 - 0x1e8u;
                    cow_thiscall(g, COW_IMG(0x10021c10u), edi, 0);
                    t818 = g->edx;
                    edx = t818;
                }
    COW_AT(10020b5d)
                if ((int32_t)rd32(COW_IMG(0x10456d80u)) <= 0)
                {
                    eax = rd32(COW_IMG(0x10456d80u));
                }
                else
                {
                    eax = rd32(COW_IMG(0x10456d80u));
    COW_AT(10020b66)
                    wr32(COW_IMG(0x10456d80u), eax - 1u);
                    eax = eax - 1u;
                }
    COW_AT(10020b6c)
                d819 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(edi + 0x54u));
                if (!(d819 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d819, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = d819;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d819, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = d819;
    COW_AT(10020b7f)
                    x0 = -x0;
                }
    COW_AT(10020b81)
                wrf32(COW_IMG(0x10456d78u), (float)x0);
                g->eax = eax;
                g->esp = sp0 - 0x1e8u;
                t820 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                eax = t820;
                loc_1e4 = rd32(sp0 - 0x1e4u);
                loc_1e8 = rd32(sp0 - 0x1e8u);
            }
        }
    }
L_10020b93: ;
    COW_AT(10020b93)
    g->ebx = ebx;
    g->esi = loc_1e4;
    g->edi = loc_1e8;
    g->ebp = ebp;
    return eax;
L_1001f0cf: ;
    COW_AT(1001f0cf)
    d76 = (double)rdf32(sp0 - 0x1e0u);
    if (d76 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    else
    {
    COW_AT(1001f0e0)
        wr32(COW_IMG(0x10456d74u), 0xau);
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    goto L_1001f0e6;
L_1001f130: ;
    COW_AT(1001f130)
    d87 = (double)rdf32(sp0 - 0x1a8u);
    if (d87 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d87, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d87;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d87, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d87;
    COW_AT(1001f141)
        wr32(COW_IMG(0x10456d74u), 0xau);
    }
    goto L_1001f147;
L_1001f237: ;
    COW_AT(1001f237)
    d114 = (double)rdf32(sp0 - 0x1e0u);
    if (d114 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d114, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d114, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001f248)
        wr32(COW_IMG(0x10456d74u), 0xau);
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    goto L_1001f24e;
L_1001f3e7: ;
    COW_AT(1001f3e7)
    wr32(sp0 - 0x1f4u, 1u);
    g->eax = eax;
    g->edx = rd32(arg1);
    t170 = rd32(arg1);
    g->esp = sp0 - 0x1f0u;
    t171 = cow_thiscall(g, rd32(t170 + 0x3c8u), arg1, 1, 1u);
    t172 = g->ecx;
    t173 = g->edx;
    eax = t171;
    ecx = t172;
    edx = t173;
    COW_AT(1001f3f3)
    if (eax == 0u)
    {
    COW_AT(1001f402)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        t175 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t176 = g->edx;
        eax = t175;
        edx = t176;
    COW_AT(1001f407)
        t177 = rd32(eax + 0x54u);
        wr32(sp0 - 0x150u, t177);
        loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
        loc_150 = t177;
    }
    else
    {
    COW_AT(1001f3f7)
        d174 = fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax));
        wrf32(sp0 - 0x1e0u, (float)(double)(float)d174);
        loc_1e0_f = (double)(float)d174;
        loc_150 = rd32(sp0 - 0x150u);
    }
    COW_AT(1001f411)
    if (rd32(arg1 + 0x768u) == 0u)
    {
        eax = rd32(arg1 + 0x768u);
    }
    else
    {
        eax = rd32(arg1 + 0x768u);
    COW_AT(1001f41b)
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        t178 = cow_call_regs(g, COW_IMG(0x100223b0u), eax, eax + 0x878u, g->edx, 1, 0);
        t179 = g->edx;
        d180 = cow_take_float(g);
        eax = t178;
        edx = t179;
        x0 = d180;
    COW_AT(1001f426)
        d181 = fr(g, x0 + (double)rdf32(sp0 - 0x1e0u));
        wrf32(sp0 - 0x1e0u, (float)(double)(float)d181);
        loc_150 = rd32(sp0 - 0x150u);
    }
    goto L_1001f42e;
L_1001f54a: ;
    COW_AT(1001f54a)
    wr32(sp0 - 0x1f4u, 0u);
    g->eax = eax;
    g->edx = rd32(arg1);
    t218 = rd32(arg1);
    g->esp = sp0 - 0x1f0u;
    t219 = cow_thiscall(g, rd32(t218 + 0x3c8u), arg1, 1, 0u);
    t220 = g->ecx;
    t221 = g->edx;
    eax = t219;
    ecx = t220;
    edx = t221;
    COW_AT(1001f556)
    if (eax != 0u)
    {
        edi = eax;
    COW_AT(1001f55c)
        g->eax = rd32(arg1);
        g->edx = edx;
        t222 = rd32(arg1);
        g->esp = sp0 - 0x1f0u;
        t223 = cow_thiscall(g, rd32(t222 + 0x1bcu), arg1, 0);
        t224 = g->ecx;
        t225 = g->edx;
        eax = t223;
        ecx = t224;
        edx = t225;
    COW_AT(1001f566)
        d226 = fr(g, (double)rdf32(eax + 4u) - fr(g, fr(g, (double)rdf32(edi + 4u) - fr(g, (double)rdf32(edi) * (double)rdf32(COW_IMG(0x10329a08u)))) * (double)rdf32(COW_IMG(0x10329a30u))));
        wrf32(sp0 - 0x150u, (float)(double)(float)d226);
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    COW_AT(1001f583)
    edi = rd32(sp0 - 0x1d8u);
    goto L_1001f587;
L_1001f7c7: ;
    COW_AT(1001f7c7)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t287 = g->ecx;
    t288 = g->edx;
    d289 = cow_take_float(g);
    ecx = t287;
    edx = t288;
    x0 = d289;
    COW_AT(1001f7cc)
    d290 = fr(g, x0 + (double)rdf32(sp0 - 0x1e0u));
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d290);
    wr32(sp0 - 0x1f4u, cow_f2bits((double)(float)d290));
    eax = cow_f2bits((double)(float)d290);
    loc_1f4 = cow_f2bits((double)(float)d290);
    goto L_1001f94f;
L_1001f7de: ;
    COW_AT(1001f7de)
    wr32(sp0 - 0x1f4u, 0xffffffffu);
    wr32(sp0 - 0x1f8u, 4u);
    wr32(sp0 - 0x1fcu, 0x4fu);
    wr32(sp0 - 0x200u, 0x3fu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x1e4u;
    t291 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x4fu, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
    t292 = g->ecx;
    t293 = g->edx;
    eax = t291;
    ecx = t292;
    edx = t293;
    COW_AT(1001f7eb)
    if ((uint8_t)eax == 0u) goto L_1001f812;
    COW_AT(1001f7f2)
    wr32(sp0 - 0x1f4u, 0xffffffffu);
    wr32(sp0 - 0x1f8u, 4u);
    wr32(sp0 - 0x1fcu, 0x50u);
    wr32(sp0 - 0x200u, 0x3fu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x1e4u;
    t294 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x50u, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
    t295 = g->ecx;
    t296 = g->edx;
    eax = t294;
    ecx = t295;
    edx = t296;
    COW_AT(1001f7ff)
    if ((uint8_t)eax == 0u) goto L_1001f812;
    COW_AT(1001f806)
    wr8(COW_IMG(0x10456d84u), 1u);
    goto L_1001f968;
L_1001f812: ;
    COW_AT(1001f812)
    wr32(sp0 - 0x1f4u, 0xffffffffu);
    wr32(sp0 - 0x1f8u, 4u);
    wr32(sp0 - 0x1fcu, 0x4fu);
    wr32(sp0 - 0x200u, 0x3fu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x1e4u;
    t297 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x4fu, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
    t298 = g->ecx;
    t299 = g->edx;
    eax = t297;
    ecx = t298;
    edx = t299;
    COW_AT(1001f81f)
    if ((uint8_t)eax == 0u) goto L_1001f862;
    COW_AT(1001f826)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t300 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t301 = g->ecx;
    t302 = g->edx;
    d303 = cow_take_float(g);
    eax = t300;
    ecx = t301;
    edx = t302;
    x0 = d303;
    COW_AT(1001f82b)
    wrf32(sp0 - 0x1e0u, (float)(double)(float)x0);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t304 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t305 = g->ecx;
    t306 = g->edx;
    d307 = cow_take_float(g);
    eax = t304;
    ecx = t305;
    edx = t306;
    x0 = d307;
    COW_AT(1001f834)
    d308 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e8u))) + (double)rdf32(sp0 - 0x1e0u));
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d308);
    if ((cow_fsw(g, d308, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d308, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d308, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u;
    COW_AT(1001f855)
        wr32(sp0 - 0x1e0u, 0x44610000u);
    }
L_1001f945: ;
    COW_AT(1001f945)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t354 = cow_stdcall(g, COW_IMG(0x1025e250u), 0);
    t355 = g->edx;
    eax = t354;
    edx = t355;
    loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
L_1001f94a: ;
    COW_AT(1001f94a)
    wr32(sp0 - 0x1f4u, cow_f2bits(loc_1e0_f));
    ecx = cow_f2bits(loc_1e0_f);
    loc_1f4 = cow_f2bits(loc_1e0_f);
    goto L_1001f94f;
L_1001f862: ;
    COW_AT(1001f862)
    wr32(sp0 - 0x1f4u, 0xffffffffu);
    wr32(sp0 - 0x1f8u, 4u);
    wr32(sp0 - 0x1fcu, 0x50u);
    wr32(sp0 - 0x200u, 0x3fu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x1e4u;
    t309 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x50u, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
    t310 = g->ecx;
    t311 = g->edx;
    eax = t309;
    ecx = t310;
    edx = t311;
    COW_AT(1001f86f)
    if ((uint8_t)eax == 0u) goto L_1001f8b6;
    COW_AT(1001f876)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t312 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t313 = g->ecx;
    t314 = g->edx;
    d315 = cow_take_float(g);
    eax = t312;
    ecx = t313;
    edx = t314;
    x0 = d315;
    COW_AT(1001f87b)
    wrf32(sp0 - 0x1e0u, (float)(double)(float)x0);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t316 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t317 = g->ecx;
    t318 = g->edx;
    d319 = cow_take_float(g);
    eax = t316;
    ecx = t317;
    edx = t318;
    x0 = d319;
    COW_AT(1001f884)
    d320 = fr(g, (double)rdf32(sp0 - 0x1e0u) - fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e8u))));
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d320);
    if (!(d320 < (double)rdf32(COW_IMG(0x1032a3d4u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d320, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d320, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
    COW_AT(1001f89f)
        wr32(sp0 - 0x1e0u, 0x43720000u);
    }
    COW_AT(1001f8a7)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x1f0u;
    t321 = cow_stdcall(g, COW_IMG(0x1025e250u), 0);
    t322 = g->ecx;
    eax = t321;
    ecx = t322;
    COW_AT(1001f8ac)
    t323 = rd32(sp0 - 0x1e0u);
    wr32(sp0 - 0x1f4u, t323);
    edx = t323;
    loc_1f4 = t323;
    goto L_1001f94f;
L_1001f8b6: ;
    COW_AT(1001f8b6)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t324 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t325 = g->ecx;
    t326 = g->edx;
    eax = t324;
    ecx = t325;
    edx = t326;
    COW_AT(1001f8bb)
    if ((uint8_t)eax == 0u) goto L_1001f968;
    COW_AT(1001f8c3)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t327 = cow_stdcall(g, COW_IMG(0x1025e220u), 0);
    t328 = g->ecx;
    t329 = g->edx;
    eax = t327;
    ecx = t328;
    edx = t329;
    COW_AT(1001f8c8)
    if ((int32_t)eax <= 0) goto L_1001f90b;
    COW_AT(1001f8cc)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t330 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t331 = g->ecx;
    t332 = g->edx;
    d333 = cow_take_float(g);
    eax = t330;
    ecx = t331;
    edx = t332;
    x0 = d333;
    COW_AT(1001f8d1)
    wrf32(sp0 - 0x1e0u, (float)(double)(float)x0);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t334 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t335 = g->ecx;
    t336 = g->edx;
    d337 = cow_take_float(g);
    eax = t334;
    ecx = t335;
    edx = t336;
    x0 = d337;
    COW_AT(1001f8da)
    d338 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e8u))) + (double)rdf32(sp0 - 0x1e0u));
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d338);
    if ((cow_fsw(g, d338, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d338, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u;
    COW_AT(1001f8f7)
        wr32(sp0 - 0x1e0u, 0x44610000u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        cow_stdcall(g, COW_IMG(0x1025e250u), 0);
        t339 = g->ecx;
        t340 = g->edx;
        ecx = t339;
        edx = t340;
    }
    COW_AT(1001f904)
    t341 = rd32(sp0 - 0x1e0u);
    wr32(sp0 - 0x1f4u, t341);
    eax = t341;
    loc_1f4 = t341;
    goto L_1001f94f;
L_1001f90b: ;
    COW_AT(1001f90b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t342 = cow_stdcall(g, COW_IMG(0x1025e220u), 0);
    t343 = g->ecx;
    t344 = g->edx;
    eax = t342;
    ecx = t343;
    edx = t344;
    COW_AT(1001f910)
    if ((int32_t)eax >= 0) goto L_1001f968;
    COW_AT(1001f914)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t345 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t346 = g->ecx;
    t347 = g->edx;
    d348 = cow_take_float(g);
    eax = t345;
    ecx = t346;
    edx = t347;
    x0 = d348;
    COW_AT(1001f919)
    wrf32(sp0 - 0x1e0u, (float)(double)(float)x0);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t349 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t350 = g->ecx;
    t351 = g->edx;
    d352 = cow_take_float(g);
    eax = t349;
    ecx = t350;
    edx = t351;
    x0 = d352;
    COW_AT(1001f922)
    d353 = fr(g, (double)rdf32(sp0 - 0x1e0u) - fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e8u))));
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d353);
    if (!(d353 < (double)rdf32(COW_IMG(0x1032a3d4u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d353, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
        loc_1e0_f = (double)(float)d353;
        goto L_1001f94a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d353, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
    COW_AT(1001f93d)
    wr32(sp0 - 0x1e0u, 0x43720000u);
    goto L_1001f945;
L_1001fb25: ;
    COW_AT(1001fb25)
    if (rd32(COW_IMG(0x10456d8cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456d8cu));
        loc_180 = rd32(sp0 - 0x180u);
        goto L_1001fbbc;
    }
    goto L_1001fb32;
L_1001fbaf: ;
    COW_AT(1001fbaf)
    if ((int32_t)rd32(COW_IMG(0x10456d8cu)) > 0)
    {
        eax = rd32(COW_IMG(0x10456d8cu));
        loc_180 = 0u;
        goto L_1001fcff;
    }
    eax = rd32(COW_IMG(0x10456d8cu));
    loc_180 = 0u;
    goto L_1001fbbc;
L_1001fd2e: ;
    COW_AT(1001fd2e)
    d454 = (double)rdf32(sp0 - 0x1e0u);
    if ((cow_fsw(g, d454, (double)rdf32(COW_IMG(0x1032a3e8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d454, (double)rdf32(COW_IMG(0x1032a3e8u)), 0u) & 0x100u;
        goto L_1001fd79;
    }
    COW_AT(1001fd41)
    d455 = fr(g, (double)rdf32(sp0 - 0x1e0u) - (double)rdf32(COW_IMG(0x1032a3e8u)));
    wr32(sp0 - 0x1f4u, ecx);
    x0 = fr(g, d455 * (double)rdf32(COW_IMG(0x1032a3c4u)));
    goto L_1001fd52;
L_1001ff49: ;
    COW_AT(1001ff49)
    if (rd32(COW_IMG(0x10456d74u)) != 0u) goto L_1001ff74;
    COW_AT(1001ff52)
    if ((int8_t)rd8(edi + 0xf0u) < 4) goto L_1001ff74;
    COW_AT(1001ff5b)
    wr32(COW_IMG(0x10456d70u), 1u);
    wr32(COW_IMG(0x10456d74u), 0u);
    ebx = 0u;
    goto L_1001fffa;
L_1001ff74: ;
    COW_AT(1001ff74)
    wr32(sp0 - 0x1f4u, ebp);
    wr32(sp0 - 0x1f8u, sp0 - 0x164u);
    wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
    g->eax = sp0 - 0x1c8u;
    g->edx = sp0 - 0x164u;
    g->esp = sp0 - 0x1f0u;
    t503 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, sp0 - 0x164u, ebp);
    t504 = g->edx;
    eax = t503;
    edx = t504;
    COW_AT(1001ff87)
    wr32(sp0 - 0x200u, ebp);
    wr32(sp0 - 0x204u, sp0 - 0x164u);
    g->eax = eax;
    g->ecx = sp0 - 0x164u;
    g->edx = edx;
    g->esp = sp0 - 0x1fcu;
    t505 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x164u, ebp);
    t506 = g->ecx;
    t507 = g->edx;
    d508 = cow_take_float(g);
    eax = t505;
    ecx = t506;
    edx = t507;
    x0 = d508;
    COW_AT(1001ff95)
    wrf32(sp0 - 0x1d8u, (float)(double)(float)x0);
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_1d8_f = (double)(float)x0;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_1d8_f = (double)(float)x0;
    COW_AT(1001ffab)
        d509 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_1d8_f);
        wr32(sp0 - 0x1f4u, ecx);
        wrf32(sp0 - 0x1f4u, (float)(double)(float)d509);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        g->ecx = ecx;
        g->edx = sp0 - 0x1c8u;
        g->esp = sp0 - 0x1f0u;
        cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits((double)(float)d509));
        t510 = g->ecx;
        t511 = g->edx;
        ecx = t510;
        edx = t511;
    COW_AT(1001ffc3)
        d512 = fr(g, (double)rdf32(sp0 - 0x1d8u) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x1f4u, (float)(double)(float)d512);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        g->eax = sp0 - 0x1c8u;
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        t513 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits((double)(float)d512));
        t514 = g->edx;
        eax = t513;
        edx = t514;
    COW_AT(1001ffdd)
        loc_1d8_f = (double)rdf32(sp0 - 0x1d8u);
    }
    COW_AT(1001ffe0)
    wr32(sp0 - 0x1f4u, ebp);
    wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
    g->eax = eax;
    g->esp = sp0 - 0x1f0u;
    t515 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, ebp);
    eax = t515;
    COW_AT(1001ffeb)
    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
    g->edx = sp0 - 0x1c8u;
    g->esp = sp0 - 0x1f0u;
    cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
    t516 = g->ecx;
    t517 = g->edx;
    ecx = t516;
    edx = t517;
    ebx = 0u;
    goto L_1001fffa;
L_10020352: ;
    COW_AT(10020352)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100203c5;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(10020367)
    g->edx = edx;
    t605 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x1f0u;
    t606 = cow_call_regs(g, COW_IMG(0x10157640u), eax, t605, g->edx, 1, 0);
    t607 = g->ecx;
    t608 = g->edx;
    eax = t606;
    ecx = t607;
    edx = t608;
    COW_AT(10020372)
    if (eax == 0u) goto L_100203c5;
    edi = eax;
    COW_AT(10020378)
    wr32(sp0 - 0x1f4u, COW_IMG(0x10330ebcu));
    g->eax = eax;
    g->esp = sp0 - 0x1f0u;
    t609 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, edx, 1, COW_IMG(0x10330ebcu));
    t610 = g->ecx;
    t611 = g->edx;
    eax = t609;
    ecx = t610;
    edx = t611;
    COW_AT(10020384)
    if ((uint8_t)eax == 0u) goto L_100203c5;
    COW_AT(10020388)
    wr32(sp0 - 0x1f4u, 1u);
    g->eax = rd32(edi);
    g->edx = edx;
    t612 = rd32(edi);
    g->esp = sp0 - 0x1f0u;
    t613 = cow_thiscall(g, rd32(t612 + 0x3c8u), edi, 1, 1u);
    t614 = g->ecx;
    t615 = g->edx;
    eax = t613;
    ecx = t614;
    edx = t615;
    COW_AT(10020394)
    if (eax == 0u) goto L_100203c5;
    COW_AT(10020398)
    d616 = fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + 0xcu));
    d617 = fr(g, (double)rdf32(eax + 0x10u) - (double)rdf32(eax + 0x14u));
    wrf32(sp0 - 0x1d4u, (float)(double)(float)d616);
    if ((cow_fsw(g, d617, (double)(float)d616, 1u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d617, (double)(float)d616, 1u) & 0x4100u;
        x0 = d617;
    }
    else
    {
        eax = cow_fsw(g, d617, (double)(float)d616, 1u) & 0x4100u;
        loc_1d4_f = (double)(float)d616;
        x0 = d617;
    COW_AT(100203b5)
        x0 = loc_1d4_f;
    }
    COW_AT(100203bb)
    x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x10456dacu)));
    goto L_100203c1;
L_10020446: ;
    COW_AT(10020446)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_1cc_f = (double)rdf32(sp0 - 0x1ccu);
        goto L_10020469;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(1002045b)
    x0 = fr(g, (double)rdf32(sp0 - 0x1ccu) * (double)rdf32(COW_IMG(0x1032a3acu)));
    goto L_10020465;
L_100207fb: ;
    COW_AT(100207fb)
L_100207fd: ;
    COW_AT(100207fd)
    wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
    wr32(sp0 - 0x1f4u, 0x41200000u);
    t744 = rd32(edi + 0x4cu);
    wr32(sp0 - 0x1f8u, t744);
    t745 = rd32(edi + 0x48u);
    wr32(sp0 - 0x1fcu, t745);
    wr32(sp0 - 0x200u, rd32(esi));
    g->eax = t745;
    g->edx = t744;
    g->esp = sp0 - 0x1ecu;
    t746 = cow_thiscall(g, COW_IMG(0x10181370u), rd32(COW_IMG(0x10631f24u)), 5, rd32(esi), t745, t744, 0x41200000u, sp0 - 0x1d8u);
    t747 = g->edx;
    eax = t746;
    edx = t747;
    COW_AT(1002081d)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(10020821)
        d748 = fr(g, (double)rdf32(sp0 - 0x1d8u) + (double)rdf32(COW_IMG(0x1032a398u)));
        d749 = (double)rdf32(edi + 0x48u);
        if ((cow_fsw(g, d748, d749, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d748, d749, 1u) & 0x4100u;
            x0 = d748;
    COW_AT(10020844)
        }
        else
        {
            eax = cow_fsw(g, d748, d749, 1u) & 0x4100u;
            x0 = d748;
    COW_AT(10020837)
            wrf32(edi + 0x48u, (float)x0);
            wr32(sp0 - 0x1f0u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1ecu;
            t750 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, esi);
            t751 = g->edx;
            eax = t750;
            edx = t751;
    COW_AT(10020842)
        }
    }
    goto L_10020846;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001ee60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001ee7bu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1e8u);
        in_esi = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1e8u;
        g->edi = self;
        wr32(sp0 - 0x1d8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001ee8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0x1e8u);
        in_esi = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        g->edi = self;
        wr32(sp0 - 0x1d8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001ee96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1e8u);
        in_esi = rd32(sp0 - 0x1e4u);
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        wr32(sp0 - 0x1d8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001eea2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001eeaau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1d8;
        uint32_t loc_1e4;
        uint32_t loc_1e8;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        loc_1e8 = rd32(sp0 - 0x1e8u);
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001eeb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001eebeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001eed0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f4u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001eee1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001eeefu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef22u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        wr32(sp0 - 0x1d0u, 0u);
        wr32(sp0 - 0x1ccu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_1d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1d0 = rd32(sp0 - 0x1d0u);
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f4u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
        wr32(sp0 - 0x1f4u, 0x3fu);
        wr32(sp0 - 0x1f0u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x1001ef60u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ef67u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_1d0;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1d0 = rd32(sp0 - 0x1d0u);
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ef71u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ef78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ef86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_1d0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ef90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ef97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efa5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_1cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1cc_f = rdf32(sp0 - 0x1ccu);
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efb2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        wr32(sp0 - 0x1d4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001efb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_1d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1d4 = rd32(sp0 - 0x1d4u);
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efc4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efd6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efdau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efe3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001efecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001effdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f007u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_1d0_f;
        uint32_t loc_1d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1d4 = rd32(sp0 - 0x1d4u);
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        g->esp = sp0 - 0x1ecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f012u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f01fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f024u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f03cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f040u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f045u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f04cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f061u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1fcu;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f076u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f088u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f090u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f0a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f0f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f10fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f113u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f128u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f130u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f141u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f147u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f14du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f152u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f15au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f164u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f16cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f179u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f18eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f1a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f1a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f1adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f1b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f1c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1fcu;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f1deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f1f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f1f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001f20au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f214u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f218u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f22du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f237u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f248u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->ebp = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f24eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f25au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f265u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f26bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f275u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f277u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f281u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f285u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f28fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f2feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f306u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f310u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f31eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f32bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f337u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f34au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x1001f364u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f373u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        wr32(sp0 - 0x1e0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001f37bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f37fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f386u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f38eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f392u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f39eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f3f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f402u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f407u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f411u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_150;
        double loc_1e0_f;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f41bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_150;
        double loc_1e0_f;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f426u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f42eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_150;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f44bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f456u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f464u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f480u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f48du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        (void)sp0;
        return 1;
    }
    case 0x1001f49cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1b4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x200u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x180u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1e8u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x180u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1001f4ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x180u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x180u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b0u);
        (void)sp0;
        return 1;
    }
    case 0x1001f500u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x180u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x180u);
        wr32(sp0 - 0x1f0u, 0xdu);
        wr32(sp0 - 0x1ecu, sp0 - 0x17cu);
        (void)sp0;
        return 1;
    }
    case 0x1001f52bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x154u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        wr32(sp0 - 0x1ecu, sp0 - 0x17cu);
        (void)sp0;
        return 1;
    }
    case 0x1001f52eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1ec;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f537u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f53cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f541u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f546u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f54au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f556u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f55cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f566u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f583u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f587u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f58cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f59au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f5ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20cu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x208u, sp0 - 0x164u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f5f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f600u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f607u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f611u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f619u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f628u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f63au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f646u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f64cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f655u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f667u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f670u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f675u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f67du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f683u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f68fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x208u;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f6f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1001f708u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f716u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f71bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f723u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f733u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f742u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f758u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f76eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f777u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f77cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f79du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f7aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f7c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f7ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f7deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f7ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f7f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f7ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f806u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f812u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f81fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f826u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f82bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f834u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f855u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f862u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f86fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f876u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f87bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f884u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f89fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f8f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f904u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f90bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f910u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f914u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f919u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f922u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f93du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f945u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f94au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f94fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f954u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f95du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f965u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f968u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f972u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f97au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f989u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f994u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001f9a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f9beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f9d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f9dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001f9e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001f9f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fa07u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fa27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001fa2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001fa32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fa34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fa3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fa42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fa4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fa4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fa74u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fa91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fa9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001faaau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x208u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fab5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001facau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001faccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fadbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001faf0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001faf2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb16u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x200u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001fb96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001fba3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001fbafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001fbbcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fbe2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x19cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1001fbeeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fbf8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc66u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x200u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x208u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fc97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fca6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fcb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x200u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fcd8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x1a4u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fcf1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        wr32(sp0 - 0x200u, sp0 - 0x174u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1001fcf3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
        wr32(sp0 - 0x204u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1001fcffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fd2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_180 = rd32(sp0 - 0x180u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd5fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fd6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x200u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fd79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fd96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fdb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fdbfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x200u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fdceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fdd4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fde4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fdfbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fe11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1e0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001fe1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fe57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x200u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fe6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fe73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_180;
        double loc_1e0_f;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1e0_f = rdf32(sp0 - 0x1e0u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fe81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fe86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0xau;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fe8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fe90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fe98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001feabu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001febeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fec0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fecdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fedau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fee8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001feeau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001fefcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1001ff44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff49u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff5bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff74u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ff95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ffabu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d8_f = rdf32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1001ffc3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001ffddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001ffe0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d8_f = rdf32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1f0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001ffebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1001fffau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10020007u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10020013u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002001fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10020029u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10020039u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002004au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002007bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1b8u, 0xc0400000u);
        wr32(sp0 - 0x1b0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10020085u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020090u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002009eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x200u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100200ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020115u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020124u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002013au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002013fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020148u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002014du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020152u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020156u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x200u, sp0 - 0x184u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020158u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002016fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020181u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020196u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20cu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x144u);
        wr32(sp0 - 0x204u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002019cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100201a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100201aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100201bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100201bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100201ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100201d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100201e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100201ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100201f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020204u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020216u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020224u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002022fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002023au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x194u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002024fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002026au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20cu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020284u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d0_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002028cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d0_f;
        uint32_t loc_1e0;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020299u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d0_f;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100202a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100202c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x100202e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100202f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        wr32(sp0 - 0x1d4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100202f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        wr32(sp0 - 0x1d4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100202feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020303u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002030au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020313u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002031fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020327u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020344u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002034au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020352u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        wr32(sp0 - 0x1d4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10020367u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        wr32(sp0 - 0x1d4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10020372u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020378u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020384u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020388u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020394u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020398u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100203b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100203bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100203c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100203c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100203cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020425u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1002042du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020436u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1002043au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020446u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1002045bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020465u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020469u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1cc_f = rdf32(sp0 - 0x1ccu);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1002047eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1cc_f = rdf32(sp0 - 0x1ccu);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020487u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020493u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x1002049fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x100204c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x100204cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x100204e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100204e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100204f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020503u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002050au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020516u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020522u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002052bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1cc_f;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1cc_f = rdf32(sp0 - 0x1ccu);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020530u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020537u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020549u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x164u);
        wr32(sp0 - 0x200u, sp0 - 0x164u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002055du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x208u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020583u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d0_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002059bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d0_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100205a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d0_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d0_f = rdf32(sp0 - 0x1d0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100205b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1e0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100205c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        wr32(sp0 - 0x1e0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100205cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1e0;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100205f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1e0;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1e0 = rd32(sp0 - 0x1e0u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100205fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020618u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x184u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x1002062au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x1002062fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x184u);
        wr32(sp0 - 0x208u, sp0 - 0x184u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x1002063du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20cu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x1002064au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f4u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020651u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002065bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002066bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002067cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1002068du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x100206b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x100206d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x100206dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x100206efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1fcu;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x194u);
        wr32(sp0 - 0x200u, sp0 - 0x144u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x100206fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x204u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x10020710u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        (void)sp0;
        return 1;
    }
    case 0x1002072bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x10020748u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x1002074bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_1d4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1d4_f = rdf32(sp0 - 0x1d4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x10020756u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x1f8u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
        (void)sp0;
        return 1;
    }
    case 0x10020765u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        wr32(sp0 - 0x20cu, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10020773u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1f0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10020785u:
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
        g->esp = sp0 - 0x1f0u;
        (void)sp0;
        return 1;
    }
    case 0x10020796u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f8u;
        wr32(sp0 - 0x1f8u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100207a9u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100207b6u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100207d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100207dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100207eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100207f9u:
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
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x100207fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100207fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x1002081du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x10020821u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x10020837u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x10020842u:
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
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x10020844u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x10020846u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x10020852u:
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
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x1002085eu:
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
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x10020865u:
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
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x10020872u:
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
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x100208c8u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0xfcu);
        (void)sp0;
        return 1;
    }
    case 0x100208d4u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0xfcu);
        (void)sp0;
        return 1;
    }
    case 0x100208e8u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x100208fcu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f0u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x10020923u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x128u);
        wr32(sp0 - 0x1f4u, sp0 - 0x134u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020927u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x128u);
        wr32(sp0 - 0x1f4u, sp0 - 0x134u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002092cu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x128u);
        wr32(sp0 - 0x1f4u, sp0 - 0x134u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x1002094cu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020950u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020952u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x1002095du:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020962u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020971u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020980u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x10020993u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        (void)sp0;
        return 1;
    }
    case 0x100209bcu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1a4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100209dfu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x100209ebu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x100209f0u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x10020a19u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x184u);
        wr32(sp0 - 0x1a4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10020a3cu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
        (void)sp0;
        return 1;
    }
    case 0x10020a48u:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x10020a4fu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x10020a5bu:
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
        g->esp = sp0 - 0x1ecu;
        wr32(sp0 - 0x1f8u, sp0 - 0x134u);
        wr32(sp0 - 0x1f4u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x10020a67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1ecu;
        (void)sp0;
        return 1;
    }
    case 0x10020a7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x1e8u;
        (void)sp0;
        return 1;
    }
    case 0x10020a9bu:
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
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f4u, sp0 - 0x108u);
        wr32(sp0 - 0x1ecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x10020aa3u:
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
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f4u, sp0 - 0x108u);
        wr32(sp0 - 0x1ecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x10020ab6u:
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
        g->esp = sp0 - 0x1f4u;
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f0u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x10020ac4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1fcu;
        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f0u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x10020adau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1d8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8_f = rdf32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f0u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x10020af2u:
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
        g->esp = sp0 - 0x1f0u;
        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020b0cu:
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
        g->esp = sp0 - 0x1f0u;
        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020b0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1d8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1d8_f = rdf32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020b1au:
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
        g->esp = sp0 - 0x1f0u;
        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
        (void)sp0;
        return 1;
    }
    case 0x10020b29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ec;
        uint32_t loc_1f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1f4 = rd32(sp0 - 0x1f4u);
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        (void)sp0;
        return 1;
    }
    case 0x10020b37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1f0u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b47u:
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
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b56u:
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
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        wr32(sp0 - 0x1ecu, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ec;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ec;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1e8u;
        wr32(sp0 - 0x1f0u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x10020b93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1d8;
        uint32_t loc_1e4;
        uint32_t loc_1e8;
        uint32_t loc_1ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1ec = rd32(sp0 - 0x1ecu);
        loc_1e8 = rd32(sp0 - 0x1e8u);
        loc_1e4 = rd32(sp0 - 0x1e4u);
        loc_1d8 = rd32(sp0 - 0x1d8u);
        g->esp = sp0 - 0x1e8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ee60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001ee60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
