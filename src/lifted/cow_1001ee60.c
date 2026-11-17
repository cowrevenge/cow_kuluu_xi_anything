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
    double d309;
    double d316;
    double d320;
    double d321;
    double d322;
    double d335;
    double d339;
    double d34;
    double d340;
    double d341;
    double d351;
    double d355;
    double d356;
    double d357;
    double d363;
    double d379;
    double d38;
    double d390;
    double d394;
    double d400;
    double d404;
    double d405;
    double d421;
    double d424;
    double d436;
    double d437;
    double d443;
    double d447;
    double d45;
    double d450;
    double d451;
    double d455;
    double d458;
    double d465;
    double d466;
    double d47;
    double d475;
    double d476;
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
    double d626;
    double d630;
    double d634;
    double d641;
    double d672;
    double d673;
    double d674;
    double d675;
    double d676;
    double d677;
    double d679;
    double d680;
    double d681;
    double d702;
    double d71;
    double d715;
    double d716;
    double d719;
    double d72;
    double d731;
    double d737;
    double d738;
    double d745;
    double d746;
    double d76;
    double d765;
    double d766;
    double d767;
    double d768;
    double d769;
    double d770;
    double d772;
    double d778;
    double d797;
    double d798;
    double d801;
    double d81;
    double d810;
    double d814;
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
    uint32_t loc_1b0;
    uint32_t loc_1b8;
    double loc_1cc_f;
    uint32_t loc_1d0;
    double loc_1d0_f;
    uint32_t loc_1d4;
    double loc_1d4_f;
    double loc_1d8_f;
    uint32_t loc_1e0;
    double loc_1e0_f;
    uint32_t loc_1e4;
    uint32_t loc_1e8;
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
    uint32_t t31;
    uint32_t t310;
    uint32_t t311;
    uint32_t t312;
    uint32_t t313;
    uint32_t t314;
    uint32_t t315;
    uint32_t t317;
    uint32_t t318;
    uint32_t t319;
    uint32_t t32;
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
    uint32_t t336;
    uint32_t t337;
    uint32_t t338;
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
    uint32_t t352;
    uint32_t t353;
    uint32_t t354;
    uint32_t t358;
    uint32_t t359;
    uint32_t t36;
    uint32_t t360;
    uint32_t t361;
    uint32_t t362;
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
    uint32_t t391;
    uint32_t t392;
    uint32_t t393;
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
    uint32_t t422;
    uint32_t t423;
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
    uint32_t t438;
    uint32_t t439;
    uint32_t t44;
    uint32_t t440;
    uint32_t t441;
    uint32_t t442;
    uint32_t t444;
    uint32_t t445;
    uint32_t t446;
    uint32_t t448;
    uint32_t t449;
    uint32_t t452;
    uint32_t t453;
    uint32_t t454;
    uint32_t t456;
    uint32_t t457;
    uint32_t t459;
    uint32_t t46;
    uint32_t t460;
    uint32_t t461;
    uint32_t t462;
    uint32_t t463;
    uint32_t t464;
    uint32_t t467;
    uint32_t t468;
    uint32_t t469;
    uint32_t t470;
    uint32_t t471;
    uint32_t t472;
    uint32_t t473;
    uint32_t t474;
    uint32_t t477;
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
    uint32_t t623;
    uint32_t t624;
    uint32_t t625;
    uint32_t t627;
    uint32_t t628;
    uint32_t t629;
    uint32_t t63;
    uint32_t t631;
    uint32_t t632;
    uint32_t t633;
    uint32_t t635;
    uint32_t t636;
    uint32_t t637;
    uint32_t t638;
    uint32_t t639;
    uint32_t t64;
    uint32_t t640;
    uint32_t t642;
    uint32_t t643;
    uint32_t t644;
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
    uint32_t t678;
    uint32_t t68;
    uint32_t t682;
    uint32_t t683;
    uint32_t t684;
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
    uint32_t t703;
    uint32_t t704;
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
    uint32_t t717;
    uint32_t t718;
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
    uint32_t t732;
    uint32_t t733;
    uint32_t t734;
    uint32_t t735;
    uint32_t t736;
    uint32_t t739;
    uint32_t t74;
    uint32_t t740;
    uint32_t t741;
    uint32_t t742;
    uint32_t t743;
    uint32_t t744;
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
    uint32_t t760;
    uint32_t t761;
    uint32_t t762;
    uint32_t t763;
    uint32_t t764;
    uint32_t t77;
    uint32_t t771;
    uint32_t t773;
    uint32_t t774;
    uint32_t t775;
    uint32_t t776;
    uint32_t t777;
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
    uint32_t t79;
    uint32_t t790;
    uint32_t t791;
    uint32_t t792;
    uint32_t t793;
    uint32_t t794;
    uint32_t t795;
    uint32_t t796;
    uint32_t t799;
    uint32_t t8;
    uint32_t t80;
    uint32_t t800;
    uint32_t t802;
    uint32_t t803;
    uint32_t t804;
    uint32_t t805;
    uint32_t t806;
    uint32_t t807;
    uint32_t t808;
    uint32_t t809;
    uint32_t t811;
    uint32_t t812;
    uint32_t t813;
    uint32_t t815;
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
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 528u);

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
        if (arg1 == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            loc_1e4 = in_esi;
            loc_1e8 = in_edi;
        }
        else
        {
            if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
            {
                eax = rd32(COW_IMG(0x104568fcu));
                edx = in_edx;
                goto L_1001eeaa;
            }
            eax = rd32(COW_IMG(0x104568fcu));
            wr32(sp0 - 0x1ecu, COW_IMG(0x10330ebcu));
            g->eax = eax;
            g->esp = sp0 - 0x1e8u;
            t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), arg1, in_edx, 1, COW_IMG(0x10330ebcu));
            t2 = g->edx;
            if ((uint8_t)t1 == 0u)
            {
                eax = t1;
                ebx = in_ebx;
                ebp = in_ebp;
                loc_1e4 = in_esi;
                loc_1e8 = in_edi;
                goto L_10020b93;
            }
            eax = t1;
            edx = t2;
L_1001eeaa: ;
            wr32(sp0 - 0x1ecu, COW_IMG(0x10330684u));
            g->eax = eax;
            g->esp = sp0 - 0x1e8u;
            t3 = cow_fastcall(g, COW_IMG(0x1002c8f0u), arg1, edx, 1, COW_IMG(0x10330684u));
            t4 = g->edx;
            if ((uint8_t)t3 != 0u)
            {
                eax = t3;
                ebx = in_ebx;
                ebp = in_ebp;
                loc_1e4 = in_esi;
                loc_1e8 = in_edi;
            }
            else
            {
                edx = t4;
                wr32(sp0 - 0x1ecu, in_ebx);
                wr32(sp0 - 0x1f0u, self + 0x44u);
                wr32(sp0 - 0x1f4u, sp0 - 0x114u);
                g->ecx = sp0 - 0x114u;
                g->esp = sp0 - 0x1ecu;
                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x114u, self + 0x44u);
                t5 = g->ecx;
                wr32(sp0 - 0x1f8u, self + 0x50u);
                wr32(sp0 - 0x1fcu, sp0 - 0x4cu);
                g->eax = sp0 - 0x4cu;
                g->edx = self + 0x50u;
                g->esp = sp0 - 0x1f4u;
                t6 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, self + 0x50u);
                t7 = g->edx;
                g->edx = t7;
                g->esp = sp0 - 0x1ecu;
                t8 = cow_call_regs(g, COW_IMG(0x10158aa0u), t6, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
                t9 = g->edx;
                t10 = rd32(COW_IMG(0x1057876cu));
                t11 = rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u);
                wr8(sp0 - 0x1d9u, (uint8_t)t11);
                g->ecx = t10;
                g->edx = (t9 & 0xffffff00u) | t11;
                t12 = cow_call_regs(g, COW_IMG(0x10014cf0u), t8, g->ecx, g->edx, 1, 0);
                t13 = g->ecx;
                t14 = g->edx;
                d15 = cow_take_float(g);
                g->edx = t14;
                fpush(g, d15);
                t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
                t17 = g->edx;
                t18 = rd32(COW_IMG(0x10456d74u)) - t16;
                t19 = rd32(COW_IMG(0x10456d74u));
                wr32(COW_IMG(0x10456d74u), t18);
                if ((int32_t)(t19 - t16) >= 0)
                {
                    eax = t16;
                    edx = t17;
                    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t8;
                }
                else
                {
                    eax = t16;
                    edx = t17;
                    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t8;
                    wr32(COW_IMG(0x10456d74u), 0u);
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t20 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
                t21 = g->ecx;
                t22 = g->edx;
                wr32(sp0 - 0x1d0u, 0u);
                wr32(sp0 - 0x1ccu, 0u);
                if ((uint8_t)ebx == 0u)
                {
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                    goto L_1001ef4a;
                }
                eax = t20;
                ecx = t21;
                edx = t22;
                if (rd8(sp0 - 0x1d9u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
                    loc_1d0 = 0u;
                    goto L_1001ef67;
                }
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
L_1001ef4a: ;
                wr32(sp0 - 0x1f0u, 6u);
                wr32(sp0 - 0x1f4u, 0x3fu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1e4u;
                t23 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 6u, rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
                t24 = g->ecx;
                t25 = g->edx;
                d26 = cow_take_float(g);
                wrf32(sp0 - 0x1d0u, (float)(double)(float)d26);
                wr32(sp0 - 0x1f8u, 7u);
                wr32(sp0 - 0x1fcu, 0x3fu);
                g->edx = t25;
                g->esp = sp0 - 0x1ecu;
                t27 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t24, 4, 0x3fu, 7u, 0x3fu, 6u);
                t28 = g->ecx;
                t29 = g->edx;
                d30 = cow_take_float(g);
                wrf32(sp0 - 0x1ccu, (float)(double)(float)d30);
                eax = t27;
                ecx = t28;
                edx = t29;
                loc_1d0 = rd32(sp0 - 0x1d0u);
L_1001ef67: ;
                wr32(sp0 - 0x1f0u, 0x8bu);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t31 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8bu);
                t32 = g->ecx;
                t33 = g->edx;
                if (t31 == 0u)
                {
                    eax = t31;
                    ecx = t32;
                    edx = t33;
                    loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                }
                else
                {
                    eax = t31;
                    ecx = t32;
                    edx = t33;
                    d34 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                    wrf32(sp0 - 0x1d0u, (float)d34);
                    loc_1d0_f = d34;
                }
                wr32(sp0 - 0x1f0u, 0x8cu);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t35 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8cu);
                t36 = g->ecx;
                t37 = g->edx;
                if (t35 == 0u)
                {
                    eax = t35;
                    ecx = t36;
                    edx = t37;
                    loc_1cc_f = (double)rdf32(sp0 - 0x1ccu);
                }
                else
                {
                    eax = t35;
                    ecx = t36;
                    edx = t37;
                    d38 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1ccu) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                    wrf32(sp0 - 0x1ccu, (float)d38);
                    loc_1cc_f = d38;
                }
                wr32(sp0 - 0x1d4u, 0u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t39 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
                t40 = g->ecx;
                t41 = g->edx;
                if ((uint8_t)t39 == 0u)
                {
                    eax = t39;
                    loc_1d4 = 0u;
                    loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                }
                else
                {
                    eax = t39;
                    ecx = t40;
                    edx = t41;
                    g->ebx = ebx;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1ecu;
                    t42 = cow_call_regs(g, COW_IMG(0x1025e190u), eax, g->ecx, g->edx, 1, 0);
                    t43 = g->ecx;
                    t44 = g->edx;
                    d45 = cow_take_float(g);
                    wrf32(sp0 - 0x1a8u, (float)(double)(float)d45);
                    g->ebx = ebx;
                    g->edx = t44;
                    cow_call_regs(g, COW_IMG(0x1025e120u), t42, g->ecx, g->edx, 1, 0);
                    t46 = g->edx;
                    d47 = cow_take_float(g);
                    d48 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1a8u) - d47);
                    wrf32(sp0 - 0x1d4u, (float)d48);
                    g->eax = rd32(arg1);
                    t49 = rd32(arg1);
                    t50 = cow_thiscall(g, rd32(t49 + 0x330u), arg1, 0);
                    if ((uint8_t)t50 == 0u)
                    {
                        eax = t50;
                        loc_1d4 = rd32(sp0 - 0x1d4u);
                        loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                    }
                    else
                    {
                        eax = t50;
                        if (rd8(COW_IMG(0x10487f81u)) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
                            loc_1d4 = rd32(sp0 - 0x1d4u);
                            loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
                            if (rd8(COW_IMG(0x10456db0u)) != 0u)
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
                                loc_1d4 = rd32(sp0 - 0x1d4u);
                                loc_1d0_f = (double)rdf32(sp0 - 0x1d0u);
                            }
                            else
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
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
                                    d52 = (double)(float)-(double)rdf32(sp0 - 0x1d4u);
                                    wrf32(sp0 - 0x1d0u, (float)d52);
                                    loc_1d4 = rd32(sp0 - 0x1d4u);
                                    loc_1d0_f = d52;
                                }
                            }
                        }
                    }
                }
                wr32(sp0 - 0x1f0u, in_ebp);
                g->eax = eax;
                g->edx = rd32(arg1);
                t53 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t54 = cow_thiscall(g, rd32(t53 + 0x340u), arg1, 0);
                t55 = g->ecx;
                t56 = g->edx;
                if ((uint8_t)t54 != 0u)
                {
                    eax = t54;
                    ecx = t55;
                    edx = t56;
                }
                else
                {
                    eax = t54;
                    ecx = t55;
                    edx = t56;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t57 = g->edx;
                    d58 = cow_take_float(g);
                    d59 = (double)(float)fr(g, fr(g, d58 * (double)rdf32(sp0 - 0x1d0u)) * (double)rdf32(COW_IMG(0x1032a3ecu)));
                    wrf32(sp0 - 0x1e0u, (float)d59);
                    g->eax = rd32(arg1);
                    g->edx = t57;
                    t60 = rd32(arg1);
                    t61 = cow_thiscall(g, rd32(t60 + 0x330u), arg1, 0);
                    t62 = g->ecx;
                    t63 = g->edx;
                    if ((uint8_t)t61 != 0u)
                    {
                        eax = t61;
                        loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
                    }
                    else
                    {
                        eax = t61;
                        ecx = t62;
                        edx = t63;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t64 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t65 = g->ecx;
                        t66 = g->edx;
                        g->edx = t66;
                        t67 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t68 = g->edx;
                        wr32(sp0 - 0x1f4u, t64 + 0x50u);
                        wr32(sp0 - 0x1f8u, t67 + 0x44u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
                        g->ecx = sp0 - 0x164u;
                        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x164u, t67 + 0x44u, t64 + 0x50u);
                        t69 = g->ecx;
                        wr32(sp0 - 0x200u, sp0 - 0x164u);
                        wr32(sp0 - 0x204u, sp0 - 0x164u);
                        g->eax = sp0 - 0x164u;
                        g->esp = sp0 - 0x1fcu;
                        t70 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x164u, sp0 - 0x164u);
                        d71 = cow_take_float(g);
                        if (!(fr(g, sqrt(d71)) < (double)rdf32(COW_IMG(0x10329a18u))))
                        {
                            eax = (t70 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d71)), (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                            ebx = t64 + 0x50u;
                            x0 = fr(g, sqrt(d71));
                        }
                        else
                        {
                            eax = (t70 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d71)), (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                            ebx = t64 + 0x50u;
                            x0 = fr(g, sqrt(d71));
                            x0 = (double)rdf32(COW_IMG(0x10329a18u));
                        }
                        d72 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3e8u)) / x0) * (double)rdf32(sp0 - 0x1e0u));
                        wrf32(sp0 - 0x1e0u, (float)d72);
                        loc_1e0_f = d72;
                    }
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t73 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t74 = cow_thiscall(g, rd32(t73 + 0x330u), arg1, 0);
                    t75 = g->edx;
                    if ((uint8_t)t74 == 0u)
                    {
                        eax = t74;
                        edx = t75;
                        goto L_1001f0cf;
                    }
                    eax = t74;
                    edx = t75;
                    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        goto L_1001f0cf;
                    }
                    wr32(sp0 - 0x1e0u, 0u);
                    loc_1e0 = 0u;
