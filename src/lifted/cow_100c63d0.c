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
    double d121;
    double d124;
    double d125;
    double d126;
    double d127;
    double d128;
    double d129;
    double d130;
    double d131;
    double d132;
    double d133;
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
    double d150;
    double d151;
    double d164;
    double d168;
    double d170;
    double d171;
    double d172;
    double d173;
    double d179;
    double d18;
    double d180;
    double d181;
    double d182;
    double d194;
    double d198;
    double d199;
    double d20;
    double d200;
    double d201;
    double d202;
    double d203;
    double d204;
    double d205;
    double d206;
    double d207;
    double d21;
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
    double d224;
    double d225;
    double d226;
    double d229;
    double d230;
    double d231;
    double d232;
    double d233;
    double d234;
    double d235;
    double d236;
    double d237;
    double d238;
    double d239;
    double d240;
    double d268;
    double d275;
    double d278;
    double d282;
    double d286;
    double d289;
    double d497;
    double d498;
    double d506;
    double d509;
    double d514;
    double d515;
    double d518;
    double d520;
    double d523;
    double d527;
    double d528;
    double d531;
    double d533;
    double d536;
    double d540;
    double d541;
    double d545;
    double d549;
    double d553;
    double d558;
    double d559;
    double d560;
    double d561;
    double d57;
    double d572;
    double d573;
    double d589;
    double d590;
    double d591;
    double d596;
    double d597;
    double d599;
    double d60;
    double d606;
    double d61;
    double d62;
    double d628;
    double d63;
    double d632;
    double d64;
    double d642;
    double d645;
    double d646;
    double d65;
    double d66;
    double d67;
    double d673;
    double d674;
    double d677;
    double d678;
    double d680;
    double d689;
    double d720;
    double d721;
    double d724;
    double d726;
    double d729;
    double d733;
    double d734;
    double d737;
    double d739;
    double d742;
    double d746;
    double d747;
    double d751;
    double d755;
    double d759;
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
    double d89;
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
    uint32_t loc_274;
    double loc_274_f;
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
    uint32_t t122;
    uint32_t t123;
    uint32_t t13;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t15;
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
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t169;
    uint32_t t17;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
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
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t2;
    uint32_t t208;
    uint32_t t209;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t22;
    uint32_t t227;
    uint32_t t228;
    uint32_t t23;
    uint32_t t24;
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
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t272;
    uint32_t t273;
    uint32_t t274;
    uint32_t t276;
    uint32_t t277;
    uint32_t t279;
    uint32_t t28;
    uint32_t t280;
    uint32_t t281;
    uint32_t t283;
    uint32_t t284;
    uint32_t t285;
    uint32_t t287;
    uint32_t t288;
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
    uint32_t t499;
    uint32_t t5;
    uint32_t t50;
    uint32_t t500;
    uint32_t t501;
    uint32_t t502;
    uint32_t t503;
    uint32_t t504;
    uint32_t t505;
    uint32_t t507;
    uint32_t t508;
    uint32_t t51;
    uint32_t t510;
    uint32_t t511;
    uint32_t t512;
    uint32_t t513;
    uint32_t t516;
    uint32_t t517;
    uint32_t t519;
    uint32_t t52;
    uint32_t t521;
    uint32_t t522;
    uint32_t t524;
    uint32_t t525;
    uint32_t t526;
    uint32_t t529;
    uint32_t t53;
    uint32_t t530;
    uint32_t t532;
    uint32_t t534;
    uint32_t t535;
    uint32_t t537;
    uint32_t t538;
    uint32_t t539;
    uint32_t t54;
    uint32_t t542;
    uint32_t t543;
    uint32_t t544;
    uint32_t t546;
    uint32_t t547;
    uint32_t t548;
    uint32_t t55;
    uint32_t t550;
    uint32_t t551;
    uint32_t t552;
    uint32_t t554;
    uint32_t t555;
    uint32_t t556;
    uint32_t t557;
    uint32_t t56;
    uint32_t t562;
    uint32_t t563;
    uint32_t t564;
    uint32_t t565;
    uint32_t t566;
    uint32_t t567;
    uint32_t t568;
    uint32_t t569;
    uint32_t t570;
    uint32_t t571;
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
    uint32_t t59;
    uint32_t t592;
    uint32_t t593;
    uint32_t t594;
    uint32_t t595;
    uint32_t t598;
    uint32_t t6;
    uint32_t t600;
    uint32_t t601;
    uint32_t t602;
    uint32_t t603;
    uint32_t t604;
    uint32_t t605;
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
    uint32_t t625;
    uint32_t t626;
    uint32_t t627;
    uint32_t t629;
    uint32_t t630;
    uint32_t t631;
    uint32_t t633;
    uint32_t t634;
    uint32_t t635;
    uint32_t t636;
    uint32_t t637;
    uint32_t t638;
    uint32_t t639;
    uint32_t t640;
    uint32_t t641;
    uint32_t t643;
    uint32_t t644;
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
    uint32_t t670;
    uint32_t t671;
    uint32_t t672;
    uint32_t t675;
    uint32_t t676;
    uint32_t t679;
    uint32_t t68;
    uint32_t t681;
    uint32_t t682;
    uint32_t t683;
    uint32_t t684;
    uint32_t t685;
    uint32_t t686;
    uint32_t t687;
    uint32_t t688;
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
    uint32_t t717;
    uint32_t t718;
    uint32_t t719;
    uint32_t t72;
    uint32_t t722;
    uint32_t t723;
    uint32_t t725;
    uint32_t t727;
    uint32_t t728;
    uint32_t t73;
    uint32_t t730;
    uint32_t t731;
    uint32_t t732;
    uint32_t t735;
    uint32_t t736;
    uint32_t t738;
    uint32_t t74;
    uint32_t t740;
    uint32_t t741;
    uint32_t t743;
    uint32_t t744;
    uint32_t t745;
    uint32_t t748;
    uint32_t t749;
    uint32_t t75;
    uint32_t t750;
    uint32_t t752;
    uint32_t t753;
    uint32_t t754;
    uint32_t t756;
    uint32_t t757;
    uint32_t t758;
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
    uint32_t t770;
    uint32_t t771;
    uint32_t t772;
    uint32_t t773;
    uint32_t t8;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 688u);

    wr32(sp0 - 0x278u, in_ebx);
    wr32(sp0 - 0x27cu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x27cu;
    t1 = cow_thiscall(g, COW_IMG(0x10085490u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 0x244u, 0u);
    g->eax = rd32(self);
    g->edx = t2;
    t3 = rd32(self);
    t4 = cow_thiscall(g, rd32(t3 + 0x148u), self, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        loc_244 = 0u;
    }
    else
    {
        eax = t4;
        edx = t5;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        wr32(sp0 - 0x244u, 1u);
        loc_244 = 1u;
    }
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
    wr32(sp0 - 0x284u, self + 0x62cu);
    g->eax = self + 0x62cu;
    g->edx = t8;
    g->esp = sp0 - 0x280u;
    t9 = cow_cdecl(g, COW_IMG(0x10026e00u), 1, self + 0x62cu);
    t10 = g->edx;
    if ((uint8_t)ebx != 0u)
    {
        eax = t9;
    }
    else
    {
        eax = t9;
        edx = t10;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x27cu;
        t11 = cow_thiscall(g, COW_IMG(0x100846d0u), self, 0);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
        }
        else
        {
            eax = t11;
            edx = t13;
            d14 = (double)rdf32(self + 0x8bcu);
            if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                wr32(self + 0x8bcu, 0x42000000u);
                wr8(self + 0x8b6u, 1u);
            }
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
        d18 = (double)rdf32(self + 0x8bcu);
        if ((cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        }
        else
        {
            eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
            g->esp = sp0 - 0x27cu;
            t19 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            d20 = cow_take_float(g);
            d21 = fr(g, (double)rdf32(self + 0x8bcu) - d20);
            wrf32(self + 0x8bcu, (float)d21);
            eax = t19;
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t22 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t23 = cow_thiscall(g, rd32(t22 + 0x1bcu), self, 0);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x280u, t23);
    wr32(sp0 - 0x284u, sp0 - 0x208u);
    g->eax = sp0 - 0x208u;
    t26 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x208u, t23);
    g->edx = rd32(self);
    t27 = rd32(self);
    t28 = cow_thiscall(g, rd32(t27 + 0x1c0u), self, 0);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x280u, t28);
    wr32(sp0 - 0x284u, sp0 - 0x1e8u);
    g->eax = sp0 - 0x1e8u;
    g->edx = t30;
    t31 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x1e8u, t28);
    t32 = g->edx;
    g->ebx = ebx;
    g->edx = t32;
    g->esp = sp0 - 0x1c4u;
    t33 = cow_bridge_indirect(g, COW_IMG(0x100a4ed0u), 0u, 46u, (const uint32_t[]){rd32(sp0 - 0x27cu), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u)}, self, g->edx, t31, 184u);
    t34 = g->edx;
    wr8(sp0 - 0x249u, (uint8_t)t33);
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        ebp = in_ebp;
        edi = in_edi;
        goto L_100c81f8;
    }
    eax = t33;
    edx = t34;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t35 = cow_thiscall(g, COW_IMG(0x100d1070u), self, 0);
    t36 = g->edx;
    if (rd8(self + 0x103u) != 0u)
    {
        edx = t36;
        goto L_100c666c;
    }
    eax = (t35 & 0xffffff00u) | rd8(self + 0x103u);
    edx = t36;
    if (rd8(self + 0x104u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    g->eax = eax;
    g->edx = rd32(self);
    t37 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t38 = cow_thiscall(g, rd32(t37 + 0x19cu), self, 0);
    t39 = g->edx;
    if ((uint8_t)t38 != 0u)
    {
        edx = t39;
        goto L_100c666c;
    }
    eax = t38;
    edx = t39;
    if (rd8(self + 0x102u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    if (rd8(self + 0x101u) != 0u) goto L_100c666c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t40 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t41 = g->edx;
    wr32(sp0 - 0x280u, t40);
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t40);
    t43 = g->edx;
    if ((uint8_t)t42 != 0u) goto L_100c655c;
    eax = t42;
    edx = t43;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t44 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t45 = g->edx;
    wr32(sp0 - 0x280u, t44);
    t46 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t44);
    if ((uint8_t)t46 == 0u)
    {
        eax = t46;
        goto L_100c6591;
    }
L_100c655c: ;
    if (rd32(self + 0x768u) != 0u)
    {
        eax = rd32(self + 0x768u);
        goto L_100c6591;
    }
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
    wr32(sp0 - 0x280u, in_ebp);
    wr32(sp0 - 0x284u, in_edi);
    g->eax = rd32(self);
    g->edx = edx;
    t73 = rd32(self);
    g->esp = sp0 - 0x284u;
    t74 = cow_thiscall(g, rd32(t73 + 0x318u), self, 0);
    t75 = g->edx;
    if (t74 != 0u)
    {
        edx = t75;
        ebx = ebx & 0xffffff00u;
        loc_274_f = (double)rdf32(sp0 - 0x274u);
    }
    else
    {
        eax = t74;
        edx = t75;
        ebx = ebx & 0xffffff00u;
        if (rd8(self + 0x102u) != 0u)
        {
            loc_274_f = (double)rdf32(sp0 - 0x274u);
        }
        else
        {
            if (rd32(self + 0x7a4u) != 0xffffffffu)
            {
                loc_274_f = (double)rdf32(sp0 - 0x274u);
            }
            else
            {
                if (rd32(self + 0x86cu) == 0u)
                {
                    eax = rd32(self + 0x86cu);
                    g->eax = eax;
                    g->edx = rd32(self);
                    t90 = rd32(self);
                    g->esp = sp0 - 0x284u;
                    t91 = cow_thiscall(g, rd32(t90 + 0x304u), self, 0);
                    t92 = g->edx;
                    if ((uint8_t)t91 == 0u)
                    {
                        eax = t91;
                        goto L_100c6821;
                    }
                    edx = t92;
                    g->eax = rd32(self);
                    g->edx = edx;
                    t93 = rd32(self);
                    g->esp = sp0 - 0x284u;
                    t94 = cow_thiscall(g, rd32(t93 + 0x340u), self, 0);
                    t95 = g->edx;
                    if ((uint8_t)t94 == 0u)
                    {
                        eax = t94;
                        goto L_100c6821;
                    }
                    eax = t94;
                    edx = t95;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t96 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
                    t97 = g->edx;
                    wr32(sp0 - 0x288u, t96);
                    g->edx = t97;
                    t98 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t96);
                    t99 = g->edx;
                    if ((uint8_t)t98 != 0u)
                    {
                        edx = t99;
                        goto L_100c6833;
                    }
                    eax = t98;
                    edx = t99;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t100 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
                    t101 = g->edx;
                    wr32(sp0 - 0x288u, t100);
                    g->edx = t101;
                    t102 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t100);
                    t103 = g->edx;
                    if ((uint8_t)t102 != 0u)
                    {
                        edx = t103;
                        goto L_100c6833;
                    }
                    eax = t102;
L_100c6821: ;
                    g->eax = eax;
                    g->edx = rd32(self);
                    t104 = rd32(self);
                    g->esp = sp0 - 0x284u;
                    t105 = cow_thiscall(g, rd32(t104 + 0x330u), self, 0);
                    t106 = g->edx;
                    if ((uint8_t)t105 != 0u)
                    {
                        edx = t106;
                        goto L_100c6ab5;
                    }
                    edx = t106;
L_100c6833: ;
                    wr32(sp0 - 0x288u, self + 0xe4u);
                    wr32(sp0 - 0x28cu, sp0 - 0x230u);
                    g->eax = self + 0xe4u;
                    g->ecx = sp0 - 0x230u;
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t107 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0xe4u);
                    t108 = g->ecx;
                    t109 = g->edx;
                    wr32(sp0 - 0x270u, 0x3e000000u);
                    g->ecx = t108;
                    g->edx = t109;
                    t110 = cow_call_regs(g, COW_IMG(0x10087060u), t107, g->ecx, g->edx, 1, 0);
                    t111 = g->ecx;
                    t112 = g->edx;
                    if ((uint8_t)t110 == 0u)
                    {
                        eax = t110;
                        ecx = t111;
                        edx = t112;
                    }
                    else
                    {
                        eax = t110;
                        g->eax = eax;
                        g->edx = rd32(self);
                        t113 = rd32(self);
                        g->esp = sp0 - 0x284u;
                        t114 = cow_thiscall(g, rd32(t113 + 0x13cu), self, 0);
                        t115 = g->ecx;
                        t116 = g->edx;
                        if (t114 == 0u)
                        {
                            eax = t114;
                            ecx = t115;
                            edx = t116;
                        }
                        else
                        {
                            edx = t116;
                            g->eax = rd32(self);
                            g->edx = edx;
                            t117 = rd32(self);
                            g->esp = sp0 - 0x284u;
                            t118 = cow_thiscall(g, rd32(t117 + 0x13cu), self, 0);
                            t119 = g->ecx;
                            t120 = g->edx;
                            wr32(sp0 - 0x270u, t118);
                            d121 = (double)(float)fr(g, (double)(int32_t)t118 * (double)rdf32(COW_IMG(0x10331364u)));
                            wrf32(sp0 - 0x270u, (float)d121);
                            eax = t118;
                            ecx = t119;
                            edx = t120;
                        }
                    }
                    g->edx = edx;
                    g->esp = sp0 - 0x284u;
                    t122 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t123 = g->edx;
                    d124 = cow_take_float(g);
                    wrf32(sp0 - 0x274u, (float)(double)(float)d124);
                    if ((cow_fsw(g, d124, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d124, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        edx = t123;
                        loc_274_f = (double)(float)d124;
                    }
                    else
                    {
                        eax = cow_fsw(g, d124, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        edx = t123;
                        loc_274_f = (double)(float)d124;
                        ebp = rd32(sp0 - 0x270u);
L_100c68a8: ;
                        d125 = (double)(float)fr(g, (double)rdf32(sp0 - 0x230u) - (double)rdf32(self + 0x61cu));
                        wrf32(sp0 - 0x25cu, (float)d125);
                        d126 = (double)(float)fr(g, (double)rdf32(sp0 - 0x22cu) - (double)rdf32(self + 0x620u));
                        wrf32(sp0 - 0x258u, (float)d126);
                        d127 = (double)(float)fr(g, (double)rdf32(sp0 - 0x228u) - (double)rdf32(self + 0x624u));
                        wrf32(sp0 - 0x254u, (float)d127);
                        if ((cow_fsw(g, d125, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d125, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            loc_25c_f = d125;
                            loc_258_f = d126;
                            loc_254_f = d127;
                        }
                        else
                        {
                            eax = cow_fsw(g, d125, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            loc_25c_f = d125;
                            loc_258_f = d126;
                            loc_254_f = d127;
                            d128 = (double)(float)fr(g, loc_25c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x25cu, (float)d128);
                            loc_25c_f = d128;
                        }
                        if (!(loc_25c_f < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                            d129 = (double)(float)fr(g, loc_25c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x25cu, (float)d129);
                            loc_25c_f = d129;
                        }
                        if ((cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            d130 = (double)(float)fr(g, loc_258_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x258u, (float)d130);
                            loc_258_f = d130;
                        }
                        if (!(loc_258_f < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                            d131 = (double)(float)fr(g, loc_258_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x258u, (float)d131);
                            loc_258_f = d131;
                        }
                        if ((cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            d132 = (double)(float)fr(g, loc_254_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x254u, (float)d132);
                            loc_254_f = d132;
                        }
                        if (!(loc_254_f < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                            d133 = (double)(float)fr(g, loc_254_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(sp0 - 0x254u, (float)d133);
                            loc_254_f = d133;
                        }
                        wr32(sp0 - 0x288u, ebp);
                        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
                        g->eax = eax;
                        g->ecx = sp0 - 0x25cu;
                        g->esp = sp0 - 0x284u;
                        t134 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x25cu, ebp);
                        t135 = g->ecx;
                        wr32(sp0 - 0x290u, sp0 - 0x25cu);
                        wr32(sp0 - 0x294u, self + 0x61cu);
                        g->edx = sp0 - 0x25cu;
                        g->esp = sp0 - 0x28cu;
                        t136 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x61cu, sp0 - 0x25cu);
                        t137 = g->edx;
                        d138 = (double)(float)fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
                        wrf32(sp0 - 0x274u, (float)d138);
                        d139 = fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
                        if ((cow_fsw(g, d139, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
                        {
                            eax = cow_fsw(g, d139, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            edx = t137;
                            loc_274_f = d138;
                            goto L_100c68a8;
                        }
                        eax = cow_fsw(g, d139, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        edx = t137;
                        loc_274_f = d138;
                    }
                    d140 = (double)rdf32(self + 0x61cu);
                    if ((cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d141 = fr(g, (double)rdf32(self + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x61cu, (float)d141);
                    }
                    d142 = (double)rdf32(self + 0x61cu);
                    if (!(d142 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d142, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d142, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d143 = fr(g, (double)rdf32(self + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x61cu, (float)d143);
                    }
                    d144 = (double)rdf32(self + 0x620u);
                    if ((cow_fsw(g, d144, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d144, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d144, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d145 = fr(g, (double)rdf32(self + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x620u, (float)d145);
                    }
                    d146 = (double)rdf32(self + 0x620u);
                    if (!(d146 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d147 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x620u, (float)d147);
                    }
                    d148 = (double)rdf32(self + 0x624u);
                    if ((cow_fsw(g, d148, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d148, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d148, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d149 = fr(g, (double)rdf32(self + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x624u, (float)d149);
                    }
                    d150 = (double)rdf32(self + 0x624u);
                    if (d150 < (double)rdf32(COW_IMG(0x10329d28u)))
                    {
                        d151 = fr(g, (double)rdf32(self + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(self + 0x624u, (float)d151);
                    }
                }
                else
                {
                    eax = rd32(self + 0x86cu);
                    d76 = (double)rdf32(self + 0x870u);
                    if ((cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        loc_274_f = (double)rdf32(sp0 - 0x274u);
                    }
                    else
                    {
                        eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        d77 = fr(g, (double)rdf32(self + 0x874u) + (double)rdf32(self + 0x620u));
                        d78 = (double)rdf32(COW_IMG(0x10329d30u));
                        wrf32(self + 0x620u, (float)d77);
                        if ((cow_fsw(g, d77, d78, 1u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d77, d78, 1u) & 0x4100u;
                            x0 = d77;
                        }
                        else
                        {
                            eax = cow_fsw(g, d77, d78, 1u) & 0x4100u;
                            x0 = d77;
                            d79 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(self + 0x620u, (float)d79);
                        }
                        d80 = (double)rdf32(self + 0x620u);
                        if (!(d80 < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                            d81 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(self + 0x620u, (float)d81);
                        }
                        d82 = (double)rdf32(self + 0x874u);
                        if (!(d82 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                            x0 = (double)rdf32(self + 0x874u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                            x0 = (double)rdf32(self + 0x874u);
                            x0 = -x0;
                        }
                        d83 = fr(g, (double)rdf32(self + 0x870u) - x0);
                        if (!(d83 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            x0 = d83;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                            x0 = d83;
                            d84 = (double)rdf32(self + 0x874u);
                            if ((cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) == 0u)
                            {
                                eax = cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                                x0 = -x0;
                            }
                            d85 = fr(g, x0 + (double)rdf32(self + 0x620u));
                            d86 = (double)rdf32(COW_IMG(0x10329d30u));
                            wrf32(self + 0x620u, (float)d85);
                            if ((cow_fsw(g, d85, d86, 1u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d85, d86, 1u) & 0x4100u;
                                x0 = d85;
                            }
                            else
                            {
                                eax = cow_fsw(g, d85, d86, 1u) & 0x4100u;
                                x0 = d85;
                                d87 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
                                wrf32(self + 0x620u, (float)d87);
                            }
                            d88 = (double)rdf32(self + 0x620u);
                            if (d88 < (double)rdf32(COW_IMG(0x10329d28u)))
                            {
                                d89 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                                wrf32(self + 0x620u, (float)d89);
                            }
                            x0 = (double)rdf32(COW_IMG(0x103295d8u));
                        }
                        wrf32(self + 0x870u, (float)x0);
                        loc_274_f = (double)rdf32(sp0 - 0x274u);
                    }
                }
            }
        }
    }
L_100c6f4a: ;
    if (rd32(self + 0x7a4u) == 0xffffffffu)
    {
        eax = rd32(self + 0x7a4u);
    }
    else
    {
        eax = rd32(self + 0x7a4u);
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t241 = cow_thiscall(g, COW_IMG(0x10081550u), self + 0x7a8u, 0);
        t242 = g->ecx;
        if (self == t241)
        {
            eax = t241;
            goto L_100c70e6;
        }
        eax = t241;
        ecx = t242;
        edi = t241;
        if (edi == 0u) goto L_100c70e6;
        if ((int32_t)rd32(self + 0x7a4u) < 48)
        {
            eax = rd32(self + 0x7a4u);
            goto L_100c6fad;
        }
        eax = rd32(self + 0x7a4u);
        if ((int32_t)eax >= 61) goto L_100c6fad;
        wr32(sp0 - 0x288u, 0u);
        wr32(sp0 - 0x28cu, self);
        wr32(sp0 - 0x290u, edi);
        wr32(sp0 - 0x294u, eax);
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        g->edx = sp0 - 0x240u;
        g->esp = sp0 - 0x1e4u;
        cow_bridge_indirect(g, COW_IMG(0x1003ba20u), 0u, 45u, (const uint32_t[]){sp0 - 0x240u, eax, edi, self, 0u, rd32(sp0 - 0x284u), rd32(sp0 - 0x280u), rd32(sp0 - 0x27cu), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u)}, g->ecx, g->edx, g->eax, 180u);
        t243 = g->edx;
        g->eax = rd32(edi);
        g->edx = t243;
        t244 = rd32(edi);
        g->esp = sp0 - 0x284u;
        t245 = cow_thiscall(g, rd32(t244 + 0x1bcu), edi, 0);
        t246 = g->edx;
        t247 = rd32(t245 + 4u);
        wr32(sp0 - 0x23cu, t247);
        eax = t245;
        edx = t246;
L_100c6fbd: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t251 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x1d8u, 0);
        t252 = g->edx;
        t253 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x1d8u, 0);
        g->edx = rd32(edi);
        t254 = rd32(edi);
        t255 = cow_thiscall(g, rd32(t254 + 0x1c0u), edi, 0);
        t256 = g->edx;
        t257 = rd32(t255 + 4u);
        wr32(sp0 - 0x288u, t257);
        g->eax = t257;
        t258 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x1d8u, 1, t257);
        wr32(sp0 - 0x288u, self + 0x7b4u);
        wr32(sp0 - 0x28cu, sp0 - 0x220u);
        g->edx = sp0 - 0x220u;
        cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x1d8u, 2, sp0 - 0x220u, self + 0x7b4u);
        t259 = g->edx;
        wr32(sp0 - 0x288u, sp0 - 0x220u);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        g->eax = sp0 - 0x220u;
        t260 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x240u, sp0 - 0x220u);
        g->edx = rd32(self);
        t261 = rd32(self);
        t262 = cow_thiscall(g, rd32(t261 + 0x1bcu), self, 0);
        t263 = g->edx;
        wr32(sp0 - 0x288u, t262);
        wr32(sp0 - 0x28cu, sp0 - 0x240u);
        wr32(sp0 - 0x290u, sp0 - 0x26cu);
        g->edx = t263;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, sp0 - 0x240u, t262);
        t264 = g->edx;
        if ((int32_t)rd32(self + 0x7a4u) < 48)
        {
            eax = rd32(self + 0x7a4u);
            goto L_100c704a;
        }
        eax = rd32(self + 0x7a4u);
        edx = t264;
        if ((int32_t)eax < 61) goto L_100c70d8;
L_100c704a: ;
        g->eax = eax;
        g->edx = rd32(edi);
        t265 = rd32(edi);
        g->esp = sp0 - 0x284u;
        t266 = cow_thiscall(g, rd32(t265 + 0x1c0u), edi, 0);
        t267 = g->edx;
        d268 = (double)(float)fr(g, (double)rdf32(t266 + 4u) + (double)rdf32(COW_IMG(0x1032df98u)));
        wrf32(sp0 - 0x270u, (float)d268);
        g->eax = rd32(self);
        t269 = rd32(self);
        t270 = cow_thiscall(g, rd32(t269 + 0x1c0u), self, 0);
        t271 = rd32(sp0 - 0x270u);
        wr32(t270 + 4u, t271);
        g->edx = rd32(self);
        t272 = rd32(self);
        t273 = cow_thiscall(g, rd32(t272 + 0x1c0u), self, 0);
        t274 = g->edx;
        d275 = (double)rdf32(t273 + 4u);
        if ((cow_fsw(g, d275, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d275, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            edx = t274;
            g->eax = rd32(self);
            t276 = rd32(self);
            g->esp = sp0 - 0x284u;
            t277 = cow_thiscall(g, rd32(t276 + 0x1c0u), self, 0);
            d278 = fr(g, (double)rdf32(t277 + 4u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(t277 + 4u, (float)d278);
            eax = t277 + 4u;
        }
        g->eax = eax;
        g->edx = rd32(self);
        t279 = rd32(self);
        g->esp = sp0 - 0x284u;
        t280 = cow_thiscall(g, rd32(t279 + 0x1c0u), self, 0);
        t281 = g->edx;
        d282 = (double)rdf32(t280 + 4u);
        if (!(d282 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (t280 & 0xffff0000u) | (uint16_t)cow_fsw(g, d282, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            edx = t281;
        }
        else
        {
            edx = t281;
            g->eax = rd32(self);
            g->edx = edx;
            t283 = rd32(self);
            g->esp = sp0 - 0x284u;
            t284 = cow_thiscall(g, rd32(t283 + 0x1c0u), self, 0);
            t285 = g->edx;
            d286 = fr(g, (double)rdf32(t284 + 4u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(t284 + 4u, (float)d286);
            eax = t284 + 4u;
            edx = t285;
        }
L_100c70d8: ;
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t287 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        eax = t287;
    }
L_100c70ec: ;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    wr32(sp0 - 0x28cu, sp0 - 0x26cu);
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t288 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x26cu, sp0 - 0x26cu);
    d289 = cow_take_float(g);
    if (!(fr(g, sqrt(d289)) < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (t288 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d289)), (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    }
    else
    {
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        g->eax = sp0 - 0x26cu;
        g->edx = rd32(self);
        t290 = rd32(self);
        g->esp = sp0 - 0x288u;
        t291 = cow_thiscall(g, rd32(t290 + 0x1bcu), self, 0);
        t292 = g->ecx;
        t293 = g->edx;
        wr32(sp0 - 0x28cu, t291);
        g->ecx = t292;
        g->edx = t293;
        g->esp = sp0 - 0x284u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, t291, sp0 - 0x26cu);
        t294 = g->ecx;
        t295 = g->edx;
        wr32(sp0 - 0x290u, COW_IMG(0x1048a37cu));
        wr32(sp0 - 0x294u, sp0 - 0x26cu);
        g->eax = sp0 - 0x26cu;
        g->esp = sp0 - 0x28cu;
        t296 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x26cu, COW_IMG(0x1048a37cu));
        eax = t296;
    }
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = eax;
    g->edx = rd32(self);
    t297 = rd32(self);
    g->esp = sp0 - 0x288u;
    t298 = cow_thiscall(g, rd32(t297 + 0x1bcu), self, 0);
    t299 = g->ecx;
    t300 = g->edx;
    wr32(sp0 - 0x28cu, t298);
    g->edx = t300;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, t298, sp0 - 0x26cu);
    t301 = g->edx;
    if (rd32(self + 0xb4u) == 0u)
    {
        edx = t301;
        goto L_100c7607;
    }
    eax = rd32(self + 0xb4u);
    edx = t301;
    wr32(sp0 - 0x270u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t302 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x270u, 0);
    t303 = g->edx;
    if ((uint8_t)t302 == 0u)
    {
        edx = t303;
        goto L_100c7607;
    }
    edx = t303;
    if (rd32(self + 0x80u) != 0u)
    {
        eax = rd32(self + 0x80u);
        goto L_100c7450;
    }
    g->eax = rd32(self);
    g->edx = edx;
    t304 = rd32(self);
    g->esp = sp0 - 0x284u;
    t305 = cow_thiscall(g, rd32(t304 + 0x134u), self, 0);
    t306 = g->edx;
    if ((uint8_t)t305 != 0u)
    {
        eax = t305;
        edx = t306;
        goto L_100c7406;
    }
    eax = t305;
    edx = t306;
    if (rd8(self + 0x102u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        goto L_100c7410;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100c7406;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    g->eax = eax;
    g->edx = rd32(self);
    t307 = rd32(self);
    g->esp = sp0 - 0x284u;
    t308 = cow_thiscall(g, rd32(t307 + 0x34cu), self, 0);
    t309 = g->edx;
    if (t308 != 0u)
    {
        eax = t308;
        edx = t309;
        goto L_100c7406;
    }
    edx = t309;
    g->eax = rd32(self);
    g->edx = edx;
    t310 = rd32(self);
    g->esp = sp0 - 0x284u;
    t311 = cow_thiscall(g, rd32(t310 + 0x358u), self, 0);
    t312 = g->edx;
    if (t311 != 0u)
    {
        eax = t311;
        edx = t312;
        goto L_100c7406;
    }
    eax = t311;
    g->eax = eax;
    g->edx = rd32(self);
    t313 = rd32(self);
    g->esp = sp0 - 0x284u;
    t314 = cow_thiscall(g, rd32(t313 + 0x360u), self, 0);
    t315 = g->edx;
    if (t314 != 0u)
    {
        eax = t314;
        edx = t315;
        goto L_100c7406;
    }
    edx = t315;
    g->eax = rd32(self);
    g->edx = edx;
    t316 = rd32(self);
    g->esp = sp0 - 0x284u;
    t317 = cow_thiscall(g, rd32(t316 + 0x36cu), self, 0);
    t318 = g->edx;
    if (t317 != 0u)
    {
        eax = t317;
        edx = t318;
        goto L_100c7406;
    }
    eax = t317;
    g->eax = eax;
    g->edx = rd32(self);
    t319 = rd32(self);
    g->esp = sp0 - 0x284u;
    t320 = cow_thiscall(g, rd32(t319 + 0x378u), self, 0);
    t321 = g->edx;
    if (t320 != 0u)
    {
        eax = t320;
        edx = t321;
        goto L_100c7406;
    }
    edx = t321;
    g->eax = rd32(self);
    g->edx = edx;
    t322 = rd32(self);
    g->esp = sp0 - 0x284u;
    t323 = cow_thiscall(g, rd32(t322 + 0x384u), self, 0);
    t324 = g->edx;
    if (t323 != 0u)
    {
        eax = t323;
        edx = t324;
        goto L_100c7406;
    }
    eax = t323;
    g->eax = eax;
    g->edx = rd32(self);
    t325 = rd32(self);
    g->esp = sp0 - 0x284u;
    t326 = cow_thiscall(g, rd32(t325 + 0x394u), self, 0);
    t327 = g->edx;
    if (t326 != 0u)
    {
        eax = t326;
        edx = t327;
        goto L_100c7406;
    }
    edx = t327;
    g->eax = rd32(self);
    g->edx = edx;
    t328 = rd32(self);
    g->esp = sp0 - 0x284u;
    t329 = cow_thiscall(g, rd32(t328 + 0x3a4u), self, 0);
    t330 = g->edx;
    if (t329 != 0u)
    {
        eax = t329;
        edx = t330;
        goto L_100c7406;
    }
    eax = t329;
    g->eax = eax;
    g->edx = rd32(self);
    t331 = rd32(self);
    g->esp = sp0 - 0x284u;
    t332 = cow_thiscall(g, rd32(t331 + 0x154u), self, 0);
    t333 = g->edx;
    if (t332 != 0u)
    {
        eax = t332;
        edx = t333;
        goto L_100c7406;
    }
    edx = t333;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->ebx = 0xffffffffu;
    g->eax = sp0 - 0x26cu;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t334 = cow_thiscall(g, COW_IMG(0x100c83c0u), self, 1, sp0 - 0x26cu);
    t335 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    t336 = cow_thiscall(g, COW_IMG(0x100c9810u), self, 1, sp0 - 0x26cu);
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    cow_call_regs(g, COW_IMG(0x100c9c10u), t336, self, sp0 - 0x26cu, 0, 1, sp0 - 0x26cu);
    t337 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    t338 = cow_call_regs(g, COW_IMG(0x100ca310u), sp0 - 0x26cu, self, t337, 0, 1, sp0 - 0x26cu);
    t339 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->edx = t339;
    t340 = cow_thiscall(g, COW_IMG(0x100ca730u), self, 1, sp0 - 0x26cu);
    t341 = g->edx;
    g->edx = t341;
    t342 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t343 = g->edx;
    wr32(sp0 - 0x288u, t342);
    g->edx = t343;
    t344 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t342);
    t345 = g->edx;
    if ((uint8_t)t344 == 0u)
    {
        eax = t344;
        edx = t345;
        goto L_100c72b1;
    }
    eax = t344;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = eax;
    g->edx = sp0 - 0x26cu;
    g->esp = sp0 - 0x284u;
    t346 = cow_thiscall(g, COW_IMG(0x100c8ed0u), self, 1, sp0 - 0x26cu);
    t347 = g->edx;
    eax = t346;
    edx = t347;
    edi = t346;
L_100c759f: ;
    if (rd8(self + 0x8b4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x8b4u);
        goto L_100c75f1;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x8b4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t454 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t455 = g->edx;
    if (t454 > 0x53u)
    {
        eax = t454;
        edx = t455;
        goto L_100c75c4;
    }
    eax = t454;
    edx = t455;
    t456 = rd32(COW_IMG(0x100c8224u) + rd8(COW_IMG(0x100c822cu) + eax) * 4u);
    switch (t456 - RD)
    {
    case 0x100c75c4u: goto L_100c75c4;
    case 0x100c75eau: goto L_100c75ea;
    default: rt_fatal(g, COW_IMG(0x100c75bdu), "switch");
    }
    return 0;
L_100c6591: ;
    g->eax = eax;
    g->edx = rd32(self);
    t47 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t48 = cow_thiscall(g, rd32(t47 + 0x1bcu), self, 0);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0x280u, t48);
    wr32(sp0 - 0x284u, sp0 - 0x240u);
    g->eax = sp0 - 0x240u;
    t51 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x240u, t48);
    wr32(sp0 - 0x288u, self + 0x5c4u);
    wr32(sp0 - 0x28cu, sp0 - 0x230u);
    g->ecx = self + 0x5c4u;
    g->edx = sp0 - 0x230u;
    g->esp = sp0 - 0x284u;
    t52 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0x5c4u);
    t53 = g->ecx;
    t54 = g->edx;
    g->edx = t54;
    g->esp = sp0 - 0x27cu;
    t55 = cow_call_regs(g, COW_IMG(0x10014cf0u), t52, g->ecx, g->edx, 1, 0);
    t56 = g->edx;
    d57 = cow_take_float(g);
    wrf32(sp0 - 0x274u, (float)(double)(float)d57);
    if ((cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        edx = t56;
        loc_274_f = (double)(float)d57;
        loc_26c_f = (double)rdf32(sp0 - 0x26cu);
        loc_268_f = (double)rdf32(sp0 - 0x268u);
        loc_264_f = (double)rdf32(sp0 - 0x264u);
        loc_240_f = (double)rdf32(sp0 - 0x240u);
        loc_23c_f = (double)rdf32(sp0 - 0x23cu);
        loc_238_f = (double)rdf32(sp0 - 0x238u);
        goto L_100c665c;
    }
    loc_274_f = (double)(float)d57;
    loc_26c_f = (double)rdf32(sp0 - 0x26cu);
    loc_268_f = (double)rdf32(sp0 - 0x268u);
    loc_264_f = (double)rdf32(sp0 - 0x264u);
    loc_240_f = (double)rdf32(sp0 - 0x240u);
    loc_23c_f = (double)rdf32(sp0 - 0x23cu);
    loc_238_f = (double)rdf32(sp0 - 0x238u);
L_100c65d6: ;
    wr32(sp0 - 0x280u, sp0 - 0x240u);
    wr32(sp0 - 0x284u, sp0 - 0x230u);
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = sp0 - 0x240u;
    g->edx = sp0 - 0x26cu;
    g->esp = sp0 - 0x27cu;
    t58 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, sp0 - 0x230u, sp0 - 0x240u);
    t59 = g->edx;
    d60 = (double)(float)fr(g, (double)rdf32(sp0 - 0x26cu) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x26cu, (float)d60);
    d61 = (double)(float)fr(g, (double)rdf32(sp0 - 0x268u) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x268u, (float)d61);
    d62 = (double)(float)fr(g, (double)rdf32(sp0 - 0x264u) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x264u, (float)d62);
    d63 = (double)(float)fr(g, (double)rdf32(sp0 - 0x240u) + d60);
    wrf32(sp0 - 0x240u, (float)d63);
    d64 = (double)(float)fr(g, (double)rdf32(sp0 - 0x23cu) + d61);
    wrf32(sp0 - 0x23cu, (float)d64);
    d65 = (double)(float)fr(g, (double)rdf32(sp0 - 0x238u) + d62);
    wrf32(sp0 - 0x238u, (float)d65);
    d66 = (double)(float)fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x274u, (float)d66);
    d67 = fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
    if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
    {
        loc_274_f = d66;
        loc_26c_f = d60;
        loc_268_f = d61;
        loc_264_f = d62;
        loc_240_f = d63;
        loc_23c_f = d64;
        loc_238_f = d65;
        goto L_100c65d6;
    }
    edx = t59;
    loc_274_f = d66;
    loc_26c_f = d60;
    loc_268_f = d61;
    loc_264_f = d62;
    loc_240_f = d63;
    loc_23c_f = d64;
    loc_238_f = d65;
L_100c665c: ;
    g->eax = rd32(self);
    t68 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t69 = cow_thiscall(g, rd32(t68 + 0x1bcu), self, 0);
    eax = t69;
    ecx = sp0 - 0x240u;
L_100c667c: ;
    wr32(sp0 - 0x280u, eax);
    wr32(sp0 - 0x284u, ecx);
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->edx = sp0 - 0x26cu;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, ecx, eax);
    t72 = g->edx;
    edx = t72;
    loc_26c = rd32(sp0 - 0x26cu);
    loc_268 = rd32(sp0 - 0x268u);
    loc_264 = rd32(sp0 - 0x264u);
    loc_260 = rd32(sp0 - 0x260u);
    goto L_100c668b;
L_100c666c: ;
    g->eax = rd32(self);
    t70 = rd32(self);
    g->esp = sp0 - 0x27cu;
    t71 = cow_thiscall(g, rd32(t70 + 0x1bcu), self, 0);
    eax = t71;
    ecx = self + 0x5c4u;
    goto L_100c667c;
L_100c6ab5: ;
    g->eax = rd32(self);
    t152 = rd32(self);
    g->esp = sp0 - 0x284u;
    t153 = cow_thiscall(g, rd32(t152 + 0x304u), self, 0);
    t154 = g->ecx;
    if ((uint8_t)t153 == 0u)
    {
        eax = t153;
        ecx = t154;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        goto L_100c6b57;
    }
    eax = t153;
    wr32(sp0 - 0x288u, self + 0x5b4u);
    wr32(sp0 - 0x28cu, sp0 - 0x220u);
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x220u, self + 0x5b4u);
    t155 = g->edx;
    wr32(sp0 - 0x290u, sp0 - 0x26cu);
    wr32(sp0 - 0x294u, sp0 - 0x214u);
    g->eax = sp0 - 0x26cu;
    g->ecx = sp0 - 0x214u;
    g->esp = sp0 - 0x28cu;
    t156 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x214u, sp0 - 0x26cu);
    t157 = g->ecx;
    wr32(sp0 - 0x298u, sp0 - 0x220u);
    g->ecx = t157;
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x294u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t156, g->ecx, g->edx, 1, 1, sp0 - 0x220u);
    t158 = g->ecx;
    t159 = g->edx;
    wr32(sp0 - 0x29cu, sp0 - 0x214u);
    g->esp = sp0 - 0x298u;
    t160 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x214u, g->ecx, g->edx, 1, 1, sp0 - 0x214u);
    wr32(sp0 - 0x2a0u, sp0 - 0x214u);
    wr32(sp0 - 0x2a4u, sp0 - 0x220u);
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x210u, 0u);
    g->ecx = sp0 - 0x214u;
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x29cu;
    t161 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x220u, sp0 - 0x214u);
    t162 = g->ecx;
    t163 = g->edx;
    d164 = cow_take_float(g);
    if (!(d164 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t161 & 0xffff0000u) | (uint16_t)cow_fsw(g, d164, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t162;
        loc_21c = 0u;
        loc_210 = 0u;
        goto L_100c6b57;
    }
    edx = t163;
    wr32(sp0 - 0x288u, self + 0xe4u);
    wr32(sp0 - 0x28cu, sp0 - 0x230u);
    g->eax = self + 0xe4u;
    g->ecx = sp0 - 0x230u;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t165 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0xe4u);
    t166 = g->ecx;
    t167 = g->edx;
    eax = t165;
    ecx = t166;
    edx = t167;
    x1 = (double)rdf32(sp0 - 0x220u);
    x0 = (double)rdf32(sp0 - 0x218u);
L_100c6c1f: ;
    d182 = (double)(float)-fr(g, atan2(x0, x1));
    wrf32(sp0 - 0x22cu, (float)d182);
    ebx = (ebx & 0xffffff00u) | 1u;
    loc_22c_f = d182;
L_100c6c29: ;
    wr32(sp0 - 0x270u, 0x3e000000u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t183 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
    t184 = g->ecx;
    t185 = g->edx;
    if ((uint8_t)t183 == 0u)
    {
        eax = t183;
        ecx = t184;
        edx = t185;
    }
    else
    {
        edx = t185;
        g->eax = rd32(self);
        g->edx = edx;
        t186 = rd32(self);
        g->esp = sp0 - 0x284u;
        t187 = cow_thiscall(g, rd32(t186 + 0x13cu), self, 0);
        t188 = g->ecx;
        t189 = g->edx;
        if (t187 == 0u)
        {
            eax = t187;
            ecx = t188;
            edx = t189;
        }
        else
        {
            eax = t187;
            g->eax = eax;
            g->edx = rd32(self);
            t190 = rd32(self);
            g->esp = sp0 - 0x284u;
            t191 = cow_thiscall(g, rd32(t190 + 0x13cu), self, 0);
            t192 = g->ecx;
            t193 = g->edx;
            wr32(sp0 - 0x270u, t191);
            d194 = (double)(float)fr(g, (double)(int32_t)t191 * (double)rdf32(COW_IMG(0x10331364u)));
            wrf32(sp0 - 0x270u, (float)d194);
            eax = t191;
            ecx = t192;
            edx = t193;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t195 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t196 = g->ecx;
    t197 = g->edx;
    d198 = cow_take_float(g);
    wrf32(sp0 - 0x274u, (float)(double)(float)d198);
    if ((cow_fsw(g, d198, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d198, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t197;
        loc_274_f = (double)(float)d198;
    }
    else
    {
        eax = cow_fsw(g, d198, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t196;
        edx = t197;
        loc_274_f = (double)(float)d198;
        ebp = rd32(sp0 - 0x270u);
L_100c6c8a: ;
        d199 = (double)(float)fr(g, (double)rdf32(sp0 - 0x230u) - (double)rdf32(self + 0x61cu));
        wrf32(sp0 - 0x25cu, (float)d199);
        d200 = (double)(float)fr(g, (double)rdf32(sp0 - 0x22cu) - (double)rdf32(self + 0x620u));
        wrf32(sp0 - 0x258u, (float)d200);
        d201 = (double)(float)fr(g, (double)rdf32(sp0 - 0x228u) - (double)rdf32(self + 0x624u));
        wrf32(sp0 - 0x254u, (float)d201);
        if ((cow_fsw(g, d199, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d199, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            loc_25c_f = d199;
            loc_258_f = d200;
            loc_254_f = d201;
        }
        else
        {
            eax = cow_fsw(g, d199, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            loc_25c_f = d199;
            loc_258_f = d200;
            loc_254_f = d201;
            d202 = (double)(float)fr(g, loc_25c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x25cu, (float)d202);
            loc_25c_f = d202;
        }
        if (!(loc_25c_f < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_25c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d203 = (double)(float)fr(g, loc_25c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x25cu, (float)d203);
            loc_25c_f = d203;
        }
        if ((cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d204 = (double)(float)fr(g, loc_258_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x258u, (float)d204);
            loc_258_f = d204;
        }
        if (!(loc_258_f < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_258_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d205 = (double)(float)fr(g, loc_258_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x258u, (float)d205);
            loc_258_f = d205;
        }
        if ((cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, loc_254_f, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d206 = (double)(float)fr(g, loc_254_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x254u, (float)d206);
            loc_254_f = d206;
        }
        if (loc_254_f < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d207 = (double)(float)fr(g, loc_254_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x254u, (float)d207);
            loc_254_f = d207;
        }
        wr32(sp0 - 0x288u, ebp);
        wr32(sp0 - 0x28cu, sp0 - 0x25cu);
        g->eax = sp0 - 0x25cu;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t208 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x25cu, ebp);
        t209 = g->edx;
        wr32(sp0 - 0x290u, sp0 - 0x25cu);
        wr32(sp0 - 0x294u, self + 0x61cu);
        g->ecx = sp0 - 0x25cu;
        g->edx = t209;
        g->esp = sp0 - 0x28cu;
        t210 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x61cu, sp0 - 0x25cu);
        t211 = g->ecx;
        t212 = g->edx;
        d213 = (double)(float)fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(sp0 - 0x274u, (float)d213);
        d214 = fr(g, (double)rdf32(sp0 - 0x274u) - (double)rdf32(COW_IMG(0x1032961cu)));
        if ((cow_fsw(g, d214, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d214, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            ecx = t211;
            edx = t212;
            loc_274_f = d213;
            goto L_100c6c8a;
        }
        eax = cow_fsw(g, d214, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t212;
        loc_274_f = d213;
    }
    d215 = (double)rdf32(self + 0x61cu);
    if ((cow_fsw(g, d215, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d215, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d215, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d216 = fr(g, (double)rdf32(self + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x61cu, (float)d216);
    }
    d217 = (double)rdf32(self + 0x61cu);
    if (!(d217 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d217, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d217, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d218 = fr(g, (double)rdf32(self + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x61cu, (float)d218);
    }
    d219 = (double)rdf32(self + 0x620u);
    if ((cow_fsw(g, d219, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d219, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d219, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d220 = fr(g, (double)rdf32(self + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x620u, (float)d220);
    }
    d221 = (double)rdf32(self + 0x620u);
    if (!(d221 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d221, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d221, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d222 = fr(g, (double)rdf32(self + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x620u, (float)d222);
    }
    d223 = (double)rdf32(self + 0x624u);
    if ((cow_fsw(g, d223, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d223, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d223, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d224 = fr(g, (double)rdf32(self + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x624u, (float)d224);
    }
    d225 = (double)rdf32(self + 0x624u);
    if (!(d225 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d225, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d225, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d226 = fr(g, (double)rdf32(self + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x624u, (float)d226);
    }
    if ((uint8_t)ebx != 0u)
    {
        if (rd8(COW_IMG(0x10487f80u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
            wr32(sp0 - 0x288u, self + 0x61cu);
            wr32(sp0 - 0x28cu, self + 0x44u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t227 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, self + 0x61cu);
            t228 = g->edx;
            d229 = (double)rdf32(self + 0x44u);
            if ((cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                edx = t228;
            }
            else
            {
                eax = cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                edx = t228;
                d230 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x44u, (float)d230);
            }
            d231 = (double)rdf32(self + 0x44u);
            if (!(d231 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d231, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d231, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d232 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x44u, (float)d232);
            }
            d233 = (double)rdf32(self + 0x48u);
            if ((cow_fsw(g, d233, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d233, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d233, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d234 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x48u, (float)d234);
            }
            d235 = (double)rdf32(self + 0x48u);
            if (!(d235 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d235, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d235, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d236 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x48u, (float)d236);
            }
            d237 = (double)rdf32(self + 0x4cu);
            if ((cow_fsw(g, d237, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d237, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d237, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d238 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x4cu, (float)d238);
            }
            d239 = (double)rdf32(self + 0x4cu);
            if (!(d239 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                loc_274_f = (double)rdf32(sp0 - 0x274u);
            }
            else
            {
                d240 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(self + 0x4cu, (float)d240);
                loc_274_f = (double)rdf32(sp0 - 0x274u);
            }
        }
    }
    goto L_100c6f4a;
L_100c6b57: ;
    d168 = (double)rdf32(sp0 - 0x268u);
    if (!(d168 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d168, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d171 = (double)rdf32(sp0 - 0x264u);
        d172 = (double)rdf32(sp0 - 0x26cu);
        x0 = fr(g, fr(g, d171 * d171) + fr(g, d172 * d172));
    }
    else
    {
        wr32(sp0 - 0x288u, sp0 - 0x26cu);
        wr32(sp0 - 0x28cu, sp0 - 0x26cu);
        g->eax = sp0 - 0x26cu;
        g->esp = sp0 - 0x284u;
        t169 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x26cu, sp0 - 0x26cu);
        d170 = cow_take_float(g);
        eax = t169;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_210 = rd32(sp0 - 0x210u);
        x0 = d170;
    }
    wr32(sp0 - 0x288u, self + 0xe4u);
    wr32(sp0 - 0x28cu, sp0 - 0x230u);
    d173 = (double)(float)fr(g, sqrt(x0));
    wrf32(sp0 - 0x270u, (float)d173);
    g->eax = eax;
    g->edx = sp0 - 0x230u;
    g->esp = sp0 - 0x284u;
    t174 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x230u, self + 0xe4u);
    t175 = g->edx;
    if (rd32(self + 0x70u) == 0u)
    {
        eax = t174;
        ecx = rd32(self + 0x70u);
        edx = t175;
        goto L_100c6bb8;
    }
    eax = t174;
    ecx = rd32(self + 0x70u);
    edx = t175;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t176 = cow_call_regs(g, COW_IMG(0x10097a40u), eax, ecx, g->edx, 1, 0);
    t177 = g->ecx;
    t178 = g->edx;
    if (t176 != 0u)
    {
        eax = t176;
        ecx = t177;
        edx = t178;
        loc_22c_f = (double)rdf32(sp0 - 0x22cu);
        goto L_100c6c29;
    }
    eax = t176;
    ecx = t177;
    edx = t178;
L_100c6bb8: ;
    d179 = (double)rdf32(sp0 - 0x270u);
    if ((cow_fsw(g, d179, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d179, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
        loc_22c_f = (double)rdf32(sp0 - 0x22cu);
        goto L_100c6c29;
    }
    eax = cow_fsw(g, d179, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
    d180 = (double)rdf32(sp0 - 0x264u);
    if (!(d180 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d180, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x264u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d180, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x264u);
        x0 = -x0;
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        goto L_100c6c17;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
    d181 = (double)rdf32(sp0 - 0x26cu);
    if (!(d181 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x26cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x26cu);
        x0 = -x0;
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        loc_22c_f = (double)rdf32(sp0 - 0x22cu);
        goto L_100c6c29;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
L_100c6c17: ;
    x1 = (double)rdf32(sp0 - 0x26cu);
    x0 = (double)rdf32(sp0 - 0x264u);
    goto L_100c6c1f;
L_100c6fad: ;
    wr32(sp0 - 0x288u, sp0 - 0x240u);
    wr32(sp0 - 0x28cu, eax);
    g->eax = eax;
    g->edx = rd32(edi);
    t248 = rd32(edi);
    g->esp = sp0 - 0x284u;
    t249 = cow_thiscall(g, rd32(t248 + 0x1c4u), edi, 2, eax, sp0 - 0x240u);
    t250 = g->edx;
    eax = t249;
    edx = t250;
    goto L_100c6fbd;
L_100c70e6: ;
    wr32(self + 0x7a4u, 0xffffffffu);
    goto L_100c70ec;
L_100c72b1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t348 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t349 = g->edx;
    wr32(sp0 - 0x288u, t348);
    g->edx = t349;
    t350 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t348);
    t351 = g->edx;
    if ((uint8_t)t350 == 0u)
    {
        eax = t350;
        edx = t351;
        goto L_100c72d5;
    }
    edx = t351;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = sp0 - 0x26cu;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t352 = cow_thiscall(g, COW_IMG(0x100c9330u), self, 1, sp0 - 0x26cu);
    t353 = g->edx;
    eax = t352;
    edx = t353;
    edi = t352;
    goto L_100c759f;
L_100c72d5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t408 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t409 = g->edx;
    if (t408 == 6u)
    {
        eax = t408;
        edx = t409;
        goto L_100c73f8;
    }
    eax = t408;
    edx = t409;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t410 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t411 = g->edx;
    if (t410 == 0x26u)
    {
        eax = t410;
        edx = t411;
        goto L_100c73f8;
    }
    eax = t410;
    edx = t411;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t412 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t413 = g->edx;
    if (t412 == 0x27u)
    {
        eax = t412;
        edx = t413;
        goto L_100c73f8;
    }
    eax = t412;
    edx = t413;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t414 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t415 = g->edx;
    if (t414 == 0x28u)
    {
        eax = t414;
        edx = t415;
        goto L_100c73f8;
    }
    eax = t414;
    edx = t415;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t416 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t417 = g->edx;
    if (t416 == 0x29u)
    {
        eax = t416;
        edx = t417;
        goto L_100c73f8;
    }
    eax = t416;
    edx = t417;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t418 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t419 = g->edx;
    if (t418 == 0x2au)
    {
        eax = t418;
        edx = t419;
        goto L_100c73f8;
    }
    eax = t418;
    edx = t419;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t420 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t421 = g->edx;
    if (t420 == 0x2bu)
    {
        eax = t420;
        edx = t421;
        goto L_100c73f8;
    }
    eax = t420;
    edx = t421;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t422 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t423 = g->edx;
    if (t422 == 0x32u)
    {
        eax = t422;
        edx = t423;
        goto L_100c73f8;
    }
    eax = t422;
    edx = t423;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t424 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t425 = g->edx;
    if (t424 == 0x38u)
    {
        eax = t424;
        edx = t425;
        goto L_100c73f8;
    }
    eax = t424;
    edx = t425;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t426 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t427 = g->edx;
    if (t426 == 0x39u)
    {
        eax = t426;
        edx = t427;
        goto L_100c73f8;
    }
    eax = t426;
    edx = t427;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t428 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t429 = g->edx;
    if (t428 == 0x3au)
    {
        eax = t428;
        edx = t429;
        goto L_100c73f8;
    }
    eax = t428;
    edx = t429;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t430 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t431 = g->edx;
    if (t430 == 0x3bu)
    {
        eax = t430;
        edx = t431;
        goto L_100c73f8;
    }
    eax = t430;
    edx = t431;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t432 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t433 = g->edx;
    if (t432 == 0x3cu)
    {
        eax = t432;
        edx = t433;
        goto L_100c73f8;
    }
    eax = t432;
    edx = t433;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t434 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t435 = g->edx;
    if (t434 == 0x3du)
    {
        eax = t434;
        edx = t435;
        goto L_100c73f8;
    }
    eax = t434;
    edx = t435;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t436 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t437 = g->edx;
    if (t436 == 0x3eu)
    {
        eax = t436;
        edx = t437;
        goto L_100c73f8;
    }
    eax = t436;
    edx = t437;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t438 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t439 = g->edx;
    if (t438 == 0x33u)
    {
        eax = t438;
        edx = t439;
        goto L_100c73f8;
    }
    eax = t438;
    edx = t439;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t440 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t441 = g->edx;
    if (t440 == 0x34u)
    {
        eax = t440;
        edx = t441;
        goto L_100c73f8;
    }
    eax = t440;
    edx = t441;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t442 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t443 = g->edx;
    if (t442 == 0x35u)
    {
        eax = t442;
        edx = t443;
        goto L_100c73f8;
    }
    eax = t442;
    edx = t443;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t444 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t445 = g->edx;
    wr32(sp0 - 0x288u, t444);
    g->edx = t445;
    t446 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, t444);
    t447 = g->edx;
    if ((uint8_t)t446 == 0u)
    {
        eax = t446;
        edx = t447;
        edi = 0u;
    }
    else
    {
        eax = t446;
        edx = t447;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t448 = cow_thiscall(g, COW_IMG(0x100caf90u), self, 0);
        t449 = g->edx;
        eax = t448;
        edx = t449;
        edi = t448;
    }
    goto L_100c759f;
L_100c73f8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t450 = cow_thiscall(g, COW_IMG(0x100caa60u), self, 0);
    t451 = g->edx;
    eax = t450;
    edx = t451;
    edi = t450;
    goto L_100c759f;
L_100c7406: ;
    if (rd8(self + 0x102u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        goto L_100c741c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
L_100c7410: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t354 = cow_thiscall(g, COW_IMG(0x100ca8c0u), self, 0);
    t355 = g->edx;
    eax = t354;
    edx = t355;
    edi = 0u;
    goto L_100c759f;
L_100c741c: ;
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100c7446;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    g->eax = eax;
    g->edx = rd32(self);
    t356 = rd32(self);
    g->esp = sp0 - 0x284u;
    t357 = cow_thiscall(g, rd32(t356 + 0x36cu), self, 0);
    t358 = g->edx;
    if (t357 != 0u)
    {
        eax = t357;
        edx = t358;
        goto L_100c7446;
    }
    edx = t358;
    g->eax = rd32(self);
    g->edx = edx;
    t359 = rd32(self);
    g->esp = sp0 - 0x284u;
    t360 = cow_thiscall(g, rd32(t359 + 0x394u), self, 0);
    t361 = g->edx;
    if (t360 == 0u)
    {
        eax = t360;
        edx = t361;
        edi = 0u;
        goto L_100c759f;
    }
    eax = t360;
    edx = t361;
L_100c7446: ;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
L_100c7598: ;
    g->ebx = 0xffffffffu;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t452 = cow_thiscall(g, COW_IMG(0x100c83c0u), self, 1, sp0 - 0x26cu);
    t453 = g->edx;
    eax = t452;
    edx = t453;
    edi = 0u;
    goto L_100c759f;
L_100c7450: ;
    if (rd8(self + 0x103u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        goto L_100c7593;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
    if (rd8(self + 0x104u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
        goto L_100c7593;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100c7593;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    g->eax = eax;
    g->edx = rd32(self);
    t362 = rd32(self);
    g->esp = sp0 - 0x284u;
    t363 = cow_thiscall(g, rd32(t362 + 0x36cu), self, 0);
    t364 = g->edx;
    if (t363 != 0u)
    {
        eax = t363;
        goto L_100c7593;
    }
    edx = t364;
    g->eax = rd32(self);
    t365 = rd32(self);
    g->esp = sp0 - 0x284u;
    t366 = cow_thiscall(g, rd32(t365 + 0x394u), self, 0);
    if (t366 != 0u)
    {
        eax = t366;
        goto L_100c7593;
    }
    eax = t366;
    g->eax = eax;
    g->edx = rd32(self);
    t367 = rd32(self);
    g->esp = sp0 - 0x284u;
    t368 = cow_thiscall(g, rd32(t367 + 0x3a4u), self, 0);
    t369 = g->edx;
    if (t368 != 0u)
    {
        eax = t368;
        goto L_100c7593;
    }
    eax = t368;
    edx = t369;
    if (rd8(self + 0x102u) == 0u) goto L_100c74c6;
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t370 = cow_thiscall(g, COW_IMG(0x100ca8c0u), self, 0);
    t371 = g->edx;
    eax = t370;
    edx = t371;
    edi = 0u;
    goto L_100c759f;
L_100c74c6: ;
    g->eax = rd32(self);
    g->edx = edx;
    t372 = rd32(self);
    g->esp = sp0 - 0x284u;
    t373 = cow_thiscall(g, rd32(t372 + 0x34cu), self, 0);
    t374 = g->edx;
    if (t373 != 0u)
    {
        eax = t373;
        edx = t374;
        edi = 0u;
        goto L_100c759f;
    }
    eax = t373;
    g->eax = eax;
    g->edx = rd32(self);
    t375 = rd32(self);
    g->esp = sp0 - 0x284u;
    t376 = cow_thiscall(g, rd32(t375 + 0x358u), self, 0);
    t377 = g->edx;
    if (t376 != 0u)
    {
        eax = t376;
        edx = t377;
        edi = 0u;
        goto L_100c759f;
    }
    edx = t377;
    g->eax = rd32(self);
    g->edx = edx;
    t378 = rd32(self);
    g->esp = sp0 - 0x284u;
    t379 = cow_thiscall(g, rd32(t378 + 0x360u), self, 0);
    t380 = g->edx;
    if (t379 != 0u)
    {
        eax = t379;
        edx = t380;
        edi = 0u;
        goto L_100c759f;
    }
    eax = t379;
    g->eax = eax;
    g->edx = rd32(self);
    t381 = rd32(self);
    g->esp = sp0 - 0x284u;
    t382 = cow_thiscall(g, rd32(t381 + 0x36cu), self, 0);
    t383 = g->edx;
    if (t382 != 0u)
    {
        eax = t382;
        edx = t383;
        edi = 0u;
        goto L_100c759f;
    }
    edx = t383;
    g->eax = rd32(self);
    g->edx = edx;
    t384 = rd32(self);
    g->esp = sp0 - 0x284u;
    t385 = cow_thiscall(g, rd32(t384 + 0x378u), self, 0);
    t386 = g->edx;
    if (t385 != 0u)
    {
        eax = t385;
        edx = t386;
        edi = 0u;
        goto L_100c759f;
    }
    eax = t385;
    g->eax = eax;
    g->edx = rd32(self);
    t387 = rd32(self);
    g->esp = sp0 - 0x284u;
    t388 = cow_thiscall(g, rd32(t387 + 0x384u), self, 0);
    t389 = g->edx;
    if (t388 != 0u)
    {
        eax = t388;
        edx = t389;
        edi = 0u;
        goto L_100c759f;
    }
    edx = t389;
    g->eax = rd32(self);
    g->edx = edx;
    t390 = rd32(self);
    g->esp = sp0 - 0x284u;
    t391 = cow_thiscall(g, rd32(t390 + 0x394u), self, 0);
    t392 = g->edx;
    if (t391 != 0u)
    {
        eax = t391;
        edx = t392;
        edi = 0u;
        goto L_100c759f;
    }
    eax = t391;
    g->eax = eax;
    g->edx = rd32(self);
    t393 = rd32(self);
    g->esp = sp0 - 0x284u;
    t394 = cow_thiscall(g, rd32(t393 + 0x3a4u), self, 0);
    t395 = g->edx;
    if (t394 != 0u)
    {
        eax = t394;
        edx = t395;
        edi = 0u;
        goto L_100c759f;
    }
    eax = t394;
    edx = t395;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t396 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t397 = g->edx;
    wr32(sp0 - 0x288u, t396);
    g->edx = t397;
    t398 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t396);
    t399 = g->edx;
    if ((uint8_t)t398 == 0u)
    {
        eax = t398;
        edx = t399;
        goto L_100c756b;
    }
    edx = t399;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = sp0 - 0x26cu;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t400 = cow_thiscall(g, COW_IMG(0x100c8ed0u), self, 1, sp0 - 0x26cu);
    t401 = g->edx;
    eax = t400;
    edx = t401;
    edi = t400;
    goto L_100c759f;
L_100c756b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t402 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t403 = g->edx;
    wr32(sp0 - 0x288u, t402);
    g->edx = t403;
    t404 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t402);
    t405 = g->edx;
    if ((uint8_t)t404 == 0u)
    {
        eax = t404;
        edx = t405;
        goto L_100c758c;
    }
    eax = t404;
    edx = t405;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t406 = cow_thiscall(g, COW_IMG(0x100c9330u), self, 1, sp0 - 0x26cu);
    t407 = g->edx;
    eax = t406;
    edx = t407;
    edi = t406;
    goto L_100c759f;
L_100c758c: ;
    goto L_100c72d5;
L_100c7593: ;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    edx = sp0 - 0x26cu;
    goto L_100c7598;
L_100c75c4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t457 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t458 = g->edx;
    wr32(sp0 - 0x288u, t457);
    g->edx = t458;
    t459 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t457);
    t460 = g->edx;
    if ((uint8_t)t459 != 0u)
    {
        eax = t459;
        edx = t460;
        goto L_100c75ea;
    }
    eax = t459;
    edx = t460;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t461 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t462 = g->edx;
    wr32(sp0 - 0x288u, t461);
    g->edx = t462;
    t463 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t461);
    t464 = g->edx;
    if ((uint8_t)t463 == 0u)
    {
        eax = t463;
        edx = t464;
        goto L_100c75f1;
    }
    eax = t463;
    edx = t464;
L_100c75ea: ;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t465 = cow_call_regs(g, COW_IMG(0x100cdf90u), eax, self, g->edx, 1, 0);
    t466 = g->edx;
    eax = t465;
    edx = t466;
L_100c75f1: ;
    wr32(sp0 - 0x288u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t467 = cow_thiscall(g, COW_IMG(0x100cb390u), self, 1, edi);
    t468 = rd32(self + 0x798u);
    wr32(sp0 - 0x288u, t468);
    g->edx = t468;
    cow_thiscall(g, COW_IMG(0x100cb400u), self, 1, t468);
    t469 = g->edx;
    edx = t469;
L_100c7607: ;
    wr32(sp0 - 0x288u, sp0 - 0x26cu);
    wr32(sp0 - 0x28cu, self + 0x6a8u);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x6a8u, sp0 - 0x26cu);
    t470 = g->edx;
    if (rd32(self + 0xb4u) == 0u)
    {
        eax = rd32(self + 0xb4u);
    }
    else
    {
        eax = rd32(self + 0xb4u);
        edx = t470;
        wr32(sp0 - 0x270u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t471 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x270u, 0);
        t472 = g->edx;
        if ((uint8_t)t471 == 0u)
        {
            eax = t471;
        }
        else
        {
            eax = t471;
            edx = t472;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t473 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t474 = g->edx;
            if (t473 == 0x1cu)
            {
                eax = t473;
                edx = t474;
                goto L_100c766f;
            }
            eax = t473;
            edx = t474;
            edi = t473;
            if (edi == 0x1fu) goto L_100c766f;
            if (edi == 0u) goto L_100c766f;
            if (edi == 1u) goto L_100c766f;
            if (edi == 4u) goto L_100c766f;
            wr32(sp0 - 0x288u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t475 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, edi);
            t476 = g->edx;
            if ((uint8_t)t475 != 0u)
            {
                eax = t475;
                edx = t476;
                goto L_100c766f;
            }
            eax = t475;
            edx = t476;
            wr32(sp0 - 0x288u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t477 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, edi);
            t478 = g->edx;
            if ((uint8_t)t477 == 0u)
            {
                eax = t477;
                goto L_100c7676;
            }
            eax = t477;
            edx = t478;
L_100c766f: ;
            g->ebx = 0xffffffffu;
            g->eax = eax;
            g->esp = sp0 - 0x284u;
            t479 = cow_fastcall(g, COW_IMG(0x100d4bc0u), self, edx, 0);
            eax = t479;
        }
    }
L_100c7676: ;
    g->eax = eax;
    g->edx = rd32(self);
    t480 = rd32(self);
    g->esp = sp0 - 0x284u;
    t481 = cow_thiscall(g, rd32(t480 + 0x1e4u), self, 0);
    t482 = g->edx;
    if ((uint8_t)t481 != 1u)
    {
        eax = t481;
        edx = t482;
    }
    else
    {
        eax = t481;
        edx = t482;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t483 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t484 = g->edx;
        wr32(sp0 - 0x288u, t483);
        g->edx = t484;
        t485 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t483);
        t486 = g->edx;
        if ((uint8_t)t485 != 0u)
        {
            eax = t485;
            edx = t486;
            goto L_100c76aa;
        }
        eax = t485;
        edx = t486;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t487 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t488 = g->edx;
        wr32(sp0 - 0x288u, t487);
        g->edx = t488;
        t489 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t487);
        t490 = g->edx;
        if ((uint8_t)t489 == 0u)
        {
            eax = t489;
            edx = t490;
            goto L_100c76c0;
        }
        eax = t489;
        edx = t490;
L_100c76aa: ;
        if (rd32(self + 0x768u) == 0u) goto L_100c76f6;
        ecx = rd32(self + 0x768u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t491 = rd32(ecx);
        g->esp = sp0 - 0x284u;
        t492 = cow_thiscall(g, rd32(t491 + 0x1e4u), ecx, 0);
        t493 = g->edx;
        if ((uint8_t)t492 == 0u)
        {
            eax = t492;
            edx = t493;
            goto L_100c76f6;
        }
        eax = t492;
        edx = t493;
L_100c76c0: ;
        t494 = rd32(self + 0x59cu);
        wr32(sp0 - 0x270u, t494);
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t495 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t496 = g->edx;
        d497 = cow_take_float(g);
        d498 = fr(g, fr(g, d497 * (double)rdf32(COW_IMG(0x1032b088u))) + (double)rdf32(sp0 - 0x270u));
        if ((cow_fsw(g, d498, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d498, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
            edx = t496;
            x0 = d498;
        }
        else
        {
            eax = cow_fsw(g, d498, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
            edx = t496;
            x0 = d498;
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        wrf32(self + 0x59cu, (float)x0);
    }
L_100c76f6: ;
    wr32(sp0 - 0x288u, COW_IMG(0x104574b8u));
    wr32(sp0 - 0x28cu, 0x100u);
    g->eax = eax;
    g->edx = edx;
    t499 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x284u;
    t500 = cow_thiscall(g, COW_IMG(0x1000bd50u), t499, 2, 0x100u, COW_IMG(0x104574b8u));
    t501 = g->ecx;
    t502 = g->edx;
    g->ecx = t501;
    g->edx = t502;
    t503 = cow_stdcall(g, COW_IMG(0x10014d70u), 0);
    t504 = g->ecx;
    t505 = g->edx;
    d506 = cow_take_float(g);
    wrf32(sp0 - 0x248u, (float)(double)(float)d506);
    g->edx = t505;
    t507 = cow_stdcall(g, COW_IMG(0x10014d80u), 0);
    t508 = g->edx;
    d509 = cow_take_float(g);
    wr32(sp0 - 0x270u, 0u);
    t510 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x180u, 0);
    g->edx = rd32(self);
    t511 = rd32(self);
    t512 = cow_thiscall(g, rd32(t511 + 0x110u), self, 0);
    t513 = g->edx;
    d514 = cow_take_float(g);
    if (!(d514 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t513;
        g->eax = rd32(self);
        t521 = rd32(self);
        g->esp = sp0 - 0x284u;
        t522 = cow_thiscall(g, rd32(t521 + 0x110u), self, 0);
        d523 = cow_take_float(g);
        eax = t522;
        loc_270 = 0u;
        x0 = d523;
    }
    else
    {
        eax = (t512 & 0xffff0000u) | (uint16_t)cow_fsw(g, d514, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t513;
        d515 = (double)rdf32(self + 0x760u);
        if (!(d515 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d515, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_270 = 0u;
            x0 = (double)rdf32(self + 0x760u);
        }
        else
        {
            g->eax = rd32(self);
            t516 = rd32(self);
            g->esp = sp0 - 0x284u;
            t517 = cow_thiscall(g, rd32(t516 + 0x110u), self, 0);
            d518 = cow_take_float(g);
            if (!(d518 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t517 & 0xffff0000u) | (uint16_t)cow_fsw(g, d518, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                g->eax = eax;
                g->esp = sp0 - 0x284u;
                t519 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d520 = cow_take_float(g);
                eax = t519;
                loc_270 = rd32(sp0 - 0x270u);
                x0 = d520;
            }
            else
            {
                eax = (t517 & 0xffff0000u) | (uint16_t)cow_fsw(g, d518, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_270 = rd32(sp0 - 0x270u);
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    wrf32(sp0 - 0x220u, (float)(double)(float)x0);
    g->eax = eax;
    g->edx = rd32(self);
    t524 = rd32(self);
    g->esp = sp0 - 0x284u;
    t525 = cow_thiscall(g, rd32(t524 + 0x110u), self, 0);
    t526 = g->edx;
    d527 = cow_take_float(g);
    if (!(d527 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t526;
        g->eax = rd32(self);
        t534 = rd32(self);
        g->esp = sp0 - 0x284u;
        t535 = cow_thiscall(g, rd32(t534 + 0x110u), self, 0);
        d536 = cow_take_float(g);
        eax = t535;
        x0 = d536;
    }
    else
    {
        eax = (t525 & 0xffff0000u) | (uint16_t)cow_fsw(g, d527, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t526;
        d528 = (double)rdf32(self + 0x75cu);
        if (!(d528 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d528, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            x0 = (double)rdf32(self + 0x75cu);
        }
        else
        {
            g->eax = rd32(self);
            t529 = rd32(self);
            g->esp = sp0 - 0x284u;
            t530 = cow_thiscall(g, rd32(t529 + 0x110u), self, 0);
            d531 = cow_take_float(g);
            if (!(d531 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t530 & 0xffff0000u) | (uint16_t)cow_fsw(g, d531, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                g->eax = eax;
                g->esp = sp0 - 0x284u;
                t532 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d533 = cow_take_float(g);
                eax = t532;
                x0 = d533;
            }
            else
            {
                eax = (t530 & 0xffff0000u) | (uint16_t)cow_fsw(g, d531, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    wrf32(sp0 - 0x21cu, (float)(double)(float)x0);
    g->eax = eax;
    g->edx = rd32(self);
    t537 = rd32(self);
    g->esp = sp0 - 0x284u;
    t538 = cow_thiscall(g, rd32(t537 + 0x110u), self, 0);
    t539 = g->edx;
    d540 = cow_take_float(g);
    if (!(d540 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t539;
        g->eax = rd32(self);
        g->edx = edx;
        t550 = rd32(self);
        g->esp = sp0 - 0x284u;
        t551 = cow_thiscall(g, rd32(t550 + 0x110u), self, 0);
        t552 = g->edx;
        d553 = cow_take_float(g);
        eax = t551;
        edx = t552;
        x0 = d553;
    }
    else
    {
        eax = (t538 & 0xffff0000u) | (uint16_t)cow_fsw(g, d540, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t539;
        d541 = (double)rdf32(self + 0x758u);
        if (!(d541 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d541, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            x0 = (double)rdf32(self + 0x758u);
        }
        else
        {
            g->eax = rd32(self);
            g->edx = edx;
            t542 = rd32(self);
            g->esp = sp0 - 0x284u;
            t543 = cow_thiscall(g, rd32(t542 + 0x110u), self, 0);
            t544 = g->edx;
            d545 = cow_take_float(g);
            if (!(d545 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t543 & 0xffff0000u) | (uint16_t)cow_fsw(g, d545, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                g->eax = eax;
                g->edx = rd32(self);
                t546 = rd32(self);
                g->esp = sp0 - 0x284u;
                t547 = cow_thiscall(g, rd32(t546 + 0x110u), self, 0);
                t548 = g->edx;
                d549 = cow_take_float(g);
                eax = t547;
                edx = t548;
                x0 = d549;
            }
            else
            {
                eax = (t543 & 0xffff0000u) | (uint16_t)cow_fsw(g, d545, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t544;
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    wrf32(sp0 - 0x218u, (float)(double)(float)x0);
    wr32(sp0 - 0x288u, sp0 - 0x220u);
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t554 = cow_thiscall(g, COW_IMG(0x10027b30u), sp0 - 0x180u, 1, sp0 - 0x220u);
    g->edx = rd32(self);
    t555 = rd32(self);
    t556 = cow_thiscall(g, rd32(t555 + 0x1c0u), self, 0);
    t557 = g->edx;
    d558 = (double)(float)fr(g, (double)rdf32(t556 + 4u) + (double)rdf32(COW_IMG(0x10331360u)));
    wrf32(sp0 - 0x274u, (float)d558);
    d559 = fr(g, (double)rdf32(t556 + 4u) + (double)rdf32(COW_IMG(0x10331360u)));
    if ((cow_fsw(g, d559, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d559, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t557;
        loc_274_f = d558;
    }
    else
    {
        eax = cow_fsw(g, d559, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t557;
        loc_274_f = d558;
        d560 = (double)(float)fr(g, loc_274_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x274u, (float)d560);
        loc_274_f = d560;
    }
    if (loc_274_f < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d561 = (double)(float)fr(g, loc_274_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x274u, (float)d561);
        loc_274_f = d561;
    }
    wr32(sp0 - 0x288u, cow_f2bits(loc_274_f));
    g->eax = cow_f2bits(loc_274_f);
    g->esp = sp0 - 0x284u;
    t562 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x180u, 1, cow_f2bits(loc_274_f));
    g->edx = rd32(self);
    t563 = rd32(self);
    t564 = cow_thiscall(g, rd32(t563 + 0x1bcu), self, 0);
    t565 = g->edx;
    wr32(sp0 - 0x288u, t564);
    g->edx = t565;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x180u, 1, t564);
    t566 = g->edx;
    wr32(sp0 - 0x288u, 0u);
    g->eax = rd32(self);
    g->edx = t566;
    t567 = rd32(self);
    t568 = cow_thiscall(g, rd32(t567 + 0x3c8u), self, 1, 0u);
    t569 = g->edx;
    if (t568 != 0u)
    {
        eax = t568;
        goto L_100c7926;
    }
    eax = t568;
    edx = t569;
    t570 = rd8(self + 0xb2u);
    wr8(self + 0xb0u, 1u);
    wr8(self + 0xb2u, (uint8_t)(t570 | 1u));
    eax = ((eax | t570) & 0xffffff00u) | (uint8_t)(t570 | 1u);
    ebx = 0xffffffffu;
L_100c7c14: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t614 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t615 = g->edx;
    g->edx = t615;
    t616 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x1d8u, 0);
    t617 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x1d8u);
    wr32(sp0 - 0x28cu, 2u);
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x1d8u);
    wr32(sp0 - 0x288u, self + 0x5fcu);
    wr32(sp0 - 0x28cu, sp0 - 0x1f8u);
    g->eax = sp0 - 0x1f8u;
    g->edx = self + 0x5fcu;
    t618 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x1d8u, 2, sp0 - 0x1f8u, self + 0x5fcu);
    t619 = g->edx;
    eax = t618;
    ecx = sp0 - 0x1d8u;
    edx = t619;
L_100c7c9d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t625 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t626 = g->ecx;
    t627 = g->edx;
    wr32(sp0 - 0x288u, t626);
    d628 = (double)(float)-(double)rdf32(sp0 - 0x1f0u);
    wrf32(sp0 - 0x288u, (float)d628);
    g->edx = t627;
    t629 = cow_thiscall(g, COW_IMG(0x10085000u), self, 1, cow_f2bits(d628));
    t630 = g->ecx;
    t631 = g->edx;
    wr32(sp0 - 0x288u, t630);
    d632 = (double)(float)-(double)rdf32(sp0 - 0x1f0u);
    wrf32(sp0 - 0x288u, (float)d632);
    t633 = cow_thiscall(g, COW_IMG(0x10085bf0u), self, 1, cow_f2bits(d632));
    g->edx = rd32(self);
    t634 = rd32(self);
    t635 = cow_thiscall(g, rd32(t634 + 0x304u), self, 0);
    t636 = g->ecx;
    t637 = g->edx;
    if ((uint8_t)t635 == 0u)
    {
        ecx = t636;
        edx = t637;
        goto L_100c7ce1;
    }
    eax = t635;
    ecx = t636;
    edx = t637;
    if (rd8(COW_IMG(0x10487f80u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_100c7ce9;
    }
L_100c7ce1: ;
    if (rd32(sp0 - 0x244u) == 0u) goto L_100c7d12;
    eax = rd32(sp0 - 0x244u);
L_100c7ce9: ;
    wr32(sp0 - 0x288u, 0x3dcccccdu);
    t638 = rd8(self + 0xb2u);
    wr8(self + 0xb2u, t638 & 0xfeu);
    g->eax = eax;
    g->edx = (edx & 0xffffff00u) | (t638 & 0xfeu);
    g->esp = sp0 - 0x284u;
    t639 = cow_thiscall(g, COW_IMG(0x10085000u), self, 1, 0x3dcccccdu);
    t640 = g->edx;
    wr32(sp0 - 0x288u, 0x3dcccccdu);
    g->edx = t640;
    cow_thiscall(g, COW_IMG(0x10085bf0u), self, 1, 0x3dcccccdu);
    t641 = g->edx;
    edx = t641;
L_100c7d6c: ;
    g->eax = rd32(self);
    g->edx = edx;
    t648 = rd32(self);
    g->esp = sp0 - 0x284u;
    t649 = cow_thiscall(g, rd32(t648 + 0x304u), self, 0);
    t650 = g->ecx;
    t651 = g->edx;
    if ((uint8_t)t649 == 0u)
    {
        eax = (t649 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        edx = t651;
        goto L_100c7ea7;
    }
    eax = (t649 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    ecx = t650;
    edx = t651;
    if ((uint8_t)eax != 0u) goto L_100c7f09;
L_100c7d8b: ;
    g->eax = eax;
    g->esp = sp0 - 0x284u;
    t675 = cow_fastcall(g, COW_IMG(0x100cd040u), self, edx, 0);
    t676 = g->edx;
    d677 = cow_take_float(g);
    wrf32(self + 0x664u, (float)d677);
    d678 = (double)rdf32(self + 0x59cu);
    if (d678 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t676;
    }
    else
    {
        eax = (t675 & 0xffff0000u) | (uint16_t)cow_fsw(g, d678, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t676;
        t679 = rd8(self + 0xb2u);
        wr8(self + 0xb0u, 1u);
        wr8(self + 0xb2u, (uint8_t)(t679 | 1u));
    }
L_100c7dc0: ;
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
    }
    else
    {
        eax = rd32(self + 0x70u);
        if (rd32(eax + 0x12cu) >> 0x1au & 1u)
        {
            wr32(self + 0x664u, 0x3f800000u);
        }
    }
    if (rd16(self + 0xb2u) != 0u) goto L_100c7f42;
    d680 = fr(g, (double)rdf32(self + 0x59cu) * (double)rdf32(self + 0x664u));
    if (d680 < (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d680, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        goto L_100c7e34;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d680, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    g->eax = eax;
    g->edx = rd32(self);
    t681 = rd32(self);
    g->esp = sp0 - 0x284u;
    t682 = cow_thiscall(g, rd32(t681 + 0x70u), self, 0);
    t683 = g->edx;
    if ((uint8_t)t682 != 0u)
    {
        eax = t682;
        goto L_100c7e34;
    }
    edx = t683;
    wr32(sp0 - 0x288u, sp0 - 0x248u);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t684 = cow_call_regs(g, COW_IMG(0x10039410u), sp0 - 0x248u, self + 0x710u, g->edx, 0, 1, sp0 - 0x248u);
    t685 = g->edx;
    if (rd32(t684) == 0u)
    {
        eax = rd32(t684);
        edx = t685;
        goto L_100c7f42;
    }
    eax = rd32(t684);
    edx = t685;
    if (rd32(eax) == 0u) goto L_100c7f42;
L_100c7e34: ;
    wr32(sp0 - 0x288u, self + 0x5fcu);
    wr32(sp0 - 0x28cu, sp0 - 0x220u);
    g->eax = eax;
    g->ecx = self + 0x5fcu;
    g->edx = sp0 - 0x220u;
    g->esp = sp0 - 0x284u;
    t686 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x220u, self + 0x5fcu);
    t687 = g->ecx;
    t688 = g->edx;
    d689 = fr(g, fr(g, (double)rdf32(sp0 - 0x218u) * (double)rdf32(COW_IMG(0x1032a698u))) + (double)rdf32(self + 0x8ecu));
    wrf32(self + 0x8c8u, (float)d689);
    if (!(d689 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = t687;
        edx = t688;
    }
    else
    {
        ecx = t687;
        edx = t688;
        wr32(self + 0x8c8u, 0u);
    }
    t690 = rd32(self + 0x8c8u);
    wr32(self + 0x8d4u, self);
    wr32(sp0 - 0x288u, t690);
    wr32(self + 0x8d0u, COW_IMG(0x100cbd90u));
    g->eax = t690;
    g->edx = edx;
    g->esp = sp0 - 0x280u;
    t691 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t690, rd32(sp0 - 0x284u));
    t692 = g->edx;
    if ((uint8_t)t691 == 0u)
    {
        eax = t691;
        edx = t692;
        goto L_100c7f42;
    }
    eax = t691;
    edx = t692;
    wr32(sp0 - 0x288u, self + 0x8c8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t693 = cow_thiscall(g, COW_IMG(0x100553c0u), rd32(COW_IMG(0x1047bc94u)), 1, self + 0x8c8u);
    t694 = g->edx;
    eax = t693;
    edx = t694;
L_100c7f53: ;
    if (rd32(self + 0x70u) != 0u)
    {
        ecx = rd32(self + 0x70u);
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t695 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, ecx, g->edx, 1, 0);
        t696 = g->edx;
        if ((uint8_t)t695 == 0u)
        {
            eax = t695;
            edx = t696;
            goto L_100c7f74;
        }
        eax = t695;
        if (!(rd32(rd32(self + 0x70u) + 0x12cu) >> 0x1eu & 1u)) goto L_100c7f90;
        edx = rd32(rd32(self + 0x70u) + 0x12cu) >> 0x1eu;
L_100c7f74: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t697 = cow_thiscall(g, COW_IMG(0x10084670u), self, 0);
        t698 = g->edx;
        if ((uint8_t)t697 != 0u)
        {
            eax = t697;
            goto L_100c7f90;
        }
        edx = t698;
        if (!(rd32(rd32(self + 0x70u) + 0x12cu) >> 0x16u & 1u))
        {
            eax = rd32(self + 0x70u);
            goto L_100c7f9e;
        }
        eax = rd32(self + 0x70u);
L_100c7f90: ;
        wr32(sp0 - 0x288u, 0u);
        wr32(sp0 - 0x28cu, 1u);
        g->eax = eax;
        g->edx = rd32(self);
        t699 = rd32(self);
        g->esp = sp0 - 0x284u;
        t700 = cow_thiscall(g, rd32(t699 + 0x31cu), self, 2, 1u, 0u);
        t701 = g->edx;
        eax = t700;
        edx = t701;
    }
L_100c7f9e: ;
    wr32(sp0 - 0x288u, self);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    cow_thiscall(g, COW_IMG(0x1002c2a0u), self + 0x674u, 1, self);
    t702 = g->edx;
    g->eax = rd32(self);
    g->edx = t702;
    t703 = rd32(self);
    t704 = cow_thiscall(g, rd32(t703 + 0x304u), self, 0);
    t705 = g->edx;
    if ((uint8_t)t704 != 0u)
    {
        eax = t704;
        edx = t705;
        g->esp = sp0 - 0x284u;
        cow_thiscall(g, COW_IMG(0x100c8280u), self, 0);
    }
    wr32(sp0 - 0x288u, self + 0x60cu);
    g->eax = self + 0x60cu;
    g->edx = rd32(self);
    t706 = rd32(self);
    g->esp = sp0 - 0x288u;
    t707 = cow_thiscall(g, rd32(t706 + 0x1bcu), self, 0);
    t708 = g->ecx;
    t709 = g->edx;
    wr32(sp0 - 0x28cu, t707);
    wr32(sp0 - 0x290u, sp0 - 0x208u);
    g->eax = sp0 - 0x208u;
    g->esp = sp0 - 0x284u;
    t710 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x208u, t707, self + 0x60cu);
    wr32(sp0 - 0x294u, sp0 - 0x208u);
    wr32(sp0 - 0x298u, self + 0x678u);
    wr32(sp0 - 0x1fcu, 0x3f800000u);
    g->edx = self + 0x678u;
    g->esp = sp0 - 0x290u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x678u, sp0 - 0x208u);
    t711 = g->edx;
    wr32(sp0 - 0x288u, self + 0x62cu);
    g->eax = rd32(self);
    g->edx = t711;
    t712 = rd32(self);
    g->esp = sp0 - 0x288u;
    t713 = cow_thiscall(g, rd32(t712 + 0x1c0u), self, 0);
    t714 = g->edx;
    wr32(sp0 - 0x28cu, t713);
    wr32(sp0 - 0x290u, sp0 - 0x1e8u);
    g->ecx = sp0 - 0x1e8u;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x1e8u, t713, self + 0x62cu);
    t715 = g->ecx;
    wr32(sp0 - 0x294u, sp0 - 0x1e8u);
    wr32(sp0 - 0x298u, self + 0x688u);
    wr32(sp0 - 0x1dcu, 0x3f800000u);
    g->eax = self + 0x688u;
    g->esp = sp0 - 0x290u;
    t716 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x688u, sp0 - 0x1e8u);
    g->edx = rd32(self);
    t717 = rd32(self);
    g->esp = sp0 - 0x284u;
    t718 = cow_thiscall(g, rd32(t717 + 0x110u), self, 0);
    t719 = g->edx;
    d720 = cow_take_float(g);
    if (!(d720 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t719;
        g->eax = rd32(self);
        t727 = rd32(self);
        g->esp = sp0 - 0x284u;
        t728 = cow_thiscall(g, rd32(t727 + 0x110u), self, 0);
        d729 = cow_take_float(g);
        eax = t728;
        x0 = d729;
    }
    else
    {
        eax = (t718 & 0xffff0000u) | (uint16_t)cow_fsw(g, d720, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t719;
        d721 = (double)rdf32(self + 0x758u);
        if (!(d721 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d721, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            x0 = (double)rdf32(self + 0x758u);
        }
        else
        {
            g->eax = rd32(self);
            t722 = rd32(self);
            g->esp = sp0 - 0x284u;
            t723 = cow_thiscall(g, rd32(t722 + 0x110u), self, 0);
            d724 = cow_take_float(g);
            if (!(d724 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t723 & 0xffff0000u) | (uint16_t)cow_fsw(g, d724, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                g->eax = eax;
                g->esp = sp0 - 0x284u;
                t725 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d726 = cow_take_float(g);
                eax = t725;
                x0 = d726;
            }
            else
            {
                eax = (t723 & 0xffff0000u) | (uint16_t)cow_fsw(g, d724, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    t730 = rd32(self);
    wrf32(self + 0x698u, (float)x0);
    g->eax = eax;
    g->edx = t730;
    g->esp = sp0 - 0x284u;
    t731 = cow_thiscall(g, rd32(t730 + 0x110u), self, 0);
    t732 = g->edx;
    d733 = cow_take_float(g);
    if (!(d733 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t732;
        g->eax = rd32(self);
        t740 = rd32(self);
        g->esp = sp0 - 0x284u;
        t741 = cow_thiscall(g, rd32(t740 + 0x110u), self, 0);
        d742 = cow_take_float(g);
        eax = t741;
        x0 = d742;
    }
    else
    {
        eax = (t731 & 0xffff0000u) | (uint16_t)cow_fsw(g, d733, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t732;
        d734 = (double)rdf32(self + 0x75cu);
        if (!(d734 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d734, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            x0 = (double)rdf32(self + 0x75cu);
        }
        else
        {
            g->eax = rd32(self);
            t735 = rd32(self);
            g->esp = sp0 - 0x284u;
            t736 = cow_thiscall(g, rd32(t735 + 0x110u), self, 0);
            d737 = cow_take_float(g);
            if (!(d737 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t736 & 0xffff0000u) | (uint16_t)cow_fsw(g, d737, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                g->eax = eax;
                g->esp = sp0 - 0x284u;
                t738 = cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
                d739 = cow_take_float(g);
                eax = t738;
                x0 = d739;
            }
            else
            {
                eax = (t736 & 0xffff0000u) | (uint16_t)cow_fsw(g, d737, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    t743 = rd32(self);
    wrf32(self + 0x6a0u, (float)x0);
    g->eax = eax;
    g->edx = t743;
    g->esp = sp0 - 0x284u;
    t744 = cow_thiscall(g, rd32(t743 + 0x110u), self, 0);
    t745 = g->edx;
    d746 = cow_take_float(g);
    if (!(d746 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t745;
        g->eax = rd32(self);
        g->edx = edx;
        t756 = rd32(self);
        g->esp = sp0 - 0x284u;
        t757 = cow_thiscall(g, rd32(t756 + 0x110u), self, 0);
        t758 = g->edx;
        d759 = cow_take_float(g);
        eax = t757;
        edx = t758;
        x0 = d759;
    }
    else
    {
        eax = (t744 & 0xffff0000u) | (uint16_t)cow_fsw(g, d746, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t745;
        d747 = (double)rdf32(self + 0x760u);
        if (!(d747 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d747, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            x0 = (double)rdf32(self + 0x760u);
        }
        else
        {
            g->eax = rd32(self);
            g->edx = edx;
            t748 = rd32(self);
            g->esp = sp0 - 0x284u;
            t749 = cow_thiscall(g, rd32(t748 + 0x110u), self, 0);
            t750 = g->edx;
            d751 = cow_take_float(g);
            if (!(d751 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t749 & 0xffff0000u) | (uint16_t)cow_fsw(g, d751, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                g->eax = eax;
                g->edx = rd32(self);
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
                eax = (t749 & 0xffff0000u) | (uint16_t)cow_fsw(g, d751, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t750;
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    t760 = rd16(self + 0xb2u);
    wrf32(self + 0x69cu, (float)x0);
    if ((uint16_t)t760 != 0u)
    {
        wr32(sp0 - 0x288u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x284u;
        t761 = cow_thiscall(g, COW_IMG(0x1002c270u), self + 0x674u, 1, 0u);
        t762 = g->edx;
        t763 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
        if (rd32(t763) == 0u)
        {
            eax = t763;
        }
        else
        {
            edi = rd32(t763);
            wr32(sp0 - 0x288u, self + 0x9d8u);
            wr32(sp0 - 0x28cu, sp0 - 0x208u);
            wr32(sp0 - 0x290u, sp0 - 0x26cu);
            g->eax = sp0 - 0x26cu;
            g->edx = sp0 - 0x208u;
            g->esp = sp0 - 0x284u;
            t764 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x26cu, sp0 - 0x208u, self + 0x9d8u);
            t765 = g->edx;
            wr32(sp0 - 0x288u, 0u);
            wr32(sp0 - 0x28cu, sp0 - 0x26cu);
            t766 = cow_thiscall(g, COW_IMG(0x10035170u), edi + 8u, 2, sp0 - 0x26cu, 0u);
            eax = t766;
        }
    }
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
        g->eax = rd32(self);
        g->edx = edx;
        t767 = rd32(self);
        g->esp = sp0 - 0x27cu;
        t768 = cow_thiscall(g, rd32(t767 + 0x304u), self, 0);
        t769 = g->ecx;
        t770 = g->edx;
        if ((uint8_t)t768 == 0u)
        {
            eax = t768;
        }
        else
        {
            eax = t768;
            ecx = t769;
            edx = t770;
            wr32(sp0 - 0x280u, self);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x27cu;
            t771 = cow_cdecl(g, COW_IMG(0x100a5e10u), 1, self);
            eax = t771;
        }
    }
L_100c81f8: ;
    wr32(sp0 - 0x280u, sp0 - 0x208u);
    wr32(sp0 - 0x284u, self + 0x9d8u);
    g->eax = eax;
    g->esp = sp0 - 0x27cu;
    t772 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x9d8u, sp0 - 0x208u);
    t773 = rd8(sp0 - 0x249u);
    wr32(self + 0x9e4u, 0x3f800000u);
    g->ebx = rd32(sp0 - 0x278u);
    g->esi = rd32(sp0 - 0x27cu);
    g->edi = edi;
    g->ebp = ebp;
    return (t772 & 0xffffff00u) | t773;
L_100c7926: ;
    t571 = rd32(eax + 0x10u);
    wr32(sp0 - 0x188u, t571);
    d572 = fr(g, (double)rdf32(eax) - (double)rdf32(eax + 4u));
    if (d572 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_188 = t571;
        x4 = (double)rdf32(eax + 0x14u);
        x3 = (double)rdf32(eax + 0xcu);
        x2 = (double)rdf32(eax + 8u);
        x1 = (double)rdf32(eax + 4u);
        x0 = (double)rdf32(eax);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d572, (double)rdf32(COW_IMG(0x103295d8u)), 5u);
    }
    else
    {
        loc_188 = t571;
        x4 = (double)rdf32(eax + 0x14u);
        x3 = (double)rdf32(eax + 0xcu);
        x2 = (double)rdf32(eax + 8u);
        x1 = (double)rdf32(eax + 4u);
        x0 = (double)rdf32(eax);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d572, (double)rdf32(COW_IMG(0x103295d8u)), 5u);
        x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x1032961cu)));
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    d573 = fr(g, x2 - x3);
    if (d573 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x3 = fr(g, x3 + (double)rdf32(COW_IMG(0x1032961cu)));
        x2 = fr(g, x2 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    wr32(sp0 - 0x288u, 0x3f800000u);
    wrf32(self + 0x918u, (float)x2);
    wr32(self + 0x950u, loc_188);
    wr32(sp0 - 0x28cu, 0x447a0000u);
    wrf32(self + 0x91cu, (float)x1);
    wr32(sp0 - 0x290u, 0x447a0000u);
    wrf32(self + 0x920u, (float)x4);
    wr32(sp0 - 0x294u, 0x447a0000u);
    wrf32(self + 0x928u, (float)x3);
    wr32(sp0 - 0x298u, self + 0x8f8u);
    wr32(self + 0x940u, loc_188);
    wrf32(self + 0x92cu, (float)x1);
    wr32(self + 0x980u, loc_188);
    wr32(self + 0x990u, loc_188);
    wrf32(self + 0x930u, (float)x4);
    wrf32(self + 0x938u, (float)-x2);
    wrf32(self + 0x93cu, (float)x1);
    wrf32(self + 0x948u, (float)-x3);
    wrf32(self + 0x94cu, (float)x1);
    wrf32(self + 0x958u, (float)-x2);
    wrf32(self + 0x95cu, (float)x0);
    wrf32(self + 0x960u, (float)x4);
    wrf32(self + 0x968u, (float)-x3);
    wrf32(self + 0x96cu, (float)x0);
    wrf32(self + 0x970u, (float)x4);
    wrf32(self + 0x978u, (float)x2);
    wrf32(self + 0x97cu, (float)x0);
    wrf32(self + 0x988u, (float)x3);
    wrf32(self + 0x98cu, (float)x0);
    g->ecx = loc_188;
    g->edx = loc_188;
    g->esp = sp0 - 0x284u;
    cow_cdecl(g, COW_IMG(0x10026e30u), 5, self + 0x8f8u, 0x447a0000u, 0x447a0000u, 0x447a0000u, 0x3f800000u);
    t574 = g->ecx;
    t575 = g->edx;
    wr32(sp0 - 0x29cu, 0x3f800000u);
    wr32(sp0 - 0x2a0u, 0xc47a0000u);
    wr32(sp0 - 0x2a4u, 0xc47a0000u);
    wr32(sp0 - 0x2a8u, 0xc47a0000u);
    wr32(sp0 - 0x2acu, self + 0x908u);
    g->eax = self + 0x908u;
    g->edx = t575;
    g->esp = sp0 - 0x298u;
    t576 = cow_cdecl(g, COW_IMG(0x10026e30u), 5, self + 0x908u, 0xc47a0000u, 0xc47a0000u, 0xc47a0000u, 0x3f800000u);
    t577 = g->edx;
    g->edx = t577;
    g->esp = sp0 - 0x284u;
    t578 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x1d8u, 0);
    t579 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x1d8u);
    wr32(sp0 - 0x28cu, 2u);
    g->edx = t579;
    t580 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x1d8u);
    t581 = g->edx;
    t582 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x140u, 0);
    wr32(sp0 - 0x288u, sp0 - 0x140u);
    wr32(sp0 - 0x28cu, 3u);
    g->edx = sp0 - 0x140u;
    t583 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 3u, sp0 - 0x140u);
    t584 = g->edx;
    wr32(sp0 - 0x274u, 0x3f800000u);
    eax = t583;
    edx = t584;
    ebx = 8u;
    ebp = sp0 - 0xf8u;
    edi = self + 0x918u;
    loc_274 = 0x3f800000u;
L_100c7adc: ;
    wr32(sp0 - 0x288u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x180u, 1, edi);
    t585 = g->edx;
    wr32(sp0 - 0x288u, edi);
    wr32(sp0 - 0x28cu, ebp - 8u);
    wr32(edi + 0xcu, 0x3f800000u);
    g->eax = ebp - 8u;
    g->edx = t585;
    t586 = cow_thiscall(g, COW_IMG(0x10028170u), sp0 - 0x1d8u, 2, ebp - 8u, edi);
    t587 = g->ecx;
    t588 = g->edx;
    d589 = (double)rdf32(sp0 - 0x274u);
    if ((cow_fsw(g, d589, (double)rdf32(ebp), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d589, (double)rdf32(ebp), 0u) & 0x4100u;
        ecx = t587;
        edx = t588;
        loc_274 = rd32(sp0 - 0x274u);
    }
    else
    {
        eax = cow_fsw(g, d589, (double)rdf32(ebp), 0u) & 0x4100u;
        edx = t588;
        wr32(sp0 - 0x274u, rd32(ebp));
        ecx = rd32(ebp);
        loc_274 = rd32(ebp);
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        ebp = ebp + 0x10u;
        edi = edi + 0x10u;
        goto L_100c7adc;
    }
    ebx = ebx - 1u;
    ebx = ebx & 0xffffff00u;
    ebp = 0u;
L_100c7b25: ;
    d590 = (double)rdf32(ebp + sp0 - 0xf8u);
    d591 = (double)rdf32(sp0 - 0x248u);
    if ((cow_fsw(g, d590, d591, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d590, d591, 0u) & 0x4100u;
        loc_270 = rd32(sp0 - 0x270u);
    }
    else
    {
        eax = cow_fsw(g, d590, d591, 0u) & 0x4100u;
        t592 = rd32(sp0 - 0x270u) + 1u;
        wr32(sp0 - 0x270u, t592);
        loc_270 = t592;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t593 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t594 = g->ecx;
    t595 = g->edx;
    d596 = -(double)rdf32(t593 + 0x14u);
    d597 = (double)rdf32(ebp + sp0 - 0xf8u);
    if (!(d596 < d597))
    {
        eax = (t593 & 0xffff0000u) | (uint16_t)cow_fsw(g, d596, d597, 0u);
    }
    else
    {
        eax = (t593 & 0xffff0000u) | (uint16_t)cow_fsw(g, d596, d597, 0u);
        ecx = t594;
        edx = t595;
        g->eax = eax;
        g->esp = sp0 - 0x284u;
        t598 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
        d599 = (double)rdf32(t598 + 0x14u);
        wrf32(ebp + sp0 - 0xf8u, (float)-d599);
        eax = t598;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    t600 = ebp + sp0 - 0x100u;
    wr32(sp0 - 0x288u, t600);
    t601 = ebp + sp0 - 0x80u;
    wr32(sp0 - 0x28cu, t601);
    g->eax = eax;
    g->edx = t600;
    g->esp = sp0 - 0x284u;
    t602 = cow_thiscall(g, COW_IMG(0x10028370u), sp0 - 0x140u, 2, t601, t600);
    t603 = g->ecx;
    t604 = g->edx;
    wr32(sp0 - 0x288u, t601);
    t605 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, t601);
    eax = t605;
    ecx = t601;
    edx = self + 0x908u;
    edi = 4u;
L_100c7b9a: ;
    d606 = (double)rdf32(edx - 0x10u);
    if ((cow_fsw(g, d606, (double)rdf32(ecx), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d606, (double)rdf32(ecx), 0u) & 0x4100u;
    }
    else
    {
        t607 = rd32(ecx);
        wr32(edx - 0x10u, t607);
        eax = t607;
    }
    if (!((double)rdf32(edx) < (double)rdf32(ecx)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), (double)rdf32(ecx), 0u);
    }
    else
    {
        t608 = rd32(ecx);
        wr32(edx, t608);
        eax = t608;
    }
    if (edi != 1u)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        edi = edi - 1u;
        goto L_100c7b9a;
    }
    ecx = ecx + 4u;
    edx = edx + 4u;
    if ((int32_t)(ebp + 0x10u) < 128)
    {
        ebp = ebp + 0x10u;
        loc_274 = rd32(sp0 - 0x274u);
        goto L_100c7b25;
    }
    if (rd32(sp0 - 0x270u) != 8u) goto L_100c7c65;
    if (rd32(sp0 - 0x244u) != 0u)
    {
        eax = rd32(sp0 - 0x244u);
    }
    else
    {
        eax = rd32(sp0 - 0x244u);
        t609 = rd8(self + 0xb2u);
        wr8(self + 0xb0u, 1u);
        wr8(self + 0xb2u, (uint8_t)(t609 | 1u));
        eax = ((eax | t609) & 0xffffff00u) | (uint8_t)(t609 | 1u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t610 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t611 = g->edx;
    g->edx = t611;
    t612 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t613 = g->edx;
    eax = t612;
    edx = t613;
    goto L_100c7c14;
L_100c7c65: ;
    if ((uint8_t)ebx != 0u)
    {
        wr32(self + 0x900u, 0x3c23d70au);
    }
    t620 = rd32(sp0 - 0x274u);
    wr32(sp0 - 0x1f0u, t620);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t621 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t622 = g->edx;
    g->edx = t622;
    t623 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t624 = g->edx;
    eax = t623;
    ecx = sp0 - 0x180u;
    edx = t624;
    goto L_100c7c9d;
L_100c7d12: ;
    if (rd16(self + 0xb2u) == 0u)
    {
        wr8(self + 0xb2u, rd8(self + 0xb2u) & 0xfeu);
        if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu) != 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu);
            ecx = rd32(COW_IMG(0x1065cb04u));
            d642 = (double)(float)-(double)rdf32(sp0 - 0x1f0u);
            wrf32(sp0 - 0x248u, (float)d642);
            wr32(sp0 - 0x288u, 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x284u;
            t643 = cow_thiscall(g, COW_IMG(0x1018b8f0u), ecx, 1, 1u);
            t644 = g->edx;
            d645 = cow_take_float(g);
            d646 = (double)rdf32(sp0 - 0x248u);
            if (!(d645 < d646))
            {
                edx = t644;
            }
            else
            {
                eax = (t643 & 0xffff0000u) | (uint16_t)cow_fsw(g, d645, d646, 0u);
                edx = t644;
                t647 = rd8(self + 0xb2u);
                wr8(self + 0xb0u, 1u);
                wr8(self + 0xb2u, (uint8_t)(t647 | 1u));
            }
        }
    }
    goto L_100c7d6c;
L_100c7ea7: ;
    if ((uint8_t)eax == 0u) goto L_100c7d8b;
    g->eax = eax;
    g->edx = edx;
    t652 = rd32(self + 0x768u);
    g->esp = sp0 - 0x284u;
    t653 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t654 = g->edx;
    if (t653 != t652)
    {
        eax = t653;
        edx = t654;
        goto L_100c7edf;
    }
    eax = t653;
    g->eax = eax;
    g->edx = rd32(self);
    t655 = rd32(self);
    g->esp = sp0 - 0x284u;
    t656 = cow_thiscall(g, rd32(t655 + 0x34cu), self, 0);
    t657 = g->ecx;
    t658 = g->edx;
    if (t656 != 0u)
    {
        ecx = t657;
        edx = t658;
        goto L_100c7f09;
    }
    edx = t658;
    g->eax = rd32(self);
    g->edx = edx;
    t659 = rd32(self);
    g->esp = sp0 - 0x284u;
    t660 = cow_thiscall(g, rd32(t659 + 0x358u), self, 0);
    t661 = g->ecx;
    t662 = g->edx;
    if (t660 != 0u)
    {
        ecx = t661;
        edx = t662;
        goto L_100c7f09;
    }
    eax = t660;
    edx = t662;
L_100c7edf: ;
    g->eax = eax;
    g->edx = edx;
    t663 = rd32(self + 0x768u);
    g->esp = sp0 - 0x284u;
    t664 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t665 = g->edx;
    if (t664 != t663)
    {
        eax = t664;
        edx = t665;
        goto L_100c7d8b;
    }
    eax = t664;
    g->eax = eax;
    g->edx = rd32(self);
    t666 = rd32(self);
    g->esp = sp0 - 0x284u;
    t667 = cow_thiscall(g, rd32(t666 + 0x36cu), self, 0);
    t668 = g->ecx;
    t669 = g->edx;
    if (t667 == 0u)
    {
        eax = t667;
        edx = t669;
        goto L_100c7d8b;
    }
    ecx = t668;
    edx = t669;
L_100c7f09: ;
    t670 = rd32(self + 0x59cu);
    wr32(sp0 - 0x248u, t670);
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t671 = cow_call_regs(g, COW_IMG(0x10014cf0u), t670, g->ecx, g->edx, 1, 0);
    t672 = g->edx;
    d673 = cow_take_float(g);
    d674 = fr(g, (double)rdf32(sp0 - 0x248u) - fr(g, d673 * (double)rdf32(COW_IMG(0x1032a9f0u))));
    if (!(d674 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t672;
        x0 = d674;
    }
    else
    {
        edx = t672;
        x0 = d674;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    wrf32(self + 0x59cu, (float)x0);
    goto L_100c7dc0;
L_100c7f42: ;
    wr32(self + 0x8d4u, 0u);
    wr8(self + 0x8e8u, 1u);
    goto L_100c7f53;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c63d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c63d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
