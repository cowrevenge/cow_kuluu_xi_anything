/* f_0x1029d730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029d730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t1000;
    uint32_t t1001;
    uint32_t t1002;
    uint32_t t1003;
    uint32_t t1004;
    uint32_t t1005;
    uint32_t t1006;
    uint32_t t1007;
    uint32_t t1008;
    uint32_t t1009;
    uint32_t t101;
    uint32_t t1010;
    uint32_t t1011;
    uint32_t t1012;
    uint32_t t1013;
    uint32_t t1014;
    uint32_t t1015;
    uint32_t t1016;
    uint32_t t1017;
    uint32_t t1018;
    uint32_t t1019;
    uint32_t t102;
    uint32_t t1020;
    uint32_t t1021;
    uint32_t t1022;
    uint32_t t1023;
    uint32_t t1024;
    uint32_t t1025;
    uint32_t t1026;
    uint32_t t1027;
    uint32_t t1028;
    uint32_t t1029;
    uint32_t t103;
    uint32_t t1030;
    uint32_t t1031;
    uint32_t t1032;
    uint32_t t1033;
    uint32_t t1034;
    uint32_t t1035;
    uint32_t t1036;
    uint32_t t1037;
    uint32_t t1038;
    uint32_t t1039;
    uint32_t t104;
    uint32_t t1040;
    uint32_t t1041;
    uint32_t t1042;
    uint32_t t1043;
    uint32_t t1044;
    uint32_t t1045;
    uint32_t t1046;
    uint32_t t1047;
    uint32_t t1048;
    uint32_t t1049;
    uint32_t t105;
    uint32_t t1050;
    uint32_t t1051;
    uint32_t t1052;
    uint32_t t1053;
    uint32_t t1054;
    uint32_t t1055;
    uint32_t t1056;
    uint32_t t1057;
    uint32_t t1058;
    uint32_t t1059;
    uint32_t t106;
    uint32_t t1060;
    uint32_t t1061;
    uint32_t t1062;
    uint32_t t1063;
    uint32_t t1064;
    uint32_t t1065;
    uint32_t t1066;
    uint32_t t1067;
    uint32_t t1068;
    uint32_t t1069;
    uint32_t t107;
    uint32_t t1070;
    uint32_t t1071;
    uint32_t t1072;
    uint32_t t1073;
    uint32_t t1074;
    uint32_t t1075;
    uint32_t t1076;
    uint32_t t1077;
    uint32_t t1078;
    uint32_t t1079;
    uint32_t t108;
    uint32_t t1080;
    uint32_t t1081;
    uint32_t t1082;
    uint32_t t1083;
    uint32_t t1084;
    uint32_t t1085;
    uint32_t t1086;
    uint32_t t1087;
    uint32_t t1088;
    uint32_t t1089;
    uint32_t t109;
    uint32_t t1090;
    uint32_t t1091;
    uint32_t t1092;
    uint32_t t1093;
    uint32_t t1094;
    uint32_t t1095;
    uint32_t t1096;
    uint32_t t1097;
    uint32_t t1098;
    uint32_t t1099;
    uint32_t t11;
    uint32_t t110;
    uint32_t t1100;
    uint32_t t1101;
    uint32_t t1102;
    uint32_t t1103;
    uint32_t t1104;
    uint32_t t1105;
    uint32_t t1106;
    uint32_t t1107;
    uint32_t t1108;
    uint32_t t1109;
    uint32_t t111;
    uint32_t t1110;
    uint32_t t1111;
    uint32_t t1112;
    uint32_t t1113;
    uint32_t t1114;
    uint32_t t1115;
    uint32_t t1116;
    uint32_t t1117;
    uint32_t t1118;
    uint32_t t1119;
    uint32_t t112;
    uint32_t t1120;
    uint32_t t1121;
    uint32_t t1122;
    uint32_t t1123;
    uint32_t t1124;
    uint32_t t1125;
    uint32_t t1126;
    uint32_t t1127;
    uint32_t t1128;
    uint32_t t1129;
    uint32_t t113;
    uint32_t t1130;
    uint32_t t1131;
    uint32_t t1132;
    uint32_t t1133;
    uint32_t t1134;
    uint32_t t1135;
    uint32_t t1136;
    uint32_t t1137;
    uint32_t t1138;
    uint32_t t1139;
    uint32_t t114;
    uint32_t t1140;
    uint32_t t1141;
    uint32_t t1142;
    uint32_t t1143;
    uint32_t t1144;
    uint32_t t1145;
    uint32_t t1146;
    uint32_t t1147;
    uint32_t t1148;
    uint32_t t1149;
    uint32_t t115;
    uint32_t t1150;
    uint32_t t1151;
    uint32_t t1152;
    uint32_t t1153;
    uint32_t t1154;
    uint32_t t1155;
    uint32_t t1156;
    uint32_t t1157;
    uint32_t t1158;
    uint32_t t1159;
    uint32_t t116;
    uint32_t t1160;
    uint32_t t1161;
    uint32_t t1162;
    uint32_t t1163;
    uint32_t t1164;
    uint32_t t1165;
    uint32_t t1166;
    uint32_t t1167;
    uint32_t t1168;
    uint32_t t1169;
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
    uint32_t t826;
    uint32_t t827;
    uint32_t t828;
    uint32_t t829;
    uint32_t t83;
    uint32_t t830;
    uint32_t t831;
    uint32_t t832;
    uint32_t t833;
    uint32_t t834;
    uint32_t t835;
    uint32_t t836;
    uint32_t t837;
    uint32_t t838;
    uint32_t t839;
    uint32_t t84;
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
    uint32_t t85;
    uint32_t t850;
    uint32_t t851;
    uint32_t t852;
    uint32_t t853;
    uint32_t t854;
    uint32_t t855;
    uint32_t t856;
    uint32_t t857;
    uint32_t t858;
    uint32_t t859;
    uint32_t t86;
    uint32_t t860;
    uint32_t t861;
    uint32_t t862;
    uint32_t t863;
    uint32_t t864;
    uint32_t t865;
    uint32_t t866;
    uint32_t t867;
    uint32_t t868;
    uint32_t t869;
    uint32_t t87;
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
    uint32_t t88;
    uint32_t t880;
    uint32_t t881;
    uint32_t t882;
    uint32_t t883;
    uint32_t t884;
    uint32_t t885;
    uint32_t t886;
    uint32_t t887;
    uint32_t t888;
    uint32_t t889;
    uint32_t t89;
    uint32_t t890;
    uint32_t t891;
    uint32_t t892;
    uint32_t t893;
    uint32_t t894;
    uint32_t t895;
    uint32_t t896;
    uint32_t t897;
    uint32_t t898;
    uint32_t t899;
    uint32_t t9;
    uint32_t t90;
    uint32_t t900;
    uint32_t t901;
    uint32_t t902;
    uint32_t t903;
    uint32_t t904;
    uint32_t t905;
    uint32_t t906;
    uint32_t t907;
    uint32_t t908;
    uint32_t t909;
    uint32_t t91;
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
    uint32_t t92;
    uint32_t t920;
    uint32_t t921;
    uint32_t t922;
    uint32_t t923;
    uint32_t t924;
    uint32_t t925;
    uint32_t t926;
    uint32_t t927;
    uint32_t t928;
    uint32_t t929;
    uint32_t t93;
    uint32_t t930;
    uint32_t t931;
    uint32_t t932;
    uint32_t t933;
    uint32_t t934;
    uint32_t t935;
    uint32_t t936;
    uint32_t t937;
    uint32_t t938;
    uint32_t t939;
    uint32_t t94;
    uint32_t t940;
    uint32_t t941;
    uint32_t t942;
    uint32_t t943;
    uint32_t t944;
    uint32_t t945;
    uint32_t t946;
    uint32_t t947;
    uint32_t t948;
    uint32_t t949;
    uint32_t t95;
    uint32_t t950;
    uint32_t t951;
    uint32_t t952;
    uint32_t t953;
    uint32_t t954;
    uint32_t t955;
    uint32_t t956;
    uint32_t t957;
    uint32_t t958;
    uint32_t t959;
    uint32_t t96;
    uint32_t t960;
    uint32_t t961;
    uint32_t t962;
    uint32_t t963;
    uint32_t t964;
    uint32_t t965;
    uint32_t t966;
    uint32_t t967;
    uint32_t t968;
    uint32_t t969;
    uint32_t t97;
    uint32_t t970;
    uint32_t t971;
    uint32_t t972;
    uint32_t t973;
    uint32_t t974;
    uint32_t t975;
    uint32_t t976;
    uint32_t t977;
    uint32_t t978;
    uint32_t t979;
    uint32_t t98;
    uint32_t t980;
    uint32_t t981;
    uint32_t t982;
    uint32_t t983;
    uint32_t t984;
    uint32_t t985;
    uint32_t t986;
    uint32_t t987;
    uint32_t t988;
    uint32_t t989;
    uint32_t t99;
    uint32_t t990;
    uint32_t t991;
    uint32_t t992;
    uint32_t t993;
    uint32_t t994;
    uint32_t t995;
    uint32_t t996;
    uint32_t t997;
    uint32_t t998;
    uint32_t t999;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029d741u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1029d741;
    case 0x1029d748u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1029d748;
    case 0x1029d75cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d75c;
    case 0x1029d76bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029d76b;
    case 0x1029d778u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1029d778;
    case 0x1029d78du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d78d;
    case 0x1029d794u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d794;
    case 0x1029d7a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d7a8;
    case 0x1029d7bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d7bc;
    case 0x1029d7c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d7c9;
    case 0x1029d7d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d7d3;
    case 0x1029d7dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d7da;
    case 0x1029d7eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d7ee;
    case 0x1029d7fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029d7fd;
    case 0x1029d80au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d80a;
    case 0x1029d819u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d819;
    case 0x1029d820u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d820;
    case 0x1029d825u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d825;
    case 0x1029d827u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d827;
    case 0x1029d836u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d836;
    case 0x1029d83du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d83d;
    case 0x1029d842u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d842;
    case 0x1029d844u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d844;
    case 0x1029d853u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d853;
    case 0x1029d85au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d85a;
    case 0x1029d85fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d85f;
    case 0x1029d861u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d861;
    case 0x1029d870u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d870;
    case 0x1029d877u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d877;
    case 0x1029d87cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d87c;
    case 0x1029d87eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d87e;
    case 0x1029d88du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d88d;
    case 0x1029d898u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d898;
    case 0x1029d89du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d89d;
    case 0x1029d8afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8af;
    case 0x1029d8b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8b6;
    case 0x1029d8c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8c8;
    case 0x1029d8d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8d3;
    case 0x1029d8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8e2;
    case 0x1029d8e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8e9;
    case 0x1029d8f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d8f2;
    case 0x1029d8fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d8fd;
    case 0x1029d911u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d911;
    case 0x1029d920u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029d920;
    case 0x1029d92du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d92d;
    case 0x1029d93cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d93c;
    case 0x1029d943u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d943;
    case 0x1029d94cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d94c;
    case 0x1029d957u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d957;
    case 0x1029d96bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d96b;
    case 0x1029d97au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029d97a;
    case 0x1029d987u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d987;
    case 0x1029d996u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d996;
    case 0x1029d99du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d99d;
    case 0x1029d9a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d9a6;
    case 0x1029d9b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d9b1;
    case 0x1029d9c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029d9c5;
    case 0x1029d9d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029d9d4;
    case 0x1029d9e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d9e1;
    case 0x1029d9f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d9f0;
    case 0x1029d9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029d9f7;
    case 0x1029da00u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029da00;
    case 0x1029da0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029da0b;
    case 0x1029da1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029da1f;
    case 0x1029da2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029da2e;
    case 0x1029da3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029da3b;
    case 0x1029da4au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029da4a;
    case 0x1029da51u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029da51;
    case 0x1029da5au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029da5a;
    case 0x1029da65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029da65;
    case 0x1029da79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029da79;
    case 0x1029da88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029da88;
    case 0x1029da95u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029da95;
    case 0x1029daa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029daa4;
    case 0x1029daabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029daab;
    case 0x1029dab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dab4;
    case 0x1029dabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029dabf;
    case 0x1029dad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029dad3;
    case 0x1029dae2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029dae2;
    case 0x1029daefu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029daef;
    case 0x1029dafeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dafe;
    case 0x1029db05u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db05;
    case 0x1029db0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db0e;
    case 0x1029db19u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029db19;
    case 0x1029db2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029db2d;
    case 0x1029db3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029db3c;
    case 0x1029db49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db49;
    case 0x1029db58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db58;
    case 0x1029db5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db5f;
    case 0x1029db69u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db69;
    case 0x1029db74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db74;
    case 0x1029db81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db81;
    case 0x1029db8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db8c;
    case 0x1029db9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029db9c;
    case 0x1029dba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dba7;
    case 0x1029dbb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbb6;
    case 0x1029dbbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbbd;
    case 0x1029dbc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbc7;
    case 0x1029dbd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbd2;
    case 0x1029dbdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbdf;
    case 0x1029dbeau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbea;
    case 0x1029dbfau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dbfa;
    case 0x1029dc05u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc05;
    case 0x1029dc14u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc14;
    case 0x1029dc1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc1b;
    case 0x1029dc25u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc25;
    case 0x1029dc30u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc30;
    case 0x1029dc3du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc3d;
    case 0x1029dc48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc48;
    case 0x1029dc58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc58;
    case 0x1029dc63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc63;
    case 0x1029dc72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc72;
    case 0x1029dc79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc79;
    case 0x1029dc83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc83;
    case 0x1029dc8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc8e;
    case 0x1029dc9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dc9b;
    case 0x1029dca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dca6;
    case 0x1029dcb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dcb6;
    case 0x1029dcc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dcc1;
    case 0x1029dcd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dcd0;
    case 0x1029dcd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dcd7;
    case 0x1029dce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dce1;
    case 0x1029dcecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dcec;
    case 0x1029dcf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dcf9;
    case 0x1029dd04u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd04;
    case 0x1029dd14u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd14;
    case 0x1029dd1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd1f;
    case 0x1029dd2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd2e;
    case 0x1029dd35u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd35;
    case 0x1029dd3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd3f;
    case 0x1029dd4au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd4a;
    case 0x1029dd57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd57;
    case 0x1029dd62u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd62;
    case 0x1029dd72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd72;
    case 0x1029dd7du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd7d;
    case 0x1029dd8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd8c;
    case 0x1029dd93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd93;
    case 0x1029dd9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dd9c;
    case 0x1029dda7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029dda7;
    case 0x1029ddbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ddbb;
    case 0x1029ddcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ddca;
    case 0x1029ddd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ddd7;
    case 0x1029dde6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dde6;
    case 0x1029ddedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dded;
    case 0x1029ddf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ddf6;
    case 0x1029de01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029de01;
    case 0x1029de15u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029de15;
    case 0x1029de24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029de24;
    case 0x1029de31u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029de31;
    case 0x1029de40u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029de40;
    case 0x1029de47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029de47;
    case 0x1029de50u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029de50;
    case 0x1029de5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029de5b;
    case 0x1029de6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029de6f;
    case 0x1029de7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029de7e;
    case 0x1029de8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029de8b;
    case 0x1029de9au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029de9a;
    case 0x1029dea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dea1;
    case 0x1029deadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dead;
    case 0x1029deb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029deb8;
    case 0x1029deccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029decc;
    case 0x1029dedbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029dedb;
    case 0x1029dee8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dee8;
    case 0x1029def7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029def7;
    case 0x1029defeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029defe;
    case 0x1029df07u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029df07;
    case 0x1029df12u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029df12;
    case 0x1029df26u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029df26;
    case 0x1029df35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029df35;
    case 0x1029df42u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029df42;
    case 0x1029df51u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029df51;
    case 0x1029df58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029df58;
    case 0x1029df61u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029df61;
    case 0x1029df6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029df6c;
    case 0x1029df80u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029df80;
    case 0x1029df8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029df8f;
    case 0x1029df9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029df9c;
    case 0x1029dfabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dfab;
    case 0x1029dfb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dfb2;
    case 0x1029dfbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dfbe;
    case 0x1029dfc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029dfc9;
    case 0x1029dfddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029dfdd;
    case 0x1029dfecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029dfec;
    case 0x1029dff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029dff9;
    case 0x1029e008u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e008;
    case 0x1029e00fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e00f;
    case 0x1029e01bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e01b;
    case 0x1029e026u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e026;
    case 0x1029e03au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e03a;
    case 0x1029e049u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e049;
    case 0x1029e056u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e056;
    case 0x1029e065u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e065;
    case 0x1029e06cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e06c;
    case 0x1029e078u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e078;
    case 0x1029e083u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e083;
    case 0x1029e097u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e097;
    case 0x1029e0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e0a6;
    case 0x1029e0b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e0b3;
    case 0x1029e0c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e0c2;
    case 0x1029e0c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e0c9;
    case 0x1029e0d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e0d5;
    case 0x1029e0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e0e0;
    case 0x1029e0f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e0f4;
    case 0x1029e103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e103;
    case 0x1029e110u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e110;
    case 0x1029e11fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e11f;
    case 0x1029e126u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e126;
    case 0x1029e132u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e132;
    case 0x1029e13du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e13d;
    case 0x1029e151u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e151;
    case 0x1029e160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e160;
    case 0x1029e16du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e16d;
    case 0x1029e17cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e17c;
    case 0x1029e183u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e183;
    case 0x1029e18fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e18f;
    case 0x1029e19au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e19a;
    case 0x1029e1aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e1ae;
    case 0x1029e1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e1bd;
    case 0x1029e1cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e1ca;
    case 0x1029e1d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e1d9;
    case 0x1029e1e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e1e0;
    case 0x1029e1ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e1ec;
    case 0x1029e1f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e1f7;
    case 0x1029e20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e20b;
    case 0x1029e21au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e21a;
    case 0x1029e227u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e227;
    case 0x1029e236u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e236;
    case 0x1029e23du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e23d;
    case 0x1029e249u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e249;
    case 0x1029e254u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e254;
    case 0x1029e268u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e268;
    case 0x1029e277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e277;
    case 0x1029e284u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e284;
    case 0x1029e293u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e293;
    case 0x1029e29au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e29a;
    case 0x1029e2a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e2a6;
    case 0x1029e2b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e2b1;
    case 0x1029e2c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e2c5;
    case 0x1029e2d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e2d4;
    case 0x1029e2e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e2e1;
    case 0x1029e2f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e2f0;
    case 0x1029e2f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e2f7;
    case 0x1029e301u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e301;
    case 0x1029e308u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e308;
    case 0x1029e31cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e31c;
    case 0x1029e32bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e32b;
    case 0x1029e338u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e338;
    case 0x1029e347u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e347;
    case 0x1029e352u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e352;
    case 0x1029e35cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e35c;
    case 0x1029e367u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e367;
    case 0x1029e371u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e371;
    case 0x1029e37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e37c;
    case 0x1029e388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e388;
    case 0x1029e393u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e393;
    case 0x1029e3a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e3a7;
    case 0x1029e3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e3b6;
    case 0x1029e3c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e3c3;
    case 0x1029e3c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e3c8;
    case 0x1029e3d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e3d7;
    case 0x1029e3e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e3e4;
    case 0x1029e3f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e3f8;
    case 0x1029e407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e407;
    case 0x1029e414u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e414;
    case 0x1029e419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e419;
    case 0x1029e428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e428;
    case 0x1029e435u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e435;
    case 0x1029e449u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e449;
    case 0x1029e458u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e458;
    case 0x1029e465u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e465;
    case 0x1029e46fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e46f;
    case 0x1029e483u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e483;
    case 0x1029e492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e492;
    case 0x1029e49fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e49f;
    case 0x1029e4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e4a9;
    case 0x1029e4bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e4bd;
    case 0x1029e4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e4cc;
    case 0x1029e4d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e4d9;
    case 0x1029e4e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e4e3;
    case 0x1029e4f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e4f7;
    case 0x1029e506u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e506;
    case 0x1029e513u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e513;
    case 0x1029e51du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e51d;
    case 0x1029e531u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e531;
    case 0x1029e540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e540;
    case 0x1029e54du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e54d;
    case 0x1029e561u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e561;
    case 0x1029e570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e570;
    case 0x1029e57du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e57d;
    case 0x1029e593u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e593;
    case 0x1029e59eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e59e;
    case 0x1029e5adu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e5ad;
    case 0x1029e5b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e5b4;
    case 0x1029e5bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e5bd;
    case 0x1029e5c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e5c8;
    case 0x1029e5dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e5dc;
    case 0x1029e5ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e5eb;
    case 0x1029e5f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e5f8;
    case 0x1029e607u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e607;
    case 0x1029e60eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e60e;
    case 0x1029e617u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e617;
    case 0x1029e622u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e622;
    case 0x1029e636u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e636;
    case 0x1029e645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e645;
    case 0x1029e652u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e652;
    case 0x1029e661u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e661;
    case 0x1029e668u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e668;
    case 0x1029e671u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e671;
    case 0x1029e67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e67c;
    case 0x1029e690u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e690;
    case 0x1029e69fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e69f;
    case 0x1029e6acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e6ac;
    case 0x1029e6bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e6bb;
    case 0x1029e6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e6c2;
    case 0x1029e6cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e6cb;
    case 0x1029e6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e6d6;
    case 0x1029e6eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e6ea;
    case 0x1029e6f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e6f9;
    case 0x1029e706u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e706;
    case 0x1029e715u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e715;
    case 0x1029e71cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e71c;
    case 0x1029e725u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e725;
    case 0x1029e730u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e730;
    case 0x1029e744u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e744;
    case 0x1029e753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e753;
    case 0x1029e760u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e760;
    case 0x1029e76fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e76f;
    case 0x1029e776u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e776;
    case 0x1029e77fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e77f;
    case 0x1029e78au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e78a;
    case 0x1029e79eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e79e;
    case 0x1029e7adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e7ad;
    case 0x1029e7bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e7ba;
    case 0x1029e7c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e7c9;
    case 0x1029e7d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e7d0;
    case 0x1029e7d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e7d9;
    case 0x1029e7e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e7e4;
    case 0x1029e7f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e7f8;
    case 0x1029e807u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e807;
    case 0x1029e814u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e814;
    case 0x1029e823u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e823;
    case 0x1029e82au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e82a;
    case 0x1029e834u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e834;
    case 0x1029e83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e83f;
    case 0x1029e84cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e84c;
    case 0x1029e857u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e857;
    case 0x1029e867u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e867;
    case 0x1029e872u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e872;
    case 0x1029e881u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e881;
    case 0x1029e888u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e888;
    case 0x1029e892u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e892;
    case 0x1029e89du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e89d;
    case 0x1029e8aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8aa;
    case 0x1029e8b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8b5;
    case 0x1029e8c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8c5;
    case 0x1029e8d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8d0;
    case 0x1029e8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8df;
    case 0x1029e8e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8e6;
    case 0x1029e8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e8ef;
    case 0x1029e8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e8fa;
    case 0x1029e90eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e90e;
    case 0x1029e91du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e91d;
    case 0x1029e92au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e92a;
    case 0x1029e939u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e939;
    case 0x1029e940u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e940;
    case 0x1029e949u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e949;
    case 0x1029e954u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e954;
    case 0x1029e968u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e968;
    case 0x1029e977u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e977;
    case 0x1029e984u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e984;
    case 0x1029e993u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e993;
    case 0x1029e99au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e99a;
    case 0x1029e9a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e9a3;
    case 0x1029e9aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e9ae;
    case 0x1029e9c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029e9c2;
    case 0x1029e9d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029e9d1;
    case 0x1029e9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e9de;
    case 0x1029e9edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e9ed;
    case 0x1029e9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e9f4;
    case 0x1029e9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029e9fd;
    case 0x1029ea08u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ea08;
    case 0x1029ea1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ea1c;
    case 0x1029ea2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ea2b;
    case 0x1029ea38u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ea38;
    case 0x1029ea47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ea47;
    case 0x1029ea4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ea4e;
    case 0x1029ea58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ea58;
    case 0x1029ea5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ea5f;
    case 0x1029ea73u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ea73;
    case 0x1029ea82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ea82;
    case 0x1029ea8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ea8f;
    case 0x1029ea9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ea9e;
    case 0x1029eaa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029eaa9;
    case 0x1029eab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029eab3;
    case 0x1029eabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029eabe;
    case 0x1029eac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029eac8;
    case 0x1029ead3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029ead3;
    case 0x1029eadau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eada;
    case 0x1029eae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eae5;
    case 0x1029eaedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eaed;
    case 0x1029eb01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb01;
    case 0x1029eb10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029eb10;
    case 0x1029eb1du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb1d;
    case 0x1029eb27u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb27;
    case 0x1029eb3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb3b;
    case 0x1029eb4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029eb4a;
    case 0x1029eb57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb57;
    case 0x1029eb61u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb61;
    case 0x1029eb75u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb75;
    case 0x1029eb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029eb84;
    case 0x1029eb91u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eb91;
    case 0x1029eba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eba5;
    case 0x1029ebb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebb4;
    case 0x1029ebc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebc1;
    case 0x1029ebcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebcb;
    case 0x1029ebd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebd6;
    case 0x1029ebe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebe5;
    case 0x1029ebecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebec;
    case 0x1029ebf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ebf5;
    case 0x1029ec00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec00;
    case 0x1029ec14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec14;
    case 0x1029ec23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ec23;
    case 0x1029ec30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec30;
    case 0x1029ec3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec3f;
    case 0x1029ec46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec46;
    case 0x1029ec4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec4f;
    case 0x1029ec5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec5a;
    case 0x1029ec6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec6e;
    case 0x1029ec7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ec7d;
    case 0x1029ec8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec8a;
    case 0x1029ec99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ec99;
    case 0x1029eca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eca0;
    case 0x1029eca9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eca9;
    case 0x1029ecb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ecb4;
    case 0x1029ecc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ecc8;
    case 0x1029ecd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ecd7;
    case 0x1029ece4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ece4;
    case 0x1029ecf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ecf3;
    case 0x1029ecfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ecfa;
    case 0x1029ed03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed03;
    case 0x1029ed0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed0e;
    case 0x1029ed22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed22;
    case 0x1029ed31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ed31;
    case 0x1029ed3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed3e;
    case 0x1029ed4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed4d;
    case 0x1029ed54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed54;
    case 0x1029ed5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed5d;
    case 0x1029ed68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed68;
    case 0x1029ed7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed7c;
    case 0x1029ed8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ed8b;
    case 0x1029ed98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ed98;
    case 0x1029eda7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eda7;
    case 0x1029edaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029edae;
    case 0x1029edb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029edb7;
    case 0x1029edc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029edc2;
    case 0x1029edd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029edd6;
    case 0x1029ede5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ede5;
    case 0x1029edf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029edf2;
    case 0x1029ee01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee01;
    case 0x1029ee08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee08;
    case 0x1029ee11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee11;
    case 0x1029ee1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee1c;
    case 0x1029ee30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee30;
    case 0x1029ee3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ee3f;
    case 0x1029ee4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee4c;
    case 0x1029ee5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee5b;
    case 0x1029ee62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee62;
    case 0x1029ee6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee6c;
    case 0x1029ee77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee77;
    case 0x1029ee84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee84;
    case 0x1029ee8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee8f;
    case 0x1029ee9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ee9f;
    case 0x1029eeaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eeaa;
    case 0x1029eeb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eeb9;
    case 0x1029eec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eec0;
    case 0x1029eecau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eeca;
    case 0x1029eed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eed5;
    case 0x1029eee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eee2;
    case 0x1029eeedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eeed;
    case 0x1029eefdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029eefd;
    case 0x1029ef08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef08;
    case 0x1029ef17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef17;
    case 0x1029ef1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef1e;
    case 0x1029ef27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef27;
    case 0x1029ef32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef32;
    case 0x1029ef46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef46;
    case 0x1029ef55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029ef55;
    case 0x1029ef62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef62;
    case 0x1029ef71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef71;
    case 0x1029ef78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef78;
    case 0x1029ef7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef7d;
    case 0x1029ef83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef83;
    case 0x1029ef8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef8e;
    case 0x1029ef97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029ef97;
    case 0x1029efa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029efa0;
    case 0x1029efafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029efaf;
    case 0x1029efb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029efb6;
    case 0x1029efc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029efc2;
    case 0x1029efcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029efcd;
    case 0x1029efe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029efe1;
    case 0x1029eff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029eff0;
    case 0x1029effdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029effd;
    case 0x1029f00cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f00c;
    case 0x1029f013u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f013;
    case 0x1029f01fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f01f;
    case 0x1029f02au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f02a;
    case 0x1029f03eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f03e;
    case 0x1029f04du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f04d;
    case 0x1029f05au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f05a;
    case 0x1029f069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f069;
    case 0x1029f070u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f070;
    case 0x1029f079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f079;
    case 0x1029f084u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f084;
    case 0x1029f098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f098;
    case 0x1029f0a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f0a7;
    case 0x1029f0b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f0b4;
    case 0x1029f0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f0c3;
    case 0x1029f0cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f0ca;
    case 0x1029f0d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f0d6;
    case 0x1029f0ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f0dd;
    case 0x1029f0f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f0f1;
    case 0x1029f100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f100;
    case 0x1029f10du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f10d;
    case 0x1029f11cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f11c;
    case 0x1029f127u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f127;
    case 0x1029f133u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f133;
    case 0x1029f13eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f13e;
    case 0x1029f148u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f148;
    case 0x1029f153u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f153;
    case 0x1029f164u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f164;
    case 0x1029f16bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f16b;
    case 0x1029f172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f172;
    case 0x1029f17fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f17f;
    case 0x1029f193u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f193;
    case 0x1029f1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f1a2;
    case 0x1029f1afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f1af;
    case 0x1029f1b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f1b9;
    case 0x1029f1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f1cd;
    case 0x1029f1dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f1dc;
    case 0x1029f1e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f1e9;
    case 0x1029f1f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f1f3;
    case 0x1029f207u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f207;
    case 0x1029f216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f216;
    case 0x1029f223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f223;
    case 0x1029f237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f237;
    case 0x1029f246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f246;
    case 0x1029f253u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f253;
    case 0x1029f267u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f267;
    case 0x1029f276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f276;
    case 0x1029f283u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f283;
    case 0x1029f28du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f28d;
    case 0x1029f298u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f298;
    case 0x1029f2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f2a7;
    case 0x1029f2aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f2ae;
    case 0x1029f2b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f2b7;
    case 0x1029f2c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f2c2;
    case 0x1029f2d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f2d6;
    case 0x1029f2e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f2e5;
    case 0x1029f2f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f2f2;
    case 0x1029f301u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f301;
    case 0x1029f308u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f308;
    case 0x1029f311u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f311;
    case 0x1029f31cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f31c;
    case 0x1029f330u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f330;
    case 0x1029f33fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f33f;
    case 0x1029f34cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f34c;
    case 0x1029f35bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f35b;
    case 0x1029f362u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f362;
    case 0x1029f36bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f36b;
    case 0x1029f372u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f372;
    case 0x1029f386u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f386;
    case 0x1029f395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f395;
    case 0x1029f3a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3a2;
    case 0x1029f3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3b1;
    case 0x1029f3b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3b8;
    case 0x1029f3c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3c1;
    case 0x1029f3c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3c8;
    case 0x1029f3d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3d2;
    case 0x1029f3ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3dd;
    case 0x1029f3e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3e2;
    case 0x1029f3f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f3f6;
    case 0x1029f405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f405;
    case 0x1029f412u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f412;
    case 0x1029f426u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f426;
    case 0x1029f435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f435;
    case 0x1029f442u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f442;
    case 0x1029f44cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f44c;
    case 0x1029f457u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f457;
    case 0x1029f466u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f466;
    case 0x1029f46du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f46d;
    case 0x1029f476u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f476;
    case 0x1029f481u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f481;
    case 0x1029f495u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f495;
    case 0x1029f4a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f4a4;
    case 0x1029f4b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f4b1;
    case 0x1029f4c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f4c0;
    case 0x1029f4c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f4c7;
    case 0x1029f4d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f4d0;
    case 0x1029f4dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f4db;
    case 0x1029f4efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f4ef;
    case 0x1029f4feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f4fe;
    case 0x1029f50bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f50b;
    case 0x1029f51au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f51a;
    case 0x1029f521u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f521;
    case 0x1029f52au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f52a;
    case 0x1029f535u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f535;
    case 0x1029f549u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f549;
    case 0x1029f558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f558;
    case 0x1029f565u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f565;
    case 0x1029f574u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f574;
    case 0x1029f57bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f57b;
    case 0x1029f584u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f584;
    case 0x1029f58fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f58f;
    case 0x1029f5a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5a3;
    case 0x1029f5b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f5b2;
    case 0x1029f5bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5bf;
    case 0x1029f5ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5ce;
    case 0x1029f5d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5d5;
    case 0x1029f5deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5de;
    case 0x1029f5e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5e9;
    case 0x1029f5fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f5fd;
    case 0x1029f60cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f60c;
    case 0x1029f619u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f619;
    case 0x1029f628u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f628;
    case 0x1029f62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f62f;
    case 0x1029f638u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f638;
    case 0x1029f643u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f643;
    case 0x1029f657u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f657;
    case 0x1029f666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f666;
    case 0x1029f673u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f673;
    case 0x1029f682u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f682;
    case 0x1029f689u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f689;
    case 0x1029f692u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f692;
    case 0x1029f69du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f69d;
    case 0x1029f6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f6b1;
    case 0x1029f6c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f6c0;
    case 0x1029f6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f6cd;
    case 0x1029f6dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f6dc;
    case 0x1029f6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f6e3;
    case 0x1029f6edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f6ed;
    case 0x1029f6f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f6f8;
    case 0x1029f705u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f705;
    case 0x1029f710u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f710;
    case 0x1029f720u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f720;
    case 0x1029f72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f72b;
    case 0x1029f73au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f73a;
    case 0x1029f741u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f741;
    case 0x1029f74bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f74b;
    case 0x1029f756u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f756;
    case 0x1029f763u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f763;
    case 0x1029f76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f76e;
    case 0x1029f77eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f77e;
    case 0x1029f786u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f786;
    case 0x1029f795u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f795;
    case 0x1029f7a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7a0;
    case 0x1029f7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7a9;
    case 0x1029f7b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7b4;
    case 0x1029f7beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7be;
    case 0x1029f7c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7c9;
    case 0x1029f7ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7ce;
    case 0x1029f7e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7e2;
    case 0x1029f7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f7f1;
    case 0x1029f7feu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f7fe;
    case 0x1029f808u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f808;
    case 0x1029f81cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f81c;
    case 0x1029f82bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f82b;
    case 0x1029f838u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f838;
    case 0x1029f83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f83d;
    case 0x1029f84cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f84c;
    case 0x1029f854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f854;
    case 0x1029f85bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f85b;
    case 0x1029f869u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f869;
    case 0x1029f876u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f876;
    case 0x1029f88au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f88a;
    case 0x1029f899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f899;
    case 0x1029f8a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8a6;
    case 0x1029f8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8ba;
    case 0x1029f8c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8c9;
    case 0x1029f8d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8d6;
    case 0x1029f8e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8e5;
    case 0x1029f8f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8f0;
    case 0x1029f8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f8fa;
    case 0x1029f901u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f901;
    case 0x1029f915u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f915;
    case 0x1029f924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029f924;
    case 0x1029f931u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f931;
    case 0x1029f941u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f941;
    case 0x1029f94au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f94a;
    case 0x1029f95eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f95e;
    case 0x1029f96du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f96d;
    case 0x1029f97au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f97a;
    case 0x1029f986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f986;
    case 0x1029f98du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f98d;
    case 0x1029f992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f992;
    case 0x1029f999u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f999;
    case 0x1029f99eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f99e;
    case 0x1029f9a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9a5;
    case 0x1029f9aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9aa;
    case 0x1029f9b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9b1;
    case 0x1029f9b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9b6;
    case 0x1029f9bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9bd;
    case 0x1029f9c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9c2;
    case 0x1029f9c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9c7;
    case 0x1029f9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9de;
    case 0x1029f9e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9e5;
    case 0x1029f9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9ec;
    case 0x1029f9f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029f9f9;
    case 0x1029fa0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029fa0d;
    case 0x1029fa14u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029fa14;
    case 0x1029fa28u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029fa28;
    case 0x1029fa2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1029fa2d;
    case 0x1029fa37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029fa37;
    default: break;
    }
#endif

    COW_AT(1029d730)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0xcu);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029d741)
    if ((uint8_t)eax != 0u) goto L_1029d778;
    COW_AT(1029d748)
    wr32(sp0 - 0x2cu, 0x1deu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1029d75c)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcefcu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcefcu));
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1029d76b)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029d778: ;
    COW_AT(1029d778)
    wr32(sp0 - 0x2cu, 1u);
    t9 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t9);
    t10 = rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t10);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, t10, t9, 1u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    ebp = t10;
    COW_AT(1029d78d)
    if ((uint8_t)eax == 0u) goto L_1029d7c9;
    COW_AT(1029d794)
    wr32(sp0 - 0x2cu, 0x1deu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    COW_AT(1029d7a8)
    t16 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x38u, t16);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcefcu));
    wr32(sp0 - 0x40u, COW_IMG(0x103bcb24u));
    g->eax = eax;
    g->edx = t16;
    g->esp = sp0 - 0x38u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bcefcu));
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(1029d7bc)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029d7c9: ;
    COW_AT(1029d7c9)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    t19 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x10u);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(1029d7d3)
    if ((uint8_t)eax != 0u) goto L_1029d80a;
    COW_AT(1029d7da)
    wr32(sp0 - 0x2cu, 0x1dfu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1029d7ee)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcef0u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bc94cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t25 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bcef0u));
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(1029d7fd)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029d80a: ;
    COW_AT(1029d80a)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcee8u));
    t27 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t27);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t28 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t27, edx, 1, 7, t27, COW_IMG(0x103bcee8u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(1029d819)
    if (eax != 0u) goto L_1029d827;
    COW_AT(1029d820)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t31 = cow_stdcall(g, COW_IMG(0x102908c0u), 0);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(1029d825)
L_1029d89d: ;
    COW_AT(1029d89d)
    if (rd32(eax) - 0xf0001u > 4u)
    {
        esi = eax;
        goto L_1029f153;
    }
    esi = eax;
    eax = rd32(eax) - 0xf0001u;
    COW_AT(1029d8af)
    t62 = rd32(COW_IMG(0x1029fa44u) + eax * 4u);
    switch (t62 - RD)
    {
    case 0x1029d8b6u: goto L_1029d8b6;
    case 0x1029e57du: goto L_1029e57d;
    case 0x1029ebc1u: goto L_1029ebc1;
    case 0x1029f283u: goto L_1029f283;
    case 0x1029f442u: goto L_1029f442;
    default: rt_fatal(g, COW_IMG(0x1029d8afu), "switch");
    }
    return 0;
L_1029d827: ;
    COW_AT(1029d827)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcee0u));
    t34 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t34);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t35 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t34, 1, 7, t34, COW_IMG(0x103bcee0u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(1029d836)
    if (eax != 0u) goto L_1029d844;
    COW_AT(1029d83d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t38 = cow_stdcall(g, COW_IMG(0x102992e0u), 0);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(1029d842)
    goto L_1029d89d;
L_1029d844: ;
    COW_AT(1029d844)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bced4u));
    t41 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t41);
    g->eax = t41;
    g->esp = sp0 - 0x14u;
    t42 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t41, COW_IMG(0x103bced4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(1029d853)
    if (eax != 0u) goto L_1029d861;
    COW_AT(1029d85a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t45 = cow_stdcall(g, COW_IMG(0x10298ec0u), 0);
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
    COW_AT(1029d85f)
    goto L_1029d89d;
L_1029d861: ;
    COW_AT(1029d861)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bceccu));
    t48 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t48);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t49 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t48, edx, 1, 7, t48, COW_IMG(0x103bceccu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(1029d870)
    if (eax != 0u) goto L_1029d87e;
    COW_AT(1029d877)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t52 = cow_stdcall(g, COW_IMG(0x10299870u), 0);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(1029d87c)
    goto L_1029d89d;
L_1029d87e: ;
    COW_AT(1029d87e)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcec4u));
    t55 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t55);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t56 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t55, 1, 7, t55, COW_IMG(0x103bcec4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t57 = g->ecx;
    t58 = g->edx;
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(1029d88d)
    if (eax != 0u) goto L_1029f8d6;
    COW_AT(1029d898)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t59 = cow_stdcall(g, COW_IMG(0x10299700u), 0);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    goto L_1029d89d;
L_1029d8b6: ;
    COW_AT(1029d8b6)
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t689 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t690 = g->edx;
    eax = t689;
    edx = t690;
    COW_AT(1029d8c8)
    if ((uint8_t)eax == 0u) goto L_1029e37c;
L_1029d8d3: ;
    COW_AT(1029d8d3)
    wr32(sp0 - 0x2cu, COW_IMG(0x10390108u));
    t691 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t691);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t692 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t691, edx, 1, 7, t691, COW_IMG(0x10390108u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t693 = g->ecx;
    t694 = g->edx;
    eax = t692;
    ecx = t693;
    edx = t694;
    COW_AT(1029d8e2)
    if (eax != 0u) goto L_1029d92d;
    COW_AT(1029d8e9)
    wr32(sp0 - 0x2cu, esi + 0x28u);
    g->eax = eax;
    g->edx = esi + 0x28u;
    g->esp = sp0 - 0x20u;
    t695 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ecx, 3, esi + 0x28u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t696 = g->ecx;
    t697 = g->edx;
    eax = t695;
    ecx = t696;
    edx = t697;
    COW_AT(1029d8f2)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029d8fd)
    wr32(sp0 - 0x2cu, 0x223u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t698 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t699 = g->ecx;
    t700 = g->edx;
    eax = t698;
    ecx = t699;
    edx = t700;
    COW_AT(1029d911)
    wr32(sp0 - 0x38u, COW_IMG(0x10390108u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcea4u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t701 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcea4u), COW_IMG(0x10390108u));
    t702 = g->edx;
    eax = t701;
    edx = t702;
    COW_AT(1029d920)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029d92d: ;
    COW_AT(1029d92d)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce9cu));
    t703 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t703);
    g->ebx = in_ebx;
    g->eax = t703;
    g->esp = sp0 - 0x14u;
    t704 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t703, COW_IMG(0x103bce9cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t705 = g->ecx;
    t706 = g->edx;
    eax = t704;
    ecx = t705;
    edx = t706;
    COW_AT(1029d93c)
    if (eax != 0u) goto L_1029d987;
    COW_AT(1029d943)
    wr32(sp0 - 0x2cu, esi + 0x34u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t707 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x34u, 1, esi + 0x34u);
    t708 = g->ecx;
    t709 = g->edx;
    eax = t707;
    ecx = t708;
    edx = t709;
    COW_AT(1029d94c)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029d957)
    wr32(sp0 - 0x2cu, 0x224u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t710 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t711 = g->ecx;
    t712 = g->edx;
    eax = t710;
    ecx = t711;
    edx = t712;
    COW_AT(1029d96b)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce9cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t713 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce9cu));
    t714 = g->edx;
    eax = t713;
    edx = t714;
    COW_AT(1029d97a)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029d987: ;
    COW_AT(1029d987)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce94u));
    t715 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t715);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t716 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t715, 1, 7, t715, COW_IMG(0x103bce94u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t717 = g->ecx;
    t718 = g->edx;
    eax = t716;
    ecx = t717;
    edx = t718;
    COW_AT(1029d996)
    if (eax != 0u) goto L_1029d9e1;
    COW_AT(1029d99d)
    wr32(sp0 - 0x2cu, esi + 0x38u);
    g->ebx = in_ebx;
    g->eax = esi + 0x38u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t719 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x38u);
    t720 = g->ecx;
    t721 = g->edx;
    eax = t719;
    ecx = t720;
    edx = t721;
    COW_AT(1029d9a6)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029d9b1)
    wr32(sp0 - 0x2cu, 0x225u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t722 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t723 = g->ecx;
    t724 = g->edx;
    eax = t722;
    ecx = t723;
    edx = t724;
    COW_AT(1029d9c5)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce94u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t725 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce94u));
    t726 = g->edx;
    eax = t725;
    edx = t726;
    COW_AT(1029d9d4)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029d9e1: ;
    COW_AT(1029d9e1)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce88u));
    t727 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t727);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t728 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t727, edx, 1, 7, t727, COW_IMG(0x103bce88u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t729 = g->ecx;
    t730 = g->edx;
    eax = t728;
    ecx = t729;
    edx = t730;
    COW_AT(1029d9f0)
    if (eax != 0u) goto L_1029da3b;
    COW_AT(1029d9f7)
    wr32(sp0 - 0x2cu, esi + 0x3cu);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = esi + 0x3cu;
    g->esp = sp0 - 0x28u;
    t731 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x3cu);
    t732 = g->ecx;
    t733 = g->edx;
    eax = t731;
    ecx = t732;
    edx = t733;
    COW_AT(1029da00)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029da0b)
    wr32(sp0 - 0x2cu, 0x226u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t734 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t735 = g->ecx;
    t736 = g->edx;
    eax = t734;
    ecx = t735;
    edx = t736;
    COW_AT(1029da1f)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce88u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t737 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce88u));
    t738 = g->edx;
    eax = t737;
    edx = t738;
    COW_AT(1029da2e)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029da3b: ;
    COW_AT(1029da3b)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce7cu));
    t739 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t739);
    g->ebx = in_ebx;
    g->eax = t739;
    g->esp = sp0 - 0x14u;
    t740 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t739, COW_IMG(0x103bce7cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t741 = g->ecx;
    t742 = g->edx;
    eax = t740;
    ecx = t741;
    edx = t742;
    COW_AT(1029da4a)
    if (eax != 0u) goto L_1029da95;
    COW_AT(1029da51)
    wr32(sp0 - 0x2cu, esi + 0x40u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t743 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x40u, 1, esi + 0x40u);
    t744 = g->ecx;
    t745 = g->edx;
    eax = t743;
    ecx = t744;
    edx = t745;
    COW_AT(1029da5a)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029da65)
    wr32(sp0 - 0x2cu, 0x227u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t746 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t747 = g->ecx;
    t748 = g->edx;
    eax = t746;
    ecx = t747;
    edx = t748;
    COW_AT(1029da79)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce7cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t749 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce7cu));
    t750 = g->edx;
    eax = t749;
    edx = t750;
    COW_AT(1029da88)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029da95: ;
    COW_AT(1029da95)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce6cu));
    t751 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t751);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t752 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t751, 1, 7, t751, COW_IMG(0x103bce6cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t753 = g->ecx;
    t754 = g->edx;
    eax = t752;
    ecx = t753;
    edx = t754;
    COW_AT(1029daa4)
    if (eax != 0u) goto L_1029daef;
    COW_AT(1029daab)
    wr32(sp0 - 0x2cu, esi + 0x44u);
    g->ebx = in_ebx;
    g->eax = esi + 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t755 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x44u);
    t756 = g->ecx;
    t757 = g->edx;
    eax = t755;
    ecx = t756;
    edx = t757;
    COW_AT(1029dab4)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029dabf)
    wr32(sp0 - 0x2cu, 0x228u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t758 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t759 = g->ecx;
    t760 = g->edx;
    eax = t758;
    ecx = t759;
    edx = t760;
    COW_AT(1029dad3)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce6cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t761 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce6cu));
    t762 = g->edx;
    eax = t761;
    edx = t762;
    COW_AT(1029dae2)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029daef: ;
    COW_AT(1029daef)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce60u));
    t763 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t763);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t764 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t763, edx, 1, 7, t763, COW_IMG(0x103bce60u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t765 = g->ecx;
    t766 = g->edx;
    eax = t764;
    ecx = t765;
    edx = t766;
    COW_AT(1029dafe)
    if (eax != 0u) goto L_1029db49;
    COW_AT(1029db05)
    wr32(sp0 - 0x2cu, esi + 0x48u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = esi + 0x48u;
    g->esp = sp0 - 0x28u;
    t767 = cow_thiscall_cdecl(g, COW_IMG(0x102afc30u), ecx, 1, esi + 0x48u);
    t768 = g->ecx;
    t769 = g->edx;
    eax = t767;
    ecx = t768;
    edx = t769;
    COW_AT(1029db0e)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029db19)
    wr32(sp0 - 0x2cu, 0x229u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t770 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t771 = g->ecx;
    t772 = g->edx;
    eax = t770;
    ecx = t771;
    edx = t772;
    COW_AT(1029db2d)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce60u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bce3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t773 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bce3cu), COW_IMG(0x103bce60u));
    t774 = g->edx;
    eax = t773;
    edx = t774;
    COW_AT(1029db3c)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029db49: ;
    COW_AT(1029db49)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce2cu));
    t775 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t775);
    g->ebx = in_ebx;
    g->eax = t775;
    g->esp = sp0 - 0x14u;
    t776 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t775, COW_IMG(0x103bce2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t777 = g->ecx;
    t778 = g->edx;
    eax = t776;
    ecx = t777;
    edx = t778;
    COW_AT(1029db58)
    if (eax != 0u) goto L_1029dba7;
    COW_AT(1029db5f)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t779 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x18u, edx, 1, 1, sp0 - 0x18u);
    t780 = g->ecx;
    t781 = g->edx;
    eax = t779;
    ecx = t780;
    edx = t781;
    COW_AT(1029db69)
    if ((uint8_t)eax == 0u) goto L_1029e393;
    COW_AT(1029db74)
    wr32(sp0 - 0x2cu, 0u);
    t782 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t782);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t782;
    g->esp = sp0 - 0x10u;
    t783 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t782, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t784 = g->ecx;
    t785 = g->edx;
    eax = t783;
    ecx = t784;
    edx = t785;
    COW_AT(1029db81)
    if ((uint8_t)eax == 0u) goto L_1029e3c3;
    COW_AT(1029db8c)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t786 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t786);
    wr32(sp0 - 0x34u, ebp);
    g->eax = sp0 - 0x14u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t787 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t786, sp0 - 0x14u);
    t788 = g->edx;
    eax = t787;
    edx = t788;
    COW_AT(1029db9c)
    wr32(esi + 0x4cu, eax);
L_1029e367: ;
    COW_AT(1029e367)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1102 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x18u, edx, 1, 1, sp0 - 0x18u);
    t1103 = g->edx;
    eax = t1102;
    edx = t1103;
    COW_AT(1029e371)
    if ((uint8_t)eax != 0u) goto L_1029d8d3;
L_1029e37c: ;
    COW_AT(1029e37c)
    if (rd32(sp0 + 4u) != 0u)
    {
    COW_AT(1029e388)
        t1114 = rd32(esi + 0x84u);
        wr32(esi + 0x84u, t1114 | 1u);
    }
L_1029f153: ;
    COW_AT(1029f153)
    t1115 = rd32(ebp + 0x34u);
    wr32(sp0 - 0x2cu, t1115);
    wr32(sp0 - 0x30u, 1u);
    t1116 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t1116);
    wr32(sp0 - 0x38u, ebp);
    g->eax = t1115;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1117 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t1116, 4, ebp, t1116, 1u, t1115);
    t1118 = g->ecx;
    t1119 = g->edx;
    eax = t1117;
    ecx = t1118;
    edx = t1119;
    COW_AT(1029f164)
    wr32(sp0 - 0x3cu, esi);
    wr32(sp0 - 0x40u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1120 = cow_thiscall_cdecl(g, COW_IMG(0x102794e0u), ecx, 5, ebp, esi, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 1u);
    t1121 = g->ecx;
    t1122 = g->edx;
    eax = t1120;
    ecx = t1121;
    edx = t1122;
    COW_AT(1029f16b)
    wr32(sp0 - 0x44u, esi);
    wr32(sp0 - 0x48u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t1123 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 3, ebp, esi, rd32(sp0 - 0x40u));
    t1124 = g->edx;
    eax = t1123;
    edx = t1124;
    COW_AT(1029f172)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1029dba7: ;
    COW_AT(1029dba7)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce20u));
    t794 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t794);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t795 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t794, 1, 7, t794, COW_IMG(0x103bce20u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t796 = g->ecx;
    t797 = g->edx;
    eax = t795;
    ecx = t796;
    edx = t797;
    COW_AT(1029dbb6)
    if (eax != 0u) goto L_1029dc05;
    COW_AT(1029dbbd)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t798 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t799 = g->ecx;
    t800 = g->edx;
    eax = t798;
    ecx = t799;
    edx = t800;
    COW_AT(1029dbc7)
    if ((uint8_t)eax == 0u) goto L_1029e3e4;
    COW_AT(1029dbd2)
    wr32(sp0 - 0x2cu, 0u);
    t801 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t801);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = t801;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t802 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t801, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t803 = g->ecx;
    t804 = g->edx;
    eax = t802;
    ecx = t803;
    edx = t804;
    COW_AT(1029dbdf)
    if ((uint8_t)eax == 0u) goto L_1029e414;
    COW_AT(1029dbea)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t805 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t805);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t805;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x28u;
    t806 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t805, sp0 - 0x14u);
    t807 = g->edx;
    eax = t806;
    edx = t807;
    COW_AT(1029dbfa)
    wr32(esi + 0x50u, eax);
    goto L_1029e367;
L_1029dc05: ;
    COW_AT(1029dc05)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce14u));
    t813 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t813);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t814 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t813, edx, 1, 7, t813, COW_IMG(0x103bce14u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t815 = g->ecx;
    t816 = g->edx;
    eax = t814;
    ecx = t815;
    edx = t816;
    COW_AT(1029dc14)
    if (eax != 0u) goto L_1029dc63;
    COW_AT(1029dc1b)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t817 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t818 = g->ecx;
    t819 = g->edx;
    eax = t817;
    ecx = t818;
    edx = t819;
    COW_AT(1029dc25)
    if ((uint8_t)eax == 0u) goto L_1029e435;
    COW_AT(1029dc30)
    wr32(sp0 - 0x2cu, 0u);
    t820 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t820);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t820;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t821 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t820, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t822 = g->ecx;
    t823 = g->edx;
    eax = t821;
    ecx = t822;
    edx = t823;
    COW_AT(1029dc3d)
    if ((uint8_t)eax == 0u) goto L_1029e465;
    COW_AT(1029dc48)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t824 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t824);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->edx = t824;
    g->esp = sp0 - 0x28u;
    t825 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t824, sp0 - 0x14u);
    t826 = g->edx;
    eax = t825;
    edx = t826;
    COW_AT(1029dc58)
    wr32(esi + 0x54u, eax);
    goto L_1029e367;
L_1029dc63: ;
    COW_AT(1029dc63)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce04u));
    t832 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t832);
    g->ebx = in_ebx;
    g->eax = t832;
    g->esp = sp0 - 0x14u;
    t833 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t832, COW_IMG(0x103bce04u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t834 = g->ecx;
    t835 = g->edx;
    eax = t833;
    ecx = t834;
    edx = t835;
    COW_AT(1029dc72)
    if (eax != 0u) goto L_1029dcc1;
    COW_AT(1029dc79)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t836 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x18u, edx, 1, 1, sp0 - 0x18u);
    t837 = g->ecx;
    t838 = g->edx;
    eax = t836;
    ecx = t837;
    edx = t838;
    COW_AT(1029dc83)
    if ((uint8_t)eax == 0u) goto L_1029e46f;
    COW_AT(1029dc8e)
    wr32(sp0 - 0x2cu, 0u);
    t839 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t839);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t839;
    g->esp = sp0 - 0x10u;
    t840 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t839, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t841 = g->ecx;
    t842 = g->edx;
    eax = t840;
    ecx = t841;
    edx = t842;
    COW_AT(1029dc9b)
    if ((uint8_t)eax == 0u) goto L_1029e49f;
    COW_AT(1029dca6)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t843 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t843);
    wr32(sp0 - 0x34u, ebp);
    g->eax = sp0 - 0x14u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t844 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t843, sp0 - 0x14u);
    t845 = g->edx;
    eax = t844;
    edx = t845;
    COW_AT(1029dcb6)
    wr32(esi + 0x58u, eax);
    goto L_1029e367;
L_1029dcc1: ;
    COW_AT(1029dcc1)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcdf4u));
    t854 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t854);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t855 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t854, 1, 7, t854, COW_IMG(0x103bcdf4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t856 = g->ecx;
    t857 = g->edx;
    eax = t855;
    ecx = t856;
    edx = t857;
    COW_AT(1029dcd0)
    if (eax != 0u) goto L_1029dd1f;
    COW_AT(1029dcd7)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t858 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t859 = g->ecx;
    t860 = g->edx;
    eax = t858;
    ecx = t859;
    edx = t860;
    COW_AT(1029dce1)
    if ((uint8_t)eax == 0u) goto L_1029e4a9;
    COW_AT(1029dcec)
    wr32(sp0 - 0x2cu, 0u);
    t861 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t861);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = t861;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t862 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t861, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t863 = g->ecx;
    t864 = g->edx;
    eax = t862;
    ecx = t863;
    edx = t864;
    COW_AT(1029dcf9)
    if ((uint8_t)eax == 0u) goto L_1029e4d9;
    COW_AT(1029dd04)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t865 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t865);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t865;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x28u;
    t866 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t865, sp0 - 0x14u);
    t867 = g->edx;
    eax = t866;
    edx = t867;
    COW_AT(1029dd14)
    wr32(esi + 0x64u, eax);
    goto L_1029e367;
L_1029dd1f: ;
    COW_AT(1029dd1f)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcde0u));
    t876 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t876);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t877 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t876, edx, 1, 7, t876, COW_IMG(0x103bcde0u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t878 = g->ecx;
    t879 = g->edx;
    eax = t877;
    ecx = t878;
    edx = t879;
    COW_AT(1029dd2e)
    if (eax != 0u) goto L_1029dd7d;
    COW_AT(1029dd35)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t880 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t881 = g->ecx;
    t882 = g->edx;
    eax = t880;
    ecx = t881;
    edx = t882;
    COW_AT(1029dd3f)
    if ((uint8_t)eax == 0u) goto L_1029e4e3;
    COW_AT(1029dd4a)
    wr32(sp0 - 0x2cu, 0u);
    t883 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t883);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t883;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t884 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t883, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t885 = g->ecx;
    t886 = g->edx;
    eax = t884;
    ecx = t885;
    edx = t886;
    COW_AT(1029dd57)
    if ((uint8_t)eax == 0u) goto L_1029e513;
    COW_AT(1029dd62)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t887 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t887);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->edx = t887;
    g->esp = sp0 - 0x28u;
    t888 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t887, sp0 - 0x14u);
    t889 = g->edx;
    eax = t888;
    edx = t889;
    COW_AT(1029dd72)
    wr32(esi + 0x5cu, eax);
    goto L_1029e367;
L_1029dd7d: ;
    COW_AT(1029dd7d)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcdd4u));
    t903 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t903);
    g->ebx = in_ebx;
    g->eax = t903;
    g->esp = sp0 - 0x14u;
    t904 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t903, COW_IMG(0x103bcdd4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t905 = g->ecx;
    t906 = g->edx;
    eax = t904;
    ecx = t905;
    edx = t906;
    COW_AT(1029dd8c)
    if (eax != 0u) goto L_1029ddd7;
    COW_AT(1029dd93)
    wr32(sp0 - 0x2cu, esi + 0x6cu);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t907 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x6cu, 1, esi + 0x6cu);
    t908 = g->ecx;
    t909 = g->edx;
    eax = t907;
    ecx = t908;
    edx = t909;
    COW_AT(1029dd9c)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029dda7)
    wr32(sp0 - 0x2cu, 0x232u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t910 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t911 = g->ecx;
    t912 = g->edx;
    eax = t910;
    ecx = t911;
    edx = t912;
    COW_AT(1029ddbb)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcdd4u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t913 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcdd4u));
    t914 = g->edx;
    eax = t913;
    edx = t914;
    COW_AT(1029ddca)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ddd7: ;
    COW_AT(1029ddd7)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcdc4u));
    t915 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t915);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t916 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t915, 1, 7, t915, COW_IMG(0x103bcdc4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t917 = g->ecx;
    t918 = g->edx;
    eax = t916;
    ecx = t917;
    edx = t918;
    COW_AT(1029dde6)
    if (eax != 0u) goto L_1029de31;
    COW_AT(1029dded)
    wr32(sp0 - 0x2cu, esi + 0x70u);
    g->ebx = in_ebx;
    g->eax = esi + 0x70u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t919 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x70u);
    t920 = g->ecx;
    t921 = g->edx;
    eax = t919;
    ecx = t920;
    edx = t921;
    COW_AT(1029ddf6)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029de01)
    wr32(sp0 - 0x2cu, 0x233u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t922 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t923 = g->ecx;
    t924 = g->edx;
    eax = t922;
    ecx = t923;
    edx = t924;
    COW_AT(1029de15)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcdc4u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t925 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcdc4u));
    t926 = g->edx;
    eax = t925;
    edx = t926;
    COW_AT(1029de24)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029de31: ;
    COW_AT(1029de31)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcdb4u));
    t927 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t927);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t928 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t927, edx, 1, 7, t927, COW_IMG(0x103bcdb4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t929 = g->ecx;
    t930 = g->edx;
    eax = t928;
    ecx = t929;
    edx = t930;
    COW_AT(1029de40)
    if (eax != 0u) goto L_1029de8b;
    COW_AT(1029de47)
    wr32(sp0 - 0x2cu, esi + 0x74u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = esi + 0x74u;
    g->esp = sp0 - 0x28u;
    t931 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x74u);
    t932 = g->ecx;
    t933 = g->edx;
    eax = t931;
    ecx = t932;
    edx = t933;
    COW_AT(1029de50)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029de5b)
    wr32(sp0 - 0x2cu, 0x234u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t934 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t935 = g->ecx;
    t936 = g->edx;
    eax = t934;
    ecx = t935;
    edx = t936;
    COW_AT(1029de6f)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcdb4u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t937 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcdb4u));
    t938 = g->edx;
    eax = t937;
    edx = t938;
    COW_AT(1029de7e)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029de8b: ;
    COW_AT(1029de8b)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcda8u));
    t939 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t939);
    g->ebx = in_ebx;
    g->eax = t939;
    g->esp = sp0 - 0x14u;
    t940 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t939, COW_IMG(0x103bcda8u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t941 = g->ecx;
    t942 = g->edx;
    eax = t940;
    ecx = t941;
    edx = t942;
    COW_AT(1029de9a)
    if (eax != 0u) goto L_1029dee8;
    COW_AT(1029dea1)
    wr32(sp0 - 0x2cu, esi + 0x80u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t943 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x80u, 1, esi + 0x80u);
    t944 = g->ecx;
    t945 = g->edx;
    eax = t943;
    ecx = t944;
    edx = t945;
    COW_AT(1029dead)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029deb8)
    wr32(sp0 - 0x2cu, 0x235u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t946 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t947 = g->ecx;
    t948 = g->edx;
    eax = t946;
    ecx = t947;
    edx = t948;
    COW_AT(1029decc)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcda8u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t949 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcda8u));
    t950 = g->edx;
    eax = t949;
    edx = t950;
    COW_AT(1029dedb)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029dee8: ;
    COW_AT(1029dee8)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd98u));
    t951 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t951);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t952 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t951, 1, 7, t951, COW_IMG(0x103bcd98u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t953 = g->ecx;
    t954 = g->edx;
    eax = t952;
    ecx = t953;
    edx = t954;
    COW_AT(1029def7)
    if (eax != 0u) goto L_1029df42;
    COW_AT(1029defe)
    wr32(sp0 - 0x2cu, esi + 0x78u);
    g->ebx = in_ebx;
    g->eax = esi + 0x78u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t955 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x78u);
    t956 = g->ecx;
    t957 = g->edx;
    eax = t955;
    ecx = t956;
    edx = t957;
    COW_AT(1029df07)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029df12)
    wr32(sp0 - 0x2cu, 0x236u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t958 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t959 = g->ecx;
    t960 = g->edx;
    eax = t958;
    ecx = t959;
    edx = t960;
    COW_AT(1029df26)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd98u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t961 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcd98u));
    t962 = g->edx;
    eax = t961;
    edx = t962;
    COW_AT(1029df35)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029df42: ;
    COW_AT(1029df42)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd88u));
    t963 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t963);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t964 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t963, edx, 1, 7, t963, COW_IMG(0x103bcd88u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t965 = g->ecx;
    t966 = g->edx;
    eax = t964;
    ecx = t965;
    edx = t966;
    COW_AT(1029df51)
    if (eax != 0u) goto L_1029df9c;
    COW_AT(1029df58)
    wr32(sp0 - 0x2cu, esi + 0x7cu);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = esi + 0x7cu;
    g->esp = sp0 - 0x28u;
    t967 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x7cu);
    t968 = g->ecx;
    t969 = g->edx;
    eax = t967;
    ecx = t968;
    edx = t969;
    COW_AT(1029df61)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029df6c)
    wr32(sp0 - 0x2cu, 0x237u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t970 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t971 = g->ecx;
    t972 = g->edx;
    eax = t970;
    ecx = t971;
    edx = t972;
    COW_AT(1029df80)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd88u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t973 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcd88u));
    t974 = g->edx;
    eax = t973;
    edx = t974;
    COW_AT(1029df8f)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029df9c: ;
    COW_AT(1029df9c)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd80u));
    t975 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t975);
    g->ebx = in_ebx;
    g->eax = t975;
    g->esp = sp0 - 0x14u;
    t976 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t975, COW_IMG(0x103bcd80u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t977 = g->ecx;
    t978 = g->edx;
    eax = t976;
    ecx = t977;
    edx = t978;
    COW_AT(1029dfab)
    if (eax != 0u) goto L_1029dff9;
    COW_AT(1029dfb2)
    wr32(sp0 - 0x2cu, esi + 0x90u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t979 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), esi + 0x90u, 1, esi + 0x90u);
    t980 = g->ecx;
    t981 = g->edx;
    eax = t979;
    ecx = t980;
    edx = t981;
    COW_AT(1029dfbe)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029dfc9)
    wr32(sp0 - 0x2cu, 0x239u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t982 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t983 = g->ecx;
    t984 = g->edx;
    eax = t982;
    ecx = t983;
    edx = t984;
    COW_AT(1029dfdd)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd80u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t985 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd80u));
    t986 = g->edx;
    eax = t985;
    edx = t986;
    COW_AT(1029dfec)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029dff9: ;
    COW_AT(1029dff9)
    wr32(sp0 - 0x2cu, COW_IMG(0x1039075cu));
    t987 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t987);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t988 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t987, 1, 7, t987, COW_IMG(0x1039075cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t989 = g->ecx;
    t990 = g->edx;
    eax = t988;
    ecx = t989;
    edx = t990;
    COW_AT(1029e008)
    if (eax != 0u) goto L_1029e056;
    COW_AT(1029e00f)
    wr32(sp0 - 0x2cu, esi + 0x8cu);
    g->eax = esi + 0x8cu;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t991 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x8cu);
    t992 = g->ecx;
    t993 = g->edx;
    eax = t991;
    ecx = t992;
    edx = t993;
    COW_AT(1029e01b)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e026)
    wr32(sp0 - 0x2cu, 0x23au);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t994 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t995 = g->ecx;
    t996 = g->edx;
    eax = t994;
    ecx = t995;
    edx = t996;
    COW_AT(1029e03a)
    wr32(sp0 - 0x38u, COW_IMG(0x1039075cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t997 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x1039075cu));
    t998 = g->edx;
    eax = t997;
    edx = t998;
    COW_AT(1029e049)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e056: ;
    COW_AT(1029e056)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd78u));
    t999 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t999);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1000 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t999, edx, 1, 7, t999, COW_IMG(0x103bcd78u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1001 = g->ecx;
    t1002 = g->edx;
    eax = t1000;
    ecx = t1001;
    edx = t1002;
    COW_AT(1029e065)
    if (eax != 0u) goto L_1029e0b3;
    COW_AT(1029e06c)
    wr32(sp0 - 0x2cu, esi + 0x88u);
    g->eax = eax;
    g->edx = esi + 0x88u;
    g->esp = sp0 - 0x28u;
    t1003 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x88u);
    t1004 = g->ecx;
    t1005 = g->edx;
    eax = t1003;
    ecx = t1004;
    edx = t1005;
    COW_AT(1029e078)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e083)
    wr32(sp0 - 0x2cu, 0x23bu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1006 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1007 = g->ecx;
    t1008 = g->edx;
    eax = t1006;
    ecx = t1007;
    edx = t1008;
    COW_AT(1029e097)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd78u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1009 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd78u));
    t1010 = g->edx;
    eax = t1009;
    edx = t1010;
    COW_AT(1029e0a6)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e0b3: ;
    COW_AT(1029e0b3)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd70u));
    t1011 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1011);
    g->ebx = in_ebx;
    g->eax = t1011;
    g->esp = sp0 - 0x14u;
    t1012 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t1011, COW_IMG(0x103bcd70u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1013 = g->ecx;
    t1014 = g->edx;
    eax = t1012;
    ecx = t1013;
    edx = t1014;
    COW_AT(1029e0c2)
    if (eax != 0u) goto L_1029e110;
    COW_AT(1029e0c9)
    wr32(sp0 - 0x2cu, esi + 0x94u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1015 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), esi + 0x94u, 1, esi + 0x94u);
    t1016 = g->ecx;
    t1017 = g->edx;
    eax = t1015;
    ecx = t1016;
    edx = t1017;
    COW_AT(1029e0d5)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e0e0)
    wr32(sp0 - 0x2cu, 0x23cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1018 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1019 = g->ecx;
    t1020 = g->edx;
    eax = t1018;
    ecx = t1019;
    edx = t1020;
    COW_AT(1029e0f4)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd70u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1021 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd70u));
    t1022 = g->edx;
    eax = t1021;
    edx = t1022;
    COW_AT(1029e103)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e110: ;
    COW_AT(1029e110)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd68u));
    t1023 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1023);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1024 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t1023, 1, 7, t1023, COW_IMG(0x103bcd68u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1025 = g->ecx;
    t1026 = g->edx;
    eax = t1024;
    ecx = t1025;
    edx = t1026;
    COW_AT(1029e11f)
    if (eax != 0u) goto L_1029e16d;
    COW_AT(1029e126)
    wr32(sp0 - 0x2cu, esi + 0x9cu);
    g->eax = esi + 0x9cu;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1027 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x9cu);
    t1028 = g->ecx;
    t1029 = g->edx;
    eax = t1027;
    ecx = t1028;
    edx = t1029;
    COW_AT(1029e132)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e13d)
    wr32(sp0 - 0x2cu, 0x23du);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1030 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1031 = g->ecx;
    t1032 = g->edx;
    eax = t1030;
    ecx = t1031;
    edx = t1032;
    COW_AT(1029e151)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd68u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1033 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd68u));
    t1034 = g->edx;
    eax = t1033;
    edx = t1034;
    COW_AT(1029e160)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e16d: ;
    COW_AT(1029e16d)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd5cu));
    t1035 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1035);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1036 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t1035, edx, 1, 7, t1035, COW_IMG(0x103bcd5cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1037 = g->ecx;
    t1038 = g->edx;
    eax = t1036;
    ecx = t1037;
    edx = t1038;
    COW_AT(1029e17c)
    if (eax != 0u) goto L_1029e1ca;
    COW_AT(1029e183)
    wr32(sp0 - 0x2cu, esi + 0x98u);
    g->eax = eax;
    g->edx = esi + 0x98u;
    g->esp = sp0 - 0x28u;
    t1039 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x98u);
    t1040 = g->ecx;
    t1041 = g->edx;
    eax = t1039;
    ecx = t1040;
    edx = t1041;
    COW_AT(1029e18f)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e19a)
    wr32(sp0 - 0x2cu, 0x23eu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1042 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1043 = g->ecx;
    t1044 = g->edx;
    eax = t1042;
    ecx = t1043;
    edx = t1044;
    COW_AT(1029e1ae)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd5cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1045 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd5cu));
    t1046 = g->edx;
    eax = t1045;
    edx = t1046;
    COW_AT(1029e1bd)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e1ca: ;
    COW_AT(1029e1ca)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd4cu));
    t1047 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1047);
    g->ebx = in_ebx;
    g->eax = t1047;
    g->esp = sp0 - 0x14u;
    t1048 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t1047, COW_IMG(0x103bcd4cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1049 = g->ecx;
    t1050 = g->edx;
    eax = t1048;
    ecx = t1049;
    edx = t1050;
    COW_AT(1029e1d9)
    if (eax != 0u) goto L_1029e227;
    COW_AT(1029e1e0)
    wr32(sp0 - 0x2cu, esi + 0xa8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1051 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), esi + 0xa8u, 1, esi + 0xa8u);
    t1052 = g->ecx;
    t1053 = g->edx;
    eax = t1051;
    ecx = t1052;
    edx = t1053;
    COW_AT(1029e1ec)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e1f7)
    wr32(sp0 - 0x2cu, 0x23fu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1054 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1055 = g->ecx;
    t1056 = g->edx;
    eax = t1054;
    ecx = t1055;
    edx = t1056;
    COW_AT(1029e20b)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd4cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1057 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd4cu));
    t1058 = g->edx;
    eax = t1057;
    edx = t1058;
    COW_AT(1029e21a)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e227: ;
    COW_AT(1029e227)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd3cu));
    t1059 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1059);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1060 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t1059, 1, 7, t1059, COW_IMG(0x103bcd3cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1061 = g->ecx;
    t1062 = g->edx;
    eax = t1060;
    ecx = t1061;
    edx = t1062;
    COW_AT(1029e236)
    if (eax != 0u) goto L_1029e284;
    COW_AT(1029e23d)
    wr32(sp0 - 0x2cu, esi + 0xa4u);
    g->eax = esi + 0xa4u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1063 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0xa4u);
    t1064 = g->ecx;
    t1065 = g->edx;
    eax = t1063;
    ecx = t1064;
    edx = t1065;
    COW_AT(1029e249)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e254)
    wr32(sp0 - 0x2cu, 0x240u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1066 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1067 = g->ecx;
    t1068 = g->edx;
    eax = t1066;
    ecx = t1067;
    edx = t1068;
    COW_AT(1029e268)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd3cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1069 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd3cu));
    t1070 = g->edx;
    eax = t1069;
    edx = t1070;
    COW_AT(1029e277)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e284: ;
    COW_AT(1029e284)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd2cu));
    t1071 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1071);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1072 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t1071, edx, 1, 7, t1071, COW_IMG(0x103bcd2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1073 = g->ecx;
    t1074 = g->edx;
    eax = t1072;
    ecx = t1073;
    edx = t1074;
    COW_AT(1029e293)
    if (eax != 0u) goto L_1029e2e1;
    COW_AT(1029e29a)
    wr32(sp0 - 0x2cu, esi + 0xa0u);
    g->eax = eax;
    g->edx = esi + 0xa0u;
    g->esp = sp0 - 0x28u;
    t1075 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0xa0u);
    t1076 = g->ecx;
    t1077 = g->edx;
    eax = t1075;
    ecx = t1076;
    edx = t1077;
    COW_AT(1029e2a6)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e2b1)
    wr32(sp0 - 0x2cu, 0x241u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1078 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1079 = g->ecx;
    t1080 = g->edx;
    eax = t1078;
    ecx = t1079;
    edx = t1080;
    COW_AT(1029e2c5)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd2cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1081 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd2cu));
    t1082 = g->edx;
    eax = t1081;
    edx = t1082;
    COW_AT(1029e2d4)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e2e1: ;
    COW_AT(1029e2e1)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd24u));
    t1083 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1083);
    g->ebx = in_ebx;
    g->eax = t1083;
    g->esp = sp0 - 0x14u;
    t1084 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t1083, COW_IMG(0x103bcd24u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1085 = g->ecx;
    t1086 = g->edx;
    eax = t1084;
    ecx = t1085;
    edx = t1086;
    COW_AT(1029e2f0)
    if (eax != 0u) goto L_1029e338;
    COW_AT(1029e2f7)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1087 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), sp0 + 4u, 1, sp0 + 4u);
    t1088 = g->ecx;
    t1089 = g->edx;
    eax = t1087;
    ecx = t1088;
    edx = t1089;
    COW_AT(1029e301)
    if ((uint8_t)eax != 0u) goto L_1029e367;
    COW_AT(1029e308)
    wr32(sp0 - 0x2cu, 0x242u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1090 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1091 = g->ecx;
    t1092 = g->edx;
    eax = t1090;
    ecx = t1091;
    edx = t1092;
    COW_AT(1029e31c)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd24u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1093 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd24u));
    t1094 = g->edx;
    eax = t1093;
    edx = t1094;
    COW_AT(1029e32b)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e338: ;
    COW_AT(1029e338)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd1cu));
    t1095 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t1095);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1096 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t1095, 1, 7, t1095, COW_IMG(0x103bcd1cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1097 = g->ecx;
    t1098 = g->edx;
    eax = t1096;
    ecx = t1097;
    edx = t1098;
    COW_AT(1029e347)
    if (eax != 0u) goto L_1029e54d;
    COW_AT(1029e352)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t1099 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, sp0 + 4u);
    t1100 = g->ecx;
    t1101 = g->edx;
    eax = t1099;
    ecx = t1100;
    edx = t1101;
    COW_AT(1029e35c)
    if ((uint8_t)eax == 0u) goto L_1029e51d;
    goto L_1029e367;
L_1029e393: ;
    COW_AT(1029e393)
    wr32(sp0 - 0x2cu, 0x22bu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t789 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t790 = g->ecx;
    t791 = g->edx;
    eax = t789;
    ecx = t790;
    edx = t791;
    COW_AT(1029e3a7)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce2cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t792 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce2cu));
    t793 = g->edx;
    eax = t792;
    edx = t793;
    COW_AT(1029e3b6)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e3c3: ;
    COW_AT(1029e3c3)
    wr32(sp0 - 0x2cu, 0x22bu);
L_1029e3c8: ;
    COW_AT(1029e3c8)
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t846 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t847 = g->ecx;
    eax = t846;
    ecx = t847;
    COW_AT(1029e3d7)
    t848 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t848);
    edx = t848;
    ebx = in_ebx;
L_1029f854: ;
    COW_AT(1029f854)
    wr32(sp0 - 0x30u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t893 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, 0u);
    t894 = g->ecx;
    t895 = g->edx;
    eax = t893;
    ecx = t894;
    edx = t895;
    COW_AT(1029f85b)
    wr32(sp0 - 0x30u, eax);
    wr32(sp0 - 0x34u, COW_IMG(0x103bcbe8u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t896 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), eax);
    t897 = g->edx;
    eax = t896;
    edx = t897;
    COW_AT(1029f869)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e3e4: ;
    COW_AT(1029e3e4)
    wr32(sp0 - 0x2cu, 0x22cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t808 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t809 = g->ecx;
    t810 = g->edx;
    eax = t808;
    ecx = t809;
    edx = t810;
    COW_AT(1029e3f8)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce20u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t811 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce20u));
    t812 = g->edx;
    eax = t811;
    edx = t812;
    COW_AT(1029e407)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e414: ;
    COW_AT(1029e414)
    wr32(sp0 - 0x2cu, 0x22cu);
    ebx = in_ebx;
L_1029e419: ;
    COW_AT(1029e419)
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t868 = g->ecx;
    t869 = g->edx;
    ecx = t868;
    edx = t869;
    COW_AT(1029e428)
    t870 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t870);
    eax = t870;
    goto L_1029f854;
L_1029e435: ;
    COW_AT(1029e435)
    wr32(sp0 - 0x2cu, 0x22du);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t827 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t828 = g->ecx;
    t829 = g->edx;
    eax = t827;
    ecx = t828;
    edx = t829;
    COW_AT(1029e449)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce14u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t830 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce14u));
    t831 = g->edx;
    eax = t830;
    edx = t831;
    COW_AT(1029e458)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e465: ;
    COW_AT(1029e465)
    wr32(sp0 - 0x2cu, 0x22du);
    ebx = in_ebx;
L_1029f83d: ;
    COW_AT(1029f83d)
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t890 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t891 = g->edx;
    eax = t890;
    edx = t891;
    COW_AT(1029f84c)
    t892 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t892);
    ecx = t892;
    goto L_1029f854;
L_1029e46f: ;
    COW_AT(1029e46f)
    wr32(sp0 - 0x2cu, 0x22eu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t849 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t850 = g->ecx;
    t851 = g->edx;
    eax = t849;
    ecx = t850;
    edx = t851;
    COW_AT(1029e483)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce04u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t852 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce04u));
    t853 = g->edx;
    eax = t852;
    edx = t853;
    COW_AT(1029e492)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e49f: ;
    COW_AT(1029e49f)
    wr32(sp0 - 0x2cu, 0x22eu);
    goto L_1029e3c8;
L_1029e4a9: ;
    COW_AT(1029e4a9)
    wr32(sp0 - 0x2cu, 0x22fu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t871 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t872 = g->ecx;
    t873 = g->edx;
    eax = t871;
    ecx = t872;
    edx = t873;
    COW_AT(1029e4bd)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcdf4u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t874 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcdf4u));
    t875 = g->edx;
    eax = t874;
    edx = t875;
    COW_AT(1029e4cc)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e4d9: ;
    COW_AT(1029e4d9)
    wr32(sp0 - 0x2cu, 0x22fu);
    ebx = in_ebx;
    goto L_1029e419;
L_1029e4e3: ;
    COW_AT(1029e4e3)
    wr32(sp0 - 0x2cu, 0x230u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t898 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t899 = g->ecx;
    t900 = g->edx;
    eax = t898;
    ecx = t899;
    edx = t900;
    COW_AT(1029e4f7)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcde0u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t901 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcde0u));
    t902 = g->edx;
    eax = t901;
    edx = t902;
    COW_AT(1029e506)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e513: ;
    COW_AT(1029e513)
    wr32(sp0 - 0x2cu, 0x230u);
    ebx = in_ebx;
    goto L_1029f83d;
L_1029e51d: ;
    COW_AT(1029e51d)
    wr32(sp0 - 0x2cu, 0x243u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1104 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1105 = g->ecx;
    t1106 = g->edx;
    eax = t1104;
    ecx = t1105;
    edx = t1106;
    COW_AT(1029e531)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd1cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1107 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd1cu));
    t1108 = g->edx;
    eax = t1107;
    edx = t1108;
    COW_AT(1029e540)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e54d: ;
    COW_AT(1029e54d)
    wr32(sp0 - 0x2cu, 0x244u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t1109 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1110 = g->ecx;
    eax = t1109;
    ecx = t1110;
    COW_AT(1029e561)
    t1111 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x38u, t1111);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bccf4u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = t1111;
    g->esp = sp0 - 0x34u;
    t1112 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bccf4u), t1111);
    t1113 = g->edx;
    eax = t1112;
    edx = t1113;
    COW_AT(1029e570)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e57d: ;
    COW_AT(1029e57d)
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr32(sp0 + 4u, 1u);
    g->ebx = in_ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t480 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t481 = g->ecx;
    t482 = g->edx;
    eax = t480;
    ecx = t481;
    edx = t482;
    COW_AT(1029e593)
    if ((uint8_t)eax == 0u) goto L_1029ead3;
L_1029e59e: ;
    COW_AT(1029e59e)
    wr32(sp0 - 0x2cu, COW_IMG(0x10390108u));
    t483 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t483);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t484 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t483, edx, 1, 7, t483, COW_IMG(0x10390108u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t485 = g->ecx;
    t486 = g->edx;
    eax = t484;
    ecx = t485;
    edx = t486;
    COW_AT(1029e5ad)
    if (eax != 0u) goto L_1029e5f8;
    COW_AT(1029e5b4)
    wr32(sp0 - 0x2cu, esi + 0x28u);
    g->eax = eax;
    g->edx = esi + 0x28u;
    g->esp = sp0 - 0x20u;
    t487 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ecx, 3, esi + 0x28u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t488 = g->ecx;
    t489 = g->edx;
    eax = t487;
    ecx = t488;
    edx = t489;
    COW_AT(1029e5bd)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e5c8)
    wr32(sp0 - 0x2cu, 0x256u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t490 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t491 = g->ecx;
    t492 = g->edx;
    eax = t490;
    ecx = t491;
    edx = t492;
    COW_AT(1029e5dc)
    wr32(sp0 - 0x38u, COW_IMG(0x10390108u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcea4u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t493 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcea4u), COW_IMG(0x10390108u));
    t494 = g->edx;
    eax = t493;
    edx = t494;
    COW_AT(1029e5eb)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e5f8: ;
    COW_AT(1029e5f8)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce9cu));
    t495 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t495);
    g->ebx = in_ebx;
    g->eax = t495;
    g->esp = sp0 - 0x14u;
    t496 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t495, COW_IMG(0x103bce9cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t497 = g->ecx;
    t498 = g->edx;
    eax = t496;
    ecx = t497;
    edx = t498;
    COW_AT(1029e607)
    if (eax != 0u) goto L_1029e652;
    COW_AT(1029e60e)
    wr32(sp0 - 0x2cu, esi + 0x34u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t499 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x34u, 1, esi + 0x34u);
    t500 = g->ecx;
    t501 = g->edx;
    eax = t499;
    ecx = t500;
    edx = t501;
    COW_AT(1029e617)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e622)
    wr32(sp0 - 0x2cu, 0x257u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t502 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t503 = g->ecx;
    t504 = g->edx;
    eax = t502;
    ecx = t503;
    edx = t504;
    COW_AT(1029e636)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce9cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t505 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce9cu));
    t506 = g->edx;
    eax = t505;
    edx = t506;
    COW_AT(1029e645)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e652: ;
    COW_AT(1029e652)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce94u));
    t507 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t507);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t508 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t507, 1, 7, t507, COW_IMG(0x103bce94u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t509 = g->ecx;
    t510 = g->edx;
    eax = t508;
    ecx = t509;
    edx = t510;
    COW_AT(1029e661)
    if (eax != 0u) goto L_1029e6ac;
    COW_AT(1029e668)
    wr32(sp0 - 0x2cu, esi + 0x38u);
    g->ebx = in_ebx;
    g->eax = esi + 0x38u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t511 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x38u);
    t512 = g->ecx;
    t513 = g->edx;
    eax = t511;
    ecx = t512;
    edx = t513;
    COW_AT(1029e671)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e67c)
    wr32(sp0 - 0x2cu, 0x258u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t514 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t515 = g->ecx;
    t516 = g->edx;
    eax = t514;
    ecx = t515;
    edx = t516;
    COW_AT(1029e690)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce94u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t517 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce94u));
    t518 = g->edx;
    eax = t517;
    edx = t518;
    COW_AT(1029e69f)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e6ac: ;
    COW_AT(1029e6ac)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce88u));
    t519 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t519);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t520 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t519, edx, 1, 7, t519, COW_IMG(0x103bce88u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t521 = g->ecx;
    t522 = g->edx;
    eax = t520;
    ecx = t521;
    edx = t522;
    COW_AT(1029e6bb)
    if (eax != 0u) goto L_1029e706;
    COW_AT(1029e6c2)
    wr32(sp0 - 0x2cu, esi + 0x3cu);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = esi + 0x3cu;
    g->esp = sp0 - 0x28u;
    t523 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x3cu);
    t524 = g->ecx;
    t525 = g->edx;
    eax = t523;
    ecx = t524;
    edx = t525;
    COW_AT(1029e6cb)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e6d6)
    wr32(sp0 - 0x2cu, 0x259u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t526 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t527 = g->ecx;
    t528 = g->edx;
    eax = t526;
    ecx = t527;
    edx = t528;
    COW_AT(1029e6ea)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce88u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t529 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce88u));
    t530 = g->edx;
    eax = t529;
    edx = t530;
    COW_AT(1029e6f9)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e706: ;
    COW_AT(1029e706)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce7cu));
    t531 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t531);
    g->ebx = in_ebx;
    g->eax = t531;
    g->esp = sp0 - 0x14u;
    t532 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t531, COW_IMG(0x103bce7cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t533 = g->ecx;
    t534 = g->edx;
    eax = t532;
    ecx = t533;
    edx = t534;
    COW_AT(1029e715)
    if (eax != 0u) goto L_1029e760;
    COW_AT(1029e71c)
    wr32(sp0 - 0x2cu, esi + 0x40u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t535 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x40u, 1, esi + 0x40u);
    t536 = g->ecx;
    t537 = g->edx;
    eax = t535;
    ecx = t536;
    edx = t537;
    COW_AT(1029e725)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e730)
    wr32(sp0 - 0x2cu, 0x25au);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t538 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t539 = g->ecx;
    t540 = g->edx;
    eax = t538;
    ecx = t539;
    edx = t540;
    COW_AT(1029e744)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce7cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t541 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce7cu));
    t542 = g->edx;
    eax = t541;
    edx = t542;
    COW_AT(1029e753)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e760: ;
    COW_AT(1029e760)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce6cu));
    t543 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t543);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t544 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t543, 1, 7, t543, COW_IMG(0x103bce6cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t545 = g->ecx;
    t546 = g->edx;
    eax = t544;
    ecx = t545;
    edx = t546;
    COW_AT(1029e76f)
    if (eax != 0u) goto L_1029e7ba;
    COW_AT(1029e776)
    wr32(sp0 - 0x2cu, esi + 0x44u);
    g->ebx = in_ebx;
    g->eax = esi + 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t547 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x44u);
    t548 = g->ecx;
    t549 = g->edx;
    eax = t547;
    ecx = t548;
    edx = t549;
    COW_AT(1029e77f)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e78a)
    wr32(sp0 - 0x2cu, 0x25bu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t550 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t551 = g->ecx;
    t552 = g->edx;
    eax = t550;
    ecx = t551;
    edx = t552;
    COW_AT(1029e79e)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce6cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t553 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce6cu));
    t554 = g->edx;
    eax = t553;
    edx = t554;
    COW_AT(1029e7ad)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e7ba: ;
    COW_AT(1029e7ba)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce60u));
    t555 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t555);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t556 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t555, edx, 1, 7, t555, COW_IMG(0x103bce60u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t557 = g->ecx;
    t558 = g->edx;
    eax = t556;
    ecx = t557;
    edx = t558;
    COW_AT(1029e7c9)
    if (eax != 0u) goto L_1029e814;
    COW_AT(1029e7d0)
    wr32(sp0 - 0x2cu, esi + 0x48u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = esi + 0x48u;
    g->esp = sp0 - 0x28u;
    t559 = cow_thiscall_cdecl(g, COW_IMG(0x102afc30u), ecx, 1, esi + 0x48u);
    t560 = g->ecx;
    t561 = g->edx;
    eax = t559;
    ecx = t560;
    edx = t561;
    COW_AT(1029e7d9)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e7e4)
    wr32(sp0 - 0x2cu, 0x25cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t562 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t563 = g->ecx;
    t564 = g->edx;
    eax = t562;
    ecx = t563;
    edx = t564;
    COW_AT(1029e7f8)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce60u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bce3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t565 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bce3cu), COW_IMG(0x103bce60u));
    t566 = g->edx;
    eax = t565;
    edx = t566;
    COW_AT(1029e807)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e814: ;
    COW_AT(1029e814)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce2cu));
    t567 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t567);
    g->ebx = in_ebx;
    g->eax = t567;
    g->esp = sp0 - 0x14u;
    t568 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t567, COW_IMG(0x103bce2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t569 = g->ecx;
    t570 = g->edx;
    eax = t568;
    ecx = t569;
    edx = t570;
    COW_AT(1029e823)
    if (eax != 0u) goto L_1029e872;
    COW_AT(1029e82a)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t571 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x18u, edx, 1, 1, sp0 - 0x18u);
    t572 = g->ecx;
    t573 = g->edx;
    eax = t571;
    ecx = t572;
    edx = t573;
    COW_AT(1029e834)
    if ((uint8_t)eax == 0u) goto L_1029eaed;
    COW_AT(1029e83f)
    wr32(sp0 - 0x2cu, 0u);
    t574 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t574);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t574;
    g->esp = sp0 - 0x10u;
    t575 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t574, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t576 = g->ecx;
    t577 = g->edx;
    eax = t575;
    ecx = t576;
    edx = t577;
    COW_AT(1029e84c)
    if ((uint8_t)eax == 0u) goto L_1029eb1d;
    COW_AT(1029e857)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t578 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t578);
    wr32(sp0 - 0x34u, ebp);
    g->eax = sp0 - 0x14u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t579 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t578, sp0 - 0x14u);
    t580 = g->edx;
    eax = t579;
    edx = t580;
    COW_AT(1029e867)
    wr32(esi + 0x60u, eax);
L_1029eabe: ;
    COW_AT(1029eabe)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t672 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x18u, edx, 1, 1, sp0 - 0x18u);
    t673 = g->ecx;
    t674 = g->edx;
    eax = t672;
    ecx = t673;
    edx = t674;
    COW_AT(1029eac8)
    if ((uint8_t)eax != 0u) goto L_1029e59e;
L_1029ead3: ;
    COW_AT(1029ead3)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    t685 = cow_cdecl(g, COW_IMG(0x102778e0u), 2, esi, 1u);
    t686 = g->ecx;
    eax = t685;
    ecx = t686;
    COW_AT(1029eada)
    t687 = rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t687);
    wr32(sp0 - 0x38u, esi);
    g->edx = t687;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10277910u), 4, esi, t687, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t688 = g->edx;
    edx = t688;
    COW_AT(1029eae5)
    goto L_1029f153;
L_1029e872: ;
    COW_AT(1029e872)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcce4u));
    t586 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t586);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t587 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t586, 1, 7, t586, COW_IMG(0x103bcce4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t588 = g->ecx;
    t589 = g->edx;
    eax = t587;
    ecx = t588;
    edx = t589;
    COW_AT(1029e881)
    if (eax != 0u) goto L_1029e8d0;
    COW_AT(1029e888)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = in_ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t590 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t591 = g->ecx;
    t592 = g->edx;
    eax = t590;
    ecx = t591;
    edx = t592;
    COW_AT(1029e892)
    if ((uint8_t)eax == 0u) goto L_1029eb27;
    COW_AT(1029e89d)
    wr32(sp0 - 0x2cu, 0u);
    t593 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t593);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = t593;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t594 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t593, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t595 = g->ecx;
    t596 = g->edx;
    eax = t594;
    ecx = t595;
    edx = t596;
    COW_AT(1029e8aa)
    if ((uint8_t)eax == 0u) goto L_1029eb57;
    COW_AT(1029e8b5)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t597 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t597);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t597;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x28u;
    t598 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t597, sp0 - 0x14u);
    t599 = g->edx;
    eax = t598;
    edx = t599;
    COW_AT(1029e8c5)
    wr32(esi + 0x64u, eax);
    goto L_1029eabe;
L_1029e8d0: ;
    COW_AT(1029e8d0)
    wr32(sp0 - 0x2cu, COW_IMG(0x1039075cu));
    t605 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t605);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t606 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t605, edx, 1, 7, t605, COW_IMG(0x1039075cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t607 = g->ecx;
    t608 = g->edx;
    eax = t606;
    ecx = t607;
    edx = t608;
    COW_AT(1029e8df)
    if (eax != 0u) goto L_1029e92a;
    COW_AT(1029e8e6)
    wr32(sp0 - 0x2cu, esi + 0x50u);
    g->eax = eax;
    g->edx = esi + 0x50u;
    g->esp = sp0 - 0x28u;
    t609 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x50u);
    t610 = g->ecx;
    t611 = g->edx;
    eax = t609;
    ecx = t610;
    edx = t611;
    COW_AT(1029e8ef)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e8fa)
    wr32(sp0 - 0x2cu, 0x261u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t612 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t613 = g->ecx;
    t614 = g->edx;
    eax = t612;
    ecx = t613;
    edx = t614;
    COW_AT(1029e90e)
    wr32(sp0 - 0x38u, COW_IMG(0x1039075cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t615 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x1039075cu));
    t616 = g->edx;
    eax = t615;
    edx = t616;
    COW_AT(1029e91d)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e92a: ;
    COW_AT(1029e92a)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd78u));
    t617 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t617);
    g->ebx = in_ebx;
    g->eax = t617;
    g->esp = sp0 - 0x14u;
    t618 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t617, COW_IMG(0x103bcd78u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t619 = g->ecx;
    t620 = g->edx;
    eax = t618;
    ecx = t619;
    edx = t620;
    COW_AT(1029e939)
    if (eax != 0u) goto L_1029e984;
    COW_AT(1029e940)
    wr32(sp0 - 0x2cu, esi + 0x4cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t621 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), esi + 0x4cu, 1, esi + 0x4cu);
    t622 = g->ecx;
    t623 = g->edx;
    eax = t621;
    ecx = t622;
    edx = t623;
    COW_AT(1029e949)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e954)
    wr32(sp0 - 0x2cu, 0x262u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t624 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t625 = g->ecx;
    t626 = g->edx;
    eax = t624;
    ecx = t625;
    edx = t626;
    COW_AT(1029e968)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd78u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t627 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd78u));
    t628 = g->edx;
    eax = t627;
    edx = t628;
    COW_AT(1029e977)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e984: ;
    COW_AT(1029e984)
    wr32(sp0 - 0x2cu, COW_IMG(0x1038fc14u));
    t629 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t629);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t630 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t629, 1, 7, t629, COW_IMG(0x1038fc14u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t631 = g->ecx;
    t632 = g->edx;
    eax = t630;
    ecx = t631;
    edx = t632;
    COW_AT(1029e993)
    if (eax != 0u) goto L_1029e9de;
    COW_AT(1029e99a)
    wr32(sp0 - 0x2cu, esi + 0x58u);
    g->eax = esi + 0x58u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t633 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x58u);
    t634 = g->ecx;
    t635 = g->edx;
    eax = t633;
    ecx = t634;
    edx = t635;
    COW_AT(1029e9a3)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029e9ae)
    wr32(sp0 - 0x2cu, 0x263u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t636 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t637 = g->ecx;
    t638 = g->edx;
    eax = t636;
    ecx = t637;
    edx = t638;
    COW_AT(1029e9c2)
    wr32(sp0 - 0x38u, COW_IMG(0x1038fc14u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t639 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x1038fc14u));
    t640 = g->edx;
    eax = t639;
    edx = t640;
    COW_AT(1029e9d1)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029e9de: ;
    COW_AT(1029e9de)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd3cu));
    t641 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t641);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t642 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t641, edx, 1, 7, t641, COW_IMG(0x103bcd3cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t643 = g->ecx;
    t644 = g->edx;
    eax = t642;
    ecx = t643;
    edx = t644;
    COW_AT(1029e9ed)
    if (eax != 0u) goto L_1029ea38;
    COW_AT(1029e9f4)
    wr32(sp0 - 0x2cu, esi + 0x54u);
    g->eax = eax;
    g->edx = esi + 0x54u;
    g->esp = sp0 - 0x28u;
    t645 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x54u);
    t646 = g->ecx;
    t647 = g->edx;
    eax = t645;
    ecx = t646;
    edx = t647;
    COW_AT(1029e9fd)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029ea08)
    wr32(sp0 - 0x2cu, 0x264u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t648 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t649 = g->ecx;
    t650 = g->edx;
    eax = t648;
    ecx = t649;
    edx = t650;
    COW_AT(1029ea1c)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd3cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t651 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd3cu));
    t652 = g->edx;
    eax = t651;
    edx = t652;
    COW_AT(1029ea2b)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ea38: ;
    COW_AT(1029ea38)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd68u));
    t653 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t653);
    g->ebx = in_ebx;
    g->eax = t653;
    g->esp = sp0 - 0x14u;
    t654 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t653, COW_IMG(0x103bcd68u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t655 = g->ecx;
    t656 = g->edx;
    eax = t654;
    ecx = t655;
    edx = t656;
    COW_AT(1029ea47)
    if (eax != 0u) goto L_1029ea8f;
    COW_AT(1029ea4e)
    wr32(sp0 - 0x2cu, sp0 - 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t657 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), sp0 - 4u, 1, sp0 - 4u);
    t658 = g->ecx;
    t659 = g->edx;
    eax = t657;
    ecx = t658;
    edx = t659;
    COW_AT(1029ea58)
    if ((uint8_t)eax != 0u) goto L_1029eabe;
    COW_AT(1029ea5f)
    wr32(sp0 - 0x2cu, 0x265u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t660 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t661 = g->ecx;
    t662 = g->edx;
    eax = t660;
    ecx = t661;
    edx = t662;
    COW_AT(1029ea73)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd68u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t663 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd68u));
    t664 = g->edx;
    eax = t663;
    edx = t664;
    COW_AT(1029ea82)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ea8f: ;
    COW_AT(1029ea8f)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bccd8u));
    t665 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t665);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t666 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t665, 1, 7, t665, COW_IMG(0x103bccd8u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t667 = g->ecx;
    t668 = g->edx;
    eax = t666;
    ecx = t667;
    edx = t668;
    COW_AT(1029ea9e)
    if (eax != 0u) goto L_1029eb91;
    COW_AT(1029eaa9)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t669 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, sp0 + 4u);
    t670 = g->ecx;
    t671 = g->edx;
    eax = t669;
    ecx = t670;
    edx = t671;
    COW_AT(1029eab3)
    if ((uint8_t)eax == 0u) goto L_1029eb61;
    goto L_1029eabe;
L_1029eaed: ;
    COW_AT(1029eaed)
    wr32(sp0 - 0x2cu, 0x25eu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t581 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t582 = g->ecx;
    t583 = g->edx;
    eax = t581;
    ecx = t582;
    edx = t583;
    COW_AT(1029eb01)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce2cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t584 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce2cu));
    t585 = g->edx;
    eax = t584;
    edx = t585;
    COW_AT(1029eb10)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029eb1d: ;
    COW_AT(1029eb1d)
    wr32(sp0 - 0x2cu, 0x25eu);
    goto L_1029e3c8;
L_1029eb27: ;
    COW_AT(1029eb27)
    wr32(sp0 - 0x2cu, 0x25fu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t600 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t601 = g->ecx;
    t602 = g->edx;
    eax = t600;
    ecx = t601;
    edx = t602;
    COW_AT(1029eb3b)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcce4u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t603 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcce4u));
    t604 = g->edx;
    eax = t603;
    edx = t604;
    COW_AT(1029eb4a)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029eb57: ;
    COW_AT(1029eb57)
    wr32(sp0 - 0x2cu, 0x25fu);
    ebx = in_ebx;
    goto L_1029e419;
L_1029eb61: ;
    COW_AT(1029eb61)
    wr32(sp0 - 0x2cu, 0x266u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t675 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t676 = g->ecx;
    t677 = g->edx;
    eax = t675;
    ecx = t676;
    edx = t677;
    COW_AT(1029eb75)
    wr32(sp0 - 0x38u, COW_IMG(0x103bccd8u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t678 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bccd8u));
    t679 = g->edx;
    eax = t678;
    edx = t679;
    COW_AT(1029eb84)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029eb91: ;
    COW_AT(1029eb91)
    wr32(sp0 - 0x2cu, 0x267u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t680 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t681 = g->edx;
    eax = t680;
    edx = t681;
    COW_AT(1029eba5)
    t682 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x38u, t682);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bccb0u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t683 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bccb0u), t682);
    t684 = g->edx;
    eax = t683;
    edx = t684;
    COW_AT(1029ebb4)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ebc1: ;
    COW_AT(1029ebc1)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t265 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t266 = g->edx;
    eax = t265;
    edx = t266;
    COW_AT(1029ebcb)
    if ((uint8_t)eax == 0u) goto L_1029f153;
    ebx = in_ebx;
L_1029ebd6: ;
    COW_AT(1029ebd6)
    wr32(sp0 - 0x2cu, COW_IMG(0x10390108u));
    t267 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t267);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t268 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t267, edx, 1, 7, t267, COW_IMG(0x10390108u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t269 = g->ecx;
    t270 = g->edx;
    eax = t268;
    ecx = t269;
    edx = t270;
    COW_AT(1029ebe5)
    if (eax != 0u) goto L_1029ec30;
    COW_AT(1029ebec)
    wr32(sp0 - 0x2cu, esi + 0x28u);
    g->eax = eax;
    g->edx = esi + 0x28u;
    g->esp = sp0 - 0x20u;
    t271 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ecx, 3, esi + 0x28u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t272 = g->ecx;
    t273 = g->edx;
    eax = t271;
    ecx = t272;
    edx = t273;
    COW_AT(1029ebf5)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ec00)
    wr32(sp0 - 0x2cu, 0x27au);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t274 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t275 = g->ecx;
    t276 = g->edx;
    eax = t274;
    ecx = t275;
    edx = t276;
    COW_AT(1029ec14)
    wr32(sp0 - 0x38u, COW_IMG(0x10390108u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcea4u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t277 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcea4u), COW_IMG(0x10390108u));
    t278 = g->edx;
    eax = t277;
    edx = t278;
    COW_AT(1029ec23)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ec30: ;
    COW_AT(1029ec30)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce9cu));
    t279 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t279);
    g->ebx = ebx;
    g->eax = t279;
    g->esp = sp0 - 0x14u;
    t280 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t279, COW_IMG(0x103bce9cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t281 = g->ecx;
    t282 = g->edx;
    eax = t280;
    ecx = t281;
    edx = t282;
    COW_AT(1029ec3f)
    if (eax != 0u) goto L_1029ec8a;
    COW_AT(1029ec46)
    wr32(sp0 - 0x2cu, esi + 0x34u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t283 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x34u, 1, esi + 0x34u);
    t284 = g->ecx;
    t285 = g->edx;
    eax = t283;
    ecx = t284;
    edx = t285;
    COW_AT(1029ec4f)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ec5a)
    wr32(sp0 - 0x2cu, 0x27bu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t286 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t287 = g->ecx;
    t288 = g->edx;
    eax = t286;
    ecx = t287;
    edx = t288;
    COW_AT(1029ec6e)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce9cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t289 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce9cu));
    t290 = g->edx;
    eax = t289;
    edx = t290;
    COW_AT(1029ec7d)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ec8a: ;
    COW_AT(1029ec8a)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce94u));
    t291 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t291);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t292 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t291, 1, 7, t291, COW_IMG(0x103bce94u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t293 = g->ecx;
    t294 = g->edx;
    eax = t292;
    ecx = t293;
    edx = t294;
    COW_AT(1029ec99)
    if (eax != 0u) goto L_1029ece4;
    COW_AT(1029eca0)
    wr32(sp0 - 0x2cu, esi + 0x38u);
    g->ebx = ebx;
    g->eax = esi + 0x38u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t295 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x38u);
    t296 = g->ecx;
    t297 = g->edx;
    eax = t295;
    ecx = t296;
    edx = t297;
    COW_AT(1029eca9)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ecb4)
    wr32(sp0 - 0x2cu, 0x27cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t298 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t299 = g->ecx;
    t300 = g->edx;
    eax = t298;
    ecx = t299;
    edx = t300;
    COW_AT(1029ecc8)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce94u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t301 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce94u));
    t302 = g->edx;
    eax = t301;
    edx = t302;
    COW_AT(1029ecd7)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ece4: ;
    COW_AT(1029ece4)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce88u));
    t303 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t303);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t304 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t303, edx, 1, 7, t303, COW_IMG(0x103bce88u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t305 = g->ecx;
    t306 = g->edx;
    eax = t304;
    ecx = t305;
    edx = t306;
    COW_AT(1029ecf3)
    if (eax != 0u) goto L_1029ed3e;
    COW_AT(1029ecfa)
    wr32(sp0 - 0x2cu, esi + 0x3cu);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = esi + 0x3cu;
    g->esp = sp0 - 0x28u;
    t307 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x3cu);
    t308 = g->ecx;
    t309 = g->edx;
    eax = t307;
    ecx = t308;
    edx = t309;
    COW_AT(1029ed03)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ed0e)
    wr32(sp0 - 0x2cu, 0x27du);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t310 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t311 = g->ecx;
    t312 = g->edx;
    eax = t310;
    ecx = t311;
    edx = t312;
    COW_AT(1029ed22)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce88u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t313 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce88u));
    t314 = g->edx;
    eax = t313;
    edx = t314;
    COW_AT(1029ed31)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ed3e: ;
    COW_AT(1029ed3e)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce7cu));
    t315 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t315);
    g->ebx = ebx;
    g->eax = t315;
    g->esp = sp0 - 0x14u;
    t316 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t315, COW_IMG(0x103bce7cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t317 = g->ecx;
    t318 = g->edx;
    eax = t316;
    ecx = t317;
    edx = t318;
    COW_AT(1029ed4d)
    if (eax != 0u) goto L_1029ed98;
    COW_AT(1029ed54)
    wr32(sp0 - 0x2cu, esi + 0x40u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t319 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x40u, 1, esi + 0x40u);
    t320 = g->ecx;
    t321 = g->edx;
    eax = t319;
    ecx = t320;
    edx = t321;
    COW_AT(1029ed5d)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ed68)
    wr32(sp0 - 0x2cu, 0x27eu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t322 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t323 = g->ecx;
    t324 = g->edx;
    eax = t322;
    ecx = t323;
    edx = t324;
    COW_AT(1029ed7c)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce7cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t325 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce7cu));
    t326 = g->edx;
    eax = t325;
    edx = t326;
    COW_AT(1029ed8b)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ed98: ;
    COW_AT(1029ed98)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce6cu));
    t327 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t327);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t328 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t327, 1, 7, t327, COW_IMG(0x103bce6cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t329 = g->ecx;
    t330 = g->edx;
    eax = t328;
    ecx = t329;
    edx = t330;
    COW_AT(1029eda7)
    if (eax != 0u) goto L_1029edf2;
    COW_AT(1029edae)
    wr32(sp0 - 0x2cu, esi + 0x44u);
    g->ebx = ebx;
    g->eax = esi + 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t331 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x44u);
    t332 = g->ecx;
    t333 = g->edx;
    eax = t331;
    ecx = t332;
    edx = t333;
    COW_AT(1029edb7)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029edc2)
    wr32(sp0 - 0x2cu, 0x27fu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t334 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t335 = g->ecx;
    t336 = g->edx;
    eax = t334;
    ecx = t335;
    edx = t336;
    COW_AT(1029edd6)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce6cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t337 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce6cu));
    t338 = g->edx;
    eax = t337;
    edx = t338;
    COW_AT(1029ede5)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029edf2: ;
    COW_AT(1029edf2)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce60u));
    t339 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t339);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t340 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t339, edx, 1, 7, t339, COW_IMG(0x103bce60u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t341 = g->ecx;
    t342 = g->edx;
    eax = t340;
    ecx = t341;
    edx = t342;
    COW_AT(1029ee01)
    if (eax != 0u) goto L_1029ee4c;
    COW_AT(1029ee08)
    wr32(sp0 - 0x2cu, esi + 0x48u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = esi + 0x48u;
    g->esp = sp0 - 0x28u;
    t343 = cow_thiscall_cdecl(g, COW_IMG(0x102afc30u), ecx, 1, esi + 0x48u);
    t344 = g->ecx;
    t345 = g->edx;
    eax = t343;
    ecx = t344;
    edx = t345;
    COW_AT(1029ee11)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ee1c)
    wr32(sp0 - 0x2cu, 0x280u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t346 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t347 = g->ecx;
    t348 = g->edx;
    eax = t346;
    ecx = t347;
    edx = t348;
    COW_AT(1029ee30)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce60u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bce3cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t349 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bce3cu), COW_IMG(0x103bce60u));
    t350 = g->edx;
    eax = t349;
    edx = t350;
    COW_AT(1029ee3f)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ee4c: ;
    COW_AT(1029ee4c)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce2cu));
    t351 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t351);
    g->ebx = ebx;
    g->eax = t351;
    g->esp = sp0 - 0x14u;
    t352 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t351, COW_IMG(0x103bce2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t353 = g->ecx;
    t354 = g->edx;
    eax = t352;
    ecx = t353;
    edx = t354;
    COW_AT(1029ee5b)
    if (eax != 0u) goto L_1029eeaa;
    COW_AT(1029ee62)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t355 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x18u, edx, 1, 1, sp0 - 0x18u);
    t356 = g->ecx;
    t357 = g->edx;
    eax = t355;
    ecx = t356;
    edx = t357;
    COW_AT(1029ee6c)
    if ((uint8_t)eax == 0u) goto L_1029f17f;
    COW_AT(1029ee77)
    wr32(sp0 - 0x2cu, 0u);
    t358 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t358);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t358;
    g->esp = sp0 - 0x10u;
    t359 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t358, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t360 = g->ecx;
    t361 = g->edx;
    eax = t359;
    ecx = t360;
    edx = t361;
    COW_AT(1029ee84)
    if ((uint8_t)eax == 0u) goto L_1029f1af;
    COW_AT(1029ee8f)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t362 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t362);
    wr32(sp0 - 0x34u, ebp);
    g->eax = sp0 - 0x14u;
    g->ecx = t362;
    g->esp = sp0 - 0x28u;
    t363 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t362, sp0 - 0x14u);
    t364 = g->ecx;
    eax = t363;
    ecx = t364;
    COW_AT(1029ee9f)
    wr32(esi + 0x50u, eax);
L_1029f13e: ;
    COW_AT(1029f13e)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t468 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t469 = g->edx;
    eax = t468;
    edx = t469;
    COW_AT(1029f148)
    if ((uint8_t)eax != 0u) goto L_1029ebd6;
    goto L_1029f153;
L_1029eeaa: ;
    COW_AT(1029eeaa)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce04u));
    t370 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t370);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t371 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t370, 1, 7, t370, COW_IMG(0x103bce04u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t372 = g->ecx;
    t373 = g->edx;
    eax = t371;
    ecx = t372;
    edx = t373;
    COW_AT(1029eeb9)
    if (eax != 0u) goto L_1029ef08;
    COW_AT(1029eec0)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ebx = ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t374 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t375 = g->ecx;
    t376 = g->edx;
    eax = t374;
    ecx = t375;
    edx = t376;
    COW_AT(1029eeca)
    if ((uint8_t)eax == 0u) goto L_1029f1b9;
    COW_AT(1029eed5)
    wr32(sp0 - 0x2cu, 0u);
    t377 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t377);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = t377;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t378 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t377, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t379 = g->ecx;
    t380 = g->edx;
    eax = t378;
    ecx = t379;
    edx = t380;
    COW_AT(1029eee2)
    if ((uint8_t)eax == 0u) goto L_1029f1e9;
    COW_AT(1029eeed)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t381 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t381);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t381;
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    t382 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t381, sp0 - 0x14u);
    t383 = g->ecx;
    eax = t382;
    ecx = t383;
    COW_AT(1029eefd)
    wr32(esi + 0x54u, eax);
    goto L_1029f13e;
L_1029ef08: ;
    COW_AT(1029ef08)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcca8u));
    t389 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t389);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t390 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t389, edx, 1, 7, t389, COW_IMG(0x103bcca8u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t391 = g->ecx;
    t392 = g->edx;
    eax = t390;
    ecx = t391;
    edx = t392;
    COW_AT(1029ef17)
    if (eax != 0u) goto L_1029ef62;
    COW_AT(1029ef1e)
    wr32(sp0 - 0x2cu, esi + 0x58u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = esi + 0x58u;
    g->esp = sp0 - 0x28u;
    t393 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x58u);
    t394 = g->ecx;
    t395 = g->edx;
    eax = t393;
    ecx = t394;
    edx = t395;
    COW_AT(1029ef27)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029ef32)
    wr32(sp0 - 0x2cu, 0x285u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t396 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t397 = g->ecx;
    t398 = g->edx;
    eax = t396;
    ecx = t397;
    edx = t398;
    COW_AT(1029ef46)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcca8u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t399 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcca8u));
    t400 = g->edx;
    eax = t399;
    edx = t400;
    COW_AT(1029ef55)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029ef62: ;
    COW_AT(1029ef62)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcc98u));
    t401 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t401);
    g->ebx = ebx;
    g->eax = t401;
    g->esp = sp0 - 0x14u;
    t402 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t401, COW_IMG(0x103bcc98u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t403 = g->ecx;
    t404 = g->edx;
    eax = t402;
    ecx = t403;
    edx = t404;
    COW_AT(1029ef71)
    if (eax != 0u) goto L_1029efa0;
    COW_AT(1029ef78)
    ebx = esi + 0x5cu;
    edi = 0u;
L_1029ef7d: ;
    COW_AT(1029ef7d)
    wr32(sp0 - 0x2cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t405 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ecx, 3, ebx, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t406 = g->ecx;
    t407 = g->edx;
    eax = t405;
    ecx = t406;
    edx = t407;
    COW_AT(1029ef83)
    if ((uint8_t)eax == 0u) goto L_1029f1f3;
    COW_AT(1029ef8e)
    if ((int32_t)(edi + 1u) < 16)
    {
        ebx = ebx + 0x10u;
        edi = edi + 1u;
        goto L_1029ef7d;
    }
    ebx = ebx + 0x10u;
    COW_AT(1029ef97)
    ebp = rd32(sp0 + 4u);
    goto L_1029f13e;
L_1029efa0: ;
    COW_AT(1029efa0)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcda8u));
    t413 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t413);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t414 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t413, edx, 1, 7, t413, COW_IMG(0x103bcda8u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t415 = g->ecx;
    t416 = g->edx;
    eax = t414;
    ecx = t415;
    edx = t416;
    COW_AT(1029efaf)
    if (eax != 0u) goto L_1029effd;
    COW_AT(1029efb6)
    wr32(sp0 - 0x2cu, esi + 0x15cu);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = esi + 0x15cu;
    g->esp = sp0 - 0x28u;
    t417 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x15cu);
    t418 = g->ecx;
    t419 = g->edx;
    eax = t417;
    ecx = t418;
    edx = t419;
    COW_AT(1029efc2)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029efcd)
    wr32(sp0 - 0x2cu, 0x28bu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t420 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t421 = g->ecx;
    t422 = g->edx;
    eax = t420;
    ecx = t421;
    edx = t422;
    COW_AT(1029efe1)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcda8u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t423 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcda8u));
    t424 = g->edx;
    eax = t423;
    edx = t424;
    COW_AT(1029eff0)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029effd: ;
    COW_AT(1029effd)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcdb4u));
    t425 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t425);
    g->ebx = ebx;
    g->eax = t425;
    g->esp = sp0 - 0x14u;
    t426 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t425, COW_IMG(0x103bcdb4u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t427 = g->ecx;
    t428 = g->edx;
    eax = t426;
    ecx = t427;
    edx = t428;
    COW_AT(1029f00c)
    if (eax != 0u) goto L_1029f05a;
    COW_AT(1029f013)
    wr32(sp0 - 0x2cu, esi + 0x160u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t429 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x160u, 1, esi + 0x160u);
    t430 = g->ecx;
    t431 = g->edx;
    eax = t429;
    ecx = t430;
    edx = t431;
    COW_AT(1029f01f)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029f02a)
    wr32(sp0 - 0x2cu, 0x28cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t432 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t433 = g->ecx;
    t434 = g->edx;
    eax = t432;
    ecx = t433;
    edx = t434;
    COW_AT(1029f03e)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcdb4u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t435 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcdb4u));
    t436 = g->edx;
    eax = t435;
    edx = t436;
    COW_AT(1029f04d)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f05a: ;
    COW_AT(1029f05a)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd78u));
    t437 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t437);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t438 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t437, 1, 7, t437, COW_IMG(0x103bcd78u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t439 = g->ecx;
    t440 = g->edx;
    eax = t438;
    ecx = t439;
    edx = t440;
    COW_AT(1029f069)
    if (eax != 0u) goto L_1029f0b4;
    COW_AT(1029f070)
    wr32(sp0 - 0x2cu, esi + 0x4cu);
    g->eax = esi + 0x4cu;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t441 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x4cu);
    t442 = g->ecx;
    t443 = g->edx;
    eax = t441;
    ecx = t442;
    edx = t443;
    COW_AT(1029f079)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029f084)
    wr32(sp0 - 0x2cu, 0x28du);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t444 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t445 = g->ecx;
    t446 = g->edx;
    eax = t444;
    ecx = t445;
    edx = t446;
    COW_AT(1029f098)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd78u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t447 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd78u));
    t448 = g->edx;
    eax = t447;
    edx = t448;
    COW_AT(1029f0a7)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f0b4: ;
    COW_AT(1029f0b4)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd70u));
    t449 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t449);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t450 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t449, edx, 1, 7, t449, COW_IMG(0x103bcd70u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t451 = g->ecx;
    t452 = g->edx;
    eax = t450;
    ecx = t451;
    edx = t452;
    COW_AT(1029f0c3)
    if (eax != 0u) goto L_1029f10d;
    COW_AT(1029f0ca)
    wr32(sp0 - 0x2cu, esi + 0x168u);
    g->eax = eax;
    g->edx = esi + 0x168u;
    g->esp = sp0 - 0x28u;
    t453 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x168u);
    t454 = g->ecx;
    t455 = g->edx;
    eax = t453;
    ecx = t454;
    edx = t455;
    COW_AT(1029f0d6)
    if ((uint8_t)eax != 0u) goto L_1029f13e;
    COW_AT(1029f0dd)
    wr32(sp0 - 0x2cu, 0x28eu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t456 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t457 = g->ecx;
    t458 = g->edx;
    eax = t456;
    ecx = t457;
    edx = t458;
    COW_AT(1029f0f1)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd70u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t459 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd70u));
    t460 = g->edx;
    eax = t459;
    edx = t460;
    COW_AT(1029f100)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f10d: ;
    COW_AT(1029f10d)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd2cu));
    t461 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t461);
    g->ebx = ebx;
    g->eax = t461;
    g->esp = sp0 - 0x14u;
    t462 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t461, COW_IMG(0x103bcd2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t463 = g->ecx;
    t464 = g->edx;
    eax = t462;
    ecx = t463;
    edx = t464;
    COW_AT(1029f11c)
    if (eax != 0u) goto L_1029f253;
    COW_AT(1029f127)
    wr32(sp0 - 0x2cu, esi + 0x164u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t465 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), esi + 0x164u, 1, esi + 0x164u);
    t466 = g->ecx;
    t467 = g->edx;
    eax = t465;
    ecx = t466;
    edx = t467;
    COW_AT(1029f133)
    if ((uint8_t)eax == 0u) goto L_1029f223;
    goto L_1029f13e;
L_1029f17f: ;
    COW_AT(1029f17f)
    wr32(sp0 - 0x2cu, 0x282u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t365 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t366 = g->ecx;
    t367 = g->edx;
    eax = t365;
    ecx = t366;
    edx = t367;
    COW_AT(1029f193)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce2cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t368 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce2cu));
    t369 = g->edx;
    eax = t368;
    edx = t369;
    COW_AT(1029f1a2)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f1af: ;
    COW_AT(1029f1af)
    wr32(sp0 - 0x2cu, 0x282u);
    goto L_1029e419;
L_1029f1b9: ;
    COW_AT(1029f1b9)
    wr32(sp0 - 0x2cu, 0x283u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t384 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t385 = g->ecx;
    t386 = g->edx;
    eax = t384;
    ecx = t385;
    edx = t386;
    COW_AT(1029f1cd)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce04u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t387 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bce04u));
    t388 = g->edx;
    eax = t387;
    edx = t388;
    COW_AT(1029f1dc)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f1e9: ;
    COW_AT(1029f1e9)
    wr32(sp0 - 0x2cu, 0x283u);
    goto L_1029f83d;
L_1029f1f3: ;
    COW_AT(1029f1f3)
    wr32(sp0 - 0x2cu, 0x288u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t408 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t409 = g->ecx;
    t410 = g->edx;
    eax = t408;
    ecx = t409;
    edx = t410;
    COW_AT(1029f207)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcc88u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcea4u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t411 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcea4u), COW_IMG(0x103bcc88u));
    t412 = g->edx;
    eax = t411;
    edx = t412;
    COW_AT(1029f216)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f223: ;
    COW_AT(1029f223)
    wr32(sp0 - 0x2cu, 0x28fu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t470 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t471 = g->ecx;
    t472 = g->edx;
    eax = t470;
    ecx = t471;
    edx = t472;
    COW_AT(1029f237)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd2cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t473 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd2cu));
    t474 = g->edx;
    eax = t473;
    edx = t474;
    COW_AT(1029f246)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f253: ;
    COW_AT(1029f253)
    wr32(sp0 - 0x2cu, 0x290u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t475 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t476 = g->ecx;
    eax = t475;
    ecx = t476;
    COW_AT(1029f267)
    t477 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x38u, t477);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcc5cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = t477;
    g->esp = sp0 - 0x34u;
    t478 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcc5cu), t477);
    t479 = g->edx;
    eax = t478;
    edx = t479;
    COW_AT(1029f276)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f283: ;
    COW_AT(1029f283)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t208 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t209 = g->edx;
    eax = t208;
    edx = t209;
    COW_AT(1029f28d)
    if ((uint8_t)eax == 0u) goto L_1029f153;
L_1029f298: ;
    COW_AT(1029f298)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcc58u));
    t210 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t210);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t211 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t210, edx, 1, 7, t210, COW_IMG(0x103bcc58u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t212 = g->ecx;
    t213 = g->edx;
    eax = t211;
    ecx = t212;
    edx = t213;
    COW_AT(1029f2a7)
    if (eax != 0u) goto L_1029f2f2;
    COW_AT(1029f2ae)
    wr32(sp0 - 0x2cu, esi + 0x4cu);
    g->eax = eax;
    g->edx = esi + 0x4cu;
    g->esp = sp0 - 0x20u;
    t214 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ecx, 3, esi + 0x4cu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t215 = g->ecx;
    t216 = g->edx;
    eax = t214;
    ecx = t215;
    edx = t216;
    COW_AT(1029f2b7)
    if ((uint8_t)eax != 0u) goto L_1029f3c8;
    COW_AT(1029f2c2)
    wr32(sp0 - 0x2cu, 0x29bu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t217 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t218 = g->ecx;
    t219 = g->edx;
    eax = t217;
    ecx = t218;
    edx = t219;
    COW_AT(1029f2d6)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcc58u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcea4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t220 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcea4u), COW_IMG(0x103bcc58u));
    t221 = g->edx;
    eax = t220;
    edx = t221;
    COW_AT(1029f2e5)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f2f2: ;
    COW_AT(1029f2f2)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcc4cu));
    t222 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t222);
    g->eax = t222;
    g->esp = sp0 - 0x14u;
    t223 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t222, COW_IMG(0x103bcc4cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t224 = g->ecx;
    t225 = g->edx;
    eax = t223;
    ecx = t224;
    edx = t225;
    COW_AT(1029f301)
    if (eax != 0u) goto L_1029f34c;
    COW_AT(1029f308)
    wr32(sp0 - 0x2cu, esi + 0x58u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t226 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x58u, 1, esi + 0x58u);
    t227 = g->ecx;
    t228 = g->edx;
    eax = t226;
    ecx = t227;
    edx = t228;
    COW_AT(1029f311)
    if ((uint8_t)eax != 0u) goto L_1029f3c8;
    COW_AT(1029f31c)
    wr32(sp0 - 0x2cu, 0x29cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t229 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t230 = g->ecx;
    t231 = g->edx;
    eax = t229;
    ecx = t230;
    edx = t231;
    COW_AT(1029f330)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcc4cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t232 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcc4cu));
    t233 = g->edx;
    eax = t232;
    edx = t233;
    COW_AT(1029f33f)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f34c: ;
    COW_AT(1029f34c)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcc44u));
    t234 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t234);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t235 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t234, 1, 7, t234, COW_IMG(0x103bcc44u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t236 = g->ecx;
    t237 = g->edx;
    eax = t235;
    ecx = t236;
    edx = t237;
    COW_AT(1029f35b)
    if (eax != 0u) goto L_1029f3a2;
    COW_AT(1029f362)
    wr32(sp0 - 0x2cu, esi + 0x5cu);
    g->eax = esi + 0x5cu;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t238 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x5cu);
    t239 = g->ecx;
    t240 = g->edx;
    eax = t238;
    ecx = t239;
    edx = t240;
    COW_AT(1029f36b)
    if ((uint8_t)eax != 0u) goto L_1029f3c8;
    COW_AT(1029f372)
    wr32(sp0 - 0x2cu, 0x29du);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t241 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t242 = g->ecx;
    t243 = g->edx;
    eax = t241;
    ecx = t242;
    edx = t243;
    COW_AT(1029f386)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcc44u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t244 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcc44u));
    t245 = g->edx;
    eax = t244;
    edx = t245;
    COW_AT(1029f395)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f3a2: ;
    COW_AT(1029f3a2)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd78u));
    t246 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t246);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t247 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t246, edx, 1, 7, t246, COW_IMG(0x103bcd78u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t248 = g->ecx;
    t249 = g->edx;
    eax = t247;
    ecx = t248;
    edx = t249;
    COW_AT(1029f3b1)
    if (eax != 0u) goto L_1029f412;
    COW_AT(1029f3b8)
    wr32(sp0 - 0x2cu, esi + 0x60u);
    g->eax = eax;
    g->edx = esi + 0x60u;
    g->esp = sp0 - 0x28u;
    t250 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, esi + 0x60u);
    t251 = g->ecx;
    t252 = g->edx;
    eax = t250;
    ecx = t251;
    edx = t252;
    COW_AT(1029f3c1)
    if ((uint8_t)eax == 0u) goto L_1029f3e2;
L_1029f3c8: ;
    COW_AT(1029f3c8)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t253 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t254 = g->edx;
    eax = t253;
    edx = t254;
    COW_AT(1029f3d2)
    if ((uint8_t)eax != 0u) goto L_1029f298;
    COW_AT(1029f3dd)
    goto L_1029f153;
L_1029f3e2: ;
    COW_AT(1029f3e2)
    wr32(sp0 - 0x2cu, 0x29eu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t255 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t256 = g->ecx;
    t257 = g->edx;
    eax = t255;
    ecx = t256;
    edx = t257;
    COW_AT(1029f3f6)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd78u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t258 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd78u));
    t259 = g->edx;
    eax = t258;
    edx = t259;
    COW_AT(1029f405)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f412: ;
    COW_AT(1029f412)
    wr32(sp0 - 0x2cu, 0x29fu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t260 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t261 = g->edx;
    eax = t260;
    edx = t261;
    COW_AT(1029f426)
    t262 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x38u, t262);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcc1cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t263 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcc1cu), t262);
    t264 = g->edx;
    eax = t263;
    edx = t264;
    COW_AT(1029f435)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f442: ;
    COW_AT(1029f442)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t63 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t64 = g->ecx;
    t65 = g->edx;
    eax = t63;
    ecx = t64;
    edx = t65;
    COW_AT(1029f44c)
    if ((uint8_t)eax == 0u) goto L_1029f153;
L_1029f457: ;
    COW_AT(1029f457)
    wr32(sp0 - 0x2cu, COW_IMG(0x10390108u));
    t66 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t66);
    g->eax = t66;
    g->esp = sp0 - 0x14u;
    t67 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t66, COW_IMG(0x10390108u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(1029f466)
    if (eax != 0u) goto L_1029f4b1;
    COW_AT(1029f46d)
    wr32(sp0 - 0x2cu, esi + 0x28u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t70 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), esi + 0x28u, 3, esi + 0x28u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t71 = g->ecx;
    t72 = g->edx;
    eax = t70;
    ecx = t71;
    edx = t72;
    COW_AT(1029f476)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f481)
    wr32(sp0 - 0x2cu, 0x2adu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t73 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t74 = g->ecx;
    t75 = g->edx;
    eax = t73;
    ecx = t74;
    edx = t75;
    COW_AT(1029f495)
    wr32(sp0 - 0x38u, COW_IMG(0x10390108u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcea4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t76 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcea4u), COW_IMG(0x10390108u));
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(1029f4a4)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f4b1: ;
    COW_AT(1029f4b1)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce9cu));
    t78 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t78);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t79 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t78, 1, 7, t78, COW_IMG(0x103bce9cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t80 = g->ecx;
    t81 = g->edx;
    eax = t79;
    ecx = t80;
    edx = t81;
    COW_AT(1029f4c0)
    if (eax != 0u) goto L_1029f50b;
    COW_AT(1029f4c7)
    wr32(sp0 - 0x2cu, esi + 0x34u);
    g->eax = esi + 0x34u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t82 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x34u);
    t83 = g->ecx;
    t84 = g->edx;
    eax = t82;
    ecx = t83;
    edx = t84;
    COW_AT(1029f4d0)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f4db)
    wr32(sp0 - 0x2cu, 0x2aeu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t85 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t86 = g->ecx;
    t87 = g->edx;
    eax = t85;
    ecx = t86;
    edx = t87;
    COW_AT(1029f4ef)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce9cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t88 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce9cu));
    t89 = g->edx;
    eax = t88;
    edx = t89;
    COW_AT(1029f4fe)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f50b: ;
    COW_AT(1029f50b)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce94u));
    t90 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t90);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t91 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t90, edx, 1, 7, t90, COW_IMG(0x103bce94u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t92 = g->ecx;
    t93 = g->edx;
    eax = t91;
    ecx = t92;
    edx = t93;
    COW_AT(1029f51a)
    if (eax != 0u) goto L_1029f565;
    COW_AT(1029f521)
    wr32(sp0 - 0x2cu, esi + 0x38u);
    g->eax = eax;
    g->edx = esi + 0x38u;
    g->esp = sp0 - 0x28u;
    t94 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x38u);
    t95 = g->ecx;
    t96 = g->edx;
    eax = t94;
    ecx = t95;
    edx = t96;
    COW_AT(1029f52a)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f535)
    wr32(sp0 - 0x2cu, 0x2afu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t97 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t98 = g->ecx;
    t99 = g->edx;
    eax = t97;
    ecx = t98;
    edx = t99;
    COW_AT(1029f549)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce94u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t100 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce94u));
    t101 = g->edx;
    eax = t100;
    edx = t101;
    COW_AT(1029f558)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f565: ;
    COW_AT(1029f565)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce88u));
    t102 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t102);
    g->eax = t102;
    g->esp = sp0 - 0x14u;
    t103 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t102, COW_IMG(0x103bce88u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t104 = g->ecx;
    t105 = g->edx;
    eax = t103;
    ecx = t104;
    edx = t105;
    COW_AT(1029f574)
    if (eax != 0u) goto L_1029f5bf;
    COW_AT(1029f57b)
    wr32(sp0 - 0x2cu, esi + 0x3cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t106 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), esi + 0x3cu, 1, esi + 0x3cu);
    t107 = g->ecx;
    t108 = g->edx;
    eax = t106;
    ecx = t107;
    edx = t108;
    COW_AT(1029f584)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f58f)
    wr32(sp0 - 0x2cu, 0x2b0u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t109 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t110 = g->ecx;
    t111 = g->edx;
    eax = t109;
    ecx = t110;
    edx = t111;
    COW_AT(1029f5a3)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce88u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t112 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce88u));
    t113 = g->edx;
    eax = t112;
    edx = t113;
    COW_AT(1029f5b2)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f5bf: ;
    COW_AT(1029f5bf)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce7cu));
    t114 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t114);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t115 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t114, 1, 7, t114, COW_IMG(0x103bce7cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t116 = g->ecx;
    t117 = g->edx;
    eax = t115;
    ecx = t116;
    edx = t117;
    COW_AT(1029f5ce)
    if (eax != 0u) goto L_1029f619;
    COW_AT(1029f5d5)
    wr32(sp0 - 0x2cu, esi + 0x40u);
    g->eax = esi + 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t118 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x40u);
    t119 = g->ecx;
    t120 = g->edx;
    eax = t118;
    ecx = t119;
    edx = t120;
    COW_AT(1029f5de)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f5e9)
    wr32(sp0 - 0x2cu, 0x2b1u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t121 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t122 = g->ecx;
    t123 = g->edx;
    eax = t121;
    ecx = t122;
    edx = t123;
    COW_AT(1029f5fd)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce7cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t124 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce7cu));
    t125 = g->edx;
    eax = t124;
    edx = t125;
    COW_AT(1029f60c)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f619: ;
    COW_AT(1029f619)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce6cu));
    t126 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t126);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t127 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t126, edx, 1, 7, t126, COW_IMG(0x103bce6cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t128 = g->ecx;
    t129 = g->edx;
    eax = t127;
    ecx = t128;
    edx = t129;
    COW_AT(1029f628)
    if (eax != 0u) goto L_1029f673;
    COW_AT(1029f62f)
    wr32(sp0 - 0x2cu, esi + 0x44u);
    g->eax = eax;
    g->edx = esi + 0x44u;
    g->esp = sp0 - 0x28u;
    t130 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, esi + 0x44u);
    t131 = g->ecx;
    t132 = g->edx;
    eax = t130;
    ecx = t131;
    edx = t132;
    COW_AT(1029f638)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f643)
    wr32(sp0 - 0x2cu, 0x2b2u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t133 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t134 = g->ecx;
    t135 = g->edx;
    eax = t133;
    ecx = t134;
    edx = t135;
    COW_AT(1029f657)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce6cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t136 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bce6cu));
    t137 = g->edx;
    eax = t136;
    edx = t137;
    COW_AT(1029f666)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f673: ;
    COW_AT(1029f673)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bce60u));
    t138 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t138);
    g->eax = t138;
    g->esp = sp0 - 0x14u;
    t139 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t138, COW_IMG(0x103bce60u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t140 = g->ecx;
    t141 = g->edx;
    eax = t139;
    ecx = t140;
    edx = t141;
    COW_AT(1029f682)
    if (eax != 0u) goto L_1029f6cd;
    COW_AT(1029f689)
    wr32(sp0 - 0x2cu, esi + 0x48u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t142 = cow_thiscall_cdecl(g, COW_IMG(0x102afc30u), esi + 0x48u, 1, esi + 0x48u);
    t143 = g->ecx;
    t144 = g->edx;
    eax = t142;
    ecx = t143;
    edx = t144;
    COW_AT(1029f692)
    if ((uint8_t)eax != 0u) goto L_1029f7b4;
    COW_AT(1029f69d)
    wr32(sp0 - 0x2cu, 0x2b3u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t145 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t146 = g->ecx;
    t147 = g->edx;
    eax = t145;
    ecx = t146;
    edx = t147;
    COW_AT(1029f6b1)
    wr32(sp0 - 0x38u, COW_IMG(0x103bce60u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bce3cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t148 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bce3cu), COW_IMG(0x103bce60u));
    t149 = g->edx;
    eax = t148;
    edx = t149;
    COW_AT(1029f6c0)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f6cd: ;
    COW_AT(1029f6cd)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcc0cu));
    t150 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t150);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t151 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t150, 1, 7, t150, COW_IMG(0x103bcc0cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t152 = g->ecx;
    t153 = g->edx;
    eax = t151;
    ecx = t152;
    edx = t153;
    COW_AT(1029f6dc)
    if (eax != 0u) goto L_1029f72b;
    COW_AT(1029f6e3)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t154 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t155 = g->ecx;
    t156 = g->edx;
    eax = t154;
    ecx = t155;
    edx = t156;
    COW_AT(1029f6ed)
    if ((uint8_t)eax == 0u) goto L_1029f7ce;
    COW_AT(1029f6f8)
    wr32(sp0 - 0x2cu, 0u);
    t157 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t157);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = t157;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t158 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t157, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t159 = g->ecx;
    t160 = g->edx;
    eax = t158;
    ecx = t159;
    edx = t160;
    COW_AT(1029f705)
    if ((uint8_t)eax == 0u) goto L_1029f7fe;
    COW_AT(1029f710)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t161 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t161);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t161;
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    t162 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t161, sp0 - 0x14u);
    t163 = g->ecx;
    eax = t162;
    ecx = t163;
    COW_AT(1029f720)
    wr32(esi + 0x4cu, eax);
L_1029f7b4: ;
    COW_AT(1029f7b4)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t195 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t196 = g->ecx;
    t197 = g->edx;
    eax = t195;
    ecx = t196;
    edx = t197;
    COW_AT(1029f7be)
    if ((uint8_t)eax != 0u) goto L_1029f457;
    COW_AT(1029f7c9)
    goto L_1029f153;
L_1029f72b: ;
    COW_AT(1029f72b)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcbfcu));
    t169 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t169);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t170 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t169, edx, 1, 7, t169, COW_IMG(0x103bcbfcu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t171 = g->ecx;
    t172 = g->edx;
    eax = t170;
    ecx = t171;
    edx = t172;
    COW_AT(1029f73a)
    if (eax != 0u) goto L_1029f786;
    COW_AT(1029f741)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t173 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t174 = g->ecx;
    t175 = g->edx;
    eax = t173;
    ecx = t174;
    edx = t175;
    COW_AT(1029f74b)
    if ((uint8_t)eax == 0u) goto L_1029f808;
    COW_AT(1029f756)
    wr32(sp0 - 0x2cu, 0u);
    t176 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t176);
    wr32(sp0 - 0x34u, ebp);
    g->eax = t176;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t177 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, ebp, t176, 0u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t178 = g->ecx;
    t179 = g->edx;
    eax = t177;
    ecx = t178;
    edx = t179;
    COW_AT(1029f763)
    if ((uint8_t)eax == 0u) goto L_1029f838;
    COW_AT(1029f76e)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t180 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t180);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = sp0 - 0x14u;
    g->esp = sp0 - 0x28u;
    t181 = cow_cdecl(g, COW_IMG(0x10279d30u), 3, ebp, t180, sp0 - 0x14u);
    t182 = g->ecx;
    eax = t181;
    ecx = t182;
    COW_AT(1029f77e)
    wr32(esi + 0x50u, eax);
    goto L_1029f7b4;
L_1029f786: ;
    COW_AT(1029f786)
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcd78u));
    t188 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t188);
    g->eax = t188;
    g->esp = sp0 - 0x14u;
    t189 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t188, COW_IMG(0x103bcd78u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t190 = g->ecx;
    t191 = g->edx;
    eax = t189;
    ecx = t190;
    edx = t191;
    COW_AT(1029f795)
    if (eax != 0u) goto L_1029f8a6;
    COW_AT(1029f7a0)
    wr32(sp0 - 0x2cu, esi + 0x54u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t192 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), esi + 0x54u, 1, esi + 0x54u);
    t193 = g->ecx;
    t194 = g->edx;
    eax = t192;
    ecx = t193;
    edx = t194;
    COW_AT(1029f7a9)
    if ((uint8_t)eax == 0u) goto L_1029f876;
    goto L_1029f7b4;
L_1029f7ce: ;
    COW_AT(1029f7ce)
    wr32(sp0 - 0x2cu, 0x2b5u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t164 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t165 = g->ecx;
    t166 = g->edx;
    eax = t164;
    ecx = t165;
    edx = t166;
    COW_AT(1029f7e2)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcc0cu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t167 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcc0cu));
    t168 = g->edx;
    eax = t167;
    edx = t168;
    COW_AT(1029f7f1)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f7fe: ;
    COW_AT(1029f7fe)
    wr32(sp0 - 0x2cu, 0x2b5u);
    ebx = in_ebx;
    goto L_1029e419;
L_1029f808: ;
    COW_AT(1029f808)
    wr32(sp0 - 0x2cu, 0x2b6u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t183 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t184 = g->ecx;
    t185 = g->edx;
    eax = t183;
    ecx = t184;
    edx = t185;
    COW_AT(1029f81c)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcbfcu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb40u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t186 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcbfcu));
    t187 = g->edx;
    eax = t186;
    edx = t187;
    COW_AT(1029f82b)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f838: ;
    COW_AT(1029f838)
    wr32(sp0 - 0x2cu, 0x2b6u);
    ebx = in_ebx;
    goto L_1029f83d;
L_1029f876: ;
    COW_AT(1029f876)
    wr32(sp0 - 0x2cu, 0x2b8u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t198 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t199 = g->ecx;
    t200 = g->edx;
    eax = t198;
    ecx = t199;
    edx = t200;
    COW_AT(1029f88a)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcd78u));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bca3cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t201 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcd78u));
    t202 = g->edx;
    eax = t201;
    edx = t202;
    COW_AT(1029f899)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f8a6: ;
    COW_AT(1029f8a6)
    wr32(sp0 - 0x2cu, 0x2b9u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t203 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t204 = g->ecx;
    eax = t203;
    ecx = t204;
    COW_AT(1029f8ba)
    t205 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x38u, t205);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcbc0u));
    g->eax = eax;
    g->edx = t205;
    g->esp = sp0 - 0x34u;
    t206 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbc0u), t205);
    t207 = g->edx;
    eax = t206;
    edx = t207;
    COW_AT(1029f8c9)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f8d6: ;
    COW_AT(1029f8d6)
    wr32(sp0 - 0x2cu, COW_IMG(0x1034f918u));
    t1125 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t1125);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1126 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t1125, 1, 7, t1125, COW_IMG(0x1034f918u), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t1127 = g->ecx;
    t1128 = g->edx;
    eax = t1126;
    ecx = t1127;
    edx = t1128;
    COW_AT(1029f8e5)
    if (eax != 0u) goto L_1029fa14;
    COW_AT(1029f8f0)
    wr32(sp0 - 0x2cu, sp0 - 8u);
    g->ebx = in_ebx;
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x28u;
    t1129 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 8u);
    t1130 = g->ecx;
    t1131 = g->edx;
    eax = t1129;
    ecx = t1130;
    edx = t1131;
    COW_AT(1029f8fa)
    if ((uint8_t)eax != 0u) goto L_1029f931;
    COW_AT(1029f901)
    wr32(sp0 - 0x2cu, 0x1edu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1132 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1133 = g->ecx;
    t1134 = g->edx;
    eax = t1132;
    ecx = t1133;
    edx = t1134;
    COW_AT(1029f915)
    wr32(sp0 - 0x38u, COW_IMG(0x103bcbacu));
    wr32(sp0 - 0x3cu, COW_IMG(0x103bc94cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1135 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bcbacu));
    t1136 = g->edx;
    eax = t1135;
    edx = t1136;
    COW_AT(1029f924)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f931: ;
    COW_AT(1029f931)
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    t1137 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t1137);
    wr32(sp0 - 0x34u, ebp);
    g->eax = eax;
    g->ecx = sp0 - 0x14u;
    g->edx = t1137;
    g->esp = sp0 - 0x28u;
    t1138 = cow_cdecl(g, COW_IMG(0x10279d50u), 3, ebp, t1137, sp0 - 0x14u);
    t1139 = g->ecx;
    t1140 = g->edx;
    eax = t1138;
    ecx = t1139;
    edx = t1140;
    COW_AT(1029f941)
    if (eax != 0u)
    {
        esi = eax;
        goto L_1029f97a;
    }
    COW_AT(1029f94a)
    wr32(sp0 - 0x2cu, 0x1f0u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1141 = g->ecx;
    t1142 = g->edx;
    ecx = t1141;
    edx = t1142;
    COW_AT(1029f95e)
    t1143 = rd32(sp0 - 8u);
    wr32(sp0 - 0x38u, t1143);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb94u));
    g->ebx = in_ebx;
    g->eax = t1143;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1144 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb94u), t1143);
    t1145 = g->edx;
    eax = t1144;
    edx = t1145;
    COW_AT(1029f96d)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029f97a: ;
    COW_AT(1029f97a)
    if (rd32(esi) - 0xf0001u > 4u)
    {
        eax = rd32(esi) - 0xf0001u;
        goto L_1029f9f9;
    }
    eax = rd32(esi) - 0xf0001u;
    COW_AT(1029f986)
    t1146 = rd32(COW_IMG(0x1029fa58u) + eax * 4u);
    switch (t1146 - RD)
    {
    case 0x1029f98du: goto L_1029f98d;
    case 0x1029f999u: goto L_1029f999;
    case 0x1029f9a5u: goto L_1029f9a5;
    case 0x1029f9b1u: goto L_1029f9b1;
    case 0x1029f9bdu: goto L_1029f9bd;
    default: rt_fatal(g, COW_IMG(0x1029f986u), "switch");
    }
    return 0;
L_1029f98d: ;
    COW_AT(1029f98d)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1151 = cow_stdcall(g, COW_IMG(0x102908c0u), 0);
    eax = t1151;
    COW_AT(1029f992)
    ecx = 0x60u;
L_1029f9c7: ;
    COW_AT(1029f9c7)
    edi = eax;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1152 = rd32(ebp + 0x34u);
    wr32(sp0 - 0x2cu, t1152);
    wr32(sp0 - 0x30u, 1u);
    t1153 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t1153);
    wr32(sp0 - 0x38u, ebp);
    g->eax = eax;
    g->edx = t1153;
    g->esp = sp0 - 0x28u;
    t1154 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t1152, 4, ebp, t1153, 1u, t1152);
    t1155 = g->ecx;
    t1156 = g->edx;
    ecx = t1155;
    edx = t1156;
    ebx = eax;
    eax = t1154;
    COW_AT(1029f9de)
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1157 = cow_thiscall_cdecl(g, COW_IMG(0x102794e0u), ecx, 5, ebp, ebx, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 1u);
    t1158 = g->ecx;
    t1159 = g->edx;
    eax = t1157;
    ecx = t1158;
    edx = t1159;
    COW_AT(1029f9e5)
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t1160 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 3, ebp, ebx, rd32(sp0 - 0x40u));
    t1161 = g->edx;
    eax = t1160;
    edx = t1161;
    COW_AT(1029f9ec)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1029f999: ;
    COW_AT(1029f999)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1150 = cow_stdcall(g, COW_IMG(0x102992e0u), 0);
    eax = t1150;
    COW_AT(1029f99e)
    ecx = 0x1bu;
    goto L_1029f9c7;
L_1029f9a5: ;
    COW_AT(1029f9a5)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1149 = cow_stdcall(g, COW_IMG(0x10298ec0u), 0);
    eax = t1149;
    COW_AT(1029f9aa)
    ecx = 0x5bu;
    goto L_1029f9c7;
L_1029f9b1: ;
    COW_AT(1029f9b1)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1148 = cow_stdcall(g, COW_IMG(0x10299870u), 0);
    eax = t1148;
    COW_AT(1029f9b6)
    ecx = 0x19u;
    goto L_1029f9c7;
L_1029f9bd: ;
    COW_AT(1029f9bd)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t1147 = cow_stdcall(g, COW_IMG(0x10299700u), 0);
    eax = t1147;
    COW_AT(1029f9c2)
    ecx = 0x16u;
    goto L_1029f9c7;
L_1029f9f9: ;
    COW_AT(1029f9f9)
    wr32(sp0 - 0x2cu, 0x20cu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1162 = g->ecx;
    t1163 = g->edx;
    ecx = t1162;
    edx = t1163;
    COW_AT(1029fa0d)
    t1164 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x38u, t1164);
    eax = t1164;
    loc_38 = t1164;
L_1029fa2d: ;
    COW_AT(1029fa2d)
    wr32(sp0 - 0x3cu, COW_IMG(0x103bcb68u));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t1168 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb68u), loc_38);
    t1169 = g->edx;
    eax = t1168;
    edx = t1169;
    COW_AT(1029fa37)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1029fa14: ;
    COW_AT(1029fa14)
    wr32(sp0 - 0x2cu, 0x215u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1165 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t1166 = g->edx;
    eax = t1165;
    edx = t1166;
    COW_AT(1029fa28)
    t1167 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x38u, t1167);
    ecx = t1167;
    loc_38 = t1167;
    goto L_1029fa2d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029d730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029d741u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1029d748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1029d75cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029d76bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029d778u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1029d78du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d794u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029d7a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029d7bcu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1029d7c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d7d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1029d7dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1029d7eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029d7fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029d80au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1029d819u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d820u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d825u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d827u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d836u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d83du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d842u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d844u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d853u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d85au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d85fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d861u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d870u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d877u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d87cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d87eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d88du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d898u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d89du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d8afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d8b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d8c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029d8d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029d8e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d8e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d8f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d8fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029d911u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029d920u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029d92du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d93cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d943u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d94cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d957u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029d96bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029d97au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029d987u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d996u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d99du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d9a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d9b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029d9c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029d9d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029d9e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d9f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029d9f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029da00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029da0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029da1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029da2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029da3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029da4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029da51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029da5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029da65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029da79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029da88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029da95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029daa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029daabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dab4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dabfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029dad3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029dae2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029daefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dafeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029db2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029db3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029db49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029db74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029db81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029db9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029dba7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dbb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dbbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dbc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dbd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dbdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dbeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dbfau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029dc05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dc30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dc3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029dc63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dc83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dc8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dc9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dca6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dcb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029dcc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dcd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dcd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dce1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dcecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dcf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029dd1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dd4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029dd57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029dd7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dd9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dda7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ddbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ddcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ddd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dde6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ddedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ddf6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029de01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029de15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029de24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029de31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029de40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029de47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029de50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029de5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029de6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029de7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029de8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029de9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dea1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029deadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029deb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029deccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029dedbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029dee8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029def7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029defeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029df07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029df12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029df26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029df35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029df42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029df51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029df58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029df61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029df6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029df80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029df8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029df9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dfabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dfb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dfbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029dfc9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029dfddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029dfecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029dff9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e008u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e00fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e01bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e026u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e03au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e049u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e056u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e065u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e06cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e078u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e083u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e097u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e0a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e0b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e0c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e0c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e0d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e0e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e0f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e103u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e110u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e11fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e126u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e132u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e13du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e151u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e160u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e16du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e17cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e183u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e18fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e19au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e1aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e1bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e1cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e1d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e1e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e1ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e1f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e20bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e21au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e227u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e23du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e249u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e254u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e268u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e277u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e284u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e293u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e29au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e2a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e2b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e2c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e2d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e2e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e2f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e2f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e301u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029e308u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029e31cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e32bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e338u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e347u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e352u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e35cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029e367u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e371u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e37cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e388u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e393u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e3a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e3b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e3c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e3c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e3d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e3e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e3f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e407u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e414u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e419u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e428u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e435u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e449u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e458u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e465u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e46fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e483u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e492u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e49fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e4a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e4bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e4ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e4d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e4e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e4f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e506u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e513u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e51du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029e531u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e540u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e54du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e561u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e570u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e57du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e593u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e59eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e5adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e5b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e5bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e5c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e5dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e5ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e5f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e607u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e60eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e617u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e622u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e636u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e645u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e652u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e661u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e668u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e671u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e67cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e690u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e69fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e6acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e6bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e6c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e6cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e6d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e6eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e6f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e706u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e715u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e71cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e725u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e730u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e744u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e753u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e760u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e76fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e776u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e77fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e78au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e79eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e7adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e7bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e7c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e7d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e7d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e7e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e7f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e807u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e814u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e823u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e82au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e834u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e83fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e84cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e857u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e867u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029e872u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e881u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e888u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e892u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e89du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029e8aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e8b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e8c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029e8d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e8dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e8e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e8efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e8fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e90eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e91du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e92au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e939u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e940u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e949u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e954u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e968u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e977u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e984u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e993u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e99au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029e9deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029e9fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ea38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029ea5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029ea73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ea8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029ea9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029eaa9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029eab3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029eabeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029eac8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029ead3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 1u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029eadau:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029eae5u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1029eaedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029eb01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029eb10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029eb1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eb27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029eb3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029eb4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029eb57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eb61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029eb75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029eb84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029eb91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eba5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ebb4u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ebc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ebcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029ebd6u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029ebe5u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ebecu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ebf5u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ec00u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec14u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ec30u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec3fu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec46u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec4fu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ec5au:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec6eu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ec8au:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ec99u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029eca0u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eca9u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ecb4u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ecc8u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ecd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ece4u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ecf3u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ecfau:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed03u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ed0eu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed22u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ed3eu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed4du:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed54u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed5du:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ed68u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed7cu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ed8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ed98u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eda7u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029edaeu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029edb7u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029edc2u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029edd6u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ede5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029edf2u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee01u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee08u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee11u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ee1cu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee30u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ee4cu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee5bu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee62u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee6cu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029ee77u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029ee84u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee8fu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ee9fu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029eeaau:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eeb9u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029eec0u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eecau:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029eed5u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029eee2u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029eeedu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029eefdu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029ef08u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef17u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef1eu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef27u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ef32u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef46u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ef62u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef71u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef78u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef7du:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef83u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029ef8eu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029ef97u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029efa0u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029efafu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029efb6u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029efc2u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029efcdu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029efe1u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029eff0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029effdu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f00cu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f013u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f01fu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f02au:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f03eu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f04du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f05au:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f069u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f070u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f079u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f084u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f098u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f0a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f0b4u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f0c3u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f0cau:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f0d6u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f0ddu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f0f1u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f100u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f10du:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f11cu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f127u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f133u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f13eu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f148u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f153u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f164u:
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
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x30u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1029f16bu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1029f172u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1029f17fu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f193u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f1a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f1afu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f1b9u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f1cdu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f1dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f1e9u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f1f3u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f207u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f216u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f223u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f237u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f246u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f253u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f267u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f276u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f283u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f28du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f298u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f2a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f2aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f2b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f2c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f2d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f2e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f2f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f301u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f308u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f311u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f31cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f330u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f33fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f34cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f35bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f362u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f36bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f372u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f386u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f395u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f3a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f3b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f3b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f3c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f3c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f3d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f3ddu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f3e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f3f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f405u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f412u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f426u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f435u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f442u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f44cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f457u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f466u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f46du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f476u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f495u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f4a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f4b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f4c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f4c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f4d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f4dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f4efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f4feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f50bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f51au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f521u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f52au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f535u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f549u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f558u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f565u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f574u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f57bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f584u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f58fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f5a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f5b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f5bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f5ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f5d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f5deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f5e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f5fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f60cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f619u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f628u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f62fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f638u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f643u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f657u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f666u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f673u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f682u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f689u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f692u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f69du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f6b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f6c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f6cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f6dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f6e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f6edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f6f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f705u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f710u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f720u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f72bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f73au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f741u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f74bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f756u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f763u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f76eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f77eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f786u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f795u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f7a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f7a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f7b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f7beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f7c9u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f7ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f7e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f7f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f7feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f808u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1029f81cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f82bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f838u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f83du:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f84cu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f854u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f85bu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f869u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f876u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f88au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f899u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f8a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f8bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f8c9u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f8d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f8e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029f8f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029f8fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029f901u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029f915u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f924u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f931u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029f941u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f94au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f95eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029f96du:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029f97au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f986u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f98du:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f992u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f999u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f99eu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9a5u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9aau:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9b1u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9b6u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9bdu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9c2u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9c7u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9deu:
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
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x30u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1029f9e5u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1029f9ecu:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1029f9f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1029fa0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029fa14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029fa28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029fa2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1029fa37u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029d730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029d730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