L_1001f0e6: ;
                    wr32(sp0 - 0x1f4u, loc_1e0);
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t77 = cow_call_regs(g, COW_IMG(0x1001ebb0u), loc_1e0, self, g->edx, 0, 1, loc_1e0);
                    t78 = g->ecx;
                    t79 = g->edx;
                    t80 = cow_call_regs(g, COW_IMG(0x10014cf0u), t77, g->ecx, g->edx, 1, 0);
                    d81 = cow_take_float(g);
                    d82 = (double)(float)fr(g, fr(g, d81 * (double)rdf32(sp0 - 0x1ccu)) * (double)rdf32(COW_IMG(0x1032a3e4u)));
                    wrf32(sp0 - 0x1a8u, (float)d82);
                    g->edx = rd32(arg1);
                    t83 = rd32(arg1);
                    t84 = cow_thiscall(g, rd32(t83 + 0x330u), arg1, 0);
                    t85 = g->ecx;
                    t86 = g->edx;
                    if ((uint8_t)t84 == 0u)
                    {
                        eax = t84;
                        ecx = t85;
                        edx = t86;
                        goto L_1001f130;
                    }
                    eax = t84;
                    ecx = t85;
                    edx = t86;
                    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                        goto L_1001f130;
                    }
                    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_1001f147: ;
                    d88 = fr(g, x0 + (double)rdf32(self + 0x48u));
                    wrf32(self + 0x48u, (float)d88);
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t89 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
                t90 = g->edx;
                if ((uint8_t)t89 == 0u)
                {
                    eax = t89;
                    edx = t90;
                }
                else
                {
                    edx = t90;
                    g->eax = rd32(arg1);
                    g->edx = edx;
                    t91 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t92 = cow_thiscall(g, rd32(t91 + 0x330u), arg1, 0);
                    t93 = g->edx;
                    if ((uint8_t)t92 == 0u)
                    {
                        eax = t92;
                        edx = t93;
                    }
                    else
                    {
                        eax = t92;
                        edx = t93;
                        if (rd8(COW_IMG(0x10456db0u)) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456db0u));
                            d94 = (double)rdf32(sp0 - 0x1d4u);
                            if (d94 == (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                d95 = (double)(float)-(double)rdf32(COW_IMG(0x10456db4u));
                                wrf32(sp0 - 0x1e0u, (float)d95);
                                g->eax = eax;
                                g->edx = rd32(arg1);
                                t96 = rd32(arg1);
                                g->esp = sp0 - 0x1f0u;
                                t97 = cow_thiscall(g, rd32(t96 + 0x330u), arg1, 0);
                                t98 = g->ecx;
                                t99 = g->edx;
                                if ((uint8_t)t97 != 0u)
                                {
                                    edx = t99;
                                    loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
                                }
                                else
                                {
                                    eax = t97;
                                    ecx = t98;
                                    edx = t99;
                                    g->eax = eax;
                                    g->ecx = ecx;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x1f0u;
                                    t100 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                                    t101 = g->ecx;
                                    t102 = g->edx;
                                    g->ecx = t101;
                                    g->edx = t102;
                                    t103 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                                    t104 = g->ecx;
                                    t105 = g->edx;
                                    wr32(sp0 - 0x1f4u, t100 + 0x50u);
                                    wr32(sp0 - 0x1f8u, t103 + 0x44u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x164u);
                                    g->eax = sp0 - 0x164u;
                                    t106 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x164u, t103 + 0x44u, t100 + 0x50u);
                                    wr32(sp0 - 0x200u, sp0 - 0x164u);
                                    wr32(sp0 - 0x204u, sp0 - 0x164u);
                                    g->edx = sp0 - 0x164u;
                                    g->esp = sp0 - 0x1fcu;
                                    t107 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x164u, sp0 - 0x164u);
                                    t108 = g->edx;
                                    d109 = cow_take_float(g);
                                    if (!(fr(g, sqrt(d109)) < (double)rdf32(COW_IMG(0x10329a18u))))
                                    {
                                        edx = t108;
                                        ebx = t100 + 0x50u;
                                        x0 = fr(g, sqrt(d109));
                                    }
                                    else
                                    {
                                        edx = t108;
                                        ebx = t100 + 0x50u;
                                        x0 = fr(g, sqrt(d109));
                                        x0 = (double)rdf32(COW_IMG(0x10329a18u));
                                    }
                                    d110 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3e8u)) / x0) * (double)rdf32(sp0 - 0x1e0u));
                                    wrf32(sp0 - 0x1e0u, (float)d110);
                                    loc_1e0_f = d110;
                                }
                                g->eax = rd32(arg1);
                                g->edx = edx;
                                t111 = rd32(arg1);
                                g->esp = sp0 - 0x1f0u;
                                t112 = cow_thiscall(g, rd32(t111 + 0x330u), arg1, 0);
                                t113 = g->edx;
                                if ((uint8_t)t112 == 0u)
                                {
                                    eax = t112;
                                    edx = t113;
                                    goto L_1001f237;
                                }
                                eax = t112;
                                edx = t113;
                                if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                    goto L_1001f237;
                                }
                                eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                wr32(sp0 - 0x1e0u, 0u);
                                loc_1e0 = 0u;
L_1001f24e: ;
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
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t117 = cow_call_regs(g, COW_IMG(0x10157cf0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
                t118 = g->edx;
                if (t117 != 0u)
                {
                    eax = t117;
                    ebp = t117;
                }
                else
                {
                    eax = t117;
                    edx = t118;
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t119 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
                    eax = t119;
                    ebp = t119;
                }
                g->eax = eax;
                g->edx = rd32(arg1);
                t120 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t121 = cow_thiscall(g, rd32(t120 + 0x19cu), arg1, 0);
                t122 = g->edx;
                if ((uint8_t)t121 == 0u)
                {
                    eax = t121;
                }
                else
                {
                    edx = t122;
                    g->eax = rd32(arg1);
                    t123 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t124 = cow_thiscall(g, rd32(t123 + 0x1bcu), arg1, 0);
                    d125 = fr(g, (double)rdf32(t124 + 4u) - (double)rdf32(COW_IMG(0x10456da0u)));
                    d126 = fr(g, d125 + (double)rdf32(self + 0x48u));
                    wrf32(self + 0x48u, (float)d126);
                    if (d125 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (t124 & 0xffff0000u) | (uint16_t)cow_fsw(g, d125, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    }
                    else
                    {
                        eax = (t124 & 0xffff0000u) | (uint16_t)cow_fsw(g, d125, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        wr32(COW_IMG(0x10456d74u), 0xau);
                    }
                }
                g->eax = eax;
                g->edx = rd32(arg1);
                t127 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t128 = cow_thiscall(g, rd32(t127 + 0x1bcu), arg1, 0);
                t129 = g->ecx;
                t130 = g->edx;
                wr32(sp0 - 0x1f4u, t128);
                wr32(sp0 - 0x1f8u, COW_IMG(0x10456d9cu));
                g->edx = t130;
                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x10456d9cu), t128);
                t131 = g->edx;
                g->eax = rd32(arg1);
                g->edx = t131;
                t132 = rd32(arg1);
                t133 = cow_thiscall(g, rd32(t132 + 0x330u), arg1, 0);
                t134 = g->edx;
                wr8(sp0 - 0x118u, (uint8_t)t133);
                if (ebp == 0u)
                {
                    eax = t133;
                    goto L_1001f2e8;
                }
                eax = t133;
                edx = t134;
                if (arg1 != ebp) goto L_1001f2f4;
L_1001f2e8: ;
                wr32(sp0 - 0x1f4u, 1u);
                g->edx = rd32(arg1);
                t135 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                cow_thiscall(g, rd32(t135 + 0x334u), arg1, 1, 1u);
                t136 = g->edx;
                edx = t136;
L_1001f2f4: ;
                g->eax = rd32(arg1);
                t137 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t138 = cow_thiscall(g, rd32(t137 + 0x330u), arg1, 0);
                if ((uint8_t)t138 == 0u)
                {
                    eax = t138;
                    g->eax = eax;
                    g->edx = rd32(ebp);
                    t183 = rd32(ebp);
                    g->esp = sp0 - 0x1f0u;
                    t184 = cow_thiscall(g, rd32(t183 + 0x1bcu), ebp, 0);
                    t185 = g->ecx;
                    t186 = g->edx;
                    wr32(sp0 - 0x1f4u, t184);
                    wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                    g->eax = sp0 - 0x154u;
                    g->ecx = t185;
                    g->edx = t186;
                    t187 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x154u, t184);
                    t188 = g->ecx;
                    t189 = g->edx;
                    d190 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10456da8u)) + (double)rdf32(sp0 - 0x150u));
                    wrf32(sp0 - 0x150u, (float)d190);
                    t191 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    g->edx = rd32(ebp);
                    t192 = rd32(ebp);
                    t193 = cow_thiscall(g, rd32(t192 + 0x1bcu), ebp, 0);
                    t194 = g->ecx;
                    t195 = g->edx;
                    wr32(sp0 - 0x1f4u, t193);
                    wr32(sp0 - 0x1f8u, t191 + 0x44u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                    g->eax = sp0 - 0x1b8u;
                    t196 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1b8u, t191 + 0x44u, t193);
                    g->edx = rd32(ebp);
                    t197 = rd32(ebp);
                    t198 = cow_thiscall(g, rd32(t197 + 0x1bcu), ebp, 0);
                    t199 = g->edx;
                    wr32(sp0 - 0x1f4u, t198);
                    g->eax = rd32(arg1);
                    g->edx = t199;
                    t200 = rd32(arg1);
                    g->esp = sp0 - 0x1f4u;
                    t201 = cow_thiscall(g, rd32(t200 + 0x1bcu), arg1, 0);
                    t202 = g->edx;
                    wr32(sp0 - 0x1f8u, t201);
                    wr32(sp0 - 0x1fcu, sp0 - 0x184u);
                    g->ecx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1f0u;
                    t203 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x184u, t201, rd32(sp0 - 0x1f4u));
                    t204 = g->ecx;
                    wr32(sp0 - 0x200u, sp0 - 0x1b8u);
                    g->ecx = t204;
                    g->edx = sp0 - 0x1b8u;
                    g->esp = sp0 - 0x1fcu;
                    cow_call_regs(g, COW_IMG(0x100274b0u), t203, g->ecx, g->edx, 1, 1, sp0 - 0x1b8u);
                    t205 = g->ecx;
                    t206 = g->edx;
                    wr32(sp0 - 0x204u, sp0 - 0x184u);
                    g->esp = sp0 - 0x200u;
                    t207 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x184u, g->ecx, g->edx, 1, 1, sp0 - 0x184u);
                    g->edx = rd32(arg1);
                    t208 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t209 = cow_thiscall(g, rd32(t208 + 0x1bcu), arg1, 0);
                    t210 = g->ecx;
                    t211 = g->edx;
                    wr32(sp0 - 0x1f4u, t209);
                    wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1b8u, t209);
                    wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                    wr32(sp0 - 0x1f8u, 0xdu);
                    cow_thiscall(g, rd32(rd32(arg1) + 0x1c8u), arg1, 2, 0xdu, sp0 - 0x184u);
                    wr32(sp0 - 0x1f4u, 0x3f000000u);
                    wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                    d212 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1b4u) + (double)rdf32(sp0 - 0x180u));
                    wrf32(sp0 - 0x1b4u, (float)d212);
                    wr32(sp0 - 0x200u, sp0 - 0x154u);
                    g->eax = sp0 - 0x154u;
                    g->edx = sp0 - 0x1b8u;
                    t213 = cow_cdecl(g, COW_IMG(0x100276a0u), 4, sp0 - 0x154u, sp0 - 0x1b8u, sp0 - 0x154u, 0x3f000000u);
                    t214 = g->edx;
                    eax = t213;
                    edx = t214;
                    ebx = t191 + 0x44u;
                }
                else
                {
                    eax = t138;
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t139 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t140 = cow_thiscall(g, rd32(t139 + 0x1bcu), arg1, 0);
                    t141 = g->ecx;
                    t142 = g->edx;
                    wr32(sp0 - 0x1f4u, t140);
                    wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                    g->eax = sp0 - 0x154u;
                    t143 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x154u, t140);
                    g->edx = rd32(arg1);
                    t144 = rd32(arg1);
                    t145 = cow_thiscall(g, rd32(t144 + 0xc4u), arg1, 0);
                    t146 = g->edx;
                    if ((uint8_t)t145 == 0x80u)
                    {
                        eax = (uint8_t)t145;
                        edx = t146;
                        wr32(sp0 - 0x1e0u, 0u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t151 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
                        t152 = g->edx;
                        wr32(sp0 - 0x1f4u, t151);
                        g->edx = t152;
                        t153 = cow_thiscall(g, COW_IMG(0x10084350u), arg1, 1, t151);
                        t154 = g->edx;
                        if ((uint8_t)t153 != 0u)
                        {
                            eax = t153;
                            goto L_1001f3e7;
                        }
                        eax = t153;
                        edx = t154;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t155 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
                        t156 = g->edx;
                        wr32(sp0 - 0x1f4u, t155);
                        t157 = cow_thiscall(g, COW_IMG(0x10084370u), arg1, 1, t155);
                        if ((uint8_t)t157 != 0u)
                        {
                            eax = t157;
                            goto L_1001f3e7;
                        }
                        eax = t157;
                        wr32(sp0 - 0x1f4u, 1u);
                        g->eax = eax;
                        g->edx = rd32(arg1);
                        t158 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t159 = cow_thiscall(g, rd32(t158 + 0x3ccu), arg1, 1, 1u);
                        t160 = g->ecx;
                        t161 = g->edx;
                        if (t159 == 0u)
                        {
                            eax = t159;
                            ecx = t160;
                            edx = t161;
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t167 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                            t168 = g->edx;
                            t169 = rd32(t167 + 0x54u);
                            wr32(sp0 - 0x150u, t169);
                            eax = t167;
                            edx = t168;
                            loc_150 = t169;
                        }
                        else
                        {
                            eax = t159;
                            edx = t161;
                            d162 = (double)(float)fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax));
                            wrf32(sp0 - 0x1e0u, (float)d162);
                            g->eax = rd32(arg1);
                            g->edx = edx;
                            t163 = rd32(arg1);
                            g->esp = sp0 - 0x1f0u;
                            t164 = cow_thiscall(g, rd32(t163 + 0x14cu), arg1, 0);
                            t165 = g->edx;
                            if ((uint8_t)t164 == 0u)
                            {
                                eax = t164;
                                edx = t165;
                                loc_150 = rd32(sp0 - 0x150u);
                            }
                            else
                            {
                                eax = t164;
                                edx = t165;
                                d166 = (double)rdf32(sp0 - 0x1e0u);
                                if ((cow_fsw(g, d166, (double)rdf32(COW_IMG(0x10329ea0u)), 0u) & 0x100u) != 0u)
                                {
                                    eax = cow_fsw(g, d166, (double)rdf32(COW_IMG(0x10329ea0u)), 0u) & 0x100u;
                                    loc_150 = rd32(sp0 - 0x150u);
                                }
                                else
                                {
                                    eax = cow_fsw(g, d166, (double)rdf32(COW_IMG(0x10329ea0u)), 0u) & 0x100u;
                                    wr32(sp0 - 0x1e0u, 0x40200000u);
                                    loc_150 = rd32(sp0 - 0x150u);
                                }
                            }
                        }
L_1001f42e: ;
                        d182 = (double)(float)fr(g, cow_bits2f(loc_150) - fr(g, (double)rdf32(sp0 - 0x1e0u) * (double)rdf32(COW_IMG(0x10329a30u))));
                        wrf32(sp0 - 0x150u, (float)d182);
                    }
                    else
                    {
                        eax = (uint8_t)t145;
                        wr32(sp0 - 0x1f4u, sp0 - 0x5cu);
                        wr32(sp0 - 0x1f8u, eax);
                        g->eax = eax;
                        g->edx = rd32(arg1);
                        t147 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t148 = cow_thiscall(g, rd32(t147 + 0x1c8u), arg1, 2, eax, sp0 - 0x5cu);
                        t149 = g->edx;
                        d150 = (double)(float)fr(g, (double)rdf32(sp0 - 0x150u) + (double)rdf32(sp0 - 0x58u));
                        wrf32(sp0 - 0x150u, (float)d150);
                        eax = t148;
                        edx = t149;
                    }
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t215 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
                t216 = g->ecx;
                t217 = g->edx;
                if (t215 == 0x2fu)
                {
                    eax = t215;
                    ebx = ebx & 0xffffff00u;
                    goto L_1001f54a;
                }
                eax = t215;
                ecx = t216;
                edx = t217;
                ebx = ebx & 0xffffff00u;
                if ((int32_t)eax <= 62) goto L_1001f546;
                if ((int32_t)eax <= 83) goto L_1001f54a;
