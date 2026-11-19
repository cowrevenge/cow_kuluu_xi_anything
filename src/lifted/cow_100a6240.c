/* f_0x100a6240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a6240(Guest* g)
{
    double d113;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d12;
    double d126;
    double d127;
    double d128;
    double d129;
    double d130;
    double d131;
    double d132;
    double d133;
    double d156;
    double d16;
    double d160;
    double d164;
    double d165;
    double d166;
    double d167;
    double d17;
    double d175;
    double d179;
    double d18;
    double d180;
    double d183;
    double d19;
    double d194;
    double d195;
    double d20;
    double d21;
    double d210;
    double d218;
    double d22;
    double d225;
    double d237;
    double d238;
    double d241;
    double d264;
    double d270;
    double d271;
    double d289;
    double d290;
    double d305;
    double d306;
    double d307;
    double d308;
    double d309;
    double d32;
    double d33;
    double d335;
    double d336;
    double d337;
    double d34;
    double d343;
    double d344;
    double d345;
    double d346;
    double d348;
    double d358;
    double d36;
    double d364;
    double d369;
    double d374;
    double d389;
    double d393;
    double d394;
    double d41;
    double d412;
    double d420;
    double d427;
    double d438;
    double d439;
    double d452;
    double d453;
    double d46;
    double d460;
    double d463;
    double d464;
    double d482;
    double d489;
    double d490;
    double d491;
    double d492;
    double d5;
    double d504;
    double d505;
    double d506;
    double d509;
    double d512;
    double d513;
    double d516;
    double d517;
    double d518;
    double d524;
    double d525;
    double d532;
    double d533;
    double d541;
    double d546;
    double d547;
    double d548;
    double d60;
    double d61;
    double d65;
    double d66;
    double d67;
    double d68;
    double d80;
    double d83;
    double d88;
    double d9;
    double d91;
    double d92;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_98;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    double loc_a8_f;
    uint32_t loc_ac;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    double loc_c0_f;
    uint32_t loc_c8;
    double loc_c8_f;
    uint32_t loc_cc;
    double loc_cc_f;
    uint32_t loc_d0;
    double loc_d0_f;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    double loc_dc_f;
    uint32_t loc_e0;
    uint32_t loc_e4;
    uint32_t loc_e8;
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
    uint32_t t119;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t13;
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
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t168;
    uint32_t t169;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t181;
    uint32_t t182;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
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
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t219;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
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
    uint32_t t239;
    uint32_t t24;
    uint32_t t240;
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
    uint32_t t265;
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
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
    uint32_t t30;
    uint32_t t300;
    uint32_t t301;
    uint32_t t302;
    uint32_t t303;
    uint32_t t304;
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
    uint32_t t330;
    uint32_t t331;
    uint32_t t332;
    uint32_t t333;
    uint32_t t334;
    uint32_t t338;
    uint32_t t339;
    uint32_t t340;
    uint32_t t341;
    uint32_t t342;
    uint32_t t347;
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
    uint32_t t359;
    uint32_t t360;
    uint32_t t361;
    uint32_t t362;
    uint32_t t363;
    uint32_t t365;
    uint32_t t366;
    uint32_t t367;
    uint32_t t368;
    uint32_t t37;
    uint32_t t370;
    uint32_t t371;
    uint32_t t372;
    uint32_t t373;
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
    uint32_t t39;
    uint32_t t390;
    uint32_t t391;
    uint32_t t392;
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
    uint32_t t410;
    uint32_t t411;
    uint32_t t413;
    uint32_t t414;
    uint32_t t415;
    uint32_t t416;
    uint32_t t417;
    uint32_t t418;
    uint32_t t419;
    uint32_t t42;
    uint32_t t421;
    uint32_t t422;
    uint32_t t423;
    uint32_t t424;
    uint32_t t425;
    uint32_t t426;
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
    uint32_t t454;
    uint32_t t455;
    uint32_t t456;
    uint32_t t457;
    uint32_t t458;
    uint32_t t459;
    uint32_t t461;
    uint32_t t462;
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
    uint32_t t483;
    uint32_t t484;
    uint32_t t485;
    uint32_t t486;
    uint32_t t487;
    uint32_t t488;
    uint32_t t49;
    uint32_t t493;
    uint32_t t494;
    uint32_t t495;
    uint32_t t496;
    uint32_t t497;
    uint32_t t498;
    uint32_t t499;
    uint32_t t50;
    uint32_t t500;
    uint32_t t501;
    uint32_t t502;
    uint32_t t503;
    uint32_t t507;
    uint32_t t508;
    uint32_t t51;
    uint32_t t510;
    uint32_t t511;
    uint32_t t514;
    uint32_t t515;
    uint32_t t519;
    uint32_t t52;
    uint32_t t520;
    uint32_t t521;
    uint32_t t522;
    uint32_t t523;
    uint32_t t526;
    uint32_t t527;
    uint32_t t528;
    uint32_t t529;
    uint32_t t53;
    uint32_t t530;
    uint32_t t531;
    uint32_t t534;
    uint32_t t535;
    uint32_t t536;
    uint32_t t537;
    uint32_t t538;
    uint32_t t539;
    uint32_t t54;
    uint32_t t540;
    uint32_t t542;
    uint32_t t543;
    uint32_t t544;
    uint32_t t545;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
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
    uint32_t t81;
    uint32_t t82;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t90;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 256u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a6258u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xe8u); in_esi = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 0xe0u); g->ebp = rd32(sp0 - 0xe0u); g->edi = rd32(sp0 - 0xe8u); g->esi = rd32(sp0 - 0xe4u); goto E_100a6258;
    case 0x100a625du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a625d;
    case 0x100a6267u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6267;
    case 0x100a6271u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6271;
    case 0x100a6284u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6284;
    case 0x100a6298u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6298;
    case 0x100a62b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a62b6;
    case 0x100a62c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a62c1;
    case 0x100a62e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a62e6;
    case 0x100a630cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100a630c;
    case 0x100a6338u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100a6338;
    case 0x100a6349u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100a6349;
    case 0x100a635eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100a635e;
    case 0x100a637cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100a637c;
    case 0x100a6386u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6386;
    case 0x100a6396u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6396;
    case 0x100a63a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a63a7;
    case 0x100a63b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a63b8;
    case 0x100a63d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_a8_f = rdf32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a63d9;
    case 0x100a63e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_a8_f = rdf32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a63e7;
    case 0x100a63f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_a8_f = rdf32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a63f8;
    case 0x100a6406u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_a8_f = rdf32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a6406;
    case 0x100a6410u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6410;
    case 0x100a642cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a642c;
    case 0x100a6432u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6432;
    case 0x100a643fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a643f;
    case 0x100a6445u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6445;
    case 0x100a6475u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_100a6475;
    case 0x100a64b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a64b9;
    case 0x100a64c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64c4;
    case 0x100a64ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64cc;
    case 0x100a64d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64d0;
    case 0x100a64d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64d7;
    case 0x100a64dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64df;
    case 0x100a64e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64e3;
    case 0x100a64edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a64ed;
    case 0x100a64f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a64f1;
    case 0x100a64f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a64f5;
    case 0x100a6504u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6504;
    case 0x100a650cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a650c;
    case 0x100a651fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c0_f = rdf32(sp0 - 0xc0u); goto E_100a651f;
    case 0x100a652eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a652e;
    case 0x100a6546u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); goto E_100a6546;
    case 0x100a6557u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); goto E_100a6557;
    case 0x100a656du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a656d;
    case 0x100a6570u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); loc_c0_f = rdf32(sp0 - 0xc0u); goto E_100a6570;
    case 0x100a65a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a65a5;
    case 0x100a65aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a65aa;
    case 0x100a65afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a65af;
    case 0x100a65b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a65b3;
    case 0x100a65cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); loc_c0_f = rdf32(sp0 - 0xc0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_100a65cb;
    case 0x100a65d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a65d6;
    case 0x100a65fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a65fb;
    case 0x100a65ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_100a65ff;
    case 0x100a6608u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6608;
    case 0x100a6615u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6615;
    case 0x100a661eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a661e;
    case 0x100a6635u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6635;
    case 0x100a6639u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6639;
    case 0x100a6649u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6649;
    case 0x100a665fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a665f;
    case 0x100a6663u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6663;
    case 0x100a6679u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6679;
    case 0x100a668fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a668f;
    case 0x100a669cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a669c;
    case 0x100a66a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66a9;
    case 0x100a66bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66ba;
    case 0x100a66cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66cb;
    case 0x100a66d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66d1;
    case 0x100a66d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66d8;
    case 0x100a66ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66dd;
    case 0x100a66e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66e5;
    case 0x100a66efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66ef;
    case 0x100a66f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a66f7;
    case 0x100a6707u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6707;
    case 0x100a6712u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6712;
    case 0x100a671fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a671f;
    case 0x100a672cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a672c;
    case 0x100a6739u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6739;
    case 0x100a6746u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6746;
    case 0x100a6750u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6750;
    case 0x100a6780u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); goto E_100a6780;
    case 0x100a678au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); goto E_100a678a;
    case 0x100a678fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a678f;
    case 0x100a6796u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6796;
    case 0x100a67a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a67a8;
    case 0x100a67d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a67d4;
    case 0x100a67dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a67dc;
    case 0x100a6812u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6812;
    case 0x100a6817u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6817;
    case 0x100a681cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a681c;
    case 0x100a6823u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6823;
    case 0x100a6835u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6835;
    case 0x100a683fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a683f;
    case 0x100a6849u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6849;
    case 0x100a6855u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6855;
    case 0x100a6865u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6865;
    case 0x100a6877u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6877;
    case 0x100a6880u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6880;
    case 0x100a6899u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6899;
    case 0x100a68a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a68a3;
    case 0x100a68abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a68ab;
    case 0x100a68b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a68b5;
    case 0x100a68bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a68bd;
    case 0x100a68d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a68d2;
    case 0x100a68d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a68d7;
    case 0x100a68e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a68e0;
    case 0x100a68eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a68ee;
    case 0x100a68fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a68fb;
    case 0x100a6908u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6908;
    case 0x100a691du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a691d;
    case 0x100a692au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a692a;
    case 0x100a6953u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6953;
    case 0x100a6959u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6959;
    case 0x100a6966u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6966;
    case 0x100a696cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a696c;
    case 0x100a699du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a699d;
    case 0x100a69a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a69a5;
    case 0x100a69afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a69af;
    case 0x100a69b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a69b7;
    case 0x100a69c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a69c8;
    case 0x100a69d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d4 = rd32(sp0 - 0xd4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a69d4;
    case 0x100a69dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d4 = rd32(sp0 - 0xd4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a69dc;
    case 0x100a69feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a69fe;
    case 0x100a6a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a1f;
    case 0x100a6a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6a24;
    case 0x100a6a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6a35;
    case 0x100a6a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a42;
    case 0x100a6a4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a4b;
    case 0x100a6a50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a50;
    case 0x100a6a55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a55;
    case 0x100a6a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a59;
    case 0x100a6a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a62;
    case 0x100a6a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a68;
    case 0x100a6a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6a6d;
    case 0x100a6a6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6a6f;
    case 0x100a6aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6aa3;
    case 0x100a6aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6aab;
    case 0x100a6ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ab5;
    case 0x100a6ac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ac0;
    case 0x100a6accu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6acc;
    case 0x100a6adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6adb;
    case 0x100a6ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ae4;
    case 0x100a6aebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6aeb;
    case 0x100a6af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6af3;
    case 0x100a6afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6afd;
    case 0x100a6b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b07;
    case 0x100a6b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b13;
    case 0x100a6b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b25;
    case 0x100a6b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b2f;
    case 0x100a6b3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b3b;
    case 0x100a6b4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b4f;
    case 0x100a6b59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b59;
    case 0x100a6b65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b65;
    case 0x100a6b7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b7e;
    case 0x100a6b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b92;
    case 0x100a6b97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6b97;
    case 0x100a6ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ba2;
    case 0x100a6bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_100a6baf;
    case 0x100a6bc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_100a6bc0;
    case 0x100a6bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_100a6bd1;
    case 0x100a6be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6be0;
    case 0x100a6bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6bf4;
    case 0x100a6bfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6bfd;
    case 0x100a6c05u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c05;
    case 0x100a6c10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_100a6c10;
    case 0x100a6c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c1c;
    case 0x100a6c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c21;
    case 0x100a6c25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c25;
    case 0x100a6c2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c2e;
    case 0x100a6c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c31;
    case 0x100a6c38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c38;
    case 0x100a6c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c3e;
    case 0x100a6c43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c43;
    case 0x100a6c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c48;
    case 0x100a6c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c4d;
    case 0x100a6c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c52;
    case 0x100a6c5au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c5a;
    case 0x100a6c5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c5e;
    case 0x100a6c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c66;
    case 0x100a6c6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c6e;
    case 0x100a6c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c78;
    case 0x100a6c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c80;
    case 0x100a6c8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c8c;
    case 0x100a6c99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6c99;
    case 0x100a6cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6cac;
    case 0x100a6cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6cbf;
    case 0x100a6cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6cd0;
    case 0x100a6cd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6cd9;
    case 0x100a6ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ce2;
    case 0x100a6cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6cf9;
    case 0x100a6d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d07;
    case 0x100a6d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d10;
    case 0x100a6d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d12;
    case 0x100a6d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d1e;
    case 0x100a6d27u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d27;
    case 0x100a6d3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d3a;
    case 0x100a6d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d4d;
    case 0x100a6d5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d5c;
    case 0x100a6d65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d65;
    case 0x100a6d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d6f;
    case 0x100a6d77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d77;
    case 0x100a6d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a6d86;
    case 0x100a6d96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6d96;
    case 0x100a6da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6da3;
    case 0x100a6db3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6db3;
    case 0x100a6dbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6dbd;
    case 0x100a6dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6dcf;
    case 0x100a6ddau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6dda;
    case 0x100a6de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6de4;
    case 0x100a6dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6dfa;
    case 0x100a6e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_100a6e02;
    case 0x100a6e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e28;
    case 0x100a6e39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e39;
    case 0x100a6e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e48;
    case 0x100a6e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0_f = rdf32(sp0 - 0xd0u); loc_cc_f = rdf32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); goto E_100a6e4b;
    case 0x100a6e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e57;
    case 0x100a6e61u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e61;
    case 0x100a6e69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e69;
    case 0x100a6e72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6e72;
    case 0x100a6ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ea2;
    case 0x100a6eb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6eb2;
    case 0x100a6ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ec0;
    case 0x100a6ecau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6eca;
    case 0x100a6ed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ed5;
    case 0x100a6ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6ee9;
    case 0x100a6efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6efb;
    case 0x100a6f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f04;
    case 0x100a6f13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f13;
    case 0x100a6f22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f22;
    case 0x100a6f26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f26;
    case 0x100a6f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f49;
    case 0x100a6f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f53;
    case 0x100a6f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f5b;
    case 0x100a6f65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f65;
    case 0x100a6f6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f6d;
    case 0x100a6f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f82;
    case 0x100a6f97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6f97;
    case 0x100a6fa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6fa8;
    case 0x100a6fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6fbd;
    case 0x100a6fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6fd7;
    case 0x100a6fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6fdf;
    case 0x100a6fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6fe6;
    case 0x100a6fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a6fff;
    case 0x100a7008u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7008;
    case 0x100a701fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a701f;
    case 0x100a702du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a702d;
    case 0x100a7066u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a7066;
    case 0x100a7072u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7072;
    case 0x100a70aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70ae;
    case 0x100a70b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70b9;
    case 0x100a70c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70c4;
    case 0x100a70c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70c8;
    case 0x100a70d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70d5;
    case 0x100a70e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70e5;
    case 0x100a70ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a70ec;
    case 0x100a70f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a70f5;
    case 0x100a7107u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7107;
    case 0x100a7114u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7114;
    case 0x100a7124u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7124;
    case 0x100a7126u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7126;
    case 0x100a7128u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7128;
    case 0x100a7134u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7134;
    case 0x100a7145u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7145;
    case 0x100a7156u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7156;
    case 0x100a715cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a715c;
    case 0x100a7163u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7163;
    case 0x100a7179u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7179;
    case 0x100a7183u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7183;
    case 0x100a718bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a718b;
    case 0x100a7195u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7195;
    case 0x100a71a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71a0;
    case 0x100a71acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71ac;
    case 0x100a71bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71bb;
    case 0x100a71c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71c4;
    case 0x100a71cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71cb;
    case 0x100a71d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71d3;
    case 0x100a71ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71dd;
    case 0x100a71e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71e7;
    case 0x100a71f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a71f3;
    case 0x100a7205u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7205;
    case 0x100a720fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a720f;
    case 0x100a721bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a721b;
    case 0x100a722fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a722f;
    case 0x100a7239u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7239;
    case 0x100a7245u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7245;
    case 0x100a725eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a725e;
    case 0x100a7272u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7272;
    case 0x100a7277u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7277;
    case 0x100a7282u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7282;
    case 0x100a728fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a728f;
    case 0x100a7299u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7299;
    case 0x100a729du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a729d;
    case 0x100a72afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a72af;
    case 0x100a72c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a72c0;
    case 0x100a72d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a72d1;
    case 0x100a72e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a72e2;
    case 0x100a72f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a72f5;
    case 0x100a7308u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a7308;
    case 0x100a7311u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a7311;
    case 0x100a7319u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a7319;
    case 0x100a7324u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a7324;
    case 0x100a732bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a732b;
    case 0x100a7331u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7331;
    case 0x100a7336u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7336;
    case 0x100a733bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a733b;
    case 0x100a7340u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7340;
    case 0x100a7345u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7345;
    case 0x100a734du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a734d;
    case 0x100a7351u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7351;
    case 0x100a7359u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7359;
    case 0x100a7361u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7361;
    case 0x100a736bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a736b;
    case 0x100a7373u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7373;
    case 0x100a737du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a737d;
    case 0x100a7381u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7381;
    case 0x100a739eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a739e;
    case 0x100a73a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a73a4;
    case 0x100a73b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a73b1;
    case 0x100a73b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a73b7;
    case 0x100a73ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a73dd;
    case 0x100a73f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a73f0;
    case 0x100a7403u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7403;
    case 0x100a7439u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7439;
    case 0x100a743du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a743d;
    case 0x100a744au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a744a;
    case 0x100a745du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a745d;
    case 0x100a7474u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7474;
    case 0x100a747fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a747f;
    case 0x100a74a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74a2;
    case 0x100a74aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74ae;
    case 0x100a74b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74b8;
    case 0x100a74c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74c5;
    case 0x100a74d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74d3;
    case 0x100a74ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74dd;
    case 0x100a74ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a74ec;
    case 0x100a74fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a74fb;
    case 0x100a750bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a750b;
    case 0x100a7513u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7513;
    case 0x100a7522u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7522;
    case 0x100a752eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a752e;
    case 0x100a7530u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7530;
    case 0x100a7582u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); loc_d0_f = rdf32(sp0 - 0xd0u); loc_c8_f = rdf32(sp0 - 0xc8u); goto E_100a7582;
    case 0x100a758cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a758c;
    case 0x100a7594u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7594;
    case 0x100a759eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a759e;
    case 0x100a75aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a75aa;
    case 0x100a75b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a75b5;
    case 0x100a75c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a75c0;
    case 0x100a75e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a75e3;
    case 0x100a75f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a75f7;
    case 0x100a7607u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7607;
    case 0x100a7618u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7618;
    case 0x100a763fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a763f;
    case 0x100a764cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a764c;
    case 0x100a765du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a765d;
    case 0x100a7666u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7666;
    case 0x100a766fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a766f;
    case 0x100a7686u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7686;
    case 0x100a7694u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7694;
    case 0x100a769du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a769d;
    case 0x100a769fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a769f;
    case 0x100a76d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a76d5;
    case 0x100a76deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a76de;
    case 0x100a76f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a76f1;
    case 0x100a7704u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a7704;
    case 0x100a7713u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7713;
    case 0x100a7716u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); goto E_100a7716;
    case 0x100a7720u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7720;
    case 0x100a7724u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7724;
    case 0x100a7735u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7735;
    case 0x100a7744u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7744;
    case 0x100a7747u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_98 = rd32(sp0 - 0x98u); goto E_100a7747;
    case 0x100a7756u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100a7756;
    case 0x100a7765u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a7765;
    case 0x100a7769u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a7769;
    case 0x100a778cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100a778c;
    default: break;
    }
#endif

    COW_AT(100a6240)
    wr32(sp0 - 0xe0u, in_ebp);
    wr32(sp0 - 0xe4u, in_esi);
    wr32(sp0 - 0xe8u, in_edi);
    if (rd32(self + 0x70u) == 0u)
    {
        loc_e0 = in_ebp;
        loc_e4 = in_esi;
        loc_e8 = in_edi;
        goto L_100a6475;
    }
    ecx = rd32(self + 0x70u);
    COW_AT(100a6258)
    g->edx = in_edx;
    g->esp = sp0 - 0xe8u;
    t1 = cow_call_regs(g, COW_IMG(0x10097a40u), in_eax, ecx, g->edx, 1, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100a625d)
    if (eax == 0u)
    {
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        goto L_100a6475;
    }
    edi = eax;
    COW_AT(100a6267)
    g->eax = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t4 = cow_thiscall(g, rd32(t3 + 0x1bcu), self, 0);
    eax = t4;
    COW_AT(100a6271)
    d5 = fr(g, (double)rdf32(edi + 4u) - (double)rdf32(eax));
    wrf32(sp0 - 0x94u, (float)(double)(float)d5);
    g->eax = eax;
    g->edx = rd32(self);
    t6 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t7 = cow_thiscall(g, rd32(t6 + 0x1bcu), self, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(100a6284)
    d9 = fr(g, (double)rdf32(edi + 8u) - (double)rdf32(eax + 4u));
    wrf32(sp0 - 0x90u, (float)(double)(float)d9);
    g->eax = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t11 = cow_thiscall(g, rd32(t10 + 0x1bcu), self, 0);
    eax = t11;
    COW_AT(100a6298)
    d12 = fr(g, (double)rdf32(edi + 0xcu) - (double)rdf32(eax + 8u));
    wr32(sp0 - 0xecu, 0x3e800000u);
    wr32(sp0 - 0xf0u, sp0 - 0x94u);
    wr32(sp0 - 0xf4u, sp0 - 0xbcu);
    wrf32(sp0 - 0x8cu, (float)(double)(float)d12);
    g->eax = eax;
    g->edx = sp0 - 0xbcu;
    g->esp = sp0 - 0xe8u;
    t13 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0xbcu, sp0 - 0x94u, 0x3e800000u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(100a62b6)
    wr32(sp0 - 0xecu, self);
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t15 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
    d16 = cow_take_float(g);
    eax = t15;
    x0 = d16;
    COW_AT(100a62c1)
    d17 = (double)rdf32(sp0 - 0x8cu);
    d18 = (double)rdf32(sp0 - 0x94u);
    d19 = fr(g, fr(g, sqrt(fr(g, fr(g, d17 * d17) + fr(g, d18 * d18)))) - x0);
    if (!(d19 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
    }
    else
    {
    COW_AT(100a62e6)
        wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1035bbc8u)));
        wr32(sp0 - 0xb8u, rd32(COW_IMG(0x1035bbccu)));
        wr32(sp0 - 0xb4u, rd32(COW_IMG(0x1035bbd0u)));
        wr32(sp0 - 0xb0u, rd32(COW_IMG(0x1035bbd4u)));
        loc_bc = rd32(COW_IMG(0x1035bbc8u));
        loc_b8 = rd32(COW_IMG(0x1035bbccu));
        loc_b4 = rd32(COW_IMG(0x1035bbd0u));
    }
    COW_AT(100a630c)
    d20 = fr(g, cow_bits2f(loc_bc) + (double)rdf32(arg1));
    wrf32(arg1, (float)d20);
    d21 = fr(g, cow_bits2f(loc_b8) + (double)rdf32(arg1 + 4u));
    wrf32(arg1 + 4u, (float)d21);
    d22 = fr(g, cow_bits2f(loc_b4) + (double)rdf32(arg1 + 8u));
    wrf32(arg1 + 8u, (float)d22);
    if (rd8(COW_IMG(0x10487f80u)) != 0u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_100a637c;
    }
    eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    COW_AT(100a6338)
    if (cow_bits2f(loc_b4) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_b4), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a635e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_b4), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6349)
    if (cow_bits2f(loc_bc) == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_bc), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a778c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_bc), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a635e: ;
    COW_AT(100a635e)
    t23 = rd32(sp0 - 0xe8u);
    wrf32(self + 0xe8u, (float)-fr(g, atan2(cow_bits2f(loc_b4), cow_bits2f(loc_bc))));
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = t23;
    g->ebp = rd32(sp0 - 0xe0u);
    return eax;
L_100a637c: ;
    COW_AT(100a637c)
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t24 = cow_thiscall(g, rd32(rd32(self) + 0x1c0u), self, 0);
    eax = t24;
    COW_AT(100a6386)
    wr32(sp0 - 0xacu, rd32(eax));
    g->eax = rd32(eax);
    t25 = rd32(eax);
    g->esp = sp0 - 0xe8u;
    t26 = cow_thiscall(g, rd32(rd32(self) + 0x1c0u), self, 0);
    eax = t26;
    COW_AT(100a6396)
    t27 = rd32(eax + 4u);
    wr32(sp0 - 0xa8u, t27);
    g->eax = t27;
    g->esp = sp0 - 0xe8u;
    t28 = cow_thiscall(g, rd32(rd32(self) + 0x1c0u), self, 0);
    eax = t28;
    COW_AT(100a63a7)
    t29 = rd32(eax + 8u);
    wr32(sp0 - 0xa4u, t29);
    g->eax = t29;
    g->esp = sp0 - 0xe8u;
    t30 = cow_thiscall(g, rd32(rd32(self) + 0x1c0u), self, 0);
    eax = t30;
    COW_AT(100a63b8)
    t31 = rd32(eax + 0xcu);
    d32 = fr(g, (double)rdf32(edi + 0x18u) - (double)rdf32(sp0 - 0xa8u));
    wr32(sp0 - 0xa0u, t31);
    wrf32(sp0 - 0xa8u, (float)(double)(float)d32);
    if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_a0 = t31;
        loc_a8_f = (double)(float)d32;
    }
    else
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_a0 = t31;
        loc_a8_f = (double)(float)d32;
    COW_AT(100a63d9)
        d33 = fr(g, loc_a8_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0xa8u, (float)(double)(float)d33);
        loc_a8_f = (double)(float)d33;
    }
    COW_AT(100a63e7)
    if (!(loc_a8_f < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_a8_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_a8_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100a63f8)
        d34 = fr(g, loc_a8_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0xa8u, (float)(double)(float)d34);
        loc_a8_f = (double)(float)d34;
    }
    COW_AT(100a6406)
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t35 = cow_thiscall(g, rd32(rd32(self) + 0x1c0u), self, 0);
    eax = t35;
    COW_AT(100a6410)
    d36 = fr(g, fr(g, (double)rdf32(sp0 - 0xa8u) * (double)rdf32(COW_IMG(0x10329ce4u))) + (double)rdf32(eax + 4u));
    if ((cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
        x0 = d36;
    }
    else
    {
        eax = cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
        x0 = d36;
    COW_AT(100a642c)
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(100a6432)
    if (x0 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(100a643f)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(100a6445)
    t37 = rd32(sp0 - 0xacu);
    t38 = rd32(sp0 - 0xa4u);
    t39 = rd32(sp0 - 0xa0u);
    wr32(self + 0xe4u, t37);
    wrf32(self + 0xe8u, (float)x0);
    wr32(self + 0xecu, t38);
    wr32(self + 0xf0u, t39);
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = rd32(sp0 - 0xe8u);
    g->ebp = rd32(sp0 - 0xe0u);
    return t37;
L_100a6475: ;
    COW_AT(100a6475)
    wr32(sp0 - 0xd0u, 0u);
    t40 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x2cu);
    wr32(sp0 - 0x84u, t40);
    d41 = fr(g, cow_bits2f(t40) * (double)rdf32(COW_IMG(0x1032a9f4u)));
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wrf32(sp0 - 0x9cu, (float)(double)(float)d41);
    g->eax = rd32(COW_IMG(0x104568fcu));
    g->edx = rd32(self);
    t42 = rd32(COW_IMG(0x104568fcu));
    t43 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t44 = cow_thiscall(g, rd32(t43 + 0x1a0u), self, 0);
    t45 = g->edx;
    d46 = cow_take_float(g);
    eax = t44;
    edx = t45;
    x0 = d46;
    COW_AT(100a64b9)
    wrf32(sp0 - 0xc0u, (float)(double)(float)x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t47 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    COW_AT(100a64c4)
    wr32(sp0 - 0xecu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t49 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(100a64cc)
    if ((uint8_t)eax != 0u) goto L_100a64e3;
    COW_AT(100a64d0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t51 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(100a64d7)
    wr32(sp0 - 0xecu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t53 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(100a64df)
    if ((uint8_t)eax == 0u) goto L_100a64f1;
L_100a64e3: ;
    COW_AT(100a64e3)
    g->eax = rd32(self);
    g->edx = edx;
    t56 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t57 = cow_thiscall(g, rd32(t56 + 0x1a0u), self, 0);
    t58 = g->ecx;
    t59 = g->edx;
    d60 = cow_take_float(g);
    eax = t57;
    ecx = t58;
    edx = t59;
    x0 = d60;
    COW_AT(100a64ed)
    x0 = fr(g, x0 + x0);
L_100a64f5: ;
    COW_AT(100a64f5)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329fd8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329fd8u)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329fd8u)), 1u) & 0x4100u;
    COW_AT(100a6504)
        x0 = (double)rdf32(COW_IMG(0x10329fd8u));
    }
    COW_AT(100a650c)
    d61 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032b160u)));
    wrf32(sp0 - 0xc0u, (float)(double)(float)d61);
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        loc_c0_f = (double)(float)d61;
        loc_dc_f = (double)rdf32(sp0 - 0xdcu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        loc_c0_f = (double)(float)d61;
    COW_AT(100a651f)
        wr32(sp0 - 0xecu, COW_IMG(0x10487f64u));
        wr32(sp0 - 0xf0u, COW_IMG(0x10487f64u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t62 = cow_cdecl(g, COW_IMG(0x10027530u), 2, COW_IMG(0x10487f64u), COW_IMG(0x10487f64u));
        t63 = g->ecx;
        t64 = g->edx;
        d65 = cow_take_float(g);
        eax = t62;
        ecx = t63;
        edx = t64;
        x0 = d65;
    COW_AT(100a652e)
        d66 = (double)(float)fr(g, sqrt(x0));
        wrf32(sp0 - 0xdcu, (float)d66);
        if ((cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a22cu)), 0u) & 0x4100u) != 0u)
        {
            loc_c0_f = (double)rdf32(sp0 - 0xc0u);
            loc_dc_f = d66;
        }
        else
        {
            eax = cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a22cu)), 0u) & 0x4100u;
            loc_dc_f = d66;
    COW_AT(100a6546)
            d67 = (double)rdf32(sp0 - 0xc0u);
            if ((cow_fsw(g, loc_dc_f, d67, 0u) & 0x4100u) != 0u)
            {
                loc_c0_f = (double)rdf32(sp0 - 0xc0u);
            }
            else
            {
                eax = cow_fsw(g, loc_dc_f, d67, 0u) & 0x4100u;
    COW_AT(100a6557)
                d68 = fr(g, (double)rdf32(sp0 - 0xc0u) / loc_dc_f);
                wr32(sp0 - 0xecu, ecx);
                wrf32(sp0 - 0xecu, (float)(double)(float)d68);
                wr32(sp0 - 0xf0u, COW_IMG(0x10487f64u));
                g->esp = sp0 - 0xe8u;
                cow_cdecl(g, COW_IMG(0x100272b0u), 2, COW_IMG(0x10487f64u), cow_f2bits((double)(float)d68));
    COW_AT(100a656d)
                loc_c0_f = (double)rdf32(sp0 - 0xc0u);
                loc_dc_f = (double)rdf32(sp0 - 0xdcu);
            }
        }
    }
    COW_AT(100a6570)
    t69 = rd32(self + 0xe8u);
    wr32(sp0 - 0xa8u, t69);
    t70 = rd32(self + 0xecu);
    wr32(sp0 - 0xa4u, t70);
    t71 = rd32(self + 0xe4u);
    wr32(sp0 - 0xacu, t71);
    t72 = rd32(self + 0xf0u);
    wr32(sp0 - 0xa0u, t72);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = (t70 & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
        edx = rd32(COW_IMG(0x104568fcu));
        loc_a8 = t69;
        loc_a4 = t70;
        loc_ac = t71;
        loc_a0 = t72;
        goto L_100a65cb;
    }
    eax = (t70 & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    ecx = t72;
    edx = rd32(COW_IMG(0x104568fcu));
    loc_a8 = t69;
    loc_a4 = t70;
    loc_ac = t71;
    loc_a0 = t72;
    COW_AT(100a65a5)
    if (rd32(self + 0x70u) == 0u) goto L_100a65cb;
    COW_AT(100a65aa)
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t73 = cow_call_regs(g, COW_IMG(0x100964f0u), eax, g->ecx, g->edx, 1, 0);
    t74 = g->edx;
    eax = t73;
    edx = t74;
    COW_AT(100a65af)
    if ((uint8_t)eax != 0u)
    {
        loc_c0_f = (double)rdf32(sp0 - 0xc0u);
        loc_dc_f = (double)rdf32(sp0 - 0xdcu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a0 = rd32(sp0 - 0xa0u);
        goto L_100a65cb;
    }
    COW_AT(100a65b3)
    wr32(self + 0x598u, 0u);
    wr32(self + 0x594u, 0u);
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = rd32(sp0 - 0xe8u);
    g->ebp = rd32(sp0 - 0xe0u);
    return eax;
L_100a64f1: ;
    COW_AT(100a64f1)
    x0 = (double)rdf32(sp0 - 0xc0u);
    goto L_100a64f5;
L_100a65cb: ;
    COW_AT(100a65cb)
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t75 = cow_call_regs(g, COW_IMG(0x10158aa0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
    t76 = g->edx;
    eax = t75;
    edx = t76;
    COW_AT(100a65d6)
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0x98u, 0u);
    if ((uint8_t)eax == 0u)
    {
        ecx = (rd32(COW_IMG(0x1057876cu)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u);
        goto L_100a65ff;
    }
    ecx = (rd32(COW_IMG(0x1057876cu)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u);
    COW_AT(100a65fb)
    if ((uint8_t)ecx != 0u)
    {
        loc_d8 = 0u;
        loc_98 = 0u;
        goto L_100a661e;
    }
L_100a65ff: ;
    COW_AT(100a65ff)
    wr32(sp0 - 0xecu, 4u);
    wr32(sp0 - 0xf0u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t77 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u));
    t78 = g->ecx;
    t79 = g->edx;
    d80 = cow_take_float(g);
    eax = t77;
    ecx = t78;
    edx = t79;
    x0 = d80;
    COW_AT(100a6608)
    wrf32(sp0 - 0xd8u, (float)(double)(float)x0);
    wr32(sp0 - 0xf4u, 5u);
    wr32(sp0 - 0xf8u, 0x3fu);
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 5u, 0x3fu, 4u);
    t81 = g->ecx;
    t82 = g->edx;
    d83 = cow_take_float(g);
    ecx = t81;
    edx = t82;
    x0 = d83;
    COW_AT(100a6615)
    wrf32(sp0 - 0xd4u, (float)(double)(float)-x0);
    loc_d8 = rd32(sp0 - 0xd8u);
    loc_98 = rd32(sp0 - 0x98u);
L_100a661e: ;
    COW_AT(100a661e)
    t84 = rd32(COW_IMG(0x104e1d4cu));
    wr32(t84 + 0xa8u, 0u);
    wr8(t84 + 0xacu, 0u);
    g->eax = t84;
    g->esp = sp0 - 0xe8u;
    t85 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    eax = t85;
    COW_AT(100a6635)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100a6639)
        if (rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x58u) >> 2u & 1u)
        {
    COW_AT(100a6649)
            wr32(sp0 - 0xecu, sp0 - 0xd4u);
            wr32(sp0 - 0xf0u, sp0 - 0xd8u);
            wr32(sp0 - 0xf4u, sp0 - 0xdcu);
            g->eax = sp0 - 0xdcu;
            g->esp = sp0 - 0xe8u;
            t86 = cow_stdcall(g, COW_IMG(0x100a77a0u), 3, sp0 - 0xdcu, sp0 - 0xd8u, sp0 - 0xd4u);
            eax = t86;
    COW_AT(100a665f)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(100a6663)
                t87 = rd32(COW_IMG(0x104e1d4cu));
                d88 = (double)rdf32(sp0 - 0xdcu);
                wrf32(t87 + 0xa8u, (float)d88);
                wr8(t87 + 0xacu, 1u);
            }
        }
    }
    COW_AT(100a6679)
    wr32(sp0 - 0xecu, sp0 - 0x98u);
    wr32(sp0 - 0xf0u, sp0 - 0xd4u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    g->esp = sp0 - 0xe8u;
    t89 = cow_call_regs(g, COW_IMG(0x100a78d0u), sp0 - 0xd8u, self, sp0 - 0xd4u, 0, 3, sp0 - 0xd8u, sp0 - 0xd4u, sp0 - 0x98u);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    COW_AT(100a668f)
    if (rd8(COW_IMG(0x10487f80u)) != 0u) goto L_100a70ae;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    COW_AT(100a669c)
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
        ecx = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
        ecx = rd32(COW_IMG(0x104568fcu));
    COW_AT(100a66a9)
        d91 = (double)rdf32(sp0 - 0xd8u);
        if (d91 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d91, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a66cb;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d91, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a66ba)
        d92 = (double)rdf32(sp0 - 0xd4u);
        if (d92 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d92, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a66d8;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d92, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a66cb: ;
    COW_AT(100a66cb)
        wr32(sp0 - 0xecu, self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xecu;
        t93 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t94 = g->edx;
        eax = t93;
        edx = t94;
    COW_AT(100a66d1)
        g->esp = sp0 - 0xe8u;
        t95 = cow_call_regs(g, COW_IMG(0x1001ee60u), eax, eax, edx, 0, 1, rd32(sp0 - 0xecu));
        t96 = g->ecx;
        t97 = g->edx;
        eax = t95;
        ecx = t96;
        edx = t97;
    }
L_100a66d8: ;
    COW_AT(100a66d8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t98 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t99 = g->edx;
    eax = t98;
    edx = t99;
    COW_AT(100a66dd)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100a66e5)
        g->eax = eax;
        g->edx = rd32(self);
        t100 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t101 = cow_thiscall(g, rd32(t100 + 0x330u), self, 0);
        t102 = g->ecx;
        t103 = g->edx;
        eax = t101;
        ecx = t102;
        edx = t103;
    COW_AT(100a66ef)
        if ((uint8_t)eax == 0u)
        {
    COW_AT(100a6880)
            wr8(COW_IMG(0x10487f88u), 0u);
            wr8(COW_IMG(0x10487f89u), 1u);
            wr32(sp0 - 0xecu, 0u);
            g->edx = rd32(self);
            t147 = rd32(self);
            g->esp = sp0 - 0xe8u;
            cow_thiscall(g, rd32(t147 + 0x344u), self, 1, 0u);
            t148 = g->edx;
            edx = t148;
        }
        else
        {
    COW_AT(100a66f7)
            wr32(sp0 - 0xecu, 0xffffffffu);
            wr32(sp0 - 0xf0u, 4u);
            wr32(sp0 - 0xf4u, 0x9cu);
            wr32(sp0 - 0xf8u, 0x3fu);
            g->edx = edx;
            g->esp = sp0 - 0xdcu;
            t104 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x9cu, 4u, 0xffffffffu, rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u));
            t105 = g->edx;
            eax = t104;
            edx = t105;
    COW_AT(100a6707)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(100a6865)
                wr8(COW_IMG(0x10487f88u), 0u);
                wr32(sp0 - 0xecu, 0u);
                g->edx = edx;
                g->esp = sp0 - 0xe8u;
                cow_thiscall(g, rd32(rd32(self) + 0x344u), self, 1, 0u);
                t146 = g->edx;
                edx = t146;
    COW_AT(100a6877)
                wr8(COW_IMG(0x10487f89u), 0u);
            }
            else
            {
    COW_AT(100a6712)
                wr32(sp0 - 0xecu, 1u);
                g->eax = eax;
                t106 = rd32(COW_IMG(0x104e1d4cu));
                g->esp = sp0 - 0xe8u;
                t107 = cow_fastcall(g, COW_IMG(0x101252f0u), t106, edx, 1, 1u);
                t108 = g->ecx;
                t109 = g->edx;
                eax = t107;
                ecx = t108;
                edx = t109;
    COW_AT(100a671f)
                if (rd8(COW_IMG(0x10487f88u)) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f88u));
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f88u));
    COW_AT(100a672c)
                    if (rd8(COW_IMG(0x10487f89u)) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f89u));
                        goto L_100a6817;
                    }
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f89u));
    COW_AT(100a6739)
                    if (rd8(COW_IMG(0x1035bbd8u)) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1035bbd8u));
                        goto L_100a6817;
                    }
    COW_AT(100a6746)
                    wr32(sp0 - 0xecu, sp0 - 0xbcu);
                    g->eax = sp0 - 0xbcu;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t110 = cow_cdecl(g, COW_IMG(0x1025e0b0u), 1, sp0 - 0xbcu);
                    t111 = g->ecx;
                    t112 = g->edx;
                    eax = t110;
                    ecx = t111;
                    edx = t112;
    COW_AT(100a6750)
                    d113 = (double)rdf32(sp0 - 0xb4u);
                    d114 = (double)rdf32(sp0 - 0xb8u);
                    d115 = (double)rdf32(sp0 - 0xbcu);
                    d116 = (double)(float)fr(g, fr(g, fr(g, d113 * d113) + fr(g, d114 * d114)) + fr(g, d115 * d115));
                    wrf32(sp0 - 0xdcu, (float)d116);
                    d117 = fr(g, fr(g, fr(g, d113 * d113) + fr(g, d114 * d114)) + fr(g, d115 * d115));
                    if (d117 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d117, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        loc_dc_f = d116;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d117, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        loc_dc_f = d116;
    COW_AT(100a6780)
                        d118 = (double)(float)fr(g, sqrt(loc_dc_f));
                        wrf32(sp0 - 0xdcu, (float)d118);
                        loc_dc_f = d118;
                    }
    COW_AT(100a678a)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t119 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t120 = g->ecx;
                    t121 = g->edx;
                    eax = t119;
                    ecx = t120;
                    edx = t121;
    COW_AT(100a678f)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t122 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t123 = g->edx;
                    edx = t123;
                    edi = eax;
                    eax = t122;
    COW_AT(100a6796)
                    wr32(sp0 - 0xecu, edi + 0x50u);
                    wr32(sp0 - 0xf0u, eax + 0x44u);
                    wr32(sp0 - 0xf4u, sp0 - 0x94u);
                    g->eax = eax + 0x44u;
                    g->ecx = sp0 - 0x94u;
                    g->esp = sp0 - 0xe8u;
                    t124 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x94u, eax + 0x44u, edi + 0x50u);
                    t125 = g->ecx;
                    eax = t124;
                    ecx = t125;
    COW_AT(100a67a8)
                    d126 = (double)rdf32(sp0 - 0x8cu);
                    d127 = (double)rdf32(sp0 - 0x90u);
                    d128 = (double)rdf32(sp0 - 0x94u);
                    d129 = fr(g, fr(g, fr(g, d126 * d126) + fr(g, d127 * d127)) + fr(g, d128 * d128));
                    if (d129 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                        x0 = d129;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d129, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                        x0 = d129;
    COW_AT(100a67d4)
                        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x0)));
                    }
    COW_AT(100a67dc)
                    d130 = fr(g, (double)rdf32(sp0 - 0x94u) * x0);
                    wr32(sp0 - 0xecu, sp0 - 0x94u);
                    d131 = fr(g, d130 * (double)rdf32(sp0 - 0xdcu));
                    wrf32(sp0 - 0x94u, (float)(double)(float)d131);
                    d132 = fr(g, fr(g, (double)rdf32(sp0 - 0x90u) * x0) * (double)rdf32(sp0 - 0xdcu));
                    wrf32(sp0 - 0x90u, (float)(double)(float)d132);
                    d133 = fr(g, fr(g, (double)rdf32(sp0 - 0x8cu) * x0) * (double)rdf32(sp0 - 0xdcu));
                    wrf32(sp0 - 0x8cu, (float)(double)(float)d133);
                    g->eax = eax;
                    g->esp = sp0 - 0xe8u;
                    t134 = cow_cdecl(g, COW_IMG(0x1025e090u), 1, sp0 - 0x94u);
                    eax = t134;
    COW_AT(100a6812)
                }
L_100a6849: ;
    COW_AT(100a6849)
                wr32(sp0 - 0xecu, 1u);
                g->edx = rd32(self);
                t144 = rd32(self);
                g->esp = sp0 - 0xe8u;
                cow_thiscall(g, rd32(t144 + 0x344u), self, 1, 1u);
                t145 = g->edx;
                edx = t145;
    COW_AT(100a6855)
                wr8(COW_IMG(0x10487f88u), 1u);
                wr8(COW_IMG(0x10487f89u), 0u);
            }
        }
    COW_AT(100a6899)
        g->eax = rd32(self);
        g->edx = edx;
        t149 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t150 = cow_thiscall(g, rd32(t149 + 0x330u), self, 0);
        t151 = g->edx;
        eax = t150;
        edx = t151;
    COW_AT(100a68a3)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100a68ab)
            g->eax = eax;
            g->edx = rd32(self);
            t152 = rd32(self);
            g->esp = sp0 - 0xe8u;
            t153 = cow_thiscall(g, rd32(t152 + 0x340u), self, 0);
            t154 = g->ecx;
            t155 = g->edx;
            eax = t153;
            ecx = t154;
            edx = t155;
    COW_AT(100a68b5)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(100a68bd)
                d156 = (double)rdf32(sp0 - 0xd8u);
                if (d156 != (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d156, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d156, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a68d2)
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t157 = cow_call_regs(g, COW_IMG(0x1025e190u), eax, g->ecx, g->edx, 1, 0);
                    t158 = g->ecx;
                    t159 = g->edx;
                    d160 = cow_take_float(g);
                    eax = t157;
                    ecx = t158;
                    edx = t159;
                    x0 = d160;
    COW_AT(100a68d7)
                    wrf32(sp0 - 0xdcu, (float)(double)(float)x0);
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t161 = cow_call_regs(g, COW_IMG(0x1025e120u), eax, g->ecx, g->edx, 1, 0);
                    t162 = g->ecx;
                    t163 = g->edx;
                    d164 = cow_take_float(g);
                    eax = t161;
                    ecx = t162;
                    edx = t163;
                    x0 = d164;
    COW_AT(100a68e0)
                    if (rd8(COW_IMG(0x10487f81u)) == 0u)
                    {
                        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
                        x0 = fr(g, (double)rdf32(sp0 - 0xdcu) - x0);
                        goto L_100a6908;
                    }
                    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
                    x0 = fr(g, (double)rdf32(sp0 - 0xdcu) - x0);
    COW_AT(100a68ee)
                    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                        goto L_100a6908;
                    }
    COW_AT(100a68fb)
                    wr32(sp0 - 0xd4u, 0x3f800000u);
                    loc_d4 = 0x3f800000u;
L_100a69c8: ;
    COW_AT(100a69c8)
                    wr32(sp0 - 0xdcu, loc_d4);
                    if ((uint8_t)ecx != 0u)
                    {
                        edx = loc_d4;
                        loc_dc = loc_d4;
                    }
                    else
                    {
                        edx = loc_d4;
                        loc_dc = loc_d4;
    COW_AT(100a69d4)
                        x0 = (double)rdf32(COW_IMG(0x103295d8u));
                    }
    COW_AT(100a69dc)
                    wrf32(sp0 - 0xd8u, (float)(double)(float)x0);
                    wrf32(sp0 - 0xbcu, (float)(double)(float)x0);
                    wr32(sp0 - 0xecu, sp0 - 0xbcu);
                    wr32(sp0 - 0xb8u, loc_d4);
                    wr32(sp0 - 0xb4u, 0u);
                    g->ecx = sp0 - 0xbcu;
                    g->edx = edx;
                    g->esp = sp0 - 0xe8u;
                    t176 = cow_call_regs(g, COW_IMG(0x100274b0u), loc_d4, g->ecx, g->edx, 1, 1, sp0 - 0xbcu);
                    t177 = g->ecx;
                    t178 = g->edx;
                    eax = t176;
                    ecx = t177;
                    edx = t178;
    COW_AT(100a69fe)
                    d179 = fr(g, (double)rdf32(sp0 - 0xbcu) * (double)rdf32(sp0 - 0xdcu));
                    wr32(sp0 - 0xf0u, 0u);
                    wr32(sp0 - 0xf4u, 1u);
                    wr32(sp0 - 0xf8u, 0u);
                    wrf32(sp0 - 0xd8u, (float)(double)(float)d179);
                    d180 = fr(g, (double)rdf32(sp0 - 0xb8u) * (double)rdf32(sp0 - 0xdcu));
                    wrf32(sp0 - 0xd4u, (float)(double)(float)d180);
                    g->edx = edx;
                    g->esp = sp0 - 0xecu;
                    t181 = cow_call_regs(g, COW_IMG(0x1001e2f0u), eax, ecx, g->edx, 1, 3, 0u, 1u, 0u);
                    t182 = g->edx;
                    eax = t181;
                    edx = t182;
    COW_AT(100a6a1f)
                }
            }
        }
    }
L_100a6a6f: ;
    COW_AT(100a6a6f)
    d194 = fr(g, (double)rdf32(sp0 - 0xd4u) * (double)rdf32(sp0 - 0xc0u));
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc4u, 0x3f800000u);
    wrf32(sp0 - 0xd0u, (float)(double)(float)-d194);
    d195 = fr(g, (double)rdf32(sp0 - 0xd8u) * (double)rdf32(sp0 - 0xc0u));
    wrf32(sp0 - 0xc8u, (float)(double)(float)d195);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t196 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
    t197 = g->ecx;
    t198 = g->edx;
    eax = t196;
    ecx = t197;
    edx = t198;
    COW_AT(100a6aa3)
    if (eax == 0u)
    {
        loc_cc = 0u;
    }
    else
    {
    COW_AT(100a6aab)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t199 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        t200 = g->edx;
        eax = t199;
        edx = t200;
    COW_AT(100a6ab5)
        if (rd32(eax + 0x70u) == 0u) goto L_100a6b97;
        ecx = rd32(eax + 0x70u);
    COW_AT(100a6ac0)
        if (rd32(ecx + 0xa0u) == 0u) goto L_100a6b97;
    COW_AT(100a6acc)
        if (rd32(ecx + 0x170u) == 2u)
        {
            eax = rd32(ecx + 0x170u);
            goto L_100a6b97;
        }
        eax = rd32(ecx + 0x170u);
    COW_AT(100a6adb)
        if (eax == 3u) goto L_100a6b97;
    COW_AT(100a6ae4)
        wr32(sp0 - 0xecu, 1u);
        g->esp = sp0 - 0xe8u;
        t201 = cow_call_regs(g, COW_IMG(0x10098210u), eax, ecx, edx, 0, 1, 1u);
        t202 = g->edx;
        eax = t201;
        edx = t202;
    COW_AT(100a6aeb)
        if ((uint8_t)eax == 0u) goto L_100a6b97;
    COW_AT(100a6af3)
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t203 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t203;
    COW_AT(100a6afd)
        g->eax = eax;
        g->edx = rd32(eax);
        t204 = rd32(eax);
        g->esp = sp0 - 0xe8u;
        t205 = cow_thiscall(g, rd32(t204 + 0x1bcu), eax, 0);
        t206 = g->edx;
        eax = t205;
        edx = t206;
    COW_AT(100a6b07)
        g->eax = rd32(self);
        g->edx = edx;
        t207 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t208 = cow_thiscall(g, rd32(t207 + 0x1bcu), self, 0);
        t209 = g->edx;
        edx = t209;
        edi = eax;
        eax = t208;
    COW_AT(100a6b13)
        d210 = fr(g, (double)rdf32(edi) - (double)rdf32(eax));
        wrf32(sp0 - 0xbcu, (float)(double)(float)d210);
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t211 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t211;
    COW_AT(100a6b25)
        g->eax = eax;
        g->edx = rd32(eax);
        t212 = rd32(eax);
        g->esp = sp0 - 0xe8u;
        t213 = cow_thiscall(g, rd32(t212 + 0x1bcu), eax, 0);
        t214 = g->edx;
        eax = t213;
        edx = t214;
    COW_AT(100a6b2f)
        g->eax = rd32(self);
        g->edx = edx;
        t215 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t216 = cow_thiscall(g, rd32(t215 + 0x1bcu), self, 0);
        t217 = g->edx;
        edx = t217;
        edi = eax;
        eax = t216;
    COW_AT(100a6b3b)
        d218 = fr(g, (double)rdf32(edi + 4u) - (double)rdf32(eax + 4u));
        wrf32(sp0 - 0xb8u, (float)(double)(float)d218);
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t219 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t219;
    COW_AT(100a6b4f)
        g->eax = eax;
        g->edx = rd32(eax);
        t220 = rd32(eax);
        g->esp = sp0 - 0xe8u;
        t221 = cow_thiscall(g, rd32(t220 + 0x1bcu), eax, 0);
        t222 = g->edx;
        eax = t221;
        edx = t222;
    COW_AT(100a6b59)
        g->eax = rd32(self);
        t223 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t224 = cow_thiscall(g, rd32(t223 + 0x1bcu), self, 0);
        edi = eax;
        eax = t224;
    COW_AT(100a6b65)
        d225 = fr(g, (double)rdf32(edi + 8u) - (double)rdf32(eax + 8u));
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        wrf32(sp0 - 0xb4u, (float)(double)(float)d225);
        g->edx = sp0 - 0xbcu;
        g->esp = sp0 - 0xe4u;
        cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0xbcu, sp0 - 0xbcu, rd32(sp0 - 0xe8u));
        t226 = g->edx;
        edx = t226;
    COW_AT(100a6b7e)
        t227 = rd32(sp0 - 0xc0u);
        wr32(sp0 - 0xf4u, t227);
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xfcu, COW_IMG(0x10487f64u));
        g->eax = t227;
        g->ecx = sp0 - 0xbcu;
        g->edx = edx;
        g->esp = sp0 - 0xf0u;
        t228 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, COW_IMG(0x10487f64u), sp0 - 0xbcu, t227);
        t229 = g->ecx;
        t230 = g->edx;
        eax = t228;
        ecx = t229;
        edx = t230;
    COW_AT(100a6b92)
        loc_cc = rd32(sp0 - 0xccu);
    }
L_100a6baf: ;
    COW_AT(100a6baf)
    d237 = (double)rdf32(sp0 - 0xd0u);
    if (d237 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d237, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a6c10;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d237, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6bc0)
    d238 = (double)rdf32(sp0 - 0xc8u);
    if (d238 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d238, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a6c10;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d238, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6bd1)
    wr32(sp0 - 0xecu, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xf0u, COW_IMG(0x10487f64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t239 = cow_cdecl(g, COW_IMG(0x10027530u), 2, COW_IMG(0x10487f64u), COW_IMG(0x10487f64u));
    t240 = g->edx;
    d241 = cow_take_float(g);
    eax = t239;
    edx = t240;
    x0 = d241;
    COW_AT(100a6be0)
    if ((cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a22cu)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a22cu)), 0u) & 0x4100u;
        loc_cc = rd32(sp0 - 0xccu);
        goto L_100a6c10;
    }
    eax = cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a22cu)), 0u) & 0x4100u;
    COW_AT(100a6bf4)
    if (rd8(COW_IMG(0x10487f81u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a6bfd)
        wr32(sp0 - 0xecu, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        t242 = g->edx;
        edx = t242;
    }
    COW_AT(100a6c05)
    wr32(self + 0x598u, 0u);
L_100a6e57: ;
    COW_AT(100a6e57)
    g->eax = rd32(self);
    g->edx = edx;
    t313 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t314 = cow_thiscall(g, rd32(t313 + 0x340u), self, 0);
    t315 = g->edx;
    eax = t314;
    edx = t315;
    COW_AT(100a6e61)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100a6e69)
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    COW_AT(100a6e72)
        wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1035bbdcu)));
        wr32(sp0 - 0xb8u, rd32(COW_IMG(0x1035bbe0u)));
        wr32(sp0 - 0xb0u, rd32(COW_IMG(0x1035bbe8u)));
        wr32(sp0 - 0xb4u, rd32(COW_IMG(0x1035bbe4u)));
        g->eax = rd32(COW_IMG(0x1035bbe4u));
        t316 = rd32(COW_IMG(0x1035bbe4u));
        t317 = rd32(COW_IMG(0x1035bbdcu));
        g->esp = sp0 - 0xe8u;
        t318 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
        eax = t318;
    COW_AT(100a6ea2)
        t319 = rd32(self + 0xe8u);
        wr32(sp0 - 0xecu, t319);
        g->edx = t319;
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x80u, 1, t319);
        t320 = g->edx;
        edx = t320;
    COW_AT(100a6eb2)
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        g->eax = sp0 - 0xbcu;
        g->esp = sp0 - 0xe8u;
        t321 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x80u, 1, sp0 - 0xbcu);
        eax = t321;
    COW_AT(100a6ec0)
        g->eax = eax;
        g->edx = rd32(self);
        t322 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t323 = cow_thiscall(g, rd32(t322 + 0x1bcu), self, 0);
        t324 = g->ecx;
        t325 = g->edx;
        eax = t323;
        ecx = t324;
        edx = t325;
    COW_AT(100a6eca)
        wr32(sp0 - 0xecu, eax);
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        g->eax = sp0 - 0xbcu;
        g->esp = sp0 - 0xe8u;
        t326 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0xbcu, eax);
        eax = t326;
    COW_AT(100a6ed5)
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        g->eax = eax;
        g->edx = sp0 - 0xd0u;
        g->esp = sp0 - 0xe8u;
        t327 = cow_thiscall(g, COW_IMG(0x100a80d0u), self, 2, sp0 - 0xd0u, sp0 - 0xbcu);
        t328 = g->edx;
        eax = t327;
        edx = t328;
    COW_AT(100a6ee9)
        wr32(self + 0x598u, eax);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        g->eax = sp0 - 0xd0u;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t329 = cow_thiscall(g, COW_IMG(0x100a8000u), self, 1, sp0 - 0xd0u);
        t330 = g->edx;
        eax = t329;
        edx = t330;
    COW_AT(100a6efb)
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t331 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        eax = t331;
    }
    COW_AT(100a6f04)
    t332 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xecu, t332);
    wr32(sp0 - 0xf0u, sp0 - 0xd0u);
    g->edx = sp0 - 0xd0u;
    g->esp = sp0 - 0xe8u;
    cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xd0u, t332);
    t333 = g->edx;
    edx = t333;
    COW_AT(100a6f13)
    wr32(sp0 - 0xecu, sp0 - 0xd0u);
    g->esp = sp0 - 0xe8u;
    t334 = cow_call_regs(g, COW_IMG(0x100a8770u), sp0 - 0xd0u, self, g->edx, 0, 1, sp0 - 0xd0u);
    eax = t334;
    COW_AT(100a6f22)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a6f26)
        d335 = fr(g, (double)rdf32(sp0 - 0xd0u) + (double)rdf32(arg1));
        wrf32(arg1, (float)d335);
        d336 = fr(g, (double)rdf32(sp0 - 0xccu) + (double)rdf32(arg1 + 4u));
        wrf32(arg1 + 4u, (float)d336);
        d337 = fr(g, (double)rdf32(sp0 - 0xc8u) + (double)rdf32(arg1 + 8u));
        wrf32(arg1 + 8u, (float)d337);
        eax = arg1;
    }
    COW_AT(100a6f49)
    g->eax = eax;
    g->edx = rd32(self);
    t338 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t339 = cow_thiscall(g, rd32(t338 + 0x330u), self, 0);
    t340 = g->edx;
    eax = t339;
    edx = t340;
    COW_AT(100a6f53)
    if ((uint8_t)eax == 0u) goto L_100a778c;
    COW_AT(100a6f5b)
    g->eax = rd32(self);
    t341 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t342 = cow_thiscall(g, rd32(t341 + 0x340u), self, 0);
    eax = t342;
    COW_AT(100a6f65)
    if ((uint8_t)eax != 0u) goto L_100a778c;
    COW_AT(100a6f6d)
    d343 = (double)rdf32(sp0 - 0xc8u);
    if (d343 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a7072;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d343, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6f82)
    d344 = (double)rdf32(sp0 - 0xd0u);
    if (d344 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a7072;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d344, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6f97)
    d345 = (double)rdf32(sp0 - 0xd8u);
    if (d345 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d345, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a6fbd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d345, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6fa8)
    d346 = (double)rdf32(sp0 - 0xd4u);
    if (d346 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d346, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a778c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d346, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a6fbd: ;
    COW_AT(100a6fbd)
    t347 = rd32(sp0 - 0xd8u);
    wr32(sp0 - 0xecu, t347);
    wr32(sp0 - 0xf0u, 0u);
    wr32(sp0 - 0xf4u, t347);
    d348 = (double)(float)-(double)rdf32(sp0 - 0xd4u);
    wrf32(sp0 - 0xf4u, (float)d348);
    wr32(sp0 - 0xf8u, sp0 - 0xbcu);
    g->eax = eax;
    g->ecx = t347;
    g->edx = sp0 - 0xbcu;
    g->esp = sp0 - 0xe8u;
    t349 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0xbcu, cow_f2bits(d348), 0u, t347);
    t350 = g->ecx;
    t351 = g->edx;
    eax = t349;
    ecx = t350;
    edx = t351;
    COW_AT(100a6fd7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t352 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t353 = g->ecx;
    t354 = g->edx;
    eax = t352;
    ecx = t353;
    edx = t354;
    COW_AT(100a6fdf)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t355 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t356 = g->edx;
    edx = t356;
    edi = eax;
    eax = t355;
    COW_AT(100a6fe6)
    t357 = rd32(edi + 0x24u);
    wr32(sp0 - 0x9cu, t357);
    d358 = (double)(float)-(double)rdf32(eax + 0x2cu);
    wrf32(sp0 - 0x84u, (float)d358);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t359 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t360 = g->edx;
    eax = t359;
    edx = t360;
    COW_AT(100a6fff)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t361 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
    t362 = g->ecx;
    t363 = g->edx;
    eax = t361;
    ecx = t362;
    edx = t363;
    COW_AT(100a7008)
    d364 = fr(g, atan2((double)rdf32(sp0 - 0x84u), (double)rdf32(sp0 - 0x9cu)));
    wr32(sp0 - 0xecu, ecx);
    wrf32(sp0 - 0xecu, (float)(double)(float)d364);
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t365 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x80u, 1, cow_f2bits((double)(float)d364));
    eax = t365;
    COW_AT(100a701f)
    wr32(sp0 - 0xecu, sp0 - 0xbcu);
    g->esp = sp0 - 0xe8u;
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x80u, 1, sp0 - 0xbcu);
    COW_AT(100a702d)
    t366 = rd32(sp0 - 0xa4u);
    t367 = rd32(sp0 - 0xacu);
    t368 = rd32(sp0 - 0xa0u);
    d369 = fr(g, atan2((double)rdf32(sp0 - 0xb4u), (double)rdf32(sp0 - 0xbcu)));
    wr32(self + 0xecu, t366);
    wr32(self + 0xe4u, t367);
    wr32(self + 0xf0u, t368);
    wrf32(self + 0xe8u, (float)-d369);
    g->eax = t367;
    g->esp = sp0 - 0xe8u;
    t370 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t370;
    COW_AT(100a7066)
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = rd32(sp0 - 0xe8u);
    g->ebp = rd32(sp0 - 0xe0u);
    return eax;
L_100a6817: ;
    COW_AT(100a6817)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t135 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t136 = g->ecx;
    t137 = g->edx;
    eax = t135;
    ecx = t136;
    edx = t137;
    COW_AT(100a681c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t138 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t139 = g->ecx;
    t140 = g->edx;
    ecx = t139;
    edx = t140;
    edi = eax;
    eax = t138;
    COW_AT(100a6823)
    wr32(sp0 - 0xecu, edi + 0x50u);
    wr32(sp0 - 0xf0u, eax + 0x44u);
    wr32(sp0 - 0xf4u, sp0 - 0x94u);
    g->eax = sp0 - 0x94u;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t141 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x94u, eax + 0x44u, edi + 0x50u);
    t142 = g->edx;
    eax = t141;
    edx = t142;
    COW_AT(100a6835)
    wr32(sp0 - 0xf8u, sp0 - 0x94u);
    g->eax = eax;
    g->esp = sp0 - 0xf4u;
    t143 = cow_cdecl(g, COW_IMG(0x1025e090u), 1, sp0 - 0x94u);
    eax = t143;
    COW_AT(100a683f)
    wr8(COW_IMG(0x1035bbd8u), 0u);
    goto L_100a6849;
L_100a6908: ;
    COW_AT(100a6908)
    d165 = (double)rdf32(sp0 - 0xd4u);
    if (d165 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d165, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        goto L_100a69b7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d165, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a691d)
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a69a5)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 0u);
        wr32(sp0 - 0xf4u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t173 = cow_call_regs(g, COW_IMG(0x1001e2f0u), eax, ecx, g->edx, 1, 3, 0u, 0u, 0u);
        t174 = g->edx;
        eax = t173;
        edx = t174;
    COW_AT(100a69af)
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a692a)
        d166 = fr(g, fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(COW_IMG(0x1032d430u))) * x0);
        wrf32(sp0 - 0xdcu, (float)(double)(float)d166);
        d167 = fr(g, (double)(float)d166 + (double)rdf32(sp0 - 0xa8u));
        if ((cow_fsw(g, d167, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d167, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
            loc_dc_f = (double)(float)d166;
            x0 = d167;
        }
        else
        {
            eax = cow_fsw(g, d167, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
            loc_dc_f = (double)(float)d166;
            x0 = d167;
    COW_AT(100a6953)
            x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
        }
    COW_AT(100a6959)
        if (x0 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
    COW_AT(100a6966)
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
        }
    COW_AT(100a696c)
        t168 = rd32(sp0 - 0xacu);
        t169 = rd32(sp0 - 0xa4u);
        t170 = rd32(sp0 - 0xa0u);
        wr32(self + 0xe4u, t168);
        wr32(self + 0xecu, t169);
        wrf32(self + 0xe8u, (float)x0);
        wr32(sp0 - 0xecu, cow_f2bits(loc_dc_f));
        wr32(sp0 - 0xf0u, 0u);
        wr32(sp0 - 0xf4u, 1u);
        wr32(self + 0xf0u, t170);
        g->edx = t170;
        g->esp = sp0 - 0xe8u;
        t171 = cow_call_regs(g, COW_IMG(0x1001e2f0u), cow_f2bits(loc_dc_f), t169, g->edx, 1, 3, 1u, 0u, cow_f2bits(loc_dc_f));
        t172 = g->edx;
        eax = t171;
        edx = t172;
    COW_AT(100a699d)
    }
    goto L_100a6a6f;
L_100a69b7: ;
    COW_AT(100a69b7)
    d175 = (double)rdf32(sp0 - 0xd4u);
    if (!((double)rdf32(COW_IMG(0x103295d8u)) < d175))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), d175, 1u);
        goto L_100a6a24;
    }
    loc_d4 = rd32(sp0 - 0xd4u);
    goto L_100a69c8;
L_100a6a24: ;
    COW_AT(100a6a24)
    d183 = (double)rdf32(sp0 - 0xd4u);
    if (!(d183 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a6a6d)
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a6a35)
        if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6a50)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xe8u;
            t186 = cow_stdcall(g, COW_IMG(0x1001e2c0u), 0);
            t187 = g->ecx;
            t188 = g->edx;
            eax = t186;
            ecx = t187;
            edx = t188;
    COW_AT(100a6a55)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(100a6a59)
                wr32(sp0 - 0xecu, 0u);
                wr32(sp0 - 0xf0u, 1u);
                wr32(sp0 - 0xf4u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0xe8u;
                t189 = cow_call_regs(g, COW_IMG(0x1001e2f0u), eax, ecx, g->edx, 1, 3, 0u, 1u, 0u);
                t190 = g->ecx;
                t191 = g->edx;
                eax = t189;
                ecx = t190;
                edx = t191;
    COW_AT(100a6a62)
                wr32(sp0 - 0xf8u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0xf4u;
                t192 = cow_call_regs(g, COW_IMG(0x1001e2d0u), eax, g->ecx, g->edx, 1, 1, 0u);
                t193 = g->edx;
                eax = t192;
                edx = t193;
    COW_AT(100a6a68)
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6a42)
            wr32(sp0 - 0xecu, 0u);
            wr32(sp0 - 0xf0u, 1u);
            wr32(sp0 - 0xf4u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0xe8u;
            t184 = cow_call_regs(g, COW_IMG(0x1001e2f0u), eax, ecx, g->edx, 1, 3, 0u, 1u, 0u);
            t185 = g->edx;
            eax = t184;
            edx = t185;
    COW_AT(100a6a4b)
        }
    }
    goto L_100a6a6f;
L_100a6b97: ;
    COW_AT(100a6b97)
    wr32(sp0 - 0xecu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t231 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f74u), 1, 0u);
    t232 = g->edx;
    eax = t231;
    edx = t232;
    COW_AT(100a6ba2)
    wr32(sp0 - 0xecu, 0x41u);
    g->eax = eax;
    g->edx = edx;
    t233 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0xe8u;
    t234 = cow_thiscall(g, COW_IMG(0x10129de0u), t233, 1, 0x41u);
    t235 = g->ecx;
    t236 = g->edx;
    eax = t234;
    ecx = t235;
    edx = t236;
    loc_cc = rd32(sp0 - 0xccu);
    goto L_100a6baf;
L_100a6c10: ;
    COW_AT(100a6c10)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t243 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t244 = g->ecx;
    t245 = g->edx;
    eax = t243;
    ecx = t244;
    edx = t245;
    COW_AT(100a6c1c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t246 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t247 = g->ecx;
    t248 = g->edx;
    eax = t246;
    ecx = t247;
    edx = t248;
    COW_AT(100a6c21)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100a6c25)
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xf0u, 1u);
        wr32(sp0 - 0xf4u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t249 = cow_call_regs(g, COW_IMG(0x1001e2f0u), eax, ecx, g->edx, 1, 3, 0u, 1u, 0u);
        t250 = g->edx;
        eax = t249;
        edx = t250;
    COW_AT(100a6c2e)
    }
    COW_AT(100a6c31)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t251 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t252 = g->edx;
    eax = t251;
    edx = t252;
    COW_AT(100a6c38)
    if (eax == 0u) goto L_100a6c6e;
    edi = eax;
    COW_AT(100a6c3e)
    if (edi == 1u) goto L_100a6c6e;
    COW_AT(100a6c43)
    if (edi == 4u) goto L_100a6c6e;
    COW_AT(100a6c48)
    if (edi == 0x1cu) goto L_100a6c6e;
    COW_AT(100a6c4d)
    if (edi == 0x1fu) goto L_100a6c6e;
    COW_AT(100a6c52)
    wr32(sp0 - 0xecu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t253 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, edi);
    t254 = g->edx;
    eax = t253;
    edx = t254;
    COW_AT(100a6c5a)
    if ((uint8_t)eax != 0u) goto L_100a6c6e;
    COW_AT(100a6c5e)
    wr32(sp0 - 0xecu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t255 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, edi);
    t256 = g->ecx;
    t257 = g->edx;
    eax = t255;
    ecx = t256;
    edx = t257;
    COW_AT(100a6c66)
    if ((uint8_t)eax == 0u) goto L_100a6d1e;
L_100a6c6e: ;
    COW_AT(100a6c6e)
    g->eax = eax;
    g->edx = rd32(self);
    t258 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t259 = cow_thiscall(g, rd32(t258 + 0x330u), self, 0);
    t260 = g->edx;
    eax = t259;
    edx = t260;
    COW_AT(100a6c78)
    if ((uint8_t)eax == 0u) goto L_100a6d12;
    COW_AT(100a6c80)
    wr32(sp0 - 0xecu, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t261 = cow_thiscall(g, COW_IMG(0x100a79a0u), self, 1, sp0 - 0xd0u);
    t262 = g->ecx;
    t263 = g->edx;
    eax = t261;
    ecx = t262;
    edx = t263;
    COW_AT(100a6c8c)
    if (rd8(COW_IMG(0x10487f81u)) == 0u) goto L_100a6d65;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a6c99)
    if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a6cbf;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6cac)
    if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a6d1e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a6cbf: ;
    COW_AT(100a6cbf)
    d264 = (double)rdf32(sp0 - 0xd8u);
    if (d264 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d264, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d264, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6cd0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t265 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
        t266 = g->edx;
        eax = t265;
        edx = t266;
    COW_AT(100a6cd9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t267 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
        t268 = g->ecx;
        t269 = g->edx;
        eax = t267;
        ecx = t268;
        edx = t269;
    COW_AT(100a6ce2)
        d270 = fr(g, (double)rdf32(sp0 - 0xd8u) * (double)rdf32(sp0 - 0x9cu));
        wr32(sp0 - 0xecu, ecx);
        d271 = (double)(float)fr(g, d270 + d270);
        wrf32(sp0 - 0xecu, (float)d271);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t272 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x80u, 1, cow_f2bits(d271));
        t273 = g->edx;
        eax = t272;
        edx = t273;
    COW_AT(100a6cf9)
        wr32(sp0 - 0xecu, COW_IMG(0x10487f64u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t274 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x80u, 1, COW_IMG(0x10487f64u));
        t275 = g->edx;
        eax = t274;
        edx = t275;
    COW_AT(100a6d07)
        g->eax = eax;
        g->ecx = sp0 - 0x80u;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t276 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        t277 = g->ecx;
        t278 = g->edx;
        eax = t276;
        ecx = t277;
        edx = t278;
    COW_AT(100a6d10)
    }
L_100a6d1e: ;
    COW_AT(100a6d1e)
    if (rd8(COW_IMG(0x10487f81u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a6d27)
        if ((double)rdf32(COW_IMG(0x10487f64u)) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6d3a)
            if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6d4d)
                wr32(sp0 - 0xecu, sp0 - 0xd0u);
                wr32(sp0 - 0xf0u, COW_IMG(0x10487f64u));
                g->edx = sp0 - 0xd0u;
                g->esp = sp0 - 0xe8u;
                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x10487f64u), sp0 - 0xd0u);
                t282 = g->edx;
                edx = t282;
    COW_AT(100a6d5c)
                wr32(COW_IMG(0x10487f84u), 0u);
            }
        }
    }
L_100a6d65: ;
    COW_AT(100a6d65)
    g->eax = rd32(self);
    g->edx = edx;
    t283 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t284 = cow_thiscall(g, rd32(t283 + 0x198u), self, 0);
    t285 = g->ecx;
    t286 = g->edx;
    eax = t284;
    ecx = t285;
    edx = t286;
    COW_AT(100a6d6f)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a6e28)
        d309 = (double)rdf32(sp0 - 0xccu);
        if (!(d309 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d309, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_cc_f = (double)rdf32(sp0 - 0xccu);
            loc_d0_f = (double)rdf32(sp0 - 0xd0u);
            loc_c8_f = (double)rdf32(sp0 - 0xc8u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d309, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a6e39)
            wr32(sp0 - 0xecu, 0x3e800000u);
            wr32(sp0 - 0xf0u, sp0 - 0xd0u);
            g->eax = eax;
            g->edx = sp0 - 0xd0u;
            g->esp = sp0 - 0xe8u;
            t310 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xd0u, 0x3e800000u);
            t311 = g->edx;
            eax = t310;
            edx = t311;
    COW_AT(100a6e48)
            loc_cc_f = (double)rdf32(sp0 - 0xccu);
            loc_d0_f = (double)rdf32(sp0 - 0xd0u);
            loc_c8_f = (double)rdf32(sp0 - 0xc8u);
        }
    }
    else
    {
    COW_AT(100a6d77)
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        g->ecx = sp0 - 0xd0u;
        g->edx = sp0 - 0xd0u;
        g->esp = sp0 - 0xe8u;
        cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xd0u, sp0 - 0xd0u);
        t287 = g->ecx;
        t288 = g->edx;
        d289 = cow_take_float(g);
        ecx = t287;
        edx = t288;
        x0 = d289;
    COW_AT(100a6d86)
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        d290 = (double)(float)fr(g, sqrt(x0));
        wrf32(sp0 - 0x9cu, (float)d290);
        g->esp = sp0 - 0xf0u;
        t291 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xd0u, g->ecx, g->edx, 1, 1, sp0 - 0xd0u);
        eax = t291;
    COW_AT(100a6d96)
        g->eax = eax;
        g->edx = rd32(self);
        t292 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t293 = cow_thiscall(g, rd32(t292 + 0x210u), self, 0);
        t294 = g->edx;
        eax = t293;
        edx = t294;
    COW_AT(100a6da3)
        wr32(sp0 - 0xecu, eax);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        g->eax = sp0 - 0xd0u;
        g->ecx = sp0 - 0xbcu;
        g->esp = sp0 - 0xe8u;
        t295 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xbcu, sp0 - 0xd0u, eax);
        t296 = g->ecx;
        eax = t295;
        ecx = t296;
    COW_AT(100a6db3)
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        g->esp = sp0 - 0xf4u;
        cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0xbcu);
    COW_AT(100a6dbd)
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        g->eax = sp0 - 0xbcu;
        g->edx = rd32(self);
        t297 = rd32(self);
        g->esp = sp0 - 0xecu;
        t298 = cow_thiscall(g, rd32(t297 + 0x210u), self, 0);
        t299 = g->ecx;
        t300 = g->edx;
        eax = t298;
        ecx = t299;
        edx = t300;
    COW_AT(100a6dcf)
        wr32(sp0 - 0xf0u, eax);
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        g->eax = sp0 - 0xd0u;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t301 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xd0u, eax, sp0 - 0xbcu);
        t302 = g->edx;
        eax = t301;
        edx = t302;
    COW_AT(100a6dda)
        wr32(sp0 - 0xf8u, sp0 - 0xd0u);
        g->edx = edx;
        g->esp = sp0 - 0xf4u;
        t303 = cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0xd0u);
        t304 = g->edx;
        eax = t303;
        edx = t304;
    COW_AT(100a6de4)
        d305 = (double)rdf32(sp0 - 0xccu);
        if ((cow_fsw(g, d305, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d305, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            loc_cc = rd32(sp0 - 0xccu);
        }
        else
        {
            eax = cow_fsw(g, d305, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(100a6dfa)
            wr32(sp0 - 0xccu, 0u);
            loc_cc = 0u;
        }
    COW_AT(100a6e02)
        d306 = fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(sp0 - 0xd0u));
        wrf32(sp0 - 0xd0u, (float)(double)(float)d306);
        d307 = fr(g, (double)rdf32(sp0 - 0x9cu) * cow_bits2f(loc_cc));
        wrf32(sp0 - 0xccu, (float)(double)(float)d307);
        d308 = fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(sp0 - 0xc8u));
        wrf32(sp0 - 0xc8u, (float)(double)(float)d308);
        loc_cc_f = (double)(float)d307;
        loc_d0_f = (double)(float)d306;
        loc_c8_f = (double)(float)d308;
    }
    COW_AT(100a6e4b)
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t312 = g->edx;
    edx = t312;
    goto L_100a6e57;
L_100a6d12: ;
    COW_AT(100a6d12)
    wr32(sp0 - 0xecu, sp0 - 0xd0u);
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t279 = cow_call_regs(g, COW_IMG(0x100a7b80u), eax, self, g->edx, 0, 1, sp0 - 0xd0u);
    t280 = g->ecx;
    t281 = g->edx;
    eax = t279;
    ecx = t280;
    edx = t281;
    goto L_100a6d1e;
L_100a7072: ;
    COW_AT(100a7072)
    t371 = rd32(sp0 - 0xacu);
    t372 = rd32(sp0 - 0xa4u);
    t373 = rd32(sp0 - 0xa0u);
    d374 = fr(g, atan2((double)rdf32(sp0 - 0xc8u), (double)rdf32(sp0 - 0xd0u)));
    wr32(self + 0xe4u, t371);
    wr32(self + 0xecu, t372);
    wr32(self + 0xf0u, t373);
    t375 = rd32(sp0 - 0xe8u);
    wrf32(self + 0xe8u, (float)-d374);
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = t375;
    g->ebp = rd32(sp0 - 0xe0u);
    return t371;
L_100a70ae: ;
    COW_AT(100a70ae)
    wr32(sp0 - 0xecu, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t376 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t377 = cow_thiscall(g, rd32(t376 + 0x344u), self, 1, 0u);
    t378 = g->edx;
    eax = t377;
    edx = t378;
    COW_AT(100a70b9)
    g->edx = edx;
    t379 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0xe8u;
    t380 = cow_call_regs(g, COW_IMG(0x10158aa0u), eax, t379, g->edx, 1, 0);
    t381 = g->ecx;
    t382 = g->edx;
    eax = t380;
    ecx = t381;
    edx = t382;
    COW_AT(100a70c4)
    if ((uint8_t)eax == 0u) goto L_100a70d5;
    COW_AT(100a70c8)
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_100a7128;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u);
    ecx = rd32(COW_IMG(0x1057876cu));
L_100a70d5: ;
    COW_AT(100a70d5)
    wr32(sp0 - 0xecu, 0xffffffffu);
    wr32(sp0 - 0xf0u, 4u);
    wr32(sp0 - 0xf4u, 0x9cu);
    wr32(sp0 - 0xf8u, 0x3fu);
    g->edx = edx;
    g->esp = sp0 - 0xdcu;
    t383 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x9cu, 4u, 0xffffffffu, rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u));
    t384 = g->ecx;
    t385 = g->edx;
    eax = t383;
    ecx = t384;
    edx = t385;
    COW_AT(100a70e5)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100a70ec)
        wr32(sp0 - 0xecu, 4u);
        wr32(sp0 - 0xf0u, 0x3fu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe0u;
        t386 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u));
        t387 = g->ecx;
        t388 = g->edx;
        d389 = cow_take_float(g);
        eax = t386;
        ecx = t387;
        edx = t388;
        x0 = d389;
    COW_AT(100a70f5)
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
            goto L_100a7114;
        }
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
    COW_AT(100a7107)
        if (!(x0 < (double)rdf32(COW_IMG(0x1032df8cu)))) goto L_100a7126;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df8cu)), 1u);
L_100a7114: ;
    COW_AT(100a7114)
        wr32(sp0 - 0xecu, 1u);
        wrf32(sp0 - 0xd8u, (float)(double)(float)x0);
        g->edx = rd32(self);
        t390 = rd32(self);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(t390 + 0x344u), self, 1, 1u);
        t391 = g->ecx;
        t392 = g->edx;
        ecx = t391;
        edx = t392;
    COW_AT(100a7124)
    }
L_100a7128: ;
    COW_AT(100a7128)
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    COW_AT(100a7134)
        d393 = (double)rdf32(sp0 - 0xd8u);
        if (d393 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d393, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a7156;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d393, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a7145)
        d394 = (double)rdf32(sp0 - 0xd4u);
        if (d394 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a7163;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d394, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a7156: ;
    COW_AT(100a7156)
        wr32(sp0 - 0xecu, self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xecu;
        t395 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t396 = g->edx;
        eax = t395;
        edx = t396;
    COW_AT(100a715c)
        g->esp = sp0 - 0xe8u;
        cow_call_regs(g, COW_IMG(0x10021110u), eax, eax, g->edx, 0, 1, rd32(sp0 - 0xecu));
    }
L_100a7163: ;
    COW_AT(100a7163)
    wr32(sp0 - 0xecu, sp0 - 0x98u);
    wr32(sp0 - 0xf0u, sp0 - 0xd4u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    g->esp = sp0 - 0xe8u;
    t397 = cow_call_regs(g, COW_IMG(0x100a78d0u), sp0 - 0xd8u, self, sp0 - 0xd4u, 0, 3, sp0 - 0xd8u, sp0 - 0xd4u, sp0 - 0x98u);
    t398 = g->edx;
    eax = t397;
    edx = t398;
    COW_AT(100a7179)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t399 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
    t400 = g->edx;
    eax = t399;
    edx = t400;
    COW_AT(100a7183)
    if (eax != 0u)
    {
    COW_AT(100a718b)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t401 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        t402 = g->edx;
        eax = t401;
        edx = t402;
    COW_AT(100a7195)
        if (rd32(eax + 0x70u) == 0u) goto L_100a7277;
        ecx = rd32(eax + 0x70u);
    COW_AT(100a71a0)
        if (rd32(ecx + 0xa0u) == 0u) goto L_100a7277;
    COW_AT(100a71ac)
        if (rd32(ecx + 0x170u) == 2u)
        {
            eax = rd32(ecx + 0x170u);
            goto L_100a7277;
        }
        eax = rd32(ecx + 0x170u);
    COW_AT(100a71bb)
        if (eax == 3u) goto L_100a7277;
    COW_AT(100a71c4)
        wr32(sp0 - 0xecu, 1u);
        g->esp = sp0 - 0xe8u;
        t403 = cow_call_regs(g, COW_IMG(0x10098210u), eax, ecx, edx, 0, 1, 1u);
        t404 = g->edx;
        eax = t403;
        edx = t404;
    COW_AT(100a71cb)
        if ((uint8_t)eax == 0u) goto L_100a7277;
    COW_AT(100a71d3)
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t405 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t405;
    COW_AT(100a71dd)
        g->eax = eax;
        g->edx = rd32(eax);
        t406 = rd32(eax);
        g->esp = sp0 - 0xe8u;
        t407 = cow_thiscall(g, rd32(t406 + 0x1bcu), eax, 0);
        t408 = g->edx;
        eax = t407;
        edx = t408;
    COW_AT(100a71e7)
        g->eax = rd32(self);
        g->edx = edx;
        t409 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t410 = cow_thiscall(g, rd32(t409 + 0x1bcu), self, 0);
        t411 = g->edx;
        edx = t411;
        edi = eax;
        eax = t410;
    COW_AT(100a71f3)
        d412 = fr(g, (double)rdf32(edi) - (double)rdf32(eax));
        wrf32(sp0 - 0xbcu, (float)(double)(float)d412);
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t413 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t413;
    COW_AT(100a7205)
        g->eax = eax;
        g->edx = rd32(eax);
        t414 = rd32(eax);
        g->esp = sp0 - 0xe8u;
        t415 = cow_thiscall(g, rd32(t414 + 0x1bcu), eax, 0);
        t416 = g->edx;
        eax = t415;
        edx = t416;
    COW_AT(100a720f)
        g->eax = rd32(self);
        g->edx = edx;
        t417 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t418 = cow_thiscall(g, rd32(t417 + 0x1bcu), self, 0);
        t419 = g->edx;
        edx = t419;
        edi = eax;
        eax = t418;
    COW_AT(100a721b)
        d420 = fr(g, (double)rdf32(edi + 4u) - (double)rdf32(eax + 4u));
        wrf32(sp0 - 0xb8u, (float)(double)(float)d420);
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t421 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t421;
    COW_AT(100a722f)
        g->eax = eax;
        g->edx = rd32(eax);
        t422 = rd32(eax);
        g->esp = sp0 - 0xe8u;
        t423 = cow_thiscall(g, rd32(t422 + 0x1bcu), eax, 0);
        t424 = g->edx;
        eax = t423;
        edx = t424;
    COW_AT(100a7239)
        g->eax = rd32(self);
        t425 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t426 = cow_thiscall(g, rd32(t425 + 0x1bcu), self, 0);
        edi = eax;
        eax = t426;
    COW_AT(100a7245)
        d427 = fr(g, (double)rdf32(edi + 8u) - (double)rdf32(eax + 8u));
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        wrf32(sp0 - 0xb4u, (float)(double)(float)d427);
        g->edx = sp0 - 0xbcu;
        g->esp = sp0 - 0xe4u;
        cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0xbcu, sp0 - 0xbcu, rd32(sp0 - 0xe8u));
        t428 = g->edx;
        edx = t428;
    COW_AT(100a725e)
        t429 = rd32(sp0 - 0xc0u);
        wr32(sp0 - 0xf4u, t429);
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xfcu, COW_IMG(0x10487f64u));
        g->eax = t429;
        g->esp = sp0 - 0xf0u;
        t430 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, COW_IMG(0x10487f64u), sp0 - 0xbcu, t429);
        eax = t430;
    COW_AT(100a7272)
    }
L_100a728f: ;
    COW_AT(100a728f)
    g->eax = eax;
    g->edx = rd32(self);
    t434 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t435 = cow_thiscall(g, rd32(t434 + 0x340u), self, 0);
    t436 = g->edx;
    eax = t435;
    edx = t436;
    COW_AT(100a7299)
    if ((uint8_t)eax == 0u) goto L_100a72af;
    COW_AT(100a729d)
    t437 = rd32(sp0 - 0xd8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0x98u, t437);
    eax = t437;
    loc_d8 = 0u;
    loc_98 = t437;
L_100a72c0: ;
    COW_AT(100a72c0)
    d439 = (double)rdf32(sp0 - 0xd4u);
    if (d439 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d439, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7324;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d439, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a72d1)
    if (cow_bits2f(loc_98) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_98), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7324;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_98), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a72e2)
    if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7324;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a72f5)
    if ((double)rdf32(COW_IMG(0x10487f6cu)) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7324;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a7308)
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a7311)
        wr32(sp0 - 0xecu, 0u);
        g->esp = sp0 - 0xe8u;
        t440 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        eax = t440;
    }
    COW_AT(100a7319)
    wr32(self + 0x598u, 0u);
L_100a7747: ;
    COW_AT(100a7747)
    t543 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xecu, t543);
    wr32(sp0 - 0xf0u, sp0 - 0xd0u);
    g->edx = sp0 - 0xd0u;
    g->esp = sp0 - 0xe8u;
    cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xd0u, t543);
    t544 = g->edx;
    edx = t544;
    COW_AT(100a7756)
    wr32(sp0 - 0xecu, sp0 - 0xd0u);
    g->esp = sp0 - 0xe8u;
    t545 = cow_call_regs(g, COW_IMG(0x100a8770u), sp0 - 0xd0u, self, g->edx, 0, 1, sp0 - 0xd0u);
    eax = t545;
    COW_AT(100a7765)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a7769)
        d546 = fr(g, (double)rdf32(sp0 - 0xd0u) + (double)rdf32(arg1));
        wrf32(arg1, (float)d546);
        d547 = fr(g, (double)rdf32(sp0 - 0xccu) + (double)rdf32(arg1 + 4u));
        wrf32(arg1 + 4u, (float)d547);
        d548 = fr(g, (double)rdf32(sp0 - 0xc8u) + (double)rdf32(arg1 + 8u));
        wrf32(arg1 + 8u, (float)d548);
        eax = arg1;
    }
L_100a778c: ;
    COW_AT(100a778c)
    g->esi = rd32(sp0 - 0xe4u);
    g->edi = rd32(sp0 - 0xe8u);
    g->ebp = rd32(sp0 - 0xe0u);
    return eax;
L_100a7126: ;
    COW_AT(100a7126)
    goto L_100a7128;
L_100a7277: ;
    COW_AT(100a7277)
    wr32(sp0 - 0xecu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t431 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f74u), 1, 0u);
    t432 = g->edx;
    eax = t431;
    edx = t432;
    COW_AT(100a7282)
    wr32(sp0 - 0xecu, 0x41u);
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t433 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x41u);
    eax = t433;
    goto L_100a728f;
L_100a72af: ;
    COW_AT(100a72af)
    d438 = (double)rdf32(sp0 - 0xd8u);
    if (d438 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d438, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        goto L_100a7324;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d438, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_d8 = rd32(sp0 - 0xd8u);
    loc_98 = rd32(sp0 - 0x98u);
    goto L_100a72c0;
L_100a7324: ;
    COW_AT(100a7324)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t441 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t442 = g->edx;
    eax = t441;
    edx = t442;
    COW_AT(100a732b)
    if (eax == 0u) goto L_100a7361;
    edi = eax;
    COW_AT(100a7331)
    if (edi == 1u) goto L_100a7361;
    COW_AT(100a7336)
    if (edi == 4u) goto L_100a7361;
    COW_AT(100a733b)
    if (edi == 0x1cu) goto L_100a7361;
    COW_AT(100a7340)
    if (edi == 0x1fu) goto L_100a7361;
    COW_AT(100a7345)
    wr32(sp0 - 0xecu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t443 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, edi);
    t444 = g->edx;
    eax = t443;
    edx = t444;
    COW_AT(100a734d)
    if ((uint8_t)eax != 0u) goto L_100a7361;
    COW_AT(100a7351)
    wr32(sp0 - 0xecu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t445 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, edi);
    t446 = g->edx;
    eax = t445;
    edx = t446;
    COW_AT(100a7359)
    if ((uint8_t)eax == 0u)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        goto L_100a76d5;
    }
L_100a7361: ;
    COW_AT(100a7361)
    g->eax = eax;
    g->edx = rd32(self);
    t447 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t448 = cow_thiscall(g, rd32(t447 + 0x330u), self, 0);
    t449 = g->edx;
    eax = t448;
    edx = t449;
    COW_AT(100a736b)
    if ((uint8_t)eax == 0u) goto L_100a769f;
    COW_AT(100a7373)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t450 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
    t451 = g->edx;
    eax = t450;
    edx = t451;
    COW_AT(100a737d)
    if (eax != 0u)
    {
    COW_AT(100a73dd)
        if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a7439;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a73f0)
        if ((double)rdf32(COW_IMG(0x10487f64u)) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a7439;
        }
    COW_AT(100a7403)
        t457 = rd32(sp0 - 0xacu);
        t458 = rd32(sp0 - 0xa4u);
        t459 = rd32(sp0 - 0xa0u);
        d460 = fr(g, atan2((double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x10487f64u))));
        wr32(self + 0xe4u, t457);
        wr32(self + 0xecu, t458);
        wr32(self + 0xf0u, t459);
        wrf32(self + 0xe8u, (float)-d460);
        eax = t457;
        edx = t459;
        x0 = -d460;
    }
    else
    {
    COW_AT(100a7381)
        d452 = fr(g, (double)rdf32(sp0 - 0xd8u) * (double)rdf32(sp0 - 0x9cu));
        d453 = fr(g, fr(g, d452 + d452) + (double)rdf32(sp0 - 0xa8u));
        if ((cow_fsw(g, d453, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d453, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
            x0 = d453;
        }
        else
        {
            eax = cow_fsw(g, d453, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
            x0 = d453;
    COW_AT(100a739e)
            x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
        }
    COW_AT(100a73a4)
        if (x0 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
    COW_AT(100a73b1)
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
        }
    COW_AT(100a73b7)
        t454 = rd32(sp0 - 0xacu);
        t455 = rd32(sp0 - 0xa4u);
        t456 = rd32(sp0 - 0xa0u);
        wr32(self + 0xe4u, t454);
        wrf32(self + 0xe8u, (float)x0);
        wr32(self + 0xecu, t455);
        wr32(self + 0xf0u, t456);
        eax = t454;
        edx = t456;
    }
L_100a743d: ;
    COW_AT(100a743d)
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        goto L_100a7530;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a744a)
    if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        goto L_100a7474;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a745d)
    if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        goto L_100a7530;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
L_100a7474: ;
    COW_AT(100a7474)
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t461 = g->ecx;
    t462 = g->edx;
    ecx = t461;
    edx = t462;
    COW_AT(100a747f)
    d463 = fr(g, (double)rdf32(sp0 - 0xd8u) * (double)rdf32(sp0 - 0xc0u));
    wr32(sp0 - 0xecu, ecx);
    wrf32(sp0 - 0xecu, (float)(double)(float)d463);
    d464 = fr(g, (double)rdf32(sp0 - 0xd4u) * (double)rdf32(sp0 - 0xc0u));
    wr32(sp0 - 0xf0u, 0u);
    wr32(sp0 - 0xf4u, ecx);
    wrf32(sp0 - 0xf4u, (float)(double)(float)d464);
    wr32(sp0 - 0xf8u, sp0 - 0xbcu);
    g->eax = sp0 - 0xbcu;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t465 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0xbcu, cow_f2bits((double)(float)d464), 0u, cow_f2bits((double)(float)d463));
    t466 = g->edx;
    eax = t465;
    edx = t466;
    COW_AT(100a74a2)
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t467 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
    eax = t467;
    COW_AT(100a74ae)
    g->eax = eax;
    g->edx = rd32(self);
    t468 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t469 = cow_thiscall(g, rd32(t468 + 0x1c0u), self, 0);
    t470 = g->edx;
    eax = t469;
    edx = t470;
    COW_AT(100a74b8)
    t471 = rd32(eax + 4u);
    wr32(sp0 - 0xecu, t471);
    g->eax = t471;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t472 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x80u, 1, t471);
    t473 = g->edx;
    eax = t472;
    edx = t473;
    COW_AT(100a74c5)
    wr32(sp0 - 0xecu, sp0 - 0xbcu);
    g->eax = eax;
    g->esp = sp0 - 0xe8u;
    t474 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x80u, 1, sp0 - 0xbcu);
    t475 = g->ecx;
    eax = t474;
    ecx = t475;
    COW_AT(100a74d3)
    wr32(sp0 - 0xecu, sp0 - 0xbcu);
    g->ecx = ecx;
    g->edx = sp0 - 0xbcu;
    g->esp = sp0 - 0xe8u;
    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0xbcu);
    t476 = g->ecx;
    t477 = g->edx;
    ecx = t476;
    edx = t477;
    COW_AT(100a74dd)
    wr32(sp0 - 0xf0u, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xf4u, sp0 - 0x94u);
    g->eax = sp0 - 0x94u;
    g->esp = sp0 - 0xe8u;
    t478 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x94u, COW_IMG(0x10487f64u), sp0 - 0xbcu);
    eax = t478;
    COW_AT(100a74ec)
    wr32(sp0 - 0xf8u, sp0 - 0x94u);
    wr32(sp0 - 0xfcu, sp0 - 0xbcu);
    g->eax = eax;
    g->ecx = sp0 - 0x94u;
    g->edx = sp0 - 0xbcu;
    g->esp = sp0 - 0xf4u;
    t479 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xbcu, sp0 - 0x94u);
    t480 = g->ecx;
    t481 = g->edx;
    d482 = cow_take_float(g);
    eax = t479;
    ecx = t480;
    edx = t481;
    x0 = d482;
    COW_AT(100a74fb)
    if (x0 < (double)rdf32(COW_IMG(0x1032a3d0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u);
    COW_AT(100a750b)
        wr32(sp0 - 0xecu, 0u);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        t483 = g->ecx;
        t484 = g->edx;
        ecx = t483;
        edx = t484;
    }
    COW_AT(100a7513)
    wr32(sp0 - 0xecu, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xf0u, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t485 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xd0u, COW_IMG(0x10487f64u));
    t486 = g->edx;
    eax = t485;
    edx = t486;
    COW_AT(100a7522)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t487 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t488 = g->edx;
    eax = t487;
    edx = t488;
    COW_AT(100a752e)
    loc_d0_f = (double)rdf32(sp0 - 0xd0u);
    loc_c8_f = (double)rdf32(sp0 - 0xc8u);
L_100a7582: ;
    COW_AT(100a7582)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t493 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
    t494 = g->edx;
    eax = t493;
    edx = t494;
    COW_AT(100a758c)
    if (eax == 0u)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
    }
    else
    {
    COW_AT(100a7594)
        g->eax = eax;
        g->esp = sp0 - 0xe8u;
        t495 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        eax = t495;
    COW_AT(100a759e)
        g->eax = eax;
        g->edx = rd32(self);
        t496 = rd32(self);
        g->esp = sp0 - 0xe8u;
        t497 = cow_thiscall(g, rd32(t496 + 0x1bcu), self, 0);
        t498 = g->edx;
        edx = t498;
        edi = eax;
        eax = t497;
    COW_AT(100a75aa)
        wr32(sp0 - 0xecu, eax);
        g->eax = rd32(edi);
        g->edx = edx;
        t499 = rd32(edi);
        g->esp = sp0 - 0xecu;
        t500 = cow_thiscall(g, rd32(t499 + 0x1bcu), edi, 0);
        t501 = g->edx;
        eax = t500;
        edx = t501;
    COW_AT(100a75b5)
        wr32(sp0 - 0xf0u, eax);
        wr32(sp0 - 0xf4u, sp0 - 0xacu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t502 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xacu, eax, rd32(sp0 - 0xecu));
        t503 = g->edx;
        eax = t502;
        edx = t503;
    COW_AT(100a75c0)
        d504 = (double)rdf32(sp0 - 0xa4u);
        d505 = (double)rdf32(sp0 - 0xacu);
        d506 = (double)(float)fr(g, fr(g, d504 * d504) + fr(g, d505 * d505));
        wrf32(sp0 - 0xdcu, (float)d506);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t507 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        t508 = g->edx;
        eax = t507;
        edx = t508;
    COW_AT(100a75e3)
        d509 = fr(g, sqrt((double)rdf32(sp0 - 0xdcu)));
        wr32(sp0 - 0xecu, self);
        wrf32(sp0 - 0xdcu, (float)(double)(float)d509);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t510 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
        t511 = g->edx;
        d512 = cow_take_float(g);
        edx = t511;
        edi = eax;
        eax = t510;
        x0 = d512;
    COW_AT(100a75f7)
        d513 = fr(g, (double)rdf32(sp0 - 0xdcu) - x0);
        wr32(sp0 - 0xecu, edi);
        wrf32(sp0 - 0xdcu, (float)(double)(float)d513);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t514 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, edi);
        t515 = g->edx;
        d516 = cow_take_float(g);
        eax = t514;
        edx = t515;
        x0 = d516;
    COW_AT(100a7607)
        d517 = fr(g, (double)rdf32(sp0 - 0xdcu) - x0);
        if (!(d517 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d517, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_d0 = rd32(sp0 - 0xd0u);
            loc_cc = rd32(sp0 - 0xccu);
            loc_c8 = rd32(sp0 - 0xc8u);
        }
        else
        {
    COW_AT(100a7618)
            wr32(sp0 - 0xd0u, rd32(COW_IMG(0x1035bbecu)));
            wr32(sp0 - 0xccu, rd32(COW_IMG(0x1035bbf0u)));
            wr32(sp0 - 0xc8u, rd32(COW_IMG(0x1035bbf4u)));
            wr32(sp0 - 0xc4u, rd32(COW_IMG(0x1035bbf8u)));
            eax = rd32(COW_IMG(0x1035bbf0u));
            edx = rd32(COW_IMG(0x1035bbf8u));
            loc_d0 = rd32(COW_IMG(0x1035bbecu));
            loc_cc = rd32(COW_IMG(0x1035bbf0u));
            loc_c8 = rd32(COW_IMG(0x1035bbf4u));
        }
    }
    COW_AT(100a763f)
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        goto L_100a7716;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a764c)
    d518 = (double)rdf32(sp0 - 0xd8u);
    if (d518 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d518, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d518, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a765d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t519 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
        t520 = g->edx;
        eax = t519;
        edx = t520;
    COW_AT(100a7666)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t521 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
        t522 = g->ecx;
        t523 = g->edx;
        eax = t521;
        ecx = t522;
        edx = t523;
    COW_AT(100a766f)
        d524 = fr(g, (double)rdf32(sp0 - 0xd8u) * (double)rdf32(sp0 - 0x9cu));
        wr32(sp0 - 0xecu, ecx);
        d525 = (double)(float)fr(g, d524 + d524);
        wrf32(sp0 - 0xecu, (float)d525);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t526 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x80u, 1, cow_f2bits(d525));
        t527 = g->edx;
        eax = t526;
        edx = t527;
    COW_AT(100a7686)
        wr32(sp0 - 0xecu, COW_IMG(0x10487f64u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t528 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x80u, 1, COW_IMG(0x10487f64u));
        t529 = g->edx;
        eax = t528;
        edx = t529;
    COW_AT(100a7694)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xe8u;
        t530 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        t531 = g->edx;
        eax = t530;
        edx = t531;
    COW_AT(100a769d)
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
    }
L_100a76d5: ;
    COW_AT(100a76d5)
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100a76de)
        if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a76f1)
            if ((double)rdf32(COW_IMG(0x10487f6cu)) != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a7704)
                wr32(sp0 - 0xecu, sp0 - 0xd0u);
                wr32(sp0 - 0xf0u, COW_IMG(0x10487f64u));
                g->eax = eax;
                g->esp = sp0 - 0xe8u;
                t536 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x10487f64u), sp0 - 0xd0u);
                eax = t536;
    COW_AT(100a7713)
                loc_d0 = rd32(sp0 - 0xd0u);
                loc_cc = rd32(sp0 - 0xccu);
                loc_c8 = rd32(sp0 - 0xc8u);
            }
        }
    }
L_100a7716: ;
    COW_AT(100a7716)
    g->eax = eax;
    g->edx = rd32(self);
    t537 = rd32(self);
    g->esp = sp0 - 0xe8u;
    t538 = cow_thiscall(g, rd32(t537 + 0x198u), self, 0);
    t539 = g->ecx;
    t540 = g->edx;
    eax = t538;
    ecx = t539;
    edx = t540;
    COW_AT(100a7720)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a7724)
        d541 = (double)rdf32(sp0 - 0xccu);
        if (!(d541 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d541, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
    COW_AT(100a7735)
            wr32(sp0 - 0xecu, 0x3e800000u);
            wr32(sp0 - 0xf0u, sp0 - 0xd0u);
            g->eax = sp0 - 0xd0u;
            g->esp = sp0 - 0xe8u;
            t542 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xd0u, 0x3e800000u);
            eax = t542;
    COW_AT(100a7744)
        }
    }
    goto L_100a7747;
L_100a7439: ;
    COW_AT(100a7439)
    x0 = (double)rdf32(sp0 - 0xa8u);
    goto L_100a743d;
L_100a7530: ;
    COW_AT(100a7530)
    d489 = fr(g, (double)rdf32(COW_IMG(0x1032d430u)) + x0);
    wrf32(sp0 - 0xdcu, (float)(double)(float)d489);
    d490 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d30u)));
    d491 = fr(g, fr(g, fr(g, fr(g, sin((double)(float)d489)) * (double)rdf32(sp0 - 0xd4u)) + fr(g, fr(g, sin(d490)) * (double)rdf32(sp0 - 0x98u))) * (double)rdf32(sp0 - 0xc0u));
    wrf32(sp0 - 0xd0u, (float)(double)(float)d491);
    d492 = fr(g, fr(g, fr(g, fr(g, cos((double)(float)d489)) * (double)rdf32(sp0 - 0xd4u)) + fr(g, fr(g, cos(d490)) * (double)rdf32(sp0 - 0x98u))) * (double)rdf32(sp0 - 0xc0u));
    wrf32(sp0 - 0xc8u, (float)(double)(float)d492);
    loc_d0_f = (double)(float)d491;
    loc_c8_f = (double)(float)d492;
    goto L_100a7582;
L_100a769f: ;
    COW_AT(100a769f)
    d532 = fr(g, (double)rdf32(sp0 - 0xd4u) * (double)rdf32(sp0 - 0xc0u));
    wr32(sp0 - 0xecu, sp0 - 0xd0u);
    wr32(sp0 - 0xccu, 0u);
    wrf32(sp0 - 0xd0u, (float)(double)(float)-d532);
    d533 = fr(g, (double)rdf32(sp0 - 0xd8u) * (double)rdf32(sp0 - 0xc0u));
    wr32(sp0 - 0xc4u, 0x3f800000u);
    wrf32(sp0 - 0xc8u, (float)(double)(float)d533);
    g->edx = edx;
    g->esp = sp0 - 0xe8u;
    t534 = cow_call_regs(g, COW_IMG(0x100a7b80u), sp0 - 0xd0u, self, g->edx, 0, 1, sp0 - 0xd0u);
    t535 = g->edx;
    eax = t534;
    edx = t535;
    loc_d0 = rd32(sp0 - 0xd0u);
    loc_cc = 0u;
    loc_c8 = rd32(sp0 - 0xc8u);
    goto L_100a76d5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a6240(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a6258u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xe8u);
        in_esi = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a625du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6267u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a6271u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a6284u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a6298u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a62b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a62c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a62e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a630cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6338u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6349u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a635eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a637cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6386u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6396u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a63a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a63b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a63d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        double loc_a8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a63e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        double loc_a8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a63f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        double loc_a8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6406u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        double loc_a8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6410u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a642cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6432u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a643fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6445u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6475u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xccu, 0u);
        wr32(sp0 - 0xc8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a64c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a64f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6504u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a650cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a651fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_c0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c0_f = rdf32(sp0 - 0xc0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a652eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6546u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6557u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a656du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6570u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_c0_f;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        double loc_c0_f;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        double loc_c0_f;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        double loc_c0_f;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        loc_c0_f = rdf32(sp0 - 0xc0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a65fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xd8u, 0u);
        wr32(sp0 - 0xd4u, 0u);
        wr32(sp0 - 0x98u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a65ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0x98u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6608u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, 0x3fu);
        wr32(sp0 - 0xecu, 4u);
        (void)sp0;
        return 1;
    }
    case 0x100a6615u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a661eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6635u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6649u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a665fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xdcu);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a6663u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xdcu);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a6679u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a668fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a669cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a66a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a66bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a66cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a66d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a66d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a66ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a66e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a66efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a66f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a6707u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6712u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a671fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a672cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6739u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6746u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6750u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6780u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a678au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a678fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6796u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a67a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a67d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a67dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6812u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        wr32(sp0 - 0xecu, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6817u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a681cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6823u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6835u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a683fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a6849u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6855u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6865u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6877u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6880u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a6899u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a68fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6908u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a691du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a692au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6953u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6959u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6966u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a696cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_dc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a699du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_dc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d4 = rd32(sp0 - 0xd4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_dc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d4 = rd32(sp0 - 0xd4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a69feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6a1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6a24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6a6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6aa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6aabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xccu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6ab5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6ac0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6accu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6adbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6ae4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6aebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6af3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6afdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6b7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6b92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6b97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6ba2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6bafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6bc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6bd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6be0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6bfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6c8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6c99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6cacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6cbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6cd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6cd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6ce2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6cf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6d65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6d86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6d96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6da3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6db3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6dbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6dcfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xf4u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6ddau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6de4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xd0u);
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6dfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xd0u);
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6e02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xd0u);
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6e28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6e39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6e48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6e4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_c8_f;
        double loc_cc_f;
        double loc_d0_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0_f = rdf32(sp0 - 0xd0u);
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6e57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6e61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6e69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6e72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6ea2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6eb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6ec0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6ecau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6ed5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6ee9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6efbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a6f13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6f97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6fa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6fbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a6fd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6fdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6fe6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a6fffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a7008u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a701fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a702du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a7066u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a7072u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a70aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a70b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a70c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a70c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a70d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a70e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a70ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a70f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7107u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7114u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7126u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7128u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7134u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7145u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7156u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a715cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7163u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7179u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a7183u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a718bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a7195u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a71a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a71acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a71bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a71c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        wr32(sp0 - 0xecu, sp0 - 0x98u);
        (void)sp0;
        return 1;
    }
    case 0x100a71cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a71d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a71ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a71e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a71f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a7205u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a720fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a721bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a722fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a7239u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a7245u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a725eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a7272u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xf0u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a7277u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a7282u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xd4u);
        (void)sp0;
        return 1;
    }
    case 0x100a728fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7299u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a729du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a72afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a72c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a72d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a72e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a72f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7308u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7311u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7319u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7324u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a732bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7331u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7336u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a733bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7340u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7345u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a734du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7351u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7359u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7361u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a736bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7373u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a737du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7381u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a739eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a73a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a73b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a73b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a73ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a73f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7403u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7439u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a743du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a744au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a745du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a7474u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a747fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a74a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->ebp = 0u;
        wr32(sp0 - 0xf8u, sp0 - 0xbcu);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a74fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xfcu;
        g->ebp = 0u;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a750bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebp = 0u;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        wr32(sp0 - 0xecu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x100a7513u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x100a7522u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a752eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf4u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a7530u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7582u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_c8_f;
        double loc_d0_f;
        double loc_dc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        loc_d0_f = rdf32(sp0 - 0xd0u);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a758cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7594u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a759eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a75aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a75b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        (void)sp0;
        return 1;
    }
    case 0x100a75c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf4u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100a75e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100a75f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100a7607u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100a7618u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf4u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100a763fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a764cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a765du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7666u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a766fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7686u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7694u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a769du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a769fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a76d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a76deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a76f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7704u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7713u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a7716u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7720u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7724u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7735u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7744u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a7747u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    case 0x100a7756u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a7765u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a7769u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0xf0u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100a778cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xe8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a6240(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a6240(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
