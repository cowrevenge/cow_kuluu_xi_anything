/* f_0x1008f740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008f740(Guest* g)
{
    uint32_t cf;
    double d113;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d119;
    double d120;
    double d121;
    double d122;
    double d123;
    double d162;
    double d163;
    double d164;
    double d165;
    double d166;
    double d167;
    double d168;
    double d169;
    double d170;
    double d171;
    double d172;
    double d178;
    double d179;
    double d180;
    double d181;
    double d182;
    double d183;
    double d184;
    double d185;
    double d186;
    double d187;
    double d188;
    double d189;
    double d225;
    double d226;
    double d227;
    double d228;
    double d229;
    double d230;
    double d231;
    double d232;
    double d233;
    double d234;
    double d239;
    double d240;
    double d241;
    double d242;
    double d243;
    double d244;
    double d245;
    double d246;
    double d247;
    double d248;
    double d285;
    double d286;
    double d287;
    double d288;
    double d289;
    double d290;
    double d291;
    double d292;
    double d293;
    double d294;
    double d295;
    double d301;
    double d302;
    double d303;
    double d304;
    double d305;
    double d306;
    double d307;
    double d308;
    double d309;
    double d310;
    double d311;
    double d312;
    double d353;
    double d354;
    double d355;
    double d356;
    double d357;
    double d358;
    double d359;
    double d360;
    double d361;
    double d362;
    double d372;
    double d373;
    double d374;
    double d375;
    double d376;
    double d377;
    double d378;
    double d379;
    double d380;
    double d381;
    double d396;
    double d397;
    double d398;
    double d399;
    double d400;
    double d401;
    double d402;
    double d403;
    double d404;
    double d405;
    double d492;
    double d493;
    double d494;
    double d495;
    double d496;
    double d497;
    double d498;
    double d499;
    double d500;
    double d501;
    double d502;
    double d508;
    double d509;
    double d510;
    double d511;
    double d512;
    double d513;
    double d514;
    double d515;
    double d516;
    double d517;
    double d538;
    double d539;
    double d540;
    double d541;
    double d542;
    double d543;
    double d544;
    double d545;
    double d546;
    double d547;
    double d548;
    double d581;
    double d582;
    double d583;
    double d584;
    double d585;
    double d586;
    double d587;
    double d588;
    double d589;
    double d590;
    double d591;
    double d597;
    double d598;
    double d599;
    double d600;
    double d601;
    double d602;
    double d603;
    double d604;
    double d605;
    double d606;
    double d623;
    double d624;
    double d625;
    double d626;
    double d627;
    double d628;
    double d629;
    double d630;
    double d631;
    double d632;
    double d633;
    double d634;
    double d66;
    double d661;
    double d662;
    double d663;
    double d664;
    double d665;
    double d666;
    double d667;
    double d668;
    double d669;
    double d67;
    double d670;
    double d671;
    double d677;
    double d678;
    double d679;
    double d68;
    double d680;
    double d681;
    double d682;
    double d683;
    double d684;
    double d685;
    double d686;
    double d69;
    double d70;
    double d702;
    double d703;
    double d704;
    double d705;
    double d706;
    double d707;
    double d708;
    double d709;
    double d71;
    double d710;
    double d711;
    double d712;
    double d713;
    double d718;
    double d72;
    double d73;
    double d738;
    double d739;
    double d74;
    double d740;
    double d741;
    double d742;
    double d743;
    double d744;
    double d745;
    double d746;
    double d747;
    double d748;
    double d75;
    double d754;
    double d755;
    double d756;
    double d757;
    double d758;
    double d759;
    double d76;
    double d760;
    double d761;
    double d762;
    double d763;
    double d780;
    double d781;
    double d782;
    double d783;
    double d784;
    double d785;
    double d786;
    double d787;
    double d788;
    double d789;
    double d790;
    double d791;
    double d813;
    double d814;
    double d815;
    double d816;
    double d817;
    double d818;
    double d819;
    double d820;
    double d821;
    double d822;
    double d823;
    double d828;
    double d829;
    double d830;
    double d831;
    double d832;
    double d833;
    double d834;
    double d835;
    double d836;
    double d837;
    double d84;
    double d85;
    double d853;
    double d854;
    double d855;
    double d856;
    double d857;
    double d858;
    double d859;
    double d86;
    double d860;
    double d861;
    double d862;
    double d863;
    double d87;
    double d88;
    double d883;
    double d884;
    double d885;
    double d886;
    double d887;
    double d888;
    double d889;
    double d89;
    double d890;
    double d891;
    double d892;
    double d893;
    double d899;
    double d90;
    double d900;
    double d901;
    double d902;
    double d903;
    double d904;
    double d905;
    double d906;
    double d907;
    double d908;
    double d91;
    double d92;
    double d924;
    double d925;
    double d926;
    double d927;
    double d928;
    double d929;
    double d93;
    double d930;
    double d931;
    double d932;
    double d933;
    double d934;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t12;
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
    uint32_t t17;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t18;
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
    uint32_t t23;
    uint32_t t235;
    uint32_t t236;
    uint32_t t237;
    uint32_t t238;
    uint32_t t24;
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
    uint32_t t29;
    uint32_t t296;
    uint32_t t297;
    uint32_t t298;
    uint32_t t299;
    uint32_t t3;
    uint32_t t30;
    uint32_t t300;
    uint32_t t31;
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
    uint32_t t36;
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
    uint32_t t38;
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
    uint32_t t4;
    uint32_t t40;
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
    uint32_t t5;
    uint32_t t50;
    uint32_t t503;
    uint32_t t504;
    uint32_t t505;
    uint32_t t506;
    uint32_t t507;
    uint32_t t51;
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
    uint32_t t54;
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
    uint32_t t59;
    uint32_t t592;
    uint32_t t593;
    uint32_t t594;
    uint32_t t595;
    uint32_t t596;
    uint32_t t6;
    uint32_t t60;
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
    uint32_t t63;
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
    uint32_t t660;
    uint32_t t672;
    uint32_t t673;
    uint32_t t674;
    uint32_t t675;
    uint32_t t676;
    uint32_t t687;
    uint32_t t688;
    uint32_t t689;
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
    uint32_t t700;
    uint32_t t701;
    uint32_t t714;
    uint32_t t715;
    uint32_t t716;
    uint32_t t717;
    uint32_t t719;
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
    uint32_t t730;
    uint32_t t731;
    uint32_t t732;
    uint32_t t733;
    uint32_t t734;
    uint32_t t735;
    uint32_t t736;
    uint32_t t737;
    uint32_t t749;
    uint32_t t750;
    uint32_t t751;
    uint32_t t752;
    uint32_t t753;
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
    uint32_t t79;
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
    uint32_t t802;
    uint32_t t803;
    uint32_t t804;
    uint32_t t805;
    uint32_t t806;
    uint32_t t807;
    uint32_t t808;
    uint32_t t809;
    uint32_t t81;
    uint32_t t810;
    uint32_t t811;
    uint32_t t812;
    uint32_t t82;
    uint32_t t824;
    uint32_t t825;
    uint32_t t826;
    uint32_t t827;
    uint32_t t83;
    uint32_t t838;
    uint32_t t839;
    uint32_t t840;
    uint32_t t841;
    uint32_t t842;
    uint32_t t843;
    uint32_t t844;
    uint32_t t845;
    uint32_t t846;
    uint32_t t847;
    uint32_t t848;
    uint32_t t849;
    uint32_t t850;
    uint32_t t851;
    uint32_t t852;
    uint32_t t864;
    uint32_t t865;
    uint32_t t866;
    uint32_t t867;
    uint32_t t868;
    uint32_t t869;
    uint32_t t870;
    uint32_t t871;
    uint32_t t872;
    uint32_t t873;
    uint32_t t874;
    uint32_t t875;
    uint32_t t876;
    uint32_t t877;
    uint32_t t878;
    uint32_t t879;
    uint32_t t880;
    uint32_t t881;
    uint32_t t882;
    uint32_t t894;
    uint32_t t895;
    uint32_t t896;
    uint32_t t897;
    uint32_t t898;
    uint32_t t9;
    uint32_t t909;
    uint32_t t910;
    uint32_t t911;
    uint32_t t912;
    uint32_t t913;
    uint32_t t914;
    uint32_t t915;
    uint32_t t916;
    uint32_t t917;
    uint32_t t918;
    uint32_t t919;
    uint32_t t920;
    uint32_t t921;
    uint32_t t922;
    uint32_t t923;
    uint32_t t935;
    uint32_t t936;
    uint32_t t937;
    uint32_t t938;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x48u, 0xffu);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t1 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
        goto L_1008f778;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t3 = cow_thiscall(g, COW_IMG(0x1009aaf0u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        edx = t4;
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
        goto L_1008f778;
    }
    eax = t3;
    edx = t4;
    if ((int8_t)rd8(self + 0x250u) < 32)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x250u);
        goto L_100926b0;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x250u);
    if ((int8_t)eax >= 37) goto L_100926b0;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_1008f778: ;
    wr32(sp0 - 0x48u, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t5 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, 0xffu);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1008f797;
    }
    eax = t5;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t8 = cow_call_regs(g, COW_IMG(0x1009aca0u), eax, self, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 1u)
    {
        eax = t8;
        goto L_100926b0;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
L_1008f797: ;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t11 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    wr32(sp0 - 0x48u, 0xffu);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x100956c0u), self, 1, 0xffu);
    t14 = g->edx;
    wr32(sp0 - 0x48u, 0xffu);
    wr8(sp0 - 0x33u, (uint8_t)t13);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t16 = g->edx;
    wr32(sp0 - 0x48u, 0xffu);
    wr8(sp0 - 0x31u, (uint8_t)t15);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, 0xffu);
    t18 = g->edx;
    wr32(sp0 - 0x48u, 0xffu);
    wr8(sp0 - 0x34u, (uint8_t)t17);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10095790u), self, 1, 0xffu);
    t20 = g->edx;
    wr8(sp0 - 0x32u, (uint8_t)t19);
    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
        edx = t20;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t15;
        edi = t11;
        goto L_10090623;
    }
    eax = rd32(self + 0x120u);
    edx = t20;
    t21 = rd32(self + 0x16cu);
    t22 = rd32(self + 0x128u);
    wr32(self + 0x170u, t21);
    t23 = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u | 2u) << 8u;
    t24 = rd8(self + 0xeeu);
    wr32(self + 0x120u, t23);
    wr32(self + 0x128u, t22 & 0x5fffffffu);
    if ((uint32_t)(int8_t)t24 == 3u)
    {
        eax = t23;
        ecx = (uint32_t)(int8_t)t24 - 3u;
        goto L_100902fb;
    }
    eax = t23;
    ecx = (uint32_t)(int8_t)t24 - 3u;
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_10090072;
    }
    ecx = ecx - 1u;
    if (ecx == 1u) goto L_1008fdcd;
    if ((int8_t)eax >= 0) goto L_1008f8d1;
    if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_1008f8d1;
    t25 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u);
    wr32(sp0 - 0x10u, t25);
    t26 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x144u);
    wr32(sp0 - 0xcu, t26);
    t27 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x148u);
    wr32(sp0 - 8u, t27);
    t28 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x14cu);
    wr32(sp0 - 4u, t28);
    t29 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u);
    wr32(sp0 - 0x20u, t29);
    t30 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x154u);
    wr32(sp0 - 0x1cu, t30);
    t31 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x158u);
    wr32(sp0 - 0x18u, t31);
    t32 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x15cu);
    wr32(sp0 - 0x14u, t32);
    eax = t32;
    edx = rd32(rd32(self + 0xd4u) + 0x260u);
    loc_20 = t29;
    loc_1c = t30;
    loc_18 = t31;
    loc_14 = t32;
L_1008f909: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t41 = cow_thiscall(g, COW_IMG(0x10087dc0u), self, 0);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    if ((uint8_t)t41 == 1u)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        goto L_1008f989;
    }
    ecx = t42;
    edx = t43;
    if ((rd32(self + 0x12cu) >> 0x17u & 1u) != 1u)
    {
        eax = (rd32(self + 0x12cu) >> 0x17u & 0xffffff00u) | (rd32(self + 0x12cu) >> 0x17u & 1u);
        goto L_1008f95c;
    }
    eax = (rd32(self + 0x12cu) >> 0x17u & 0xffffff00u) | (rd32(self + 0x12cu) >> 0x17u & 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t44 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t45 = g->edx;
    g->esp = sp0 - 0x44u;
    t46 = cow_fastcall(g, COW_IMG(0x100748f0u), t44, t45, 0);
    t47 = g->ecx;
    t48 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t44 == 0u)
    {
        ecx = t47;
        goto L_1008f9c0;
    }
    eax = t46;
    edx = t48;
    edi = t44;
    wr32(sp0 - 0x48u, 0x706f7073u);
    wr32(sp0 - 0x4cu, self);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t49 = cow_thiscall(g, COW_IMG(0x100c56e0u), edi, 3, sp0 - 0x10u, self, 0x706f7073u);
    t50 = g->ecx;
    eax = t49;
    ecx = t50;
L_1008f9c2: ;
    wr32(self + 0xa0u, eax);
    if (eax == 0u) goto L_10090335;
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    wr32(sp0 - 0x4cu, eax + 0x44u);
    g->eax = eax;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x44u;
    t64 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, eax + 0x44u, sp0 - 0x20u);
    t65 = g->edx;
    d66 = (double)rdf32(eax + 0x44u);
    if ((cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        edx = t65;
        ebx = eax + 0x44u;
        edi = eax;
        eax = cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        edx = t65;
        ebx = eax + 0x44u;
        edi = eax;
        eax = cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d67 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d67);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d68 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d68);
    }
    d69 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d70 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d70);
    }
    d71 = (double)rdf32(edi + 0x48u);
    if (!(d71 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d72 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d72);
    }
    d73 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d73, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d73, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d73, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d74 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d74);
    }
    d75 = (double)rdf32(edi + 0x4cu);
    if (d75 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d76 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d76);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t77 = rd32(self + 0xa0u) + 0x34u;
    wr32(sp0 - 0x4cu, t77);
    g->eax = sp0 - 0x10u;
    g->ecx = t77;
    g->esp = sp0 - 0x44u;
    t78 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t77, sp0 - 0x10u);
    t79 = g->ecx;
    wr32(sp0 - 0x50u, sp0 - 0x20u);
    t80 = rd32(self + 0xa0u) + 0x44u;
    wr32(sp0 - 0x54u, t80);
    g->edx = sp0 - 0x20u;
    t81 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x4cu;
    t82 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t80, sp0 - 0x20u);
    t83 = g->edx;
    if ((cow_fsw(g, (double)rdf32(t80), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(t80), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t83;
        ebx = t80;
        edi = t81;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(t80), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t83;
        ebx = t80;
        edi = t81;
        d84 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d84);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d85 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d85);
    }
    d86 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d86, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d86, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d86, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d87 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d87);
    }
    d88 = (double)rdf32(edi + 0x48u);
    if (!(d88 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d88, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d88, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d89 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d89);
    }
    d90 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d90, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d90, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d90, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d91 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d91);
    }
    d92 = (double)rdf32(edi + 0x4cu);
    if (d92 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d93 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d93);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t94 = rd32(self + 0xa0u) + 0xc4u;
    wr32(sp0 - 0x4cu, t94);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t94, sp0 - 0x10u);
    t95 = rd32(sp0 - 0x20u);
    t96 = rd32(self + 0xa0u);
    wr32(t96 + 0xe4u, t95);
    t97 = rd32(sp0 - 0x1cu);
    wr32(t96 + 0xe8u, t97);
    t98 = rd32(sp0 - 0x18u);
    wr32(t96 + 0xecu, t98);
    t99 = rd32(sp0 - 0x14u);
    wr32(t96 + 0xf0u, t99);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, sp0 - 0x10u);
    t100 = rd32(sp0 - 0x20u);
    t101 = rd32(self + 0xa0u);
    wr32(t101 + 0xe4u, t100);
    t102 = rd32(sp0 - 0x1cu);
    wr32(t101 + 0xe8u, t102);
    t103 = rd32(sp0 - 0x18u);
    wr32(t101 + 0xecu, t103);
    t104 = rd32(sp0 - 0x14u);
    wr32(t101 + 0xf0u, t104);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t105 = rd32(self + 0xa0u) + 0x5c4u;
    wr32(sp0 - 0x4cu, t105);
    g->eax = sp0 - 0x10u;
    t106 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t105, sp0 - 0x10u);
    t107 = rd32(self + 0xa0u);
    g->edx = rd32(t107);
    t108 = rd32(t107);
    t109 = cow_thiscall(g, rd32(t108 + 0x318u), t107, 0);
    t110 = g->ecx;
    t111 = g->edx;
    if (t109 != 0u)
    {
        eax = t109;
    }
    else
    {
        ecx = t110;
        edx = t111;
        edi = t107;
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = sp0 - 0x20u;
        g->esp = sp0 - 0x44u;
        t112 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, sp0 - 0x20u);
        d113 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d113, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d113, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = edi + 0x61cu;
        }
        else
        {
            eax = cow_fsw(g, d113, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = edi + 0x61cu;
            d114 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d114);
        }
        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d115 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d115);
        }
        d116 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d117 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d117);
        }
        d118 = (double)rdf32(edi + 0x620u);
        if (!(d118 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d119 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d119);
        }
        d120 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d121 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d121);
        }
        d122 = (double)rdf32(edi + 0x624u);
        if (!(d122 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d122, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d122, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d123 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d123);
        }
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t124 = rd32(self + 0xa0u) + 0x5fcu;
    wr32(sp0 - 0x4cu, t124);
    g->edx = t124;
    t125 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t124, sp0 - 0x10u);
    t126 = g->edx;
    wr32(t125 + 0x608u, 0x3f800000u);
    t127 = rd32(self + 0x130u);
    if (!(t127 >> 4u & 1u))
    {
        edi = t125;
    }
    else
    {
        eax = t127;
        edx = t126;
        edi = t125;
        t128 = (eax & 0xffffff00u) | (uint8_t)(eax | 0x10u);
        wr32(self + 0x130u, t128);
        g->eax = t128;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t129 = cow_thiscall(g, COW_IMG(0x1008a160u), self, 0);
        t130 = g->ecx;
        t131 = g->edx;
        g->edx = t131;
        t132 = cow_thiscall(g, COW_IMG(0x1008a1a0u), t130, 0);
        t133 = g->edx;
        cow_fastcall(g, COW_IMG(0x1008a2f0u), self, t133, 0);
    }
    t134 = rd32(self + 0x124u);
    if ((t134 & 0xeu) >= 8u)
    {
        eax = t134;
        edx = t134 & 0xeu;
    }
    else
    {
        eax = t134;
        edx = t134 & 0xeu;
        t135 = (eax & 0xffffff00u) | (eax & 0xf1u);
        t136 = (((t135 & 0xf0u) << 4u ^ (t135 & 0xfffff08fu)) & 0xffffff00u) | (t135 & 0x8fu) | 0x80u;
        wr32(self + 0x124u, t136);
        eax = t135 & 0xfffff08fu;
    }
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
    wr32(sp0 - 0x48u, 0u);
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    t137 = rd32(self + 0x1a4u);
    wr32(rd32(self + 0xa0u) + 0x7c8u, t137);
    t138 = rd32(self + 0x1b0u);
    wr32(rd32(self + 0xa0u) + 0x7ccu, t138);
    t139 = rd32(self + 0x1b4u);
    wr32(rd32(self + 0xa0u) + 0x7d0u, t139);
    g->edx = t139;
    t140 = cow_call_regs(g, COW_IMG(0x1008b460u), t138, self, g->edx, 0, 1, 0u);
    t141 = g->ecx;
    t142 = g->edx;
    eax = t140;
    ecx = t141;
    edx = t142;
    ebp = in_ebp;
L_100905d4: ;
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t337 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    if (rd32(self + 0x78u) != rd32(t337 + 4u))
    {
        edx = rd32(t337 + 4u);
    }
    else
    {
        eax = t337;
        edx = rd32(t337 + 4u);
        if (rd8(COW_IMG(0x10358188u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
            t338 = rd32(self + 0xa0u);
            wr32(sp0 - 0x48u, t338);
            g->eax = eax;
            g->edx = t338;
            g->esp = sp0 - 0x44u;
            t339 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, t338);
            t340 = g->edx;
            eax = t339;
            edx = t340;
        }
        wr32(sp0 - 0x48u, 0u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        t341 = g->edx;
        edx = t341;
    }
    t342 = rd32(self + 0x18u);
    wr32(self + 0xe4u, t342);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x1008e4d0u), t342, self, g->edx, 1, 0);
    t343 = g->ecx;
    t344 = g->edx;
    ecx = t343;
    edx = t344;
    ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x31u);
L_100909ea: ;
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_10091663;
    eax = rd32(self + 0x120u);
    if (rd8(self + 0xeeu) != 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax != 4u)
        {
            if ((uint8_t)eax != 5u)
            {
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t406 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, rd32(self + 0xa0u), g->edx, 1, 0);
                t407 = g->edx;
                if ((uint8_t)t406 == 0u)
                {
                    edx = t407;
                }
                else
                {
                    eax = t406;
                    edx = t407;
                    g->eax = eax;
                    g->esp = sp0 - 0x44u;
                    t408 = cow_fastcall(g, COW_IMG(0x1008ef60u), self, edx, 0);
                    t409 = g->edx;
                    if (rd8(self + 0x144u) == 0u)
                    {
                        edx = t409;
                    }
                    else
                    {
                        eax = (t408 & 0xffffff00u) | rd8(self + 0x144u);
                        edx = t409;
                        if ((uint8_t)eax == 3u)
                        {
                            wr32(sp0 - 0x48u, 0u);
                            t413 = rd32(self + 0xa0u);
                            wr32(sp0 - 0x4cu, t413);
                            wr32(sp0 - 0x50u, 0x30706f70u);
                            g->edx = edx;
                            g->esp = sp0 - 0x44u;
                            cow_thiscall(g, rd32(rd32(t413) + 0x298u), t413, 3, 0x30706f70u, t413, 0u);
                            t414 = g->edx;
                            edx = t414;
                        }
                        else
                        {
                            if ((uint8_t)eax == 6u)
                            {
                                wr32(sp0 - 0x48u, 0u);
                                t410 = rd32(self + 0xa0u);
                                wr32(sp0 - 0x4cu, t410);
                                wr32(sp0 - 0x50u, 0x31706f70u);
                                g->edx = rd32(t410);
                                t411 = rd32(t410);
                                g->esp = sp0 - 0x44u;
                                cow_thiscall(g, rd32(t411 + 0x298u), t410, 3, 0x31706f70u, t410, 0u);
                                t412 = g->edx;
                                edx = t412;
                            }
                        }
                        wr8(self + 0x144u, 0u);
                    }
                }
            }
        }
    }
    if (rd32(self + 0x12cu) >> 0xcu & 1u)
    {
        eax = rd32(self + 0x12cu) >> 0xcu;
        wr32(sp0 - 0x48u, eax & 1u);
        g->edx = rd32(rd32(self + 0xa0u));
        t415 = rd32(rd32(self + 0xa0u));
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, rd32(t415 + 0x3dcu), rd32(self + 0xa0u), 1, eax & 1u);
        t416 = g->edx;
        edx = t416;
    }
    if ((rd32(self + 0x12cu) >> 8u & 0xcu) != 0u)
    {
        eax = rd32(self + 0x12cu);
        ecx = rd32(self + 0xa0u);
        goto L_10090aba;
    }
    ecx = rd32(self + 0xa0u);
    g->eax = rd32(ecx);
    g->edx = edx;
    t417 = rd32(ecx);
    g->esp = sp0 - 0x44u;
    t418 = cow_thiscall(g, rd32(t417 + 0x2cu), ecx, 0);
    t419 = g->edx;
    if ((t418 & 0xff000000u) == 0u)
    {
        ecx = rd32(self + 0xa0u);
        edx = t419;
        goto L_10090ab1;
    }
    eax = t418;
    ecx = rd32(self + 0xa0u);
    wr32(sp0 - 0x48u, 0x80u);
    loc_48 = 0x80u;
L_10090abc: ;
    g->eax = eax;
    g->edx = rd32(ecx);
    t424 = rd32(ecx);
    g->esp = sp0 - 0x44u;
    t425 = cow_thiscall(g, rd32(t424 + 0x3cu), ecx, 1, loc_48);
    t426 = g->ecx;
    t427 = g->edx;
    eax = t425;
    ecx = t426;
    edx = t427;
L_10090ac1: ;
    if ((uint8_t)ebx != 0u) goto L_10090ae1;
    if (rd8(sp0 - 0x34u) != 0u) goto L_10090ae1;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
    if (rd8(sp0 - 0x33u) != 0u) goto L_10090ae1;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
    if (rd8(sp0 - 0x32u) == 0u) goto L_10091663;
L_10090ae1: ;
    if ((rd32(self + 0x120u) >> 8u & 4u) != 0u) goto L_10091663;
    eax = rd32(self + 0x120u);
    g->edx = edx;
    t428 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    t429 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, t428, g->edx, 1, 0);
    t430 = g->ecx;
    t431 = g->edx;
    if ((uint8_t)t429 == 0u)
    {
        ecx = t430;
        edx = t431;
        goto L_10091663;
    }
    eax = t429;
    ecx = t430;
    edx = t431;
    if ((uint8_t)ebx == 0u) goto L_10090b58;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t432 = cow_thiscall(g, COW_IMG(0x100d2800u), rd32(self + 0xa0u), 0);
    t433 = g->edx;
    eax = rd8(self + 0x123u) & 7u;
    edx = t433;
    ebp = rd32(COW_IMG(0x1035b4d0u) + (rd8(self + 0x123u) & 7u) * 4u);
L_10090b22: ;
    t436 = (rd32(self + 0x120u) & 0xffff00ffu) | (rd32(self + 0x120u) >> 8u & 0xe7u) << 8u;
    t437 = rd8(self + 0xeeu);
    wr32(self + 0x120u, t436);
    if ((uint8_t)t437 == 2u)
    {
        eax = (eax & 0xffffff00u) | t437;
    }
    else
    {
        wr32(self + 0x1a8u, 0x20696863u);
        wr32(self + 0x1a4u, 0x20696863u);
        eax = 0x20696863u;
    }
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t438 = cow_fastcall(g, COW_IMG(0x1008a2f0u), self, edx, 0);
    t439 = g->ecx;
    t440 = g->edx;
    eax = t438;
    ecx = t439;
    edx = t440;
L_10090d19: ;
    if ((int8_t)rd8(self + 0x120u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
        goto L_1009120e;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
    if (rd8(COW_IMG(0x104807f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
        goto L_1009120e;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
    if ((uint8_t)ebx != 0u) goto L_10090e02;
    if (rd8(sp0 - 0x34u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
        goto L_10090e02;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
    if (rd8(sp0 - 0x33u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
        goto L_10090d9d;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
L_10090d56: ;
    wr32(sp0 - 0x50u, 0xa0cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t484 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t485 = g->edx;
    g->esp = sp0 - 0x44u;
    t486 = cow_fastcall(g, COW_IMG(0x100748f0u), t484, t485, 0);
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t484 == 0u)
    {
        eax = t486;
        goto L_10090e58;
    }
    edi = t484;
    wr32(sp0 - 0x48u, ebp);
    wr32(sp0 - 0x4cu, self);
    t487 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x50u, t487);
    g->eax = t487;
    g->esp = sp0 - 0x44u;
    t488 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, t487, self, ebp);
    eax = t488;
    edi = t488;
L_10090e5a: ;
    wr32(self + 0xa4u, edi);
    if (edi == 0u) goto L_100926b0;
L_10090e68: ;
    t489 = rd32(edi + 0x88u) | 8u;
    wr32(edi + 0x88u, t489);
    t490 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
    wr32(sp0 - 0x48u, t490);
    wr32(sp0 - 0x4cu, edi + 0x44u);
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t491 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, t490);
    d492 = (double)rdf32(edi + 0x44u);
    if ((cow_fsw(g, d492, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d492, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ebp = edi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d492, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ebp = edi + 0x44u;
        d493 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d493);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d494 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d494);
    }
    d495 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d495, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d495, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d495, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d496 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d496);
    }
    d497 = (double)rdf32(edi + 0x48u);
    if (!(d497 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d497, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d497, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d498 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d498);
    }
    d499 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d499, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d499, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d499, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d500 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d500);
    }
    d501 = (double)rdf32(edi + 0x4cu);
    if (d501 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d502 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d502);
    }
    t503 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x48u, t503);
    wr32(sp0 - 0x4cu, edi + 0x34u);
    g->edx = edi + 0x34u;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, t503);
    t504 = g->edx;
    t505 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
    wr32(sp0 - 0x50u, t505);
    wr32(sp0 - 0x54u, ebp);
    g->eax = rd32(self + 0xd4u);
    t506 = rd32(self + 0xd4u);
    g->esp = sp0 - 0x4cu;
    t507 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebp, t505);
    if ((cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d508 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d508);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d509 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d509);
    }
    d510 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d510, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d510, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d510, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d511 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d511);
    }
    d512 = (double)rdf32(edi + 0x48u);
    if (!(d512 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d512, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d512, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d513 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d513);
    }
    d514 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d514, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d514, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d514, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d515 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d515);
    }
    d516 = (double)rdf32(edi + 0x4cu);
    if (d516 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d517 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d517);
    }
    t518 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x48u, t518);
    wr32(sp0 - 0x4cu, edi + 0xc4u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, t518);
    t519 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u);
    t520 = rd32(rd32(self + 0xd4u) + 0x260u);
    wr32(edi + 0xe4u, t519);
    t521 = rd32(t520 + 0x154u);
    wr32(edi + 0xe8u, t521);
    t522 = rd32(t520 + 0x158u);
    wr32(edi + 0xecu, t522);
    t523 = rd32(t520 + 0x15cu);
    wr32(edi + 0xf0u, t523);
    t524 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x48u, t524);
    cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, t524);
    t525 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u);
    t526 = rd32(rd32(self + 0xd4u) + 0x260u);
    wr32(edi + 0xe4u, t525);
    t527 = rd32(t526 + 0x154u);
    wr32(edi + 0xe8u, t527);
    t528 = rd32(t526 + 0x158u);
    wr32(edi + 0xecu, t528);
    t529 = rd32(t526 + 0x15cu);
    wr32(edi + 0xf0u, t529);
    t530 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x48u, t530);
    wr32(sp0 - 0x4cu, edi + 0x5c4u);
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, t530);
    g->eax = rd32(self + 0xd4u);
    g->edx = rd32(edi);
    t531 = rd32(self + 0xd4u);
    t532 = rd32(edi);
    t533 = rd32(rd32(self + 0xd4u) + 0x260u);
    t534 = cow_thiscall(g, rd32(t532 + 0x318u), edi, 0);
    t535 = g->ecx;
    t536 = g->edx;
    if (t534 == 0u)
    {
        eax = t534;
        ecx = t535;
        edx = t536;
        ebp = t533 + 0x150u;
        wr32(sp0 - 0x48u, ebp);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t537 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, ebp);
        d538 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d538, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d538, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = edi + 0x61cu;
        }
        else
        {
            eax = cow_fsw(g, d538, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = edi + 0x61cu;
            d539 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d539);
        }
        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d540 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d540);
        }
        d541 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d541, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d541, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d541, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d542 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d542);
        }
        d543 = (double)rdf32(edi + 0x620u);
        if (!(d543 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d543, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d543, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d544 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d544);
        }
        d545 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d545, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d545, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d545, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d546 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d546);
        }
        d547 = (double)rdf32(edi + 0x624u);
        if (d547 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d548 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d548);
        }
    }
    t549 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x48u, t549);
    wr32(sp0 - 0x4cu, edi + 0x5fcu);
    eax = rd32(self + 0xd4u);
    ecx = t549;
    edx = edi + 0x5fcu;
    loc_48 = t549;
    loc_4c = edi + 0x5fcu;
L_1009161b: ;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, loc_4c, loc_48);
    wr32(edi + 0x608u, 0x3f800000u);
    t635 = rd32(self + 0xa0u);
    t636 = rd8(sp0 - 0x31u);
    wr32(t635 + 0x7d8u, 0x20202020u);
    wr32(edi + 0x7d8u, 0x20202020u);
    t637 = rd32(self + 0x1a4u);
    wr32(edi + 0x7c8u, t637);
    t638 = (rd32(self + 0x120u) & 0xffff00ffu) | (uint8_t)(rd32(self + 0x120u) >> 8u | 4u) << 8u;
    wr32(self + 0x120u, t638);
    ecx = t635;
    edx = t637;
    ebx = (ebx & 0xffffff00u) | t636;
L_10091663: ;
    if ((rd32(self + 0x120u) >> 8u & 4u) != 0u)
    {
        eax = rd32(self + 0x120u);
        if ((uint8_t)ebx != 0u) goto L_100916a2;
        if (rd8(sp0 - 0x34u) != 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x34u);
            goto L_100916a2;
        }
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x34u);
        if (rd8(sp0 - 0x33u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x33u);
            goto L_1009168e;
        }
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x33u);
        zf = (eax & 0x1800u) == 0x800u;
        eax = eax & 0x1800u;
L_100916a5: ;
        if (zf) goto L_100916ae;
L_100916a7: ;
        g->esp = sp0 - 0x44u;
        cow_fastcall(g, COW_IMG(0x10092870u), self, edx, 0);
        t639 = g->ecx;
        t640 = g->edx;
        ecx = t639;
        edx = t640;
    }
L_100916ae: ;
    if (!(rd32(self + 0x134u) & 1u))
    {
        eax = rd32(self + 0x134u);
        goto L_10091a9d;
    }
    eax = rd32(self + 0x134u);
    wr32(sp0 - 0x48u, 0x92u);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t641 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x92u);
    t642 = g->edx;
    wr32(sp0 - 0x4cu, t641);
    t643 = rd32(self + 0xa0u);
    wr32(sp0 - 0x50u, t643);
    wr32(sp0 - 0x54u, t643);
    g->edx = t642;
    g->esp = sp0 - 0x40u;
    t644 = cow_call_regs(g, COW_IMG(0x100adee0u), t641, g->ecx, g->edx, 1, 5, t643, t643, t641, 0x92u, rd32(sp0 - 0x44u));
    t645 = g->edx;
    if ((rd32(self + 0x134u) & 0x20000u) != 0u)
    {
        eax = t644;
        edx = t645;
        goto L_10091a83;
    }
    eax = t644;
    ecx = rd32(self + 0x134u);
    edx = t645;
    if ((uint8_t)eax == 0u) goto L_10091a83;
    if (rd32(self + 0xa8u) == 0u)
    {
        eax = rd32(self + 0xa8u);
    }
    else
    {
        eax = rd32(self + 0xa8u);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t646 = cow_fastcall(g, COW_IMG(0x10092800u), self, edx, 0);
        t647 = g->ecx;
        t648 = g->edx;
        eax = t646;
        ecx = t647;
        edx = t648;
    }
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    g->eax = eax;
    g->edx = edx;
    t649 = rd32(self + 0x130u);
    g->esp = sp0 - 0x48u;
    t650 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t651 = g->edx;
    g->esp = sp0 - 0x44u;
    t652 = cow_fastcall(g, COW_IMG(0x100748f0u), t650, t651, 0);
    t653 = g->ecx;
    t654 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t650 == 0u)
    {
        eax = t652;
        ecx = t653;
        edx = t654;
        edi = 0u;
    }
    else
    {
        edx = t654;
        ebx = t650;
        edi = (t649 >> 0x1au & 0xfu) + 0x25u;
        wr32(sp0 - 0x48u, edi);
        wr32(sp0 - 0x4cu, self);
        wr32(sp0 - 0x50u, self + 4u);
        g->eax = self + 4u;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t655 = cow_thiscall(g, COW_IMG(0x100c59b0u), ebx, 3, self + 4u, self, edi);
        t656 = g->ecx;
        t657 = g->edx;
        eax = t655;
        ecx = t656;
        edx = t657;
        edi = t655;
    }
    wr32(self + 0xa8u, edi);
    if (edi == 0u) goto L_100926b0;
    wr32(sp0 - 0x48u, self + 0x14u);
    t658 = rd32(edi + 0x88u) | 8u;
    wr32(edi + 0x88u, t658);
    wr32(sp0 - 0x4cu, edi + 0x44u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t659 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, self + 0x14u);
    t660 = g->edx;
    d661 = (double)rdf32(edi + 0x44u);
    if ((cow_fsw(g, d661, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d661, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t660;
        ebx = edi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d661, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t660;
        ebx = edi + 0x44u;
        d662 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d662);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d663 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d663);
    }
    d664 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d664, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d664, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d664, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d665 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d665);
    }
    d666 = (double)rdf32(edi + 0x48u);
    if (!(d666 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d666, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d666, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d667 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d667);
    }
    d668 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d668, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d668, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d668, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d669 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d669);
    }
    d670 = (double)rdf32(edi + 0x4cu);
    if (d670 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d671 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d671);
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0x34u);
    g->eax = self + 4u;
    g->ecx = edi + 0x34u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t672 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, self + 4u);
    t673 = g->ecx;
    t674 = g->edx;
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, ebx);
    g->ecx = t673;
    g->esp = sp0 - 0x4cu;
    t675 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx, self + 0x14u);
    t676 = g->ecx;
    if ((cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t676;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t676;
        d677 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d677);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d678 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d678);
    }
    d679 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d679, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d679, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d679, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d680 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d680);
    }
    d681 = (double)rdf32(edi + 0x48u);
    if (!(d681 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d681, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d681, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d682 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d682);
    }
    d683 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d683, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d683, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d683, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d684 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d684);
    }
    d685 = (double)rdf32(edi + 0x4cu);
    if (!(d685 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d685, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d685, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d686 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d686);
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0xc4u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, self + 4u);
    t687 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t687);
    t688 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t688);
    t689 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t689);
    wr32(sp0 - 0x48u, self + 4u);
    t690 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t690);
    cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, self + 4u);
    wr32(sp0 - 0x48u, self + 4u);
    t691 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t691);
    t692 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t692);
    t693 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t693);
    t694 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t694);
    wr32(sp0 - 0x4cu, edi + 0x5c4u);
    g->edx = edi + 0x5c4u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, self + 4u);
    t695 = g->edx;
    g->eax = rd32(edi);
    g->edx = t695;
    t696 = rd32(edi);
    t697 = cow_thiscall(g, rd32(t696 + 0x318u), edi, 0);
    t698 = g->ecx;
    t699 = g->edx;
    if (t697 != 0u)
    {
        eax = t697;
        edx = t699;
    }
    else
    {
        ecx = t698;
        edx = t699;
        wr32(sp0 - 0x48u, self + 0x14u);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = edi + 0x61cu;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t700 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, self + 0x14u);
        t701 = g->edx;
        d702 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d702, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d702, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            edx = t701;
        }
        else
        {
            eax = cow_fsw(g, d702, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            edx = t701;
            d703 = fr(g, (double)rdf32(edi + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x61cu, (float)d703);
        }
        d704 = (double)rdf32(edi + 0x61cu);
        if (!(d704 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d704, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d704, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d705 = fr(g, (double)rdf32(edi + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x61cu, (float)d705);
        }
        d706 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d706, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d706, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d706, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d707 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d707);
        }
        d708 = (double)rdf32(edi + 0x620u);
        if (!(d708 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d708, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d708, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d709 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d709);
        }
        d710 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d710, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d710, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d710, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d711 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d711);
        }
        d712 = (double)rdf32(edi + 0x624u);
        if (!(d712 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d712, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d712, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d713 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d713);
        }
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0x5fcu);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5fcu, self + 4u);
    wr32(edi + 0x608u, 0x3f800000u);
    t714 = rd32(self + 0x134u) | 0x20000u;
    wr32(self + 0x134u, t714);
L_10091af5: ;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, self + 0xacu);
    ebx = self + 0xacu;
    ebp = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
    loc_30 = 0u;
    loc_2c = self + 0xacu;
L_10091b05: ;
    t721 = rd32(self + 0x134u);
    t722 = 1u << (ebp & 0x1fu);
    wr32(sp0 - 0x24u, t722);
    if (((uint8_t)(1u << (ebp & 0x1fu)) & (uint8_t)(t721 >> 1u)) == 0u)
    {
        eax = t722;
        ecx = t721 >> 1u;
        edx = t721 >> 9u;
        goto L_10091ebe;
    }
    eax = t722;
    ecx = t721 >> 1u;
    edx = t721 >> 9u;
    loc_24 = t722;
    if (((uint8_t)eax & (uint8_t)edx) != 0u) goto L_10091ea6;
    if (rd32(ebx) != 0u)
    {
        wr32(sp0 - 0x48u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t723 = cow_thiscall(g, COW_IMG(0x10092780u), self, 1, ebp);
        t724 = g->ecx;
        t725 = g->edx;
        eax = t723;
        ecx = t724;
        edx = t725;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
    }
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t726 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t727 = g->edx;
    g->esp = sp0 - 0x44u;
    t728 = cow_fastcall(g, COW_IMG(0x100748f0u), t726, t727, 0);
    t729 = g->ecx;
    t730 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t726 == 0u)
    {
        eax = t728;
        ecx = t729;
        edx = t730;
        edi = 0u;
    }
    else
    {
        eax = t728;
        edi = t726;
        wr32(sp0 - 0x48u, ebp + 0x35u);
        wr32(sp0 - 0x4cu, self);
        wr32(sp0 - 0x50u, self + 4u);
        g->eax = eax;
        g->edx = self + 4u;
        g->esp = sp0 - 0x44u;
        t731 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, self + 4u, self, ebp + 0x35u);
        t732 = g->ecx;
        t733 = g->edx;
        eax = t731;
        ecx = t732;
        edx = t733;
        edi = t731;
    }
    wr32(ebx, edi);
    if (edi == 0u) goto L_100926b0;
    wr32(sp0 - 0x48u, self + 0x14u);
    t734 = rd32(edi + 0x88u) | 8u;
    wr32(edi + 0x88u, t734);
    wr32(sp0 - 0x4cu, edi + 0x44u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t735 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, self + 0x14u);
    t736 = g->ecx;
    t737 = g->edx;
    d738 = (double)rdf32(edi + 0x44u);
    if ((cow_fsw(g, d738, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d738, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t736;
        edx = t737;
        ebx = edi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d738, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t736;
        edx = t737;
        ebx = edi + 0x44u;
        d739 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d739);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d740 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d740);
    }
    d741 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d741, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d741, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d741, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d742 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d742);
    }
    d743 = (double)rdf32(edi + 0x48u);
    if (!(d743 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d743, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d743, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d744 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d744);
    }
    d745 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d745, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d745, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d745, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d746 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d746);
    }
    d747 = (double)rdf32(edi + 0x4cu);
    if (d747 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d748 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d748);
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0x34u);
    g->eax = edi + 0x34u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t749 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, self + 4u);
    t750 = g->ecx;
    t751 = g->edx;
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, ebx);
    g->edx = t751;
    g->esp = sp0 - 0x4cu;
    t752 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx, self + 0x14u);
    t753 = g->edx;
    if ((cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t753;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t753;
        d754 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d754);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d755 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d755);
    }
    d756 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d756, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d756, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d756, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d757 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d757);
    }
    d758 = (double)rdf32(edi + 0x48u);
    if (!(d758 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d758, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d758, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d759 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d759);
    }
    d760 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d760, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d760, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d760, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d761 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d761);
    }
    d762 = (double)rdf32(edi + 0x4cu);
    if (!(d762 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d762, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d762, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d763 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d763);
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0xc4u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, self + 4u);
    t764 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t764);
    t765 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t765);
    t766 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t766);
    wr32(sp0 - 0x48u, self + 4u);
    t767 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t767);
    cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, self + 4u);
    wr32(sp0 - 0x48u, self + 4u);
    t768 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t768);
    t769 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t769);
    t770 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t770);
    t771 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t771);
    wr32(sp0 - 0x4cu, edi + 0x5c4u);
    g->eax = t771;
    t772 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, self + 4u);
    g->edx = rd32(edi);
    t773 = rd32(edi);
    t774 = cow_thiscall(g, rd32(t773 + 0x318u), edi, 0);
    t775 = g->ecx;
    t776 = g->edx;
    if (t774 != 0u)
    {
        ecx = t775;
        edx = t776;
    }
    else
    {
        ecx = t775;
        edx = t776;
        wr32(sp0 - 0x48u, self + 0x14u);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = edi + 0x61cu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t777 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, self + 0x14u);
        t778 = g->ecx;
        t779 = g->edx;
        d780 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d780, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d780, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t778;
            edx = t779;
        }
        else
        {
            eax = cow_fsw(g, d780, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t778;
            edx = t779;
            d781 = fr(g, (double)rdf32(edi + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x61cu, (float)d781);
        }
        d782 = (double)rdf32(edi + 0x61cu);
        if (!(d782 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d782, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d782, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d783 = fr(g, (double)rdf32(edi + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x61cu, (float)d783);
        }
        d784 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d784, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d784, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d784, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d785 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d785);
        }
        d786 = (double)rdf32(edi + 0x620u);
        if (!(d786 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d786, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d786, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d787 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d787);
        }
        d788 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d788, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d788, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d788, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d789 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d789);
        }
        d790 = (double)rdf32(edi + 0x624u);
        if (d790 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d791 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d791);
        }
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0x5fcu);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5fcu, self + 4u);
    t792 = g->edx;
    t793 = rd32(sp0 - 0x24u);
    t794 = rd32(sp0 - 0x2cu);
    t795 = rd32(sp0 - 0x30u);
    wr32(edi + 0x608u, 0x3f800000u);
    eax = t793;
    edx = t792;
    ebx = t794;
    ebp = t795;
L_10091ea6: ;
    t796 = rd32(self + 0x134u) | (uint8_t)eax << 9u;
    wr32(self + 0x134u, t796);
    ecx = t796;
L_10091eca: ;
    wr32(sp0 - 0x30u, ebp + 1u);
    wr32(sp0 - 0x2cu, ebx + 4u);
    if ((int32_t)(ebp + 1u) < 8)
    {
        cf = ebp + 1u < 8u;
        pf = PARITY((uint8_t)(ebp - 7u));
        zf = ebp == 7u;
        sf = (int32_t)(ebp - 7u) < 0;
        of = ((ebp + 1u ^ 8u) & (ebp + 1u ^ ebp - 7u)) >> 0x1fu;
        loc_30 = ebp + 1u;
        ebp = ebp + 1u;
        loc_2c = ebx + 4u;
        ebx = ebx + 4u;
        goto L_10091b05;
    }
    if ((rd32(self + 0x134u) & 0x100000u) == 0u)
    {
        eax = rd32(self + 0x134u);
        goto L_100922b4;
    }
    eax = rd32(self + 0x134u);
    if ((eax & 0x40000u) != 0u) goto L_100922a4;
    if (rd32(self + 0xccu) == 0u)
    {
        eax = rd32(self + 0xccu);
    }
    else
    {
        eax = rd32(self + 0xccu);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t799 = cow_fastcall(g, COW_IMG(0x10092710u), self, edx, 0);
        t800 = g->ecx;
        t801 = g->edx;
        eax = t799;
        ecx = t800;
        edx = t801;
    }
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    wr32(sp0 - 0x10u, 0x447a0000u);
    wr32(sp0 - 0xcu, 0x447a0000u);
    wr32(sp0 - 8u, 0x447a0000u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t802 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t803 = g->edx;
    g->esp = sp0 - 0x44u;
    t804 = cow_fastcall(g, COW_IMG(0x100748f0u), t802, t803, 0);
    t805 = g->ecx;
    t806 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t802 == 0u)
    {
        eax = t804;
        ecx = t805;
        edx = t806;
        edi = 0u;
    }
    else
    {
        eax = t804;
        edx = t806;
        edi = t802;
        wr32(sp0 - 0x48u, 0x52u);
        wr32(sp0 - 0x4cu, self);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t807 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, sp0 - 0x10u, self, 0x52u);
        t808 = g->ecx;
        t809 = g->edx;
        eax = t807;
        ecx = t808;
        edx = t809;
        edi = t807;
    }
    wr32(self + 0xccu, edi);
    if (edi == 0u) goto L_100926b0;
    t810 = rd32(edi + 0x88u) | 8u;
    wr32(edi + 0x88u, t810);
    wr32(sp0 - 0x48u, self + 0x14u);
    wr32(sp0 - 0x4cu, edi + 0x44u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x44u;
    t811 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, self + 0x14u);
    t812 = g->ecx;
    d813 = (double)rdf32(edi + 0x44u);
    if ((cow_fsw(g, d813, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d813, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t812;
        ebp = edi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d813, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t812;
        ebp = edi + 0x44u;
        d814 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d814);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d815 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d815);
    }
    d816 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d816, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d816, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d816, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d817 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d817);
    }
    d818 = (double)rdf32(edi + 0x48u);
    if (!(d818 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d818, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d818, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d819 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d819);
    }
    d820 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d820, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d820, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d820, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d821 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d821);
    }
    d822 = (double)rdf32(edi + 0x4cu);
    if (d822 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d823 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d823);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0x34u);
    g->eax = edi + 0x34u;
    g->ecx = ecx;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x44u;
    t824 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, sp0 - 0x10u);
    t825 = g->ecx;
    t826 = g->edx;
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, ebp);
    g->esp = sp0 - 0x4cu;
    t827 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebp, self + 0x14u);
    if ((cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d828 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d828);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d829 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d829);
    }
    d830 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d830, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d830, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d830, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d831 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d831);
    }
    d832 = (double)rdf32(edi + 0x48u);
    if (!(d832 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d832, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d832, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d833 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d833);
    }
    d834 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d834, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d834, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d834, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d835 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d835);
    }
    d836 = (double)rdf32(edi + 0x4cu);
    if (!(d836 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d836, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d836, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d837 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d837);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0xc4u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, sp0 - 0x10u);
    t838 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t838);
    t839 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t839);
    t840 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t840);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t841 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t841);
    cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, sp0 - 0x10u);
    t842 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t842);
    t843 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t843);
    t844 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t844);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0x5c4u);
    t845 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t845);
    g->eax = sp0 - 0x10u;
    t846 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, sp0 - 0x10u);
    g->edx = rd32(edi);
    t847 = rd32(edi);
    t848 = cow_thiscall(g, rd32(t847 + 0x318u), edi, 0);
    t849 = g->ecx;
    t850 = g->edx;
    if (t848 != 0u)
    {
        edx = t850;
    }
    else
    {
        eax = t848;
        ecx = t849;
        edx = t850;
        wr32(sp0 - 0x48u, self + 0x14u);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t851 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, self + 0x14u);
        t852 = g->edx;
        d853 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d853, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d853, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            edx = t852;
            ebp = edi + 0x61cu;
        }
        else
        {
            eax = cow_fsw(g, d853, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            edx = t852;
            ebp = edi + 0x61cu;
            d854 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp, (float)d854);
        }
        if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d855 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp, (float)d855);
        }
        d856 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d856, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d856, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d856, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d857 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d857);
        }
        d858 = (double)rdf32(edi + 0x620u);
        if (!(d858 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d858, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d858, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d859 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d859);
        }
        d860 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d860, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d860, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d860, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d861 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d861);
        }
        d862 = (double)rdf32(edi + 0x624u);
        if (d862 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d863 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d863);
        }
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0x5fcu);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5fcu, sp0 - 0x10u);
    wr32(edi + 0x608u, 0x3f800000u);
    t864 = rd32(self + 0x134u) | 0x40000u;
    wr32(self + 0x134u, t864);
    eax = t864;
L_100922a4: ;
    t865 = rd32(self + 0xccu);
    wr32(sp0 - 0x48u, t865);
    g->esp = sp0 - 0x44u;
    cow_fastcall(g, COW_IMG(0x1008f2f0u), self, t865, 1, t865);
    t866 = g->ecx;
    t867 = g->edx;
    ecx = t866;
    edx = t867;
L_100922c2: ;
    if ((rd32(self + 0x138u) & 0x4000000u) == 0u)
    {
        eax = rd32(self + 0x134u);
        goto L_100926a2;
    }
    eax = rd32(self + 0x134u);
    if ((eax & 0x80000u) != 0u) goto L_1009268c;
    if (rd32(self + 0xd0u) == 0u)
    {
        eax = rd32(self + 0xd0u);
    }
    else
    {
        eax = rd32(self + 0xd0u);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t870 = cow_fastcall(g, COW_IMG(0x100926c0u), self, edx, 0);
        t871 = g->ecx;
        t872 = g->edx;
        eax = t870;
        ecx = t871;
        edx = t872;
    }
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    wr32(sp0 - 0x10u, 0x447a0000u);
    wr32(sp0 - 0xcu, 0x447a0000u);
    wr32(sp0 - 8u, 0x447a0000u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t873 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t874 = g->edx;
    g->esp = sp0 - 0x44u;
    t875 = cow_fastcall(g, COW_IMG(0x100748f0u), t873, t874, 0);
    t876 = g->ecx;
    t877 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t873 == 0u)
    {
        eax = t875;
        ecx = t876;
        edx = t877;
        edi = 0u;
    }
    else
    {
        edx = t877;
        edi = t873;
        wr32(sp0 - 0x48u, 0x53u);
        wr32(sp0 - 0x4cu, self);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t878 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, sp0 - 0x10u, self, 0x53u);
        t879 = g->ecx;
        t880 = g->edx;
        eax = t878;
        ecx = t879;
        edx = t880;
        edi = t878;
    }
    wr32(self + 0xd0u, edi);
    if (edi == 0u) goto L_100926b0;
    t881 = rd32(edi + 0x88u) | 8u;
    wr32(edi + 0x88u, t881);
    wr32(sp0 - 0x48u, self + 0x14u);
    wr32(sp0 - 0x4cu, edi + 0x44u);
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t882 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, self + 0x14u);
    d883 = (double)rdf32(edi + 0x44u);
    if ((cow_fsw(g, d883, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d883, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ebp = edi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d883, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ebp = edi + 0x44u;
        d884 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d884);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d885 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d885);
    }
    d886 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d886, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d886, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d886, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d887 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d887);
    }
    d888 = (double)rdf32(edi + 0x48u);
    if (!(d888 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d888, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d888, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d889 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d889);
    }
    d890 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d890, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d890, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d890, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d891 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d891);
    }
    d892 = (double)rdf32(edi + 0x4cu);
    if (!(d892 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d892, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d892, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d893 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d893);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0x34u);
    g->eax = eax;
    g->ecx = sp0 - 0x10u;
    g->edx = edi + 0x34u;
    g->esp = sp0 - 0x44u;
    t894 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, sp0 - 0x10u);
    t895 = g->ecx;
    t896 = g->edx;
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, ebp);
    g->edx = t896;
    g->esp = sp0 - 0x4cu;
    t897 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebp, self + 0x14u);
    t898 = g->edx;
    if ((cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t898;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t898;
        d899 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d899);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d900 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d900);
    }
    d901 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d901, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d901, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d901, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d902 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d902);
    }
    d903 = (double)rdf32(edi + 0x48u);
    if (!(d903 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d903, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d903, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d904 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d904);
    }
    d905 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d905, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d905, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d905, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d906 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d906);
    }
    d907 = (double)rdf32(edi + 0x4cu);
    if (d907 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d908 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d908);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0xc4u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, sp0 - 0x10u);
    t909 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t909);
    t910 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t910);
    t911 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t911);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t912 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t912);
    cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, sp0 - 0x10u);
    t913 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t913);
    t914 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t914);
    t915 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t915);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0x5c4u);
    t916 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t916);
    g->eax = edi + 0x5c4u;
    t917 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, sp0 - 0x10u);
    g->edx = rd32(edi);
    t918 = rd32(edi);
    t919 = cow_thiscall(g, rd32(t918 + 0x318u), edi, 0);
    t920 = g->ecx;
    t921 = g->edx;
    if (t919 != 0u)
    {
        edx = t921;
    }
    else
    {
        eax = t919;
        ecx = t920;
        edx = t921;
        wr32(sp0 - 0x48u, self + 0x14u);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t922 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, self + 0x14u);
        t923 = g->edx;
        d924 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d924, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d924, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            edx = t923;
            ebp = edi + 0x61cu;
        }
        else
        {
            eax = cow_fsw(g, d924, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            edx = t923;
            ebp = edi + 0x61cu;
            d925 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp, (float)d925);
        }
        if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d926 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp, (float)d926);
        }
        d927 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d927, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d927, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d927, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d928 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d928);
        }
        d929 = (double)rdf32(edi + 0x620u);
        if (!(d929 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d929, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d929, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d930 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d930);
        }
        d931 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d931, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d931, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d931, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d932 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d932);
        }
        d933 = (double)rdf32(edi + 0x624u);
        if (d933 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d934 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d934);
        }
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, edi + 0x5fcu);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5fcu, sp0 - 0x10u);
    wr32(edi + 0x608u, 0x3f800000u);
    t935 = rd32(self + 0x134u) | 0x80000u;
    wr32(self + 0x134u, t935);
    eax = t935;
L_1009268c: ;
    t936 = rd32(self + 0xd0u);
    wr32(sp0 - 0x48u, t936);
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t937 = cow_fastcall(g, COW_IMG(0x1008f2f0u), self, t936, 1, t936);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    return t937;
L_1008f8d1: ;
    t33 = rd32(self + 4u);
    wr32(sp0 - 0x10u, t33);
    t34 = rd32(self + 8u);
    wr32(sp0 - 0xcu, t34);
    t35 = rd32(self + 0xcu);
    wr32(sp0 - 8u, t35);
    t36 = rd32(self + 0x10u);
    wr32(sp0 - 4u, t36);
    t37 = rd32(self + 0x14u);
    wr32(sp0 - 0x20u, t37);
    t38 = rd32(self + 0x18u);
    wr32(sp0 - 0x1cu, t38);
    t39 = rd32(self + 0x1cu);
    wr32(sp0 - 0x18u, t39);
    t40 = rd32(self + 0x20u);
    wr32(sp0 - 0x14u, t40);
    eax = t38;
    edx = t40;
    loc_20 = t37;
    loc_1c = t38;
    loc_18 = t39;
    loc_14 = t40;
    goto L_1008f909;
L_1008f95c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t51 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t52 = g->edx;
    g->esp = sp0 - 0x44u;
    t53 = cow_fastcall(g, COW_IMG(0x100748f0u), t51, t52, 0);
    t54 = g->ecx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t51 == 0u)
    {
        ecx = t54;
        goto L_1008f9c0;
    }
    eax = t53;
    edi = t51;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, self);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t55 = cow_thiscall(g, COW_IMG(0x100c56e0u), edi, 3, sp0 - 0x10u, self, 0u);
    t56 = g->ecx;
    eax = t55;
    ecx = t56;
    goto L_1008f9c2;
L_1008f989: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t57 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t58 = g->edx;
    g->esp = sp0 - 0x44u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t57, t58, 0);
    t59 = g->ecx;
    t60 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t57 == 0u)
    {
        ecx = t59;
        goto L_1008f9c0;
    }
    edx = t60;
    edi = t57;
    wr32(sp0 - 0x48u, 0u);
    t61 = rd8(self + 0xefu) - 1u;
    wr32(sp0 - 0x4cu, t61);
    wr32(sp0 - 0x50u, self);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->eax = t61;
    g->esp = sp0 - 0x44u;
    t62 = cow_thiscall(g, COW_IMG(0x100c5880u), edi, 4, sp0 - 0x10u, self, t61, 0u);
    t63 = g->ecx;
    eax = t62;
    ecx = t63;
    goto L_1008f9c2;
L_1008f9c0: ;
    eax = 0u;
    goto L_1008f9c2;
L_1008fdcd: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t143 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x24u, 0);
    t144 = g->edx;
    g->edx = t144;
    t145 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x28u, 0);
    t146 = g->ecx;
    t147 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0x794u);
    g->edx = t147;
    g->esp = sp0 - 0x48u;
    t148 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x794u, 4u);
    t149 = g->edx;
    g->esp = sp0 - 0x44u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t148, t149, 0);
    t150 = g->ecx;
    t151 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t148 == 0u)
    {
        ecx = t150;
        edx = t151;
        eax = 0u;
    }
    else
    {
        edx = t151;
        edi = t148;
        wr32(sp0 - 0x48u, self);
        t152 = rd32(self + 0xf8u);
        wr32(sp0 - 0x4cu, t152);
        g->eax = t152;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t153 = cow_thiscall(g, COW_IMG(0x100c41f0u), edi, 2, t152, self);
        t154 = g->ecx;
        t155 = g->edx;
        eax = t153;
        ecx = t154;
        edx = t155;
    }
    wr32(self + 0xa0u, eax);
    if (eax == 0u) goto L_10090335;
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, eax + 0x34u);
    g->eax = eax + 0x34u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t156 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, eax + 0x34u, self + 4u);
    t157 = g->ecx;
    t158 = g->edx;
    t159 = rd32(self + 0xa0u);
    wr32(sp0 - 0x2cu, t159);
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, t159 + 0x44u);
    g->edx = t158;
    g->esp = sp0 - 0x4cu;
    t160 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t159 + 0x44u, self + 0x14u);
    t161 = g->edx;
    d162 = (double)rdf32(t159 + 0x44u);
    if ((cow_fsw(g, d162, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d162, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t161;
        ebx = t159 + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d162, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t161;
        ebx = t159 + 0x44u;
        d163 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d163);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d164 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d164);
    }
    d165 = (double)rdf32(rd32(sp0 - 0x2cu) + 0x48u);
    if ((cow_fsw(g, d165, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d165, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = rd32(sp0 - 0x2cu);
    }
    else
    {
        eax = cow_fsw(g, d165, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = rd32(sp0 - 0x2cu);
        d166 = fr(g, (double)rdf32(ecx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x48u, (float)d166);
    }
    d167 = (double)rdf32(ecx + 0x48u);
    if (!(d167 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d167, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d167, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d168 = fr(g, (double)rdf32(ecx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x48u, (float)d168);
    }
    d169 = (double)rdf32(ecx + 0x4cu);
    if ((cow_fsw(g, d169, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d169, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d169, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d170 = fr(g, (double)rdf32(ecx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x4cu, (float)d170);
    }
    d171 = (double)rdf32(ecx + 0x4cu);
    if (d171 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d172 = fr(g, (double)rdf32(ecx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x4cu, (float)d172);
    }
    wr32(sp0 - 0x48u, self + 0x14u);
    t173 = rd32(self + 0xa0u) + 0x44u;
    wr32(sp0 - 0x4cu, t173);
    g->eax = t173;
    g->ecx = ecx;
    g->edx = edx;
    t174 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    t175 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t173, self + 0x14u);
    t176 = g->ecx;
    t177 = g->edx;
    d178 = (double)rdf32(t174 + 0x44u);
    if ((cow_fsw(g, d178, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d178, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t176;
        edx = t177;
        ebx = t174;
    }
    else
    {
        eax = cow_fsw(g, d178, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t176;
        edx = t177;
        ebx = t174;
        d179 = fr(g, (double)rdf32(ebx + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x44u, (float)d179);
    }
    d180 = (double)rdf32(ebx + 0x44u);
    if (!(d180 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d180, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d180, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d181 = fr(g, (double)rdf32(ebx + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x44u, (float)d181);
    }
    d182 = (double)rdf32(ebx + 0x48u);
    if ((cow_fsw(g, d182, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d182, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d182, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d183 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x48u, (float)d183);
    }
    d184 = (double)rdf32(ebx + 0x48u);
    if (!(d184 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d184, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d184, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d185 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x48u, (float)d185);
    }
    d186 = (double)rdf32(ebx + 0x4cu);
    if ((cow_fsw(g, d186, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d186, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d186, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d187 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x4cu, (float)d187);
    }
    d188 = (double)rdf32(ebx + 0x4cu);
    if (d188 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d189 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x4cu, (float)d189);
    }
    wr32(sp0 - 0x48u, self + 4u);
    t190 = rd32(self + 0xa0u) + 0xc4u;
    wr32(sp0 - 0x4cu, t190);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t190, self + 4u);
    t191 = rd32(self + 0x14u);
    t192 = rd32(self + 0xa0u);
    wr32(t192 + 0xe4u, t191);
    t193 = rd32(self + 0x18u);
    wr32(t192 + 0xe8u, t193);
    t194 = rd32(self + 0x1cu);
    wr32(t192 + 0xecu, t194);
    t195 = rd32(self + 0x20u);
    wr32(t192 + 0xf0u, t195);
    wr32(sp0 - 0x48u, self + 4u);
    cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, self + 4u);
    t196 = rd32(self + 0x14u);
    t197 = rd32(self + 0xa0u);
    wr32(t197 + 0x744u, t196);
    t198 = rd32(self + 0x18u);
    wr32(t197 + 0x748u, t198);
    t199 = rd32(self + 0x1cu);
    wr32(t197 + 0x74cu, t199);
    t200 = rd32(self + 0x20u);
    wr32(t197 + 0x750u, t200);
    t201 = rd32(self + 4u);
    t202 = rd32(self + 0xa0u);
    wr32(t202 + 0x734u, t201);
    t203 = rd32(self + 8u);
    wr32(t202 + 0x738u, t203);
    t204 = rd32(self + 0xcu);
    wr32(t202 + 0x73cu, t204);
    t205 = rd32(self + 0x10u);
    wr32(t202 + 0x740u, t205);
    t206 = rd32(self + 0x184u) * 0x3cu;
    wr32(sp0 - 0x48u, t206);
    g->eax = t206;
    g->edx = t205;
    t207 = cow_thiscall(g, COW_IMG(0x10097a80u), self, 1, t206);
    t208 = g->ecx;
    t209 = g->edx;
    eax = t207;
    ecx = t208;
    edx = t209;
    ebp = self + 4u;
    edi = self + 0x14u;
    goto L_100905d4;
L_10090072: ;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0x600u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t210 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x600u, 4u);
    t211 = g->edx;
    g->esp = sp0 - 0x44u;
    t212 = cow_fastcall(g, COW_IMG(0x100748f0u), t210, t211, 0);
    t213 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t210 == 0u)
    {
        edx = t213;
        eax = 0u;
    }
    else
    {
        eax = t212;
        edx = t213;
        edi = t210;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t214 = cow_thiscall(g, COW_IMG(0x100c3990u), edi, 0);
        t215 = g->edx;
        eax = t214;
        edx = t215;
    }
    wr32(self + 0xa0u, eax);
    if (eax == 0u) goto L_10090335;
    wr32(eax + 0x70u, self);
    wr32(sp0 - 0x48u, self + 4u);
    t216 = rd32(self + 0xa0u) + 0x34u;
    wr32(sp0 - 0x4cu, t216);
    g->eax = self + 4u;
    g->ecx = t216;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t217 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t216, self + 4u);
    t218 = g->ecx;
    t219 = g->edx;
    wr32(sp0 - 0x50u, self + 0x14u);
    t220 = rd32(self + 0xa0u) + 0x44u;
    wr32(sp0 - 0x54u, t220);
    g->ecx = t218;
    g->edx = t219;
    t221 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x4cu;
    t222 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t220, self + 0x14u);
    t223 = g->ecx;
    t224 = g->edx;
    if ((cow_fsw(g, (double)rdf32(t220), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(t220), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t223;
        edx = t224;
        ebx = t220;
        ebp = t221;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(t220), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t223;
        edx = t224;
        ebx = t220;
        ebp = t221;
        d225 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d225);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d226 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d226);
    }
    d227 = (double)rdf32(ebp + 0x48u);
    if ((cow_fsw(g, d227, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d227, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d227, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d228 = fr(g, (double)rdf32(ebp + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp + 0x48u, (float)d228);
    }
    d229 = (double)rdf32(ebp + 0x48u);
    if (!(d229 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d230 = fr(g, (double)rdf32(ebp + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp + 0x48u, (float)d230);
    }
    d231 = (double)rdf32(ebp + 0x4cu);
    if ((cow_fsw(g, d231, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d231, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d231, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d232 = fr(g, (double)rdf32(ebp + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp + 0x4cu, (float)d232);
    }
    d233 = (double)rdf32(ebp + 0x4cu);
    if (!(d233 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d233, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d233, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d234 = fr(g, (double)rdf32(ebp + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp + 0x4cu, (float)d234);
    }
    wr32(sp0 - 0x48u, self + 0x14u);
    t235 = rd32(self + 0xa0u) + 0x44u;
    wr32(sp0 - 0x4cu, t235);
    g->eax = eax;
    g->ecx = ecx;
    t236 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    t237 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t235, self + 0x14u);
    t238 = g->ecx;
    if ((cow_fsw(g, (double)rdf32(t235), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(t235), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t238;
        ebx = t236;
        ebp = t235;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(t235), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t238;
        ebx = t236;
        ebp = t235;
        d239 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d239);
    }
    if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d240 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebp, (float)d240);
    }
    d241 = (double)rdf32(ebx + 0x48u);
    if ((cow_fsw(g, d241, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d241, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d241, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d242 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x48u, (float)d242);
    }
    d243 = (double)rdf32(ebx + 0x48u);
    if (!(d243 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d243, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d243, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d244 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x48u, (float)d244);
    }
    d245 = (double)rdf32(ebx + 0x4cu);
    if ((cow_fsw(g, d245, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d245, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d245, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d246 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x4cu, (float)d246);
    }
    d247 = (double)rdf32(ebx + 0x4cu);
    if (!(d247 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d247, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d247, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d248 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x4cu, (float)d248);
    }
    wr32(sp0 - 0x48u, self + 4u);
    t249 = rd32(self + 0xa0u) + 0xc4u;
    wr32(sp0 - 0x4cu, t249);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t249, self + 4u);
    t250 = rd32(self + 0x14u);
    t251 = rd32(self + 0xa0u);
    wr32(t251 + 0xe4u, t250);
    t252 = rd32(self + 0x18u);
    wr32(t251 + 0xe8u, t252);
    t253 = rd32(self + 0x1cu);
    wr32(t251 + 0xecu, t253);
    t254 = rd32(self + 0x20u);
    wr32(t251 + 0xf0u, t254);
    wr32(sp0 - 0x48u, self + 4u);
    cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, self + 4u);
    wr32(sp0 - 0x48u, self + 4u);
    t255 = rd32(self + 0x14u);
    t256 = rd32(self + 0xa0u);
    wr32(t256 + 0xe4u, t255);
    t257 = rd32(self + 0x18u);
    wr32(t256 + 0xe8u, t257);
    t258 = rd32(self + 0x1cu);
    wr32(t256 + 0xecu, t258);
    t259 = rd32(self + 0x20u);
    wr32(t256 + 0xf0u, t259);
    g->edx = t259;
    cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, self + 4u);
    t260 = g->edx;
    t261 = rd32(self + 0xf8u);
    wr32(sp0 - 0x48u, t261);
    g->eax = t261;
    g->edx = t260;
    t262 = cow_thiscall(g, COW_IMG(0x100c3a60u), rd32(self + 0xa0u), 1, t261);
    t263 = g->edx;
    t264 = rd32(self + 0x170u) - 0xau;
    wr32(sp0 - 0x48u, t264);
    g->edx = t263;
    t265 = rd32(self + 0xa0u);
    t266 = cow_thiscall(g, COW_IMG(0x100c3cf0u), t265, 1, t264);
    t267 = g->ecx;
    t268 = g->edx;
    wr8(COW_IMG(0x10482f45u), 1u);
    eax = t266;
    ecx = t267;
    edx = t268;
    ebx = self + 4u;
    edi = self + 0x14u;
    goto L_100905d4;
L_100902fb: ;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0x894u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t269 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x894u, 4u);
    t270 = g->edx;
    g->esp = sp0 - 0x44u;
    t271 = cow_fastcall(g, COW_IMG(0x100748f0u), t269, t270, 0);
    t272 = g->ecx;
    t273 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t269 == 0u)
    {
        ecx = t272;
        eax = 0u;
    }
    else
    {
        eax = t271;
        edx = t273;
        edi = t269;
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t274 = cow_thiscall(g, COW_IMG(0x100ac8e0u), edi, 0);
        t275 = g->ecx;
        eax = t274;
        ecx = t275;
    }
    wr32(self + 0xa0u, eax);
    if (eax != 0u) goto L_1009034c;
L_10090335: ;
    t276 = (rd32(self + 0x120u) & 0xffff00ffu) | (rd32(self + 0x120u) >> 8u & 0xfdu) << 8u;
    t277 = rd32(sp0 - 0x44u);
    wr32(self + 0x120u, t276);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = t277;
    g->ebp = rd32(sp0 - 0x3cu);
    return t276;
L_1009034c: ;
    wr32(eax + 0x70u, self);
    wr32(sp0 - 0x48u, self + 4u);
    t278 = rd32(self + 0xa0u) + 0x34u;
    wr32(sp0 - 0x4cu, t278);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t278;
    g->esp = sp0 - 0x44u;
    t279 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t278, self + 4u);
    t280 = g->ecx;
    t281 = g->edx;
    t282 = rd32(self + 0xa0u);
    wr32(sp0 - 0x2cu, t282);
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, t282 + 0x44u);
    g->edx = t281;
    g->esp = sp0 - 0x4cu;
    t283 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t282 + 0x44u, self + 0x14u);
    t284 = g->edx;
    d285 = (double)rdf32(t282 + 0x44u);
    if ((cow_fsw(g, d285, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d285, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t284;
        ebx = t282 + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d285, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t284;
        ebx = t282 + 0x44u;
        d286 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d286);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d287 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d287);
    }
    d288 = (double)rdf32(rd32(sp0 - 0x2cu) + 0x48u);
    if ((cow_fsw(g, d288, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d288, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = rd32(sp0 - 0x2cu);
    }
    else
    {
        eax = cow_fsw(g, d288, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = rd32(sp0 - 0x2cu);
        d289 = fr(g, (double)rdf32(ecx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x48u, (float)d289);
    }
    d290 = (double)rdf32(ecx + 0x48u);
    if (!(d290 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d290, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d290, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d291 = fr(g, (double)rdf32(ecx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x48u, (float)d291);
    }
    d292 = (double)rdf32(ecx + 0x4cu);
    if ((cow_fsw(g, d292, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d292, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d292, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d293 = fr(g, (double)rdf32(ecx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x4cu, (float)d293);
    }
    d294 = (double)rdf32(ecx + 0x4cu);
    if (d294 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d295 = fr(g, (double)rdf32(ecx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ecx + 0x4cu, (float)d295);
    }
    wr32(sp0 - 0x48u, self + 0x14u);
    t296 = rd32(self + 0xa0u) + 0x44u;
    wr32(sp0 - 0x4cu, t296);
    g->eax = t296;
    g->ecx = ecx;
    g->edx = edx;
    t297 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    t298 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t296, self + 0x14u);
    t299 = g->ecx;
    t300 = g->edx;
    d301 = (double)rdf32(t297 + 0x44u);
    if ((cow_fsw(g, d301, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d301, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t299;
        edx = t300;
        ebx = t297;
    }
    else
    {
        eax = cow_fsw(g, d301, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t299;
        edx = t300;
        ebx = t297;
        d302 = fr(g, (double)rdf32(ebx + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x44u, (float)d302);
    }
    d303 = (double)rdf32(ebx + 0x44u);
    if (!(d303 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d303, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d303, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d304 = fr(g, (double)rdf32(ebx + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x44u, (float)d304);
    }
    d305 = (double)rdf32(ebx + 0x48u);
    if ((cow_fsw(g, d305, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d305, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d305, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d306 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x48u, (float)d306);
    }
    d307 = (double)rdf32(ebx + 0x48u);
    if (!(d307 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d307, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d307, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d308 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x48u, (float)d308);
    }
    d309 = (double)rdf32(ebx + 0x4cu);
    if ((cow_fsw(g, d309, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d309, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d309, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d310 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x4cu, (float)d310);
    }
    d311 = (double)rdf32(ebx + 0x4cu);
    if (d311 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d312 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx + 0x4cu, (float)d312);
    }
    wr32(sp0 - 0x48u, self + 4u);
    t313 = rd32(self + 0xa0u) + 0xc4u;
    wr32(sp0 - 0x4cu, t313);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t313, self + 4u);
    t314 = rd32(self + 0x14u);
    t315 = rd32(self + 0xa0u);
    wr32(t315 + 0xe4u, t314);
    t316 = rd32(self + 0x18u);
    wr32(t315 + 0xe8u, t316);
    t317 = rd32(self + 0x1cu);
    wr32(t315 + 0xecu, t317);
    t318 = rd32(self + 0x20u);
    wr32(t315 + 0xf0u, t318);
    wr32(sp0 - 0x48u, self + 4u);
    cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, self + 4u);
    t319 = rd32(self + 0x14u);
    t320 = rd32(self + 0xa0u);
    wr32(t320 + 0x5d4u, t319);
    t321 = rd32(self + 0x18u);
    wr32(t320 + 0x5d8u, t321);
    t322 = rd32(self + 0x1cu);
    wr32(t320 + 0x5dcu, t322);
    wr32(t320 + 0x5e0u, 0x3f800000u);
    t323 = rd32(self + 4u);
    t324 = rd32(self + 0xa0u);
    wr32(t324 + 0x5c4u, t323);
    t325 = rd32(self + 8u);
    wr32(t324 + 0x5c8u, t325);
    t326 = rd32(self + 0xcu);
    wr32(t324 + 0x5ccu, t326);
    wr32(t324 + 0x5d0u, 0x3f800000u);
    t327 = rd32(self + 0xf8u);
    wr32(sp0 - 0x48u, t327);
    g->edx = t326;
    cow_thiscall(g, COW_IMG(0x100acba0u), rd32(self + 0xa0u), 1, t327);
    t328 = g->edx;
    if (rd32(self + 0x170u) == 8u)
    {
        eax = rd32(self + 0x170u);
        edx = t328;
        goto L_100905be;
    }
    eax = rd32(self + 0x170u);
    edx = t328;
    if (eax == 0x2du) goto L_100905c3;
    if (eax == 0x1au) goto L_100905be;
    if (eax == 0x1du) goto L_100905be;
    g->eax = eax;
    g->edx = edx;
    t329 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    t330 = cow_thiscall(g, COW_IMG(0x100ad130u), t329, 0);
    t331 = g->ecx;
    t332 = g->edx;
    eax = t330;
    ecx = t331;
    edx = t332;
    ebp = self + 4u;
    edi = self + 0x14u;
    goto L_100905d4;
L_100905be: ;
    if (eax != 0x2du) goto L_100905c7;
L_100905c3: ;
    wr32(sp0 - 0x48u, 1u);
    loc_48 = 1u;
L_100905c9: ;
    g->eax = eax;
    g->edx = edx;
    t333 = rd32(self + 0xa0u);
    g->esp = sp0 - 0x44u;
    t334 = cow_thiscall(g, COW_IMG(0x100ad060u), t333, 1, loc_48);
    t335 = g->ecx;
    t336 = g->edx;
    eax = t334;
    ecx = t335;
    edx = t336;
    ebp = self + 4u;
    edi = self + 0x14u;
    goto L_100905d4;
L_100905c7: ;
    wr32(sp0 - 0x48u, 0u);
    loc_48 = 0u;
    goto L_100905c9;
L_10090623: ;
    if (!(eax >> 7u & 1u))
    {
        ecx = eax >> 7u & 1u;
        goto L_10090871;
    }
    ecx = eax >> 7u & 1u;
    if (rd8(COW_IMG(0x104807f5u)) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
        goto L_10090871;
    }
    if (rd32(rd32(self + 0xd4u) + 0x264u) != 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        eax = rd32(self + 0xd4u);
        t345 = rd32(eax + 0x260u) + 0x140u;
        wr32(sp0 - 0x48u, t345);
        t346 = rd32(self + 0xa0u) + 0x34u;
        wr32(sp0 - 0x4cu, t346);
        g->edx = t346;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, t346, t345);
        t347 = g->edx;
        t348 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
        wr32(sp0 - 0x50u, t348);
        t349 = rd32(self + 0xa0u) + 0x44u;
        wr32(sp0 - 0x54u, t349);
        g->eax = rd32(self + 0xd4u);
        t350 = rd32(self + 0xd4u);
        t351 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x4cu;
        t352 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t349, t348);
        if ((cow_fsw(g, (double)rdf32(t349), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t349), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebp = t351;
            edi = t349;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t349), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebp = t351;
            edi = t349;
            d353 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d353);
        }
        if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d354 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d354);
        }
        d355 = (double)rdf32(ebp + 0x48u);
        if ((cow_fsw(g, d355, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d355, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d355, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d356 = fr(g, (double)rdf32(ebp + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x48u, (float)d356);
        }
        d357 = (double)rdf32(ebp + 0x48u);
        if (!(d357 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d357, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d357, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d358 = fr(g, (double)rdf32(ebp + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x48u, (float)d358);
        }
        d359 = (double)rdf32(ebp + 0x4cu);
        if ((cow_fsw(g, d359, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d359, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d359, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d360 = fr(g, (double)rdf32(ebp + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x4cu, (float)d360);
        }
        d361 = (double)rdf32(ebp + 0x4cu);
        if (d361 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d362 = fr(g, (double)rdf32(ebp + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x4cu, (float)d362);
        }
    }
    if (rd32(rd32(self + 0xd4u) + 0x25cu) == rd32(rd32(self + 0xd4u) + 0x260u))
    {
        ecx = rd32(rd32(self + 0xd4u) + 0x260u);
        edx = rd32(rd32(self + 0xd4u) + 0x25cu);
    }
    else
    {
        eax = rd32(self + 0xd4u);
        edx = rd32(rd32(self + 0xd4u) + 0x25cu);
        if (rd32(COW_IMG(0x10480af0u) + rd16(eax + 2u) * 4u) == 0u)
        {
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(eax + 2u) * 4u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(eax + 2u) * 4u);
            if (rd32(ecx + 0xa0u) == 0u)
            {
                ecx = rd32(ecx + 0xa0u);
            }
            else
            {
                ecx = rd32(ecx + 0xa0u);
                t363 = rd32(eax + 0x260u) + 0x140u;
                wr32(sp0 - 0x48u, t363);
                wr32(sp0 - 0x4cu, ecx + 0x34u);
                g->esp = sp0 - 0x44u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ecx + 0x34u, t363);
                t364 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
                wr32(sp0 - 0x50u, t364);
                t365 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 0xd4u) + 2u) * 4u) + 0xa0u) + 0x44u;
                wr32(sp0 - 0x54u, t365);
                g->eax = t364;
                g->ecx = rd16(rd32(self + 0xd4u) + 2u);
                g->edx = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 0xd4u) + 2u) * 4u);
                t366 = rd16(rd32(self + 0xd4u) + 2u);
                t367 = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 0xd4u) + 2u) * 4u);
                t368 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 0xd4u) + 2u) * 4u) + 0xa0u);
                g->esp = sp0 - 0x4cu;
                t369 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t365, t364);
                t370 = g->ecx;
                t371 = g->edx;
                if ((cow_fsw(g, (double)rdf32(t365), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(t365), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t370;
                    edx = t371;
                    ebp = t368;
                    edi = t365;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(t365), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t370;
                    edx = t371;
                    ebp = t368;
                    edi = t365;
                    d372 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi, (float)d372);
                }
                if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d373 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi, (float)d373);
                }
                d374 = (double)rdf32(ebp + 0x48u);
                if ((cow_fsw(g, d374, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d374, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d374, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d375 = fr(g, (double)rdf32(ebp + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp + 0x48u, (float)d375);
                }
                d376 = (double)rdf32(ebp + 0x48u);
                if (!(d376 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d376, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d376, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d377 = fr(g, (double)rdf32(ebp + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp + 0x48u, (float)d377);
                }
                d378 = (double)rdf32(ebp + 0x4cu);
                if ((cow_fsw(g, d378, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d378, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d378, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d379 = fr(g, (double)rdf32(ebp + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp + 0x4cu, (float)d379);
                }
                d380 = (double)rdf32(ebp + 0x4cu);
                if (d380 < (double)rdf32(COW_IMG(0x10329d28u)))
                {
                    d381 = fr(g, (double)rdf32(ebp + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp + 0x4cu, (float)d381);
                }
            }
        }
    }
    goto L_100909ea;
L_10090871: ;
    if (ecx != 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        if ((eax & 0x100000u) == 0u)
        {
            g->eax = eax;
            g->esp = sp0 - 0x44u;
            t382 = cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0x3f0u), rd32(self + 0xa0u), 0);
            if ((uint8_t)t382 != 1u)
            {
                eax = t382;
            }
            else
            {
                t383 = rd32(self + 8u);
                wr32(sp0 - 0x30u, t383);
                t384 = rd32(self + 8u);
                wr32(sp0 - 0x28u, t384);
                if (edi != self)
                {
                    eax = rd32(self + 4u);
                    ecx = rd32(self + 0xcu);
                    loc_30 = t383;
                    loc_28 = t384;
                    wr32(sp0 - 0x24u, ecx);
                    wr32(sp0 - 0x2cu, eax);
                    wr32(sp0 - 0x48u, sp0 - 0x30u);
                    wr32(sp0 - 0x4cu, ecx);
                    wr32(sp0 - 0x50u, loc_28);
                    wr32(sp0 - 0x54u, eax);
                    g->eax = loc_28;
                    g->esp = sp0 - 0x44u;
                    t386 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, eax, loc_28, ecx, sp0 - 0x30u);
                    eax = t386;
                }
                else
                {
                    eax = rd32(self + 4u);
                    ecx = rd32(self + 0xcu);
                    loc_30 = t383;
                    loc_28 = t384;
                    wr32(sp0 - 0x2cu, ecx);
                    wr32(sp0 - 0x24u, eax);
                    wr32(sp0 - 0x48u, sp0 - 0x30u);
                    wr32(sp0 - 0x4cu, 0x42480000u);
                    wr32(sp0 - 0x50u, ecx);
                    wr32(sp0 - 0x54u, loc_28);
                    wr32(sp0 - 0x58u, eax);
                    g->eax = loc_28;
                    g->esp = sp0 - 0x44u;
                    t385 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, eax, loc_28, ecx, 0x42480000u, sp0 - 0x30u);
                    eax = t385;
                }
                if ((uint8_t)eax == 1u)
                {
                    t387 = rd32(sp0 - 0x30u);
                    wr32(self + 8u, t387);
                    wr32(self + 0x28u, t387);
                    eax = t387;
                }
            }
        }
        wr32(sp0 - 0x48u, self + 4u);
        t388 = rd32(self + 0xa0u) + 0x34u;
        wr32(sp0 - 0x4cu, t388);
        g->ecx = self + 4u;
        g->edx = t388;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, t388, self + 4u);
        t389 = g->ecx;
        t390 = g->edx;
        wr32(sp0 - 0x50u, self + 0x14u);
        t391 = rd32(self + 0xa0u) + 0x44u;
        wr32(sp0 - 0x54u, t391);
        g->eax = self + 0x14u;
        g->ecx = t389;
        g->edx = t390;
        t392 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x4cu;
        t393 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t391, self + 0x14u);
        t394 = g->ecx;
        t395 = g->edx;
        if ((cow_fsw(g, (double)rdf32(t391), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t391), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t394;
            edx = t395;
            ebp = t391;
            edi = t392;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t391), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t394;
            edx = t395;
            ebp = t391;
            edi = t392;
            d396 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp, (float)d396);
        }
        if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d397 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp, (float)d397);
        }
        d398 = (double)rdf32(edi + 0x48u);
        if ((cow_fsw(g, d398, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d398, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d398, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d399 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x48u, (float)d399);
        }
        d400 = (double)rdf32(edi + 0x48u);
        if (!(d400 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d400, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d400, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d401 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x48u, (float)d401);
        }
        d402 = (double)rdf32(edi + 0x4cu);
        if ((cow_fsw(g, d402, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d402, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d402, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d403 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x4cu, (float)d403);
        }
        d404 = (double)rdf32(edi + 0x4cu);
        if (d404 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d405 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x4cu, (float)d405);
        }
    }
    goto L_100909ea;
L_10090ab1: ;
    wr32(sp0 - 0x48u, 0u);
    g->eax = rd32(ecx);
    g->edx = edx;
    t420 = rd32(ecx);
    g->esp = sp0 - 0x44u;
    t421 = cow_thiscall(g, rd32(t420 + 0x3cu), ecx, 1, 0u);
    t422 = g->ecx;
    t423 = g->edx;
    eax = t421;
    ecx = t422;
    edx = t423;
    goto L_10090ac1;
L_10090aba: ;
    wr32(sp0 - 0x48u, 0u);
    loc_48 = 0u;
    goto L_10090abc;
L_10090b58: ;
    if (rd8(sp0 - 0x34u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
        goto L_10090b72;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t434 = cow_thiscall(g, COW_IMG(0x100d2800u), rd32(self + 0xa0u), 0);
    t435 = g->edx;
    eax = t434;
    edx = t435;
    ebp = 0x54u;
    goto L_10090b22;
L_10090b72: ;
    if (rd8(sp0 - 0x33u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
        if (rd8(sp0 - 0x32u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x32u);
            ebp = rd32(sp0 - 0x24u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x32u);
            g->edx = edx;
            g->esp = sp0 - 0x44u;
            t455 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
            t456 = g->edx;
            if ((uint8_t)t455 != 0u)
            {
                eax = t455;
                edx = t456;
                goto L_10090d08;
            }
            t457 = rd32(self + 0x12cu);
            if (t457 >> 0x1eu & 1u)
            {
                eax = t457;
                edx = t457 >> 0x1eu;
                goto L_10090d08;
            }
            eax = t457;
            edx = t457 >> 0x1eu;
            if (eax >> 0x1fu != 0u)
            {
                eax = eax >> 0x1fu;
                goto L_10090d08;
            }
            eax = eax >> 0x1fu;
            wr32(sp0 - 0x48u, 4u);
            g->edx = edx;
            g->esp = sp0 - 0x44u;
            cow_thiscall(g, COW_IMG(0x100d2bc0u), rd32(self + 0xa0u), 1, 4u);
            t458 = g->edx;
            t459 = (rd32(self + 0x120u) & 0xffff00ffu) | ((rd32(self + 0x120u) >> 8u & 0xf7u) << 8u >> 8u | 0x10u) << 8u;
            t460 = rd32(self + 0x170u);
            t461 = rd32(COW_IMG(0x1035b3ecu) + rd32(self + 0x170u) * 4u);
            wr32(self + 0x120u, t459);
            g->eax = t460;
            t462 = cow_fastcall(g, COW_IMG(0x1008a2f0u), self, t458, 0);
            t463 = g->ecx;
            t464 = g->edx;
            eax = t462;
            ecx = t463;
            edx = t464;
            ebp = t461;
        }
    }
    else
    {
        if ((int32_t)(rd16(self + 0x10cu) & 0xfffu) < 0) goto L_10090b97;
        ebp = rd16(self + 0x10cu) & 0xfffu;
        if ((int32_t)ebp < 85) goto L_10090b9b;
L_10090b97: ;
        eax = 1u;
        ebp = 0u;
L_10090ba5: ;
        wr32(sp0 - 0x48u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, COW_IMG(0x100d2a10u), rd32(self + 0xa0u), 1, eax);
        t441 = g->edx;
        t442 = (rd32(self + 0x120u) & 0xffff00ffu) | ((rd32(self + 0x120u) >> 8u & 0xefu) << 8u >> 8u | 8u) << 8u;
        t443 = rd32(self + 0x1d0u);
        wr32(self + 0x120u, t442);
        if ((t443 >> 8u & 2u) == 0u)
        {
            eax = t443;
            ecx = t442;
            edx = t441;
            ebp = ebp + 5u;
        }
        else
        {
            edx = t441;
            ebp = ebp + 5u;
            t444 = rd32(self + 0x128u) & 0xffe3ffffu;
            wr32(self + 0x128u, t444);
            wr8(COW_IMG(0x1047fb38u), 0u);
            if ((int32_t)rd32(self + 0x1dcu) <= 0)
            {
                eax = rd32(self + 0x1dcu);
                ecx = t444;
                g->eax = eax;
                g->esp = sp0 - 0x44u;
                t445 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
                t446 = cow_divs(g, t445, 0x259u);
                t447 = cow_mods(g, t445, 0x259u);
                wr32(self + 0x1dcu, t447 + 0x384u);
                edx = t447 + 0x384u;
            }
            t448 = rd32(self + 0x128u);
            wr16(self + 0x1e0u, 0xb4u);
            wr32(self + 0x128u, t448 & 0xff1fffffu);
            wr8(COW_IMG(0x104808fbu), 0u);
            wr32(COW_IMG(0x10487eb4u), 0xffffffffu);
            wr32(COW_IMG(0x10487eb8u), 0u);
            if ((int32_t)rd32(self + 0x1e4u) > 0)
            {
                ecx = t448 & 0xff1fffffu;
            }
            else
            {
                eax = rd32(self + 0x1e4u);
                ecx = t448 & 0xff1fffffu;
                g->eax = eax;
                g->esp = sp0 - 0x44u;
                t449 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
                t450 = cow_divs(g, t449, 0x259u);
                t451 = cow_mods(g, t449, 0x259u);
                wr32(self + 0x1e4u, t451 + 0x384u);
                ecx = 0x259u;
                edx = t451 + 0x384u;
            }
            t452 = rd32(self + 0x13cu);
            wr16(self + 0x1e8u, 0xb4u);
            t453 = (t452 & 0xffff00ffu) | (t452 >> 8u & 0xf8u) << 8u;
            t454 = rd8(sp0 - 0x31u);
            wr32(self + 0x13cu, t453);
            wr8(COW_IMG(0x1048315cu), 0u);
            wr32(COW_IMG(0x10487ec8u), 0xffffffffu);
            wr32(COW_IMG(0x10487eccu), 0u);
            eax = t453;
            ebx = t454;
        }
        wr32(self + 0x128u, rd32(self + 0x128u) & 0x5fffffffu);
    }
    goto L_10090d19;
L_10090b9b: ;
    if (ebp != 0xcu)
    {
        eax = 1u;
    }
    else
    {
        eax = 2u;
    }
    goto L_10090ba5;
L_10090d08: ;
    g->eax = eax;
    t465 = rd32(sp0 - 0x24u);
    g->esp = sp0 - 0x44u;
    t466 = cow_fastcall(g, COW_IMG(0x1008a2f0u), self, edx, 0);
    t467 = g->ecx;
    t468 = g->edx;
    eax = t466;
    ecx = t467;
    edx = t468;
    ebp = t465;
    goto L_10090d19;
L_10090d9d: ;
    if (rd8(sp0 - 0x32u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x32u);
        edi = 0u;
        goto L_10090e68;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x32u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t469 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t470 = g->edx;
    g->esp = sp0 - 0x44u;
    t471 = cow_fastcall(g, COW_IMG(0x100748f0u), t469, t470, 0);
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t469 == 0u)
    {
        eax = t471;
        edi = 0u;
    }
    else
    {
        eax = t471;
        edi = t469;
        wr32(sp0 - 0x48u, ebp);
        wr32(sp0 - 0x4cu, self);
        t472 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
        wr32(sp0 - 0x50u, t472);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t473 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, t472, self, ebp);
        eax = t473;
        edi = t473;
    }
    wr32(self + 0xa4u, edi);
    if (edi != 0u) goto L_10090e68;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    return eax;
L_10090e02: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t474 = cow_thiscall(g, COW_IMG(0x1009aaf0u), self, 0);
    t475 = g->ecx;
    t476 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    if ((uint8_t)t474 != 1u)
    {
        eax = t474;
        ecx = t475;
        edx = t476;
        goto L_10090d56;
    }
    eax = t474;
    ecx = t475;
    edx = t476;
    wr32(sp0 - 0x50u, 0xa34u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t477 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa34u, 4u);
    t478 = g->edx;
    g->esp = sp0 - 0x44u;
    t479 = cow_fastcall(g, COW_IMG(0x100748f0u), t477, t478, 0);
    t480 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t477 == 0u)
    {
        eax = t479;
        goto L_10090e58;
    }
    edx = t480;
    edi = t477;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, ebp);
    wr32(sp0 - 0x50u, self);
    t481 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
    wr32(sp0 - 0x54u, t481);
    g->eax = rd32(self + 0xd4u);
    t482 = rd32(self + 0xd4u);
    g->esp = sp0 - 0x44u;
    t483 = cow_thiscall(g, COW_IMG(0x100a4430u), edi, 4, t481, self, ebp, 0u);
    eax = t483;
    edi = t483;
    goto L_10090e5a;
L_10090e58: ;
    edi = 0u;
    goto L_10090e5a;
L_1009120e: ;
    if ((uint8_t)ebx != 0u) goto L_100912bd;
    if (rd8(sp0 - 0x34u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
        goto L_100912bd;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x34u);
    if (rd8(sp0 - 0x33u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
        goto L_10091267;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
L_1009122e: ;
    wr32(sp0 - 0x50u, 0xa0cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t569 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t570 = g->edx;
    g->esp = sp0 - 0x44u;
    t571 = cow_fastcall(g, COW_IMG(0x100748f0u), t569, t570, 0);
    t572 = g->ecx;
    t573 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t569 == 0u)
    {
        eax = t571;
        ecx = t572;
        edx = t573;
        goto L_10091304;
    }
    eax = t571;
    edi = t569;
    wr32(sp0 - 0x48u, ebp);
    wr32(sp0 - 0x4cu, self);
    wr32(sp0 - 0x50u, self + 4u);
    g->eax = eax;
    g->edx = self + 4u;
    g->esp = sp0 - 0x44u;
    t574 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, self + 4u, self, ebp);
    t575 = g->ecx;
    t576 = g->edx;
    eax = t574;
    ecx = t575;
    edx = t576;
    edi = t574;
L_10091306: ;
    wr32(self + 0xa4u, edi);
    if (edi == 0u) goto L_100926b0;
L_10091314: ;
    wr32(sp0 - 0x48u, self + 0x14u);
    t577 = rd32(edi + 0x88u) | 8u;
    wr32(edi + 0x88u, t577);
    wr32(sp0 - 0x4cu, edi + 0x44u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t578 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, self + 0x14u);
    t579 = g->ecx;
    t580 = g->edx;
    d581 = (double)rdf32(edi + 0x44u);
    if ((cow_fsw(g, d581, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d581, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t579;
        edx = t580;
        ebx = edi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d581, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        ecx = t579;
        edx = t580;
        ebx = edi + 0x44u;
        d582 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d582);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d583 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d583);
    }
    d584 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d584, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d585 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d585);
    }
    d586 = (double)rdf32(edi + 0x48u);
    if (!(d586 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d586, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d586, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d587 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d587);
    }
    d588 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d588, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d588, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d588, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d589 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d589);
    }
    d590 = (double)rdf32(edi + 0x4cu);
    if (d590 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d591 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d591);
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0x34u);
    g->eax = edi + 0x34u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t592 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, self + 4u);
    t593 = g->ecx;
    t594 = g->edx;
    wr32(sp0 - 0x50u, self + 0x14u);
    wr32(sp0 - 0x54u, ebx);
    g->edx = t594;
    g->esp = sp0 - 0x4cu;
    t595 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx, self + 0x14u);
    t596 = g->edx;
    if ((cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t596;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t596;
        d597 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d597);
    }
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d598 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d598);
    }
    d599 = (double)rdf32(edi + 0x48u);
    if ((cow_fsw(g, d599, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d599, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d599, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d600 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d600);
    }
    d601 = (double)rdf32(edi + 0x48u);
    if (!(d601 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d601, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d601, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d602 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x48u, (float)d602);
    }
    d603 = (double)rdf32(edi + 0x4cu);
    if ((cow_fsw(g, d603, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d603, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d603, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d604 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d604);
    }
    d605 = (double)rdf32(edi + 0x4cu);
    if (!(d605 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d605, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d605, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d606 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x4cu, (float)d606);
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0xc4u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, self + 4u);
    t607 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t607);
    t608 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t608);
    t609 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t609);
    wr32(sp0 - 0x48u, self + 4u);
    t610 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t610);
    cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, self + 4u);
    wr32(sp0 - 0x48u, self + 4u);
    t611 = rd32(self + 0x14u);
    wr32(edi + 0xe4u, t611);
    t612 = rd32(self + 0x18u);
    wr32(edi + 0xe8u, t612);
    t613 = rd32(self + 0x1cu);
    wr32(edi + 0xecu, t613);
    t614 = rd32(self + 0x20u);
    wr32(edi + 0xf0u, t614);
    wr32(sp0 - 0x4cu, edi + 0x5c4u);
    g->eax = t614;
    t615 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, self + 4u);
    g->edx = rd32(edi);
    t616 = rd32(edi);
    t617 = cow_thiscall(g, rd32(t616 + 0x318u), edi, 0);
    t618 = g->ecx;
    t619 = g->edx;
    if (t617 != 0u)
    {
        ecx = t618;
        edx = t619;
    }
    else
    {
        ecx = t618;
        edx = t619;
        wr32(sp0 - 0x48u, self + 0x14u);
        wr32(sp0 - 0x4cu, edi + 0x61cu);
        g->eax = edi + 0x61cu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t620 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, self + 0x14u);
        t621 = g->ecx;
        t622 = g->edx;
        d623 = (double)rdf32(edi + 0x61cu);
        if ((cow_fsw(g, d623, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d623, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t621;
            edx = t622;
        }
        else
        {
            eax = cow_fsw(g, d623, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t621;
            edx = t622;
            d624 = fr(g, (double)rdf32(edi + 0x61cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x61cu, (float)d624);
        }
        d625 = (double)rdf32(edi + 0x61cu);
        if (!(d625 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d625, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d625, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d626 = fr(g, (double)rdf32(edi + 0x61cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x61cu, (float)d626);
        }
        d627 = (double)rdf32(edi + 0x620u);
        if ((cow_fsw(g, d627, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d627, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d627, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d628 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d628);
        }
        d629 = (double)rdf32(edi + 0x620u);
        if (!(d629 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d629, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d629, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d630 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x620u, (float)d630);
        }
        d631 = (double)rdf32(edi + 0x624u);
        if ((cow_fsw(g, d631, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d631, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d631, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d632 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d632);
        }
        d633 = (double)rdf32(edi + 0x624u);
        if (d633 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d634 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x624u, (float)d634);
        }
    }
    wr32(sp0 - 0x48u, self + 4u);
    wr32(sp0 - 0x4cu, edi + 0x5fcu);
    eax = edi + 0x5fcu;
    ebx = self + 4u;
    loc_48 = self + 4u;
    loc_4c = edi + 0x5fcu;
    goto L_1009161b;
L_10091267: ;
    if (rd8(sp0 - 0x32u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x32u);
        edi = 0u;
        goto L_10091314;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x32u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 0xa0cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t550 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t551 = g->edx;
    g->esp = sp0 - 0x44u;
    t552 = cow_fastcall(g, COW_IMG(0x100748f0u), t550, t551, 0);
    t553 = g->ecx;
    t554 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t550 == 0u)
    {
        eax = t552;
        ecx = t553;
        edx = t554;
        edi = 0u;
    }
    else
    {
        edx = t554;
        edi = t550;
        wr32(sp0 - 0x48u, ebp);
        wr32(sp0 - 0x4cu, self);
        wr32(sp0 - 0x50u, self + 4u);
        g->eax = self + 4u;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t555 = cow_thiscall(g, COW_IMG(0x100c59b0u), edi, 3, self + 4u, self, ebp);
        t556 = g->ecx;
        t557 = g->edx;
        eax = t555;
        ecx = t556;
        edx = t557;
        edi = t555;
    }
    wr32(self + 0xa4u, edi);
    if (edi != 0u) goto L_10091314;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    return eax;
L_100912bd: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t558 = cow_thiscall(g, COW_IMG(0x1009aaf0u), self, 0);
    t559 = g->ecx;
    t560 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 4u);
    if ((uint8_t)t558 != 1u)
    {
        eax = t558;
        ecx = t559;
        edx = t560;
        goto L_1009122e;
    }
    eax = t558;
    ecx = t559;
    edx = t560;
    wr32(sp0 - 0x50u, 0xa34u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t561 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa34u, 4u);
    t562 = g->edx;
    g->esp = sp0 - 0x44u;
    t563 = cow_fastcall(g, COW_IMG(0x100748f0u), t561, t562, 0);
    t564 = g->ecx;
    t565 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t561 == 0u)
    {
        eax = t563;
        ecx = t564;
        edx = t565;
        goto L_10091304;
    }
    eax = t563;
    edx = t565;
    edi = t561;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, ebp);
    wr32(sp0 - 0x50u, self);
    wr32(sp0 - 0x54u, self + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t566 = cow_thiscall(g, COW_IMG(0x100a4430u), edi, 4, self + 4u, self, ebp, 0u);
    t567 = g->ecx;
    t568 = g->edx;
    eax = t566;
    ecx = t567;
    edx = t568;
    edi = t566;
    goto L_10091306;
L_10091304: ;
    edi = 0u;
    goto L_10091306;
L_1009168e: ;
    if (rd8(sp0 - 0x32u) == 0u) goto L_100916a7;
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x32u);
    zf = (eax & 0x1800u) == 0x1000u;
    eax = eax & 0x1800u;
    goto L_100916a5;
L_100916a2: ;
    zf = (eax >> 8u & 0x18u) == 0u;
    goto L_100916a5;
L_10091a83: ;
    if (rd32(self + 0xa8u) == 0u) goto L_10091a97;
    if (rd16(self + 0x202u) != 0u) goto L_10091aee;
L_10091a97: ;
    if ((uint8_t)eax != 0u) goto L_10091af5;
L_10091aee: ;
    g->esp = sp0 - 0x44u;
    cow_fastcall(g, COW_IMG(0x10092800u), self, edx, 0);
    goto L_10091af5;
L_10091a9d: ;
    if ((eax & 0x20000u) == 0u) goto L_10091af5;
    if (rd16(self + 0x202u) != 0u) goto L_10091ad3;
    if (rd32(self + 0xa8u) != 0u)
    {
        ecx = rd32(self + 0xa8u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, ecx);
        wr32(sp0 - 0x50u, 0x64616564u);
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x298u), ecx, 3, 0x64616564u, ecx, 0u);
    }
    wr16(self + 0x202u, 0x5au);
    goto L_10091af5;
L_10091ad3: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t715 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t716 = g->ecx;
    t717 = g->edx;
    d718 = cow_take_float(g);
    g->edx = t717;
    fpush(g, d718);
    t719 = cow_call_regs(g, COW_IMG(0x10311c6cu), t715, g->ecx, g->edx, 1, 0);
    t720 = g->edx;
    wr16(self + 0x202u, (uint16_t)(rd16(self + 0x202u) - (uint16_t)t719));
    if ((int16_t)rd16(self + 0x202u) > 0) goto L_10091af5;
    eax = t719;
    edx = t720;
    goto L_10091aee;
L_10091ebe: ;
    if (((uint8_t)eax & (uint8_t)edx) != 0u)
    {
        wr32(sp0 - 0x48u, ebp);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, COW_IMG(0x10092780u), self, 1, ebp);
        t797 = g->ecx;
        t798 = g->edx;
        ecx = t797;
        edx = t798;
    }
    goto L_10091eca;
L_100922b4: ;
    if ((eax & 0x40000u) != 0u)
    {
        g->esp = sp0 - 0x44u;
        cow_fastcall(g, COW_IMG(0x10092710u), self, edx, 0);
        t868 = g->ecx;
        t869 = g->edx;
        ecx = t868;
        edx = t869;
    }
    goto L_100922c2;
L_100926a2: ;
    if ((eax & 0x80000u) != 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t938 = cow_fastcall(g, COW_IMG(0x100926c0u), self, edx, 0);
        eax = t938;
    }
L_100926b0: ;
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008f740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008f740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