L_1001f546: ;
                ebx = (ebx & 0xffffff00u) | 1u;
                edi = self;
L_1001f587: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1f0u;
                t227 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                t228 = g->edx;
                wr32(sp0 - 0x1f4u, t227 + 0x50u);
                wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                g->eax = t227 + 0x50u;
                g->ecx = sp0 - 0x194u;
                g->edx = t228;
                t229 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x194u, t227 + 0x50u);
                t230 = g->ecx;
                t231 = g->edx;
                if ((uint8_t)ebx != 1u)
                {
                    eax = t229;
                    ecx = t230;
                }
                else
                {
                    eax = t229;
                    ecx = t230;
                    edx = t231;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t232 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t233 = g->ecx;
                    t234 = g->edx;
                    d235 = cow_take_float(g);
                    g->ecx = t233;
                    fpush(g, d235);
                    t236 = cow_call_regs(g, COW_IMG(0x10311c6cu), t232, g->ecx, g->edx, 1, 0);
                    t237 = g->ecx;
                    if ((int32_t)t236 <= 0)
                    {
                        eax = t236;
                        ecx = t237;
                    }
                    else
                    {
                        eax = t236;
                        ebx = eax;
L_1001f5b2: ;
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x154u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x164u);
                        g->eax = sp0 - 0x154u;
                        g->ecx = sp0 - 0x164u;
                        g->esp = sp0 - 0x1f0u;
                        t238 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x164u, sp0 - 0x154u, sp0 - 0x194u);
                        t239 = g->ecx;
                        wr32(sp0 - 0x200u, 0x3e800000u);
                        wr32(sp0 - 0x204u, sp0 - 0x164u);
                        g->edx = sp0 - 0x164u;
                        g->esp = sp0 - 0x1fcu;
                        cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x164u, 0x3e800000u);
                        t240 = g->edx;
                        wr32(sp0 - 0x208u, sp0 - 0x164u);
                        wr32(sp0 - 0x20cu, sp0 - 0x194u);
                        g->eax = sp0 - 0x164u;
                        g->ecx = sp0 - 0x194u;
                        g->esp = sp0 - 0x204u;
                        t241 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, sp0 - 0x164u);
                        t242 = g->ecx;
                        if (ebx != 1u)
                        {
                            ebx = ebx - 1u;
                            goto L_1001f5b2;
                        }
                        eax = t241;
                        ecx = t242;
                    }
                }
                wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                g->eax = eax;
                g->edx = sp0 - 0x194u;
                g->esp = sp0 - 0x1f4u;
                t243 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                t244 = g->edx;
                g->edx = t244;
                g->esp = sp0 - 0x1f0u;
                cow_thiscall(g, COW_IMG(0x1001e780u), t243, 1, sp0 - 0x194u);
                t245 = g->edx;
                g->eax = rd32(arg1);
                g->edx = t245;
                t246 = rd32(arg1);
                t247 = cow_thiscall(g, rd32(t246 + 0x330u), arg1, 0);
                t248 = g->ecx;
                t249 = g->edx;
                if ((uint8_t)t247 == 0u)
                {
                    eax = t247;
                    ecx = t248;
                    edx = t249;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t562 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t563 = g->ecx;
                    t564 = g->edx;
                    g->ecx = t563;
                    t565 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t566 = g->ecx;
                    wr32(sp0 - 0x1f4u, t562 + 0x50u);
                    wr32(sp0 - 0x1f8u, t565 + 0x44u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                    g->edx = sp0 - 0x194u;
                    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x194u, t565 + 0x44u, t562 + 0x50u);
                    t567 = g->edx;
                    wr32(sp0 - 0x200u, sp0 - 0x194u);
                    wr32(sp0 - 0x204u, sp0 - 0x164u);
                    g->eax = sp0 - 0x194u;
                    g->esp = sp0 - 0x1fcu;
                    t568 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x164u, sp0 - 0x194u);
                    g->edx = rd32(ebp);
                    t569 = rd32(ebp);
                    g->esp = sp0 - 0x1f0u;
                    t570 = cow_thiscall(g, rd32(t569 + 0x1bcu), ebp, 0);
                    t571 = g->edx;
                    wr32(sp0 - 0x1f4u, t570);
                    g->eax = rd32(arg1);
                    g->edx = t571;
                    t572 = rd32(arg1);
                    g->esp = sp0 - 0x1f4u;
                    t573 = cow_thiscall(g, rd32(t572 + 0x1bcu), arg1, 0);
                    t574 = g->edx;
                    wr32(sp0 - 0x1f8u, t573);
                    wr32(sp0 - 0x1fcu, sp0 - 0x184u);
                    g->ecx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x184u, t573, rd32(sp0 - 0x1f4u));
                    t575 = g->ecx;
                    wr32(sp0 - 0x200u, sp0 - 0x164u);
                    wr32(sp0 - 0x204u, sp0 - 0x164u);
                    g->eax = sp0 - 0x164u;
                    g->esp = sp0 - 0x1fcu;
                    t576 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x164u, sp0 - 0x164u);
                    d577 = cow_take_float(g);
                    wr32(sp0 - 0x208u, sp0 - 0x184u);
                    wr32(sp0 - 0x20cu, sp0 - 0x184u);
                    d578 = (double)(float)fr(g, sqrt(d577));
                    wrf32(sp0 - 0x1e0u, (float)d578);
                    g->ecx = sp0 - 0x184u;
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x204u;
                    t579 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x184u, sp0 - 0x184u);
                    t580 = g->ecx;
                    t581 = g->edx;
                    d582 = cow_take_float(g);
                    d583 = (double)(float)fr(g, sqrt(d582));
                    wrf32(sp0 - 0x1d0u, (float)d583);
                    d584 = (double)rdf32(sp0 - 0x1e0u);
                    if (!(d584 < (double)rdf32(COW_IMG(0x10329a18u))))
                    {
                        eax = (t579 & 0xffff0000u) | (uint16_t)cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                        ecx = t580;
                        edx = t581;
                        loc_1d0_f = d583;
                        loc_1e0 = rd32(sp0 - 0x1e0u);
                        x0 = fr(g, sqrt(d582));
                    }
                    else
                    {
                        eax = (t579 & 0xffff0000u) | (uint16_t)cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
                        ecx = t580;
                        edx = t581;
                        loc_1d0_f = d583;
                        x0 = fr(g, sqrt(d582));
                        wr32(sp0 - 0x1e0u, 0x3c23d70au);
                        loc_1e0 = 0x3c23d70au;
                    }
                    if (x0 < (double)rdf32(COW_IMG(0x10329a18u)))
                    {
                        wr32(sp0 - 0x1d0u, 0x3c23d70au);
                    }
                    wr32(sp0 - 0x1f4u, ecx);
                    d585 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_1e0));
                    wrf32(sp0 - 0x1f4u, (float)d585);
                    wr32(sp0 - 0x1f8u, sp0 - 0x164u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                    g->ecx = sp0 - 0x144u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x144u, sp0 - 0x164u, cow_f2bits(d585));
                    t586 = g->ecx;
                    d587 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x1d0u));
                    wrf32(sp0 - 0x1f4u, (float)d587);
                    wr32(sp0 - 0x1f8u, sp0 - 0x184u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
                    g->eax = sp0 - 0x1a4u;
                    g->ecx = t586;
                    g->edx = sp0 - 0x184u;
                    t588 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x1a4u, sp0 - 0x184u, cow_f2bits(d587));
                    t589 = g->ecx;
                    t590 = g->edx;
                    wr32(sp0 - 0x1d4u, 0u);
                    g->ecx = t589;
                    g->edx = t590;
                    t591 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
                    t592 = g->ecx;
                    t593 = g->edx;
                    if ((uint8_t)t591 == 0u)
                    {
                        eax = t591;
                        ecx = t592;
                        edx = t593;
                        goto L_10020352;
                    }
                    eax = t591;
                    edx = t593;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t594 = cow_thiscall(g, COW_IMG(0x10084400u), arg1, 0);
                    t595 = g->edx;
                    if (t594 == 2u)
                    {
                        eax = t594;
                        goto L_10020313;
                    }
                    eax = t594;
                    edx = t595;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t596 = cow_thiscall(g, COW_IMG(0x10084400u), arg1, 0);
                    t597 = g->ecx;
                    t598 = g->edx;
                    if (t596 != 7u)
                    {
                        eax = t596;
                        ecx = t597;
                        edx = t598;
                        goto L_100203c5;
                    }
                    eax = t596;
L_10020313: ;
                    wr32(sp0 - 0x1f4u, 1u);
                    g->eax = eax;
                    g->edx = rd32(arg1);
                    t599 = rd32(arg1);
                    g->esp = sp0 - 0x1f0u;
                    t600 = cow_thiscall(g, rd32(t599 + 0x3c8u), arg1, 1, 1u);
                    t601 = g->ecx;
                    t602 = g->edx;
                    if (t600 == 0u)
                    {
                        eax = t600;
                        ecx = t601;
                        edx = t602;
                        goto L_100203c5;
                    }
                    eax = t600;
                    ecx = t601;
                    edx = t602;
                    d603 = (double)(float)fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + 0xcu));
                    wrf32(sp0 - 0x1d4u, (float)d603);
                    d604 = fr(g, (double)rdf32(eax + 0x10u) - (double)rdf32(eax + 0x14u));
                    if ((cow_fsw(g, d604, d603, 1u) & 0x4100u) == 0u)
                    {
                        eax = cow_fsw(g, d604, d603, 1u) & 0x4100u;
                        x0 = d604;
                    }
                    else
                    {
                        eax = cow_fsw(g, d604, d603, 1u) & 0x4100u;
                        loc_1d4_f = d603;
                        x0 = d604;
                        x0 = loc_1d4_f;
                    }
                    x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3acu)));
L_100203c1: ;
                    wrf32(sp0 - 0x1d4u, (float)(double)(float)x0);
L_100203c5: ;
                    g->eax = eax;
                    g->esp = sp0 - 0x1f0u;
                    t618 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                    d619 = cow_take_float(g);
                    wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
                    wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                    d620 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3a8u)) + fr(g, fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x1032a3bcu))) + (double)rdf32(sp0 - 0x1d4u))) * fr(g, d619 * (double)rdf32(COW_IMG(0x1032a22cu))));
                    wrf32(sp0 - 0x1a8u, (float)d620);
                    d621 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x1032a3bcu))) + (double)rdf32(sp0 - 0x1d4u)) + (double)rdf32(COW_IMG(0x1032a3a4u))) * fr(g, d619 * (double)rdf32(COW_IMG(0x1032a22cu))));
                    wrf32(sp0 - 0x11cu, (float)d621);
                    d622 = (double)(float)fr(g, atan2(fr(g, (double)rdf32(COW_IMG(0x1032a3a0u)) / fr(g, d620 + (double)rdf32(sp0 - 0x1d0u))), 1.0));
                    wrf32(sp0 - 0x1ccu, (float)d622);
                    g->ecx = sp0 - 0x1a4u;
                    g->edx = sp0 - 0x144u;
                    t623 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x144u, sp0 - 0x1a4u);
                    t624 = g->ecx;
                    t625 = g->edx;
                    d626 = cow_take_float(g);
                    g->ecx = t624;
                    g->edx = t625;
                    g->esp = sp0 - 0x1e8u;
                    t627 = cow_cdecl(g, COW_IMG(0x10313820u), 2, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu));
                    t628 = g->ecx;
                    t629 = g->edx;
                    d630 = cow_take_float(g);
                    wrf32(sp0 - 0x1d4u, (float)(double)(float)d630);
                    g->ecx = t628;
                    g->edx = t629;
                    g->esp = sp0 - 0x1f0u;
                    t631 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
                    t632 = g->ecx;
                    t633 = g->edx;
                    if ((uint8_t)t631 == 0u)
                    {
                        eax = t631;
                        ecx = t632;
                        edx = t633;
                        x0 = d626;
                        goto L_10020446;
                    }
                    eax = t631;
                    ecx = t632;
                    edx = t633;
                    x0 = d626;
                    x1 = fr(g, (double)rdf32(sp0 - 0x1ccu) * (double)rdf32(COW_IMG(0x10329d38u)));
L_10020465: ;
                    wrf32(sp0 - 0x1ccu, (float)(double)(float)x1);
                    loc_1cc_f = (double)(float)x1;
