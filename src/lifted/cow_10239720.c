/* f_0x10239720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10239720(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_830;
    uint32_t loc_834;
    uint32_t loc_838;
    uint32_t loc_83c;
    uint32_t loc_840;
    uint32_t loc_844;
    uint32_t loc_848;
    uint32_t loc_84c;
    uint32_t loc_850;
    uint32_t loc_854;
    uint32_t loc_858;
    uint32_t loc_85c;
    uint32_t loc_878;
    uint32_t loc_87c;
    uint32_t loc_890;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 2248u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10239735u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x88cu); in_esi = rd32(sp0 - 0x888u); in_ebx = rd32(sp0 - 0x880u); g->ebx = rd32(sp0 - 0x880u); g->edi = rd32(sp0 - 0x88cu); g->esi = rd32(sp0 - 0x888u); goto E_10239735;
    case 0x10239739u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x88cu); in_esi = rd32(sp0 - 0x888u); in_ebx = rd32(sp0 - 0x880u); g->ebx = rd32(sp0 - 0x880u); g->edi = rd32(sp0 - 0x88cu); g->esi = rd32(sp0 - 0x888u); goto E_10239739;
    case 0x102397f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102397f9;
    case 0x10239827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239827;
    case 0x1023983cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023983c;
    case 0x1023993fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023993f;
    case 0x10239a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239a47;
    case 0x10239a51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239a51;
    case 0x10239a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239a56;
    case 0x10239a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239a7c;
    case 0x10239a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239a81;
    case 0x10239aa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); loc_854 = rd32(sp0 - 0x854u); loc_850 = rd32(sp0 - 0x850u); loc_84c = rd32(sp0 - 0x84cu); loc_848 = rd32(sp0 - 0x848u); loc_844 = rd32(sp0 - 0x844u); loc_840 = rd32(sp0 - 0x840u); loc_83c = rd32(sp0 - 0x83cu); loc_838 = rd32(sp0 - 0x838u); loc_834 = rd32(sp0 - 0x834u); loc_830 = rd32(sp0 - 0x830u); goto E_10239aa0;
    case 0x10239b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b1d;
    case 0x10239b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b2b;
    case 0x10239b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b32;
    case 0x10239b46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b46;
    case 0x10239b53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b53;
    case 0x10239b60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b60;
    case 0x10239b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b6d;
    case 0x10239b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b7a;
    case 0x10239b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239b84;
    case 0x10239ba6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239ba6;
    case 0x10239bacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239bac;
    case 0x10239bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239bba;
    case 0x10239bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239bc1;
    case 0x10239bd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239bd8;
    case 0x10239befu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239bef;
    case 0x10239c06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239c06;
    case 0x10239c1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239c1d;
    case 0x10239c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239c34;
    case 0x10239c45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239c45;
    case 0x10239c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_10239c5d;
    case 0x10239c90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239c90;
    case 0x10239cf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239cf6;
    case 0x10239d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_10239d01;
    case 0x10239d0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d0e;
    case 0x10239d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d18;
    case 0x10239d27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d27;
    case 0x10239d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d31;
    case 0x10239d39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d39;
    case 0x10239d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d48;
    case 0x10239d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239d54;
    case 0x10239dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239dbf;
    case 0x10239dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239dcd;
    case 0x10239dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239dd4;
    case 0x10239ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239ddc;
    case 0x10239de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239de4;
    case 0x10239df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239df1;
    case 0x10239dfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239dfb;
    case 0x10239e05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239e05;
    case 0x10239e0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239e0f;
    case 0x10239e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239e1d;
    case 0x10239e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239e37;
    case 0x10239e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239e3f;
    case 0x10239ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_10239ea0;
    case 0x10239ea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_10239ea7;
    case 0x10239eacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_10239eac;
    case 0x10239ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239ec4;
    case 0x10239ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239ed2;
    case 0x10239edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239edf;
    case 0x10239eecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239eec;
    case 0x10239ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239ef3;
    case 0x10239f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239f01;
    case 0x10239f0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239f0c;
    case 0x10239f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; loc_87c = rd32(sp0 - 0x87cu); goto E_10239f12;
    case 0x10239f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239f18;
    case 0x10239fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239fa5;
    case 0x10239fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10239fb4;
    case 0x10239fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239fc3;
    case 0x10239fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239fd4;
    case 0x10239fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239fd5;
    case 0x10239fd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_10239fd9;
    case 0x10239fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_10239fde;
    case 0x10239fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_10239fe6;
    case 0x10239feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_10239fee;
    case 0x1023a00bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a00b;
    case 0x1023a019u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a019;
    case 0x1023a020u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_1023a020;
    case 0x1023a091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; loc_87c = rd32(sp0 - 0x87cu); goto E_1023a091;
    case 0x1023a097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_87c = rd32(sp0 - 0x87cu); goto E_1023a097;
    case 0x1023a09du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a09d;
    case 0x1023a0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a0a9;
    case 0x1023a0adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a0ad;
    case 0x1023a0cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a0ca;
    case 0x1023a0d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a0d2;
    case 0x1023a0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a0d9;
    case 0x1023a0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a0e0;
    case 0x1023a0e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a0e7;
    case 0x1023a0eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a0ee;
    case 0x1023a0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a0f5;
    case 0x1023a114u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a114;
    case 0x1023a11eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a11e;
    case 0x1023a128u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a128;
    case 0x1023a139u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a139;
    case 0x1023a14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a14d;
    case 0x1023a156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a156;
    case 0x1023a167u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a167;
    case 0x1023a185u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a185;
    case 0x1023a18du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a18d;
    case 0x1023a191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a191;
    case 0x1023a19bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a19b;
    case 0x1023a1a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1a5;
    case 0x1023a1a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1a9;
    case 0x1023a1aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1ae;
    case 0x1023a1b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1b2;
    case 0x1023a1c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1c1;
    case 0x1023a1c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1c9;
    case 0x1023a1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1cd;
    case 0x1023a1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1d7;
    case 0x1023a1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1e1;
    case 0x1023a1e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1e5;
    case 0x1023a1eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1ea;
    case 0x1023a1eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1ee;
    case 0x1023a1fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a1fd;
    case 0x1023a205u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a205;
    case 0x1023a209u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a209;
    case 0x1023a213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a213;
    case 0x1023a21du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a21d;
    case 0x1023a221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a221;
    case 0x1023a226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a226;
    case 0x1023a22eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a22e;
    case 0x1023a245u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a245;
    case 0x1023a250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a250;
    case 0x1023a25au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a25a;
    case 0x1023a25cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a25c;
    case 0x1023a264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a264;
    case 0x1023a27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a27b;
    case 0x1023a27fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a27f;
    case 0x1023a283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a283;
    case 0x1023a297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a297;
    case 0x1023a2a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a2a4;
    case 0x1023a2a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a2a8;
    case 0x1023a2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a2bc;
    case 0x1023a2c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a2c8;
    case 0x1023a2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a2ca;
    case 0x1023a2e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a2e1;
    case 0x1023a2fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a2fb;
    case 0x1023a302u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a302;
    case 0x1023a30fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a30f;
    case 0x1023a316u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a316;
    case 0x1023a325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a325;
    case 0x1023a32du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a32d;
    case 0x1023a331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a331;
    case 0x1023a33bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a33b;
    case 0x1023a345u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a345;
    case 0x1023a349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a349;
    case 0x1023a34eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a34e;
    case 0x1023a358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a358;
    case 0x1023a362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a362;
    case 0x1023a36au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a36a;
    case 0x1023a36eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a36e;
    case 0x1023a378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a378;
    case 0x1023a382u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a382;
    case 0x1023a386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a386;
    case 0x1023a38bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a38b;
    case 0x1023a38fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a38f;
    case 0x1023a394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a394;
    case 0x1023a3abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a3ab;
    case 0x1023a3c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a3c4;
    case 0x1023a3d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a3d5;
    case 0x1023a3ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a3ec;
    case 0x1023a3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a3f5;
    case 0x1023a40bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a40b;
    case 0x1023a427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a427;
    case 0x1023a439u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a439;
    case 0x1023a44bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a44b;
    case 0x1023a455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a455;
    case 0x1023a466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a466;
    case 0x1023a470u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a470;
    case 0x1023a48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a48b;
    case 0x1023a49du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a49d;
    case 0x1023a49fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a49f;
    case 0x1023a4b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a4b1;
    case 0x1023a4b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a4b3;
    case 0x1023a4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a4c5;
    case 0x1023a4d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a4d5;
    case 0x1023a4d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a4d7;
    case 0x1023a4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a4e9;
    case 0x1023a4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a4eb;
    case 0x1023a4fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a4fd;
    case 0x1023a513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a513;
    case 0x1023a51du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a51d;
    case 0x1023a52fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a52f;
    case 0x1023a539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a539;
    case 0x1023a54au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a54a;
    case 0x1023a554u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a554;
    case 0x1023a559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a559;
    case 0x1023a570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a570;
    case 0x1023a579u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a579;
    case 0x1023a58fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a58f;
    case 0x1023a5abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a5ab;
    case 0x1023a5bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a5bd;
    case 0x1023a5cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a5cf;
    case 0x1023a5d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a5d9;
    case 0x1023a5ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a5eb;
    case 0x1023a5f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a5f5;
    case 0x1023a610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a610;
    case 0x1023a622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a622;
    case 0x1023a624u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a624;
    case 0x1023a636u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a636;
    case 0x1023a638u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a638;
    case 0x1023a64au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_878 = rd32(sp0 - 0x878u); goto E_1023a64a;
    case 0x1023a65au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a65a;
    case 0x1023a65cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a65c;
    case 0x1023a66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a66e;
    case 0x1023a670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a670;
    case 0x1023a682u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a682;
    case 0x1023a697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a697;
    case 0x1023a6a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a6a1;
    case 0x1023a6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a6b3;
    case 0x1023a6bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a6bd;
    case 0x1023a6cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a6cf;
    case 0x1023a6d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a6d9;
    case 0x1023a6dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023a6db;
    case 0x1023a6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a6e2;
    case 0x1023a6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a6f2;
    case 0x1023a6fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a6fb;
    case 0x1023a70au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a70a;
    case 0x1023a70fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a70f;
    case 0x1023a718u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a718;
    case 0x1023a74fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a74f;
    case 0x1023a764u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a764;
    case 0x1023a777u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a777;
    case 0x1023a77cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a77c;
    case 0x1023a791u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a791;
    case 0x1023a7a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a7a2;
    case 0x1023a7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a7c2;
    case 0x1023a7cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a7cb;
    case 0x1023a7cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a7cf;
    case 0x1023a7dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a7dc;
    case 0x1023a7e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a7e4;
    case 0x1023a7e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023a7e9;
    case 0x1023a823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a823;
    case 0x1023a828u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a828;
    case 0x1023a84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a84e;
    case 0x1023a858u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a858;
    case 0x1023a861u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a861;
    case 0x1023a88eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a88e;
    case 0x1023a89fu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a89f;
    case 0x1023a8a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a8a9;
    case 0x1023a8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a8c3;
    case 0x1023a8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a8e1;
    case 0x1023a8e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; loc_890 = rd32(sp0 - 0x890u); goto E_1023a8e3;
    case 0x1023a8e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a8e5;
    case 0x1023a90au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a90a;
    case 0x1023a92eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a92e;
    case 0x1023a937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a937;
    case 0x1023a94du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a94d;
    case 0x1023a95cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a95c;
    case 0x1023a96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a96e;
    case 0x1023a970u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a970;
    case 0x1023a982u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a982;
    case 0x1023a984u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a984;
    case 0x1023a996u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a996;
    case 0x1023a99bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a99b;
    case 0x1023a99du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023a99d;
    case 0x1023a9b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a9b5;
    case 0x1023a9d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a9d7;
    case 0x1023a9d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a9d9;
    case 0x1023a9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a9e4;
    case 0x1023a9eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a9ea;
    case 0x1023a9f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023a9f3;
    case 0x1023aa63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); goto E_1023aa63;
    case 0x1023aa7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023aa7b;
    case 0x1023aa85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023aa85;
    case 0x1023aaacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023aaac;
    case 0x1023aac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023aac9;
    case 0x1023aacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023aacf;
    case 0x1023aadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023aadf;
    case 0x1023aaf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023aaf2;
    case 0x1023ab07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); loc_87c = rd32(sp0 - 0x87cu); loc_878 = rd32(sp0 - 0x878u); goto E_1023ab07;
    case 0x1023ab49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023ab49;
    case 0x1023ab4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023ab4d;
    case 0x1023ab5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023ab5b;
    case 0x1023ab77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_890 = rd32(sp0 - 0x890u); goto E_1023ab77;
    case 0x1023abb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023abb9;
    case 0x1023abbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023abbf;
    default: break;
    }
#endif

    COW_AT(10239720)
    wr32(sp0 - 0x880u, in_ebx);
    wr32(sp0 - 0x884u, in_ebp);
    wr32(sp0 - 0x888u, in_esi);
    wr32(sp0 - 0x88cu, in_edi);
    if (rd32(COW_IMG(0x104566e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(10239735)
        wr16(eax + 0x1eu, 0u);
    }
    COW_AT(10239739)
    wr8(sp0 - 0x500u, 0x20u);
    wr8(sp0 - 0x4ffu, 0u);
    edi = sp0 - 0x4feu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr32(sp0 - 0x400u, 0x20u);
    wr32(sp0 - 0x3fcu, 0u);
    wr8(sp0 - 0x800u, 0x20u);
    edi = sp0 - 0x3f8u;
    eax = 0u;
    ecx = 0xfeu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 0x7ffu, 0u);
    wr8(sp0 - 0x600u, 0x20u);
    edi = sp0 - 0x7feu;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(sp0 - 0x5ffu, 0u);
    edi = sp0 - 0x5feu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(sp0 - 0x700u, 0x20u);
    wr8(sp0 - 0x6ffu, 0u);
    wr32(COW_IMG(0x10668fe8u), 0u);
    edi = sp0 - 0x6feu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x10668fecu), 0u);
    wr32(COW_IMG(0x10668fe4u), 0u);
    wr32(sp0 - 0x878u, 0u);
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    g->eax = eax;
    g->edx = 0x20u;
    g->esp = sp0 - 0x88cu;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x868u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    ebp = in_ebp;
L_102397f9: ;
    COW_AT(102397f9)
    wr32(sp0 - 0x890u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t3 = cow_call_regs(g, COW_IMG(0x10239480u), eax, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 0u);
    t4 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x103502e8u));
    g->ebx = 0u;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t6 = g->edx;
    if (rd32(COW_IMG(0x10456aa4u)) != 0u)
    {
        eax = t5;
        edx = t6;
    COW_AT(10239a47)
        if (rd32(COW_IMG(0x1065cb04u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(10239a51)
            g->ebx = 0u;
            g->edi = 1u;
            g->ebp = ebp;
            g->esp = sp0 - 0x88cu;
            cow_fastcall(g, COW_IMG(0x1018b620u), ecx, edx, 0);
        }
    COW_AT(10239a56)
        if ((int32_t)(rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
            edx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
            edx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
    COW_AT(10239a7c)
            edx = (edx - 1u | 0xfffffff8u) + 1u;
        }
    COW_AT(10239a81)
        wr32(sp0 - 0x890u, 0xafu);
        t66 = eax * 8u + edx;
        t67 = rd32(COW_IMG(0x10668fd8u));
        wr32(t67 + 0x1cu, t66);
        g->ecx = t67;
        g->edx = edx;
        g->esp = sp0 - 0x88cu;
        t68 = cow_call_regs(g, COW_IMG(0x10193850u), t66, g->ecx, g->edx, 1, 1, 0xafu);
        t69 = g->ecx;
        t70 = g->edx;
        wr32(sp0 - 0x894u, t68);
        g->ebx = 0u;
        g->esp = sp0 - 0x890u;
        cow_cdecl(g, COW_IMG(0x10245570u), 1, t68);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        loc_854 = rd32(sp0 - 0x854u);
        loc_850 = rd32(sp0 - 0x850u);
        loc_84c = rd32(sp0 - 0x84cu);
        loc_848 = rd32(sp0 - 0x848u);
        loc_838 = rd32(sp0 - 0x838u);
        loc_834 = rd32(sp0 - 0x834u);
        loc_830 = rd32(sp0 - 0x830u);
        loc_844 = rd32(sp0 - 0x844u);
        loc_840 = rd32(sp0 - 0x840u);
        loc_83c = rd32(sp0 - 0x83cu);
    }
    else
    {
        eax = t5;
        edx = t6;
    COW_AT(10239827)
        wr32(sp0 - 0x890u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        t7 = rd32(COW_IMG(0x106693fcu));
        g->esp = sp0 - 0x88cu;
        t8 = cow_thiscall(g, COW_IMG(0x10251970u), t7, 1, 0x10u);
        t9 = g->ecx;
        t10 = g->edx;
        if ((uint8_t)t8 == 0u)
        {
            eax = t8;
            edx = t10;
    COW_AT(1023993f)
            wr32(sp0 - 0x890u, 0xbu);
            g->eax = eax;
            g->esp = sp0 - 0x88cu;
            t37 = cow_thiscall(g, COW_IMG(0x1018bf50u), sp0 - 0x868u, 1, 0xbu);
            t38 = g->ecx;
            t39 = rd32(sp0 - 0x868u);
            wr32(sp0 - 0x890u, t39);
            g->ecx = t38;
            g->edx = t39;
            t40 = cow_cdecl(g, COW_IMG(0x1018c1e0u), 1, t39);
            t41 = g->ecx;
            t42 = g->edx;
            wr32(sp0 - 0x894u, 0x2e8u);
            g->ecx = t41;
            g->edx = t42;
            g->esp = sp0 - 0x890u;
            cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, 0x2e8u);
            t43 = g->ecx;
            t44 = g->edx;
            wr32(sp0 - 0x898u, sp0 - 0x82cu);
            g->eax = sp0 - 0x82cu;
            g->edx = t44;
            g->esp = sp0 - 0x894u;
            t45 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), t43, 1, sp0 - 0x82cu);
            t46 = g->edx;
            wr32(sp0 - 0x894u, 0u);
            g->edx = t46;
            g->esp = sp0 - 0x890u;
            t47 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x890u, 1, 0u);
            t48 = g->edx;
            wr32(sp0 - 0x894u, rd32(t45));
            wr32(sp0 - 0x898u, 0x796e7573u);
            g->ebx = 0u;
            g->esi = t45;
            g->edx = t48;
            t49 = rd32(COW_IMG(0x1065cb04u));
            g->esp = sp0 - 0x88cu;
            t50 = cow_thiscall(g, COW_IMG(0x101874f0u), t49, 3, 0x796e7573u, rd32(t45), rd32(sp0 - 0x890u));
            t51 = g->ecx;
            t52 = g->edx;
            wr32(sp0 - 0x890u, 0u);
            g->ecx = t51;
            t53 = cow_call_regs(g, COW_IMG(0x10035f00u), g->eax, g->ecx, t52, 1, 1, 0u);
            t54 = g->ecx;
            t55 = g->edx;
            wr32(sp0 - 0x894u, 0x3f800000u);
            g->esp = sp0 - 0x890u;
            cow_call_regs(g, COW_IMG(0x10036070u), g->eax, g->ecx, t55, 1, 1, 0x3f800000u);
            wr32(sp0 - 0x838u, 0u);
            wr32(sp0 - 0x890u, sp0 - 0x838u);
            wr32(sp0 - 0x834u, 0xc0a00000u);
            wr32(sp0 - 0x830u, 0x42200000u);
            g->eax = rd32(COW_IMG(0x104568fcu));
            t56 = rd32(COW_IMG(0x104568fcu));
            g->esp = sp0 - 0x88cu;
            t57 = cow_thiscall(g, COW_IMG(0x1001e760u), rd32(t56 + 0x50u), 1, sp0 - 0x838u);
            wr32(sp0 - 0x890u, sp0 - 0x844u);
            wr32(sp0 - 0x844u, 0u);
            wr32(sp0 - 0x840u, 0u);
            wr32(sp0 - 0x83cu, 0u);
            cow_thiscall(g, COW_IMG(0x1001e780u), rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u), 1, sp0 - 0x844u);
            wr32(sp0 - 0x890u, 1u);
            t58 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
            wr32(sp0 - 0x894u, t58);
            wr32(sp0 - 0x898u, 1u);
            t59 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
            wr32(sp0 - 0x89cu, t59);
            g->eax = t59;
            t60 = cow_thiscall(g, COW_IMG(0x10251640u), rd32(COW_IMG(0x106693fcu)), 4, t59, 1u, t58, 1u);
            t61 = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u);
            wr32(sp0 - 0x890u, t61);
            t62 = cow_fastcall(g, COW_IMG(0x102517a0u), rd32(COW_IMG(0x106693fcu)), t61, 1, t61);
            t63 = g->edx;
            wr32(sp0 - 0x890u, 0u);
            cow_fastcall(g, COW_IMG(0x10251770u), rd32(COW_IMG(0x106693fcu)), t63, 1, 0u);
            t64 = g->edx;
            t65 = rd32(rd32(COW_IMG(0x10668fbcu)) + 0x14u);
            wr32(sp0 - 0x890u, t65);
            cow_fastcall(g, COW_IMG(0x10251740u), rd32(COW_IMG(0x106693fcu)), t64, 1, t65);
            loc_85c = rd32(sp0 - 0x85cu);
            loc_858 = rd32(sp0 - 0x858u);
            loc_854 = rd32(sp0 - 0x854u);
            loc_850 = rd32(sp0 - 0x850u);
            loc_84c = rd32(sp0 - 0x84cu);
            loc_848 = rd32(sp0 - 0x848u);
            loc_838 = 0u;
            loc_834 = 0xc0a00000u;
            loc_830 = 0x42200000u;
            loc_844 = 0u;
            loc_840 = 0u;
            loc_83c = 0u;
        }
        else
        {
            eax = t8;
            ecx = t9;
            edx = t10;
    COW_AT(1023983c)
            wr32(sp0 - 0x890u, 0x84u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x88cu;
            cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, 0x84u);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp0 - 0x894u, sp0 - 0x828u);
            g->eax = sp0 - 0x828u;
            g->edx = t12;
            g->esp = sp0 - 0x890u;
            t13 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), t11, 1, sp0 - 0x828u);
            t14 = g->edx;
            wr32(sp0 - 0x894u, 0u);
            g->edx = t14;
            t15 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x890u, 1, 0u);
            t16 = g->edx;
            wr32(sp0 - 0x894u, rd32(t13));
            wr32(sp0 - 0x898u, 0x656e6966u);
            g->ebx = 0u;
            g->esi = t13;
            g->edx = t16;
            t17 = rd32(COW_IMG(0x1065cb04u));
            g->esp = sp0 - 0x88cu;
            t18 = cow_thiscall(g, COW_IMG(0x101874f0u), t17, 3, 0x656e6966u, rd32(t13), 0x84u);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(sp0 - 0x890u, 0u);
            g->ecx = t19;
            t21 = cow_call_regs(g, COW_IMG(0x10035f00u), g->eax, g->ecx, t20, 1, 1, 0u);
            t22 = g->ecx;
            t23 = g->edx;
            wr32(sp0 - 0x894u, 0x3f800000u);
            g->esp = sp0 - 0x890u;
            cow_call_regs(g, COW_IMG(0x10036070u), g->eax, g->ecx, t23, 1, 1, 0x3f800000u);
            wr32(sp0 - 0x85cu, 0u);
            wr32(sp0 - 0x890u, sp0 - 0x85cu);
            wr32(sp0 - 0x858u, 0xc0a00000u);
            wr32(sp0 - 0x854u, 0x42200000u);
            g->eax = rd32(COW_IMG(0x104568fcu));
            t24 = rd32(COW_IMG(0x104568fcu));
            g->esp = sp0 - 0x88cu;
            t25 = cow_thiscall(g, COW_IMG(0x1001e760u), rd32(t24 + 0x50u), 1, sp0 - 0x85cu);
            wr32(sp0 - 0x890u, sp0 - 0x850u);
            wr32(sp0 - 0x850u, 0u);
            wr32(sp0 - 0x84cu, 0u);
            wr32(sp0 - 0x848u, 0u);
            g->edx = rd32(COW_IMG(0x104568fcu));
            t26 = rd32(COW_IMG(0x104568fcu));
            t27 = cow_thiscall(g, COW_IMG(0x1001e780u), rd32(t26 + 0x50u), 1, sp0 - 0x850u);
            t28 = g->edx;
            wr32(sp0 - 0x890u, 1u);
            cow_thiscall(g, COW_IMG(0x10251880u), rd32(COW_IMG(0x106693fcu)), 1, 1u);
            wr32(sp0 - 0x890u, 1u);
            t29 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
            wr32(sp0 - 0x894u, t29);
            wr32(sp0 - 0x898u, 0u);
            t30 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
            wr32(sp0 - 0x89cu, t30);
            g->eax = t30;
            t31 = cow_thiscall(g, COW_IMG(0x10251640u), rd32(COW_IMG(0x106693fcu)), 4, t30, 0u, t29, 1u);
            t32 = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u);
            wr32(sp0 - 0x890u, t32);
            t33 = cow_fastcall(g, COW_IMG(0x102517a0u), rd32(COW_IMG(0x106693fcu)), t32, 1, t32);
            t34 = g->edx;
            wr32(sp0 - 0x890u, 3u);
            cow_fastcall(g, COW_IMG(0x10251770u), rd32(COW_IMG(0x106693fcu)), t34, 1, 3u);
            t35 = g->edx;
            t36 = rd32(rd32(COW_IMG(0x10668fbcu)) + 0x14u);
            wr32(sp0 - 0x890u, t36);
            cow_fastcall(g, COW_IMG(0x10251740u), rd32(COW_IMG(0x106693fcu)), t35, 1, t36);
            loc_85c = 0u;
            loc_858 = 0xc0a00000u;
            loc_854 = 0x42200000u;
            loc_850 = 0u;
            loc_84c = 0u;
            loc_848 = 0u;
            loc_838 = rd32(sp0 - 0x838u);
            loc_834 = rd32(sp0 - 0x834u);
            loc_830 = rd32(sp0 - 0x830u);
            loc_844 = rd32(sp0 - 0x844u);
            loc_840 = rd32(sp0 - 0x840u);
            loc_83c = rd32(sp0 - 0x83cu);
        }
    }
    COW_AT(10239aa0)
    t71 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x18u, t71);
    t72 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x1cu, t72);
    t73 = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x20u, t73);
    t74 = rd32(rd32(COW_IMG(0x10668fbcu)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x24u, t74);
    t75 = rd32(rd32(COW_IMG(0x10668fc0u)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x28u, t75);
    t76 = rd32(COW_IMG(0x10669078u));
    wr32(t76 + 0x14u, 1u);
    t77 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    wr32(sp0 - 0x890u, t77);
    g->eax = t77;
    g->edx = t76;
    t78 = rd32(COW_IMG(0x10668facu));
    g->esp = sp0 - 0x88cu;
    t79 = cow_thiscall(g, COW_IMG(0x102375a0u), t78, 1, t77);
    t80 = g->ecx;
    t81 = g->edx;
    g->ecx = t80;
    g->edx = t81;
    cow_stdcall(g, COW_IMG(0x1023e5d0u), 0);
    t82 = g->ecx;
    t83 = g->edx;
    wr32(COW_IMG(0x10668fe4u), 1u);
    ecx = t82;
    edx = t83;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
L_10239b1d: ;
    COW_AT(10239b1d)
    if (rd32(COW_IMG(0x10668fe8u)) > 6u)
    {
        eax = rd32(COW_IMG(0x10668fe8u));
        goto L_10239cf6;
    }
    eax = rd32(COW_IMG(0x10668fe8u));
    COW_AT(10239b2b)
    t84 = rd32(COW_IMG(0x1023abd0u) + eax * 4u);
    switch (t84 - RD)
    {
    case 0x10239b32u: goto L_10239b32;
    case 0x10239b46u: goto L_10239b46;
    case 0x10239b53u: goto L_10239b53;
    case 0x10239b60u: goto L_10239b60;
    case 0x10239b6du: goto L_10239b6d;
    case 0x10239b7au: goto L_10239b7a;
    case 0x10239b84u: goto L_10239b84;
    default: rt_fatal(g, COW_IMG(0x10239b2bu), "switch");
    }
    return 0;
L_10239b32: ;
    COW_AT(10239b32)
    t92 = rd32(COW_IMG(0x10668facu));
    wr32(t92 + 0x20u, 0u);
    wr32(t92 + 0x18u, 0u);
    wr32(t92 + 0x1cu, 0xffffffffu);
L_10239bac: ;
    COW_AT(10239bac)
    if (rd32(COW_IMG(0x10668fe8u)) > 6u)
    {
        eax = rd32(COW_IMG(0x10668fe8u));
        goto L_10239cf6;
    }
    eax = rd32(COW_IMG(0x10668fe8u));
    COW_AT(10239bba)
    t93 = rd32(COW_IMG(0x1023abecu) + eax * 4u);
    switch (t93 - RD)
    {
    case 0x10239bc1u: goto L_10239bc1;
    case 0x10239bd8u: goto L_10239bd8;
    case 0x10239befu: goto L_10239bef;
    case 0x10239c06u: goto L_10239c06;
    case 0x10239c1du: goto L_10239c1d;
    case 0x10239c34u: goto L_10239c34;
    case 0x10239c90u: goto L_10239c90;
    default: rt_fatal(g, COW_IMG(0x10239bbau), "switch");
    }
    return 0;
L_10239b46: ;
    COW_AT(10239b46)
    t91 = rd32(COW_IMG(0x10668fb4u));
    wr32(t91 + 0x1cu, 0u);
    wr32(t91 + 0x18u, 0u);
    goto L_10239bac;
L_10239b53: ;
    COW_AT(10239b53)
    t90 = rd32(COW_IMG(0x10668fb8u));
    wr32(t90 + 0x1cu, 0u);
    wr32(t90 + 0x18u, 0u);
    goto L_10239bac;
L_10239b60: ;
    COW_AT(10239b60)
    t89 = rd32(COW_IMG(0x10668fbcu));
    wr32(t89 + 0x1cu, 0u);
    wr32(t89 + 0x18u, 0u);
    goto L_10239bac;
L_10239b6d: ;
    COW_AT(10239b6d)
    t88 = rd32(COW_IMG(0x10668fc0u));
    wr32(t88 + 0x1cu, 0u);
    wr32(t88 + 0x18u, 0u);
    goto L_10239bac;
L_10239b7a: ;
    COW_AT(10239b7a)
    t87 = rd32(COW_IMG(0x10668fc4u));
    wr32(t87 + 0x24u, 0u);
    eax = t87;
L_10239ba6: ;
    COW_AT(10239ba6)
    wr32(eax + 0x28u, 0u);
    wr32(eax + 0x2cu, 0u);
    goto L_10239bac;
L_10239b84: ;
    COW_AT(10239b84)
    t85 = rd32(COW_IMG(0x10668fccu));
    wr32(t85 + 0x14u, 0u);
    wr32(t85 + 0x18u, 0u);
    wr32(t85 + 0x3cu, 0u);
    wr32(t85 + 0x40u, 0u);
    wr32(t85 + 0x44u, 0u);
    t86 = rd32(COW_IMG(0x10668fd0u));
    wr32(t86 + 0x14u, 0u);
    wr32(t86 + 0x30u, 0u);
    wr32(t86 + 0x34u, 0u);
    eax = t86;
    goto L_10239ba6;
L_10239bc1: ;
    COW_AT(10239bc1)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x103881a4u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t132 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103881a4u), 1u, 0u);
    t133 = g->ecx;
    t134 = g->edx;
    eax = t132;
    ecx = t133;
    edx = t134;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
L_10239cf6: ;
    COW_AT(10239cf6)
    ebp = 0u;
    edi = loc_87c;
L_10239d01: ;
    COW_AT(10239d01)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t135 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t136 = g->ecx;
    t137 = g->edx;
    if ((int32_t)t135 < 0)
    {
        eax = t135;
        ecx = t136;
        edx = t137;
        goto L_1023aadf;
    }
    COW_AT(10239d0e)
    if (rd32(rd32(COW_IMG(0x10669050u)) + 0x24u) == 1u)
    {
    COW_AT(10239d27)
        if (rd32(COW_IMG(0x10668fe8u)) != 6u)
        {
            eax = rd32(COW_IMG(0x10668fe8u));
            goto L_10239d48;
        }
        eax = rd32(COW_IMG(0x10668fe8u));
    COW_AT(10239d31)
        if (rd32(COW_IMG(0x10668fecu)) != 1u) goto L_10239d48;
    COW_AT(10239d39)
        wr32(rd32(COW_IMG(0x10669078u)) + 0x2cu, 0x22u);
    }
    else
    {
    COW_AT(10239d18)
        wr32(rd32(COW_IMG(0x10669078u)) + 0x2cu, 0x21u);
    }
L_10239d54: ;
    COW_AT(10239d54)
    wr32(sp0 - 0x890u, 0u);
    t138 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x18u, t138);
    t139 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x1cu, t139);
    t140 = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x20u, t140);
    t141 = rd32(rd32(COW_IMG(0x10668fbcu)) + 0x14u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x24u, t141);
    t142 = rd32(rd32(COW_IMG(0x10668fc0u)) + 0x14u);
    t143 = rd32(COW_IMG(0x10669078u));
    t144 = rd32(COW_IMG(0x10668fc0u));
    wr32(t143 + 0x28u, t142);
    g->eax = t142;
    g->ecx = t143;
    g->edx = t144;
    g->esp = sp0 - 0x884u;
    t145 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u));
    t146 = g->ecx;
    t147 = g->edx;
    if ((int32_t)t145 < 0)
    {
        eax = t145;
        ecx = t146;
        edx = t147;
        goto L_1023ab77;
    }
    ecx = t146;
    edx = t147;
    COW_AT(10239dbf)
    if (rd32(COW_IMG(0x10668fe8u)) > 6u)
    {
        eax = rd32(COW_IMG(0x10668fe8u));
        loc_87c = rd32(sp0 - 0x87cu);
        goto L_10239fde;
    }
    eax = rd32(COW_IMG(0x10668fe8u));
    COW_AT(10239dcd)
    t148 = rd32(COW_IMG(0x1023ac08u) + eax * 4u);
    switch (t148 - RD)
    {
    case 0x10239dd4u: goto L_10239dd4;
    case 0x10239df1u: goto L_10239df1;
    case 0x10239dfbu: goto L_10239dfb;
    case 0x10239e05u: goto L_10239e05;
    case 0x10239e0fu: goto L_10239e0f;
    case 0x10239ec4u: goto L_10239ec4;
    case 0x10239edfu: goto L_10239edf;
    default: rt_fatal(g, COW_IMG(0x10239dcdu), "switch");
    }
    return 0;
L_10239bd8: ;
    COW_AT(10239bd8)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x10388190u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t129 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388190u), 1u, 0u);
    t130 = g->ecx;
    t131 = g->edx;
    eax = t129;
    ecx = t130;
    edx = t131;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_10239cf6;
L_10239bef: ;
    COW_AT(10239bef)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x1038817cu));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t126 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038817cu), 1u, 0u);
    t127 = g->ecx;
    t128 = g->edx;
    eax = t126;
    ecx = t127;
    edx = t128;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_10239cf6;
L_10239c06: ;
    COW_AT(10239c06)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x10388168u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t123 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388168u), 1u, 0u);
    t124 = g->ecx;
    t125 = g->edx;
    eax = t123;
    ecx = t124;
    edx = t125;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_10239cf6;
L_10239c1d: ;
    COW_AT(10239c1d)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x10388154u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t120 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388154u), 1u, 0u);
    t121 = g->ecx;
    t122 = g->edx;
    eax = t120;
    ecx = t121;
    edx = t122;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_10239cf6;
L_10239c34: ;
    COW_AT(10239c34)
    wr32(sp0 - 0x890u, sp0 - 0x824u);
    g->eax = eax;
    g->ecx = sp0 - 0x824u;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t105 = cow_cdecl(g, COW_IMG(0x10310b0du), 1, sp0 - 0x824u);
    t106 = g->ecx;
    t107 = g->edx;
    if (t105 == 0u)
    {
        eax = t105;
        edx = t107;
    }
    else
    {
        eax = t105;
        ecx = t106;
    COW_AT(10239c45)
        t108 = rd32(sp0 - 0x820u) * rd32(sp0 - 0x824u) * 0x3bd1948u;
        wr32(sp0 - 0x890u, t108);
        g->eax = eax;
        g->esp = sp0 - 0x88cu;
        t109 = cow_call_regs(g, COW_IMG(0x103149d3u), g->eax, ecx, t108, 1, 1, t108);
        t110 = g->edx;
        eax = t109;
        edx = t110;
    }
    COW_AT(10239c5d)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x10388140u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t111 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388140u), 1u, 0u);
    t112 = g->edx;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t111, rd32(COW_IMG(0x10662da0u)), t112, 1, 0);
    t113 = g->edx;
    t114 = rd32(rd32(COW_IMG(0x10668fc4u)) + 0x30u);
    wr32(sp0 - 0x890u, t114);
    g->eax = rd32(COW_IMG(0x10668fc4u));
    g->edx = t113;
    t115 = rd32(COW_IMG(0x10668fc4u));
    t116 = rd32(COW_IMG(0x10662da0u));
    t117 = cow_thiscall(g, COW_IMG(0x101c6870u), t116, 1, t114);
    t118 = g->ecx;
    t119 = g->edx;
    eax = t117;
    ecx = t118;
    edx = t119;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_10239cf6;
L_10239c90: ;
    COW_AT(10239c90)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x10388140u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t94 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388140u), 1u, 0u);
    t95 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x1038812cu));
    g->ebx = 0u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038812cu), 1u, 0u);
    wr32(sp0 - 0x86cu, rd32(COW_IMG(0x103879dcu)));
    t96 = rd32(COW_IMG(0x103879dcu)) + 0x40u;
    wr32(sp0 - 0x86cu, t96);
    wr32(sp0 - 0x890u, 1u);
    wr32(sp0 - 0x894u, 0u);
    wr32(sp0 - 0x898u, sp0 - 0x870u);
    wr32(sp0 - 0x870u, rd32(COW_IMG(0x103879d8u)));
    g->eax = sp0 - 0x870u;
    t97 = rd32(COW_IMG(0x103879d8u));
    t98 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x870u, 0u, 1u);
    t99 = rd32(sp0 - 0x86cu);
    wr32(sp0 - 0x890u, t99);
    t100 = rd32(sp0 - 0x870u);
    wr32(sp0 - 0x894u, t100);
    wr32(sp0 - 0x898u, 0u);
    t101 = rd32(COW_IMG(0x1066901cu));
    t102 = cow_call_regs(g, COW_IMG(0x1023d6c0u), t98, t101, t100, 0, 3, 0u, t100, t99);
    t103 = g->ecx;
    t104 = g->edx;
    eax = t102;
    ecx = t103;
    edx = t104;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_10239cf6;
L_10239d48: ;
    COW_AT(10239d48)
    wr32(rd32(COW_IMG(0x10669078u)) + 0x2cu, eax + 0x13u);
    goto L_10239d54;
L_10239dd4: ;
    COW_AT(10239dd4)
    eax = rd32(COW_IMG(0x10668facu));
    ecx = rd32(rd32(COW_IMG(0x10668facu)) + 0x20u);
L_10239ddc: ;
    COW_AT(10239ddc)
    if (ecx != 1u)
    {
        loc_87c = rd32(sp0 - 0x87cu);
    }
    else
    {
    COW_AT(10239de4)
        t213 = rd32(eax + 0x18u);
        wr32(sp0 - 0x87cu, t213);
        ebp = ebp + 1u;
        edi = t213;
        loc_87c = t213;
    }
L_10239fde: ;
    COW_AT(10239fde)
    if (ebp == 0u)
    {
        loc_878 = rd32(sp0 - 0x878u);
        goto L_10239d01;
    }
    COW_AT(10239fe6)
    if (rd32(COW_IMG(0x10456aa4u)) != 0u)
    {
    COW_AT(10239fee)
        wr8(sp0 - 0x872u, 0u);
        wr8(sp0 - 0x873u, 0u);
        wr8(sp0 - 0x874u, 0u);
        wr8(sp0 - 0x871u, 0u);
        t214 = rd32(sp0 - 0x874u);
        wr32(sp0 - 0x890u, t214);
        g->ecx = ecx;
        g->edx = t214;
        g->esp = sp0 - 0x88cu;
        cow_cdecl(g, COW_IMG(0x10014f20u), 1, t214);
        t215 = g->ecx;
        t216 = g->edx;
        ecx = t215;
        edx = t216;
        loc_87c = rd32(sp0 - 0x87cu);
    }
    COW_AT(1023a00b)
    if (rd32(COW_IMG(0x10668fe8u)) > 6u) goto L_1023a11e;
    eax = rd32(COW_IMG(0x10668fe8u));
    COW_AT(1023a019)
    t217 = rd32(COW_IMG(0x1023ac24u) + eax * 4u);
    switch (t217 - RD)
    {
    case 0x1023a0d2u: goto L_1023a0d2;
    case 0x1023a0d9u: goto L_1023a0d9;
    case 0x1023a0e0u: goto L_1023a0e0;
    case 0x1023a0e7u: goto L_1023a0e7;
    case 0x1023a0eeu: goto L_1023a0ee;
    case 0x1023a0f5u: goto L_1023a0f5;
    case 0x1023a11eu: goto L_1023a11e;
    default: rt_fatal(g, COW_IMG(0x1023a019u), "switch");
    }
    return 0;
L_10239df1: ;
    COW_AT(10239df1)
    eax = rd32(COW_IMG(0x10668fb4u));
    ecx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x1cu);
    goto L_10239ddc;
L_10239dfb: ;
    COW_AT(10239dfb)
    eax = rd32(COW_IMG(0x10668fb8u));
    ecx = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x1cu);
    goto L_10239ddc;
L_10239e05: ;
    COW_AT(10239e05)
    eax = rd32(COW_IMG(0x10668fbcu));
    ecx = rd32(rd32(COW_IMG(0x10668fbcu)) + 0x1cu);
    goto L_10239ddc;
L_10239e0f: ;
    COW_AT(10239e0f)
    if (rd32(rd32(COW_IMG(0x10668fc0u)) + 0x1cu) != 1u)
    {
        eax = rd32(COW_IMG(0x10668fc0u));
        loc_87c = rd32(sp0 - 0x87cu);
    }
    else
    {
        eax = rd32(COW_IMG(0x10668fc0u));
    COW_AT(10239e1d)
        t185 = rd32(eax + 0x18u);
        wr32(sp0 - 0x87cu, t185);
        if (rd32(rd32(COW_IMG(0x10669050u)) + 0x24u) == 1u)
        {
            edx = rd32(COW_IMG(0x10669050u));
            ebp = ebp + 1u;
            edi = t185;
            loc_87c = t185;
        }
        else
        {
            edx = rd32(COW_IMG(0x10669050u));
            ebp = ebp + 1u;
            esi = rd32(rd32(COW_IMG(0x10669050u)) + 0x24u);
            edi = t185;
            loc_87c = t185;
    COW_AT(10239e37)
            if ((int32_t)edi > 0)
            {
    COW_AT(10239e3f)
                wr32(sp0 - 0x890u, 0x87u);
                wr32(sp0 - 0x894u, 8u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x88cu;
                t186 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x87u);
                t187 = g->ecx;
                t188 = g->edx;
                wr32(sp0 - 0x898u, 0x88u);
                wr32(sp0 - 0x89cu, 8u);
                g->ecx = t187;
                g->edx = t188;
                g->esp = sp0 - 0x894u;
                t189 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x88u);
                t190 = g->ecx;
                t191 = g->edx;
                wr32(sp0 - 0x8a0u, 0x89u);
                wr32(sp0 - 0x8a4u, 8u);
                g->ecx = t190;
                g->edx = t191;
                g->esp = sp0 - 0x89cu;
                t192 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x89u);
                t193 = g->ecx;
                t194 = g->edx;
                wr32(sp0 - 0x8a8u, 0x8au);
                wr32(sp0 - 0x8acu, 8u);
                g->ecx = t193;
                g->edx = t194;
                g->esp = sp0 - 0x8a4u;
                t195 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x8au);
                t196 = g->ecx;
                t197 = g->edx;
                wr32(sp0 - 0x8b0u, 0x8bu);
                wr32(sp0 - 0x8b4u, 8u);
                g->ecx = t196;
                g->edx = t197;
                g->esp = sp0 - 0x8acu;
                t198 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x8bu);
                t199 = g->ecx;
                t200 = g->edx;
                wr32(sp0 - 0x8b8u, 0x8cu);
                wr32(sp0 - 0x8bcu, 8u);
                g->ecx = t199;
                g->edx = t200;
                g->esp = sp0 - 0x8b4u;
                t201 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x8cu);
                t202 = g->ecx;
                t203 = g->edx;
                wr32(sp0 - 0x8c0u, 0xc6u);
                wr32(sp0 - 0x8c4u, 8u);
                wr32(sp0 - 0x87cu, 0u);
                g->ecx = t202;
                g->edx = t203;
                g->esp = sp0 - 0x8bcu;
                t204 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xc6u);
                t205 = g->ecx;
                t206 = g->edx;
                if (esi == 0u)
                {
                    eax = t204;
                    ecx = t205;
                    edx = t206;
    COW_AT(10239ea7)
                    wr32(sp0 - 0x890u, 0xd8u);
                    loc_890 = 0xd8u;
                }
                else
                {
                    eax = t204;
                    ecx = t205;
                    edx = t206;
    COW_AT(10239ea0)
                    wr32(sp0 - 0x890u, 0xc6u);
                    loc_890 = 0xc6u;
                }
    COW_AT(10239eac)
                wr32(sp0 - 0x894u, 8u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x88cu;
                t207 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, loc_890);
                t208 = g->ecx;
                t209 = g->edx;
                wr32(sp0 - 0x890u, t207);
                g->ebx = 0u;
                g->ecx = t208;
                g->edx = t209;
                t210 = cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t207);
                t211 = g->ecx;
                t212 = g->edx;
                eax = t210;
                ecx = t211;
                edx = t212;
                edi = 0u;
                loc_87c = 0u;
            }
        }
    }
L_10239fd9: ;
    COW_AT(10239fd9)
    goto L_10239fde;
L_10239ec4: ;
    COW_AT(10239ec4)
    if (rd32(rd32(COW_IMG(0x10668fc4u)) + 0x28u) != 1u)
    {
        eax = rd32(COW_IMG(0x10668fc4u));
        loc_87c = rd32(sp0 - 0x87cu);
    }
    else
    {
        eax = rd32(COW_IMG(0x10668fc4u));
    COW_AT(10239ed2)
        t184 = rd32(eax + 0x24u);
        wr32(sp0 - 0x87cu, t184);
        ebp = ebp + 1u;
        edi = t184;
        loc_87c = t184;
    }
    goto L_10239fde;
L_10239edf: ;
    COW_AT(10239edf)
    if (rd32(COW_IMG(0x10668fecu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10668fecu));
        goto L_10239fa5;
    }
    eax = rd32(COW_IMG(0x10668fecu));
    COW_AT(10239eec)
    if (eax != 1u)
    {
        eax = eax - 1u;
        loc_87c = rd32(sp0 - 0x87cu);
    }
    else
    {
    COW_AT(10239ef3)
        if (rd32(rd32(COW_IMG(0x10668fd0u)) + 0x14u) != 1u)
        {
            eax = rd32(COW_IMG(0x10668fd0u));
            loc_87c = rd32(sp0 - 0x87cu);
        }
        else
        {
            eax = rd32(COW_IMG(0x10668fd0u));
    COW_AT(10239f01)
            t149 = rd32(eax + 0x28u);
            wr32(sp0 - 0x87cu, t149);
            if ((int32_t)rd32(eax + 0x28u) <= 0)
            {
                edi = t149;
                sf = (int32_t)rd32(eax + 0x28u) < 0;
                loc_87c = t149;
    COW_AT(10239f12)
                if (sf)
                {
    COW_AT(10239f18)
                    wr32(sp0 - 0x890u, COW_IMG(0x10388118u));
                    g->edx = edx;
                    g->esp = sp0 - 0x88cu;
                    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388118u));
                    t150 = g->edx;
                    t151 = rd32(COW_IMG(0x10668fccu));
                    wr32(t151 + 0x14u, 0u);
                    wr32(t151 + 0x18u, 0u);
                    wr32(t151 + 0x3cu, 0u);
                    wr32(t151 + 0x40u, 0u);
                    wr32(t151 + 0x44u, 0u);
                    cow_call_regs(g, COW_IMG(0x101c68a0u), t151, rd32(COW_IMG(0x10662da0u)), t150, 1, 0);
                    t152 = g->edx;
                    wr32(sp0 - 0x890u, 1u);
                    wr32(sp0 - 0x864u, rd32(COW_IMG(0x103879d8u)));
                    wr32(sp0 - 0x860u, rd32(COW_IMG(0x103879dcu)));
                    wr32(sp0 - 0x894u, 0u);
                    wr32(sp0 - 0x898u, sp0 - 0x864u);
                    t153 = rd32(COW_IMG(0x103879dcu)) + 0x40u;
                    wr32(sp0 - 0x860u, t153);
                    t154 = rd32(COW_IMG(0x103879d8u));
                    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x864u, 0u, 1u);
                    t155 = rd32(sp0 - 0x860u);
                    wr32(sp0 - 0x890u, t155);
                    t156 = rd32(sp0 - 0x864u);
                    wr32(sp0 - 0x894u, t156);
                    wr32(sp0 - 0x898u, 1u);
                    cow_call_regs(g, COW_IMG(0x1023d6c0u), t156, rd32(COW_IMG(0x1066901cu)), t155, 0, 3, 1u, t156, t155);
                    t157 = rd32(COW_IMG(0x10668fccu));
                    wr32(t157 + 0x40u, 1u);
                    t158 = rd32(COW_IMG(0x10668fd0u));
                    wr32(t158 + 0x30u, 0u);
                    t159 = rd32(COW_IMG(0x10668fecu)) - 1u;
                    wr32(COW_IMG(0x10668fecu), t159);
                    eax = t159;
                    ecx = t157;
                    edx = t158;
                    loc_87c = rd32(sp0 - 0x87cu);
                }
            }
            else
            {
                edi = t149;
                loc_87c = t149;
    COW_AT(10239f0c)
                ebp = ebp + 1u;
            }
        }
    }
    goto L_10239fde;
L_10239fa5: ;
    COW_AT(10239fa5)
    if (rd32(rd32(COW_IMG(0x10668fccu)) + 0x14u) != 1u)
    {
        ecx = rd32(COW_IMG(0x10668fccu));
        goto L_1023a09d;
    }
    ecx = rd32(COW_IMG(0x10668fccu));
    COW_AT(10239fb4)
    t160 = rd32(ecx + 0x3cu);
    wr32(sp0 - 0x87cu, t160);
    if ((int32_t)rd32(ecx + 0x3cu) <= 0)
    {
        edi = t160;
        sf = (int32_t)rd32(ecx + 0x3cu) < 0;
        loc_87c = t160;
        goto L_1023a091;
    }
    loc_87c = t160;
    COW_AT(10239fc3)
    edi = ecx + 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
    COW_AT(1023a020)
        wr32(sp0 - 0x890u, 0u);
        wr32(sp0 - 0x894u, 1u);
        wr32(sp0 - 0x898u, COW_IMG(0x10388118u));
        t161 = rd32(COW_IMG(0x10668fd0u));
        wr32(t161 + 0x14u, 0u);
        wr32(t161 + 0x28u, 0u);
        wr32(t161 + 0x2cu, 0u);
        wr32(t161 + 0x30u, 0u);
        wr32(t161 + 0x34u, 0u);
        g->ebx = 0u;
        g->eax = t161;
        g->esp = sp0 - 0x88cu;
        t162 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388118u), 1u, 0u);
        wr32(rd32(COW_IMG(0x10668fccu)) + 0x40u, 0u);
        t163 = rd32(COW_IMG(0x10668fd0u));
        wr32(t163 + 0x30u, 1u);
        g->edi = edi;
        t164 = cow_fastcall(g, COW_IMG(0x1023d920u), rd32(COW_IMG(0x1066901cu)), t163, 0);
        t165 = g->edx;
        cow_call_regs(g, COW_IMG(0x101c68a0u), t164, rd32(COW_IMG(0x10662da0u)), t165, 1, 0);
        t166 = g->edx;
        t167 = rd32(rd32(COW_IMG(0x10668fd0u)) + 0x38u);
        wr32(sp0 - 0x890u, t167);
        g->eax = rd32(COW_IMG(0x10668fd0u));
        g->edx = t166;
        t168 = rd32(COW_IMG(0x10668fd0u));
        t169 = rd32(COW_IMG(0x10662da0u));
        t170 = cow_thiscall(g, COW_IMG(0x101c6870u), t169, 1, t167);
        t171 = g->ecx;
        t172 = g->edx;
        wr32(COW_IMG(0x10668fecu), rd32(COW_IMG(0x10668fecu)) + 1u);
        eax = t170;
        ecx = t171;
        edx = t172;
        loc_87c = rd32(sp0 - 0x87cu);
    }
    else
    {
        ecx = ~ecx - 1u;
    COW_AT(10239fd4)
        ebp = ebp + 1u;
    }
    COW_AT(10239fd5)
    edi = loc_87c;
    goto L_10239fd9;
L_1023a091: ;
    COW_AT(1023a091)
    if (sf)
    {
    COW_AT(1023a097)
        ebp = ebp + 1u;
    }
    goto L_10239fde;
L_1023a09d: ;
    COW_AT(1023a09d)
    if (rd32(ecx + 0x18u) == 0xffffffffu)
    {
        eax = rd32(ecx + 0x18u);
        goto L_1023aaf2;
    }
    eax = rd32(ecx + 0x18u);
    COW_AT(1023a0a9)
    if (eax == 1u)
    {
    COW_AT(1023a0ad)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x88cu;
        t173 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t174 = g->ecx;
        t175 = g->edx;
        wr32(sp0 - 0x890u, 0x34u);
        wr32(sp0 - 0x894u, 7u);
        g->ecx = t174;
        g->edx = t175;
        t176 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x34u);
        t177 = g->ecx;
        t178 = g->edx;
        wr32(sp0 - 0x898u, t176);
        g->ebx = 0u;
        g->edx = t178;
        g->esp = sp0 - 0x894u;
        t179 = cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t176);
        t180 = g->edx;
        eax = t179;
        ecx = rd32(COW_IMG(0x10668fccu));
        edx = t180;
    }
    COW_AT(1023a0ca)
    wr32(ecx + 0x18u, 0u);
    loc_87c = rd32(sp0 - 0x87cu);
    goto L_10239fde;
L_1023a0d2: ;
    COW_AT(1023a0d2)
    wr32(sp0 - 0x890u, COW_IMG(0x103881a4u));
    loc_890 = COW_IMG(0x103881a4u);
L_1023a114: ;
    COW_AT(1023a114)
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, loc_890);
    t222 = g->ecx;
    t223 = g->edx;
    ecx = t222;
    edx = t223;
    loc_87c = rd32(sp0 - 0x87cu);
L_1023a11e: ;
    COW_AT(1023a11e)
    if (rd32(COW_IMG(0x10668fe8u)) != 5u)
    {
        eax = rd32(COW_IMG(0x10668fe8u));
        goto L_1023a14d;
    }
    eax = rd32(COW_IMG(0x10668fe8u));
    COW_AT(1023a128)
    wr32(COW_IMG(0x10668fe8u), eax + edi);
    if (eax + edi != 4u)
    {
        loc_878 = rd32(sp0 - 0x878u);
    }
    else
    {
    COW_AT(1023a139)
        wr32(sp0 - 0x890u, COW_IMG(0x10388140u));
        g->edx = edx;
        g->esp = sp0 - 0x88cu;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388140u));
        t224 = g->ecx;
        t225 = g->edx;
        ecx = t224;
        edx = t225;
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
    }
L_1023a6e2: ;
    COW_AT(1023a6e2)
    t305 = rd32(COW_IMG(0x10668fe8u));
    wr32(COW_IMG(0x10668fecu), 0u);
    if (t305 == 0xffffffffu)
    {
        eax = t305;
        goto L_1023a6fb;
    }
    eax = t305;
    COW_AT(1023a6f2)
    if (eax != 7u) goto L_10239b1d;
L_1023a6fb: ;
    COW_AT(1023a6fb)
    if (rd32(COW_IMG(0x10456aa4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10456aa4u));
    COW_AT(1023a777)
        if (eax != 0xffffffffu)
        {
    COW_AT(1023a791)
            wr32(sp0 - 0x890u, 0u);
            wr32(sp0 - 0x894u, 0u);
            wr32(sp0 - 0x898u, 0u);
            wr32(sp0 - 0x89cu, 0x7fu);
            wr32(sp0 - 0x8a0u, 0x7fu);
            wr32(sp0 - 0x8a4u, 0x78u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x888u;
            t328 = cow_cdecl(g, COW_IMG(0x10037350u), 7, 0x78u, 0x7fu, 0x7fu, 0u, 0u, 0u, rd32(sp0 - 0x88cu));
            t329 = g->ecx;
            t330 = g->edx;
            eax = t328;
            ecx = t329;
            edx = t330;
        }
        else
        {
    COW_AT(1023a77c)
            wr32(sp0 - 0x890u, 0xafu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x88cu;
            t322 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xafu);
            t323 = g->ecx;
            t324 = g->edx;
            wr32(sp0 - 0x894u, t322);
            g->ebx = 0u;
            g->ecx = t323;
            g->edx = t324;
            g->esp = sp0 - 0x890u;
            t325 = cow_cdecl(g, COW_IMG(0x10245570u), 1, t322);
            t326 = g->ecx;
            t327 = g->edx;
            eax = t325;
            ecx = t326;
            edx = t327;
        }
    COW_AT(1023a7a2)
        wr32(COW_IMG(0x10668fe4u), 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x88cu;
        t331 = cow_stdcall(g, COW_IMG(0x1023e5f0u), 0);
        t332 = g->ecx;
        t333 = g->edx;
        g->ecx = t332;
        g->edx = t333;
        t334 = cow_stdcall(g, COW_IMG(0x1023ac60u), 0);
        t335 = g->ecx;
        t336 = g->edx;
        g->edx = t336;
        t337 = cow_stdcall(g, COW_IMG(0x1023ac40u), 0);
        t338 = g->edx;
        g->edx = t338;
        t339 = rd32(COW_IMG(0x10668fd8u));
        cow_thiscall(g, COW_IMG(0x102396f0u), t339, 0);
        t340 = g->ecx;
        t341 = g->edx;
        ecx = t340;
        edx = t341;
        loc_878 = rd32(sp0 - 0x878u);
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456aa4u));
    COW_AT(1023a70a)
        if (eax == 0xffffffffu) goto L_1023a718;
    COW_AT(1023a70f)
        if (eax != 7u) goto L_1023a7c2;
L_1023a718: ;
    COW_AT(1023a718)
        wr32(sp0 - 0x890u, 0u);
        t306 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
        wr32(sp0 - 0x894u, t306);
        wr32(sp0 - 0x898u, 1u);
        t307 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
        wr32(sp0 - 0x89cu, t307);
        g->eax = t307;
        g->edx = rd32(COW_IMG(0x10668facu));
        t308 = rd32(COW_IMG(0x10668facu));
        g->esp = sp0 - 0x88cu;
        t309 = cow_thiscall(g, COW_IMG(0x10251640u), rd32(COW_IMG(0x106693fcu)), 4, t307, 1u, t306, 0u);
        t310 = g->edx;
        wr32(sp0 - 0x890u, 0u);
        wr32(sp0 - 0x894u, 8u);
        g->edx = t310;
        t311 = rd32(COW_IMG(0x106693fcu));
        t312 = cow_thiscall(g, COW_IMG(0x102517d0u), t311, 2, 8u, 0u);
        t313 = g->ecx;
        t314 = g->edx;
        if (rd32(COW_IMG(0x10668fe8u)) != 0xffffffffu)
        {
            eax = t312;
            ecx = t313;
            edx = t314;
    COW_AT(1023a764)
            wr32(sp0 - 0x890u, 0u);
            wr32(sp0 - 0x894u, 0u);
            wr32(sp0 - 0x898u, 0u);
            wr32(sp0 - 0x89cu, 0x7fu);
            wr32(sp0 - 0x8a0u, 0x7fu);
            wr32(sp0 - 0x8a4u, 0x78u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x888u;
            cow_cdecl(g, COW_IMG(0x10037350u), 7, 0x78u, 0x7fu, 0x7fu, 0u, 0u, 0u, rd32(sp0 - 0x88cu));
            t320 = g->ecx;
            t321 = g->edx;
            ecx = t320;
            edx = t321;
            loc_878 = rd32(sp0 - 0x878u);
        }
        else
        {
            eax = t312;
            ecx = t313;
            edx = t314;
    COW_AT(1023a74f)
            wr32(sp0 - 0x890u, 0xafu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x88cu;
            t315 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xafu);
            t316 = g->ecx;
            t317 = g->edx;
            wr32(sp0 - 0x894u, t315);
            g->ebx = 0u;
            g->ecx = t316;
            g->edx = t317;
            g->esp = sp0 - 0x890u;
            cow_cdecl(g, COW_IMG(0x10245570u), 1, t315);
            t318 = g->ecx;
            t319 = g->edx;
            ecx = t318;
            edx = t319;
            loc_878 = rd32(sp0 - 0x878u);
        }
    }
L_1023a7c2: ;
    COW_AT(1023a7c2)
    if (rd32(COW_IMG(0x104566e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(1023a7cb)
        wr16(eax + 0x1eu, 1u);
    }
    COW_AT(1023a7cf)
    if (rd32(COW_IMG(0x10668fe8u)) == 0xffffffffu) goto L_1023ab07;
    COW_AT(1023a7dc)
    if (rd32(COW_IMG(0x10456aa4u)) != 0u)
    {
    COW_AT(1023a7e4)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x88cu;
        t342 = cow_stdcall(g, COW_IMG(0x1023e5d0u), 0);
        t343 = g->edx;
        eax = t342;
        edx = t343;
        loc_878 = rd32(sp0 - 0x878u);
    }
    COW_AT(1023a7e9)
    wr32(sp0 - 0x890u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t344 = cow_call_regs(g, COW_IMG(0x10239480u), eax, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 1u);
    t345 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x103502e8u));
    g->ebx = 0u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t346 = rd32(rd32(COW_IMG(0x10668fc8u)) + 0x14u);
    wr32(rd32(COW_IMG(0x10668fd8u)) + 0x1cu, t346);
L_1023a828: ;
    COW_AT(1023a828)
    t347 = rd32(COW_IMG(0x10668fc8u));
    wr32(t347 + 0x20u, 0u);
    wr32(t347 + 0x18u, 0u);
    wr32(t347 + 0x1cu, 0xffffffffu);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x14u, 0u);
    if (rd32(rd32(COW_IMG(0x10669050u)) + 0x24u) == 1u)
    {
        eax = t347;
        edx = rd32(COW_IMG(0x10669050u));
    COW_AT(1023a858)
        wr32(rd32(COW_IMG(0x10669078u)) + 0x2cu, 0x1au);
    }
    else
    {
        edx = rd32(COW_IMG(0x10669050u));
    COW_AT(1023a84e)
        t348 = rd32(COW_IMG(0x10669078u));
        wr32(t348 + 0x2cu, 0x1fu);
        eax = t348;
    }
    COW_AT(1023a861)
    wr32(sp0 - 0x890u, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 0x88cu;
    t349 = cow_thiscall(g, COW_IMG(0x102375a0u), rd32(COW_IMG(0x10668facu)), 1, 0xffffffffu);
    t350 = rd32(rd32(COW_IMG(0x10668fc8u)) + 0x14u);
    wr32(sp0 - 0x890u, t350);
    g->ebx = 0u;
    g->edx = t350;
    t351 = cow_stdcall(g, COW_IMG(0x10238f50u), 1, t350);
    t352 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 1u);
    wr32(sp0 - 0x898u, COW_IMG(0x10388104u));
    g->ebx = 0u;
    g->edx = t352;
    t353 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388104u), 1u, 0u);
    t354 = g->ecx;
    t355 = g->edx;
    eax = t353;
    ecx = t354;
    edx = t355;
L_1023a88e: ;
    COW_AT(1023a88e)
    wr32(sp0 - 0x890u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x884u;
    t356 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u));
    t357 = g->ecx;
    t358 = g->edx;
    if ((int32_t)t356 < 0)
    {
        eax = t356;
        ecx = t357;
        edx = t358;
        goto L_1023ab77;
    }
    ecx = t357;
    edx = t358;
    COW_AT(1023a89f)
    if (rd32(rd32(COW_IMG(0x10668fc8u)) + 0x20u) != 1u)
    {
        eax = rd32(COW_IMG(0x10668fc8u));
        goto L_1023a88e;
    }
    eax = rd32(COW_IMG(0x10668fc8u));
    COW_AT(1023a8a9)
    wr32(sp0 - 0x890u, COW_IMG(0x10388104u));
    t359 = rd32(eax + 0x18u);
    wr32(sp0 - 0x87cu, t359);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t360 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388104u));
    t361 = g->ecx;
    t362 = g->edx;
    if ((int32_t)t359 <= 0)
    {
        eax = t360;
        ecx = t361;
        edx = t362;
        ebp = t359;
        sf = (int32_t)t359 < 0;
        goto L_1023a8e3;
    }
    ecx = t361;
    edx = t362;
    ebp = t359;
    COW_AT(1023a8c3)
    wr32(sp0 - 0x890u, 1u);
    wr32(sp0 - 0x894u, sp0 - 0x800u);
    wr32(sp0 - 0x898u, 0u);
    wr32(sp0 - 0x89cu, 5u);
    g->eax = sp0 - 0x800u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x87cu;
    t363 = cow_cdecl(g, COW_IMG(0x1023e370u), 8, 5u, 0u, sp0 - 0x800u, 1u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u));
    t364 = g->ecx;
    t365 = g->edx;
    if (t363 == 1u) goto L_1023a823;
    eax = t363;
    ecx = t364;
    edx = t365;
    COW_AT(1023a8e1)
    sf = (int32_t)ebp < 0;
L_1023a8e3: ;
    COW_AT(1023a8e3)
    if (!sf) goto L_1023a90a;
    COW_AT(1023a8e5)
    t366 = rd32(COW_IMG(0x103601bcu));
    wr32(COW_IMG(0x10668fe8u), 0u);
    t367 = rd32(t366 + 0x80u);
    wr32(sp0 - 0x890u, t367);
    g->eax = eax;
    g->ecx = t366;
    g->edx = t367;
    g->esp = sp0 - 0x88cu;
    t368 = cow_cdecl(g, COW_IMG(0x1023df00u), 1, t367);
    t369 = g->ecx;
    t370 = g->edx;
    g->edx = t370;
    t371 = cow_stdcall(g, COW_IMG(0x1023dbb0u), 0);
    t372 = g->edx;
    eax = t371;
    edx = t372;
    loc_87c = rd32(sp0 - 0x87cu);
L_1023aa63: ;
    COW_AT(1023aa63)
    wr32(sp0 - 0x890u, COW_IMG(0x103502e8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t425 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103502e8u));
    t426 = g->ecx;
    t427 = g->edx;
    g->ecx = t426;
    g->edx = t427;
    t428 = cow_stdcall(g, COW_IMG(0x1023ac40u), 0);
    t429 = g->ecx;
    t430 = g->edx;
    if ((int32_t)ebp >= 0)
    {
        eax = t428;
        ecx = t429;
        edx = t430;
    }
    else
    {
        eax = t428;
        ecx = t429;
        edx = t430;
    COW_AT(1023aa7b)
        wr32(sp0 - 0x890u, 0x1eu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x88cu;
        t431 = cow_call_regs(g, COW_IMG(0x10037a70u), eax, g->ecx, g->edx, 1, 1, 0x1eu);
        t432 = g->ecx;
        t433 = g->edx;
        eax = t431;
        ecx = t432;
        edx = t433;
    }
    COW_AT(1023aa85)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t434 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t435 = g->ecx;
    t436 = g->edx;
    g->ecx = t435;
    g->edx = t436;
    t437 = cow_stdcall(g, COW_IMG(0x1023ac60u), 0);
    t438 = g->ecx;
    t439 = g->edx;
    g->edx = t439;
    t440 = cow_stdcall(g, COW_IMG(0x1023ac40u), 0);
    t441 = g->edx;
    g->edx = t441;
    t442 = rd32(COW_IMG(0x10668fd8u));
    t443 = cow_thiscall(g, COW_IMG(0x102396f0u), t442, 0);
    t444 = g->ecx;
    t445 = g->edx;
    g->ecx = t444;
    g->edx = t445;
    t446 = cow_stdcall(g, COW_IMG(0x10245500u), 0);
    t447 = g->ecx;
    t448 = g->edx;
    if ((int32_t)ebp <= 0)
    {
        eax = t446;
        edx = t448;
        goto L_102397f9;
    }
    eax = t446;
    ecx = t447;
    edx = t448;
    COW_AT(1023aaac)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t449 = cow_call_regs(g, COW_IMG(0x101ba260u), eax, g->ecx, g->edx, 1, 0);
    t450 = g->ecx;
    t451 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    g->ecx = t450;
    t452 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, t451, 1, 1, 0u);
    t453 = g->ecx;
    t454 = g->edx;
    wr32(sp0 - 0x894u, 0u);
    g->esp = sp0 - 0x890u;
    cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, t454, 1, 1, 0u);
    if (rd32(COW_IMG(0x104566e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(1023aac9)
        wr16(eax + 0x1eu, 1u);
    }
    COW_AT(1023aacf)
    g->ebx = rd32(sp0 - 0x880u);
    g->esi = rd32(sp0 - 0x888u);
    g->edi = rd32(sp0 - 0x88cu);
    g->ebp = rd32(sp0 - 0x884u);
    return 1u;
L_1023a0d9: ;
    COW_AT(1023a0d9)
    wr32(sp0 - 0x890u, COW_IMG(0x10388190u));
    loc_890 = COW_IMG(0x10388190u);
    goto L_1023a114;
L_1023a0e0: ;
    COW_AT(1023a0e0)
    wr32(sp0 - 0x890u, COW_IMG(0x1038817cu));
    loc_890 = COW_IMG(0x1038817cu);
    goto L_1023a114;
L_1023a0e7: ;
    COW_AT(1023a0e7)
    wr32(sp0 - 0x890u, COW_IMG(0x10388168u));
    loc_890 = COW_IMG(0x10388168u);
    goto L_1023a114;
L_1023a0ee: ;
    COW_AT(1023a0ee)
    wr32(sp0 - 0x890u, COW_IMG(0x10388154u));
    loc_890 = COW_IMG(0x10388154u);
    goto L_1023a114;
L_1023a0f5: ;
    COW_AT(1023a0f5)
    wr32(sp0 - 0x890u, COW_IMG(0x1038812cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t218 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038812cu));
    t219 = g->edx;
    g->edi = edi;
    t220 = cow_fastcall(g, COW_IMG(0x1023d920u), rd32(COW_IMG(0x1066901cu)), t219, 0);
    t221 = g->edx;
    wr32(sp0 - 0x890u, COW_IMG(0x10388118u));
    eax = t220;
    edx = t221;
    loc_890 = COW_IMG(0x10388118u);
    loc_87c = rd32(sp0 - 0x87cu);
    goto L_1023a114;
L_1023a14d: ;
    COW_AT(1023a14d)
    if (eax != 6u) goto L_1023a6db;
    COW_AT(1023a156)
    wr32(COW_IMG(0x10668fe8u), eax + edi);
    if (eax + edi != 7u)
    {
        loc_878 = rd32(sp0 - 0x878u);
        goto L_1023a6e2;
    }
    COW_AT(1023a167)
    wr32(sp0 - 0x890u, COW_IMG(0x10388140u));
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388140u));
    t226 = g->ecx;
    t227 = g->edx;
    eax = sp0 - 0x800u;
    ecx = t226;
    edx = t227;
    esi = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
L_1023a185: ;
    COW_AT(1023a185)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1023a1a9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1023a18d)
    if ((uint8_t)ecx == 0u) goto L_1023a1a5;
    COW_AT(1023a191)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1023a1a9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1023a19b)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023a185;
    }
L_1023a1a5: ;
    COW_AT(1023a1a5)
    eax = 0u;
L_1023a1ae: ;
    COW_AT(1023a1ae)
    if (eax != 0u) goto L_1023a22e;
    COW_AT(1023a1b2)
    eax = sp0 - 0x600u;
    esi = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
L_1023a1c1: ;
    COW_AT(1023a1c1)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1023a1e5;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1023a1c9)
    if ((uint8_t)ecx == 0u) goto L_1023a1e1;
    COW_AT(1023a1cd)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1023a1e5;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1023a1d7)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023a1c1;
    }
L_1023a1e1: ;
    COW_AT(1023a1e1)
    eax = 0u;
L_1023a1ea: ;
    COW_AT(1023a1ea)
    if (eax != 0u) goto L_1023a22e;
    COW_AT(1023a1ee)
    eax = sp0 - 0x700u;
    esi = rd32(COW_IMG(0x10668fd0u)) + 0x18u;
L_1023a1fd: ;
    COW_AT(1023a1fd)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1023a221;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1023a205)
    if ((uint8_t)ecx == 0u) goto L_1023a21d;
    COW_AT(1023a209)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1023a221;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1023a213)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023a1fd;
    }
L_1023a21d: ;
    COW_AT(1023a21d)
    eax = 0u;
L_1023a226: ;
    COW_AT(1023a226)
    if (eax == 0u)
    {
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        goto L_1023a6e2;
    }
L_1023a22e: ;
    COW_AT(1023a22e)
    t228 = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    wr32(sp0 - 0x890u, t228);
    g->eax = t228;
    g->esp = sp0 - 0x88cu;
    t229 = cow_cdecl(g, COW_IMG(0x1023adb0u), 1, t228);
    if (t229 == 0u)
    {
        esi = t229;
    COW_AT(1023a25c)
        wr8(rd32(COW_IMG(0x10668fccu)) + 0x2cu, 0u);
    }
    else
    {
        eax = t229;
        esi = t229;
    COW_AT(1023a245)
        ecx = esi;
        edx = rd32(COW_IMG(0x10668fccu)) + 0x2cu;
L_1023a250: ;
    COW_AT(1023a250)
        t230 = rd8(ecx);
        wr8(edx, (uint8_t)t230);
        if ((uint8_t)t230 != 0u)
        {
            eax = (eax & 0xffffff00u) | t230;
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_1023a250;
        }
    COW_AT(1023a25a)
    }
    COW_AT(1023a264)
    t231 = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    edi = t231;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        edx = t231;
        goto L_1023a283;
    }
    ecx = ~ecx - 1u;
    edx = t231;
    COW_AT(1023a27b)
    if (esi != 0u) goto L_1023a283;
    COW_AT(1023a27f)
    wr32(sp0 - 0x890u, 0x76u);
    loc_890 = 0x76u;
L_1023a2ca: ;
    COW_AT(1023a2ca)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, loc_890);
    t233 = g->ecx;
    t234 = g->edx;
    wr32(COW_IMG(0x10668fe8u), 6u);
    ecx = t233;
    edx = t234;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_1023a6e2;
L_1023a1a9: ;
    COW_AT(1023a1a9)
    eax = -cf + 1u - cf;
    goto L_1023a1ae;
L_1023a1e5: ;
    COW_AT(1023a1e5)
    eax = -cf + 1u - cf;
    goto L_1023a1ea;
L_1023a221: ;
    COW_AT(1023a221)
    eax = -cf + 1u - cf;
    goto L_1023a226;
L_1023a283: ;
    COW_AT(1023a283)
    t232 = rd32(COW_IMG(0x10668fd0u));
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        edx = t232;
        goto L_1023a2a8;
    }
    ecx = ~ecx - 1u;
    edx = t232;
    COW_AT(1023a297)
    edi = edx + 0x18u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_1023a2a8;
    }
    ecx = ~ecx - 1u;
    COW_AT(1023a2a4)
    wr32(sp0 - 0x890u, 0x77u);
    loc_890 = 0x77u;
    goto L_1023a2ca;
L_1023a2a8: ;
    COW_AT(1023a2a8)
    edi = edx + 0x18u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 0xau)
    {
        ecx = ~ecx - 1u;
        goto L_1023a2e1;
    }
    ecx = ~ecx - 1u;
    edx = edx + 0x18u;
    COW_AT(1023a2bc)
    edi = edx;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_1023a2e1;
    }
    ecx = ~ecx - 1u;
    COW_AT(1023a2c8)
    wr32(sp0 - 0x890u, 0x6fu);
    loc_890 = 0x6fu;
    goto L_1023a2ca;
L_1023a2e1: ;
    COW_AT(1023a2e1)
    t235 = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    edi = t235;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 3u)
    {
        ecx = ~ecx - 1u;
        edx = t235;
        goto L_1023a302;
    }
    ecx = ~ecx - 1u;
    edx = t235;
    COW_AT(1023a2fb)
    wr32(sp0 - 0x890u, 0x6eu);
    loc_890 = 0x6eu;
L_1023a394: ;
    COW_AT(1023a394)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, loc_890);
    t240 = g->ecx;
    t241 = g->edx;
    wr32(COW_IMG(0x10668fe8u), 5u);
    ecx = t240;
    edx = t241;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_1023a6e2;
L_1023a302: ;
    COW_AT(1023a302)
    wr32(sp0 - 0x890u, edx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t236 = cow_call_regs(g, COW_IMG(0x101ba240u), eax, g->ecx, g->edx, 1, 1, edx);
    t237 = g->ecx;
    t238 = g->edx;
    if (t236 == 0u)
    {
        ecx = t237;
        edx = t238;
        goto L_1023a316;
    }
    eax = t236;
    ecx = t237;
    edx = t238;
    COW_AT(1023a30f)
    wr32(sp0 - 0x890u, 0x142u);
    loc_890 = 0x142u;
    goto L_1023a394;
L_1023a316: ;
    COW_AT(1023a316)
    eax = sp0 - 0x500u;
    esi = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
L_1023a325: ;
    COW_AT(1023a325)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1023a349;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1023a32d)
    if ((uint8_t)ecx == 0u) goto L_1023a345;
    COW_AT(1023a331)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1023a349;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1023a33b)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023a325;
    }
L_1023a345: ;
    COW_AT(1023a345)
    eax = 0u;
L_1023a34e: ;
    COW_AT(1023a34e)
    if (eax != 0u)
    {
        ebp = rd32(COW_IMG(0x10668fccu));
        goto L_1023a3ab;
    }
    ebp = rd32(COW_IMG(0x10668fccu));
    COW_AT(1023a358)
    eax = sp0 - 0x400u;
    esi = ebp + 0x1cu;
L_1023a362: ;
    COW_AT(1023a362)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1023a386;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(1023a36a)
    if ((uint8_t)ecx == 0u) goto L_1023a382;
    COW_AT(1023a36e)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1023a386;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1023a378)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023a362;
    }
L_1023a382: ;
    COW_AT(1023a382)
    eax = 0u;
L_1023a38b: ;
    COW_AT(1023a38b)
    if (eax != 0u) goto L_1023a3ab;
    COW_AT(1023a38f)
    t239 = rd32(sp0 - 0x878u);
    wr32(sp0 - 0x890u, t239);
    eax = t239;
    loc_890 = t239;
    goto L_1023a394;
L_1023a349: ;
    COW_AT(1023a349)
    eax = -cf + 1u - cf;
    goto L_1023a34e;
L_1023a386: ;
    COW_AT(1023a386)
    eax = -cf + 1u - cf;
    goto L_1023a38b;
L_1023a3ab: ;
    COW_AT(1023a3ab)
    edi = rd32(COW_IMG(0x10668fd0u)) + 0x18u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_1023a559;
    }
    ecx = ~ecx - 1u;
    COW_AT(1023a3c4)
    edi = ebp + 0x1cu;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_1023a559;
    }
    ecx = ~ecx - 1u;
    COW_AT(1023a3d5)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 4u);
    wr32(sp0 - 0x898u, 0u);
    wr32(sp0 - 0x89cu, 1u);
    wr32(sp0 - 0x8a0u, 0u);
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x774u;
    t242 = cow_bridge_indirect(g, COW_IMG(0x1023b550u), 0u, 75u, (const uint32_t[]){0u, 1u, 0u, 4u, 0u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u), rd32(sp0 - 0x87cu), rd32(sp0 - 0x878u), rd32(sp0 - 0x874u), rd32(sp0 - 0x870u), rd32(sp0 - 0x86cu), rd32(sp0 - 0x868u), rd32(sp0 - 0x864u), rd32(sp0 - 0x860u), rd32(sp0 - 0x85cu), rd32(sp0 - 0x858u), rd32(sp0 - 0x854u), rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu), rd32(sp0 - 0x848u), rd32(sp0 - 0x844u), rd32(sp0 - 0x840u), rd32(sp0 - 0x83cu), rd32(sp0 - 0x838u), rd32(sp0 - 0x834u), rd32(sp0 - 0x830u), rd32(sp0 - 0x82cu), rd32(sp0 - 0x828u), rd32(sp0 - 0x824u), rd32(sp0 - 0x820u), rd32(sp0 - 0x81cu), rd32(sp0 - 0x818u), rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u), rd32(sp0 - 0x800u), rd32(sp0 - 0x7fcu), rd32(sp0 - 0x7f8u), rd32(sp0 - 0x7f4u), rd32(sp0 - 0x7f0u), rd32(sp0 - 0x7ecu), rd32(sp0 - 0x7e8u), rd32(sp0 - 0x7e4u), rd32(sp0 - 0x7e0u), rd32(sp0 - 0x7dcu), rd32(sp0 - 0x7d8u), rd32(sp0 - 0x7d4u), rd32(sp0 - 0x7d0u), rd32(sp0 - 0x7ccu), rd32(sp0 - 0x7c8u), rd32(sp0 - 0x7c4u), rd32(sp0 - 0x7c0u), rd32(sp0 - 0x7bcu), rd32(sp0 - 0x7b8u), rd32(sp0 - 0x7b4u), rd32(sp0 - 0x7b0u), rd32(sp0 - 0x7acu), rd32(sp0 - 0x7a8u), rd32(sp0 - 0x7a4u), rd32(sp0 - 0x7a0u), rd32(sp0 - 0x79cu), rd32(sp0 - 0x798u), rd32(sp0 - 0x794u), rd32(sp0 - 0x790u), rd32(sp0 - 0x78cu), rd32(sp0 - 0x788u), rd32(sp0 - 0x784u), rd32(sp0 - 0x780u), rd32(sp0 - 0x77cu), rd32(sp0 - 0x778u)}, g->ecx, g->edx, g->eax, 300u);
    t243 = g->ecx;
    t244 = g->edx;
    if ((int32_t)t242 >= 0)
    {
        ecx = t243;
        goto L_1023a4d5;
    }
    eax = t242;
    ecx = t243;
    edx = t244;
    COW_AT(1023a3ec)
    if (eax == 0xfffffffeu) goto L_1023ab77;
    COW_AT(1023a3f5)
    g->eax = eax;
    g->edx = edx;
    t245 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t246 = cow_thiscall(g, COW_IMG(0x100db130u), t245, 0);
    t247 = g->ecx;
    t248 = g->edx;
    if (t246 == 0x14bu)
    {
        eax = t246;
        ecx = t247;
        edx = t248;
        goto L_1023ab77;
    }
    eax = t246;
    edx = t248;
    COW_AT(1023a40b)
    t249 = rd32(COW_IMG(0x103601bcu));
    wr32(COW_IMG(0x10668fe8u), 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t250 = cow_thiscall(g, COW_IMG(0x100db130u), t249, 0);
    t251 = g->ecx;
    t252 = g->edx;
    if (t250 == 0x139u)
    {
        ecx = t251;
        goto L_1023a439;
    }
    eax = t250;
    edx = t252;
    COW_AT(1023a427)
    g->eax = eax;
    g->edx = edx;
    t253 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t254 = cow_thiscall(g, COW_IMG(0x100db130u), t253, 0);
    t255 = g->ecx;
    t256 = g->edx;
    if (t254 != 0x142u)
    {
        ecx = t255;
        edx = t256;
        loc_878 = rd32(sp0 - 0x878u);
        goto L_1023a49d;
    }
    ecx = t255;
L_1023a439: ;
    COW_AT(1023a439)
    eax = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    edx = sp0 - 0x500u - (rd32(COW_IMG(0x10668fc4u)) + 0x14u);
L_1023a44b: ;
    COW_AT(1023a44b)
    t257 = rd8(eax);
    wr8(eax + edx, (uint8_t)t257);
    if ((uint8_t)t257 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t257;
        goto L_1023a44b;
    }
    ecx = (ecx & 0xffffff00u) | t257;
    COW_AT(1023a455)
    eax = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    edx = sp0 - 0x400u - (rd32(COW_IMG(0x10668fccu)) + 0x1cu);
L_1023a466: ;
    COW_AT(1023a466)
    t258 = rd8(eax);
    wr8(eax + edx, (uint8_t)t258);
    if ((uint8_t)t258 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t258;
        goto L_1023a466;
    }
    eax = eax + 1u;
    COW_AT(1023a470)
    g->eax = eax;
    g->edx = edx;
    t259 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t260 = cow_thiscall(g, COW_IMG(0x100db130u), t259, 0);
    t261 = g->ecx;
    t262 = g->edx;
    wr32(sp0 - 0x878u, t260);
    wr32(COW_IMG(0x10668fe8u), 5u);
    eax = 0u;
    ecx = t261;
    edx = t262;
    loc_878 = t260;
L_1023a48b: ;
    COW_AT(1023a48b)
    t263 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x800u, (uint8_t)t263);
    if ((uint8_t)t263 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t263;
        goto L_1023a48b;
    }
    ecx = (ecx & 0xffffff00u) | t263;
L_1023a49d: ;
    COW_AT(1023a49d)
    eax = 0u;
L_1023a49f: ;
    COW_AT(1023a49f)
    t264 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x600u, (uint8_t)t264);
    if ((uint8_t)t264 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t264;
        goto L_1023a49f;
    }
    ecx = (ecx & 0xffffff00u) | t264;
    COW_AT(1023a4b1)
    eax = 0u;
L_1023a4b3: ;
    COW_AT(1023a4b3)
    t265 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x700u, (uint8_t)t265);
    if ((uint8_t)t265 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t265;
        goto L_1023a4b3;
    }
    eax = eax + 1u;
    COW_AT(1023a4c5)
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t266 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    cow_stdcall(g, COW_IMG(0x100dbc60u), 0);
    t267 = g->ecx;
    t268 = g->edx;
    ecx = t267;
    edx = t268;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_1023a6e2;
L_1023a4d5: ;
    COW_AT(1023a4d5)
    eax = 0u;
L_1023a4d7: ;
    COW_AT(1023a4d7)
    t269 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x500u, (uint8_t)t269);
    if ((uint8_t)t269 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t269;
        goto L_1023a4d7;
    }
    ecx = (ecx & 0xffffff00u) | t269;
    COW_AT(1023a4e9)
    eax = 0u;
L_1023a4eb: ;
    COW_AT(1023a4eb)
    t270 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x400u, (uint8_t)t270);
    if ((uint8_t)t270 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t270;
        goto L_1023a4eb;
    }
    COW_AT(1023a4fd)
    wr32(sp0 - 0x878u, 0u);
    eax = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    ecx = rd32(COW_IMG(0x10668fc4u));
    edx = sp0 - 0x800u - (rd32(COW_IMG(0x10668fc4u)) + 0x14u);
L_1023a513: ;
    COW_AT(1023a513)
    t271 = rd8(eax);
    wr8(eax + edx, (uint8_t)t271);
    if ((uint8_t)t271 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t271;
        goto L_1023a513;
    }
    ecx = (ecx & 0xffffff00u) | t271;
    COW_AT(1023a51d)
    eax = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    edx = sp0 - 0x600u - (rd32(COW_IMG(0x10668fccu)) + 0x1cu);
L_1023a52f: ;
    COW_AT(1023a52f)
    t272 = rd8(eax);
    wr8(eax + edx, (uint8_t)t272);
    if ((uint8_t)t272 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t272;
        goto L_1023a52f;
    }
    ecx = (ecx & 0xffffff00u) | t272;
    COW_AT(1023a539)
    eax = rd32(COW_IMG(0x10668fd0u)) + 0x18u;
    edx = sp0 - 0x700u - (rd32(COW_IMG(0x10668fd0u)) + 0x18u);
L_1023a54a: ;
    COW_AT(1023a54a)
    t273 = rd8(eax);
    wr8(eax + edx, (uint8_t)t273);
    if ((uint8_t)t273 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t273;
        goto L_1023a54a;
    }
    ecx = (ecx & 0xffffff00u) | t273;
    COW_AT(1023a554)
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = 0u;
    goto L_1023a6e2;
L_1023a559: ;
    COW_AT(1023a559)
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x894u, 4u);
    wr32(sp0 - 0x898u, 0u);
    wr32(sp0 - 0x89cu, 1u);
    wr32(sp0 - 0x8a0u, 0u);
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x774u;
    t274 = cow_bridge_indirect(g, COW_IMG(0x1023b550u), 0u, 75u, (const uint32_t[]){0u, 1u, 0u, 4u, 0u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u), rd32(sp0 - 0x87cu), rd32(sp0 - 0x878u), rd32(sp0 - 0x874u), rd32(sp0 - 0x870u), rd32(sp0 - 0x86cu), rd32(sp0 - 0x868u), rd32(sp0 - 0x864u), rd32(sp0 - 0x860u), rd32(sp0 - 0x85cu), rd32(sp0 - 0x858u), rd32(sp0 - 0x854u), rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu), rd32(sp0 - 0x848u), rd32(sp0 - 0x844u), rd32(sp0 - 0x840u), rd32(sp0 - 0x83cu), rd32(sp0 - 0x838u), rd32(sp0 - 0x834u), rd32(sp0 - 0x830u), rd32(sp0 - 0x82cu), rd32(sp0 - 0x828u), rd32(sp0 - 0x824u), rd32(sp0 - 0x820u), rd32(sp0 - 0x81cu), rd32(sp0 - 0x818u), rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u), rd32(sp0 - 0x800u), rd32(sp0 - 0x7fcu), rd32(sp0 - 0x7f8u), rd32(sp0 - 0x7f4u), rd32(sp0 - 0x7f0u), rd32(sp0 - 0x7ecu), rd32(sp0 - 0x7e8u), rd32(sp0 - 0x7e4u), rd32(sp0 - 0x7e0u), rd32(sp0 - 0x7dcu), rd32(sp0 - 0x7d8u), rd32(sp0 - 0x7d4u), rd32(sp0 - 0x7d0u), rd32(sp0 - 0x7ccu), rd32(sp0 - 0x7c8u), rd32(sp0 - 0x7c4u), rd32(sp0 - 0x7c0u), rd32(sp0 - 0x7bcu), rd32(sp0 - 0x7b8u), rd32(sp0 - 0x7b4u), rd32(sp0 - 0x7b0u), rd32(sp0 - 0x7acu), rd32(sp0 - 0x7a8u), rd32(sp0 - 0x7a4u), rd32(sp0 - 0x7a0u), rd32(sp0 - 0x79cu), rd32(sp0 - 0x798u), rd32(sp0 - 0x794u), rd32(sp0 - 0x790u), rd32(sp0 - 0x78cu), rd32(sp0 - 0x788u), rd32(sp0 - 0x784u), rd32(sp0 - 0x780u), rd32(sp0 - 0x77cu), rd32(sp0 - 0x778u)}, g->ecx, g->edx, g->eax, 300u);
    t275 = g->ecx;
    t276 = g->edx;
    if ((int32_t)t274 >= 0)
    {
        ecx = t275;
        goto L_1023a65a;
    }
    eax = t274;
    ecx = t275;
    edx = t276;
    COW_AT(1023a570)
    if (eax == 0xfffffffeu) goto L_1023ab77;
    COW_AT(1023a579)
    g->eax = eax;
    g->edx = edx;
    t277 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t278 = cow_thiscall(g, COW_IMG(0x100db130u), t277, 0);
    t279 = g->ecx;
    t280 = g->edx;
    if (t278 == 0x14bu)
    {
        eax = t278;
        ecx = t279;
        edx = t280;
        goto L_1023ab77;
    }
    eax = t278;
    edx = t280;
    COW_AT(1023a58f)
    t281 = rd32(COW_IMG(0x103601bcu));
    wr32(COW_IMG(0x10668fe8u), 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t282 = cow_thiscall(g, COW_IMG(0x100db130u), t281, 0);
    t283 = g->edx;
    if (t282 == 0x139u) goto L_1023a5bd;
    eax = t282;
    edx = t283;
    COW_AT(1023a5ab)
    g->eax = eax;
    g->edx = edx;
    t284 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t285 = cow_thiscall(g, COW_IMG(0x100db130u), t284, 0);
    t286 = g->ecx;
    t287 = g->edx;
    if (t285 != 0x142u)
    {
        ecx = t286;
        edx = t287;
        loc_878 = rd32(sp0 - 0x878u);
        goto L_1023a622;
    }
L_1023a5bd: ;
    COW_AT(1023a5bd)
    eax = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    ecx = rd32(COW_IMG(0x10668fc4u));
    edx = sp0 - 0x500u - (rd32(COW_IMG(0x10668fc4u)) + 0x14u);
L_1023a5cf: ;
    COW_AT(1023a5cf)
    t288 = rd8(eax);
    wr8(eax + edx, (uint8_t)t288);
    if ((uint8_t)t288 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t288;
        goto L_1023a5cf;
    }
    ecx = (ecx & 0xffffff00u) | t288;
    COW_AT(1023a5d9)
    eax = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    edx = sp0 - 0x400u - (rd32(COW_IMG(0x10668fccu)) + 0x1cu);
L_1023a5eb: ;
    COW_AT(1023a5eb)
    t289 = rd8(eax);
    wr8(eax + edx, (uint8_t)t289);
    if ((uint8_t)t289 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t289;
        goto L_1023a5eb;
    }
    eax = eax + 1u;
    COW_AT(1023a5f5)
    g->eax = eax;
    g->edx = edx;
    t290 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t291 = cow_thiscall(g, COW_IMG(0x100db130u), t290, 0);
    t292 = g->ecx;
    t293 = g->edx;
    wr32(sp0 - 0x878u, t291);
    wr32(COW_IMG(0x10668fe8u), 5u);
    eax = 0u;
    ecx = t292;
    edx = t293;
    loc_878 = t291;
L_1023a610: ;
    COW_AT(1023a610)
    t294 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x800u, (uint8_t)t294);
    if ((uint8_t)t294 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t294;
        goto L_1023a610;
    }
    ecx = (ecx & 0xffffff00u) | t294;
L_1023a622: ;
    COW_AT(1023a622)
    eax = 0u;
L_1023a624: ;
    COW_AT(1023a624)
    t295 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x600u, (uint8_t)t295);
    if ((uint8_t)t295 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t295;
        goto L_1023a624;
    }
    ecx = (ecx & 0xffffff00u) | t295;
    COW_AT(1023a636)
    eax = 0u;
L_1023a638: ;
    COW_AT(1023a638)
    t296 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x700u, (uint8_t)t296);
    if ((uint8_t)t296 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t296;
        goto L_1023a638;
    }
    eax = eax + 1u;
    COW_AT(1023a64a)
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t297 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    cow_stdcall(g, COW_IMG(0x100dbc60u), 0);
    t298 = g->ecx;
    t299 = g->edx;
    ecx = t298;
    edx = t299;
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_1023a6e2;
L_1023a65a: ;
    COW_AT(1023a65a)
    eax = 0u;
L_1023a65c: ;
    COW_AT(1023a65c)
    t300 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x500u, (uint8_t)t300);
    if ((uint8_t)t300 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t300;
        goto L_1023a65c;
    }
    ecx = (ecx & 0xffffff00u) | t300;
    COW_AT(1023a66e)
    eax = 0u;
L_1023a670: ;
    COW_AT(1023a670)
    t301 = rd8(COW_IMG(0x1034f2b8u) + eax);
    wr8(eax + sp0 - 0x400u, (uint8_t)t301);
    if ((uint8_t)t301 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t301;
        goto L_1023a670;
    }
    ecx = (ecx & 0xffffff00u) | t301;
    COW_AT(1023a682)
    wr32(sp0 - 0x878u, 0u);
    eax = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    edx = sp0 - 0x800u - (rd32(COW_IMG(0x10668fc4u)) + 0x14u);
L_1023a697: ;
    COW_AT(1023a697)
    t302 = rd8(eax);
    wr8(eax + edx, (uint8_t)t302);
    if ((uint8_t)t302 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t302;
        goto L_1023a697;
    }
    COW_AT(1023a6a1)
    eax = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    ecx = rd32(COW_IMG(0x10668fccu));
    edx = sp0 - 0x600u - (rd32(COW_IMG(0x10668fccu)) + 0x1cu);
L_1023a6b3: ;
    COW_AT(1023a6b3)
    t303 = rd8(eax);
    wr8(eax + edx, (uint8_t)t303);
    if ((uint8_t)t303 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t303;
        goto L_1023a6b3;
    }
    ecx = (ecx & 0xffffff00u) | t303;
    COW_AT(1023a6bd)
    eax = rd32(COW_IMG(0x10668fd0u)) + 0x18u;
    edx = sp0 - 0x700u - (rd32(COW_IMG(0x10668fd0u)) + 0x18u);
L_1023a6cf: ;
    COW_AT(1023a6cf)
    t304 = rd8(eax);
    wr8(eax + edx, (uint8_t)t304);
    if ((uint8_t)t304 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t304;
        goto L_1023a6cf;
    }
    ecx = (ecx & 0xffffff00u) | t304;
    COW_AT(1023a6d9)
    loc_87c = rd32(sp0 - 0x87cu);
    loc_878 = 0u;
    goto L_1023a6e2;
L_1023a6db: ;
    COW_AT(1023a6db)
    wr32(COW_IMG(0x10668fe8u), eax + edi);
    loc_878 = rd32(sp0 - 0x878u);
    goto L_1023a6e2;
L_1023a823: ;
    COW_AT(1023a823)
    goto L_1023a828;
L_1023a90a: ;
    COW_AT(1023a90a)
    wr32(sp0 - 0x890u, sp0 - 0x800u);
    wr32(sp0 - 0x894u, 0u);
    wr32(sp0 - 0x898u, 0u);
    wr32(sp0 - 0x89cu, 1u);
    g->eax = sp0 - 0x800u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t373 = cow_cdecl(g, COW_IMG(0x10114b10u), 4, 1u, 0u, 0u, sp0 - 0x800u);
    t374 = g->ecx;
    t375 = g->edx;
    wr32(sp0 - 0x8a0u, 0u);
    wr32(sp0 - 0x8a4u, 3u);
    wr32(sp0 - 0x8a8u, 0u);
    wr32(sp0 - 0x8acu, 1u);
    wr32(sp0 - 0x8b0u, 0u);
    g->ebp = ebp;
    g->ecx = t374;
    g->edx = t375;
    g->esp = sp0 - 0x784u;
    t376 = cow_bridge_indirect(g, COW_IMG(0x1023b550u), 0u, 75u, (const uint32_t[]){0u, 1u, 0u, 3u, 0u, 1u, 0u, 0u, sp0 - 0x800u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u), rd32(sp0 - 0x87cu), rd32(sp0 - 0x878u), rd32(sp0 - 0x874u), rd32(sp0 - 0x870u), rd32(sp0 - 0x86cu), rd32(sp0 - 0x868u), rd32(sp0 - 0x864u), rd32(sp0 - 0x860u), rd32(sp0 - 0x85cu), rd32(sp0 - 0x858u), rd32(sp0 - 0x854u), rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu), rd32(sp0 - 0x848u), rd32(sp0 - 0x844u), rd32(sp0 - 0x840u), rd32(sp0 - 0x83cu), rd32(sp0 - 0x838u), rd32(sp0 - 0x834u), rd32(sp0 - 0x830u), rd32(sp0 - 0x82cu), rd32(sp0 - 0x828u), rd32(sp0 - 0x824u), rd32(sp0 - 0x820u), rd32(sp0 - 0x81cu), rd32(sp0 - 0x818u), rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u), rd32(sp0 - 0x800u), rd32(sp0 - 0x7fcu), rd32(sp0 - 0x7f8u), rd32(sp0 - 0x7f4u), rd32(sp0 - 0x7f0u), rd32(sp0 - 0x7ecu), rd32(sp0 - 0x7e8u), rd32(sp0 - 0x7e4u), rd32(sp0 - 0x7e0u), rd32(sp0 - 0x7dcu), rd32(sp0 - 0x7d8u), rd32(sp0 - 0x7d4u), rd32(sp0 - 0x7d0u), rd32(sp0 - 0x7ccu), rd32(sp0 - 0x7c8u), rd32(sp0 - 0x7c4u), rd32(sp0 - 0x7c0u), rd32(sp0 - 0x7bcu), rd32(sp0 - 0x7b8u), rd32(sp0 - 0x7b4u), rd32(sp0 - 0x7b0u), rd32(sp0 - 0x7acu), rd32(sp0 - 0x7a8u), rd32(sp0 - 0x7a4u), rd32(sp0 - 0x7a0u), rd32(sp0 - 0x79cu), rd32(sp0 - 0x798u), rd32(sp0 - 0x794u), rd32(sp0 - 0x790u), rd32(sp0 - 0x78cu), rd32(sp0 - 0x788u)}, g->ecx, g->edx, g->eax, 300u);
    t377 = g->ecx;
    t378 = g->edx;
    if ((int32_t)t376 >= 0)
    {
        eax = t376;
        ecx = t377;
        edx = t378;
        goto L_1023a99b;
    }
    eax = t376;
    ecx = t377;
    edx = t378;
    COW_AT(1023a92e)
    if (eax == 0xfffffffeu) goto L_1023ab77;
    COW_AT(1023a937)
    g->eax = eax;
    g->edx = edx;
    t379 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x88cu;
    t380 = cow_thiscall(g, COW_IMG(0x100db130u), t379, 0);
    t381 = g->ecx;
    t382 = g->edx;
    if (t380 == 0x14bu)
    {
        eax = t380;
        ecx = t381;
        edx = t382;
        goto L_1023ab77;
    }
    ecx = t381;
    edx = t382;
    COW_AT(1023a94d)
    wr32(COW_IMG(0x10668fe8u), 0u);
    wr32(sp0 - 0x87cu, 0xffffffffu);
    eax = 0u;
L_1023a95c: ;
    COW_AT(1023a95c)
    t383 = rd8(COW_IMG(0x103d3c84u) + eax);
    wr8(eax + sp0 - 0x800u, (uint8_t)t383);
    if ((uint8_t)t383 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t383;
        goto L_1023a95c;
    }
    ecx = (ecx & 0xffffff00u) | t383;
    COW_AT(1023a96e)
    eax = 0u;
L_1023a970: ;
    COW_AT(1023a970)
    t384 = rd8(COW_IMG(0x103d3c84u) + eax);
    wr8(eax + sp0 - 0x600u, (uint8_t)t384);
    if ((uint8_t)t384 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t384;
        goto L_1023a970;
    }
    ecx = (ecx & 0xffffff00u) | t384;
    COW_AT(1023a982)
    eax = 0u;
L_1023a984: ;
    COW_AT(1023a984)
    t385 = rd8(COW_IMG(0x103d3c84u) + eax);
    wr8(eax + sp0 - 0x700u, (uint8_t)t385);
    if ((uint8_t)t385 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t385;
        goto L_1023a984;
    }
    eax = eax + 1u;
    COW_AT(1023a996)
    ebp = 0xffffffffu;
    loc_87c = 0xffffffffu;
    goto L_1023aa63;
L_1023a99b: ;
    COW_AT(1023a99b)
    esi = 0u;
L_1023a99d: ;
    COW_AT(1023a99d)
    wr32(sp0 - 0x890u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x884u;
    t386 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u));
    t387 = g->edx;
    g->edx = t387;
    g->esp = sp0 - 0x88cu;
    t388 = cow_thiscall(g, COW_IMG(0x101c4cd0u), rd32(COW_IMG(0x10662dccu)), 0);
    t389 = g->edx;
    if ((uint8_t)t388 != 1u)
    {
        eax = t388;
        edx = t389;
        goto L_1023a9d9;
    }
    edx = t389;
    COW_AT(1023a9b5)
    t390 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    wr32(sp0 - 0x890u, t390);
    g->eax = t390;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t391 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t390);
    t392 = g->edx;
    wr32(sp0 - 0x890u, t391);
    g->edx = t392;
    t393 = rd32(COW_IMG(0x10662dccu));
    t394 = cow_thiscall(g, COW_IMG(0x101c4ce0u), t393, 1, t391);
    t395 = g->ecx;
    t396 = g->edx;
    if ((int32_t)t394 >= 0)
    {
        eax = t394;
        ecx = t395;
        edx = t396;
        goto L_1023a9ea;
    }
    eax = t394;
    ecx = t395;
    edx = t396;
    COW_AT(1023a9d7)
L_1023a9e4: ;
    COW_AT(1023a9e4)
    if ((int32_t)(esi + 1u) < 5)
    {
        esi = esi + 1u;
        goto L_1023a99d;
    }
    esi = esi + 1u;
L_1023a9ea: ;
    COW_AT(1023a9ea)
    if (esi == 5u) goto L_1023ab5b;
    COW_AT(1023a9f3)
    t401 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    wr32(sp0 - 0x890u, t401);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t402 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t401);
    t403 = g->edx;
    wr32(sp0 - 0x890u, t402);
    wr32(sp0 - 0x894u, t401);
    g->edx = t403;
    g->esp = sp0 - 0x890u;
    t404 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t401);
    t405 = g->edx;
    wr32(sp0 - 0x894u, t404);
    wr32(sp0 - 0x898u, t401);
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = t405;
    t406 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x894u;
    t407 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t401);
    t408 = g->ecx;
    t409 = g->edx;
    wr32(sp0 - 0x898u, t407);
    wr32(sp0 - 0x89cu, 1u);
    g->edx = t409;
    g->esp = sp0 - 0x88cu;
    t410 = cow_cdecl(g, COW_IMG(0x10114b10u), 4, 1u, t407, rd32(sp0 - 0x894u), rd32(sp0 - 0x890u));
    t411 = g->edx;
    wr32(sp0 - 0x890u, t401);
    g->edx = t411;
    t412 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t401);
    t413 = g->edx;
    wr32(sp0 - 0x890u, t401);
    g->edx = t413;
    t414 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t401);
    t415 = g->edx;
    wr32(sp0 - 0x890u, t401);
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = t415;
    t416 = rd32(COW_IMG(0x103601bcu));
    t417 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t401);
    t418 = g->ecx;
    t419 = g->edx;
    wr32(sp0 - 0x890u, 0x82u);
    wr32(sp0 - 0x894u, 8u);
    g->ecx = t418;
    g->edx = t419;
    t420 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x82u);
    t421 = g->ecx;
    t422 = g->edx;
    wr32(sp0 - 0x898u, t420);
    g->ebx = 0u;
    g->edx = t422;
    g->esp = sp0 - 0x894u;
    t423 = cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t420);
    t424 = g->edx;
    eax = t423;
    edx = t424;
    loc_87c = rd32(sp0 - 0x87cu);
    goto L_1023aa63;
L_1023a9d9: ;
    COW_AT(1023a9d9)
    g->eax = eax;
    g->edx = edx;
    t397 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x88cu;
    t398 = cow_thiscall(g, COW_IMG(0x101c4d10u), t397, 0);
    t399 = g->ecx;
    t400 = g->edx;
    eax = t398;
    ecx = t399;
    edx = t400;
    goto L_1023a9e4;
L_1023aadf: ;
    COW_AT(1023aadf)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t485 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t486 = g->ecx;
    t487 = g->edx;
    wr32(sp0 - 0x890u, t485);
    g->ecx = t486;
    g->edx = t487;
    t488 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, t485);
    t489 = g->ecx;
    t490 = g->edx;
    eax = t488;
    ecx = t489;
    edx = t490;
L_1023ab77: ;
    COW_AT(1023ab77)
    wr32(COW_IMG(0x10668fe4u), 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t491 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t492 = g->ecx;
    t493 = g->edx;
    g->ecx = t492;
    g->edx = t493;
    t494 = cow_stdcall(g, COW_IMG(0x1023ac60u), 0);
    t495 = g->ecx;
    t496 = g->edx;
    g->edx = t496;
    t497 = cow_stdcall(g, COW_IMG(0x1023ac40u), 0);
    t498 = g->edx;
    g->edx = t498;
    t499 = rd32(COW_IMG(0x10668fd8u));
    t500 = cow_thiscall(g, COW_IMG(0x102396f0u), t499, 0);
    t501 = g->ecx;
    t502 = g->edx;
    g->ecx = t501;
    g->edx = t502;
    t503 = cow_stdcall(g, COW_IMG(0x10245500u), 0);
    t504 = g->ecx;
    t505 = g->edx;
    g->ecx = t504;
    g->edx = t505;
    t506 = cow_call_regs(g, COW_IMG(0x101ba260u), t503, g->ecx, g->edx, 1, 0);
    t507 = g->ecx;
    t508 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    g->ecx = t507;
    t509 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, t508, 1, 1, 0u);
    t510 = g->ecx;
    t511 = g->edx;
    wr32(sp0 - 0x894u, 0u);
    g->esp = sp0 - 0x890u;
    cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, t511, 1, 1, 0u);
    if (rd32(COW_IMG(0x104566e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(1023abb9)
        wr16(eax + 0x1eu, 1u);
    }
    COW_AT(1023abbf)
    g->ebx = rd32(sp0 - 0x880u);
    g->esi = rd32(sp0 - 0x888u);
    g->edi = rd32(sp0 - 0x88cu);
    g->ebp = rd32(sp0 - 0x884u);
    return 0xfffffffeu;
L_1023aaf2: ;
    COW_AT(1023aaf2)
    wr32(sp0 - 0x890u, 0x67u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t181 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x67u);
    t182 = g->edx;
    t183 = rd32(COW_IMG(0x10668fccu));
    wr32(t183 + 0x18u, 0u);
    eax = t181;
    ecx = t183;
    edx = t182;
    goto L_1023ab77;
L_1023ab07: ;
    COW_AT(1023ab07)
    wr32(COW_IMG(0x10668fe4u), 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t464 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t465 = g->ecx;
    t466 = g->edx;
    g->ecx = t465;
    g->edx = t466;
    t467 = cow_stdcall(g, COW_IMG(0x1023ac60u), 0);
    t468 = g->ecx;
    t469 = g->edx;
    g->edx = t469;
    t470 = cow_stdcall(g, COW_IMG(0x1023ac40u), 0);
    t471 = g->edx;
    g->edx = t471;
    t472 = rd32(COW_IMG(0x10668fd8u));
    t473 = cow_thiscall(g, COW_IMG(0x102396f0u), t472, 0);
    t474 = g->ecx;
    t475 = g->edx;
    g->ecx = t474;
    g->edx = t475;
    t476 = cow_stdcall(g, COW_IMG(0x10245500u), 0);
    t477 = g->ecx;
    t478 = g->edx;
    g->ecx = t477;
    g->edx = t478;
    t479 = cow_call_regs(g, COW_IMG(0x101ba260u), t476, g->ecx, g->edx, 1, 0);
    t480 = g->ecx;
    t481 = g->edx;
    wr32(sp0 - 0x890u, 0u);
    g->ecx = t480;
    t482 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, t481, 1, 1, 0u);
    t483 = g->ecx;
    t484 = g->edx;
    wr32(sp0 - 0x894u, 0u);
    g->esp = sp0 - 0x890u;
    cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, t484, 1, 1, 0u);
    if (rd32(COW_IMG(0x104566e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(1023ab49)
        wr16(eax + 0x1eu, 1u);
    }
    COW_AT(1023ab4d)
    g->ebx = rd32(sp0 - 0x880u);
    g->esi = rd32(sp0 - 0x888u);
    g->edi = rd32(sp0 - 0x88cu);
    g->ebp = rd32(sp0 - 0x884u);
    return 0xffffffffu;
L_1023ab5b: ;
    COW_AT(1023ab5b)
    wr32(sp0 - 0x890u, 0x82u);
    wr32(sp0 - 0x894u, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88cu;
    t455 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x82u);
    t456 = g->ecx;
    t457 = g->edx;
    wr32(sp0 - 0x898u, t455);
    g->ebx = 0u;
    g->ecx = t456;
    g->edx = t457;
    g->esp = sp0 - 0x894u;
    t458 = cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t455);
    t459 = g->ecx;
    t460 = g->edx;
    wr32(sp0 - 0x89cu, 0x75u);
    g->ecx = t459;
    g->edx = t460;
    g->esp = sp0 - 0x898u;
    t461 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x75u);
    t462 = g->ecx;
    t463 = g->edx;
    eax = t461;
    ecx = t462;
    edx = t463;
    goto L_1023ab77;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10239720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10239735u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x88cu);
        in_esi = rd32(sp0 - 0x888u);
        in_ebx = rd32(sp0 - 0x880u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x884u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10239739u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x88cu);
        in_esi = rd32(sp0 - 0x888u);
        in_ebx = rd32(sp0 - 0x880u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x884u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x102397f9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239827u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023983cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023993fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239a47u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239a51u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239a56u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239a7cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239a81u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239aa0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_830;
        uint32_t loc_834;
        uint32_t loc_838;
        uint32_t loc_83c;
        uint32_t loc_840;
        uint32_t loc_844;
        uint32_t loc_848;
        uint32_t loc_84c;
        uint32_t loc_850;
        uint32_t loc_854;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        loc_854 = rd32(sp0 - 0x854u);
        loc_850 = rd32(sp0 - 0x850u);
        loc_84c = rd32(sp0 - 0x84cu);
        loc_848 = rd32(sp0 - 0x848u);
        loc_844 = rd32(sp0 - 0x844u);
        loc_840 = rd32(sp0 - 0x840u);
        loc_83c = rd32(sp0 - 0x83cu);
        loc_838 = rd32(sp0 - 0x838u);
        loc_834 = rd32(sp0 - 0x834u);
        loc_830 = rd32(sp0 - 0x830u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239b1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b2bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b32u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b46u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b53u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b60u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b6du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b7au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239b84u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239ba6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239bacu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239bbau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239bc1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239bd8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239befu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239c06u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239c1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239c34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239c45u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x890u, sp0 - 0x824u);
        (void)sp0;
        return 1;
    }
    case 0x10239c5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239c90u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239cf6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239d01u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d0eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d18u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d27u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d31u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d39u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239d54u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239dbfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239dcdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239dd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239ddcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239de4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239df1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239dfbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239e05u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239e0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239e1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239e37u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239e3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239ea0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x87cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10239ea7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x87cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10239eacu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x890u;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x87cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10239ec4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239ed2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239edfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239eecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239ef3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239f01u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239f0cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239f12u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_87c;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10239f18u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239fa5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239fb4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239fc3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239fd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239fd5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239fd9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239fdeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10239fe6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10239feeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a00bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a019u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a020u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a091u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_87c;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a097u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_87c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a09du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0adu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0cau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0d2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0e0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0e7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0eeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a0f5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a114u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x890u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a11eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a128u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a139u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a14du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a156u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a167u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a185u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a18du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a191u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a19bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1a5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1aeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1b2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1c1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1c9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1cdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1d7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1eeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a1fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a205u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a209u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a213u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a21du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a221u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a226u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a22eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a245u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a250u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a25au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a25cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a264u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a27bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a27fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a283u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a297u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2a4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2bcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2c8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2cau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x890u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a2fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a302u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a30fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a316u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a325u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a32du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a331u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a33bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a345u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a349u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a34eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a358u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a362u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a36au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a36eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a378u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a382u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a386u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a38bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a38fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a394u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x890u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a3abu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a3c4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a3d5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a3ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a3f5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a40bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a427u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a439u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a44bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a455u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a466u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a470u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a48bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a49du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a49fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4b1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4d5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4d7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4e9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a4fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a513u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a51du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a52fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a539u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a54au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a554u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a559u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a570u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a579u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a58fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a5abu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a5bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a5cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a5d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a5ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a5f5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a610u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a622u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a624u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a636u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a638u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a64au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a65au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a65cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a66eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a670u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a682u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a697u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a6a1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a6b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a6bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a6cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a6d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x878u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a6dbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a6e2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a6f2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a6fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a70au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a70fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a718u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a74fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a764u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a777u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a77cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a791u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7a2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7c2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7dcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a7e9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023a823u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        wr32(sp0 - 0x894u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1023a828u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a84eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a858u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a861u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a88eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a89fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a8a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a8c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->esi = 0x1fu;
        g->edi = 0x1au;
        (void)sp0;
        return 1;
    }
    case 0x1023a8e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x894u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1023a8e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1023a8e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a90au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a92eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1023a937u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1023a94du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1023a95cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        wr32(sp0 - 0x87cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1023a96eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        wr32(sp0 - 0x87cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1023a970u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        wr32(sp0 - 0x87cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1023a982u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        wr32(sp0 - 0x87cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1023a984u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        wr32(sp0 - 0x87cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1023a996u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        wr32(sp0 - 0x87cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1023a99bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        wr32(sp0 - 0x890u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1023a99du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a9b5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a9d7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a9d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a9e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a9eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023a9f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023aa63u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023aa7bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023aa85u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023aaacu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023aac9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        (void)sp0;
        return 1;
    }
    case 0x1023aacfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        (void)sp0;
        return 1;
    }
    case 0x1023aadfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023aaf2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023ab07u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_878;
        uint32_t loc_87c;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        loc_87c = rd32(sp0 - 0x87cu);
        loc_878 = rd32(sp0 - 0x878u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023ab49u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023ab4du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        (void)sp0;
        return 1;
    }
    case 0x1023ab5bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023ab77u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_890;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_890 = rd32(sp0 - 0x890u);
        g->esp = sp0 - 0x88cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023abb9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        (void)sp0;
        return 1;
    }
    case 0x1023abbfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10239720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10239720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
