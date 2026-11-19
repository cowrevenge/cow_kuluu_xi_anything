/* f_0x100c63d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100c63d0(Guest* g)
{
    double d120;
    double d123;
    double d124;
    double d125;
    double d126;
    double d127;
    double d128;
    double d129;
    double d130;
    double d131;
    double d132;
    double d137;
    double d138;
    double d139;
    double d14;
    double d140;
    double d141;
    double d142;
    double d143;
    double d144;
    double d145;
    double d146;
    double d147;
    double d148;
    double d149;
    double d162;
    double d166;
    double d168;
    double d169;
    double d170;
    double d171;
    double d177;
    double d178;
    double d179;
    double d18;
    double d180;
    double d192;
    double d196;
    double d197;
    double d198;
    double d199;
    double d20;
    double d200;
    double d201;
    double d202;
    double d203;
    double d204;
    double d205;
    double d21;
    double d211;
    double d212;
    double d213;
    double d214;
    double d215;
    double d216;
    double d217;
    double d218;
    double d219;
    double d220;
    double d221;
    double d222;
    double d223;
    double d226;
    double d227;
    double d228;
    double d229;
    double d230;
    double d231;
    double d232;
    double d233;
    double d234;
    double d235;
    double d236;
    double d237;
    double d265;
    double d272;
    double d275;
    double d279;
    double d283;
    double d286;
    double d480;
    double d495;
    double d496;
    double d504;
    double d507;
    double d512;
    double d513;
    double d516;
    double d518;
    double d521;
    double d525;
    double d526;
    double d529;
    double d531;
    double d534;
    double d538;
    double d542;
    double d546;
    double d550;
    double d555;
    double d556;
    double d557;
    double d562;
    double d569;
    double d57;
    double d570;
    double d586;
    double d587;
    double d588;
    double d593;
    double d594;
    double d596;
    double d60;
    double d603;
    double d61;
    double d62;
    double d625;
    double d629;
    double d63;
    double d639;
    double d64;
    double d642;
    double d643;
    double d65;
    double d66;
    double d670;
    double d671;
    double d674;
    double d675;
    double d677;
    double d686;
    double d717;
    double d720;
    double d722;
    double d725;
    double d729;
    double d730;
    double d733;
    double d735;
    double d738;
    double d742;
    double d743;
    double d747;
    double d75;
    double d751;
    double d755;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_188;
    uint32_t loc_210;
    uint32_t loc_21c;
    double loc_22c_f;
    double loc_238_f;
    double loc_23c_f;
    double loc_240_f;
    uint32_t loc_244;
    double loc_254_f;
    double loc_258_f;
    double loc_25c_f;
    uint32_t loc_260;
    uint32_t loc_264;
    double loc_264_f;
    uint32_t loc_268;
    double loc_268_f;
    uint32_t loc_26c;
    double loc_26c_f;
    uint32_t loc_270;
    double loc_270_f;
    uint32_t loc_274;
    double loc_274_f;
    uint32_t loc_284;
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
    uint32_t t121;
    uint32_t t122;
    uint32_t t13;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
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
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t167;
    uint32_t t17;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
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
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t2;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t210;
    uint32_t t22;
    uint32_t t224;
    uint32_t t225;
    uint32_t t23;
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
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t273;
    uint32_t t274;
    uint32_t t276;
    uint32_t t277;
    uint32_t t278;
    uint32_t t28;
    uint32_t t280;
    uint32_t t281;
    uint32_t t282;
    uint32_t t284;
    uint32_t t285;
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
    uint32_t t497;
    uint32_t t498;
    uint32_t t499;
    uint32_t t5;
    uint32_t t50;
    uint32_t t500;
    uint32_t t501;
    uint32_t t502;
    uint32_t t503;
    uint32_t t505;
    uint32_t t506;
    uint32_t t508;
    uint32_t t509;
    uint32_t t51;
    uint32_t t510;
    uint32_t t511;
    uint32_t t514;
    uint32_t t515;
    uint32_t t517;
    uint32_t t519;
    uint32_t t52;
    uint32_t t520;
    uint32_t t522;
    uint32_t t523;
    uint32_t t524;
    uint32_t t527;
    uint32_t t528;
    uint32_t t53;
    uint32_t t530;
    uint32_t t532;
    uint32_t t533;
    uint32_t t535;
    uint32_t t536;
    uint32_t t537;
    uint32_t t539;
    uint32_t t54;
    uint32_t t540;
    uint32_t t541;
    uint32_t t543;
    uint32_t t544;
    uint32_t t545;
    uint32_t t547;
    uint32_t t548;
    uint32_t t549;
    uint32_t t55;
    uint32_t t551;
    uint32_t t552;
    uint32_t t553;
    uint32_t t554;
    uint32_t t558;
    uint32_t t559;
    uint32_t t56;
    uint32_t t560;
    uint32_t t561;
    uint32_t t563;
    uint32_t t564;
    uint32_t t565;
    uint32_t t566;
    uint32_t t567;
    uint32_t t568;
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
    uint32_t t589;
    uint32_t t59;
    uint32_t t590;
    uint32_t t591;
    uint32_t t592;
    uint32_t t595;
    uint32_t t597;
    uint32_t t598;
    uint32_t t599;
    uint32_t t6;
    uint32_t t600;
    uint32_t t601;
    uint32_t t602;
    uint32_t t604;
    uint32_t t605;
    uint32_t t606;
    uint32_t t607;
    uint32_t t608;
    uint32_t t609;
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
    uint32_t t620;
    uint32_t t621;
    uint32_t t622;
    uint32_t t623;
    uint32_t t624;
    uint32_t t626;
    uint32_t t627;
    uint32_t t628;
    uint32_t t630;
    uint32_t t631;
    uint32_t t632;
    uint32_t t633;
    uint32_t t634;
    uint32_t t635;
    uint32_t t636;
    uint32_t t637;
    uint32_t t638;
    uint32_t t640;
    uint32_t t641;
    uint32_t t644;
    uint32_t t645;
    uint32_t t646;
    uint32_t t647;
    uint32_t t648;
    uint32_t t649;
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
    uint32_t t672;
    uint32_t t673;
    uint32_t t676;
    uint32_t t678;
    uint32_t t679;
    uint32_t t68;
    uint32_t t680;
    uint32_t t681;
    uint32_t t682;
    uint32_t t683;
    uint32_t t684;
    uint32_t t685;
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
    uint32_t t718;
    uint32_t t719;
    uint32_t t72;
    uint32_t t721;
    uint32_t t723;
    uint32_t t724;
    uint32_t t726;
    uint32_t t727;
    uint32_t t728;
    uint32_t t73;
    uint32_t t731;
    uint32_t t732;
    uint32_t t734;
    uint32_t t736;
    uint32_t t737;
    uint32_t t739;
    uint32_t t74;
    uint32_t t740;
    uint32_t t741;
    uint32_t t744;
    uint32_t t745;
    uint32_t t746;
    uint32_t t748;
    uint32_t t749;
    uint32_t t750;
    uint32_t t752;
    uint32_t t753;
    uint32_t t754;
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
    uint32_t t768;
    uint32_t t769;
    uint32_t t8;
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
    double x2;
    double x3;
    double x4;
    double x5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 688u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c63dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x27cu); g->esi = rd32(sp0 - 0x27cu); goto E_100c63df;
    case 0x100c63f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c63f3;
    case 0x100c63f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_244 = rd32(sp0 - 0x244u); goto E_100c63f7;
    case 0x100c63ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_244 = rd32(sp0 - 0x244u); goto E_100c63ff;
    case 0x100c642eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c642e;
    case 0x100c643au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c643a;
    case 0x100c6441u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6441;
    case 0x100c6448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6448;
    case 0x100c644cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c644c;
    case 0x100c645fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c645f;
    case 0x100c6470u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6470;
    case 0x100c6479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6479;
    case 0x100c648eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c648e;
    case 0x100c6493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6493;
    case 0x100c649fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c649f;
    case 0x100c64a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64a9;
    case 0x100c64b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64b4;
    case 0x100c64c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64c1;
    case 0x100c64cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64cf;
    case 0x100c64d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64d9;
    case 0x100c64e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64e5;
    case 0x100c64ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64ec;
    case 0x100c64fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c64fa;
    case 0x100c6508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6508;
    case 0x100c6512u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6512;
    case 0x100c651au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c651a;
    case 0x100c6528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6528;
    case 0x100c6536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6536;
    case 0x100c653du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c653d;
    case 0x100c6545u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6545;
    case 0x100c6549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6549;
    case 0x100c6550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6550;
    case 0x100c6558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6558;
    case 0x100c655cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c655c;
    case 0x100c6566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6566;
    case 0x100c6591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6591;
    case 0x100c659bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c659b;
    case 0x100c65a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c65a6;
    case 0x100c65b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c65b7;
    case 0x100c65bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c65bf;
    case 0x100c65d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_284 = rd32(sp0 - 0x284u); loc_274_f = rdf32(sp0 - 0x274u); loc_26c_f = rdf32(sp0 - 0x26cu); loc_268_f = rdf32(sp0 - 0x268u); loc_264_f = rdf32(sp0 - 0x264u); loc_240_f = rdf32(sp0 - 0x240u); loc_23c_f = rdf32(sp0 - 0x23cu); loc_238_f = rdf32(sp0 - 0x238u); goto E_100c65d6;
    case 0x100c65eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c65ea;
    case 0x100c665cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_284 = rd32(sp0 - 0x284u); loc_274_f = rdf32(sp0 - 0x274u); loc_26c_f = rdf32(sp0 - 0x26cu); loc_268_f = rdf32(sp0 - 0x268u); loc_264_f = rdf32(sp0 - 0x264u); loc_240_f = rdf32(sp0 - 0x240u); loc_23c_f = rdf32(sp0 - 0x23cu); loc_238_f = rdf32(sp0 - 0x238u); goto E_100c665c;
    case 0x100c6666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6666;
    case 0x100c666cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c666c;
    case 0x100c6676u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6676;
    case 0x100c667cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c667c;
    case 0x100c6688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100c6688;
    case 0x100c668bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_284 = rd32(sp0 - 0x284u); loc_26c = rd32(sp0 - 0x26cu); loc_268 = rd32(sp0 - 0x268u); loc_264 = rd32(sp0 - 0x264u); loc_260 = rd32(sp0 - 0x260u); goto E_100c668b;
    case 0x100c6699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6699;
    case 0x100c66a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c66a1;
    case 0x100c66afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c66af;
    case 0x100c66bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c66bc;
    case 0x100c66cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c66ca;
    case 0x100c66e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c66e3;
    case 0x100c6704u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6704;
    case 0x100c6712u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6712;
    case 0x100c6714u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6714;
    case 0x100c6727u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6727;
    case 0x100c6739u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6739;
    case 0x100c6752u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6752;
    case 0x100c6754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6754;
    case 0x100c6767u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6767;
    case 0x100c677cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c677c;
    case 0x100c677eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c677e;
    case 0x100c6799u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6799;
    case 0x100c67a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c67a7;
    case 0x100c67a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67a9;
    case 0x100c67bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67bc;
    case 0x100c67ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67ce;
    case 0x100c67d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c67d4;
    case 0x100c67dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67df;
    case 0x100c67e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67e9;
    case 0x100c67edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67ed;
    case 0x100c67f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67f7;
    case 0x100c67fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c67fb;
    case 0x100c6802u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6802;
    case 0x100c680au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c680a;
    case 0x100c680eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c680e;
    case 0x100c6815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6815;
    case 0x100c681du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c681d;
    case 0x100c6821u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6821;
    case 0x100c682bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c682b;
    case 0x100c6833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6833;
    case 0x100c6844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6844;
    case 0x100c6854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6854;
    case 0x100c6858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6858;
    case 0x100c6862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6862;
    case 0x100c6866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6866;
    case 0x100c6870u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6870;
    case 0x100c6882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6882;
    case 0x100c6887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6887;
    case 0x100c689eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c689e;
    case 0x100c68a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c68a8;
    case 0x100c68e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c68e1;
    case 0x100c68efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c68ef;
    case 0x100c6900u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6900;
    case 0x100c690eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c690e;
    case 0x100c6921u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6921;
    case 0x100c692fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c692f;
    case 0x100c6940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6940;
    case 0x100c694eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c694e;
    case 0x100c6961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6961;
    case 0x100c696fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c696f;
    case 0x100c6980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6980;
    case 0x100c698eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c698e;
    case 0x100c6999u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6999;
    case 0x100c69a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c69a4;
    case 0x100c69c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c69c8;
    case 0x100c69ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c69dd;
    case 0x100c69efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c69ef;
    case 0x100c6a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a02;
    case 0x100c6a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a14;
    case 0x100c6a29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a29;
    case 0x100c6a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a3b;
    case 0x100c6a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a4e;
    case 0x100c6a60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a60;
    case 0x100c6a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a75;
    case 0x100c6a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a87;
    case 0x100c6a9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6a9e;
    case 0x100c6ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ab5;
    case 0x100c6abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6abf;
    case 0x100c6ac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ac7;
    case 0x100c6ad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ad8;
    case 0x100c6ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ae7;
    case 0x100c6af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6af1;
    case 0x100c6afeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6afe;
    case 0x100c6b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6b26;
    case 0x100c6b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6b36;
    case 0x100c6b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6b47;
    case 0x100c6b57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); loc_210 = rd32(sp0 - 0x210u); goto E_100c6b57;
    case 0x100c6b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); loc_210 = rd32(sp0 - 0x210u); goto E_100c6b68;
    case 0x100c6b77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6b77;
    case 0x100c6b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); loc_210 = rd32(sp0 - 0x210u); goto E_100c6b7c;
    case 0x100c6b8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); loc_210 = rd32(sp0 - 0x210u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6b8e;
    case 0x100c6ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ba5;
    case 0x100c6bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6baf;
    case 0x100c6bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6bb4;
    case 0x100c6bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6bb8;
    case 0x100c6bcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6bcb;
    case 0x100c6be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6be0;
    case 0x100c6be2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6be2;
    case 0x100c6bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6bf1;
    case 0x100c6c06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6c06;
    case 0x100c6c08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6c08;
    case 0x100c6c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c17;
    case 0x100c6c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c6c1f;
    case 0x100c6c29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_22c_f = rdf32(sp0 - 0x22cu); goto E_100c6c29;
    case 0x100c6c36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c36;
    case 0x100c6c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c3a;
    case 0x100c6c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c44;
    case 0x100c6c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c48;
    case 0x100c6c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c52;
    case 0x100c6c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6c64;
    case 0x100c6c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c6c69;
    case 0x100c6c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6c80;
    case 0x100c6c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6c8a;
    case 0x100c6cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6cc3;
    case 0x100c6cd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6cd1;
    case 0x100c6ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6ce2;
    case 0x100c6cf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6cf0;
    case 0x100c6d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d03;
    case 0x100c6d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d11;
    case 0x100c6d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d22;
    case 0x100c6d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d30;
    case 0x100c6d43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d43;
    case 0x100c6d51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d51;
    case 0x100c6d62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d62;
    case 0x100c6d70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_274_f = rdf32(sp0 - 0x274u); loc_25c_f = rdf32(sp0 - 0x25cu); loc_258_f = rdf32(sp0 - 0x258u); loc_254_f = rdf32(sp0 - 0x254u); goto E_100c6d70;
    case 0x100c6d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6d7b;
    case 0x100c6d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6d86;
    case 0x100c6daau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6daa;
    case 0x100c6dc5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6dc5;
    case 0x100c6dcfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6dcf;
    case 0x100c6ddeu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6dde;
    case 0x100c6de8u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6de8;
    case 0x100c6dfdu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6dfd;
    case 0x100c6e0fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e0f;
    case 0x100c6e22u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e22;
    case 0x100c6e34u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e34;
    case 0x100c6e49u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e49;
    case 0x100c6e5bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e5b;
    case 0x100c6e6eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e6e;
    case 0x100c6e80u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e80;
    case 0x100c6e88u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e88;
    case 0x100c6e95u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6e95;
    case 0x100c6e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6e9f;
    case 0x100c6eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6eb3;
    case 0x100c6ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6ebd;
    case 0x100c6eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c6ecc;
    case 0x100c6ed6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ed6;
    case 0x100c6ee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ee8;
    case 0x100c6ef4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6ef4;
    case 0x100c6f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f04;
    case 0x100c6f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f10;
    case 0x100c6f22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f22;
    case 0x100c6f2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f2e;
    case 0x100c6f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f3e;
    case 0x100c6f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6f4a;
    case 0x100c6f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c6f5b;
    case 0x100c6f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f66;
    case 0x100c6f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f70;
    case 0x100c6f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f78;
    case 0x100c6f83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f83;
    case 0x100c6f88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f88;
    case 0x100c6f97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6f97;
    case 0x100c6fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fa4;
    case 0x100c6fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fad;
    case 0x100c6fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fbd;
    case 0x100c6fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fc9;
    case 0x100c6fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fd5;
    case 0x100c6fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fdf;
    case 0x100c6fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c6fef;
    case 0x100c7007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7007;
    case 0x100c7016u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7016;
    case 0x100c7023u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7023;
    case 0x100c7033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7033;
    case 0x100c7041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7041;
    case 0x100c704au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c704a;
    case 0x100c7054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7054;
    case 0x100c706bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c706b;
    case 0x100c707cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c707c;
    case 0x100c708eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c708e;
    case 0x100c7098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7098;
    case 0x100c70a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70a6;
    case 0x100c70b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70b0;
    case 0x100c70c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70c0;
    case 0x100c70cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70ca;
    case 0x100c70d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70d8;
    case 0x100c70e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70e4;
    case 0x100c70e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c70e6;
    case 0x100c70ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274_f = rdf32(sp0 - 0x274u); goto E_100c70ec;
    case 0x100c70fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c70fb;
    case 0x100c710du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c710d;
    case 0x100c711cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c711c;
    case 0x100c7122u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7122;
    case 0x100c7131u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7131;
    case 0x100c7134u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7134;
    case 0x100c7143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7143;
    case 0x100c7149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7149;
    case 0x100c715au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c715a;
    case 0x100c7167u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7167;
    case 0x100c716fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c716f;
    case 0x100c717fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c717f;
    case 0x100c7189u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7189;
    case 0x100c7191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7191;
    case 0x100c719fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c719f;
    case 0x100c71adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71ad;
    case 0x100c71b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71b7;
    case 0x100c71bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71bf;
    case 0x100c71c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71c9;
    case 0x100c71d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71d1;
    case 0x100c71dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71db;
    case 0x100c71e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71e3;
    case 0x100c71edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71ed;
    case 0x100c71f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71f5;
    case 0x100c71ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c71ff;
    case 0x100c7207u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7207;
    case 0x100c7211u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7211;
    case 0x100c7219u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7219;
    case 0x100c7223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7223;
    case 0x100c722bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c722b;
    case 0x100c7235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7235;
    case 0x100c723du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c723d;
    case 0x100c7247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7247;
    case 0x100c724fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c724f;
    case 0x100c725bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c725b;
    case 0x100c7267u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7267;
    case 0x100c7273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7273;
    case 0x100c727fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c727f;
    case 0x100c728bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c728b;
    case 0x100c7292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7292;
    case 0x100c729au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c729a;
    case 0x100c72a0u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100c72a0;
    case 0x100c72aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c72aa;
    case 0x100c72b1u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100c72b1;
    case 0x100c72b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72b6;
    case 0x100c72beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72be;
    case 0x100c72c4u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100c72c4;
    case 0x100c72ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c72ce;
    case 0x100c72d5u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100c72d5;
    case 0x100c72dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72da;
    case 0x100c72e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72e3;
    case 0x100c72eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72ea;
    case 0x100c72f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72f3;
    case 0x100c72fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c72fa;
    case 0x100c7303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7303;
    case 0x100c730au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c730a;
    case 0x100c7313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7313;
    case 0x100c731au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c731a;
    case 0x100c7323u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7323;
    case 0x100c732au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c732a;
    case 0x100c7333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7333;
    case 0x100c733au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c733a;
    case 0x100c7343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7343;
    case 0x100c734au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c734a;
    case 0x100c7353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7353;
    case 0x100c735au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c735a;
    case 0x100c7363u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7363;
    case 0x100c736au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c736a;
    case 0x100c7373u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7373;
    case 0x100c737au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c737a;
    case 0x100c737fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c737f;
    case 0x100c7386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7386;
    case 0x100c738bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c738b;
    case 0x100c7392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7392;
    case 0x100c7397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7397;
    case 0x100c739eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c739e;
    case 0x100c73a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73a3;
    case 0x100c73aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73aa;
    case 0x100c73afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73af;
    case 0x100c73b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73b6;
    case 0x100c73bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73bb;
    case 0x100c73c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73c2;
    case 0x100c73c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73c7;
    case 0x100c73ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73ce;
    case 0x100c73d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73d3;
    case 0x100c73dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73da;
    case 0x100c73e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c73e2;
    case 0x100c73eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c73ea;
    case 0x100c73f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c73f1;
    case 0x100c73f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c73f8;
    case 0x100c73ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c73ff;
    case 0x100c7406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7406;
    case 0x100c7410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7410;
    case 0x100c7417u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7417;
    case 0x100c741cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c741c;
    case 0x100c7426u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7426;
    case 0x100c7430u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7430;
    case 0x100c7434u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7434;
    case 0x100c743eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c743e;
    case 0x100c7446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7446;
    case 0x100c7450u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7450;
    case 0x100c745eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c745e;
    case 0x100c746cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c746c;
    case 0x100c747au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c747a;
    case 0x100c7484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7484;
    case 0x100c748cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c748c;
    case 0x100c7496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7496;
    case 0x100c749eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c749e;
    case 0x100c74a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74a8;
    case 0x100c74b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74b0;
    case 0x100c74bcu: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100c74bc;
    case 0x100c74c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74c1;
    case 0x100c74c6u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100c74c6;
    case 0x100c74ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74ce;
    case 0x100c74d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74d6;
    case 0x100c74e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74e0;
    case 0x100c74e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74e8;
    case 0x100c74f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74f2;
    case 0x100c74fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c74fa;
    case 0x100c7504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7504;
    case 0x100c750cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c750c;
    case 0x100c7516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7516;
    case 0x100c751eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c751e;
    case 0x100c7528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7528;
    case 0x100c752cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c752c;
    case 0x100c7536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7536;
    case 0x100c753au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c753a;
    case 0x100c7544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7544;
    case 0x100c7548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7548;
    case 0x100c754fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c754f;
    case 0x100c7557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7557;
    case 0x100c755du: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100c755d;
    case 0x100c7567u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7567;
    case 0x100c756bu: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100c756b;
    case 0x100c7570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7570;
    case 0x100c7578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7578;
    case 0x100c757cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c757c;
    case 0x100c7588u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7588;
    case 0x100c758cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c758c;
    case 0x100c7593u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7593;
    case 0x100c7598u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100c7598;
    case 0x100c759fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c759f;
    case 0x100c75a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c75a9;
    case 0x100c75b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75b0;
    case 0x100c75b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75b5;
    case 0x100c75c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75c4;
    case 0x100c75cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75cb;
    case 0x100c75d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75d3;
    case 0x100c75d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75d7;
    case 0x100c75deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75de;
    case 0x100c75e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75e6;
    case 0x100c75eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75ea;
    case 0x100c75f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c75f1;
    case 0x100c75f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c75f9;
    case 0x100c7607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7607;
    case 0x100c7618u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7618;
    case 0x100c7625u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7625;
    case 0x100c7632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7632;
    case 0x100c7636u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7636;
    case 0x100c763du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c763d;
    case 0x100c7644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7644;
    case 0x100c7649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7649;
    case 0x100c764du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c764d;
    case 0x100c7652u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7652;
    case 0x100c7657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7657;
    case 0x100c765fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c765f;
    case 0x100c7663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7663;
    case 0x100c766bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c766b;
    case 0x100c766fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c766f;
    case 0x100c7676u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c7676;
    case 0x100c7680u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7680;
    case 0x100c7684u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7684;
    case 0x100c768bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c768b;
    case 0x100c7693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7693;
    case 0x100c7697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7697;
    case 0x100c769eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c769e;
    case 0x100c76a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c76a6;
    case 0x100c76aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c76aa;
    case 0x100c76b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c76b4;
    case 0x100c76bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c76bc;
    case 0x100c76c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c76c0;
    case 0x100c76cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c76cf;
    case 0x100c76e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c76e8;
    case 0x100c76f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c76f0;
    case 0x100c76f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c76f6;
    case 0x100c770bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c770b;
    case 0x100c7710u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7710;
    case 0x100c7719u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7719;
    case 0x100c772fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_26c = rd32(sp0 - 0x26cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c772f;
    case 0x100c7739u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7739;
    case 0x100c7746u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7746;
    case 0x100c7759u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7759;
    case 0x100c7763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7763;
    case 0x100c7770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7770;
    case 0x100c7778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7778;
    case 0x100c7782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7782;
    case 0x100c7784u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7784;
    case 0x100c778cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c778c;
    case 0x100c7796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7796;
    case 0x100c77a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c77a4;
    case 0x100c77b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c77b1;
    case 0x100c77c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c77c4;
    case 0x100c77ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c77ce;
    case 0x100c77dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c77db;
    case 0x100c77e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c77e3;
    case 0x100c77edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c77ed;
    case 0x100c77efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c77ef;
    case 0x100c77f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c77f7;
    case 0x100c7801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7801;
    case 0x100c780fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c780f;
    case 0x100c781cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c781c;
    case 0x100c782fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c782f;
    case 0x100c7839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7839;
    case 0x100c7846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7846;
    case 0x100c784eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c784e;
    case 0x100c7858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7858;
    case 0x100c785au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c785a;
    case 0x100c7862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7862;
    case 0x100c786cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c786c;
    case 0x100c7881u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c7881;
    case 0x100c788bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c788b;
    case 0x100c78a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_270_f = rdf32(sp0 - 0x270u); goto E_100c78a7;
    case 0x100c78b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_270_f = rdf32(sp0 - 0x270u); goto E_100c78b5;
    case 0x100c78c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_270_f = rdf32(sp0 - 0x270u); goto E_100c78c6;
    case 0x100c78d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_270_f = rdf32(sp0 - 0x270u); goto E_100c78d4;
    case 0x100c78e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c78e5;
    case 0x100c78efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c78ef;
    case 0x100c78fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c78fc;
    case 0x100c7908u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7908;
    case 0x100c790cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c790c;
    case 0x100c7926u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7926;
    case 0x100c794fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; goto E_100c794f;
    case 0x100c7963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; goto E_100c7963;
    case 0x100c7974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; goto E_100c7974;
    case 0x100c7988u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_188 = rd32(sp0 - 0x188u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; goto E_100c7988;
    case 0x100c7a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7a63;
    case 0x100c7a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7a83;
    case 0x100c7a92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7a92;
    case 0x100c7aa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7aa7;
    case 0x100c7ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ab3;
    case 0x100c7ac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ac8;
    case 0x100c7adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274 = rd32(sp0 - 0x274u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7adc;
    case 0x100c7ae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ae9;
    case 0x100c7b01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b01;
    case 0x100c7b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b11;
    case 0x100c7b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274 = rd32(sp0 - 0x274u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b18;
    case 0x100c7b21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274 = rd32(sp0 - 0x274u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b21;
    case 0x100c7b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274 = rd32(sp0 - 0x274u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b25;
    case 0x100c7b39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274 = rd32(sp0 - 0x274u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b39;
    case 0x100c7b3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_274 = rd32(sp0 - 0x274u); loc_270 = rd32(sp0 - 0x270u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b3d;
    case 0x100c7b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b42;
    case 0x100c7b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b55;
    case 0x100c7b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b5a;
    case 0x100c7b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b68;
    case 0x100c7b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b84;
    case 0x100c7b8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b8a;
    case 0x100c7b9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7b9a;
    case 0x100c7ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ba8;
    case 0x100c7badu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bad;
    case 0x100c7bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bb8;
    case 0x100c7bbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bbc;
    case 0x100c7bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bc5;
    case 0x100c7bd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bd4;
    case 0x100c7bdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bdf;
    case 0x100c7beeu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7bee;
    case 0x100c7c03u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c03;
    case 0x100c7c08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c08;
    case 0x100c7c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c14;
    case 0x100c7c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c20;
    case 0x100c7c2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c2c;
    case 0x100c7c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c41;
    case 0x100c7c5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c5c;
    case 0x100c7c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c65;
    case 0x100c7c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c69;
    case 0x100c7c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c73;
    case 0x100c7c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c8a;
    case 0x100c7c96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c96;
    case 0x100c7c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7c9d;
    case 0x100c7ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ca2;
    case 0x100c7cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7cb6;
    case 0x100c7ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7cca;
    case 0x100c7cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7cd4;
    case 0x100c7cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7cd8;
    case 0x100c7ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ce1;
    case 0x100c7ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ce9;
    case 0x100c7d04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d04;
    case 0x100c7d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d10;
    case 0x100c7d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d12;
    case 0x100c7d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d1c;
    case 0x100c7d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d38;
    case 0x100c7d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7d4c;
    case 0x100c7d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d57;
    case 0x100c7d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d6c;
    case 0x100c7d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d76;
    case 0x100c7d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d83;
    case 0x100c7d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7d8b;
    case 0x100c7d92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7d92;
    case 0x100c7dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7dab;
    case 0x100c7dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7dc0;
    case 0x100c7dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7dc7;
    case 0x100c7dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7dd5;
    case 0x100c7ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ddf;
    case 0x100c7dedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ded;
    case 0x100c7e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e06;
    case 0x100c7e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e0d;
    case 0x100c7e11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e11;
    case 0x100c7e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e21;
    case 0x100c7e2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e2b;
    case 0x100c7e34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e34;
    case 0x100c7e45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e45;
    case 0x100c7e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e6d;
    case 0x100c7e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e73;
    case 0x100c7e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e8b;
    case 0x100c7e96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7e96;
    case 0x100c7ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ea2;
    case 0x100c7ea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ea7;
    case 0x100c7eafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7eaf;
    case 0x100c7ebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ebf;
    case 0x100c7ec3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ec3;
    case 0x100c7ecdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ecd;
    case 0x100c7ed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ed1;
    case 0x100c7edbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7edb;
    case 0x100c7edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7edf;
    case 0x100c7eefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7eef;
    case 0x100c7ef7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7ef7;
    case 0x100c7f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f01;
    case 0x100c7f09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f09;
    case 0x100c7f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7f18;
    case 0x100c7f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7f2f;
    case 0x100c7f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c7f37;
    case 0x100c7f42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f42;
    case 0x100c7f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f53;
    case 0x100c7f5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f5a;
    case 0x100c7f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f5f;
    case 0x100c7f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f63;
    case 0x100c7f74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f74;
    case 0x100c7f7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f7b;
    case 0x100c7f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f7f;
    case 0x100c7f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f90;
    case 0x100c7f9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7f9e;
    case 0x100c7facu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fac;
    case 0x100c7fb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fb6;
    case 0x100c7fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fba;
    case 0x100c7fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fc1;
    case 0x100c7fd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fd2;
    case 0x100c7fe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fe0;
    case 0x100c7fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c7fff;
    case 0x100c8013u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8013;
    case 0x100c8021u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8021;
    case 0x100c8040u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8040;
    case 0x100c804du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c804d;
    case 0x100c805au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c805a;
    case 0x100c806du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c806d;
    case 0x100c8077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8077;
    case 0x100c8084u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8084;
    case 0x100c808cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c808c;
    case 0x100c8096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8096;
    case 0x100c8098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8098;
    case 0x100c80a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c80a0;
    case 0x100c80aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c80aa;
    case 0x100c80bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c80ba;
    case 0x100c80c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c80c7;
    case 0x100c80dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c80da;
    case 0x100c80e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c80e4;
    case 0x100c80f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c80f1;
    case 0x100c80f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c80f9;
    case 0x100c8103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8103;
    case 0x100c8105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8105;
    case 0x100c810du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c810d;
    case 0x100c8117u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8117;
    case 0x100c8127u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8127;
    case 0x100c8134u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8134;
    case 0x100c8147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8147;
    case 0x100c8151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8151;
    case 0x100c815eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c815e;
    case 0x100c8166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8166;
    case 0x100c8170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8170;
    case 0x100c8172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8172;
    case 0x100c817au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c817a;
    case 0x100c8184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8184;
    case 0x100c8194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c8194;
    case 0x100c819du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100c819d;
    case 0x100c81a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81a4;
    case 0x100c81aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81aa;
    case 0x100c81c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81c0;
    case 0x100c81d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81d2;
    case 0x100c81e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81e1;
    case 0x100c81ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81eb;
    case 0x100c81efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81ef;
    case 0x100c81f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c81f5;
    case 0x100c81f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_284 = rd32(sp0 - 0x284u); goto E_100c81f8;
    case 0x100c8209u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100c8209;
    default: break;
    }
#endif

    COW_AT(100c63d0)
    wr32(sp0 - 0x278u, in_ebx);
    wr32(sp0 - 0x27cu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x27cu;
    t1 = cow_thiscall(g, COW_IMG(0x10085490u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100c63df)
    wr32(sp0 - 0x244u, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t3 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t4 = cow_thiscall(g, rd32(t3 + 0x148u), self, 0);
    t5 = g->edx;
    edx = t5;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)eax;
    eax = t4;
    COW_AT(100c63f3)
    if (eax == 0u)
    {
        loc_244 = 0u;
    }
    else
    {
    COW_AT(100c63f7)
        wr32(sp0 - 0x244u, 1u);
        loc_244 = 1u;
    }
    COW_AT(100c63ff)
    wr32(COW_IMG(0x1048a344u), self);
    t6 = rd32(self + 0x6a4u) & 0x10u;
    wr32(self + 0x6a4u, t6);
    wr8(self + 0xb2u, rd8(self + 0xb2u) & 0xfeu);
    wr32(sp0 - 0x280u, self + 0x60cu);
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x10026e00u), 1, self + 0x60cu);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    COW_AT(100c642e)
    wr32(sp0 - 0x284u, self + 0x62cu);
    g->eax = self + 0x62cu;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t9 = cow_cdecl(g, COW_IMG(0x10026e00u), 1, self + 0x62cu);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(100c643a)
    if ((uint8_t)ebx == 0u)
    {
    COW_AT(100c6441)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x27cu;
        t11 = cow_thiscall(g, COW_IMG(0x100846d0u), self, 0);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    COW_AT(100c6448)
        if (eax != 0u)
        {
    COW_AT(100c644c)
            d14 = (double)rdf32(self + 0x8bcu);
            if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c645f)
                wr32(self + 0x8bcu, 0x42000000u);
                wr8(self + 0x8b6u, 1u);
            }
    COW_AT(100c6470)
            wr32(sp0 - 0x280u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x27cu;
            t15 = cow_fastcall(g, COW_IMG(0x100846f0u), self, edx, 1, 0u);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
        }
    COW_AT(100c6479)
        d18 = (double)rdf32(self + 0x8bcu);
        if ((cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        }
        else
        {
            eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100c648e)
            g->esp = sp0 - 0x27cu;
            t19 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            d20 = cow_take_float(g);
            eax = t19;
            x0 = d20;
    COW_AT(100c6493)
            d21 = fr(g, (double)rdf32(self + 0x8bcu) - x0);
            wrf32(self + 0x8bcu, (float)d21);
        }
    }
    COW_AT(100c649f)
    g->eax = eax;
    g->edx = rd32(self);
    t22 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t23 = cow_thiscall(g, rd32(t22 + 0x1bcu), self, 0);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(100c64a9)
    wr32(sp0 - 0x280u, eax);
    wr32(sp0 - 0x284u, sp0 - 0x208u);
    g->eax = sp0 - 0x208u;
    g->esp = sp0 - 0x27cu;
    t26 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x208u, eax);
    eax = t26;
    COW_AT(100c64b4)
    g->eax = eax;
    g->edx = rd32(self);
    t27 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t28 = cow_thiscall(g, rd32(t27 + 0x1c0u), self, 0);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(100c64c1)
    wr32(sp0 - 0x280u, eax);
    wr32(sp0 - 0x284u, sp0 - 0x1e8u);
    g->eax = sp0 - 0x1e8u;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t31 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x1e8u, eax);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(100c64cf)
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1c4u;
    t33 = cow_bridge_indirect(g, COW_IMG(0x100a4ed0u), 0u, 46u, (const uint32_t[]){rd32(sp0 - 0x27cu), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u)}, self, g->edx, eax, 184u);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(100c64d9)
    wr8(sp0 - 0x249u, (uint8_t)eax);
    if ((uint8_t)eax != 0u)
    {
        ebp = in_ebp;
        edi = in_edi;
        goto L_100c81f8;
    }
    COW_AT(100c64e5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t35 = cow_thiscall(g, COW_IMG(0x100d1070u), self, 0);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    COW_AT(100c64ec)
    if (rd8(self + 0x103u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
    COW_AT(100c64fa)
    if (rd8(self + 0x104u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    COW_AT(100c6508)
    g->eax = eax;
    g->edx = rd32(self);
    t37 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t38 = cow_thiscall(g, rd32(t37 + 0x19cu), self, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(100c6512)
    if ((uint8_t)eax != 0u) goto L_100c666c;
    COW_AT(100c651a)
    if (rd8(self + 0x102u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    COW_AT(100c6528)
    if (rd8(self + 0x101u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    COW_AT(100c6536)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t40 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(100c653d)
    wr32(sp0 - 0x280u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t42 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t43 = g->edx;
    eax = t42;
    edx = t43;
    COW_AT(100c6545)
    if ((uint8_t)eax != 0u) goto L_100c655c;
    COW_AT(100c6549)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t44 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(100c6550)
    wr32(sp0 - 0x280u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x27cu;
    t46 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    eax = t46;
    COW_AT(100c6558)
    if ((uint8_t)eax == 0u) goto L_100c6591;
L_100c655c: ;
    COW_AT(100c655c)
    if (rd32(self + 0x768u) != 0u)
    {
        eax = rd32(self + 0x768u);
        goto L_100c6591;
    }
    COW_AT(100c6566)
    wr32(sp0 - 0x26cu, rd32(COW_IMG(0x1035d710u)));
    wr32(sp0 - 0x268u, rd32(COW_IMG(0x1035d714u)));
    wr32(sp0 - 0x264u, rd32(COW_IMG(0x1035d718u)));
    wr32(sp0 - 0x260u, rd32(COW_IMG(0x1035d71cu)));
    edx = rd32(COW_IMG(0x1035d718u));
    loc_26c = rd32(COW_IMG(0x1035d710u));
    loc_268 = rd32(COW_IMG(0x1035d714u));
    loc_264 = rd32(COW_IMG(0x1035d718u));
    loc_260 = rd32(COW_IMG(0x1035d71cu));
L_100c668b: ;
    COW_AT(100c668b)
    wr32(sp0 - 0x280u, in_ebp);
    wr32(sp0 - 0x284u, in_edi);
    g->eax = rd32(self);
    g->edx = edx;
    t72 = rd32(self);
    g->esp = sp0 - 0x284u;
    t73 = cow_thiscall(g, rd32(t72 + 0x318u), self, 0);
    t74 = g->edx;
    eax = t73;
    edx = t74;
    ebx = ebx & 0xffffff00u;
    COW_AT(100c6699)
    if (eax != 0u)
    {
        loc_274_f = (double)rdf32(sp0 - 0x274u);
    }
    else
    {
    COW_AT(100c66a1)
        if (rd8(self + 0x102u) != 0u)
        {
            loc_274_f = (double)rdf32(sp0 - 0x274u);
        }
        else
        {
    COW_AT(100c66af)
            if (rd32(self + 0x7a4u) != 0xffffffffu)
            {
                loc_274_f = (double)rdf32(sp0 - 0x274u);
            }
            else
            {
    COW_AT(100c66bc)
                if (rd32(self + 0x86cu) == 0u)
                {
                    eax = rd32(self + 0x86cu);
    COW_AT(100c67df)
                    g->eax = eax;
                    g->edx = rd32(self);
                    t89 = rd32(self);
                    g->esp = sp0 - 0x284u;
                    t90 = cow_thiscall(g, rd32(t89 + 0x304u), self, 0);
                    t91 = g->edx;
                    eax = t90;
                    edx = t91;
    COW_AT(100c67e9)
                    if ((uint8_t)eax == 0u) goto L_100c6821;
    COW_AT(100c67ed)
                    g->eax = rd32(self);
                    g->edx = edx;
                    t92 = rd32(self);
                    g->esp = sp0 - 0x284u;
                    t93 = cow_thiscall(g, rd32(t92 + 0x340u), self, 0);
                    t94 = g->edx;
                    eax = t93;
                    edx = t94;
    COW_AT(100c67f7)
                    if ((uint8_t)eax == 0u) goto L_100c6821;
    COW_AT(100c67fb)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t95 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
                    t96 = g->edx;
                    eax = t95;
                    edx = t96;
    COW_AT(100c6802)
                    wr32(sp0 - 0x288u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t97 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
                    t98 = g->edx;
                    eax = t97;
                    edx = t98;
    COW_AT(100c680a)
                    if ((uint8_t)eax != 0u) goto L_100c6833;
    COW_AT(100c680e)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t99 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
                    t100 = g->edx;
                    eax = t99;
                    edx = t100;
    COW_AT(100c6815)
                    wr32(sp0 - 0x288u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t101 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
                    t102 = g->edx;
                    eax = t101;
                    edx = t102;
    COW_AT(100c681d)
                    if ((uint8_t)eax != 0u) goto L_100c6833;
L_100c6821: ;
    COW_AT(100c6821)
                    g->eax = eax;
                    g->edx = rd32(self);
                    t103 = rd32(self);
                    g->esp = sp0 - 0x284u;
                    t104 = cow_thiscall(g, rd32(t103 + 0x330u), self, 0);
                    t105 = g->edx;
                    eax = t104;
                    edx = t105;
    COW_AT(100c682b)
                    if ((uint8_t)eax != 0u) goto L_100c6ab5;
L_100c6833: ;
    COW_AT(100c6833)
                    wr32(sp0 - 0x288u, self + 0xe4u);
                    wr32(sp0 - 0x28cu, sp0 - 0x230u);
                    g->eax = self + 0xe4u;
                    g->ecx = sp0 - 0x230u;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t106 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0xe4u);
                    t107 = g->ecx;
                    t108 = g->edx;
                    eax = t106;
                    ecx = t107;
                    edx = t108;
    COW_AT(100c6844)
                    wr32(sp0 - 0x270u, 0x3e000000u);
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t109 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
                    t110 = g->ecx;
                    t111 = g->edx;
                    eax = t109;
                    ecx = t110;
                    edx = t111;
    COW_AT(100c6854)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(100c6858)
                        g->eax = eax;
                        g->edx = rd32(self);
                        t112 = rd32(self);
                        g->esp = sp0 - 0x284u;
                        t113 = cow_thiscall(g, rd32(t112 + 0x13cu), self, 0);
                        t114 = g->ecx;
                        t115 = g->edx;
                        eax = t113;
                        ecx = t114;
                        edx = t115;
    COW_AT(100c6862)
                        if (eax != 0u)
                        {
    COW_AT(100c6866)
                            g->eax = rd32(self);
                            g->edx = edx;
                            t116 = rd32(self);
                            g->esp = sp0 - 0x284u;
                            t117 = cow_thiscall(g, rd32(t116 + 0x13cu), self, 0);
                            t118 = g->ecx;
                            t119 = g->edx;
                            eax = t117;
                            ecx = t118;
                            edx = t119;
    COW_AT(100c6870)
                            wr32(sp0 - 0x270u, eax);
                            d120 = fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x10331364u)));
                            wrf32(sp0 - 0x270u, (float)(double)(float)d120);
                        }
                    }
    COW_AT(100c6882)
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t121 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t122 = g->edx;
                    d123 = cow_take_float(g);
                    eax = t121;
                    edx = t122;
                    x0 = d123;
    COW_AT(100c6887)
                    wrf32(sp0 - 0x274u, (float)(double)(float)x0);
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        loc_274_f = (double)(float)x0;
                    }
                    else
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        loc_274_f = (double)(float)x0;
    COW_AT(100c689e)
                        ebp = rd32(sp0 - 0x270u);
L_100c68a8: ;
    COW_AT(100c68a8)
                        d124 = fr(g, (double)rdf32(sp0 - 0x230u) - (double)rdf32(self + 0x61cu));
                        wrf32(sp0 - 0x25cu, (float)(double)(float)d124);
                        d125 = fr(g, (double)rdf32(sp0 - 0x22cu) - (double)rdf32(self + 0x620u));
                        wrf32(sp0 - 0x258u, (float)(double)(float)d125);
                        d126 = fr(g, (double)rdf32(sp0 - 0x228u) - (double)rdf32(self + 0x624u));
                        wrf32(sp0 - 0x254u, (float)(double)(float)d126);
                        if ((cow_fsw(g, (double)(float)d124, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, (double)(float)d124, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            loc_25c_f = (double)(float)d124;
                            loc_258_f = (double)(float)d125;
                            loc_254_f = (double)(float)d126;
                        }
                        else
                        {
                            eax = cow_fsw(g, (double)(float)d124, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            loc_25c_f = (double)(float)d124;
                            loc_258_f = (double)(float)d125;
                            loc_254_f = (double)(float)d126;
    COW_AT(100c68e1)
                            d127 = fr(g, loc_25c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x25cu, (float)(double)(float)d127);
                            loc_25c_f = (double)(float)d127;
                        }
    COW_AT(100c68ef)
                        if (!(loc_25c_f < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6900)
                            d128 = fr(g, loc_25c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x25cu, (float)(double)(float)d128);
                            loc_25c_f = (double)(float)d128;
                        }
    COW_AT(100c690e)
                        if ((cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6921)
                            d129 = fr(g, loc_258_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x258u, (float)(double)(float)d129);
                            loc_258_f = (double)(float)d129;
                        }
    COW_AT(100c692f)
                        if (!(loc_258_f < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6940)
                            d130 = fr(g, loc_258_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x258u, (float)(double)(float)d130);
                            loc_258_f = (double)(float)d130;
                        }
    COW_AT(100c694e)
                        if ((cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6961)
                            d131 = fr(g, loc_254_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x254u, (float)(double)(float)d131);
                            loc_254_f = (double)(float)d131;
                        }
    COW_AT(100c696f)
                        if (!(loc_254_f < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6980)
                            d132 = fr(g, loc_254_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x254u, (float)(double)(float)d132);
                            loc_254_f = (double)(float)d132;
                        }
    COW_AT(100c698e)
                        wr32(sp0 - 0x288u, ebp);
                        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
                        g->eax = eax;
                        g->ecx = sp0 - 0x25cu;
                        g->esp = sp0 - 0x284u;
                        t133 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x25cu, ebp);
                        t134 = g->ecx;
                        eax = t133;
                        ecx = t134;
    COW_AT(100c6999)
                        wr32(sp0 - 0x290u, sp0 - 0x25cu);
                        wr32(sp0 - 0x294u, self + 0x61cu);
                        g->eax = eax;
                        g->edx = sp0 - 0x25cu;
                        g->esp = sp0 - 0x28cu;
                        t135 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x61cu, sp0 - 0x25cu);
                        t136 = g->edx;
                        eax = t135;
                        edx = t136;
    COW_AT(100c69a4)
                        d137 = fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
                        wrf32(sp0 - 0x274u, (float)(double)(float)d137);
                        if ((cow_fsw(g, d137, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
                        {
                            eax = cow_fsw(g, d137, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            loc_274_f = (double)(float)d137;
                            goto L_100c68a8;
                        }
                        eax = cow_fsw(g, d137, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        loc_274_f = (double)(float)d137;
                    }
    COW_AT(100c69c8)
                    d138 = (double)rdf32(self + 0x61cu);
                    if ((cow_fsw(g, d138, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d138, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d138, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c69dd)
                        d139 = fr(g, (double)rdf32(self + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x61cu, (float)d139);
                    }
    COW_AT(100c69ef)
                    d140 = (double)rdf32(self + 0x61cu);
                    if (!(d140 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6a02)
                        d141 = fr(g, (double)rdf32(self + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x61cu, (float)d141);
                    }
    COW_AT(100c6a14)
                    d142 = (double)rdf32(self + 0x620u);
                    if ((cow_fsw(g, d142, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d142, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d142, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6a29)
                        d143 = fr(g, (double)rdf32(self + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x620u, (float)d143);
                    }
    COW_AT(100c6a3b)
                    d144 = (double)rdf32(self + 0x620u);
                    if (!(d144 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d144, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d144, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6a4e)
                        d145 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x620u, (float)d145);
                    }
    COW_AT(100c6a60)
                    d146 = (double)rdf32(self + 0x624u);
                    if ((cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6a75)
                        d147 = fr(g, (double)rdf32(self + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x624u, (float)d147);
                    }
    COW_AT(100c6a87)
                    d148 = (double)rdf32(self + 0x624u);
                    if (d148 < (double)rdf32(COW_IMG(0x10329d28u)))
                    {
    COW_AT(100c6a9e)
                        d149 = fr(g, (double)rdf32(self + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x624u, (float)d149);
                    }
                }
                else
                {
                    eax = rd32(self + 0x86cu);
    COW_AT(100c66ca)
                    d75 = (double)rdf32(self + 0x870u);
                    if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        loc_274_f = (double)rdf32(sp0 - 0x274u);
                    }
                    else
                    {
                        eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(100c66e3)
                        d76 = fr(g, (double)rdf32(self + 0x874u) + (double)rdf32(self + 0x620u));
                        d77 = (double)rdf32(COW_IMG(0x10329d30u));
                        wrf32(self + 0x620u, (float)d76);
                        if ((cow_fsw(g, d76, d77, 1u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d76, d77, 1u) & 0x4100u;
                            x0 = d76;
    COW_AT(100c6712)
                        }
                        else
                        {
                            eax = cow_fsw(g, d76, d77, 1u) & 0x4100u;
                            x0 = d76;
    COW_AT(100c6704)
                            d78 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(self + 0x620u, (float)d78);
                        }
    COW_AT(100c6714)
                        d79 = (double)rdf32(self + 0x620u);
                        if (!(d79 < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6727)
                            d80 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(self + 0x620u, (float)d80);
                        }
    COW_AT(100c6739)
                        d81 = (double)rdf32(self + 0x874u);
                        if (!(d81 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                            x0 = (double)rdf32(self + 0x874u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                            x0 = (double)rdf32(self + 0x874u);
    COW_AT(100c6752)
                            x0 = -x0;
                        }
    COW_AT(100c6754)
                        d82 = fr(g, (double)rdf32(self + 0x870u) - x0);
                        if (!(d82 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            x0 = d82;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                            x0 = d82;
    COW_AT(100c6767)
                            d83 = (double)rdf32(self + 0x874u);
                            if ((cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) == 0u)
                            {
                                eax = cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(100c677c)
                                x0 = -x0;
                            }
    COW_AT(100c677e)
                            d84 = fr(g, x0 + (double)rdf32(self + 0x620u));
                            d85 = (double)rdf32(COW_IMG(0x10329d30u));
                            wrf32(self + 0x620u, (float)d84);
                            if ((cow_fsw(g, d84, d85, 1u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d84, d85, 1u) & 0x4100u;
                                x0 = d84;
    COW_AT(100c67a7)
                            }
                            else
                            {
                                eax = cow_fsw(g, d84, d85, 1u) & 0x4100u;
                                x0 = d84;
    COW_AT(100c6799)
                                d86 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
                                wrf32(self + 0x620u, (float)d86);
                            }
    COW_AT(100c67a9)
                            d87 = (double)rdf32(self + 0x620u);
                            if (d87 < (double)rdf32(COW_IMG(0x10329d28u)))
                            {
    COW_AT(100c67bc)
                                d88 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                                wrf32(self + 0x620u, (float)d88);
                            }
    COW_AT(100c67ce)
                            x0 = (double)rdf32(COW_IMG(0x103295d8u));
                        }
    COW_AT(100c67d4)
                        wrf32(self + 0x870u, (float)x0);
                        loc_274_f = (double)rdf32(sp0 - 0x274u);
                    }
                }
            }
        }
    }
L_100c6f4a: ;
    COW_AT(100c6f4a)
    if (rd32(self + 0x7a4u) == 0xffffffffu)
    {
        eax = rd32(self + 0x7a4u);
    }
    else
    {
        eax = rd32(self + 0x7a4u);
    COW_AT(100c6f5b)
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t238 = cow_thiscall(g, COW_IMG(0x10081550u), self + 0x7a8u, 0);
        t239 = g->ecx;
        eax = t238;
        ecx = t239;
    COW_AT(100c6f66)
        if (self == eax) goto L_100c70e6;
        edi = eax;
    COW_AT(100c6f70)
        if (edi == 0u) goto L_100c70e6;
    COW_AT(100c6f78)
        if ((int32_t)rd32(self + 0x7a4u) < 48)
        {
            eax = rd32(self + 0x7a4u);
            goto L_100c6fad;
        }
        eax = rd32(self + 0x7a4u);
    COW_AT(100c6f83)
        if ((int32_t)eax >= 61) goto L_100c6fad;
    COW_AT(100c6f88)
        wr32(sp0 - 0x288u, 0u);
        wr32(sp0 - 0x28cu, self);
        wr32(sp0 - 0x290u, edi);
        wr32(sp0 - 0x294u, eax);
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        g->edx = sp0 - 0x240u;
        g->esp = sp0 - 0x1e4u;
        cow_bridge_indirect(g, COW_IMG(0x1003ba20u), 0u, 45u, (const uint32_t[]){sp0 - 0x240u, eax, edi, self, 0u, rd32(sp0 - 0x284u), rd32(sp0 - 0x280u), rd32(sp0 - 0x27cu), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u)}, g->ecx, g->edx, g->eax, 180u);
        t240 = g->edx;
        edx = t240;
    COW_AT(100c6f97)
        g->eax = rd32(edi);
        g->edx = edx;
        t241 = rd32(edi);
        g->esp = sp0 - 0x284u;
        t242 = cow_thiscall(g, rd32(t241 + 0x1bcu), edi, 0);
        t243 = g->edx;
        eax = t242;
        edx = t243;
    COW_AT(100c6fa4)
        t244 = rd32(eax + 4u);
        wr32(sp0 - 0x23cu, t244);
L_100c6fbd: ;
    COW_AT(100c6fbd)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t248 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x1d8u, 0);
        t249 = g->edx;
        eax = t248;
        edx = t249;
    COW_AT(100c6fc9)
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t250 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x1d8u, 0);
        eax = t250;
    COW_AT(100c6fd5)
        g->eax = eax;
        g->edx = rd32(edi);
        t251 = rd32(edi);
        g->esp = sp0 - 0x284u;
        t252 = cow_thiscall(g, rd32(t251 + 0x1c0u), edi, 0);
        t253 = g->edx;
        eax = t252;
        edx = t253;
    COW_AT(100c6fdf)
        t254 = rd32(eax + 4u);
        wr32(sp0 - 0x288u, t254);
        g->eax = t254;
        g->esp = sp0 - 0x284u;
        t255 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x1d8u, 1, t254);
        eax = t255;
    COW_AT(100c6fef)
        wr32(sp0 - 0x288u, self + 0x7b4u);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        g->edx = sp0 - 0x220u;
        g->esp = sp0 - 0x284u;
        cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x1d8u, 2, sp0 - 0x220u, self + 0x7b4u);
        t256 = g->edx;
        edx = t256;
    COW_AT(100c7007)
        wr32(sp0 - 0x288u, sp0 - 0x220u);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        g->eax = sp0 - 0x220u;
        g->esp = sp0 - 0x284u;
        t257 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x240u, sp0 - 0x220u);
        eax = t257;
    COW_AT(100c7016)
        g->eax = eax;
        g->edx = rd32(self);
        t258 = rd32(self);
        g->esp = sp0 - 0x284u;
        t259 = cow_thiscall(g, rd32(t258 + 0x1bcu), self, 0);
        t260 = g->edx;
        eax = t259;
        edx = t260;
    COW_AT(100c7023)
        wr32(sp0 - 0x288u, eax);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, sp0 - 0x240u, eax);
        t261 = g->edx;
        edx = t261;
    COW_AT(100c7033)
        if ((int32_t)rd32(self + 0x7a4u) < 48)
        {
            eax = rd32(self + 0x7a4u);
            goto L_100c704a;
        }
        eax = rd32(self + 0x7a4u);
    COW_AT(100c7041)
        if ((int32_t)eax < 61) goto L_100c70d8;
L_100c704a: ;
    COW_AT(100c704a)
        g->eax = eax;
        g->edx = rd32(edi);
        t262 = rd32(edi);
        g->esp = sp0 - 0x284u;
        t263 = cow_thiscall(g, rd32(t262 + 0x1c0u), edi, 0);
        t264 = g->edx;
        eax = t263;
        edx = t264;
    COW_AT(100c7054)
        d265 = fr(g, (double)rdf32(eax + 4u) + (double)rdf32(COW_IMG(0x1032df98u)));
        wrf32(sp0 - 0x270u, (float)(double)(float)d265);
        g->eax = rd32(self);
        t266 = rd32(self);
        g->esp = sp0 - 0x284u;
        t267 = cow_thiscall(g, rd32(t266 + 0x1c0u), self, 0);
        eax = t267;
    COW_AT(100c706b)
        t268 = rd32(sp0 - 0x270u);
        wr32(eax + 4u, t268);
        g->eax = eax;
        g->edx = rd32(self);
        t269 = rd32(self);
        g->esp = sp0 - 0x284u;
        t270 = cow_thiscall(g, rd32(t269 + 0x1c0u), self, 0);
        t271 = g->edx;
        eax = t270;
        edx = t271;
    COW_AT(100c707c)
        d272 = (double)rdf32(eax + 4u);
        if ((cow_fsw(g, d272, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d272, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
    COW_AT(100c708e)
            g->eax = rd32(self);
            t273 = rd32(self);
            g->esp = sp0 - 0x284u;
            t274 = cow_thiscall(g, rd32(t273 + 0x1c0u), self, 0);
            eax = t274;
    COW_AT(100c7098)
            d275 = fr(g, (double)rdf32(eax + 4u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(eax + 4u, (float)d275);
            eax = eax + 4u;
        }
    COW_AT(100c70a6)
        g->eax = eax;
        g->edx = rd32(self);
        t276 = rd32(self);
        g->esp = sp0 - 0x284u;
        t277 = cow_thiscall(g, rd32(t276 + 0x1c0u), self, 0);
        t278 = g->edx;
        eax = t277;
        edx = t278;
    COW_AT(100c70b0)
        d279 = (double)rdf32(eax + 4u);
        if (!(d279 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d279, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
    COW_AT(100c70c0)
            g->eax = rd32(self);
            g->edx = edx;
            t280 = rd32(self);
            g->esp = sp0 - 0x284u;
            t281 = cow_thiscall(g, rd32(t280 + 0x1c0u), self, 0);
            t282 = g->edx;
            eax = t281;
            edx = t282;
    COW_AT(100c70ca)
            d283 = fr(g, (double)rdf32(eax + 4u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(eax + 4u, (float)d283);
            eax = eax + 4u;
        }
L_100c70d8: ;
    COW_AT(100c70d8)
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t284 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        eax = t284;
    COW_AT(100c70e4)
    }
L_100c70ec: ;
    COW_AT(100c70ec)
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    wr32(sp0 - 0x28cu, sp0 - 0x26cu);
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t285 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x26cu, sp0 - 0x26cu);
    d286 = cow_take_float(g);
    eax = t285;
    x0 = d286;
    COW_AT(100c70fb)
    if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    }
    else
    {
    COW_AT(100c710d)
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        g->eax = sp0 - 0x26cu;
        g->edx = rd32(self);
        t287 = rd32(self);
        g->esp = sp0 - 0x288u;
        t288 = cow_thiscall(g, rd32(t287 + 0x1bcu), self, 0);
        t289 = g->ecx;
        t290 = g->edx;
        eax = t288;
        ecx = t289;
        edx = t290;
    COW_AT(100c711c)
        wr32(sp0 - 0x28cu, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, eax, sp0 - 0x26cu);
        t291 = g->ecx;
        t292 = g->edx;
        ecx = t291;
        edx = t292;
    COW_AT(100c7122)
        wr32(sp0 - 0x290u, COW_IMG(0x1048a37cu));
        wr32(sp0 - 0x294u, sp0 - 0x26cu);
        g->eax = sp0 - 0x26cu;
        g->esp = sp0 - 0x28cu;
        t293 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x26cu, COW_IMG(0x1048a37cu));
        eax = t293;
    COW_AT(100c7131)
    }
    COW_AT(100c7134)
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = eax;
    g->edx = rd32(self);
    t294 = rd32(self);
    g->esp = sp0 - 0x284u;
    t295 = cow_thiscall(g, rd32(t294 + 0x1bcu), self, 1, sp0 - 0x26cu);
    t296 = g->ecx;
    t297 = g->edx;
    eax = t295;
    ecx = t296;
    edx = t297;
    COW_AT(100c7143)
    wr32(sp0 - 0x288u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, eax, rd32(sp0 - 0x284u));
    t298 = g->edx;
    edx = t298;
    COW_AT(100c7149)
    if (rd32(self + 0xb4u) == 0u) goto L_100c7607;
    eax = rd32(self + 0xb4u);
    COW_AT(100c715a)
    wr32(sp0 - 0x26cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t299 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x26cu, 0);
    t300 = g->edx;
    eax = t299;
    edx = t300;
    COW_AT(100c7167)
    if ((uint8_t)eax == 0u) goto L_100c7607;
    COW_AT(100c716f)
    if (rd32(self + 0x80u) != 0u)
    {
        eax = rd32(self + 0x80u);
        goto L_100c7450;
    }
    COW_AT(100c717f)
    g->eax = rd32(self);
    g->edx = edx;
    t301 = rd32(self);
    g->esp = sp0 - 0x280u;
    t302 = cow_thiscall(g, rd32(t301 + 0x134u), self, 0);
    t303 = g->edx;
    eax = t302;
    edx = t303;
    COW_AT(100c7189)
    if ((uint8_t)eax != 0u) goto L_100c7406;
    COW_AT(100c7191)
    if (rd8(self + 0x102u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        goto L_100c7410;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    COW_AT(100c719f)
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100c7406;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    COW_AT(100c71ad)
    g->eax = eax;
    g->edx = rd32(self);
    t304 = rd32(self);
    g->esp = sp0 - 0x280u;
    t305 = cow_thiscall(g, rd32(t304 + 0x34cu), self, 0);
    t306 = g->edx;
    eax = t305;
    edx = t306;
    COW_AT(100c71b7)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c71bf)
    g->eax = rd32(self);
    g->edx = edx;
    t307 = rd32(self);
    g->esp = sp0 - 0x280u;
    t308 = cow_thiscall(g, rd32(t307 + 0x358u), self, 0);
    t309 = g->edx;
    eax = t308;
    edx = t309;
    COW_AT(100c71c9)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c71d1)
    g->eax = eax;
    g->edx = rd32(self);
    t310 = rd32(self);
    g->esp = sp0 - 0x280u;
    t311 = cow_thiscall(g, rd32(t310 + 0x360u), self, 0);
    t312 = g->edx;
    eax = t311;
    edx = t312;
    COW_AT(100c71db)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c71e3)
    g->eax = rd32(self);
    g->edx = edx;
    t313 = rd32(self);
    g->esp = sp0 - 0x280u;
    t314 = cow_thiscall(g, rd32(t313 + 0x36cu), self, 0);
    t315 = g->edx;
    eax = t314;
    edx = t315;
    COW_AT(100c71ed)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c71f5)
    g->eax = eax;
    g->edx = rd32(self);
    t316 = rd32(self);
    g->esp = sp0 - 0x280u;
    t317 = cow_thiscall(g, rd32(t316 + 0x378u), self, 0);
    t318 = g->edx;
    eax = t317;
    edx = t318;
    COW_AT(100c71ff)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c7207)
    g->eax = rd32(self);
    g->edx = edx;
    t319 = rd32(self);
    g->esp = sp0 - 0x280u;
    t320 = cow_thiscall(g, rd32(t319 + 0x384u), self, 0);
    t321 = g->edx;
    eax = t320;
    edx = t321;
    COW_AT(100c7211)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c7219)
    g->eax = eax;
    g->edx = rd32(self);
    t322 = rd32(self);
    g->esp = sp0 - 0x280u;
    t323 = cow_thiscall(g, rd32(t322 + 0x394u), self, 0);
    t324 = g->edx;
    eax = t323;
    edx = t324;
    COW_AT(100c7223)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c722b)
    g->eax = rd32(self);
    g->edx = edx;
    t325 = rd32(self);
    g->esp = sp0 - 0x280u;
    t326 = cow_thiscall(g, rd32(t325 + 0x3a4u), self, 0);
    t327 = g->edx;
    eax = t326;
    edx = t327;
    COW_AT(100c7235)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c723d)
    g->eax = eax;
    g->edx = rd32(self);
    t328 = rd32(self);
    g->esp = sp0 - 0x280u;
    t329 = cow_thiscall(g, rd32(t328 + 0x154u), self, 0);
    t330 = g->edx;
    eax = t329;
    edx = t330;
    COW_AT(100c7247)
    if (eax != 0u) goto L_100c7406;
    COW_AT(100c724f)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->ebx = 0xffffffffu;
    g->eax = sp0 - 0x268u;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t331 = cow_thiscall(g, COW_IMG(0x100c83c0u), self, 1, sp0 - 0x268u);
    t332 = g->edx;
    eax = t331;
    edx = t332;
    COW_AT(100c725b)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->eax = eax;
    g->esp = sp0 - 0x280u;
    t333 = cow_thiscall(g, COW_IMG(0x100c9810u), self, 1, sp0 - 0x268u);
    eax = t333;
    COW_AT(100c7267)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->esp = sp0 - 0x280u;
    cow_call_regs(g, COW_IMG(0x100c9c10u), eax, self, sp0 - 0x268u, 0, 1, sp0 - 0x268u);
    t334 = g->edx;
    edx = t334;
    COW_AT(100c7273)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->esp = sp0 - 0x280u;
    t335 = cow_call_regs(g, COW_IMG(0x100ca310u), sp0 - 0x268u, self, edx, 0, 1, sp0 - 0x268u);
    t336 = g->edx;
    eax = t335;
    edx = t336;
    COW_AT(100c727f)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t337 = cow_thiscall(g, COW_IMG(0x100ca730u), self, 1, sp0 - 0x268u);
    t338 = g->edx;
    eax = t337;
    edx = t338;
    COW_AT(100c728b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t339 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t340 = g->edx;
    eax = t339;
    edx = t340;
    COW_AT(100c7292)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t341 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t342 = g->edx;
    eax = t341;
    edx = t342;
    COW_AT(100c729a)
    if ((uint8_t)eax == 0u) goto L_100c72b1;
    COW_AT(100c72a0)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->eax = eax;
    g->edx = sp0 - 0x268u;
    g->esp = sp0 - 0x280u;
    t343 = cow_thiscall(g, COW_IMG(0x100c8ed0u), self, 1, sp0 - 0x268u);
    t344 = g->edx;
    eax = t343;
    edx = t344;
    COW_AT(100c72aa)
    edi = eax;
L_100c759f: ;
    COW_AT(100c759f)
    if (rd8(self + 0x8b4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x8b4u);
        goto L_100c75f1;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x8b4u);
    COW_AT(100c75a9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t451 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t452 = g->edx;
    eax = t451;
    edx = t452;
    COW_AT(100c75b0)
    if (eax > 0x53u) goto L_100c75c4;
    COW_AT(100c75b5)
    t453 = rd32(COW_IMG(0x100c8224u) + rd8(COW_IMG(0x100c822cu) + eax) * 4u);
    switch (t453 - RD)
    {
    case 0x100c75c4u: goto L_100c75c4;
    case 0x100c75eau: goto L_100c75ea;
    default: rt_fatal(g, COW_IMG(0x100c75bdu), "switch");
    }
    return 0;
L_100c6591: ;
    COW_AT(100c6591)
    g->eax = eax;
    g->edx = rd32(self);
    t47 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t48 = cow_thiscall(g, rd32(t47 + 0x1bcu), self, 0);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(100c659b)
    wr32(sp0 - 0x280u, eax);
    wr32(sp0 - 0x284u, sp0 - 0x240u);
    g->eax = sp0 - 0x240u;
    g->esp = sp0 - 0x27cu;
    t51 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x240u, eax);
    eax = t51;
    COW_AT(100c65a6)
    wr32(sp0 - 0x288u, self + 0x5c4u);
    wr32(sp0 - 0x28cu, sp0 - 0x230u);
    g->eax = eax;
    g->ecx = self + 0x5c4u;
    g->edx = sp0 - 0x230u;
    g->esp = sp0 - 0x284u;
    t52 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0x5c4u);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(100c65b7)
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t55 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t56 = g->edx;
    d57 = cow_take_float(g);
    eax = t55;
    edx = t56;
    x0 = d57;
    COW_AT(100c65bf)
    wrf32(sp0 - 0x274u, (float)(double)(float)x0);
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        loc_274_f = (double)(float)x0;
        loc_26c_f = (double)rdf32(sp0 - 0x26cu);
        loc_268_f = (double)rdf32(sp0 - 0x268u);
        loc_264_f = (double)rdf32(sp0 - 0x264u);
        loc_240_f = (double)rdf32(sp0 - 0x240u);
        loc_23c_f = (double)rdf32(sp0 - 0x23cu);
        loc_238_f = (double)rdf32(sp0 - 0x238u);
        goto L_100c665c;
    }
    loc_274_f = (double)(float)x0;
    loc_26c_f = (double)rdf32(sp0 - 0x26cu);
    loc_268_f = (double)rdf32(sp0 - 0x268u);
    loc_264_f = (double)rdf32(sp0 - 0x264u);
    loc_240_f = (double)rdf32(sp0 - 0x240u);
    loc_23c_f = (double)rdf32(sp0 - 0x23cu);
    loc_238_f = (double)rdf32(sp0 - 0x238u);
L_100c65d6: ;
    COW_AT(100c65d6)
    wr32(sp0 - 0x280u, sp0 - 0x240u);
    wr32(sp0 - 0x284u, sp0 - 0x230u);
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = sp0 - 0x240u;
    g->edx = sp0 - 0x26cu;
    g->esp = sp0 - 0x27cu;
    t58 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, sp0 - 0x230u, sp0 - 0x240u);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(100c65ea)
    d60 = fr(g, (double)rdf32(sp0 - 0x26cu) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x26cu, (float)(double)(float)d60);
    d61 = fr(g, (double)rdf32(sp0 - 0x268u) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x268u, (float)(double)(float)d61);
    d62 = fr(g, (double)rdf32(sp0 - 0x264u) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x264u, (float)(double)(float)d62);
    d63 = fr(g, (double)rdf32(sp0 - 0x240u) + (double)(float)d60);
    wrf32(sp0 - 0x240u, (float)(double)(float)d63);
    d64 = fr(g, (double)rdf32(sp0 - 0x23cu) + (double)(float)d61);
    wrf32(sp0 - 0x23cu, (float)(double)(float)d64);
    d65 = fr(g, (double)rdf32(sp0 - 0x238u) + (double)(float)d62);
    wrf32(sp0 - 0x238u, (float)(double)(float)d65);
    d66 = fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x274u, (float)(double)(float)d66);
    if ((cow_fsw(g, d66, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
    {
        loc_274_f = (double)(float)d66;
        loc_26c_f = (double)(float)d60;
        loc_268_f = (double)(float)d61;
        loc_264_f = (double)(float)d62;
        loc_240_f = (double)(float)d63;
        loc_23c_f = (double)(float)d64;
        loc_238_f = (double)(float)d65;
        goto L_100c65d6;
    }
    loc_274_f = (double)(float)d66;
    loc_26c_f = (double)(float)d60;
    loc_268_f = (double)(float)d61;
    loc_264_f = (double)(float)d62;
    loc_240_f = (double)(float)d63;
    loc_23c_f = (double)(float)d64;
    loc_238_f = (double)(float)d65;
L_100c665c: ;
    COW_AT(100c665c)
    g->eax = rd32(self);
    t67 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t68 = cow_thiscall(g, rd32(t67 + 0x1bcu), self, 0);
    eax = t68;
    COW_AT(100c6666)
    ecx = sp0 - 0x240u;
L_100c667c: ;
    COW_AT(100c667c)
    wr32(sp0 - 0x280u, eax);
    wr32(sp0 - 0x284u, ecx);
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->edx = sp0 - 0x26cu;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, ecx, eax);
    t71 = g->edx;
    edx = t71;
    COW_AT(100c6688)
    loc_26c = rd32(sp0 - 0x26cu);
    loc_268 = rd32(sp0 - 0x268u);
    loc_264 = rd32(sp0 - 0x264u);
    loc_260 = rd32(sp0 - 0x260u);
    goto L_100c668b;
L_100c666c: ;
    COW_AT(100c666c)
    g->eax = rd32(self);
    t69 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t70 = cow_thiscall(g, rd32(t69 + 0x1bcu), self, 0);
    eax = t70;
    COW_AT(100c6676)
    ecx = self + 0x5c4u;
    goto L_100c667c;
L_100c6ab5: ;
    COW_AT(100c6ab5)
    g->eax = rd32(self);
    t150 = rd32(self);
    g->esp = sp0 - 0x284u;
    t151 = cow_thiscall(g, rd32(t150 + 0x304u), self, 0);
    t152 = g->ecx;
    eax = t151;
    ecx = t152;
    COW_AT(100c6abf)
    if ((uint8_t)eax == 0u)
    {
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        goto L_100c6b57;
    }
    COW_AT(100c6ac7)
    wr32(sp0 - 0x288u, self + 0x5b4u);
    wr32(sp0 - 0x28cu, sp0 - 0x220u);
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x220u, self + 0x5b4u);
    t153 = g->edx;
    edx = t153;
    COW_AT(100c6ad8)
    wr32(sp0 - 0x290u, sp0 - 0x26cu);
    wr32(sp0 - 0x294u, sp0 - 0x214u);
    g->eax = sp0 - 0x26cu;
    g->ecx = sp0 - 0x214u;
    g->esp = sp0 - 0x28cu;
    t154 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x214u, sp0 - 0x26cu);
    t155 = g->ecx;
    eax = t154;
    ecx = t155;
    COW_AT(100c6ae7)
    wr32(sp0 - 0x298u, sp0 - 0x220u);
    g->ecx = ecx;
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x294u;
    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x220u);
    t156 = g->ecx;
    t157 = g->edx;
    ecx = t156;
    edx = t157;
    COW_AT(100c6af1)
    wr32(sp0 - 0x29cu, sp0 - 0x214u);
    g->esp = sp0 - 0x298u;
    t158 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x214u, g->ecx, g->edx, 1, 1, sp0 - 0x214u);
    eax = t158;
    COW_AT(100c6afe)
    wr32(sp0 - 0x2a0u, sp0 - 0x214u);
    wr32(sp0 - 0x2a4u, sp0 - 0x220u);
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x210u, 0u);
    g->eax = eax;
    g->ecx = sp0 - 0x214u;
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x29cu;
    t159 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x220u, sp0 - 0x214u);
    t160 = g->ecx;
    t161 = g->edx;
    d162 = cow_take_float(g);
    eax = t159;
    ecx = t160;
    edx = t161;
    x0 = d162;
    COW_AT(100c6b26)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_21c = 0u;
        loc_210 = 0u;
        goto L_100c6b57;
    }
    COW_AT(100c6b36)
    wr32(sp0 - 0x288u, self + 0xe4u);
    wr32(sp0 - 0x28cu, sp0 - 0x230u);
    g->eax = self + 0xe4u;
    g->ecx = sp0 - 0x230u;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t163 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0xe4u);
    t164 = g->ecx;
    t165 = g->edx;
    eax = t163;
    ecx = t164;
    edx = t165;
    COW_AT(100c6b47)
    x1 = (double)rdf32(sp0 - 0x220u);
    x0 = (double)rdf32(sp0 - 0x218u);
L_100c6c1f: ;
    COW_AT(100c6c1f)
    d180 = (double)(float)-fr(g, atan2(x0, x1));
    wrf32(sp0 - 0x22cu, (float)d180);
    ebx = (ebx & 0xffffff00u) | 1u;
    loc_22c_f = d180;
L_100c6c29: ;
    COW_AT(100c6c29)
    wr32(sp0 - 0x270u, 0x3e000000u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t181 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
    t182 = g->ecx;
    t183 = g->edx;
    eax = t181;
    ecx = t182;
    edx = t183;
    COW_AT(100c6c36)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100c6c3a)
        g->eax = rd32(self);
        g->edx = edx;
        t184 = rd32(self);
        g->esp = sp0 - 0x284u;
        t185 = cow_thiscall(g, rd32(t184 + 0x13cu), self, 0);
        t186 = g->ecx;
        t187 = g->edx;
        eax = t185;
        ecx = t186;
        edx = t187;
    COW_AT(100c6c44)
        if (eax != 0u)
        {
    COW_AT(100c6c48)
            g->eax = eax;
            g->edx = rd32(self);
            t188 = rd32(self);
            g->esp = sp0 - 0x284u;
            t189 = cow_thiscall(g, rd32(t188 + 0x13cu), self, 0);
            t190 = g->ecx;
            t191 = g->edx;
            eax = t189;
            ecx = t190;
            edx = t191;
    COW_AT(100c6c52)
            wr32(sp0 - 0x270u, eax);
            d192 = fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x10331364u)));
            wrf32(sp0 - 0x270u, (float)(double)(float)d192);
        }
    }
    COW_AT(100c6c64)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t193 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t194 = g->ecx;
    t195 = g->edx;
    d196 = cow_take_float(g);
    eax = t193;
    ecx = t194;
    edx = t195;
    x0 = d196;
    COW_AT(100c6c69)
    wrf32(sp0 - 0x274u, (float)(double)(float)x0);
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_274_f = (double)(float)x0;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_274_f = (double)(float)x0;
    COW_AT(100c6c80)
        ebp = rd32(sp0 - 0x270u);
L_100c6c8a: ;
    COW_AT(100c6c8a)
        d197 = fr(g, (double)rdf32(sp0 - 0x230u) - (double)rdf32(self + 0x61cu));
        wrf32(sp0 - 0x25cu, (float)(double)(float)d197);
        d198 = fr(g, (double)rdf32(sp0 - 0x22cu) - (double)rdf32(self + 0x620u));
        wrf32(sp0 - 0x258u, (float)(double)(float)d198);
        d199 = fr(g, (double)rdf32(sp0 - 0x228u) - (double)rdf32(self + 0x624u));
        wrf32(sp0 - 0x254u, (float)(double)(float)d199);
        if ((cow_fsw(g, (double)(float)d197, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)(float)d197, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            loc_25c_f = (double)(float)d197;
            loc_258_f = (double)(float)d198;
            loc_254_f = (double)(float)d199;
        }
        else
        {
            eax = cow_fsw(g, (double)(float)d197, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            loc_25c_f = (double)(float)d197;
            loc_258_f = (double)(float)d198;
            loc_254_f = (double)(float)d199;
    COW_AT(100c6cc3)
            d200 = fr(g, loc_25c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x25cu, (float)(double)(float)d200);
            loc_25c_f = (double)(float)d200;
        }
    COW_AT(100c6cd1)
        if (!(loc_25c_f < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6ce2)
            d201 = fr(g, loc_25c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x25cu, (float)(double)(float)d201);
            loc_25c_f = (double)(float)d201;
        }
    COW_AT(100c6cf0)
        if ((cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6d03)
            d202 = fr(g, loc_258_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x258u, (float)(double)(float)d202);
            loc_258_f = (double)(float)d202;
        }
    COW_AT(100c6d11)
        if (!(loc_258_f < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6d22)
            d203 = fr(g, loc_258_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x258u, (float)(double)(float)d203);
            loc_258_f = (double)(float)d203;
        }
    COW_AT(100c6d30)
        if ((cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6d43)
            d204 = fr(g, loc_254_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x254u, (float)(double)(float)d204);
            loc_254_f = (double)(float)d204;
        }
    COW_AT(100c6d51)
        if (loc_254_f < (double)rdf32(COW_IMG(0x10329d28u)))
        {
    COW_AT(100c6d62)
            d205 = fr(g, loc_254_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x254u, (float)(double)(float)d205);
            loc_254_f = (double)(float)d205;
        }
    COW_AT(100c6d70)
        wr32(sp0 - 0x288u, ebp);
        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
        g->eax = sp0 - 0x25cu;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t206 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x25cu, ebp);
        t207 = g->edx;
        eax = t206;
        edx = t207;
    COW_AT(100c6d7b)
        wr32(sp0 - 0x290u, sp0 - 0x25cu);
        wr32(sp0 - 0x294u, self + 0x61cu);
        g->eax = eax;
        g->ecx = sp0 - 0x25cu;
        g->edx = edx;
        g->esp = sp0 - 0x28cu;
        t208 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x61cu, sp0 - 0x25cu);
        t209 = g->ecx;
        t210 = g->edx;
        eax = t208;
        ecx = t209;
        edx = t210;
    COW_AT(100c6d86)
        d211 = fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(sp0 - 0x274u, (float)(double)(float)d211);
        if ((cow_fsw(g, d211, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d211, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            loc_274_f = (double)(float)d211;
            goto L_100c6c8a;
        }
        eax = cow_fsw(g, d211, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_274_f = (double)(float)d211;
    }
    COW_AT(100c6daa)
    d212 = (double)rdf32(self + 0x61cu);
    if ((cow_fsw(g, d212, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d212, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d212, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6dc5)
        d213 = fr(g, (double)rdf32(self + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x61cu, (float)d213);
    }
    COW_AT(100c6dcf)
    d214 = (double)rdf32(self + 0x61cu);
    if (!(d214 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d214, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d214, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6dde)
        d215 = fr(g, (double)rdf32(self + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x61cu, (float)d215);
    }
    COW_AT(100c6de8)
    d216 = (double)rdf32(self + 0x620u);
    if ((cow_fsw(g, d216, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d216, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d216, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6dfd)
        d217 = fr(g, (double)rdf32(self + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x620u, (float)d217);
    }
    COW_AT(100c6e0f)
    d218 = (double)rdf32(self + 0x620u);
    if (!(d218 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d218, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d218, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6e22)
        d219 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x620u, (float)d219);
    }
    COW_AT(100c6e34)
    d220 = (double)rdf32(self + 0x624u);
    if ((cow_fsw(g, d220, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d220, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d220, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6e49)
        d221 = fr(g, (double)rdf32(self + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x624u, (float)d221);
    }
    COW_AT(100c6e5b)
    d222 = (double)rdf32(self + 0x624u);
    if (!(d222 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d222, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d222, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6e6e)
        d223 = fr(g, (double)rdf32(self + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x624u, (float)d223);
    }
    COW_AT(100c6e80)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(100c6e88)
        if (rd8(COW_IMG(0x10487f80u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    COW_AT(100c6e95)
            wr32(sp0 - 0x288u, self + 0x61cu);
            wr32(sp0 - 0x28cu, self + 0x44u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t224 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, self + 0x61cu);
            t225 = g->edx;
            eax = t224;
            edx = t225;
    COW_AT(100c6e9f)
            d226 = (double)rdf32(self + 0x44u);
            if ((cow_fsw(g, d226, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d226, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d226, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6eb3)
                d227 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x44u, (float)d227);
            }
    COW_AT(100c6ebd)
            d228 = (double)rdf32(self + 0x44u);
            if (!(d228 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d228, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d228, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6ecc)
                d229 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x44u, (float)d229);
            }
    COW_AT(100c6ed6)
            d230 = (double)rdf32(self + 0x48u);
            if ((cow_fsw(g, d230, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d230, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d230, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6ee8)
                d231 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x48u, (float)d231);
            }
    COW_AT(100c6ef4)
            d232 = (double)rdf32(self + 0x48u);
            if (!(d232 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d232, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d232, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c6f04)
                d233 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x48u, (float)d233);
            }
    COW_AT(100c6f10)
            d234 = (double)rdf32(self + 0x4cu);
            if ((cow_fsw(g, d234, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d234, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d234, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c6f22)
                d235 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x4cu, (float)d235);
            }
    COW_AT(100c6f2e)
            d236 = (double)rdf32(self + 0x4cu);
            if (!(d236 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                loc_274_f = (double)rdf32(sp0 - 0x274u);
            }
            else
            {
    COW_AT(100c6f3e)
                d237 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x4cu, (float)d237);
                loc_274_f = (double)rdf32(sp0 - 0x274u);
            }
        }
    }
    goto L_100c6f4a;
L_100c6b57: ;
    COW_AT(100c6b57)
    d166 = (double)rdf32(sp0 - 0x268u);
    if (!(d166 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d166, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c6b7c)
        d169 = (double)rdf32(sp0 - 0x264u);
        d170 = (double)rdf32(sp0 - 0x26cu);
        x0 = fr(g, fr(g, d169 * d169) + fr(g, d170 * d170));
    }
    else
    {
    COW_AT(100c6b68)
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x26cu);
        g->eax = sp0 - 0x26cu;
        g->esp = sp0 - 0x284u;
        t167 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x26cu, sp0 - 0x26cu);
        d168 = cow_take_float(g);
        eax = t167;
        x0 = d168;
    COW_AT(100c6b77)
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
    }
    COW_AT(100c6b8e)
    wr32(sp0 - 0x288u, self + 0xe4u);
    wr32(sp0 - 0x28cu, sp0 - 0x230u);
    d171 = (double)(float)fr(g, sqrt(x0));
    wrf32(sp0 - 0x270u, (float)d171);
    g->eax = eax;
    g->edx = sp0 - 0x230u;
    g->esp = sp0 - 0x284u;
    t172 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0xe4u);
    t173 = g->edx;
    eax = t172;
    edx = t173;
    COW_AT(100c6ba5)
    if (rd32(self + 0x70u) == 0u)
    {
        ecx = rd32(self + 0x70u);
        goto L_100c6bb8;
    }
    ecx = rd32(self + 0x70u);
    COW_AT(100c6baf)
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t174 = cow_call_regs(g, COW_IMG(0x10097a40u), eax, ecx, g->edx, 1, 0);
    t175 = g->ecx;
    t176 = g->edx;
    eax = t174;
    ecx = t175;
    edx = t176;
    COW_AT(100c6bb4)
    if (eax != 0u)
    {
        loc_22c_f = (double)rdf32(sp0 - 0x22cu);
        goto L_100c6c29;
    }
L_100c6bb8: ;
    COW_AT(100c6bb8)
    d177 = (double)rdf32(sp0 - 0x270u);
    if ((cow_fsw(g, d177, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d177, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
        loc_22c_f = (double)rdf32(sp0 - 0x22cu);
        goto L_100c6c29;
    }
    eax = cow_fsw(g, d177, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
    COW_AT(100c6bcb)
    d178 = (double)rdf32(sp0 - 0x264u);
    if (!(d178 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d178, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x264u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d178, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x264u);
    COW_AT(100c6be0)
        x0 = -x0;
    }
    COW_AT(100c6be2)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        goto L_100c6c17;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
    COW_AT(100c6bf1)
    d179 = (double)rdf32(sp0 - 0x26cu);
    if (!(d179 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d179, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x26cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d179, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x26cu);
    COW_AT(100c6c06)
        x0 = -x0;
    }
    COW_AT(100c6c08)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        loc_22c_f = (double)rdf32(sp0 - 0x22cu);
        goto L_100c6c29;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
L_100c6c17: ;
    COW_AT(100c6c17)
    x1 = (double)rdf32(sp0 - 0x26cu);
    x0 = (double)rdf32(sp0 - 0x264u);
    goto L_100c6c1f;
L_100c6fad: ;
    COW_AT(100c6fad)
    wr32(sp0 - 0x288u, sp0 - 0x240u);
    wr32(sp0 - 0x28cu, eax);
    g->eax = eax;
    g->edx = rd32(edi);
    t245 = rd32(edi);
    g->esp = sp0 - 0x284u;
    t246 = cow_thiscall(g, rd32(t245 + 0x1c4u), edi, 2, eax, sp0 - 0x240u);
    t247 = g->edx;
    eax = t246;
    edx = t247;
    goto L_100c6fbd;
L_100c70e6: ;
    COW_AT(100c70e6)
    wr32(self + 0x7a4u, 0xffffffffu);
    goto L_100c70ec;
L_100c72b1: ;
    COW_AT(100c72b1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t345 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t346 = g->edx;
    eax = t345;
    edx = t346;
    COW_AT(100c72b6)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t347 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t348 = g->edx;
    eax = t347;
    edx = t348;
    COW_AT(100c72be)
    if ((uint8_t)eax == 0u) goto L_100c72d5;
    COW_AT(100c72c4)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->eax = sp0 - 0x268u;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t349 = cow_thiscall(g, COW_IMG(0x100c9330u), self, 1, sp0 - 0x268u);
    t350 = g->edx;
    eax = t349;
    edx = t350;
    COW_AT(100c72ce)
    edi = eax;
    goto L_100c759f;
L_100c72d5: ;
    COW_AT(100c72d5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t405 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t406 = g->edx;
    eax = t405;
    edx = t406;
    COW_AT(100c72da)
    if (eax == 6u) goto L_100c73f8;
    COW_AT(100c72e3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t407 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t408 = g->edx;
    eax = t407;
    edx = t408;
    COW_AT(100c72ea)
    if (eax == 0x26u) goto L_100c73f8;
    COW_AT(100c72f3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t409 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t410 = g->edx;
    eax = t409;
    edx = t410;
    COW_AT(100c72fa)
    if (eax == 0x27u) goto L_100c73f8;
    COW_AT(100c7303)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t411 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t412 = g->edx;
    eax = t411;
    edx = t412;
    COW_AT(100c730a)
    if (eax == 0x28u) goto L_100c73f8;
    COW_AT(100c7313)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t413 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t414 = g->edx;
    eax = t413;
    edx = t414;
    COW_AT(100c731a)
    if (eax == 0x29u) goto L_100c73f8;
    COW_AT(100c7323)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t415 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t416 = g->edx;
    eax = t415;
    edx = t416;
    COW_AT(100c732a)
    if (eax == 0x2au) goto L_100c73f8;
    COW_AT(100c7333)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t417 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t418 = g->edx;
    eax = t417;
    edx = t418;
    COW_AT(100c733a)
    if (eax == 0x2bu) goto L_100c73f8;
    COW_AT(100c7343)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t419 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t420 = g->edx;
    eax = t419;
    edx = t420;
    COW_AT(100c734a)
    if (eax == 0x32u) goto L_100c73f8;
    COW_AT(100c7353)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t421 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t422 = g->edx;
    eax = t421;
    edx = t422;
    COW_AT(100c735a)
    if (eax == 0x38u) goto L_100c73f8;
    COW_AT(100c7363)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t423 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t424 = g->edx;
    eax = t423;
    edx = t424;
    COW_AT(100c736a)
    if (eax == 0x39u) goto L_100c73f8;
    COW_AT(100c7373)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t425 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t426 = g->edx;
    eax = t425;
    edx = t426;
    COW_AT(100c737a)
    if (eax == 0x3au) goto L_100c73f8;
    COW_AT(100c737f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t427 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t428 = g->edx;
    eax = t427;
    edx = t428;
    COW_AT(100c7386)
    if (eax == 0x3bu) goto L_100c73f8;
    COW_AT(100c738b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t429 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t430 = g->edx;
    eax = t429;
    edx = t430;
    COW_AT(100c7392)
    if (eax == 0x3cu) goto L_100c73f8;
    COW_AT(100c7397)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t431 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t432 = g->edx;
    eax = t431;
    edx = t432;
    COW_AT(100c739e)
    if (eax == 0x3du) goto L_100c73f8;
    COW_AT(100c73a3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t433 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t434 = g->edx;
    eax = t433;
    edx = t434;
    COW_AT(100c73aa)
    if (eax == 0x3eu) goto L_100c73f8;
    COW_AT(100c73af)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t435 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t436 = g->edx;
    eax = t435;
    edx = t436;
    COW_AT(100c73b6)
    if (eax == 0x33u) goto L_100c73f8;
    COW_AT(100c73bb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t437 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t438 = g->edx;
    eax = t437;
    edx = t438;
    COW_AT(100c73c2)
    if (eax == 0x34u) goto L_100c73f8;
    COW_AT(100c73c7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t439 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t440 = g->edx;
    eax = t439;
    edx = t440;
    COW_AT(100c73ce)
    if (eax == 0x35u) goto L_100c73f8;
    COW_AT(100c73d3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t441 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t442 = g->edx;
    eax = t441;
    edx = t442;
    COW_AT(100c73da)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t443 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, eax);
    t444 = g->edx;
    eax = t443;
    edx = t444;
    COW_AT(100c73e2)
    if ((uint8_t)eax == 0u)
    {
        edi = 0u;
    }
    else
    {
    COW_AT(100c73ea)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t445 = cow_thiscall(g, COW_IMG(0x100caf90u), self, 0);
        t446 = g->edx;
        eax = t445;
        edx = t446;
    COW_AT(100c73f1)
        edi = eax;
    }
    goto L_100c759f;
L_100c73f8: ;
    COW_AT(100c73f8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t447 = cow_thiscall(g, COW_IMG(0x100caa60u), self, 0);
    t448 = g->edx;
    eax = t447;
    edx = t448;
    COW_AT(100c73ff)
    edi = eax;
    goto L_100c759f;
L_100c7406: ;
    COW_AT(100c7406)
    if (rd8(self + 0x102u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        goto L_100c741c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
L_100c7410: ;
    COW_AT(100c7410)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t351 = cow_thiscall(g, COW_IMG(0x100ca8c0u), self, 0);
    t352 = g->edx;
    eax = t351;
    edx = t352;
    COW_AT(100c7417)
    edi = 0u;
    goto L_100c759f;
L_100c741c: ;
    COW_AT(100c741c)
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100c7446;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    COW_AT(100c7426)
    g->eax = eax;
    g->edx = rd32(self);
    t353 = rd32(self);
    g->esp = sp0 - 0x280u;
    t354 = cow_thiscall(g, rd32(t353 + 0x36cu), self, 0);
    t355 = g->edx;
    eax = t354;
    edx = t355;
    COW_AT(100c7430)
    if (eax != 0u) goto L_100c7446;
    COW_AT(100c7434)
    g->eax = rd32(self);
    g->edx = edx;
    t356 = rd32(self);
    g->esp = sp0 - 0x280u;
    t357 = cow_thiscall(g, rd32(t356 + 0x394u), self, 0);
    t358 = g->edx;
    eax = t357;
    edx = t358;
    COW_AT(100c743e)
    if (eax == 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
L_100c7446: ;
    COW_AT(100c7446)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
L_100c7598: ;
    COW_AT(100c7598)
    g->ebx = 0xffffffffu;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t449 = cow_thiscall(g, COW_IMG(0x100c83c0u), self, 1, sp0 - 0x268u);
    t450 = g->edx;
    eax = t449;
    edx = t450;
    edi = 0u;
    goto L_100c759f;
L_100c7450: ;
    COW_AT(100c7450)
    if (rd8(self + 0x103u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        goto L_100c7593;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
    COW_AT(100c745e)
    if (rd8(self + 0x104u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
        goto L_100c7593;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    COW_AT(100c746c)
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100c7593;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    COW_AT(100c747a)
    g->eax = eax;
    g->edx = rd32(self);
    t359 = rd32(self);
    g->esp = sp0 - 0x280u;
    t360 = cow_thiscall(g, rd32(t359 + 0x36cu), self, 0);
    t361 = g->edx;
    eax = t360;
    edx = t361;
    COW_AT(100c7484)
    if (eax != 0u) goto L_100c7593;
    COW_AT(100c748c)
    g->eax = rd32(self);
    t362 = rd32(self);
    g->esp = sp0 - 0x280u;
    t363 = cow_thiscall(g, rd32(t362 + 0x394u), self, 0);
    eax = t363;
    COW_AT(100c7496)
    if (eax != 0u) goto L_100c7593;
    COW_AT(100c749e)
    g->eax = eax;
    g->edx = rd32(self);
    t364 = rd32(self);
    g->esp = sp0 - 0x280u;
    t365 = cow_thiscall(g, rd32(t364 + 0x3a4u), self, 0);
    t366 = g->edx;
    eax = t365;
    edx = t366;
    COW_AT(100c74a8)
    if (eax != 0u) goto L_100c7593;
    COW_AT(100c74b0)
    if (rd8(self + 0x102u) == 0u) goto L_100c74c6;
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    COW_AT(100c74bc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t367 = cow_thiscall(g, COW_IMG(0x100ca8c0u), self, 0);
    t368 = g->edx;
    eax = t367;
    edx = t368;
    COW_AT(100c74c1)
    edi = 0u;
    goto L_100c759f;
L_100c74c6: ;
    COW_AT(100c74c6)
    g->eax = rd32(self);
    g->edx = edx;
    t369 = rd32(self);
    g->esp = sp0 - 0x280u;
    t370 = cow_thiscall(g, rd32(t369 + 0x34cu), self, 0);
    t371 = g->edx;
    eax = t370;
    edx = t371;
    COW_AT(100c74ce)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c74d6)
    g->eax = eax;
    g->edx = rd32(self);
    t372 = rd32(self);
    g->esp = sp0 - 0x280u;
    t373 = cow_thiscall(g, rd32(t372 + 0x358u), self, 0);
    t374 = g->edx;
    eax = t373;
    edx = t374;
    COW_AT(100c74e0)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c74e8)
    g->eax = rd32(self);
    g->edx = edx;
    t375 = rd32(self);
    g->esp = sp0 - 0x280u;
    t376 = cow_thiscall(g, rd32(t375 + 0x360u), self, 0);
    t377 = g->edx;
    eax = t376;
    edx = t377;
    COW_AT(100c74f2)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c74fa)
    g->eax = eax;
    g->edx = rd32(self);
    t378 = rd32(self);
    g->esp = sp0 - 0x280u;
    t379 = cow_thiscall(g, rd32(t378 + 0x36cu), self, 0);
    t380 = g->edx;
    eax = t379;
    edx = t380;
    COW_AT(100c7504)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c750c)
    g->eax = rd32(self);
    g->edx = edx;
    t381 = rd32(self);
    g->esp = sp0 - 0x280u;
    t382 = cow_thiscall(g, rd32(t381 + 0x378u), self, 0);
    t383 = g->edx;
    eax = t382;
    edx = t383;
    COW_AT(100c7516)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c751e)
    g->eax = eax;
    g->edx = rd32(self);
    t384 = rd32(self);
    g->esp = sp0 - 0x280u;
    t385 = cow_thiscall(g, rd32(t384 + 0x384u), self, 0);
    t386 = g->edx;
    eax = t385;
    edx = t386;
    COW_AT(100c7528)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c752c)
    g->eax = rd32(self);
    g->edx = edx;
    t387 = rd32(self);
    g->esp = sp0 - 0x280u;
    t388 = cow_thiscall(g, rd32(t387 + 0x394u), self, 0);
    t389 = g->edx;
    eax = t388;
    edx = t389;
    COW_AT(100c7536)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c753a)
    g->eax = eax;
    g->edx = rd32(self);
    t390 = rd32(self);
    g->esp = sp0 - 0x280u;
    t391 = cow_thiscall(g, rd32(t390 + 0x3a4u), self, 0);
    t392 = g->edx;
    eax = t391;
    edx = t392;
    COW_AT(100c7544)
    if (eax != 0u)
    {
        edi = 0u;
        goto L_100c759f;
    }
    COW_AT(100c7548)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t393 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t394 = g->edx;
    eax = t393;
    edx = t394;
    COW_AT(100c754f)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t395 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t396 = g->edx;
    eax = t395;
    edx = t396;
    COW_AT(100c7557)
    if ((uint8_t)eax == 0u) goto L_100c756b;
    COW_AT(100c755d)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->eax = sp0 - 0x268u;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t397 = cow_thiscall(g, COW_IMG(0x100c8ed0u), self, 1, sp0 - 0x268u);
    t398 = g->edx;
    eax = t397;
    edx = t398;
    COW_AT(100c7567)
    edi = eax;
    goto L_100c759f;
L_100c756b: ;
    COW_AT(100c756b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t399 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t400 = g->edx;
    eax = t399;
    edx = t400;
    COW_AT(100c7570)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t401 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t402 = g->edx;
    eax = t401;
    edx = t402;
    COW_AT(100c7578)
    if ((uint8_t)eax == 0u) goto L_100c758c;
    COW_AT(100c757c)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t403 = cow_thiscall(g, COW_IMG(0x100c9330u), self, 1, sp0 - 0x268u);
    t404 = g->edx;
    eax = t403;
    edx = t404;
    COW_AT(100c7588)
    edi = eax;
    goto L_100c759f;
L_100c758c: ;
    COW_AT(100c758c)
    goto L_100c72d5;
L_100c7593: ;
    COW_AT(100c7593)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    edx = sp0 - 0x268u;
    goto L_100c7598;
L_100c75c4: ;
    COW_AT(100c75c4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t454 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t455 = g->edx;
    eax = t454;
    edx = t455;
    COW_AT(100c75cb)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t456 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t457 = g->edx;
    eax = t456;
    edx = t457;
    COW_AT(100c75d3)
    if ((uint8_t)eax != 0u) goto L_100c75ea;
    COW_AT(100c75d7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t458 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t459 = g->edx;
    eax = t458;
    edx = t459;
    COW_AT(100c75de)
    wr32(sp0 - 0x284u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t460 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t461 = g->edx;
    eax = t460;
    edx = t461;
    COW_AT(100c75e6)
    if ((uint8_t)eax == 0u) goto L_100c75f1;
L_100c75ea: ;
    COW_AT(100c75ea)
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t462 = cow_call_regs(g, COW_IMG(0x100cdf90u), eax, self, g->edx, 1, 0);
    t463 = g->edx;
    eax = t462;
    edx = t463;
L_100c75f1: ;
    COW_AT(100c75f1)
    wr32(sp0 - 0x284u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x280u;
    t464 = cow_thiscall(g, COW_IMG(0x100cb390u), self, 1, edi);
    eax = t464;
    COW_AT(100c75f9)
    t465 = rd32(self + 0x798u);
    wr32(sp0 - 0x284u, t465);
    g->edx = t465;
    g->esp = sp0 - 0x280u;
    cow_thiscall(g, COW_IMG(0x100cb400u), self, 1, t465);
    t466 = g->edx;
    edx = t466;
L_100c7607: ;
    COW_AT(100c7607)
    wr32(sp0 - 0x284u, sp0 - 0x268u);
    wr32(sp0 - 0x288u, self + 0x6a8u);
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x6a8u, sp0 - 0x268u);
    t467 = g->edx;
    edx = t467;
    COW_AT(100c7618)
    if (rd32(self + 0xb4u) == 0u)
    {
        eax = rd32(self + 0xb4u);
    }
    else
    {
        eax = rd32(self + 0xb4u);
    COW_AT(100c7625)
        wr32(sp0 - 0x26cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t468 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x26cu, 0);
        t469 = g->edx;
        eax = t468;
        edx = t469;
    COW_AT(100c7632)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100c7636)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x280u;
            t470 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t471 = g->edx;
            eax = t470;
            edx = t471;
    COW_AT(100c763d)
            if (eax == 0x1cu) goto L_100c766f;
            edi = eax;
    COW_AT(100c7644)
            if (edi == 0x1fu) goto L_100c766f;
    COW_AT(100c7649)
            if (edi == 0u) goto L_100c766f;
    COW_AT(100c764d)
            if (edi == 1u) goto L_100c766f;
    COW_AT(100c7652)
            if (edi == 4u) goto L_100c766f;
    COW_AT(100c7657)
            wr32(sp0 - 0x284u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x280u;
            t472 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, edi);
            t473 = g->edx;
            eax = t472;
            edx = t473;
    COW_AT(100c765f)
            if ((uint8_t)eax != 0u) goto L_100c766f;
    COW_AT(100c7663)
            wr32(sp0 - 0x284u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x280u;
            t474 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, edi);
            t475 = g->edx;
            eax = t474;
            edx = t475;
    COW_AT(100c766b)
            if ((uint8_t)eax == 0u) goto L_100c7676;
L_100c766f: ;
    COW_AT(100c766f)
            g->ebx = 0xffffffffu;
            g->eax = eax;
            g->esp = sp0 - 0x280u;
            t476 = cow_fastcall(g, COW_IMG(0x100d4bc0u), self, edx, 0);
            eax = t476;
        }
    }
L_100c7676: ;
    COW_AT(100c7676)
    g->eax = eax;
    g->edx = rd32(self);
    t477 = rd32(self);
    g->esp = sp0 - 0x280u;
    t478 = cow_thiscall(g, rd32(t477 + 0x1e4u), self, 0);
    t479 = g->edx;
    d480 = cow_take_float(g);
    eax = t478;
    edx = t479;
    x0 = d480;
    COW_AT(100c7680)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(100c7684)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t481 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t482 = g->edx;
        eax = t481;
        edx = t482;
    COW_AT(100c768b)
        wr32(sp0 - 0x284u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t483 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
        t484 = g->edx;
        eax = t483;
        edx = t484;
    COW_AT(100c7693)
        if ((uint8_t)eax != 0u) goto L_100c76aa;
    COW_AT(100c7697)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t485 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t486 = g->edx;
        eax = t485;
        edx = t486;
    COW_AT(100c769e)
        wr32(sp0 - 0x284u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t487 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
        t488 = g->edx;
        eax = t487;
        edx = t488;
    COW_AT(100c76a6)
        if ((uint8_t)eax == 0u) goto L_100c76c0;
L_100c76aa: ;
    COW_AT(100c76aa)
        if (rd32(self + 0x768u) == 0u) goto L_100c76f6;
        ecx = rd32(self + 0x768u);
    COW_AT(100c76b4)
        g->eax = rd32(ecx);
        g->edx = edx;
        t489 = rd32(ecx);
        g->esp = sp0 - 0x280u;
        t490 = cow_thiscall(g, rd32(t489 + 0x1e4u), ecx, 0);
        t491 = g->edx;
        eax = t490;
        edx = t491;
    COW_AT(100c76bc)
        if ((uint8_t)eax == 0u) goto L_100c76f6;
L_100c76c0: ;
    COW_AT(100c76c0)
        t492 = rd32(self + 0x59cu);
        wr32(sp0 - 0x26cu, t492);
        g->edx = edx;
        g->esp = sp0 - 0x280u;
        t493 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t494 = g->edx;
        d495 = cow_take_float(g);
        eax = t493;
        edx = t494;
        x1 = d495;
    COW_AT(100c76cf)
        d496 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x1032b088u))) + (double)rdf32(sp0 - 0x26cu));
        if ((cow_fsw(g, d496, (double)rdf32(COW_IMG(0x1032961cu)), 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d496, (double)rdf32(COW_IMG(0x1032961cu)), 2u) & 0x4100u;
            x1 = d496;
        }
        else
        {
            eax = cow_fsw(g, d496, (double)rdf32(COW_IMG(0x1032961cu)), 2u) & 0x4100u;
            x1 = d496;
    COW_AT(100c76e8)
            x1 = (double)rdf32(COW_IMG(0x1032961cu));
        }
    COW_AT(100c76f0)
        wrf32(self + 0x59cu, (float)x1);
    }
L_100c76f6: ;
    COW_AT(100c76f6)
    wr32(sp0 - 0x284u, COW_IMG(0x104574b8u));
    wr32(sp0 - 0x288u, 0x100u);
    g->eax = eax;
    g->edx = edx;
    t497 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x280u;
    t498 = cow_thiscall(g, COW_IMG(0x1000bd50u), t497, 2, 0x100u, COW_IMG(0x104574b8u));
    t499 = g->ecx;
    t500 = g->edx;
    eax = t498;
    ecx = t499;
    edx = t500;
    COW_AT(100c770b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t501 = cow_stdcall(g, COW_IMG(0x10014d70u), 0);
    t502 = g->ecx;
    t503 = g->edx;
    d504 = cow_take_float(g);
    eax = t501;
    ecx = t502;
    edx = t503;
    x1 = d504;
    COW_AT(100c7710)
    wrf32(sp0 - 0x244u, (float)(double)(float)x1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t505 = cow_stdcall(g, COW_IMG(0x10014d80u), 0);
    t506 = g->edx;
    d507 = cow_take_float(g);
    eax = t505;
    edx = t506;
    x1 = d507;
    COW_AT(100c7719)
    wr32(sp0 - 0x26cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x280u;
    t508 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x17cu, 0);
    eax = t508;
    COW_AT(100c772f)
    g->eax = eax;
    g->edx = rd32(self);
    t509 = rd32(self);
    g->esp = sp0 - 0x280u;
    t510 = cow_thiscall(g, rd32(t509 + 0x110u), self, 0);
    t511 = g->edx;
    d512 = cow_take_float(g);
    eax = t510;
    edx = t511;
    x1 = d512;
    COW_AT(100c7739)
    if (!(x1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100c778c)
        g->eax = rd32(self);
        t519 = rd32(self);
        g->esp = sp0 - 0x280u;
        t520 = cow_thiscall(g, rd32(t519 + 0x110u), self, 0);
        d521 = cow_take_float(g);
        eax = t520;
        x1 = d521;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c7746)
        d513 = (double)rdf32(self + 0x760u);
        if (!(d513 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d513, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c7784)
            x1 = (double)rdf32(self + 0x760u);
        }
        else
        {
    COW_AT(100c7759)
            g->eax = rd32(self);
            t514 = rd32(self);
            g->esp = sp0 - 0x280u;
            t515 = cow_thiscall(g, rd32(t514 + 0x110u), self, 0);
            d516 = cow_take_float(g);
            eax = t515;
            x1 = d516;
    COW_AT(100c7763)
            if (!(x1 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c7778)
                g->eax = eax;
                g->esp = sp0 - 0x280u;
                t517 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d518 = cow_take_float(g);
                eax = t517;
                x1 = d518;
    COW_AT(100c7782)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c7770)
                x1 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100c7796)
    wrf32(sp0 - 0x21cu, (float)(double)(float)x1);
    g->eax = eax;
    g->edx = rd32(self);
    t522 = rd32(self);
    g->esp = sp0 - 0x280u;
    t523 = cow_thiscall(g, rd32(t522 + 0x110u), self, 0);
    t524 = g->edx;
    d525 = cow_take_float(g);
    eax = t523;
    edx = t524;
    x1 = d525;
    COW_AT(100c77a4)
    if (!(x1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100c77f7)
        g->eax = rd32(self);
        t532 = rd32(self);
        g->esp = sp0 - 0x280u;
        t533 = cow_thiscall(g, rd32(t532 + 0x110u), self, 0);
        d534 = cow_take_float(g);
        eax = t533;
        x1 = d534;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c77b1)
        d526 = (double)rdf32(self + 0x75cu);
        if (!(d526 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d526, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c77ef)
            x1 = (double)rdf32(self + 0x75cu);
        }
        else
        {
    COW_AT(100c77c4)
            g->eax = rd32(self);
            t527 = rd32(self);
            g->esp = sp0 - 0x280u;
            t528 = cow_thiscall(g, rd32(t527 + 0x110u), self, 0);
            d529 = cow_take_float(g);
            eax = t528;
            x1 = d529;
    COW_AT(100c77ce)
            if (!(x1 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c77e3)
                g->eax = eax;
                g->esp = sp0 - 0x280u;
                t530 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d531 = cow_take_float(g);
                eax = t530;
                x1 = d531;
    COW_AT(100c77ed)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c77db)
                x1 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100c7801)
    wrf32(sp0 - 0x218u, (float)(double)(float)x1);
    g->eax = eax;
    g->edx = rd32(self);
    t535 = rd32(self);
    g->esp = sp0 - 0x280u;
    t536 = cow_thiscall(g, rd32(t535 + 0x110u), self, 0);
    t537 = g->edx;
    eax = t536;
    edx = t537;
    COW_AT(100c780f)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100c7862)
        g->eax = rd32(self);
        g->edx = edx;
        t547 = rd32(self);
        g->esp = sp0 - 0x280u;
        t548 = cow_thiscall(g, rd32(t547 + 0x110u), self, 0);
        t549 = g->edx;
        d550 = cow_take_float(g);
        eax = t548;
        edx = t549;
        x0 = d550;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c781c)
        d538 = (double)rdf32(self + 0x758u);
        if (!(d538 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d538, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c785a)
            x0 = (double)rdf32(self + 0x758u);
        }
        else
        {
    COW_AT(100c782f)
            g->eax = rd32(self);
            g->edx = edx;
            t539 = rd32(self);
            g->esp = sp0 - 0x280u;
            t540 = cow_thiscall(g, rd32(t539 + 0x110u), self, 0);
            t541 = g->edx;
            d542 = cow_take_float(g);
            eax = t540;
            edx = t541;
            x0 = d542;
    COW_AT(100c7839)
            if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c784e)
                g->eax = eax;
                g->edx = rd32(self);
                t543 = rd32(self);
                g->esp = sp0 - 0x280u;
                t544 = cow_thiscall(g, rd32(t543 + 0x110u), self, 0);
                t545 = g->edx;
                d546 = cow_take_float(g);
                eax = t544;
                edx = t545;
                x0 = d546;
    COW_AT(100c7858)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c7846)
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100c786c)
    wrf32(sp0 - 0x214u, (float)(double)(float)x0);
    wr32(sp0 - 0x284u, sp0 - 0x21cu);
    g->eax = eax;
    g->esp = sp0 - 0x280u;
    t551 = cow_thiscall(g, COW_IMG(0x10027b30u), sp0 - 0x17cu, 1, sp0 - 0x21cu);
    eax = t551;
    COW_AT(100c7881)
    g->eax = eax;
    g->edx = rd32(self);
    t552 = rd32(self);
    g->esp = sp0 - 0x280u;
    t553 = cow_thiscall(g, rd32(t552 + 0x1c0u), self, 0);
    t554 = g->edx;
    eax = t553;
    edx = t554;
    COW_AT(100c788b)
    d555 = fr(g, (double)rdf32(eax + 4u) + (double)rdf32(COW_IMG(0x10331360u)));
    wrf32(sp0 - 0x270u, (float)(double)(float)d555);
    if ((cow_fsw(g, d555, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d555, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_270_f = (double)(float)d555;
    }
    else
    {
        eax = cow_fsw(g, d555, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_270_f = (double)(float)d555;
    COW_AT(100c78a7)
        d556 = fr(g, loc_270_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x270u, (float)(double)(float)d556);
        loc_270_f = (double)(float)d556;
    }
    COW_AT(100c78b5)
    if (loc_270_f < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(100c78c6)
        d557 = fr(g, loc_270_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x270u, (float)(double)(float)d557);
        loc_270_f = (double)(float)d557;
    }
    COW_AT(100c78d4)
    wr32(sp0 - 0x284u, cow_f2bits(loc_270_f));
    g->eax = cow_f2bits(loc_270_f);
    g->esp = sp0 - 0x280u;
    t558 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x17cu, 1, cow_f2bits(loc_270_f));
    eax = t558;
    COW_AT(100c78e5)
    g->eax = eax;
    g->edx = rd32(self);
    t559 = rd32(self);
    g->esp = sp0 - 0x280u;
    t560 = cow_thiscall(g, rd32(t559 + 0x1bcu), self, 0);
    t561 = g->edx;
    d562 = cow_take_float(g);
    eax = t560;
    edx = t561;
    x0 = d562;
    COW_AT(100c78ef)
    wr32(sp0 - 0x284u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x17cu, 1, eax);
    t563 = g->edx;
    edx = t563;
    COW_AT(100c78fc)
    wr32(sp0 - 0x284u, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t564 = rd32(self);
    g->esp = sp0 - 0x284u;
    t565 = cow_thiscall(g, rd32(t564 + 0x3c8u), self, 0);
    t566 = g->edx;
    eax = t565;
    edx = t566;
    COW_AT(100c7908)
    if (eax != 0u) goto L_100c7926;
    COW_AT(100c790c)
    t567 = rd8(self + 0xb2u);
    wr8(self + 0xb0u, 1u);
    wr8(self + 0xb2u, (uint8_t)(t567 | 1u));
    eax = ((eax | t567) & 0xffffff00u) | (uint8_t)(t567 | 1u);
    ebx = 0xffffffffu;
    loc_284 = 0u;
L_100c7c14: ;
    COW_AT(100c7c14)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t611 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t612 = g->edx;
    eax = t611;
    edx = t612;
    COW_AT(100c7c20)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t613 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x1d8u, 0);
    t614 = g->edx;
    eax = t613;
    edx = t614;
    COW_AT(100c7c2c)
    wr32(sp0 - 0x288u, sp0 - 0x1d8u);
    wr32(sp0 - 0x28cu, 2u);
    g->esp = sp0 - 0x284u;
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x1d8u);
    COW_AT(100c7c41)
    wr32(sp0 - 0x288u, self + 0x5fcu);
    wr32(sp0 - 0x28cu, sp0 - 0x1f8u);
    g->eax = sp0 - 0x1f8u;
    g->edx = self + 0x5fcu;
    g->esp = sp0 - 0x284u;
    t615 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x1d8u, 2, sp0 - 0x1f8u, self + 0x5fcu);
    t616 = g->edx;
    eax = t615;
    edx = t616;
    COW_AT(100c7c5c)
    ecx = sp0 - 0x1d8u;
L_100c7c9d: ;
    COW_AT(100c7c9d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t622 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t623 = g->ecx;
    t624 = g->edx;
    eax = t622;
    ecx = t623;
    edx = t624;
    COW_AT(100c7ca2)
    wr32(sp0 - 0x288u, ecx);
    d625 = (double)(float)-(double)rdf32(sp0 - 0x1f0u);
    wrf32(sp0 - 0x288u, (float)d625);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t626 = cow_thiscall(g, COW_IMG(0x10085000u), self, 1, cow_f2bits(d625));
    t627 = g->ecx;
    t628 = g->edx;
    eax = t626;
    ecx = t627;
    edx = t628;
    COW_AT(100c7cb6)
    wr32(sp0 - 0x288u, ecx);
    d629 = (double)(float)-(double)rdf32(sp0 - 0x1f0u);
    wrf32(sp0 - 0x288u, (float)d629);
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t630 = cow_thiscall(g, COW_IMG(0x10085bf0u), self, 1, cow_f2bits(d629));
    eax = t630;
    COW_AT(100c7cca)
    g->eax = eax;
    g->edx = rd32(self);
    t631 = rd32(self);
    g->esp = sp0 - 0x284u;
    t632 = cow_thiscall(g, rd32(t631 + 0x304u), self, 0);
    t633 = g->ecx;
    t634 = g->edx;
    eax = t632;
    ecx = t633;
    edx = t634;
    COW_AT(100c7cd4)
    if ((uint8_t)eax == 0u) goto L_100c7ce1;
    COW_AT(100c7cd8)
    if (rd8(COW_IMG(0x10487f80u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_100c7ce9;
    }
L_100c7ce1: ;
    COW_AT(100c7ce1)
    if (rd32(sp0 - 0x244u) == 0u) goto L_100c7d12;
    eax = rd32(sp0 - 0x244u);
L_100c7ce9: ;
    COW_AT(100c7ce9)
    wr32(sp0 - 0x288u, 0x3dcccccdu);
    t635 = rd8(self + 0xb2u);
    wr8(self + 0xb2u, t635 & 0xfeu);
    g->eax = eax;
    g->edx = (edx & 0xffffff00u) | (t635 & 0xfeu);
    g->esp = sp0 - 0x284u;
    t636 = cow_thiscall(g, COW_IMG(0x10085000u), self, 1, 0x3dcccccdu);
    t637 = g->edx;
    eax = t636;
    edx = t637;
    COW_AT(100c7d04)
    wr32(sp0 - 0x288u, 0x3dcccccdu);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    cow_thiscall(g, COW_IMG(0x10085bf0u), self, 1, 0x3dcccccdu);
    t638 = g->edx;
    edx = t638;
    COW_AT(100c7d10)
L_100c7d6c: ;
    COW_AT(100c7d6c)
    g->eax = rd32(self);
    g->edx = edx;
    t645 = rd32(self);
    g->esp = sp0 - 0x284u;
    t646 = cow_thiscall(g, rd32(t645 + 0x304u), self, 0);
    t647 = g->ecx;
    t648 = g->edx;
    eax = t646;
    ecx = t647;
    edx = t648;
    COW_AT(100c7d76)
    if ((uint8_t)eax == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_100c7ea7;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    COW_AT(100c7d83)
    if ((uint8_t)eax != 0u) goto L_100c7f09;
L_100c7d8b: ;
    COW_AT(100c7d8b)
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t672 = cow_fastcall(g, COW_IMG(0x100cd040u), self, edx, 0);
    t673 = g->edx;
    d674 = cow_take_float(g);
    eax = t672;
    edx = t673;
    x1 = d674;
    COW_AT(100c7d92)
    wrf32(self + 0x664u, (float)x1);
    d675 = (double)rdf32(self + 0x59cu);
    if (d675 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d675, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100c7dab)
        t676 = rd8(self + 0xb2u);
        wr8(self + 0xb0u, 1u);
        wr8(self + 0xb2u, (uint8_t)(t676 | 1u));
    }
L_100c7dc0: ;
    COW_AT(100c7dc0)
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
    }
    else
    {
        eax = rd32(self + 0x70u);
    COW_AT(100c7dc7)
        if (rd32(eax + 0x12cu) >> 0x1au & 1u)
        {
    COW_AT(100c7dd5)
            wr32(self + 0x664u, 0x3f800000u);
        }
    }
    COW_AT(100c7ddf)
    if (rd16(self + 0xb2u) != 0u) goto L_100c7f42;
    COW_AT(100c7ded)
    d677 = fr(g, (double)rdf32(self + 0x59cu) * (double)rdf32(self + 0x664u));
    if (d677 < (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d677, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
        goto L_100c7e34;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d677, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    COW_AT(100c7e06)
    g->eax = eax;
    g->edx = rd32(self);
    t678 = rd32(self);
    g->esp = sp0 - 0x284u;
    t679 = cow_thiscall(g, rd32(t678 + 0x70u), self, 0);
    t680 = g->edx;
    eax = t679;
    edx = t680;
    COW_AT(100c7e0d)
    if ((uint8_t)eax != 0u) goto L_100c7e34;
    COW_AT(100c7e11)
    wr32(sp0 - 0x288u, sp0 - 0x248u);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t681 = cow_call_regs(g, COW_IMG(0x10039410u), sp0 - 0x248u, self + 0x710u, g->edx, 0, 1, sp0 - 0x248u);
    t682 = g->edx;
    eax = t681;
    edx = t682;
    COW_AT(100c7e21)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_100c7f42;
    }
    eax = rd32(eax);
    COW_AT(100c7e2b)
    if (rd32(eax) == 0u) goto L_100c7f42;
L_100c7e34: ;
    COW_AT(100c7e34)
    wr32(sp0 - 0x288u, self + 0x5fcu);
    wr32(sp0 - 0x28cu, sp0 - 0x220u);
    g->eax = eax;
    g->ecx = self + 0x5fcu;
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x284u;
    t683 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x220u, self + 0x5fcu);
    t684 = g->ecx;
    t685 = g->edx;
    eax = t683;
    ecx = t684;
    edx = t685;
    COW_AT(100c7e45)
    d686 = fr(g, fr(g, (double)rdf32(sp0 - 0x218u) * (double)rdf32(COW_IMG(0x1032a698u))) + (double)rdf32(self + 0x8ecu));
    wrf32(self + 0x8c8u, (float)d686);
    if (d686 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(100c7e6d)
        wr32(self + 0x8c8u, 0u);
    }
    COW_AT(100c7e73)
    t687 = rd32(self + 0x8c8u);
    wr32(self + 0x8d4u, self);
    wr32(sp0 - 0x288u, t687);
    wr32(self + 0x8d0u, COW_IMG(0x100cbd90u));
    g->eax = t687;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t688 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t687, rd32(sp0 - 0x284u));
    t689 = g->edx;
    eax = t688;
    edx = t689;
    COW_AT(100c7e8b)
    if ((uint8_t)eax == 0u) goto L_100c7f42;
    COW_AT(100c7e96)
    wr32(sp0 - 0x288u, self + 0x8c8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t690 = cow_thiscall(g, COW_IMG(0x100553c0u), rd32(COW_IMG(0x1047bc94u)), 1, self + 0x8c8u);
    t691 = g->edx;
    eax = t690;
    edx = t691;
    COW_AT(100c7ea2)
L_100c7f53: ;
    COW_AT(100c7f53)
    if (rd32(self + 0x70u) != 0u)
    {
        ecx = rd32(self + 0x70u);
    COW_AT(100c7f5a)
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t692 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, ecx, g->edx, 1, 0);
        t693 = g->edx;
        eax = t692;
        edx = t693;
    COW_AT(100c7f5f)
        if ((uint8_t)eax == 0u) goto L_100c7f74;
    COW_AT(100c7f63)
        if (!(rd32(rd32(self + 0x70u) + 0x12cu) >> 0x1eu & 1u)) goto L_100c7f90;
        edx = rd32(rd32(self + 0x70u) + 0x12cu) >> 0x1eu;
L_100c7f74: ;
    COW_AT(100c7f74)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t694 = cow_thiscall(g, COW_IMG(0x10084670u), self, 0);
        t695 = g->edx;
        eax = t694;
        edx = t695;
    COW_AT(100c7f7b)
        if ((uint8_t)eax != 0u) goto L_100c7f90;
    COW_AT(100c7f7f)
        if (!(rd32(rd32(self + 0x70u) + 0x12cu) >> 0x16u & 1u))
        {
            eax = rd32(self + 0x70u);
            goto L_100c7f9e;
        }
        eax = rd32(self + 0x70u);
L_100c7f90: ;
    COW_AT(100c7f90)
        wr32(sp0 - 0x288u, 0u);
        wr32(sp0 - 0x28cu, 1u);
        g->eax = eax;
        g->edx = rd32(self);
        t696 = rd32(self);
        g->esp = sp0 - 0x284u;
        t697 = cow_thiscall(g, rd32(t696 + 0x31cu), self, 2, 1u, 0u);
        t698 = g->edx;
        eax = t697;
        edx = t698;
    }
L_100c7f9e: ;
    COW_AT(100c7f9e)
    wr32(sp0 - 0x288u, self);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    cow_thiscall(g, COW_IMG(0x1002c2a0u), self + 0x674u, 1, self);
    t699 = g->edx;
    edx = t699;
    COW_AT(100c7fac)
    g->eax = rd32(self);
    g->edx = edx;
    t700 = rd32(self);
    g->esp = sp0 - 0x284u;
    t701 = cow_thiscall(g, rd32(t700 + 0x304u), self, 0);
    t702 = g->edx;
    eax = t701;
    edx = t702;
    COW_AT(100c7fb6)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100c7fba)
        g->esp = sp0 - 0x284u;
        cow_thiscall(g, COW_IMG(0x100c8280u), self, 0);
    }
    COW_AT(100c7fc1)
    wr32(sp0 - 0x288u, self + 0x60cu);
    g->eax = self + 0x60cu;
    g->edx = rd32(self);
    t703 = rd32(self);
    g->esp = sp0 - 0x288u;
    t704 = cow_thiscall(g, rd32(t703 + 0x1bcu), self, 0);
    t705 = g->ecx;
    t706 = g->edx;
    eax = t704;
    ecx = t705;
    edx = t706;
    COW_AT(100c7fd2)
    wr32(sp0 - 0x28cu, eax);
    wr32(sp0 - 0x290u, sp0 - 0x208u);
    g->eax = sp0 - 0x208u;
    g->esp = sp0 - 0x284u;
    t707 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x208u, eax, rd32(sp0 - 0x288u));
    eax = t707;
    COW_AT(100c7fe0)
    wr32(sp0 - 0x294u, sp0 - 0x208u);
    wr32(sp0 - 0x298u, self + 0x678u);
    wr32(sp0 - 0x1fcu, 0x3f800000u);
    g->edx = self + 0x678u;
    g->esp = sp0 - 0x290u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x678u, sp0 - 0x208u);
    t708 = g->edx;
    edx = t708;
    COW_AT(100c7fff)
    wr32(sp0 - 0x288u, self + 0x62cu);
    g->eax = rd32(self);
    g->edx = edx;
    t709 = rd32(self);
    g->esp = sp0 - 0x288u;
    t710 = cow_thiscall(g, rd32(t709 + 0x1c0u), self, 0);
    t711 = g->edx;
    eax = t710;
    edx = t711;
    COW_AT(100c8013)
    wr32(sp0 - 0x28cu, eax);
    wr32(sp0 - 0x290u, sp0 - 0x1e8u);
    g->ecx = sp0 - 0x1e8u;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x1e8u, eax, rd32(sp0 - 0x288u));
    t712 = g->ecx;
    ecx = t712;
    COW_AT(100c8021)
    wr32(sp0 - 0x294u, sp0 - 0x1e8u);
    wr32(sp0 - 0x298u, self + 0x688u);
    wr32(sp0 - 0x1dcu, 0x3f800000u);
    g->eax = self + 0x688u;
    g->esp = sp0 - 0x290u;
    t713 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x688u, sp0 - 0x1e8u);
    eax = t713;
    COW_AT(100c8040)
    g->eax = eax;
    g->edx = rd32(self);
    t714 = rd32(self);
    g->esp = sp0 - 0x284u;
    t715 = cow_thiscall(g, rd32(t714 + 0x110u), self, 0);
    t716 = g->edx;
    eax = t715;
    edx = t716;
    COW_AT(100c804d)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100c80a0)
        g->eax = rd32(self);
        t723 = rd32(self);
        g->esp = sp0 - 0x284u;
        t724 = cow_thiscall(g, rd32(t723 + 0x110u), self, 0);
        d725 = cow_take_float(g);
        eax = t724;
        x0 = d725;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c805a)
        d717 = (double)rdf32(self + 0x758u);
        if (!(d717 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d717, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c8098)
            x0 = (double)rdf32(self + 0x758u);
        }
        else
        {
    COW_AT(100c806d)
            g->eax = rd32(self);
            t718 = rd32(self);
            g->esp = sp0 - 0x284u;
            t719 = cow_thiscall(g, rd32(t718 + 0x110u), self, 0);
            d720 = cow_take_float(g);
            eax = t719;
            x0 = d720;
    COW_AT(100c8077)
            if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c808c)
                g->eax = eax;
                g->esp = sp0 - 0x284u;
                t721 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d722 = cow_take_float(g);
                eax = t721;
                x0 = d722;
    COW_AT(100c8096)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c8084)
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100c80aa)
    t726 = rd32(self);
    wrf32(self + 0x698u, (float)x0);
    g->eax = eax;
    g->edx = t726;
    g->esp = sp0 - 0x284u;
    t727 = cow_thiscall(g, rd32(t726 + 0x110u), self, 0);
    t728 = g->edx;
    d729 = cow_take_float(g);
    eax = t727;
    edx = t728;
    x0 = d729;
    COW_AT(100c80ba)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100c810d)
        g->eax = rd32(self);
        t736 = rd32(self);
        g->esp = sp0 - 0x284u;
        t737 = cow_thiscall(g, rd32(t736 + 0x110u), self, 0);
        d738 = cow_take_float(g);
        eax = t737;
        x0 = d738;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c80c7)
        d730 = (double)rdf32(self + 0x75cu);
        if (!(d730 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d730, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c8105)
            x0 = (double)rdf32(self + 0x75cu);
        }
        else
        {
    COW_AT(100c80da)
            g->eax = rd32(self);
            t731 = rd32(self);
            g->esp = sp0 - 0x284u;
            t732 = cow_thiscall(g, rd32(t731 + 0x110u), self, 0);
            d733 = cow_take_float(g);
            eax = t732;
            x0 = d733;
    COW_AT(100c80e4)
            if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c80f9)
                g->eax = eax;
                g->esp = sp0 - 0x284u;
                t734 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d735 = cow_take_float(g);
                eax = t734;
                x0 = d735;
    COW_AT(100c8103)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c80f1)
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100c8117)
    t739 = rd32(self);
    wrf32(self + 0x6a0u, (float)x0);
    g->eax = eax;
    g->edx = t739;
    g->esp = sp0 - 0x284u;
    t740 = cow_thiscall(g, rd32(t739 + 0x110u), self, 0);
    t741 = g->edx;
    d742 = cow_take_float(g);
    eax = t740;
    edx = t741;
    x0 = d742;
    COW_AT(100c8127)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100c817a)
        g->eax = rd32(self);
        g->edx = edx;
        t752 = rd32(self);
        g->esp = sp0 - 0x284u;
        t753 = cow_thiscall(g, rd32(t752 + 0x110u), self, 0);
        t754 = g->edx;
        d755 = cow_take_float(g);
        eax = t753;
        edx = t754;
        x0 = d755;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c8134)
        d743 = (double)rdf32(self + 0x760u);
        if (!(d743 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d743, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c8172)
            x0 = (double)rdf32(self + 0x760u);
        }
        else
        {
    COW_AT(100c8147)
            g->eax = rd32(self);
            g->edx = edx;
            t744 = rd32(self);
            g->esp = sp0 - 0x284u;
            t745 = cow_thiscall(g, rd32(t744 + 0x110u), self, 0);
            t746 = g->edx;
            d747 = cow_take_float(g);
            eax = t745;
            edx = t746;
            x0 = d747;
    COW_AT(100c8151)
            if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c8166)
                g->eax = eax;
                g->edx = rd32(self);
                t748 = rd32(self);
                g->esp = sp0 - 0x284u;
                t749 = cow_thiscall(g, rd32(t748 + 0x110u), self, 0);
                t750 = g->edx;
                d751 = cow_take_float(g);
                eax = t749;
                edx = t750;
                x0 = d751;
    COW_AT(100c8170)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100c815e)
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100c8184)
    t756 = rd16(self + 0xb2u);
    wrf32(self + 0x69cu, (float)x0);
    if ((uint16_t)t756 != 0u)
    {
    COW_AT(100c8194)
        wr32(sp0 - 0x288u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t757 = cow_thiscall(g, COW_IMG(0x1002c270u), self + 0x674u, 1, 0u);
        t758 = g->edx;
        eax = t757;
        edx = t758;
    COW_AT(100c819d)
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t759 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
        eax = t759;
    COW_AT(100c81a4)
        if (rd32(eax) != 0u)
        {
            edi = rd32(eax);
    COW_AT(100c81aa)
            wr32(sp0 - 0x288u, self + 0x9d8u);
            wr32(sp0 - 0x28cu, sp0 - 0x208u);
            wr32(sp0 - 0x290u, sp0 - 0x26cu);
            g->eax = sp0 - 0x26cu;
            g->edx = sp0 - 0x208u;
            g->esp = sp0 - 0x284u;
            t760 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, sp0 - 0x208u, self + 0x9d8u);
            t761 = g->edx;
            eax = t760;
            edx = t761;
    COW_AT(100c81c0)
            wr32(sp0 - 0x288u, 0u);
            wr32(sp0 - 0x28cu, sp0 - 0x26cu);
            g->eax = eax;
            g->esp = sp0 - 0x284u;
            t762 = cow_thiscall(g, COW_IMG(0x10035170u), edi + 8u, 2, sp0 - 0x26cu, 0u);
            eax = t762;
        }
    }
    COW_AT(100c81d2)
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
        ebp = rd32(sp0 - 0x280u);
        edi = rd32(sp0 - 0x284u);
    }
    else
    {
        edx = rd32(COW_IMG(0x104568fcu));
        ebp = rd32(sp0 - 0x280u);
        edi = rd32(sp0 - 0x284u);
    COW_AT(100c81e1)
        g->eax = rd32(self);
        g->edx = edx;
        t763 = rd32(self);
        g->esp = sp0 - 0x27cu;
        t764 = cow_thiscall(g, rd32(t763 + 0x304u), self, 0);
        t765 = g->ecx;
        t766 = g->edx;
        eax = t764;
        ecx = t765;
        edx = t766;
    COW_AT(100c81eb)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100c81ef)
            wr32(sp0 - 0x280u, self);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x27cu;
            t767 = cow_cdecl(g, COW_IMG(0x100a5e10u), 1, self);
            eax = t767;
    COW_AT(100c81f5)
        }
    }
L_100c81f8: ;
    COW_AT(100c81f8)
    wr32(sp0 - 0x280u, sp0 - 0x208u);
    wr32(sp0 - 0x284u, self + 0x9d8u);
    g->eax = eax;
    g->esp = sp0 - 0x27cu;
    t768 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x9d8u, sp0 - 0x208u);
    eax = t768;
    COW_AT(100c8209)
    t769 = rd8(sp0 - 0x249u);
    wr32(self + 0x9e4u, 0x3f800000u);
    g->ebx = rd32(sp0 - 0x278u);
    g->esi = rd32(sp0 - 0x27cu);
    g->edi = edi;
    g->ebp = ebp;
    return (eax & 0xffffff00u) | t769;
L_100c7926: ;
    COW_AT(100c7926)
    t568 = rd32(eax + 0x10u);
    d569 = fr(g, (double)rdf32(eax) - (double)rdf32(eax + 4u));
    wr32(sp0 - 0x188u, t568);
    if (d569 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_188 = t568;
        x5 = (double)rdf32(eax + 0x14u);
        x4 = (double)rdf32(eax + 0xcu);
        x3 = (double)rdf32(eax + 8u);
        x2 = (double)rdf32(eax + 4u);
        x1 = (double)rdf32(eax);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d569, (double)rdf32(COW_IMG(0x103295d8u)), 6u);
    }
    else
    {
        loc_188 = t568;
        x5 = (double)rdf32(eax + 0x14u);
        x4 = (double)rdf32(eax + 0xcu);
        x3 = (double)rdf32(eax + 8u);
        x2 = (double)rdf32(eax + 4u);
        x1 = (double)rdf32(eax);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d569, (double)rdf32(COW_IMG(0x103295d8u)), 6u);
    COW_AT(100c794f)
        x2 = fr(g, x2 + (double)rdf32(COW_IMG(0x1032961cu)));
        x1 = fr(g, x1 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    COW_AT(100c7963)
    d570 = fr(g, x3 - x4);
    if (d570 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(100c7974)
        x4 = fr(g, x4 + (double)rdf32(COW_IMG(0x1032961cu)));
        x3 = fr(g, x3 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    COW_AT(100c7988)
    wr32(sp0 - 0x288u, 0x3f800000u);
    wrf32(self + 0x918u, (float)x3);
    wr32(self + 0x950u, loc_188);
    wr32(sp0 - 0x28cu, 0x447a0000u);
    wrf32(self + 0x91cu, (float)x2);
    wr32(sp0 - 0x290u, 0x447a0000u);
    wrf32(self + 0x920u, (float)x5);
    wr32(sp0 - 0x294u, 0x447a0000u);
    wrf32(self + 0x928u, (float)x4);
    wr32(sp0 - 0x298u, self + 0x8f8u);
    wr32(self + 0x940u, loc_188);
    wrf32(self + 0x92cu, (float)x2);
    wr32(self + 0x980u, loc_188);
    wr32(self + 0x990u, loc_188);
    wrf32(self + 0x930u, (float)x5);
    wrf32(self + 0x938u, (float)-x3);
    wrf32(self + 0x93cu, (float)x2);
    wrf32(self + 0x948u, (float)-x4);
    wrf32(self + 0x94cu, (float)x2);
    wrf32(self + 0x958u, (float)-x3);
    wrf32(self + 0x95cu, (float)x1);
    wrf32(self + 0x960u, (float)x5);
    wrf32(self + 0x968u, (float)-x4);
    wrf32(self + 0x96cu, (float)x1);
    wrf32(self + 0x970u, (float)x5);
    wrf32(self + 0x978u, (float)x3);
    wrf32(self + 0x97cu, (float)x1);
    wrf32(self + 0x988u, (float)x4);
    wrf32(self + 0x98cu, (float)x1);
    g->ecx = loc_188;
    g->edx = loc_188;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026e30u), 5, self + 0x8f8u, 0x447a0000u, 0x447a0000u, 0x447a0000u, 0x3f800000u);
    t571 = g->ecx;
    t572 = g->edx;
    ecx = t571;
    edx = t572;
    COW_AT(100c7a63)
    wr32(sp0 - 0x29cu, 0x3f800000u);
    wr32(sp0 - 0x2a0u, 0xc47a0000u);
    wr32(sp0 - 0x2a4u, 0xc47a0000u);
    wr32(sp0 - 0x2a8u, 0xc47a0000u);
    wr32(sp0 - 0x2acu, self + 0x908u);
    g->eax = self + 0x908u;
    g->edx = edx;
    g->esp = sp0 - 0x298u;
    t573 = cow_cdecl(g, COW_IMG(0x10026e30u), 5, self + 0x908u, 0xc47a0000u, 0xc47a0000u, 0xc47a0000u, 0x3f800000u);
    t574 = g->edx;
    eax = t573;
    edx = t574;
    COW_AT(100c7a83)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t575 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x1d8u, 0);
    t576 = g->edx;
    eax = t575;
    edx = t576;
    COW_AT(100c7a92)
    wr32(sp0 - 0x288u, sp0 - 0x1d8u);
    wr32(sp0 - 0x28cu, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t577 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x1d8u);
    t578 = g->edx;
    eax = t577;
    edx = t578;
    COW_AT(100c7aa7)
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t579 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x140u, 0);
    eax = t579;
    COW_AT(100c7ab3)
    wr32(sp0 - 0x288u, sp0 - 0x140u);
    wr32(sp0 - 0x28cu, 3u);
    g->eax = eax;
    g->edx = sp0 - 0x140u;
    g->esp = sp0 - 0x284u;
    t580 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 3u, sp0 - 0x140u);
    t581 = g->edx;
    eax = t580;
    edx = t581;
    COW_AT(100c7ac8)
    wr32(sp0 - 0x274u, 0x3f800000u);
    ebx = 8u;
    ebp = sp0 - 0xf8u;
    edi = self + 0x918u;
    loc_274 = 0x3f800000u;
L_100c7adc: ;
    COW_AT(100c7adc)
    wr32(sp0 - 0x288u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x180u, 1, edi);
    t582 = g->edx;
    edx = t582;
    COW_AT(100c7ae9)
    wr32(sp0 - 0x288u, edi);
    wr32(sp0 - 0x28cu, ebp - 8u);
    wr32(edi + 0xcu, 0x3f800000u);
    g->eax = ebp - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t583 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x1d8u, 2, ebp - 8u, edi);
    t584 = g->ecx;
    t585 = g->edx;
    eax = t583;
    ecx = t584;
    edx = t585;
    COW_AT(100c7b01)
    d586 = (double)rdf32(sp0 - 0x274u);
    if ((cow_fsw(g, d586, (double)rdf32(ebp), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d586, (double)rdf32(ebp), 1u) & 0x4100u;
        loc_274 = rd32(sp0 - 0x274u);
    }
    else
    {
        eax = cow_fsw(g, d586, (double)rdf32(ebp), 1u) & 0x4100u;
    COW_AT(100c7b11)
        wr32(sp0 - 0x274u, rd32(ebp));
        ecx = rd32(ebp);
        loc_274 = rd32(ebp);
    }
    COW_AT(100c7b18)
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        ebp = ebp + 0x10u;
        edi = edi + 0x10u;
        goto L_100c7adc;
    }
    ebx = ebx - 1u;
    COW_AT(100c7b21)
    ebx = ebx & 0xffffff00u;
    ebp = 0u;
L_100c7b25: ;
    COW_AT(100c7b25)
    d587 = (double)rdf32(ebp + sp0 - 0xf8u);
    d588 = (double)rdf32(sp0 - 0x248u);
    if ((cow_fsw(g, d587, d588, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d587, d588, 1u) & 0x4100u;
        loc_270 = rd32(sp0 - 0x270u);
    }
    else
    {
        eax = cow_fsw(g, d587, d588, 1u) & 0x4100u;
    COW_AT(100c7b39)
        t589 = rd32(sp0 - 0x270u) + 1u;
        wr32(sp0 - 0x270u, t589);
        loc_270 = t589;
    }
    COW_AT(100c7b3d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t590 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t591 = g->ecx;
    t592 = g->edx;
    eax = t590;
    ecx = t591;
    edx = t592;
    COW_AT(100c7b42)
    d593 = -(double)rdf32(eax + 0x14u);
    d594 = (double)rdf32(ebp + sp0 - 0xf8u);
    if (!(d593 < d594))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d593, d594, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d593, d594, 1u);
    COW_AT(100c7b55)
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t595 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
        eax = t595;
    COW_AT(100c7b5a)
        d596 = (double)rdf32(eax + 0x14u);
        wrf32(ebp + sp0 - 0xf8u, (float)-d596);
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    COW_AT(100c7b68)
    t597 = ebp + sp0 - 0x100u;
    wr32(sp0 - 0x288u, t597);
    t598 = ebp + sp0 - 0x80u;
    wr32(sp0 - 0x28cu, t598);
    g->eax = eax;
    g->edx = t597;
    g->esp = sp0 - 0x284u;
    t599 = cow_thiscall(g, COW_IMG(0x10028370u), sp0 - 0x140u, 2, t598, t597);
    t600 = g->ecx;
    t601 = g->edx;
    eax = t599;
    ecx = t600;
    edx = t601;
    edi = t598;
    COW_AT(100c7b84)
    wr32(sp0 - 0x288u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t602 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, edi);
    eax = t602;
    COW_AT(100c7b8a)
    ecx = edi;
    edx = self + 0x908u;
    edi = 4u;
L_100c7b9a: ;
    COW_AT(100c7b9a)
    d603 = (double)rdf32(edx - 0x10u);
    if ((cow_fsw(g, d603, (double)rdf32(ecx), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d603, (double)rdf32(ecx), 1u) & 0x4100u;
    }
    else
    {
    COW_AT(100c7ba8)
        t604 = rd32(ecx);
        wr32(edx - 0x10u, t604);
        eax = t604;
    }
    COW_AT(100c7bad)
    if (!((double)rdf32(edx) < (double)rdf32(ecx)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), (double)rdf32(ecx), 1u);
    }
    else
    {
    COW_AT(100c7bb8)
        t605 = rd32(ecx);
        wr32(edx, t605);
        eax = t605;
    }
    COW_AT(100c7bbc)
    if (edi != 1u)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        edi = edi - 1u;
        goto L_100c7b9a;
    }
    ecx = ecx + 4u;
    edx = edx + 4u;
    COW_AT(100c7bc5)
    if ((int32_t)(ebp + 0x10u) < 128)
    {
        ebp = ebp + 0x10u;
        loc_274 = rd32(sp0 - 0x274u);
        goto L_100c7b25;
    }
    COW_AT(100c7bd4)
    if (rd32(sp0 - 0x270u) != 8u) goto L_100c7c65;
    COW_AT(100c7bdf)
    if (rd32(sp0 - 0x244u) != 0u)
    {
        eax = rd32(sp0 - 0x244u);
    }
    else
    {
        eax = rd32(sp0 - 0x244u);
    COW_AT(100c7bee)
        t606 = rd8(self + 0xb2u);
        wr8(self + 0xb0u, 1u);
        wr8(self + 0xb2u, (uint8_t)(t606 | 1u));
        eax = ((eax | t606) & 0xffffff00u) | (uint8_t)(t606 | 1u);
    }
    COW_AT(100c7c03)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t607 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t608 = g->edx;
    eax = t607;
    edx = t608;
    COW_AT(100c7c08)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t609 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t610 = g->edx;
    eax = t609;
    edx = t610;
    loc_284 = rd32(sp0 - 0x284u);
    goto L_100c7c14;
L_100c7c65: ;
    COW_AT(100c7c65)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(100c7c69)
        wr32(self + 0x900u, 0x3c23d70au);
    }
    COW_AT(100c7c73)
    t617 = rd32(sp0 - 0x274u);
    wr32(sp0 - 0x1f0u, t617);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t618 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t619 = g->edx;
    eax = t618;
    edx = t619;
    COW_AT(100c7c8a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t620 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t621 = g->edx;
    eax = t620;
    edx = t621;
    COW_AT(100c7c96)
    ecx = sp0 - 0x180u;
    goto L_100c7c9d;
L_100c7d12: ;
    COW_AT(100c7d12)
    if (rd16(self + 0xb2u) == 0u)
    {
    COW_AT(100c7d1c)
        wr8(self + 0xb2u, rd8(self + 0xb2u) & 0xfeu);
        if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu) != 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu);
            ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(100c7d38)
            d639 = (double)(float)-(double)rdf32(sp0 - 0x1f0u);
            wrf32(sp0 - 0x248u, (float)d639);
            wr32(sp0 - 0x288u, 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t640 = cow_thiscall(g, COW_IMG(0x1018b8f0u), ecx, 1, 1u);
            t641 = g->edx;
            d642 = cow_take_float(g);
            eax = t640;
            edx = t641;
            x1 = d642;
    COW_AT(100c7d4c)
            d643 = (double)rdf32(sp0 - 0x248u);
            if (x1 < d643)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, d643, 1u);
    COW_AT(100c7d57)
                t644 = rd8(self + 0xb2u);
                wr8(self + 0xb0u, 1u);
                wr8(self + 0xb2u, (uint8_t)(t644 | 1u));
            }
        }
    }
    goto L_100c7d6c;
L_100c7ea7: ;
    COW_AT(100c7ea7)
    if ((uint8_t)eax == 0u) goto L_100c7d8b;
    COW_AT(100c7eaf)
    g->eax = eax;
    g->edx = edx;
    t649 = rd32(self + 0x768u);
    g->esp = sp0 - 0x284u;
    t650 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t651 = g->edx;
    eax = t650;
    edx = t651;
    edi = t649;
    COW_AT(100c7ebf)
    if (eax != edi) goto L_100c7edf;
    COW_AT(100c7ec3)
    g->eax = eax;
    g->edx = rd32(self);
    t652 = rd32(self);
    g->esp = sp0 - 0x284u;
    t653 = cow_thiscall(g, rd32(t652 + 0x34cu), self, 0);
    t654 = g->ecx;
    t655 = g->edx;
    eax = t653;
    ecx = t654;
    edx = t655;
    COW_AT(100c7ecd)
    if (eax != 0u) goto L_100c7f09;
    COW_AT(100c7ed1)
    g->eax = rd32(self);
    g->edx = edx;
    t656 = rd32(self);
    g->esp = sp0 - 0x284u;
    t657 = cow_thiscall(g, rd32(t656 + 0x358u), self, 0);
    t658 = g->ecx;
    t659 = g->edx;
    eax = t657;
    ecx = t658;
    edx = t659;
    COW_AT(100c7edb)
    if (eax != 0u) goto L_100c7f09;
L_100c7edf: ;
    COW_AT(100c7edf)
    g->eax = eax;
    g->edx = edx;
    t660 = rd32(self + 0x768u);
    g->esp = sp0 - 0x284u;
    t661 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t662 = g->edx;
    eax = t661;
    edx = t662;
    edi = t660;
    COW_AT(100c7eef)
    if (eax != edi) goto L_100c7d8b;
    COW_AT(100c7ef7)
    g->eax = eax;
    g->edx = rd32(self);
    t663 = rd32(self);
    g->esp = sp0 - 0x284u;
    t664 = cow_thiscall(g, rd32(t663 + 0x36cu), self, 0);
    t665 = g->ecx;
    t666 = g->edx;
    eax = t664;
    ecx = t665;
    edx = t666;
    COW_AT(100c7f01)
    if (eax == 0u) goto L_100c7d8b;
L_100c7f09: ;
    COW_AT(100c7f09)
    t667 = rd32(self + 0x59cu);
    wr32(sp0 - 0x248u, t667);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t668 = cow_call_regs(g, COW_IMG(0x10014cf0u), t667, g->ecx, g->edx, 1, 0);
    t669 = g->edx;
    d670 = cow_take_float(g);
    eax = t668;
    edx = t669;
    x1 = d670;
    COW_AT(100c7f18)
    d671 = fr(g, (double)rdf32(sp0 - 0x248u) - fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u))));
    if (!(d671 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        x1 = d671;
    }
    else
    {
        x1 = d671;
    COW_AT(100c7f2f)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(100c7f37)
    wrf32(self + 0x59cu, (float)x1);
    goto L_100c7dc0;
L_100c7f42: ;
    COW_AT(100c7f42)
    wr32(self + 0x8d4u, 0u);
    wr8(self + 0x8e8u, 1u);
    goto L_100c7f53;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c63d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c63dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x27cu);
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x278u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100c63f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x244u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c63f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_244;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c63ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_244;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c642eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x280u;
        (void)sp0;
        return 1;
    }
    case 0x100c643au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6441u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6448u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c644cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c645fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6470u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6479u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c648eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6493u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c649fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c64a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c64b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100c64c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100c64cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c64d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c64e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c64ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c64fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6508u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6512u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c651au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6528u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6536u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c653du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6545u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6549u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6550u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6558u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c655cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6566u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6591u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c659bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c65a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c65b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x284u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c65bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x284u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c65d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        double loc_238_f;
        double loc_23c_f;
        double loc_240_f;
        double loc_264_f;
        double loc_268_f;
        double loc_26c_f;
        double loc_274_f;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_26c_f = rdf32(sp0 - 0x26cu);
        loc_268_f = rdf32(sp0 - 0x268u);
        loc_264_f = rdf32(sp0 - 0x264u);
        loc_240_f = rdf32(sp0 - 0x240u);
        loc_23c_f = rdf32(sp0 - 0x23cu);
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c65eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x288u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        wr32(sp0 - 0x284u, sp0 - 0x230u);
        wr32(sp0 - 0x280u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c665cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        double loc_238_f;
        double loc_23c_f;
        double loc_240_f;
        double loc_264_f;
        double loc_268_f;
        double loc_26c_f;
        double loc_274_f;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_26c_f = rdf32(sp0 - 0x26cu);
        loc_268_f = rdf32(sp0 - 0x268u);
        loc_264_f = rdf32(sp0 - 0x264u);
        loc_240_f = rdf32(sp0 - 0x240u);
        loc_23c_f = rdf32(sp0 - 0x23cu);
        loc_238_f = rdf32(sp0 - 0x238u);
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6666u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c666cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c6676u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x284u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c667cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6688u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x288u;
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c668bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_260;
        uint32_t loc_264;
        uint32_t loc_268;
        uint32_t loc_26c;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        loc_26c = rd32(sp0 - 0x26cu);
        loc_268 = rd32(sp0 - 0x268u);
        loc_264 = rd32(sp0 - 0x264u);
        loc_260 = rd32(sp0 - 0x260u);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6699u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c66a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c66afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c66bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c66cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c66e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6704u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6712u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6714u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6727u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6739u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6752u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6767u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c677cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c677eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6799u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c67fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6802u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c680au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c680eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6815u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c681du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6821u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c682bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6833u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6844u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6854u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x270u, 0x3e000000u);
        (void)sp0;
        return 1;
    }
    case 0x100c6858u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x270u, 0x3e000000u);
        (void)sp0;
        return 1;
    }
    case 0x100c6862u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6866u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6870u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6882u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6887u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c689eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c68a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c68e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c68efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6900u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c690eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6921u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c692fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6940u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c694eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6961u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c696fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6980u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c698eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6999u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x28cu;
        g->edi = self + 0x61cu;
        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
        (void)sp0;
        return 1;
    }
    case 0x100c69a4u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x294u;
        g->edi = self + 0x61cu;
        wr32(sp0 - 0x290u, sp0 - 0x25cu);
        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
        (void)sp0;
        return 1;
    }
    case 0x100c69c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c69ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c69efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6a9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ab5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6abfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ac7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ad8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c6ae7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x294u;
        wr32(sp0 - 0x294u, sp0 - 0x214u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c6af1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x298u;
        wr32(sp0 - 0x298u, sp0 - 0x220u);
        wr32(sp0 - 0x294u, sp0 - 0x214u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c6afeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x29cu;
        wr32(sp0 - 0x29cu, sp0 - 0x214u);
        wr32(sp0 - 0x298u, sp0 - 0x220u);
        wr32(sp0 - 0x294u, sp0 - 0x214u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c6b26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2a4u;
        wr32(sp0 - 0x2a4u, sp0 - 0x220u);
        wr32(sp0 - 0x2a0u, sp0 - 0x214u);
        wr32(sp0 - 0x29cu, sp0 - 0x214u);
        wr32(sp0 - 0x298u, sp0 - 0x220u);
        wr32(sp0 - 0x294u, sp0 - 0x214u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x210u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c6b36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x2a4u, sp0 - 0x220u);
        wr32(sp0 - 0x2a0u, sp0 - 0x214u);
        wr32(sp0 - 0x29cu, sp0 - 0x214u);
        wr32(sp0 - 0x298u, sp0 - 0x220u);
        wr32(sp0 - 0x294u, sp0 - 0x214u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x210u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c6b47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x2a4u, sp0 - 0x220u);
        wr32(sp0 - 0x2a0u, sp0 - 0x214u);
        wr32(sp0 - 0x29cu, sp0 - 0x214u);
        wr32(sp0 - 0x298u, sp0 - 0x220u);
        wr32(sp0 - 0x294u, sp0 - 0x214u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6b57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6b68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6b77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x28cu, sp0 - 0x26cu);
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c6b7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6b8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_21c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ba5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6bafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6bb4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6bb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6bcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6be0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6be2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6bf1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_22c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_22c_f = rdf32(sp0 - 0x22cu);
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x270u, 0x3e000000u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        wr32(sp0 - 0x270u, 0x3e000000u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x230u);
        (void)sp0;
        return 1;
    }
    case 0x100c6c8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6cc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6cd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6ce2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6cf0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_254_f;
        double loc_258_f;
        double loc_25c_f;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_274_f = rdf32(sp0 - 0x274u);
        loc_25c_f = rdf32(sp0 - 0x25cu);
        loc_258_f = rdf32(sp0 - 0x258u);
        loc_254_f = rdf32(sp0 - 0x254u);
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6d7bu:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x28cu;
        g->edi = self + 0x61cu;
        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
        (void)sp0;
        return 1;
    }
    case 0x100c6d86u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x294u;
        g->edi = self + 0x61cu;
        wr32(sp0 - 0x290u, sp0 - 0x25cu);
        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
        (void)sp0;
        return 1;
    }
    case 0x100c6daau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6dc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6dcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6ddeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6de8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6dfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ecx = self + 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x100c6e9fu:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x28cu;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c6eb3u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ebdu:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c6eccu:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ed6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ee8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6ef4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f3eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c6f5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6f66u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6f70u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6f78u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6f83u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6f88u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6f97u:
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
        g->esp = sp0 - 0x298u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c6fa4u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c6fadu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6fbdu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6fc9u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6fd5u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6fdfu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c6fefu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7007u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7016u:
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
        g->esp = sp0 - 0x28cu;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        wr32(sp0 - 0x288u, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7023u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        wr32(sp0 - 0x288u, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7033u:
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
        g->esp = sp0 - 0x290u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c7041u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c704au:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c7054u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c706bu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c707cu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c708eu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c7098u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70a6u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70b0u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70c0u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70cau:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70d8u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70e4u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100c70e6u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c70ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_274_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274_f = rdf32(sp0 - 0x274u);
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c70fbu:
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
        g->esp = sp0 - 0x28cu;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28cu, sp0 - 0x26cu);
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c710du:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28cu, sp0 - 0x26cu);
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c711cu:
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
        g->esp = sp0 - 0x288u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x28cu, sp0 - 0x26cu);
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c7122u:
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
        g->esp = sp0 - 0x28cu;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c7131u:
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
        g->esp = sp0 - 0x294u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x294u, sp0 - 0x26cu);
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c7134u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c7143u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        (void)sp0;
        return 1;
    }
    case 0x100c7149u:
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
        g->esp = sp0 - 0x288u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c715au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7167u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c716fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c717fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7189u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7191u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c719fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71adu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71b7u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71bfu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71c9u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71d1u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71dbu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71e3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71edu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71f5u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c71ffu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7207u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7211u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7219u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7223u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c722bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7235u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c723du:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7247u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c724fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c725bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7267u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7273u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c727fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c728bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7292u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c729au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c72aau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c72b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72b6u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72beu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c72ceu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c72d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72dau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72e3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72eau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72f3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c72fau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7303u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c730au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7313u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c731au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7323u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c732au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7333u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c733au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7343u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c734au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7353u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c735au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7363u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c736au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7373u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c737au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c737fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7386u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c738bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7392u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7397u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c739eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73a3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73aau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73afu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73b6u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73bbu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73c2u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73c7u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73ceu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73d3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73dau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73e2u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c73eau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c73f1u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c73f8u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c73ffu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7406u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7410u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7417u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c741cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7426u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7430u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7434u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c743eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7446u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7450u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c745eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c746cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c747au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7484u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c748cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7496u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c749eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74a8u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74b0u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74c1u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74ceu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74d6u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74e0u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74e8u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74f2u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c74fau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7504u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c750cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7516u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c751eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7528u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c752cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7536u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c753au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7544u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7548u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c754fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7557u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c755du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c7567u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c756bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7570u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7578u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c757cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7588u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c758cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7593u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c7598u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c759fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75b0u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75b5u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75c4u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75cbu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75d3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75d7u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75deu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75e6u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75eau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c75f9u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7607u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7618u:
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
        g->esp = sp0 - 0x288u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7625u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7632u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7636u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c763du:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7644u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7649u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c764du:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7652u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c7657u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100c765fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7663u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c766bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c766fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7676u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7680u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7684u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c768bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7693u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7697u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c769eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76a6u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76aau:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76b4u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76bcu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76c0u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c76f6u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c770bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7710u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7719u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c772fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_26c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_26c = rd32(sp0 - 0x26cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7739u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7746u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7759u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7763u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7770u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7778u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7782u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7784u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c778cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7796u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77b1u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77c4u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77dbu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77e3u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77efu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c77f7u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7801u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c780fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c781cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c782fu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7839u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7846u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c784eu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7858u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c785au:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7862u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c786cu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7881u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x100c788bu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x100c78a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_270_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_270_f = rdf32(sp0 - 0x270u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x100c78b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_270_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_270_f = rdf32(sp0 - 0x270u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x100c78c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_270_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_270_f = rdf32(sp0 - 0x270u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x100c78d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_270_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_270_f = rdf32(sp0 - 0x270u);
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x100c78e5u:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c78efu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c78fcu:
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
        g->esp = sp0 - 0x280u;
        g->ebx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100c7908u:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c790cu:
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
        g->esp = sp0 - 0x284u;
        g->ebx = 0xffffffffu;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c7926u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c794fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c7963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c7974u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c7988u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_188;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_188 = rd32(sp0 - 0x188u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x284u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c7a63u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x298u;
        g->edi = self + 0x918u;
        (void)sp0;
        return 1;
    }
    case 0x100c7a83u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2acu;
        g->edi = self + 0x918u;
        (void)sp0;
        return 1;
    }
    case 0x100c7a92u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x918u;
        (void)sp0;
        return 1;
    }
    case 0x100c7aa7u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x918u;
        wr32(sp0 - 0x288u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100c7ab3u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x918u;
        wr32(sp0 - 0x288u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100c7ac8u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x918u;
        wr32(sp0 - 0x288u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x100c7adcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_274;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274 = rd32(sp0 - 0x274u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ae9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_274;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274 = rd32(sp0 - 0x274u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_274;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274 = rd32(sp0 - 0x274u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_274;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274 = rd32(sp0 - 0x274u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_274;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274 = rd32(sp0 - 0x274u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_270;
        uint32_t loc_274;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_274 = rd32(sp0 - 0x274u);
        loc_270 = rd32(sp0 - 0x270u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x288u;
        (void)sp0;
        return 1;
    }
    case 0x100c7b9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ba8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7badu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7bb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7bbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7bc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7bd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7bdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7beeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->ecx = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->ecx = sp0 - 0x140u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x288u, sp0 - 0x1d8u);
        (void)sp0;
        return 1;
    }
    case 0x100c7c5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x1f8u);
        (void)sp0;
        return 1;
    }
    case 0x100c7c65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7c9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ca2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7cb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ccau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7cd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7cd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ce1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ce9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7d92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7dabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7dc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7dc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7dd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ddfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7dedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7e06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7e0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7e11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7e21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x288u, sp0 - 0x248u);
        (void)sp0;
        return 1;
    }
    case 0x100c7e2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x288u, sp0 - 0x248u);
        (void)sp0;
        return 1;
    }
    case 0x100c7e34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7e45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7e6du:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x8c8u;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7e73u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x8c8u;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7e8bu:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x288u;
        g->edi = self + 0x8c8u;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7e96u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x8c8u;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7ea2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x100c7ea7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7eafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ebfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ec3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ecdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ed1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7edbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7edfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7eefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7ef7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f90u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7f9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        (void)sp0;
        return 1;
    }
    case 0x100c7facu:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100c7fb6u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100c7fbau:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100c7fc1u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100c7fd2u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x288u;
        g->edi = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100c7fe0u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x290u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x290u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100c7fffu:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x298u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x208u);
        wr32(sp0 - 0x290u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100c8013u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x288u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x208u);
        wr32(sp0 - 0x290u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100c8021u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x290u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x208u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8040u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x298u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c804du:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c805au:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c806du:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8077u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8084u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c808cu:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8096u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8098u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80a0u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80aau:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80bau:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80c7u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80dau:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80e4u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80f1u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c80f9u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8103u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8105u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c810du:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8117u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8127u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8134u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8147u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8151u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c815eu:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8166u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8170u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8172u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c817au:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8184u:
    {
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
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c8194u:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c819du:
    {
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
        self = g->esi;
        g->esp = sp0 - 0x284u;
        g->edi = self + 0x674u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x290u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100c81d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x280u;
        wr32(sp0 - 0x294u, sp0 - 0x1e8u);
        (void)sp0;
        return 1;
    }
    case 0x100c81f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_284;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_284 = rd32(sp0 - 0x284u);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100c8209u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x280u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c63d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100c63d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