L_10020469: ;
                    d634 = (double)rdf32(sp0 - 0x1d4u);
                    if ((cow_fsw(g, d634, loc_1cc_f, 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d634, loc_1cc_f, 1u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d634, loc_1cc_f, 1u) & 0x4100u;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t635 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x174u, 0);
                        t636 = g->edx;
                        g->edx = t636;
                        t637 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x134u, 0);
                        t638 = g->edx;
                        g->edx = t638;
                        cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0xacu, 0);
                        t639 = g->ecx;
                        t640 = g->edx;
                        wr32(sp0 - 0x1f4u, t639);
                        d641 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1d4u) - (double)rdf32(sp0 - 0x1ccu));
                        wrf32(sp0 - 0x1f4u, (float)d641);
                        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
                        g->eax = sp0 - 0x144u;
                        g->edx = t640;
                        t642 = cow_thiscall(g, COW_IMG(0x10033420u), sp0 - 0x174u, 3, sp0 - 0x1a4u, sp0 - 0x144u, cow_f2bits(d641));
                        t643 = g->edx;
                        cow_call_regs(g, COW_IMG(0x10032da0u), t642, sp0 - 0x174u, g->edx, 1, 0);
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                        g->eax = sp0 - 0x194u;
                        g->edx = sp0 - 0x194u;
                        t644 = cow_thiscall(g, COW_IMG(0x10033490u), sp0 - 0x174u, 2, sp0 - 0x194u, sp0 - 0x194u);
                        t645 = g->ecx;
                        t646 = g->edx;
                        g->edx = t646;
                        t647 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t648 = g->edx;
                        wr32(sp0 - 0x1f4u, t647 + 0x50u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                        g->eax = t647 + 0x50u;
                        g->ecx = sp0 - 0x194u;
                        t649 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, t647 + 0x50u);
                        t650 = g->ecx;
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        g->edx = sp0 - 0x194u;
                        g->esp = sp0 - 0x1f4u;
                        t651 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                        t652 = g->edx;
                        g->edx = t652;
                        g->esp = sp0 - 0x1f0u;
                        t653 = cow_thiscall(g, COW_IMG(0x1001e760u), t651, 1, sp0 - 0x194u);
                        t654 = g->edx;
                        g->edx = t654;
                        t655 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                        t656 = g->edx;
                        g->edx = t656;
                        t657 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                        t658 = g->edx;
                        g->ecx = sp0 - 0x174u;
                        g->edx = t658;
                        t659 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                        t660 = g->ecx;
                        t661 = g->edx;
                        eax = t659;
                        ecx = t660;
                        edx = t661;
                    }
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1f0u;
                    t662 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t663 = g->ecx;
                    t664 = g->edx;
                    g->ecx = t663;
                    g->edx = t664;
                    t665 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t666 = g->ecx;
                    t667 = g->edx;
                    wr32(sp0 - 0x1f4u, t662 + 0x50u);
                    wr32(sp0 - 0x1f8u, t665 + 0x44u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                    g->eax = sp0 - 0x194u;
                    t668 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x194u, t665 + 0x44u, t662 + 0x50u);
                    wr32(sp0 - 0x200u, 0x3f000000u);
                    wr32(sp0 - 0x204u, sp0 - 0x184u);
                    wr32(sp0 - 0x208u, sp0 - 0x184u);
                    g->ecx = sp0 - 0x184u;
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1fcu;
                    t669 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x184u, sp0 - 0x184u, 0x3f000000u);
                    t670 = g->ecx;
                    t671 = g->edx;
                    d672 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1d0u) * (double)rdf32(COW_IMG(0x10329a08u)));
                    wrf32(sp0 - 0x1d0u, (float)d672);
                    d673 = fr(g, (double)rdf32(sp0 - 0x1a8u) + d672);
                    d674 = (double)rdf32(sp0 - 0x1e0u);
                    if ((cow_fsw(g, d673, d674, 2u) & 0x4100u) == 0u)
                    {
                        eax = cow_fsw(g, d673, d674, 2u) & 0x4100u;
                        ecx = t670;
                        edx = t671;
                        x1 = d673;
                    }
                    else
                    {
                        eax = cow_fsw(g, d673, d674, 2u) & 0x4100u;
                        ecx = t670;
                        edx = t671;
                        loc_1d0_f = d672;
                        x1 = d673;
                        d675 = fr(g, (double)rdf32(sp0 - 0x11cu) + loc_1d0_f);
                        d676 = (double)rdf32(sp0 - 0x1e0u);
                        if (d675 < d676)
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d675, d676, 2u);
                            x1 = d675;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d675, d676, 2u);
                            x1 = d675;
                            x1 = (double)rdf32(sp0 - 0x1e0u);
                        }
                    }
                    wr32(sp0 - 0x1e0u, 0u);
                    d677 = (double)(float)fr(g, x1 - (double)rdf32(sp0 - 0x1e0u));
                    wrf32(sp0 - 0x1d0u, (float)d677);
                    g->esp = sp0 - 0x1f0u;
                    t678 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    d679 = cow_take_float(g);
                    if ((cow_fsw(g, d679, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u) != 0u)
                    {
                        x1 = d679;
                    }
                    else
                    {
                        eax = cow_fsw(g, d679, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u;
                        x1 = d679;
                        x3 = (double)rdf32(sp0 - 0x1d0u);
                        x2 = cow_bits2f(0u);
L_100205cd: ;
                        d680 = fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) * x3);
                        d681 = fr(g, x1 - (double)rdf32(COW_IMG(0x1032961cu)));
                        if ((cow_fsw(g, d681, (double)rdf32(COW_IMG(0x103295d8u)), 4u) & 0x4100u) == 0u)
                        {
                            eax = cow_fsw(g, d681, (double)rdf32(COW_IMG(0x103295d8u)), 4u) & 0x4100u;
                            x3 = fr(g, x3 - d680);
                            x2 = fr(g, x2 + d680);
                            x1 = d681;
                            goto L_100205cd;
                        }
                        x3 = fr(g, x3 - d680);
                        x2 = fr(g, x2 + d680);
                        x1 = d681;
                        wrf32(sp0 - 0x1e0u, (float)(double)(float)x2);
                    }
                    t682 = rd32(sp0 - 0x1e0u);
                    wr32(sp0 - 0x1f4u, t682);
                    wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                    wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                    g->edx = sp0 - 0x144u;
                    g->esp = sp0 - 0x1f0u;
                    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x144u, sp0 - 0x144u, t682);
                    t683 = g->edx;
                    wr32(sp0 - 0x200u, sp0 - 0x144u);
                    wr32(sp0 - 0x204u, sp0 - 0x194u);
                    g->eax = sp0 - 0x144u;
                    g->ecx = sp0 - 0x194u;
                    g->edx = t683;
                    g->esp = sp0 - 0x1fcu;
                    t684 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, sp0 - 0x144u);
                    t685 = g->ecx;
                    t686 = g->edx;
                    g->ecx = t685;
                    g->esp = sp0 - 0x204u;
                    t687 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t688 = g->ecx;
                    wr32(sp0 - 0x208u, t687 + 0x50u);
                    wr32(sp0 - 0x20cu, sp0 - 0x194u);
                    g->ecx = t688;
                    g->edx = sp0 - 0x194u;
                    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x194u, t687 + 0x50u);
                    t689 = g->ecx;
                    t690 = g->edx;
                    wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                    g->eax = sp0 - 0x194u;
                    g->edx = t690;
                    g->esp = sp0 - 0x1f4u;
                    t691 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t692 = g->edx;
                    g->esp = sp0 - 0x1f0u;
                    t693 = cow_thiscall(g, COW_IMG(0x1001e760u), t691, 1, sp0 - 0x194u);
                    t694 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    wr32(sp0 - 0x1b8u, rd32(t694));
                    g->eax = rd32(t694);
                    t695 = rd32(t694);
                    t696 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    t697 = rd32(t696 + 4u);
                    wr32(sp0 - 0x1b4u, t697);
                    g->eax = t697;
                    t698 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    t699 = rd32(t698 + 8u);
                    wr32(sp0 - 0x1b0u, t699);
                    g->eax = t699;
                    fpush(g, x0);
                    t700 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
                    wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                    wr32(sp0 - 0x1f8u, sp0 - 0x108u);
                    t701 = rd32(t700 + 0xcu);
                    wr32(sp0 - 0x1acu, t701);
                    d702 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1b4u) - (double)rdf32(COW_IMG(0x1032961cu)));
                    wrf32(sp0 - 0x1b4u, (float)d702);
                    g->edx = sp0 - 0x108u;
                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x108u, sp0 - 0x1b8u);
                    t703 = g->edx;
                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                    t704 = rd32(sp0 - 0x1d8u) + 0x44u;
                    wr32(sp0 - 0x1f8u, t704);
                    wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                    g->edx = t703;
                    t705 = rd32(COW_IMG(0x10631f24u));
                    t706 = rd32(sp0 - 0x1d8u);
                    t707 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x1c8u, t705, g->edx, 0, 3, sp0 - 0x1b8u, t704, sp0 - 0x1c8u);
                    t708 = g->ecx;
                    t709 = g->edx;
                    if ((uint8_t)t707 == 0u)
                    {
                        edx = t709;
                        ebx = t706;
                    }
                    else
                    {
                        ecx = t708;
                        ebx = t706;
                        edi = t704;
                        wr32(sp0 - 0x1f4u, edi);
                        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x174u);
                        g->eax = sp0 - 0x174u;
                        g->edx = sp0 - 0x1c8u;
                        g->esp = sp0 - 0x1f0u;
                        t710 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x174u, sp0 - 0x1c8u, edi);
                        t711 = g->edx;
                        wr32(sp0 - 0x200u, edi);
                        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                        g->ecx = sp0 - 0x1c8u;
                        g->edx = t711;
                        g->esp = sp0 - 0x1fcu;
                        t712 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x1c8u, edi);
                        t713 = g->ecx;
                        t714 = g->edx;
                        d715 = cow_take_float(g);
                        wrf32(sp0 - 0x1d4u, (float)(double)(float)d715);
                        if ((cow_fsw(g, d715, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d715, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            edx = t714;
                        }
                        else
                        {
                            eax = cow_fsw(g, d715, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            ecx = t713;
                            loc_1d4_f = (double)(float)d715;
                            wr32(sp0 - 0x1f4u, ecx);
                            d716 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_1d4_f);
                            wrf32(sp0 - 0x1f4u, (float)d716);
                            wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                            g->ecx = ecx;
                            g->edx = sp0 - 0x174u;
                            g->esp = sp0 - 0x1f0u;
                            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x174u, cow_f2bits(d716));
                            t717 = g->ecx;
                            t718 = g->edx;
                            d719 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1d4u) + (double)rdf32(COW_IMG(0x1032a39cu)));
                            wrf32(sp0 - 0x1f4u, (float)d719);
                            wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                            g->eax = sp0 - 0x174u;
                            g->edx = t718;
                            t720 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x174u, cow_f2bits(d719));
                            t721 = g->edx;
                            eax = t720;
                            edx = t721;
                        }
                        wr32(sp0 - 0x1f4u, edi);
                        wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                        g->eax = eax;
                        g->esp = sp0 - 0x1f0u;
                        t722 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x174u, edi);
                        wr32(sp0 - 0x1f4u, sp0 - 0x174u);
                        g->edx = sp0 - 0x174u;
                        cow_thiscall(g, COW_IMG(0x1001e760u), ebx, 1, sp0 - 0x174u);
                        t723 = g->edx;
                        edx = t723;
                    }
                    t724 = rd32(sp0 - 0x1d8u);
                    wr32(COW_IMG(0x10456d7cu), 0x41a00000u);
                    edi = t724;
                }
                else
                {
                    ecx = t248;
                    edx = t249;
                    if (rd32(COW_IMG(0x10456d70u)) == 0u)
                    {
                        eax = rd32(COW_IMG(0x10456d70u));
                        if (rd8(COW_IMG(0x10456d84u)) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456d84u));
                            goto L_1001f7de;
                        }
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456d84u));
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t282 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                        t283 = g->ecx;
                        t284 = g->edx;
                        d285 = cow_take_float(g);
                        d286 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3dcu)) - d285) * (double)rdf32(COW_IMG(0x10329ce4u)));
                        wrf32(sp0 - 0x1e0u, (float)d286);
                        if (!((double)rdf32(COW_IMG(0x1032a3f0u)) < d286))
                        {
                            eax = (t282 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), d286, 0u);
                            ecx = t283;
                            edx = t284;
                            loc_1e0_f = d286;
                            goto L_1001f7c7;
                        }
                        eax = (t282 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a3f0u)), d286, 0u);
                        ecx = t283;
                        edx = t284;
                        loc_1e0_f = d286;
                        if (!(loc_1e0_f < (double)rdf32(COW_IMG(0x1032961cu))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1e0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                            goto L_1001f7c7;
                        }
                        wr32(sp0 - 0x1e0u, 0x43af0000u);
                        wr8(COW_IMG(0x10456d84u), 0u);
                        wr32(sp0 - 0x1f4u, 0x43af0000u);
                        eax = 0x43af0000u;
                        loc_1f4 = 0x43af0000u;
L_1001f94f: ;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t360 = cow_cdecl(g, COW_IMG(0x10015290u), 1, loc_1f4);
                        t361 = g->ecx;
                        t362 = g->edx;
                        g->ecx = t361;
                        g->edx = t362;
                        d363 = (double)rdf32(sp0 - 0x1e0u);
                        fpush(g, d363);
                        g->esp = sp0 - 0x1f4u;
                        t364 = cow_call_regs(g, COW_IMG(0x10311c6cu), t360, g->ecx, g->edx, 1, 0);
                        t365 = g->ecx;
                        t366 = g->edx;
                        wr32(sp0 - 0x1f8u, t364);
                        wr32(sp0 - 0x1fcu, 0x49u);
                        t367 = cow_call_regs(g, COW_IMG(0x10193830u), t364, g->ecx, g->edx, 1, 2, 0x49u, t364);
                        eax = t367;
L_1001f968: ;
                        g->eax = eax;
                        g->edx = rd32(arg1);
                        t368 = rd32(arg1);
                        g->esp = sp0 - 0x1f0u;
                        t369 = cow_thiscall(g, rd32(t368 + 0x340u), arg1, 0);
                        t370 = g->ecx;
                        t371 = g->edx;
                        if ((uint8_t)t369 != 0u)
                        {
                            eax = t369;
                            edx = t371;
                        }
                        else
                        {
                            eax = t369;
                            ecx = t370;
                            edx = t371;
                            wr32(sp0 - 0x1f4u, 0x91u);
                            wr8(sp0 - 0x1d9u, 1u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t372 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x91u);
                            t373 = g->ecx;
                            t374 = g->edx;
                            if (t372 == 0u)
                            {
                                eax = t372;
                                ecx = t373;
                                edx = t374;
                            }
                            else
                            {
                                edx = t374;
                                wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                                wr32(sp0 - 0x1f8u, edi + 0x44u);
                                wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                g->ecx = sp0 - 0x1c8u;
                                g->esp = sp0 - 0x1f0u;
                                cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, edi + 0x44u, sp0 - 0x194u);
                                t375 = g->ecx;
                                wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                                wr32(sp0 - 0x1c4u, 0u);
                                g->eax = sp0 - 0x1c8u;
                                g->ecx = t375;
                                g->edx = sp0 - 0x1c8u;
                                g->esp = sp0 - 0x1fcu;
                                t376 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x1c8u, sp0 - 0x1c8u);
                                t377 = g->ecx;
                                t378 = g->edx;
                                d379 = cow_take_float(g);
                                if (!(fr(g, sqrt(d379)) < (double)rdf32(COW_IMG(0x10329d38u))))
                                {
                                    eax = (t376 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d379)), (double)rdf32(COW_IMG(0x10329d38u)), 1u);
                                    ecx = t377;
                                    edx = t378;
                                    x0 = fr(g, sqrt(d379));
                                }
                                else
                                {
                                    eax = (t376 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d379)), (double)rdf32(COW_IMG(0x10329d38u)), 1u);
                                    ecx = t377;
                                    edx = t378;
                                    x0 = fr(g, sqrt(d379));
                                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
                                    {
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
                                    }
                                    else
                                    {
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
                                        wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                        g->ecx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1f0u;
                                        t380 = cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1c8u);
                                        t381 = g->ecx;
                                        wr32(sp0 - 0x1f8u, 0x40466666u);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                        g->edx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1f4u;
                                        cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, 0x40466666u);
                                        t382 = g->edx;
                                        wr32(sp0 - 0x200u, sp0 - 0x194u);
                                        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                                        g->esp = sp0 - 0x1fcu;
                                        cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, sp0 - 0x194u);
                                        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
                                        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                                        g->edx = sp0 - 0x164u;
                                        t383 = rd32(COW_IMG(0x10631f24u));
                                        g->esp = sp0 - 0x1f0u;
                                        t384 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x1c8u, t383, g->edx, 0, 3, sp0 - 0x194u, sp0 - 0x1c8u, sp0 - 0x164u);
                                        t385 = g->ecx;
                                        t386 = g->edx;
                                        if ((uint8_t)t384 == 0u)
                                        {
                                            eax = t384;
                                            ecx = t385;
                                            edx = t386;
                                        }
                                        else
                                        {
                                            eax = t384;
                                            ecx = t385;
                                            edx = t386;
                                            wr8(sp0 - 0x1d9u, 0u);
                                        }
                                    }
                                }
                            }
                            wr32(sp0 - 0x1d8u, 0u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t387 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                            t388 = g->ecx;
                            t389 = g->edx;
                            d390 = cow_take_float(g);
                            g->ecx = t388;
                            g->edx = t389;
                            fpush(g, d390);
                            t391 = cow_call_regs(g, COW_IMG(0x10311c6cu), t387, g->ecx, g->edx, 1, 0);
                            t392 = g->ecx;
                            t393 = g->edx;
                            if ((int32_t)t391 <= 0)
                            {
                                eax = t391;
                                edx = t393;
                            }
                            else
                            {
                                eax = t391;
                                ecx = t392;
                                edx = t393;
L_1001fa4f: ;
                                d394 = fr(g, (double)rdf32(COW_IMG(0x10456d7cu)) - (double)rdf32(COW_IMG(0x1032961cu)));
                                wrf32(COW_IMG(0x10456d7cu), (float)d394);
                                if ((cow_fsw(g, d394, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
                                {
                                    eax = cow_fsw(g, d394, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                                    loc_180 = rd32(sp0 - 0x180u);
                                }
                                else
                                {
                                    wr32(sp0 - 0x1f4u, edi + 0x44u);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                    wr32(COW_IMG(0x10456d7cu), 0u);
                                    g->eax = sp0 - 0x1c8u;
                                    g->edx = sp0 - 0x194u;
                                    g->esp = sp0 - 0x1f0u;
                                    t395 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, sp0 - 0x194u, edi + 0x44u);
                                    t396 = g->edx;
                                    wr32(sp0 - 0x200u, edi + 0x44u);
                                    wr32(sp0 - 0x204u, sp0 - 0x194u);
                                    g->ecx = sp0 - 0x194u;
                                    g->edx = t396;
                                    g->esp = sp0 - 0x1fcu;
                                    t397 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x194u, edi + 0x44u);
                                    t398 = g->ecx;
                                    t399 = g->edx;
                                    d400 = cow_take_float(g);
                                    wrf32(sp0 - 0x1e0u, (float)(double)(float)d400);
                                    wr32(sp0 - 0x208u, 0x91u);
                                    g->ecx = t398;
                                    g->edx = t399;
                                    g->esp = sp0 - 0x204u;
                                    t401 = cow_call_regs(g, COW_IMG(0x10193850u), t397, g->ecx, g->edx, 1, 1, 0x91u);
                                    t402 = g->ecx;
                                    t403 = g->edx;
                                    if (t401 == 0u)
                                    {
                                        eax = t401;
                                        ecx = t402;
                                        edx = t403;
                                        ebp = edi + 0x44u;
                                        loc_180 = rd32(sp0 - 0x180u);
                                    }
                                    else
                                    {
                                        eax = t401;
                                        ecx = t402;
                                        edx = t403;
                                        ebp = edi + 0x44u;
                                        d404 = (double)rdf32(sp0 - 0x1d0u);
                                        if (!(d404 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d404, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1d0u);
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d404, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1d0u);
                                            x0 = -x0;
                                        }
                                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) == 0u)
                                        {
                                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
                                            goto L_1001fb01;
                                        }
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
                                        d405 = (double)rdf32(sp0 - 0x1ccu);
                                        if (!(d405 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d405, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1ccu);
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d405, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = (double)rdf32(sp0 - 0x1ccu);
                                            x0 = -x0;
                                        }
                                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) != 0u) goto L_1001fb25;
                                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
L_1001fb01: ;
                                        g->eax = eax;
                                        g->edx = rd32(arg1);
                                        t406 = rd32(arg1);
                                        g->esp = sp0 - 0x1f0u;
                                        t407 = cow_thiscall(g, rd32(t406 + 0x1bcu), arg1, 0);
                                        t408 = g->ecx;
                                        t409 = g->edx;
                                        wr32(sp0 - 0x1f4u, t407);
                                        wr32(sp0 - 0x1f8u, COW_IMG(0x10456d90u));
                                        g->ecx = t408;
                                        g->edx = t409;
                                        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x10456d90u), t407);
                                        t410 = g->ecx;
                                        t411 = g->edx;
                                        wr32(COW_IMG(0x10456d8cu), 4u);
                                        ecx = t410;
                                        edx = t411;
L_1001fb32: ;
                                        wr32(sp0 - 0x1f4u, COW_IMG(0x10456d90u));
                                        wr32(sp0 - 0x1f8u, sp0 - 0x184u);
                                        g->eax = sp0 - 0x184u;
                                        g->esp = sp0 - 0x1f0u;
                                        t412 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x184u, COW_IMG(0x10456d90u));
                                        g->edx = rd32(arg1);
                                        t413 = rd32(arg1);
                                        t414 = cow_thiscall(g, rd32(t413 + 0x1bcu), arg1, 0);
                                        t415 = g->ecx;
                                        t416 = g->edx;
                                        wr32(sp0 - 0x1f4u, t414);
                                        wr32(sp0 - 0x1f8u, sp0 - 0x144u);
                                        g->eax = sp0 - 0x144u;
                                        t417 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x144u, t414);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                                        wr32(sp0 - 0x200u, sp0 - 0x184u);
                                        wr32(sp0 - 0x180u, 0u);
                                        wr32(sp0 - 0x140u, 0u);
                                        g->ecx = sp0 - 0x144u;
                                        g->edx = sp0 - 0x184u;
                                        g->esp = sp0 - 0x1f8u;
                                        t418 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x184u, sp0 - 0x144u);
                                        t419 = g->ecx;
                                        t420 = g->edx;
                                        d421 = cow_take_float(g);
                                        if ((cow_fsw(g, d421, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u) != 0u)
                                        {
                                            ecx = t419;
                                            edx = t420;
                                            goto L_1001fbaf;
                                        }
                                        ecx = t419;
                                        edx = t420;
                                        t422 = rd32(COW_IMG(0x10456d8cu)) - 1u;
                                        t423 = rd32(COW_IMG(0x10456d8cu));
                                        wr32(COW_IMG(0x10456d8cu), t422);
                                        if ((int32_t)(t423 - 1u) >= 0) goto L_1001fbaf;
                                        eax = t422;
                                        wr32(COW_IMG(0x10456d8cu), 0u);
                                        loc_180 = 0u;
L_1001fbbc: ;
                                        d424 = (double)(float)-(double)rdf32(sp0 - 0x1e0u);
                                        wrf32(sp0 - 0x1a4u, (float)d424);
                                        wr32(sp0 - 0x1a0u, 0u);
                                        wr32(sp0 - 0x19cu, 0u);
                                        g->eax = eax;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x1f0u;
                                        t425 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xfcu, 0);
                                        t426 = g->edx;
                                        g->edx = t426;
                                        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xfcu, 0);
                                        t427 = g->edx;
                                        g->eax = rd32(arg1);
                                        g->edx = t427;
                                        t428 = rd32(arg1);
                                        t429 = cow_thiscall(g, rd32(t428 + 0x1c0u), arg1, 0);
                                        t430 = g->edx;
                                        t431 = rd32(t429 + 4u);
                                        wr32(sp0 - 0x1f4u, t431);
                                        t432 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xfcu, 1, t431);
                                        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
                                        g->edx = sp0 - 0x1a4u;
                                        cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x1a4u);
                                        t433 = g->edx;
                                        wr32(sp0 - 0x1f4u, sp0 - 0x1a4u);
                                        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                                        g->eax = sp0 - 0x1a4u;
                                        g->ecx = sp0 - 0x1b8u;
                                        t434 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1b8u, sp0 - 0x1a4u);
                                        t435 = g->ecx;
                                        wr32(sp0 - 0x170u, 0u);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x1b8u);
                                        d436 = (double)(float)fr(g, (double)rdf32(ebp) - (double)rdf32(sp0 - 0x194u));
                                        wrf32(sp0 - 0x174u, (float)d436);
                                        d437 = (double)(float)fr(g, (double)rdf32(ebp + 8u) - (double)rdf32(sp0 - 0x18cu));
                                        wrf32(sp0 - 0x16cu, (float)d437);
                                        g->ecx = t435;
                                        g->edx = sp0 - 0x1b8u;
                                        g->esp = sp0 - 0x1f8u;
                                        cow_call_regs(g, COW_IMG(0x100274b0u), t434, g->ecx, g->edx, 1, 1, sp0 - 0x1b8u);
                                        t438 = g->ecx;
                                        t439 = g->edx;
                                        wr32(sp0 - 0x200u, sp0 - 0x174u);
                                        g->esp = sp0 - 0x1fcu;
                                        t440 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x174u, g->ecx, g->edx, 1, 1, sp0 - 0x174u);
                                        wr32(sp0 - 0x204u, sp0 - 0x174u);
                                        wr32(sp0 - 0x208u, sp0 - 0x1b8u);
                                        g->edx = sp0 - 0x1b8u;
                                        g->esp = sp0 - 0x200u;
                                        t441 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x1b8u, sp0 - 0x174u);
                                        t442 = g->edx;
                                        d443 = cow_take_float(g);
                                        if ((cow_fsw(g, d443, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x4100u) != 0u)
                                        {
                                            eax = cow_fsw(g, d443, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x4100u;
                                            edx = t442;
                                            x0 = d443;
                                        }
                                        else
                                        {
                                            eax = cow_fsw(g, d443, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x4100u;
                                            edx = t442;
                                            x0 = d443;
                                            if (!(x0 < (double)rdf32(COW_IMG(0x1032a3ccu))))
                                            {
                                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u);
                                            }
                                            else
                                            {
                                                wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                                                wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
                                                g->eax = sp0 - 0x194u;
                                                g->ecx = sp0 - 0x1a4u;
                                                g->esp = sp0 - 0x1f0u;
                                                t444 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1a4u, sp0 - 0x194u);
                                                t445 = g->ecx;
                                                wr32(sp0 - 0x1fcu, ebp);
                                                wr32(sp0 - 0x200u, sp0 - 0x1a4u);
                                                g->edx = sp0 - 0x1a4u;
                                                g->esp = sp0 - 0x1f8u;
                                                cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x1a4u, ebp);
                                                t446 = g->edx;
                                                d447 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(COW_IMG(0x1035121cu)) * (double)rdf32(COW_IMG(0x10329a18u))) * (double)rdf32(COW_IMG(0x1032a3e0u)));
                                                wrf32(sp0 - 0x1f4u, (float)d447);
                                                wr32(sp0 - 0x1f8u, sp0 - 0x1a4u);
                                                wr32(sp0 - 0x1fcu, sp0 - 0x1a4u);
                                                g->eax = sp0 - 0x1a4u;
                                                g->edx = t446;
                                                g->esp = sp0 - 0x1f0u;
                                                t448 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x1a4u, sp0 - 0x1a4u, cow_f2bits(d447));
                                                t449 = g->edx;
                                                d450 = fr(g, (double)rdf32(sp0 - 0x1a4u) + (double)rdf32(ebp));
                                                wrf32(ebp, (float)d450);
                                                d451 = fr(g, cow_bits2f(0u) + (double)rdf32(ebp + 8u));
                                                wrf32(ebp + 8u, (float)d451);
                                                eax = t448;
                                                edx = t449;
                                            }
                                        }
                                        g->eax = eax;
                                        g->ecx = sp0 - 0xfcu;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x1f0u;
                                        t452 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                                        t453 = g->ecx;
                                        t454 = g->edx;
                                        eax = t452;
                                        ecx = t453;
                                        edx = t454;
                                        loc_180 = rd32(sp0 - 0x180u);
                                    }
L_1001fcff: ;
                                    d455 = (double)rdf32(sp0 - 0x1e0u);
                                    if ((cow_fsw(g, d455, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u) != 0u)
                                    {
                                        eax = cow_fsw(g, d455, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u;
                                        goto L_1001fd2e;
                                    }
                                    eax = cow_fsw(g, d455, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u;
                                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                    g->ecx = ecx;
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1c8u);
                                    t456 = g->ecx;
                                    t457 = g->edx;
                                    ecx = t456;
                                    edx = t457;
                                    loc_180 = rd32(sp0 - 0x180u);
                                    x0 = fr(g, fr(g, (double)rdf32(sp0 - 0x1e0u) - (double)rdf32(COW_IMG(0x1032a3c8u))) * (double)rdf32(COW_IMG(0x10329a08u)));
L_1001fd52: ;
                                    wrf32(sp0 - 0x1f4u, (float)(double)(float)x0);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                    g->eax = sp0 - 0x1c8u;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x1f0u;
                                    t459 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits((double)(float)x0));
                                    t460 = g->edx;
                                    wr32(sp0 - 0x1fcu, ebp);
                                    wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                    g->esp = sp0 - 0x1f8u;
                                    t461 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, ebp);
                                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    t462 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                    t463 = g->ecx;
                                    t464 = g->edx;
                                    eax = t462;
                                    ecx = t463;
                                    edx = t464;
                                    loc_180 = rd32(sp0 - 0x180u);
L_1001fd79: ;
                                    if (rd8(sp0 - 0x1d9u) == 0u)
                                    {
                                        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
                                    }
                                    else
                                    {
                                        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1d9u);
                                        d465 = (double)rdf32(sp0 - 0x1e0u);
                                        if (d465 < (double)rdf32(COW_IMG(0x10329d38u)))
                                        {
                                            wr32(sp0 - 0x1f4u, ecx);
                                            d466 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x10329d38u)) - (double)rdf32(sp0 - 0x1e0u)) * (double)rdf32(COW_IMG(0x1032a3c0u)));
                                            wrf32(sp0 - 0x1f4u, (float)d466);
                                            wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                            g->eax = sp0 - 0x1c8u;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x1f0u;
                                            t467 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits(d466));
                                            t468 = g->edx;
                                            wr32(sp0 - 0x1fcu, ebp);
                                            wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                            g->esp = sp0 - 0x1f8u;
                                            t469 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, ebp);
                                            wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                            g->edx = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f0u;
                                            cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                            t470 = g->edx;
                                            wr32(COW_IMG(0x10456d74u), 0xau);
                                            edx = t470;
                                            loc_180 = rd32(sp0 - 0x180u);
                                        }
                                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                                        wr32(sp0 - 0x1f8u, ebp);
                                        wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                        g->ecx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1f0u;
                                        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, ebp, sp0 - 0x194u);
                                        t471 = g->ecx;
                                        wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                        wr32(sp0 - 0x204u, sp0 - 0x1c8u);
                                        wr32(sp0 - 0x1c4u, 0u);
                                        g->eax = sp0 - 0x1c8u;
                                        g->ecx = t471;
                                        g->edx = sp0 - 0x1c8u;
                                        g->esp = sp0 - 0x1fcu;
                                        t472 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x1c8u, sp0 - 0x1c8u);
                                        t473 = g->ecx;
                                        t474 = g->edx;
                                        d475 = cow_take_float(g);
                                        d476 = (double)(float)fr(g, sqrt(d475));
                                        wrf32(sp0 - 0x1e0u, (float)d476);
                                        if (!(fr(g, sqrt(d475)) < (double)rdf32(COW_IMG(0x10329d38u))))
                                        {
                                            eax = (t472 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d475)), (double)rdf32(COW_IMG(0x10329d38u)), 0u);
                                            ecx = t473;
                                            edx = t474;
                                            loc_180 = rd32(sp0 - 0x180u);
                                        }
                                        else
                                        {
                                            eax = (t472 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d475)), (double)rdf32(COW_IMG(0x10329d38u)), 0u);
                                            edx = t474;
                                            loc_1e0_f = d476;
                                            wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                            g->ecx = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f0u;
                                            cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x1c8u);
                                            t477 = g->ecx;
                                            wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                            wr32(sp0 - 0x1fcu, ebp);
                                            wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                            d478 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x1c8u) * fr(g, (double)rdf32(COW_IMG(0x10329d38u)) - (double)rdf32(sp0 - 0x1e0u))) * (double)rdf32(COW_IMG(0x1032a3bcu)));
                                            wrf32(sp0 - 0x1c8u, (float)d478);
                                            d479 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x1c0u) * fr(g, (double)rdf32(COW_IMG(0x10329d38u)) - (double)rdf32(sp0 - 0x1e0u))) * (double)rdf32(COW_IMG(0x1032a3bcu)));
                                            wrf32(sp0 - 0x1c0u, (float)d479);
                                            g->eax = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f4u;
                                            t480 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x1c8u, ebp, sp0 - 0x1c8u);
                                            t481 = rd32(edi + 0x48u);
                                            wr32(sp0 - 0x1c4u, t481);
                                            wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                            g->edx = sp0 - 0x1c8u;
                                            g->esp = sp0 - 0x1f0u;
                                            t482 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                            t483 = g->ecx;
                                            t484 = g->edx;
                                            wr32(COW_IMG(0x10456d74u), 0xau);
                                            eax = t482;
                                            ecx = t483;
                                            edx = t484;
                                            loc_180 = rd32(sp0 - 0x180u);
                                        }
                                    }
                                }
                                t485 = rd32(sp0 - 0x1d8u) + 1u;
                                wr32(sp0 - 0x1d8u, t485);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t486 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                                t487 = g->ecx;
                                t488 = g->edx;
                                d489 = cow_take_float(g);
                                g->ecx = t487;
                                g->edx = t488;
                                fpush(g, d489);
                                t490 = cow_call_regs(g, COW_IMG(0x10311c6cu), t486, g->ecx, g->edx, 1, 0);
                                t491 = g->ecx;
                                t492 = g->edx;
                                if ((int32_t)t485 < (int32_t)t490)
                                {
                                    eax = t490;
                                    ecx = t491;
                                    edx = t492;
                                    goto L_1001fa4f;
                                }
                                eax = t490;
                                edx = t492;
                            }
                        }
                        if (rd32(COW_IMG(0x10456d74u)) == 0u)
                        {
                            if ((double)rdf32(COW_IMG(0x10456d7cu)) <= (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
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
                                    x0 = -x0;
                                }
                                if (x0 < (double)rdf32(COW_IMG(0x10456d78u)))
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10456d78u)), 1u);
                                    d494 = (double)rdf32(edi + 0x48u);
                                    d495 = (double)rdf32(edi + 0x54u);
                                    if (d494 < d495)
                                    {
                                        d496 = fr(g, (double)rdf32(edi + 0x48u) - fr(g, (double)rdf32(COW_IMG(0x10456d78u)) - x0));
                                        wrf32(edi + 0x48u, (float)d496);
                                    }
                                }
                            }
                        }
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
                        g->eax = sp0 - 0x194u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t497 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x108u, sp0 - 0x194u);
                        t498 = g->edx;
                        if (!((double)rdf32(COW_IMG(0x10456d7cu)) <= (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (t497 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            edx = t498;
                            goto L_1001ff32;
                        }
                        wr32(sp0 - 0x1f4u, sp0 - 0x164u);
                        wr32(sp0 - 0x1f8u, edi + 0x44u);
                        wr32(sp0 - 0x1fcu, sp0 - 0x194u);
                        g->edx = sp0 - 0x164u;
                        t499 = rd32(COW_IMG(0x10631f24u));
                        g->esp = sp0 - 0x1f0u;
                        t500 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x194u, t499, g->edx, 0, 3, sp0 - 0x194u, edi + 0x44u, sp0 - 0x164u);
                        t501 = g->ecx;
                        t502 = g->edx;
                        if ((uint8_t)t500 != 0u)
                        {
                            ecx = t501;
                            edx = t502;
                            ebp = edi + 0x44u;
                            goto L_1001ff49;
                        }
                        eax = t500;
                        edx = t502;
L_1001ff32: ;
                        wr32(sp0 - 0x1f4u, 1u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x194u);
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        cow_thiscall(g, COW_IMG(0x1001e320u), edi + 0xbcu, 2, sp0 - 0x194u, 1u);
                        t518 = g->ecx;
                        t519 = g->edx;
                        ecx = t518;
                        edx = t519;
                        ebx = 0u;
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x10456d70u));
                        wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                        wr32(sp0 - 0x1f8u, sp0 - 0x108u);
                        g->ecx = sp0 - 0x194u;
                        g->edx = sp0 - 0x108u;
                        g->esp = sp0 - 0x1f0u;
                        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x108u, sp0 - 0x194u);
                        t250 = g->ecx;
                        t251 = g->edx;
                        if (rd32(COW_IMG(0x10456d74u)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x10456d74u));
                            ecx = t250;
                            edx = t251;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x10456d74u));
                            ecx = t250;
                            edx = t251;
                            wr8(edi + 0xf0u, 0u);
                        }
                        if ((int8_t)rd8(edi + 0xf0u) >= 4)
                        {
                            wr32(sp0 - 0x1d8u, 0u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            t252 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                            t253 = g->ecx;
                            t254 = g->edx;
                            d255 = cow_take_float(g);
                            g->edx = t254;
                            fpush(g, d255);
                            t256 = cow_call_regs(g, COW_IMG(0x10311c6cu), t252, g->ecx, g->edx, 1, 0);
                            t257 = g->edx;
                            if ((int32_t)t256 <= 0)
                            {
                                edx = t257;
                                ebx = 0u;
                            }
                            else
                            {
                                edx = t257;
                                ebx = edi + 0xbcu;
L_1001f683: ;
                                wr32(sp0 - 0x1f4u, sp0 - 0x174u);
                                g->eax = sp0 - 0x174u;
                                g->esp = sp0 - 0x1f0u;
                                t258 = cow_thiscall(g, COW_IMG(0x1001e3b0u), ebx, 1, sp0 - 0x174u);
                                wr32(sp0 - 0x1f4u, edi + 0x44u);
                                wr32(sp0 - 0x1f8u, sp0 - 0x174u);
                                wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                g->ecx = sp0 - 0x174u;
                                g->edx = sp0 - 0x1c8u;
                                cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, sp0 - 0x174u, edi + 0x44u);
                                t259 = g->ecx;
                                t260 = g->edx;
                                wr32(sp0 - 0x200u, edi + 0x44u);
                                wr32(sp0 - 0x204u, sp0 - 0x174u);
                                g->eax = sp0 - 0x174u;
                                g->ecx = t259;
                                g->edx = t260;
                                g->esp = sp0 - 0x1fcu;
                                t261 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x174u, edi + 0x44u);
                                t262 = g->ecx;
                                t263 = g->edx;
                                d264 = cow_take_float(g);
                                if ((cow_fsw(g, d264, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u) != 0u)
                                {
                                    eax = cow_fsw(g, d264, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u;
                                    ecx = t262;
                                    edx = t263;
                                    wr8(edi + 0xf0u, 0u);
                                    wr32(COW_IMG(0x10456d70u), 0u);
                                }
                                else
                                {
                                    eax = cow_fsw(g, d264, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u;
                                    ebp = edi + 0x44u;
                                    wr32(sp0 - 0x1f4u, 0x3d4ccccdu);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x1c8u, sp0 - 0x1c8u, 0x3d4ccccdu);
                                    t265 = g->edx;
                                    wr32(sp0 - 0x200u, sp0 - 0x1c8u);
                                    wr32(sp0 - 0x204u, ebp);
                                    wr32(sp0 - 0x208u, sp0 - 0x1c8u);
                                    g->eax = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1fcu;
                                    t266 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x1c8u, ebp, sp0 - 0x1c8u);
                                    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
                                    g->edx = sp0 - 0x1c8u;
                                    g->esp = sp0 - 0x1f0u;
                                    t267 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
                                    t268 = g->ecx;
                                    t269 = g->edx;
                                    eax = t267;
                                    ecx = t268;
                                    edx = t269;
                                }
                                t270 = rd32(sp0 - 0x1d8u) + 1u;
                                wr32(sp0 - 0x1d8u, t270);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t271 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                                t272 = g->ecx;
                                t273 = g->edx;
                                d274 = cow_take_float(g);
                                g->edx = t273;
                                fpush(g, d274);
                                t275 = cow_call_regs(g, COW_IMG(0x10311c6cu), t271, g->ecx, g->edx, 1, 0);
                                t276 = g->edx;
                                if ((int32_t)t270 < (int32_t)t275)
                                {
                                    edx = t276;
                                    goto L_1001f683;
                                }
                                edx = t276;
                            }
                            wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                            g->eax = sp0 - 0x1b8u;
                            g->esp = sp0 - 0x1f0u;
                            t277 = cow_thiscall(g, COW_IMG(0x1001e3b0u), edi + 0xbcu, 1, sp0 - 0x1b8u);
                            wr32(sp0 - 0x1f4u, sp0 - 0x194u);
                            wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                            g->ecx = sp0 - 0x194u;
                            g->edx = sp0 - 0x1b8u;
                            t278 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x1b8u, sp0 - 0x194u);
                            t279 = g->ecx;
                            t280 = g->edx;
                            d281 = cow_take_float(g);
                            if ((cow_fsw(g, d281, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u) != 0u)
                            {
                                ecx = t279;
                                edx = t280;
                            }
                            else
                            {
                                ecx = t279;
                                edx = t280;
                                wr8(edi + 0xf0u, 0u);
                                wr32(COW_IMG(0x10456d70u), 0u);
                            }
                        }
                        else
                        {
                            wr8(edi + 0xf0u, 0u);
                            wr32(COW_IMG(0x10456d70u), 0u);
                            ebx = 0u;
                        }
                    }
L_1001fffa: ;
                    if ((int32_t)rd32(COW_IMG(0x10456d88u)) <= 0)
                    {
                        eax = rd32(COW_IMG(0x10456d88u));
                        wr32(sp0 - 0x1f4u, 0xffffffffu);
                        wr32(sp0 - 0x1f8u, 4u);
                        wr32(sp0 - 0x1fcu, 0x51u);
                        wr32(sp0 - 0x200u, 0x3fu);
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1e4u;
                        t560 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x51u, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
                        t561 = g->edx;
                        if ((uint8_t)t560 == 0u)
                        {
                            edx = t561;
                        }
                        else
                        {
                            edx = t561;
                            wr32(COW_IMG(0x10456d88u), 8u);
                        }
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x10456d88u));
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1f0u;
                        t520 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xfcu, 0);
                        t521 = g->edx;
                        g->edx = t521;
                        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xfcu, 0);
                        t522 = g->edx;
                        g->eax = rd32(arg1);
                        g->edx = t522;
                        t523 = rd32(arg1);
                        t524 = cow_thiscall(g, rd32(t523 + 0x1c0u), arg1, 0);
                        t525 = g->edx;
                        t526 = rd32(t524 + 4u);
                        wr32(sp0 - 0x1f4u, t526);
                        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xfcu, 1, t526);
                        wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                        wr32(sp0 - 0x1f8u, 2u);
                        g->eax = sp0 - 0x184u;
                        t527 = cow_thiscall(g, rd32(rd32(arg1) + 0x1c8u), arg1, 2, 2u, sp0 - 0x184u);
                        t528 = rd32(sp0 - 0x180u);
                        wr32(sp0 - 0x1b4u, t528);
                        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                        wr32(sp0 - 0x1b8u, 0xc0400000u);
                        wr32(sp0 - 0x1b0u, 0u);
                        wr32(sp0 - 0x1acu, 0x3f800000u);
                        g->edx = sp0 - 0x1b8u;
                        cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x1b8u);
                        t529 = g->edx;
                        g->eax = rd32(arg1);
                        g->edx = t529;
                        t530 = rd32(arg1);
                        t531 = cow_thiscall(g, rd32(t530 + 0x1bcu), arg1, 0);
                        t532 = g->edx;
                        wr32(sp0 - 0x1f4u, t531);
                        wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                        g->ecx = sp0 - 0x1b8u;
                        cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1b8u, t531);
                        t533 = g->ecx;
                        wr32(sp0 - 0x1fcu, edi + 0x44u);
                        wr32(sp0 - 0x200u, sp0 - 0x184u);
                        g->eax = edi + 0x44u;
                        g->edx = sp0 - 0x184u;
                        g->esp = sp0 - 0x1f8u;
                        t534 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x184u, edi + 0x44u);
                        t535 = g->edx;
                        g->edx = t535;
                        g->esp = sp0 - 0x1f0u;
                        cow_stdcall(g, COW_IMG(0x1001e4d0u), 0);
                        t536 = g->edx;
                        d537 = cow_take_float(g);
                        d538 = (double)(float)fr(g, d537 - (double)rdf32(COW_IMG(0x1032a3b8u)));
                        wrf32(sp0 - 0x1a8u, (float)d538);
                        g->eax = rd32(arg1);
                        g->edx = t536;
                        t539 = rd32(arg1);
                        t540 = cow_thiscall(g, rd32(t539 + 0x1c0u), arg1, 0);
                        t541 = g->edx;
                        d542 = fr(g, (double)rdf32(sp0 - 0x1a8u) - (double)rdf32(t540 + 4u));
                        if (!(d542 < (double)rdf32(COW_IMG(0x1032a3b4u))))
                        {
                            eax = (t540 & 0xffff0000u) | (uint16_t)cow_fsw(g, d542, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
                            ecx = 0u;
                            edx = t541;
                            x0 = d542;
                            goto L_100200eb;
                        }
                        eax = (t540 & 0xffff0000u) | (uint16_t)cow_fsw(g, d542, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
                        ecx = 0u;
                        edx = t541;
                        x0 = d542;
L_100200d2: ;
                        if ((int32_t)ecx >= 100) goto L_100200eb;
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
                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u;
                            goto L_10020115;
                        }
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x100u;
L_100200fa: ;
                        if ((int32_t)ecx >= 100) goto L_10020115;
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
                        if (!(fabs(x0) < (double)rdf32(COW_IMG(0x1032a3e0u))))
                        {
                            if (rd32(COW_IMG(0x10456d88u)) == 0u)
                            {
                                eax = rd32(COW_IMG(0x10456d88u));
                                loc_1b8 = 0xc0400000u;
                                loc_1b0 = 0u;
                            }
                            else
                            {
                                eax = rd32(COW_IMG(0x10456d88u));
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t546 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                                t547 = g->ecx;
                                t548 = g->edx;
                                d549 = cow_take_float(g);
                                g->edx = t548;
                                fpush(g, d549);
                                t550 = cow_call_regs(g, COW_IMG(0x10311c6cu), t546, g->ecx, g->edx, 1, 0);
                                t551 = g->edx;
                                if ((int32_t)t550 <= 0)
                                {
                                    eax = t550;
                                    edx = t551;
                                }
                                else
                                {
                                    eax = t550;
                                    ebp = eax;
L_10020158: ;
                                    wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                                    wr32(sp0 - 0x1f8u, sp0 - 0x1b8u);
                                    wr32(sp0 - 0x1fcu, sp0 - 0x144u);
                                    g->eax = sp0 - 0x144u;
                                    g->edx = sp0 - 0x1b8u;
                                    g->esp = sp0 - 0x1f0u;
                                    t552 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x144u, sp0 - 0x1b8u, sp0 - 0x184u);
                                    t553 = g->edx;
                                    wr32(sp0 - 0x200u, 0x3e000000u);
                                    wr32(sp0 - 0x204u, sp0 - 0x144u);
                                    g->ecx = sp0 - 0x144u;
                                    g->esp = sp0 - 0x1fcu;
                                    cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x144u, 0x3e000000u);
                                    t554 = g->ecx;
                                    wr32(sp0 - 0x208u, sp0 - 0x144u);
                                    wr32(sp0 - 0x20cu, sp0 - 0x184u);
                                    g->eax = sp0 - 0x184u;
                                    g->edx = sp0 - 0x144u;
                                    g->esp = sp0 - 0x204u;
                                    t555 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x184u, sp0 - 0x144u);
                                    t556 = g->edx;
                                    if (ebp != 1u)
                                    {
                                        ebp = ebp - 1u;
                                        goto L_10020158;
                                    }
                                    eax = t555;
                                    edx = t556;
                                }
                                wr32(sp0 - 0x1f4u, sp0 - 0x184u);
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x1f0u;
                                t557 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x184u);
                                t558 = g->edx;
                                wr32(COW_IMG(0x10456d88u), rd32(COW_IMG(0x10456d88u)) - 1u);
                                eax = t557;
                                edx = t558;
                                loc_1b8 = rd32(sp0 - 0x1b8u);
                                loc_1b0 = rd32(sp0 - 0x1b0u);
                            }
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                            t559 = g->edx;
                            edx = t559;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs(x0), (double)rdf32(COW_IMG(0x1032a3e0u)), 0u);
                            wr32(COW_IMG(0x10456d88u), 0u);
                            g->edx = edx;
                            g->esp = sp0 - 0x1f0u;
                            cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                            t545 = g->edx;
                            edx = t545;
                        }
                    }
                }
                t725 = rd32(sp0 - 0x118u);
                wr32(sp0 - 0x1f4u, t725);
                g->eax = rd32(arg1);
                t726 = rd32(arg1);
                g->esp = sp0 - 0x1f0u;
                t727 = cow_thiscall(g, rd32(t726 + 0x334u), arg1, 1, t725);
                t728 = g->ecx;
                wr32(sp0 - 0x1f4u, edi + 0x44u);
                wr32(sp0 - 0x1f8u, sp0 - 0x114u);
                g->ecx = t728;
                t729 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x114u, edi + 0x44u);
                t730 = g->ecx;
                d731 = cow_take_float(g);
                if ((cow_fsw(g, d731, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) == 0u)
                {
                    ebp = rd32(sp0 - 0x1f0u);
                    esi = edi + 0x44u;
                    goto L_100207b6;
                }
                ecx = t730;
                ebp = rd32(sp0 - 0x1f0u);
                esi = edi + 0x44u;
                if ((int32_t)rd32(COW_IMG(0x10456d80u)) <= 0)
                {
                    eax = rd32(COW_IMG(0x10456d80u));
                    goto L_10020a67;
                }
L_100207b6: ;
                wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
                wr32(sp0 - 0x1f4u, 0x41200000u);
                t732 = rd32(edi + 0x4cu);
                wr32(sp0 - 0x1f8u, t732);
                t733 = rd32(edi + 0x48u);
                wr32(sp0 - 0x1fcu, t733);
                wr32(sp0 - 0x200u, rd32(esi));
                g->eax = rd32(esi);
                g->edx = t733;
                t734 = rd32(esi);
                g->esp = sp0 - 0x1ecu;
                t735 = cow_thiscall(g, COW_IMG(0x10181210u), rd32(COW_IMG(0x10631f24u)), 5, t734, t733, t732, 0x41200000u, sp0 - 0x1d8u);
                t736 = g->edx;
                if ((uint8_t)t735 != 1u) goto L_100207fd;
                eax = t735;
                edx = t736;
                d737 = fr(g, (double)rdf32(sp0 - 0x1d8u) - (double)rdf32(COW_IMG(0x1032a398u)));
                d738 = (double)rdf32(edi + 0x48u);
                if (!(d737 < d738))
                {
                    x0 = d737;
                    goto L_100207fb;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d737, d738, 1u);
                x0 = d737;
                wrf32(edi + 0x48u, (float)x0);
                wr32(sp0 - 0x1f0u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t739 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, esi);
                t740 = g->edx;
                eax = t739;
                edx = t740;
L_10020846: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t749 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xfcu, 0);
                t750 = g->edx;
                g->edx = t750;
                t751 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x9cu, 0);
                t752 = g->edx;
                g->edx = t752;
                t753 = cow_thiscall(g, COW_IMG(0x10021c10u), edi, 0);
                t754 = g->edx;
                wr32(sp0 - 0x1f0u, t753);
                t755 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0xfcu, 1, t753);
                wr32(sp0 - 0x1f0u, sp0 - 0xfcu);
                wr32(sp0 - 0x134u, 0xbe2e147bu);
                wr32(sp0 - 0x130u, 0u);
                wr32(sp0 - 0x12cu, 0u);
                wr32(sp0 - 0x128u, 0x3e2e147bu);
                wr32(sp0 - 0x124u, 0u);
                wr32(sp0 - 0x120u, 0u);
                g->edx = sp0 - 0xfcu;
                t756 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x9cu, 1, sp0 - 0xfcu);
                t757 = g->edx;
                g->edx = t757;
                cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x9cu, 0);
                t758 = g->edx;
                wr32(sp0 - 0x1f0u, sp0 - 0x134u);
                g->eax = sp0 - 0x134u;
                g->edx = t758;
                t759 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x134u);
                t760 = g->edx;
                wr32(sp0 - 0x1f0u, sp0 - 0x128u);
                cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x128u);
                wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                wr32(sp0 - 0x1f4u, sp0 - 0x134u);
                wr32(sp0 - 0x1f8u, sp0 - 0x128u);
                t761 = rd32(COW_IMG(0x10631f24u));
                wr8(sp0 - 0x1d9u, 0u);
                t762 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x134u, t761, g->edx, 0, 3, sp0 - 0x128u, sp0 - 0x134u, sp0 - 0x1b8u);
                if ((uint8_t)t762 == 0u)
                {
                    ebx = ebx & 0xffffff00u;
                }
                else
                {
                    ebx = ebx & 0xffffff00u;
                    wr8(sp0 - 0x1d9u, 1u);
                }
                wr32(sp0 - 0x1f0u, sp0 - 0x184u);
                wr32(sp0 - 0x1f4u, sp0 - 0x128u);
                wr32(sp0 - 0x1f8u, sp0 - 0x134u);
                g->edx = sp0 - 0x184u;
                g->esp = sp0 - 0x1ecu;
                t763 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x128u, rd32(COW_IMG(0x10631f24u)), g->edx, 0, 3, sp0 - 0x134u, sp0 - 0x128u, sp0 - 0x184u);
                t764 = g->edx;
                if ((uint8_t)t763 == 0u)
                {
                    eax = t763;
                    edx = t764;
                }
                else
                {
                    eax = t763;
                    edx = t764;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
                if (rd8(sp0 - 0x1d9u) != 1u) goto L_100209eb;
                if ((uint8_t)ebx != 1u) goto L_10020993;
                d765 = (double)rdf32(sp0 - 0x1b8u);
                d766 = (double)rdf32(sp0 - 0x184u);
                if (d765 != d766)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d765, d766, 0u);
                    goto L_10020993;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d765, d766, 0u);
                d767 = (double)rdf32(sp0 - 0x1b4u);
                d768 = (double)rdf32(sp0 - 0x180u);
                if (d767 != d768)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d767, d768, 0u);
                    goto L_10020993;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d767, d768, 0u);
                d769 = (double)rdf32(sp0 - 0x1b0u);
                d770 = (double)rdf32(sp0 - 0x17cu);
                if (d769 == d770)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d769, d770, 0u);
                    goto L_10020a48;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d769, d770, 0u);
L_10020993: ;
                wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                wr32(sp0 - 0x1a4u, 0u);
                wr32(sp0 - 0x1a0u, 0u);
                wr32(sp0 - 0x19cu, 0u);
                g->edx = sp0 - 0x1b8u;
                g->esp = sp0 - 0x1ecu;
                cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x1b8u);
                t771 = g->edx;
                wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                d772 = (double)(float)fr(g, fr(g, cow_bits2f(0u) + (double)rdf32(sp0 - 0x1b8u)) + (double)rdf32(COW_IMG(0x1032a398u)));
                wrf32(sp0 - 0x1a4u, (float)d772);
                g->eax = sp0 - 0x1a4u;
                g->edx = t771;
                t773 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x1a4u);
                t774 = g->edx;
                wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                g->edx = t774;
                t775 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1a4u);
                t776 = g->edx;
                eax = t775;
                edx = t776;
L_100209eb: ;
                if ((uint8_t)ebx == 1u)
                {
                    wr32(sp0 - 0x1f0u, sp0 - 0x184u);
                    wr32(sp0 - 0x1a4u, 0u);
                    wr32(sp0 - 0x1a0u, 0u);
                    wr32(sp0 - 0x19cu, 0u);
                    g->edx = sp0 - 0x184u;
                    g->esp = sp0 - 0x1ecu;
                    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0xfcu, 1, sp0 - 0x184u);
                    t777 = g->edx;
                    wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                    d778 = (double)(float)fr(g, cow_bits2f(0u) - fr(g, (double)rdf32(COW_IMG(0x1032a398u)) - (double)rdf32(sp0 - 0x184u)));
                    wrf32(sp0 - 0x1a4u, (float)d778);
                    g->eax = sp0 - 0x1a4u;
                    g->edx = t777;
                    t779 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x9cu, 1, sp0 - 0x1a4u);
                    t780 = g->edx;
                    wr32(sp0 - 0x1f0u, sp0 - 0x1a4u);
                    g->edx = t780;
                    t781 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1a4u);
                    t782 = g->edx;
                    eax = t781;
                    edx = t782;
                }
L_10020a48: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1ecu;
                t783 = cow_thiscall(g, COW_IMG(0x10021c10u), edi, 0);
                t784 = g->edx;
                g->edx = t784;
                t785 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                t786 = g->edx;
                g->ecx = sp0 - 0xfcu;
                t787 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                t788 = g->ecx;
                eax = t787;
                ecx = t788;
L_10020a67: ;
                if (!((double)rdf32(COW_IMG(0x10456d7cu)) <= (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10456d7cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    ebx = rd32(sp0 - 0x1ecu);
                }
                else
                {
                    ebx = rd32(sp0 - 0x1ecu);
                    wr32(sp0 - 0x1ecu, sp0 - 0xbcu);
                    wr32(sp0 - 0x1f0u, esi);
                    wr32(sp0 - 0x1f4u, sp0 - 0x108u);
                    t789 = rd32(COW_IMG(0x10631f24u));
                    g->esp = sp0 - 0x1e8u;
                    t790 = cow_call_regs(g, COW_IMG(0x101815b0u), sp0 - 0x108u, t789, g->edx, 0, 3, sp0 - 0x108u, esi, sp0 - 0xbcu);
                    t791 = g->ecx;
                    if ((uint8_t)t790 == 0u)
                    {
                        eax = t790;
                        ecx = t791;
                    }
                    else
                    {
                        eax = t790;
                        wr32(sp0 - 0x1ecu, esi);
                        wr32(sp0 - 0x1f0u, sp0 - 0xbcu);
                        wr32(sp0 - 0x1f4u, sp0 - 0x1b8u);
                        g->ecx = sp0 - 0xbcu;
                        g->edx = sp0 - 0x1b8u;
                        g->esp = sp0 - 0x1e8u;
                        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1b8u, sp0 - 0xbcu, esi);
                        t792 = g->ecx;
                        t793 = g->edx;
                        wr32(sp0 - 0x1f8u, esi);
                        wr32(sp0 - 0x1fcu, sp0 - 0xbcu);
                        g->eax = sp0 - 0xbcu;
                        g->ecx = t792;
                        g->edx = t793;
                        g->esp = sp0 - 0x1f4u;
                        t794 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0xbcu, esi);
                        t795 = g->ecx;
                        t796 = g->edx;
                        d797 = cow_take_float(g);
                        wrf32(sp0 - 0x1d8u, (float)(double)(float)d797);
                        if ((cow_fsw(g, d797, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
                        {
                            ecx = t795;
                            edx = t796;
                        }
                        else
                        {
                            eax = cow_fsw(g, d797, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                            ecx = t795;
                            edx = t796;
                            loc_1d8_f = (double)(float)d797;
                            wr32(sp0 - 0x1ecu, ecx);
                            d798 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_1d8_f);
                            wrf32(sp0 - 0x1ecu, (float)d798);
                            wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                            g->eax = eax;
                            g->ecx = sp0 - 0x1b8u;
                            g->esp = sp0 - 0x1e8u;
                            t799 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1b8u, cow_f2bits(d798));
                            t800 = g->ecx;
                            d801 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1d8u) + (double)rdf32(COW_IMG(0x1032a39cu)));
                            wrf32(sp0 - 0x1ecu, (float)d801);
                            wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                            g->ecx = t800;
                            g->edx = sp0 - 0x1b8u;
                            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1b8u, cow_f2bits(d801));
                            t802 = g->ecx;
                            t803 = g->edx;
                            ecx = t802;
                            edx = t803;
                        }
                        wr32(sp0 - 0x1ecu, esi);
                        wr32(sp0 - 0x1f0u, sp0 - 0x1b8u);
                        g->eax = sp0 - 0x1b8u;
                        g->edx = edx;
                        g->esp = sp0 - 0x1e8u;
                        t804 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1b8u, esi);
                        t805 = g->edx;
                        wr32(sp0 - 0x1ecu, sp0 - 0x1b8u);
                        t806 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1b8u);
                        t807 = g->ecx;
                        eax = t806;
                        ecx = t807;
                    }
                }
                wr32(sp0 - 0x1ecu, esi);
                wr32(sp0 - 0x1f0u, sp0 - 0x114u);
                g->eax = eax;
                g->edx = sp0 - 0x114u;
                g->esp = sp0 - 0x1e8u;
                t808 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x114u, esi);
                t809 = g->edx;
                d810 = cow_take_float(g);
                if (!(d810 < (double)rdf32(COW_IMG(0x1032a1a8u))))
                {
                    edx = t809;
                }
                else
                {
                    edx = t809;
                    wr32(sp0 - 0x1ecu, sp0 - 0x114u);
                    g->eax = sp0 - 0x114u;
                    g->edx = edx;
                    g->esp = sp0 - 0x1e8u;
                    t811 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x114u);
                    t812 = g->edx;
                    g->edx = t812;
                    cow_thiscall(g, COW_IMG(0x10021c10u), edi, 0);
                    t813 = g->edx;
                    edx = t813;
                }
                if ((int32_t)rd32(COW_IMG(0x10456d80u)) <= 0)
                {
                    eax = rd32(COW_IMG(0x10456d80u));
                }
                else
                {
                    eax = rd32(COW_IMG(0x10456d80u));
                    wr32(COW_IMG(0x10456d80u), eax - 1u);
                    eax = eax - 1u;
                }
                d814 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(edi + 0x54u));
                if (!(d814 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d814, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = d814;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d814, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = d814;
                    x0 = -x0;
                }
                wrf32(COW_IMG(0x10456d78u), (float)x0);
                g->eax = eax;
                g->esp = sp0 - 0x1e8u;
                t815 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
                eax = t815;
                loc_1e4 = rd32(sp0 - 0x1e4u);
                loc_1e8 = rd32(sp0 - 0x1e8u);
            }
        }
    }
L_10020b93: ;
    g->ebx = ebx;
    g->esi = loc_1e4;
    g->edi = loc_1e8;
    g->ebp = ebp;
    return eax;
L_1001f0cf: ;
    d76 = (double)rdf32(sp0 - 0x1e0u);
    if (d76 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    else
    {
        wr32(COW_IMG(0x10456d74u), 0xau);
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    goto L_1001f0e6;
L_1001f130: ;
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
        wr32(COW_IMG(0x10456d74u), 0xau);
    }
    goto L_1001f147;
L_1001f237: ;
    d114 = (double)rdf32(sp0 - 0x1e0u);
    if (d114 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d114, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d114, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        wr32(COW_IMG(0x10456d74u), 0xau);
        loc_1e0 = rd32(sp0 - 0x1e0u);
    }
    goto L_1001f24e;
L_1001f3e7: ;
    wr32(sp0 - 0x1f4u, 1u);
    g->eax = eax;
    g->edx = rd32(arg1);
    t170 = rd32(arg1);
    g->esp = sp0 - 0x1f0u;
    t171 = cow_thiscall(g, rd32(t170 + 0x3c8u), arg1, 1, 1u);
    t172 = g->ecx;
    t173 = g->edx;
    if (t171 == 0u)
    {
        eax = t171;
        ecx = t172;
        edx = t173;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        t175 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t176 = g->edx;
        t177 = rd32(t175 + 0x54u);
        wr32(sp0 - 0x150u, t177);
        edx = t176;
        loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
        loc_150 = t177;
    }
    else
    {
        eax = t171;
        edx = t173;
        d174 = (double)(float)fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax));
        wrf32(sp0 - 0x1e0u, (float)d174);
        loc_1e0_f = d174;
        loc_150 = rd32(sp0 - 0x150u);
    }
    if (rd32(arg1 + 0x768u) == 0u)
    {
        eax = rd32(arg1 + 0x768u);
    }
    else
    {
        eax = rd32(arg1 + 0x768u);
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        t178 = cow_call_regs(g, COW_IMG(0x100223b0u), eax, eax + 0x878u, g->edx, 1, 0);
        t179 = g->edx;
        d180 = cow_take_float(g);
        d181 = (double)(float)fr(g, d180 + (double)rdf32(sp0 - 0x1e0u));
        wrf32(sp0 - 0x1e0u, (float)d181);
        eax = t178;
        edx = t179;
        loc_150 = rd32(sp0 - 0x150u);
    }
    goto L_1001f42e;
L_1001f54a: ;
    wr32(sp0 - 0x1f4u, 0u);
    g->eax = eax;
    g->edx = rd32(arg1);
    t218 = rd32(arg1);
    g->esp = sp0 - 0x1f0u;
    t219 = cow_thiscall(g, rd32(t218 + 0x3c8u), arg1, 1, 0u);
    t220 = g->ecx;
    t221 = g->edx;
    if (t219 == 0u)
    {
        eax = t219;
        ecx = t220;
        edx = t221;
    }
    else
    {
        edx = t221;
        edi = t219;
        g->eax = rd32(arg1);
        g->edx = edx;
        t222 = rd32(arg1);
        g->esp = sp0 - 0x1f0u;
        t223 = cow_thiscall(g, rd32(t222 + 0x1bcu), arg1, 0);
        t224 = g->ecx;
        t225 = g->edx;
        d226 = (double)(float)fr(g, (double)rdf32(t223 + 4u) - fr(g, fr(g, (double)rdf32(edi + 4u) - fr(g, (double)rdf32(edi) * (double)rdf32(COW_IMG(0x10329a08u)))) * (double)rdf32(COW_IMG(0x10329a30u))));
        wrf32(sp0 - 0x150u, (float)d226);
        eax = t223;
        ecx = t224;
        edx = t225;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    edi = rd32(sp0 - 0x1d8u);
    goto L_1001f587;
L_1001f7c7: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t287 = g->ecx;
    t288 = g->edx;
    d289 = cow_take_float(g);
    d290 = (double)(float)fr(g, d289 + (double)rdf32(sp0 - 0x1e0u));
    wrf32(sp0 - 0x1e0u, (float)d290);
    wr32(sp0 - 0x1f4u, cow_f2bits(d290));
    eax = cow_f2bits(d290);
    ecx = t287;
    edx = t288;
    loc_1f4 = cow_f2bits(d290);
    goto L_1001f94f;
L_1001f7de: ;
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
    if ((uint8_t)t291 == 0u)
    {
        eax = t291;
        ecx = t292;
        edx = t293;
        goto L_1001f812;
    }
    eax = t291;
    ecx = t292;
    edx = t293;
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
    if ((uint8_t)t294 == 0u)
    {
        eax = t294;
        ecx = t295;
        edx = t296;
        goto L_1001f812;
    }
    eax = t294;
    wr8(COW_IMG(0x10456d84u), 1u);
    goto L_1001f968;
L_1001f812: ;
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
    if ((uint8_t)t297 == 0u)
    {
        eax = t297;
        ecx = t298;
        edx = t299;
        goto L_1001f862;
    }
    eax = t297;
    ecx = t298;
    edx = t299;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t300 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t301 = g->ecx;
    t302 = g->edx;
    d303 = cow_take_float(g);
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d303);
    g->ecx = t301;
    g->edx = t302;
    t304 = cow_call_regs(g, COW_IMG(0x10014cf0u), t300, g->ecx, g->edx, 1, 0);
    t305 = g->ecx;
    t306 = g->edx;
    d307 = cow_take_float(g);
    d308 = (double)(float)fr(g, fr(g, d307 * (double)rdf32(COW_IMG(0x1032a3e8u))) + (double)rdf32(sp0 - 0x1e0u));
    wrf32(sp0 - 0x1e0u, (float)d308);
    d309 = fr(g, fr(g, d307 * (double)rdf32(COW_IMG(0x1032a3e8u))) + (double)rdf32(sp0 - 0x1e0u));
    if ((cow_fsw(g, d309, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d309, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u;
        ecx = t305;
        edx = t306;
    }
    else
    {
        eax = cow_fsw(g, d309, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u;
        ecx = t305;
        edx = t306;
        wr32(sp0 - 0x1e0u, 0x44610000u);
    }
L_1001f945: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t358 = cow_stdcall(g, COW_IMG(0x1025e250u), 0);
    t359 = g->edx;
    eax = t358;
    edx = t359;
    loc_1e0_f = (double)rdf32(sp0 - 0x1e0u);
L_1001f94a: ;
    wr32(sp0 - 0x1f4u, cow_f2bits(loc_1e0_f));
    ecx = cow_f2bits(loc_1e0_f);
    loc_1f4 = cow_f2bits(loc_1e0_f);
    goto L_1001f94f;
L_1001f862: ;
    wr32(sp0 - 0x1f4u, 0xffffffffu);
    wr32(sp0 - 0x1f8u, 4u);
    wr32(sp0 - 0x1fcu, 0x50u);
    wr32(sp0 - 0x200u, 0x3fu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x1e4u;
    t310 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x50u, 4u, 0xffffffffu, rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u));
    t311 = g->ecx;
    t312 = g->edx;
    if ((uint8_t)t310 == 0u)
    {
        eax = t310;
        ecx = t311;
        edx = t312;
        goto L_1001f8b6;
    }
    eax = t310;
    ecx = t311;
    edx = t312;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t313 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t314 = g->ecx;
    t315 = g->edx;
    d316 = cow_take_float(g);
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d316);
    g->ecx = t314;
    g->edx = t315;
    t317 = cow_call_regs(g, COW_IMG(0x10014cf0u), t313, g->ecx, g->edx, 1, 0);
    t318 = g->ecx;
    t319 = g->edx;
    d320 = cow_take_float(g);
    d321 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1e0u) - fr(g, d320 * (double)rdf32(COW_IMG(0x1032a3e8u))));
    wrf32(sp0 - 0x1e0u, (float)d321);
    d322 = fr(g, (double)rdf32(sp0 - 0x1e0u) - fr(g, d320 * (double)rdf32(COW_IMG(0x1032a3e8u))));
    if (!(d322 < (double)rdf32(COW_IMG(0x1032a3d4u))))
    {
        eax = (t317 & 0xffff0000u) | (uint16_t)cow_fsw(g, d322, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
        ecx = t318;
        edx = t319;
    }
    else
    {
        eax = (t317 & 0xffff0000u) | (uint16_t)cow_fsw(g, d322, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
        ecx = t318;
        edx = t319;
        wr32(sp0 - 0x1e0u, 0x43720000u);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x1f0u;
    t323 = cow_stdcall(g, COW_IMG(0x1025e250u), 0);
    t324 = g->ecx;
    t325 = rd32(sp0 - 0x1e0u);
    wr32(sp0 - 0x1f4u, t325);
    eax = t323;
    ecx = t324;
    edx = t325;
    loc_1f4 = t325;
    goto L_1001f94f;
L_1001f8b6: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t326 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t327 = g->ecx;
    t328 = g->edx;
    if ((uint8_t)t326 == 0u)
    {
        eax = t326;
        goto L_1001f968;
    }
    eax = t326;
    ecx = t327;
    edx = t328;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t329 = cow_stdcall(g, COW_IMG(0x1025e220u), 0);
    t330 = g->ecx;
    t331 = g->edx;
    if ((int32_t)t329 <= 0)
    {
        eax = t329;
        ecx = t330;
        edx = t331;
        goto L_1001f90b;
    }
    eax = t329;
    ecx = t330;
    edx = t331;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t332 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t333 = g->ecx;
    t334 = g->edx;
    d335 = cow_take_float(g);
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d335);
    g->ecx = t333;
    g->edx = t334;
    t336 = cow_call_regs(g, COW_IMG(0x10014cf0u), t332, g->ecx, g->edx, 1, 0);
    t337 = g->ecx;
    t338 = g->edx;
    d339 = cow_take_float(g);
    d340 = (double)(float)fr(g, fr(g, d339 * (double)rdf32(COW_IMG(0x1032a3e8u))) + (double)rdf32(sp0 - 0x1e0u));
    wrf32(sp0 - 0x1e0u, (float)d340);
    d341 = fr(g, fr(g, d339 * (double)rdf32(COW_IMG(0x1032a3e8u))) + (double)rdf32(sp0 - 0x1e0u));
    if ((cow_fsw(g, d341, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u) != 0u)
    {
        ecx = t337;
        edx = t338;
    }
    else
    {
        eax = cow_fsw(g, d341, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x4100u;
        ecx = t337;
        edx = t338;
        wr32(sp0 - 0x1e0u, 0x44610000u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1f0u;
        cow_stdcall(g, COW_IMG(0x1025e250u), 0);
        t342 = g->ecx;
        t343 = g->edx;
        ecx = t342;
        edx = t343;
    }
    t344 = rd32(sp0 - 0x1e0u);
    wr32(sp0 - 0x1f4u, t344);
    eax = t344;
    loc_1f4 = t344;
    goto L_1001f94f;
L_1001f90b: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t345 = cow_stdcall(g, COW_IMG(0x1025e220u), 0);
    t346 = g->ecx;
    t347 = g->edx;
    if ((int32_t)t345 >= 0)
    {
        eax = t345;
        goto L_1001f968;
    }
    eax = t345;
    ecx = t346;
    edx = t347;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1f0u;
    t348 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t349 = g->ecx;
    t350 = g->edx;
    d351 = cow_take_float(g);
    wrf32(sp0 - 0x1e0u, (float)(double)(float)d351);
    g->ecx = t349;
    g->edx = t350;
    t352 = cow_call_regs(g, COW_IMG(0x10014cf0u), t348, g->ecx, g->edx, 1, 0);
    t353 = g->ecx;
    t354 = g->edx;
    d355 = cow_take_float(g);
    d356 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1e0u) - fr(g, d355 * (double)rdf32(COW_IMG(0x1032a3e8u))));
    wrf32(sp0 - 0x1e0u, (float)d356);
    d357 = fr(g, (double)rdf32(sp0 - 0x1e0u) - fr(g, d355 * (double)rdf32(COW_IMG(0x1032a3e8u))));
    if (!(d357 < (double)rdf32(COW_IMG(0x1032a3d4u))))
    {
        eax = (t352 & 0xffff0000u) | (uint16_t)cow_fsw(g, d357, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
        edx = t354;
        loc_1e0_f = d356;
        goto L_1001f94a;
    }
    eax = (t352 & 0xffff0000u) | (uint16_t)cow_fsw(g, d357, (double)rdf32(COW_IMG(0x1032a3d4u)), 0u);
    ecx = t353;
    edx = t354;
    wr32(sp0 - 0x1e0u, 0x43720000u);
    goto L_1001f945;
L_1001fb25: ;
    if (rd32(COW_IMG(0x10456d8cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456d8cu));
        loc_180 = rd32(sp0 - 0x180u);
        goto L_1001fbbc;
    }
    goto L_1001fb32;
L_1001fbaf: ;
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
    d458 = (double)rdf32(sp0 - 0x1e0u);
    if ((cow_fsw(g, d458, (double)rdf32(COW_IMG(0x1032a3e8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d458, (double)rdf32(COW_IMG(0x1032a3e8u)), 0u) & 0x100u;
        goto L_1001fd79;
    }
    wr32(sp0 - 0x1f4u, ecx);
    x0 = fr(g, fr(g, (double)rdf32(sp0 - 0x1e0u) - (double)rdf32(COW_IMG(0x1032a3e8u))) * (double)rdf32(COW_IMG(0x1032a3c4u)));
    goto L_1001fd52;
L_1001ff49: ;
    if (rd32(COW_IMG(0x10456d74u)) != 0u) goto L_1001ff74;
    if ((int8_t)rd8(edi + 0xf0u) < 4) goto L_1001ff74;
    wr32(COW_IMG(0x10456d70u), 1u);
    wr32(COW_IMG(0x10456d74u), 0u);
    ebx = 0u;
    goto L_1001fffa;
L_1001ff74: ;
    wr32(sp0 - 0x1f4u, ebp);
    wr32(sp0 - 0x1f8u, sp0 - 0x164u);
    wr32(sp0 - 0x1fcu, sp0 - 0x1c8u);
    g->eax = sp0 - 0x1c8u;
    g->edx = sp0 - 0x164u;
    g->esp = sp0 - 0x1f0u;
    t503 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x1c8u, sp0 - 0x164u, ebp);
    t504 = g->edx;
    wr32(sp0 - 0x200u, ebp);
    wr32(sp0 - 0x204u, sp0 - 0x164u);
    g->ecx = sp0 - 0x164u;
    g->edx = t504;
    g->esp = sp0 - 0x1fcu;
    t505 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x164u, ebp);
    t506 = g->ecx;
    t507 = g->edx;
    d508 = cow_take_float(g);
    wrf32(sp0 - 0x1d8u, (float)(double)(float)d508);
    if ((cow_fsw(g, d508, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d508, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t507;
        loc_1d8_f = (double)(float)d508;
    }
    else
    {
        eax = cow_fsw(g, d508, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t506;
        loc_1d8_f = (double)(float)d508;
        wr32(sp0 - 0x1f4u, ecx);
        d509 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_1d8_f);
        wrf32(sp0 - 0x1f4u, (float)d509);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        g->ecx = ecx;
        g->edx = sp0 - 0x1c8u;
        g->esp = sp0 - 0x1f0u;
        cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits(d509));
        t510 = g->ecx;
        t511 = g->edx;
        d512 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1d8u) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x1f4u, (float)d512);
        wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
        g->eax = sp0 - 0x1c8u;
        g->edx = t511;
        t513 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x1c8u, cow_f2bits(d512));
        t514 = g->edx;
        eax = t513;
        edx = t514;
        loc_1d8_f = (double)rdf32(sp0 - 0x1d8u);
    }
    wr32(sp0 - 0x1f4u, ebp);
    wr32(sp0 - 0x1f8u, sp0 - 0x1c8u);
    g->eax = eax;
    g->esp = sp0 - 0x1f0u;
    t515 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x1c8u, ebp);
    wr32(sp0 - 0x1f4u, sp0 - 0x1c8u);
    g->edx = sp0 - 0x1c8u;
    cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, sp0 - 0x1c8u);
    t516 = g->ecx;
    t517 = g->edx;
    ecx = t516;
    edx = t517;
    ebx = 0u;
    goto L_1001fffa;
L_10020352: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100203c5;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    g->edx = edx;
    t605 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x1f0u;
    t606 = cow_call_regs(g, COW_IMG(0x10157640u), eax, t605, g->edx, 1, 0);
    t607 = g->ecx;
    t608 = g->edx;
    if (t606 == 0u)
    {
        eax = t606;
        ecx = t607;
        edx = t608;
        goto L_100203c5;
    }
    eax = t606;
    edx = t608;
    edi = t606;
    wr32(sp0 - 0x1f4u, COW_IMG(0x10330ebcu));
    g->eax = eax;
    g->esp = sp0 - 0x1f0u;
    t609 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, edx, 1, COW_IMG(0x10330ebcu));
    t610 = g->ecx;
    t611 = g->edx;
    if ((uint8_t)t609 == 0u)
    {
        eax = t609;
        ecx = t610;
        edx = t611;
        goto L_100203c5;
    }
    edx = t611;
    wr32(sp0 - 0x1f4u, 1u);
    g->eax = rd32(edi);
    g->edx = edx;
    t612 = rd32(edi);
    g->esp = sp0 - 0x1f0u;
    t613 = cow_thiscall(g, rd32(t612 + 0x3c8u), edi, 1, 1u);
    t614 = g->ecx;
    t615 = g->edx;
    if (t613 == 0u)
    {
        eax = t613;
        ecx = t614;
        edx = t615;
        goto L_100203c5;
    }
    eax = t613;
    ecx = t614;
    edx = t615;
    d616 = (double)(float)fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + 0xcu));
    wrf32(sp0 - 0x1d4u, (float)d616);
    d617 = fr(g, (double)rdf32(eax + 0x10u) - (double)rdf32(eax + 0x14u));
    if ((cow_fsw(g, d617, d616, 1u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d617, d616, 1u) & 0x4100u;
        x0 = d617;
    }
    else
    {
        eax = cow_fsw(g, d617, d616, 1u) & 0x4100u;
        loc_1d4_f = d616;
        x0 = d617;
        x0 = loc_1d4_f;
    }
    x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x10456dacu)));
    goto L_100203c1;
L_10020446: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        loc_1cc_f = (double)rdf32(sp0 - 0x1ccu);
        goto L_10020469;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x10456dacu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    x1 = fr(g, (double)rdf32(sp0 - 0x1ccu) * (double)rdf32(COW_IMG(0x1032a3acu)));
    goto L_10020465;
L_100207fb: ;
L_100207fd: ;
    wr32(sp0 - 0x1f0u, sp0 - 0x1d8u);
    wr32(sp0 - 0x1f4u, 0x41200000u);
    t741 = rd32(edi + 0x4cu);
    wr32(sp0 - 0x1f8u, t741);
    t742 = rd32(edi + 0x48u);
    wr32(sp0 - 0x1fcu, t742);
    wr32(sp0 - 0x200u, rd32(esi));
    g->eax = t742;
    g->edx = t741;
    g->esp = sp0 - 0x1ecu;
    t743 = cow_thiscall(g, COW_IMG(0x10181370u), rd32(COW_IMG(0x10631f24u)), 5, rd32(esi), t742, t741, 0x41200000u, sp0 - 0x1d8u);
    t744 = g->edx;
    if ((uint8_t)t743 != 1u)
    {
        eax = t743;
        edx = t744;
    }
    else
    {
        eax = t743;
        edx = t744;
        d745 = fr(g, (double)rdf32(sp0 - 0x1d8u) + (double)rdf32(COW_IMG(0x1032a398u)));
        d746 = (double)rdf32(edi + 0x48u);
        if ((cow_fsw(g, d745, d746, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d745, d746, 1u) & 0x4100u;
            x0 = d745;
        }
        else
        {
            eax = cow_fsw(g, d745, d746, 1u) & 0x4100u;
            x0 = d745;
            wrf32(edi + 0x48u, (float)x0);
            wr32(sp0 - 0x1f0u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1ecu;
            t747 = cow_thiscall(g, COW_IMG(0x1001e760u), edi, 1, esi);
            t748 = g->edx;
            eax = t747;
            edx = t748;
        }
    }
    goto L_10020846;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ee60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001ee60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
