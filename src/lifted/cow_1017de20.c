/* f_0x1017de20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017de20(Guest* g)
{
    uint32_t al_m114;
    uint32_t al_m118;
    uint32_t al_m194;
    uint32_t al_m198;
    double al_m198_f;
    uint32_t al_m19c;
    double al_m1a8_f;
    double al_m1ac_f;
    double al_m1b0_f;
    uint32_t al_m1b4;
    double al_m1b4_f;
    double al_m1b8_f;
    uint32_t al_m1bc;
    double al_m1c0_f;
    uint32_t al_m1c4;
    double al_m1c4_f;
    uint32_t al_m1c8;
    double al_m1cc_f;
    double al_m1d0_f;
    uint32_t al_m1d4;
    double al_m1dc_f;
    uint32_t al_m1ec;
    uint32_t al_m1f0;
    uint32_t al_m1f4;
    double d10;
    double d11;
    double d111;
    double d112;
    double d12;
    double d124;
    double d125;
    double d134;
    double d135;
    double d138;
    double d14;
    double d140;
    double d141;
    double d142;
    double d15;
    double d16;
    double d17;
    double d173;
    double d174;
    double d175;
    double d176;
    double d178;
    double d18;
    double d180;
    double d182;
    double d183;
    double d184;
    double d185;
    double d186;
    double d187;
    double d188;
    double d189;
    double d19;
    double d190;
    double d191;
    double d192;
    double d193;
    double d194;
    double d195;
    double d196;
    double d197;
    double d198;
    double d199;
    double d200;
    double d201;
    double d202;
    double d203;
    double d204;
    double d205;
    double d206;
    double d207;
    double d208;
    double d209;
    double d21;
    double d210;
    double d211;
    double d212;
    double d213;
    double d214;
    double d216;
    double d217;
    double d218;
    double d22;
    double d221;
    double d222;
    double d224;
    double d225;
    double d229;
    double d230;
    double d232;
    double d233;
    double d238;
    double d239;
    double d24;
    double d240;
    double d241;
    double d243;
    double d245;
    double d247;
    double d248;
    double d249;
    double d25;
    double d250;
    double d251;
    double d252;
    double d253;
    double d254;
    double d255;
    double d256;
    double d257;
    double d258;
    double d259;
    double d260;
    double d261;
    double d262;
    double d263;
    double d264;
    double d265;
    double d266;
    double d267;
    double d268;
    double d269;
    double d270;
    double d271;
    double d273;
    double d274;
    double d275;
    double d278;
    double d279;
    double d281;
    double d282;
    double d286;
    double d287;
    double d289;
    double d290;
    double d295;
    double d296;
    double d297;
    double d298;
    double d3;
    double d300;
    double d302;
    double d304;
    double d305;
    double d306;
    double d307;
    double d308;
    double d309;
    double d310;
    double d311;
    double d312;
    double d313;
    double d314;
    double d315;
    double d316;
    double d317;
    double d318;
    double d319;
    double d320;
    double d322;
    double d323;
    double d324;
    double d327;
    double d328;
    double d330;
    double d331;
    double d335;
    double d336;
    double d338;
    double d339;
    double d344;
    double d345;
    double d346;
    double d347;
    double d349;
    double d351;
    double d353;
    double d354;
    double d355;
    double d356;
    double d357;
    double d358;
    double d359;
    double d361;
    double d362;
    double d363;
    double d366;
    double d367;
    double d369;
    double d373;
    double d374;
    double d376;
    double d381;
    double d382;
    double d383;
    double d384;
    double d386;
    double d388;
    double d390;
    double d391;
    double d393;
    double d394;
    double d397;
    double d399;
    double d4;
    double d400;
    double d404;
    double d406;
    double d407;
    double d41;
    double d42;
    double d425;
    double d426;
    double d427;
    double d428;
    double d43;
    double d430;
    double d432;
    double d434;
    double d435;
    double d436;
    double d437;
    double d438;
    double d439;
    double d44;
    double d440;
    double d441;
    double d442;
    double d443;
    double d444;
    double d445;
    double d446;
    double d447;
    double d448;
    double d449;
    double d45;
    double d450;
    double d451;
    double d452;
    double d453;
    double d454;
    double d455;
    double d456;
    double d457;
    double d458;
    double d459;
    double d460;
    double d461;
    double d462;
    double d463;
    double d464;
    double d465;
    double d466;
    double d468;
    double d469;
    double d470;
    double d473;
    double d474;
    double d476;
    double d477;
    double d48;
    double d481;
    double d482;
    double d484;
    double d485;
    double d49;
    double d490;
    double d491;
    double d492;
    double d493;
    double d495;
    double d497;
    double d499;
    double d5;
    double d50;
    double d500;
    double d501;
    double d502;
    double d503;
    double d504;
    double d505;
    double d506;
    double d507;
    double d508;
    double d509;
    double d51;
    double d510;
    double d511;
    double d512;
    double d513;
    double d514;
    double d515;
    double d516;
    double d517;
    double d518;
    double d519;
    double d520;
    double d521;
    double d522;
    double d523;
    double d525;
    double d526;
    double d527;
    double d53;
    double d530;
    double d531;
    double d533;
    double d534;
    double d538;
    double d539;
    double d54;
    double d541;
    double d542;
    double d547;
    double d548;
    double d549;
    double d55;
    double d550;
    double d552;
    double d554;
    double d556;
    double d557;
    double d558;
    double d559;
    double d560;
    double d561;
    double d562;
    double d563;
    double d564;
    double d565;
    double d566;
    double d567;
    double d568;
    double d569;
    double d570;
    double d571;
    double d572;
    double d574;
    double d575;
    double d576;
    double d579;
    double d580;
    double d582;
    double d583;
    double d587;
    double d588;
    double d590;
    double d591;
    double d596;
    double d597;
    double d598;
    double d599;
    double d6;
    double d60;
    double d601;
    double d603;
    double d605;
    double d606;
    double d607;
    double d608;
    double d609;
    double d61;
    double d610;
    double d611;
    double d613;
    double d614;
    double d615;
    double d618;
    double d619;
    double d621;
    double d625;
    double d626;
    double d628;
    double d63;
    double d633;
    double d634;
    double d635;
    double d636;
    double d638;
    double d64;
    double d640;
    double d642;
    double d643;
    double d645;
    double d646;
    double d649;
    double d65;
    double d651;
    double d652;
    double d656;
    double d658;
    double d659;
    double d66;
    double d67;
    double d68;
    double d69;
    double d7;
    double d74;
    double d75;
    double d77;
    double d78;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d87;
    double d88;
    double d9;
    double d90;
    double d91;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
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
    uint32_t t110;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t136;
    uint32_t t137;
    uint32_t t139;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
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
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t177;
    uint32_t t179;
    uint32_t t181;
    uint32_t t2;
    uint32_t t20;
    uint32_t t215;
    uint32_t t219;
    uint32_t t220;
    uint32_t t223;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t23;
    uint32_t t231;
    uint32_t t234;
    uint32_t t235;
    uint32_t t236;
    uint32_t t237;
    uint32_t t242;
    uint32_t t244;
    uint32_t t246;
    uint32_t t26;
    uint32_t t27;
    uint32_t t272;
    uint32_t t276;
    uint32_t t277;
    uint32_t t28;
    uint32_t t280;
    uint32_t t283;
    uint32_t t284;
    uint32_t t285;
    uint32_t t288;
    uint32_t t29;
    uint32_t t291;
    uint32_t t292;
    uint32_t t293;
    uint32_t t294;
    uint32_t t299;
    uint32_t t30;
    uint32_t t301;
    uint32_t t303;
    uint32_t t31;
    uint32_t t32;
    uint32_t t321;
    uint32_t t325;
    uint32_t t326;
    uint32_t t329;
    uint32_t t33;
    uint32_t t332;
    uint32_t t333;
    uint32_t t334;
    uint32_t t337;
    uint32_t t34;
    uint32_t t340;
    uint32_t t341;
    uint32_t t342;
    uint32_t t343;
    uint32_t t348;
    uint32_t t35;
    uint32_t t350;
    uint32_t t352;
    uint32_t t36;
    uint32_t t360;
    uint32_t t364;
    uint32_t t365;
    uint32_t t368;
    uint32_t t37;
    uint32_t t370;
    uint32_t t371;
    uint32_t t372;
    uint32_t t375;
    uint32_t t377;
    uint32_t t378;
    uint32_t t379;
    uint32_t t38;
    uint32_t t380;
    uint32_t t385;
    uint32_t t387;
    uint32_t t389;
    uint32_t t39;
    uint32_t t392;
    uint32_t t395;
    uint32_t t396;
    uint32_t t398;
    uint32_t t40;
    uint32_t t401;
    uint32_t t402;
    uint32_t t403;
    uint32_t t405;
    uint32_t t408;
    uint32_t t409;
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
    uint32_t t429;
    uint32_t t431;
    uint32_t t433;
    uint32_t t46;
    uint32_t t467;
    uint32_t t47;
    uint32_t t471;
    uint32_t t472;
    uint32_t t475;
    uint32_t t478;
    uint32_t t479;
    uint32_t t480;
    uint32_t t483;
    uint32_t t486;
    uint32_t t487;
    uint32_t t488;
    uint32_t t489;
    uint32_t t494;
    uint32_t t496;
    uint32_t t498;
    uint32_t t52;
    uint32_t t524;
    uint32_t t528;
    uint32_t t529;
    uint32_t t532;
    uint32_t t535;
    uint32_t t536;
    uint32_t t537;
    uint32_t t540;
    uint32_t t543;
    uint32_t t544;
    uint32_t t545;
    uint32_t t546;
    uint32_t t551;
    uint32_t t553;
    uint32_t t555;
    uint32_t t56;
    uint32_t t57;
    uint32_t t573;
    uint32_t t577;
    uint32_t t578;
    uint32_t t58;
    uint32_t t581;
    uint32_t t584;
    uint32_t t585;
    uint32_t t586;
    uint32_t t589;
    uint32_t t59;
    uint32_t t592;
    uint32_t t593;
    uint32_t t594;
    uint32_t t595;
    uint32_t t600;
    uint32_t t602;
    uint32_t t604;
    uint32_t t612;
    uint32_t t616;
    uint32_t t617;
    uint32_t t62;
    uint32_t t620;
    uint32_t t622;
    uint32_t t623;
    uint32_t t624;
    uint32_t t627;
    uint32_t t629;
    uint32_t t630;
    uint32_t t631;
    uint32_t t632;
    uint32_t t637;
    uint32_t t639;
    uint32_t t641;
    uint32_t t644;
    uint32_t t647;
    uint32_t t648;
    uint32_t t650;
    uint32_t t653;
    uint32_t t654;
    uint32_t t655;
    uint32_t t657;
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
    uint32_t t673;
    uint32_t t674;
    uint32_t t675;
    uint32_t t676;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t76;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t89;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 540u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017de3fu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017de3f;
    case 0x1017de61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017de61;
    case 0x1017df11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198_f = rdf32(sp1 - 0x198u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017df11;
    case 0x1017df23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198_f = rdf32(sp1 - 0x198u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017df23;
    case 0x1017df36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198_f = rdf32(sp1 - 0x198u); goto E_1017df36;
    case 0x1017df49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017df49;
    case 0x1017df51u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017df51;
    case 0x1017df5au: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017df5a;
    case 0x1017df99u: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); al_m198_f = rdf32(sp1 - 0x198u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017df99;
    case 0x1017dfabu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); al_m198_f = rdf32(sp1 - 0x198u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017dfab;
    case 0x1017dfbeu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); al_m198_f = rdf32(sp1 - 0x198u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017dfbe;
    case 0x1017dfd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017dfd3;
    case 0x1017dfdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017dfdb;
    case 0x1017dfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017dfde;
    case 0x1017dff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017dff1;
    case 0x1017dffau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017dffa;
    case 0x1017e00du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e00d;
    case 0x1017e016u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e016;
    case 0x1017e01du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e01d;
    case 0x1017e029u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e029;
    case 0x1017e049u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e049;
    case 0x1017e053u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e053;
    case 0x1017e061u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e061;
    case 0x1017e06au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e06a;
    case 0x1017e06fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e06f;
    case 0x1017e077u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e077;
    case 0x1017e081u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e081;
    case 0x1017e091u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e091;
    case 0x1017e09bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e09b;
    case 0x1017e0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0a9;
    case 0x1017e0b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0b2;
    case 0x1017e0b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0b7;
    case 0x1017e0bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0bf;
    case 0x1017e0c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0c9;
    case 0x1017e0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0d9;
    case 0x1017e0e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0e3;
    case 0x1017e0f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0f1;
    case 0x1017e0fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0fa;
    case 0x1017e0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e0ff;
    case 0x1017e107u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e107;
    case 0x1017e111u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e111;
    case 0x1017e121u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e121;
    case 0x1017e12bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e12b;
    case 0x1017e139u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e139;
    case 0x1017e143u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e143;
    case 0x1017e148u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e148;
    case 0x1017e150u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e150;
    case 0x1017e15au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e15a;
    case 0x1017e168u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e168;
    case 0x1017e182u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e182;
    case 0x1017e223u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e223;
    case 0x1017e2c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e2c4;
    case 0x1017e33au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e33a;
    case 0x1017e348u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e348;
    case 0x1017e3dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e3dc;
    case 0x1017e449u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e449;
    case 0x1017e457u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e457;
    case 0x1017e4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e4eb;
    case 0x1017e558u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e558;
    case 0x1017e566u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e566;
    case 0x1017e5fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e5fa;
    case 0x1017e653u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e653;
    case 0x1017e667u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e667;
    case 0x1017e675u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e675;
    case 0x1017e69fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017e69f;
    case 0x1017e6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e6b6;
    case 0x1017e6cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017e6ca;
    case 0x1017e6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e6e7;
    case 0x1017e75du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e75d;
    case 0x1017e799u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e799;
    case 0x1017e7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e7a9;
    case 0x1017e802u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e802;
    case 0x1017e840u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e840;
    case 0x1017e87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e87f;
    case 0x1017e899u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e899;
    case 0x1017e8a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8a7;
    case 0x1017e8b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8b3;
    case 0x1017e8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e8ba;
    case 0x1017e8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e8cc;
    case 0x1017e8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8e1;
    case 0x1017e981u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e981;
    case 0x1017e992u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e992;
    case 0x1017ea31u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ea31;
    case 0x1017ea48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea48;
    case 0x1017ea52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ea52;
    case 0x1017ea5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ea5e;
    case 0x1017ea69u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ea69;
    case 0x1017ea77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea77;
    case 0x1017ea86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea86;
    case 0x1017ea9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ea9b;
    case 0x1017ea9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ea9f;
    case 0x1017eaa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eaa1;
    case 0x1017eaaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017eaaa;
    case 0x1017eab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eab4;
    case 0x1017eac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eac7;
    case 0x1017ead2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ead2;
    case 0x1017ead5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ead5;
    case 0x1017ead8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ead8;
    case 0x1017eaeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eaee;
    case 0x1017eb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb06;
    case 0x1017eb0au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017eb0a;
    case 0x1017eb0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017eb0e;
    case 0x1017eb10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb10;
    case 0x1017eb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017eb24;
    case 0x1017eb3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb3c;
    case 0x1017eb3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb3e;
    case 0x1017eb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb54;
    case 0x1017eb5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb5f;
    case 0x1017eb67u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017eb67;
    case 0x1017eb6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb6b;
    case 0x1017eb88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); goto E_1017eb88;
    case 0x1017eb8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017eb8a;
    case 0x1017eb8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017eb8e;
    case 0x1017ebaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); goto E_1017ebaa;
    case 0x1017ebacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ebac;
    case 0x1017ebb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ebb8;
    case 0x1017ebcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ebcf;
    case 0x1017ebdau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ebda;
    case 0x1017ebf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ebf0;
    case 0x1017ebf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ebf8;
    case 0x1017ec03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec03;
    case 0x1017ec19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec19;
    case 0x1017ec1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec1f;
    case 0x1017ec25u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec25;
    case 0x1017ec28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec28;
    case 0x1017ec34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec34;
    case 0x1017ec3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec3e;
    case 0x1017ec4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec4a;
    case 0x1017ec5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec5d;
    case 0x1017ec61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec61;
    case 0x1017ec63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec63;
    case 0x1017ec6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec6e;
    case 0x1017ec75u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec75;
    case 0x1017ec7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec7c;
    case 0x1017ec80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec80;
    case 0x1017ec83u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec83;
    case 0x1017ec98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec98;
    case 0x1017ec9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec9a;
    case 0x1017ecafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ecaf;
    case 0x1017ecbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ecbd;
    case 0x1017ecd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ecd1;
    case 0x1017ecd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ecd5;
    case 0x1017eceau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ecea;
    case 0x1017ecf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ecf1;
    case 0x1017ed04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017ed04;
    case 0x1017edfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017edfb;
    case 0x1017ee03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017ee03;
    case 0x1017ee66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee66;
    case 0x1017ee6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee6e;
    case 0x1017ee7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee7f;
    case 0x1017ee87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee87;
    case 0x1017eeb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017eeb4;
    case 0x1017eee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017eee2;
    case 0x1017ef26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef26;
    case 0x1017ef37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef37;
    case 0x1017ef3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef3b;
    case 0x1017ef47u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef47;
    case 0x1017ef4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef4c;
    case 0x1017ef53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef53;
    case 0x1017ef58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ef58;
    case 0x1017ef99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017ef99;
    case 0x1017ef9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ef9e;
    case 0x1017efb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017efb1;
    case 0x1017f0a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f0a8;
    case 0x1017f0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f0b0;
    case 0x1017f183u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f183;
    case 0x1017f18bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f18b;
    case 0x1017f1acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1ac;
    case 0x1017f1b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1b4;
    case 0x1017f1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1c5;
    case 0x1017f1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1cd;
    case 0x1017f1deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1de;
    case 0x1017f1e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1e4;
    case 0x1017f1eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f1ea;
    case 0x1017f221u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f221;
    case 0x1017f259u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f259;
    case 0x1017f2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2a7;
    case 0x1017f2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2b8;
    case 0x1017f2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2bc;
    case 0x1017f2c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2c8;
    case 0x1017f2cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2cd;
    case 0x1017f2d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2d4;
    case 0x1017f2d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f2d9;
    case 0x1017f31au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017f31a;
    case 0x1017f31fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017f31f;
    case 0x1017f332u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017f332;
    case 0x1017f429u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f429;
    case 0x1017f431u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f431;
    case 0x1017f556u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f556;
    case 0x1017f55eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f55e;
    case 0x1017f57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f57f;
    case 0x1017f587u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f587;
    case 0x1017f5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5a8;
    case 0x1017f5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5b0;
    case 0x1017f5c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5c1;
    case 0x1017f5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5c9;
    case 0x1017f5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5da;
    case 0x1017f5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5e0;
    case 0x1017f5e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f5e6;
    case 0x1017f5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f5f7;
    case 0x1017f5fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f5fd;
    case 0x1017f603u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017f603;
    case 0x1017f644u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017f644;
    case 0x1017f686u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017f686;
    case 0x1017f6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f6de;
    case 0x1017f6efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f6ef;
    case 0x1017f6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f6f3;
    case 0x1017f6ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f6ff;
    case 0x1017f704u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f704;
    case 0x1017f70bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f70b;
    case 0x1017f710u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017f710;
    case 0x1017f751u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017f751;
    case 0x1017f756u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017f756;
    case 0x1017f769u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017f769;
    case 0x1017f860u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f860;
    case 0x1017f868u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f868;
    case 0x1017f9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f9df;
    case 0x1017f9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f9e7;
    case 0x1017fa08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa08;
    case 0x1017fa10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa10;
    case 0x1017fa31u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa31;
    case 0x1017fa39u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa39;
    case 0x1017fa5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa5a;
    case 0x1017fa62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa62;
    case 0x1017fa73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa73;
    case 0x1017fa7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa7b;
    case 0x1017fa8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa8c;
    case 0x1017fa92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa92;
    case 0x1017fa98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017fa98;
    case 0x1017faa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017faa9;
    case 0x1017faafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017faaf;
    case 0x1017fab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017fab5;
    case 0x1017fac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017fac6;
    case 0x1017faccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017facc;
    case 0x1017fad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_1017fad2;
    case 0x1017fb1du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_1017fb1d;
    case 0x1017fb69u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_1017fb69;
    case 0x1017fbcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbcb;
    case 0x1017fbdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbdc;
    case 0x1017fbe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbe0;
    case 0x1017fbecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbec;
    case 0x1017fbf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbf1;
    case 0x1017fbf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbf8;
    case 0x1017fbfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fbfd;
    case 0x1017fc3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017fc3e;
    case 0x1017fc43u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017fc43;
    case 0x1017fc56u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017fc56;
    case 0x1017fd4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017fd4d;
    case 0x1017fd55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017fd55;
    case 0x1017fd78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017fd78;
    case 0x1017fd9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017fd9c;
    case 0x1017fdd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fdd6;
    case 0x1017fde7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fde7;
    case 0x1017fdebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fdeb;
    case 0x1017fdf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fdf7;
    case 0x1017fdfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fdfc;
    case 0x1017fe03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fe03;
    case 0x1017fe08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fe08;
    case 0x1017fe49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017fe49;
    case 0x1017fe56u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fe56;
    case 0x1017fe70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017fe70;
    case 0x1017fe8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017fe8f;
    case 0x1017feaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017feae;
    case 0x1017feb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017feb3;
    case 0x1017febeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017febe;
    case 0x1017fec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017fec2;
    case 0x1017fed6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017fed6;
    case 0x1017fedau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017feda;
    case 0x1017feefu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017feef;
    case 0x1017fef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017fef6;
    case 0x1017ff09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1017ff09;
    case 0x10180000u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180000;
    case 0x10180008u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180008;
    case 0x1018006bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018006b;
    case 0x10180073u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180073;
    case 0x10180084u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180084;
    case 0x1018008cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018008c;
    case 0x101800b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101800b9;
    case 0x101800e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101800e7;
    case 0x1018012bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1018012b;
    case 0x1018013cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1018013c;
    case 0x10180140u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180140;
    case 0x1018014cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1018014c;
    case 0x10180151u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180151;
    case 0x10180158u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180158;
    case 0x1018015du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1018015d;
    case 0x1018019eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1018019e;
    case 0x101801a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_101801a3;
    case 0x101801b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_101801b6;
    case 0x101802adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101802ad;
    case 0x101802b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101802b5;
    case 0x10180388u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180388;
    case 0x10180390u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180390;
    case 0x101803b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803b1;
    case 0x101803b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803b9;
    case 0x101803cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803ca;
    case 0x101803d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803d2;
    case 0x101803e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803e3;
    case 0x101803e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803e9;
    case 0x101803efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_101803ef;
    case 0x10180426u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180426;
    case 0x1018045eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1018045e;
    case 0x101804acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804ac;
    case 0x101804bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804bd;
    case 0x101804c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804c1;
    case 0x101804cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804cd;
    case 0x101804d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804d2;
    case 0x101804d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804d9;
    case 0x101804deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101804de;
    case 0x1018051fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1018051f;
    case 0x10180524u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_10180524;
    case 0x10180537u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_10180537;
    case 0x1018062eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1018062e;
    case 0x10180636u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180636;
    case 0x1018075bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018075b;
    case 0x10180763u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180763;
    case 0x10180784u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180784;
    case 0x1018078cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018078c;
    case 0x101807adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807ad;
    case 0x101807b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807b5;
    case 0x101807c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807c6;
    case 0x101807ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807ce;
    case 0x101807dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807df;
    case 0x101807e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807e5;
    case 0x101807ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_101807eb;
    case 0x101807fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_101807fc;
    case 0x10180802u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180802;
    case 0x10180808u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180808;
    case 0x10180849u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180849;
    case 0x1018088bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1018088b;
    case 0x101808e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101808e3;
    case 0x101808f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101808f4;
    case 0x101808f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101808f8;
    case 0x10180904u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180904;
    case 0x10180909u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180909;
    case 0x10180910u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180910;
    case 0x10180915u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180915;
    case 0x10180956u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_10180956;
    case 0x1018095bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1018095b;
    case 0x1018096eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1018096e;
    case 0x10180a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180a65;
    case 0x10180a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180a6d;
    case 0x10180be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180be4;
    case 0x10180becu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180bec;
    case 0x10180c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c0d;
    case 0x10180c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c15;
    case 0x10180c36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c36;
    case 0x10180c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c3e;
    case 0x10180c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c5f;
    case 0x10180c67u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c67;
    case 0x10180c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c78;
    case 0x10180c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c80;
    case 0x10180c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c91;
    case 0x10180c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c97;
    case 0x10180c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180c9d;
    case 0x10180caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180cae;
    case 0x10180cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180cb4;
    case 0x10180cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180cba;
    case 0x10180ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180ccb;
    case 0x10180cd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180cd1;
    case 0x10180cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_10180cd7;
    case 0x10180d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_10180d22;
    case 0x10180d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_10180d6e;
    case 0x10180dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180dd0;
    case 0x10180de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180de1;
    case 0x10180de5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180de5;
    case 0x10180df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180df1;
    case 0x10180df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180df6;
    case 0x10180dfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180dfd;
    case 0x10180e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180e02;
    case 0x10180e43u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_10180e43;
    case 0x10180e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_10180e48;
    case 0x10180e5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_10180e5b;
    case 0x10180f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180f52;
    case 0x10180f5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180f5a;
    case 0x10180f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180f7d;
    case 0x10180fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180fa1;
    case 0x10180fdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180fdb;
    case 0x10180fecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180fec;
    case 0x10180ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180ff0;
    case 0x10180ffcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10180ffc;
    case 0x10181001u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10181001;
    case 0x10181008u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10181008;
    case 0x1018100du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1018100d;
    case 0x1018104eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); goto E_1018104e;
    case 0x1018105bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1018105b;
    case 0x10181075u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_10181075;
    case 0x10181094u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10181094;
    case 0x101810b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101810b3;
    case 0x101810c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_101810c8;
    case 0x101810efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_101810ef;
    case 0x10181118u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1f0 = rd32(sp1 - 0x1f0u); al_m1ec = rd32(sp1 - 0x1ecu); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m19c = rd32(sp1 - 0x19cu); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); loc_4 = rd32(sp0 - 4u); goto E_10181118;
    default: break;
    }
#endif

    COW_AT(1017de20)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x1ecu, in_esi);
    wr32(sp1 - 0x1f0u, in_edi);
    wr32(sp1 - 0x1c8u, self);
    if (rd32(sp0 + 0xcu) == 0u)
    {
        eax = rd32(sp0 + 0xcu);
        goto L_1017df5a;
    }
    COW_AT(1017de3f)
    wr32(sp1 - 0x118u, self + 0x38e1cu);
    wr32(sp1 - 0x1f4u, self + 0x38e1cu);
    t1 = rd32(sp0 + 8u) + 0x40u;
    wr32(sp1 - 0x1f8u, t1);
    wr32(sp1 - 0x1fcu, sp1 - 0x110u);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017de61u);
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x110u, t1, self + 0x38e1cu);
    COW_AT(1017de61)
    t2 = rd32(sp1 - 0x118u);
    d3 = (double)rdf32(rd32(sp1 - 0x118u) + 0x20u);
    esi = sp1 - 0x110u;
    edi = sp1 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(t2 + 4u) * (double)rdf32(rd32(sp0 + 8u) + 0x1cu)) + fr(g, (double)rdf32(t2 + 0x24u) * (double)rdf32(rd32(sp0 + 8u) + 0x24u))) + fr(g, (double)rdf32(t2 + 0x14u) * (double)rdf32(rd32(sp0 + 8u) + 0x20u))) + (double)rdf32(t2 + 0x34u));
    d5 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(t2 + 8u) * (double)rdf32(rd32(sp0 + 8u) + 0x1cu)) + fr(g, (double)rdf32(t2 + 0x28u) * (double)rdf32(rd32(sp0 + 8u) + 0x24u))) + fr(g, (double)rdf32(t2 + 0x18u) * (double)rdf32(rd32(sp0 + 8u) + 0x20u))) + (double)rdf32(t2 + 0x38u));
    d6 = fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(rd32(sp0 + 8u) + 0x24u)) + fr(g, (double)rdf32(t2 + 0x10u) * (double)rdf32(rd32(sp0 + 8u) + 0x20u))) + fr(g, (double)rdf32(t2) * (double)rdf32(rd32(sp0 + 8u) + 0x1cu))) + (double)rdf32(t2 + 0x30u));
    wrf32(sp1 - 0x1a8u, (float)(double)(float)d5);
    d7 = fr(g, d6 - (double)rdf32(rd32(sp1 - 0x1c8u) + 0x390f0u));
    wrf32(sp1 - 0x198u, (float)(double)(float)d7);
    d8 = fr(g, (double)(float)d5 - (double)rdf32(rd32(sp1 - 0x1c8u) + 0x390f8u));
    d9 = fr(g, d4 - (double)rdf32(rd32(sp1 - 0x1c8u) + 0x390f4u));
    d10 = (double)(float)fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, (double)(float)d7 * (double)(float)d7));
    wrf32(sp1 - 0x198u, (float)d10);
    if (rd8(rd32(sp0 + 8u) + 0xbu) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(rd32(sp0 + 8u) + 0xbu);
        ecx = rd32(sp1 - 0x1c8u);
        edi = rd32(sp0 + 8u);
        al_m198_f = d10;
        x0 = fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, (double)(float)d7 * (double)(float)d7));
        goto L_1017df23;
    }
    eax = (t2 & 0xffffff00u) | rd8(rd32(sp0 + 8u) + 0xbu);
    ecx = rd32(sp1 - 0x1c8u);
    edi = rd32(sp0 + 8u);
    al_m198_f = d10;
    x0 = fr(g, fr(g, fr(g, d8 * d8) + fr(g, d9 * d9)) + fr(g, (double)(float)d7 * (double)(float)d7));
    COW_AT(1017df11)
    d11 = fr(g, (double)rdf32(ecx + 0x39428u) * (double)rdf32(edi + 0xd0u));
    if ((cow_fsw(g, x0, d11, 0u) & 0x4100u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
L_1017df36: ;
    COW_AT(1017df36)
    wr32(sp1 - 0x1f4u, edi + 0xf4u);
    wr32(sp1 - 0x1f8u, ecx + 0x38edcu);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017df49u);
    t13 = cow_call_regs(g, COW_IMG(0x10181bb0u), ecx + 0x38edcu, g->ecx, g->edx, 0, 2, ecx + 0x38edcu, edi + 0xf4u);
    eax = t13;
    COW_AT(1017df49)
    if (eax != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    COW_AT(1017df51)
    esi = rd32(sp1 - 0x1c8u);
L_1017dfde: ;
    COW_AT(1017dfde)
    d21 = (double)rdf32(sp1 - 0x198u);
    d22 = (double)rdf32(edi + 0xccu);
    if ((cow_fsw(g, d21, d22, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d21, d22, 0u) & 0x4100u;
    COW_AT(1017dffa)
        d24 = (double)rdf32(sp1 - 0x198u);
        d25 = (double)rdf32(edi + 0xc8u);
        if ((cow_fsw(g, d24, d25, 0u) & 0x4100u) != 0u)
        {
    COW_AT(1017e016)
            t27 = rd32(edi + 0x18u);
            wr32(sp1 - 0x19cu, t27);
            al_m19c = t27;
        }
        else
        {
    COW_AT(1017e00d)
            t26 = rd32(edi + 0x14u);
            wr32(sp1 - 0x19cu, t26);
            al_m19c = t26;
        }
    }
    else
    {
    COW_AT(1017dff1)
        t23 = rd32(edi + 0x10u);
        wr32(sp1 - 0x19cu, t23);
        al_m19c = t23;
    }
    COW_AT(1017e01d)
    if (al_m19c == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    COW_AT(1017e029)
    t28 = rd32(esi + 0x39448u) + 1u;
    t29 = rd32(esi + 0x39100u);
    wr32(esi + 0x39448u, t28);
    if (t29 == rd32(edi + 0xe4u))
    {
        edx = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(edi + 0xe4u);
        edx = rd32(sp0 + 4u);
    COW_AT(1017e049)
        wr32(esi + 0x39100u, eax);
        if (eax == 0u)
        {
    COW_AT(1017e077)
            wr32(esi + 0x3945cu, 0u);
        }
        else
        {
    COW_AT(1017e053)
            if (rd32(eax * 0x4cu + edx - 0x48u) != 0u)
            {
                eax = rd32(eax * 0x4cu + edx - 0x48u);
    COW_AT(1017e061)
                t30 = rd32(eax + 8u);
                if (t30 != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e06a)
                    t31 = rd8(eax);
                    if ((uint8_t)t31 != 0x63u)
                    {
    COW_AT(1017e06f)
                        wr32(esi + 0x3945cu, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e081)
    if (rd32(esi + 0x39104u) != rd32(edi + 0xe8u))
    {
        eax = rd32(edi + 0xe8u);
    COW_AT(1017e091)
        wr32(esi + 0x39104u, eax);
        if (eax == 0u)
        {
    COW_AT(1017e0bf)
            wr32(esi + 0x39460u, 0u);
        }
        else
        {
    COW_AT(1017e09b)
            if (rd32(eax * 0x4cu + edx - 0x48u) != 0u)
            {
                eax = rd32(eax * 0x4cu + edx - 0x48u);
    COW_AT(1017e0a9)
                t32 = rd32(eax + 8u);
                if (t32 != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e0b2)
                    t33 = rd8(eax);
                    if ((uint8_t)t33 != 0x63u)
                    {
    COW_AT(1017e0b7)
                        wr32(esi + 0x39460u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e0c9)
    if (rd32(esi + 0x39108u) != rd32(edi + 0xecu))
    {
        eax = rd32(edi + 0xecu);
    COW_AT(1017e0d9)
        wr32(esi + 0x39108u, eax);
        if (eax == 0u)
        {
    COW_AT(1017e107)
            wr32(esi + 0x39464u, 0u);
        }
        else
        {
    COW_AT(1017e0e3)
            if (rd32(eax * 0x4cu + edx - 0x48u) != 0u)
            {
                eax = rd32(eax * 0x4cu + edx - 0x48u);
    COW_AT(1017e0f1)
                t34 = rd32(eax + 8u);
                if (t34 != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e0fa)
                    t35 = rd8(eax);
                    if ((uint8_t)t35 != 0x63u)
                    {
    COW_AT(1017e0ff)
                        wr32(esi + 0x39464u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e111)
    if (rd32(esi + 0x3910cu) != rd32(edi + 0xf0u))
    {
        eax = rd32(edi + 0xf0u);
    COW_AT(1017e121)
        wr32(esi + 0x3910cu, eax);
        if (eax == 0u)
        {
    COW_AT(1017e150)
            wr32(esi + 0x39468u, 0u);
        }
        else
        {
    COW_AT(1017e12b)
            if (rd32(eax * 0x4cu + edx - 0x48u) != 0u)
            {
                eax = rd32(eax * 0x4cu + edx - 0x48u);
    COW_AT(1017e139)
                if (rd32(eax + 8u) == 0u)
                {
                    edx = rd32(eax + 8u);
                }
                else
                {
                    ecx = eax + 8u;
                    edx = rd32(eax + 8u);
    COW_AT(1017e143)
                    t36 = rd8(eax);
                    if ((uint8_t)t36 != 0x63u)
                    {
    COW_AT(1017e148)
                        wr32(esi + 0x39468u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e15a)
    t37 = rd32(rd32(sp1 - 0x19cu) + 0x1cu);
    if (t37 > 3u)
    {
        al_m194 = rd32(sp1 - 0x194u);
    }
    else
    {
    COW_AT(1017e168)
        t38 = rd32(rd32(sp1 - 0x19cu) + 0x30u);
        wr32(sp1 - 0x1f4u, t38);
        t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1f8u, t39);
        g->edx = t38;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017e182u);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x130u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 2, t39, t38);
        t40 = g->edx;
        edx = t40;
    COW_AT(1017e182)
        wr32(COW_IMG(0x10639048u), 0u);
        wr32(COW_IMG(0x10639058u), 0u);
        wr32(COW_IMG(0x10639068u), 0u);
        wr32(COW_IMG(0x1063904cu), 0u);
        wr32(COW_IMG(0x1063905cu), 0u);
        wr32(COW_IMG(0x1063906cu), 0u);
        wr32(COW_IMG(0x10639050u), 0u);
        wr32(COW_IMG(0x10639060u), 0u);
        wr32(COW_IMG(0x10639070u), 0u);
        wr32(COW_IMG(0x10639054u), 0u);
        wr32(COW_IMG(0x10639064u), 0u);
        wr32(COW_IMG(0x10639074u), 0u);
        wr32(sp1 - 0x194u, 0u);
        wr32(sp1 - 0x1c4u, sp1 - 0x110u);
        wr32(sp1 - 0x1b4u, COW_IMG(0x10639048u));
        if (rd32(esi + 0x3945cu) == 0u)
        {
            ecx = sp1 - 0x110u;
            al_m194 = 0u;
            al_m1c4 = sp1 - 0x110u;
            al_m1b4 = COW_IMG(0x10639048u);
        }
        else
        {
            eax = rd32(esi + 0x3945cu);
    COW_AT(1017e223)
            d41 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0xa0u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(edi + 0x90u) * (double)rdf32(eax + 0x38u))) + fr(g, (double)rdf32(edi + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(edi + 0xb0u));
            wrf32(sp1 - 0x110u, (float)(double)(float)d41);
            d42 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0x84u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(edi + 0xa4u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(edi + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb4u));
            wrf32(sp1 - 0x10cu, (float)(double)(float)d42);
            d43 = fr(g, (double)rdf32(edi + 0x98u) * (double)rdf32(eax + 0x38u));
            d44 = fr(g, fr(g, (double)rdf32(edi + 0x88u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(edi + 0xa8u) * (double)rdf32(eax + 0x3cu)));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d45 = fr(g, fr(g, d44 + d43) + (double)rdf32(edi + 0xb8u));
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp1 - 0x108u, (float)(double)(float)d45);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e2c4u);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e2c4)
            wr32(sp1 - 0x194u, 1u);
            wr32(sp1 - 0x1b4u, COW_IMG(0x1063904cu));
            t46 = rd32(sp1 - 0x1c8u);
            t47 = rd32(sp0 + 8u);
            d48 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(COW_IMG(0x10639048u), (float)d48);
            d49 = fr(g, (double)rdf32(rd32(t46 + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(COW_IMG(0x10639058u), (float)d49);
            d50 = fr(g, (double)rdf32(rd32(t46 + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wrf32(COW_IMG(0x10639068u), (float)d50);
            wr32(sp1 - 0x1c4u, sp1 - 0x100u);
            d51 = (double)rdf32(rd32(t46 + 0x3945cu) + 0x4cu);
            t52 = rd32(t46 + 0x3945cu);
            wrf32(COW_IMG(0x10639078u), (float)fr(g, d51 * d51));
            ecx = sp1 - 0x100u;
            edx = t52;
            esi = t46;
            edi = t47;
            al_m194 = 1u;
            al_m1c4 = sp1 - 0x100u;
            al_m1b4 = COW_IMG(0x1063904cu);
        }
    COW_AT(1017e33a)
        if (rd32(esi + 0x39460u) != 0u)
        {
            eax = rd32(esi + 0x39460u);
    COW_AT(1017e348)
            d53 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0xa0u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(edi + 0x90u) * (double)rdf32(eax + 0x38u))) + fr(g, (double)rdf32(edi + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(edi + 0xb0u));
            wrf32(ecx, (float)d53);
            d54 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0xa4u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(edi + 0x84u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(edi + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb4u));
            wrf32(ecx + 4u, (float)d54);
            d55 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0xa8u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(edi + 0x88u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(edi + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb8u));
            wrf32(ecx + 8u, (float)d55);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e3dcu);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e3dc)
            t56 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t56);
            t57 = rd32(sp1 - 0x1b4u);
            t58 = rd32(sp1 - 0x1c8u);
            t59 = rd32(sp0 + 8u);
            d60 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t57, (float)d60);
            d61 = fr(g, (double)rdf32(rd32(t58 + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t57 + 0x10u, (float)d61);
            t62 = rd32(sp1 - 0x1c4u) + 0x10u;
            d63 = fr(g, (double)rdf32(rd32(t58 + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wr32(sp1 - 0x1c4u, t62);
            wr32(sp1 - 0x1b4u, t57 + 4u);
            wrf32(t57 + 0x20u, (float)d63);
            d64 = (double)rdf32(rd32(t58 + 0x39460u) + 0x4cu);
            wrf32(t57 + 0x30u, (float)fr(g, d64 * d64));
            ecx = t62;
            edx = t62;
            esi = t58;
            edi = t59;
            al_m194 = rd32(sp1 - 0x194u);
            al_m1c4 = rd32(sp1 - 0x1c4u);
            al_m1b4 = rd32(sp1 - 0x1b4u);
        }
    COW_AT(1017e449)
        if (rd32(esi + 0x39464u) != 0u)
        {
            eax = rd32(esi + 0x39464u);
    COW_AT(1017e457)
            d65 = fr(g, (double)rdf32(edi + 0x90u) * (double)rdf32(eax + 0x38u));
            d66 = fr(g, (double)rdf32(edi + 0xa0u) * (double)rdf32(eax + 0x3cu));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d67 = fr(g, fr(g, fr(g, d66 + d65) + fr(g, (double)rdf32(edi + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(edi + 0xb0u));
            wrf32(ecx, (float)d67);
            d68 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0x84u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(edi + 0xa4u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(edi + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb4u));
            wrf32(ecx + 4u, (float)d68);
            d69 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0x88u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(edi + 0xa8u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(edi + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb8u));
            wrf32(ecx + 8u, (float)d69);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e4ebu);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e4eb)
            t70 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t70);
            t71 = rd32(sp1 - 0x1b4u);
            t72 = rd32(sp1 - 0x1c8u);
            t73 = rd32(sp0 + 8u);
            d74 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t71, (float)d74);
            d75 = fr(g, (double)rdf32(rd32(t72 + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t71 + 0x10u, (float)d75);
            t76 = rd32(sp1 - 0x1c4u) + 0x10u;
            d77 = fr(g, (double)rdf32(rd32(t72 + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wr32(sp1 - 0x1c4u, t76);
            wr32(sp1 - 0x1b4u, t71 + 4u);
            wrf32(t71 + 0x20u, (float)d77);
            d78 = (double)rdf32(rd32(t72 + 0x39464u) + 0x4cu);
            wrf32(t71 + 0x30u, (float)fr(g, d78 * d78));
            ecx = t76;
            edx = t76;
            esi = t72;
            edi = t73;
            al_m194 = rd32(sp1 - 0x194u);
            al_m1b4 = rd32(sp1 - 0x1b4u);
        }
    COW_AT(1017e558)
        if (rd32(esi + 0x39468u) != 0u)
        {
            eax = rd32(esi + 0x39468u);
    COW_AT(1017e566)
            d79 = fr(g, (double)rdf32(edi + 0x90u) * (double)rdf32(eax + 0x38u));
            d80 = fr(g, (double)rdf32(edi + 0xa0u) * (double)rdf32(eax + 0x3cu));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d81 = fr(g, fr(g, fr(g, d80 + d79) + fr(g, (double)rdf32(eax + 0x34u) * (double)rdf32(edi + 0x80u))) + (double)rdf32(edi + 0xb0u));
            wrf32(ecx, (float)d81);
            d82 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0xa4u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(edi + 0x84u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(edi + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb4u));
            wrf32(ecx + 4u, (float)d82);
            d83 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(edi + 0xa8u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(edi + 0x88u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(edi + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(edi + 0xb8u));
            wrf32(ecx + 8u, (float)d83);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e5fau);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e5fa)
            t84 = rd32(sp1 - 0x1b4u);
            t85 = rd32(sp1 - 0x1c8u);
            t86 = rd32(sp0 + 8u);
            d87 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t84, (float)d87);
            d88 = fr(g, (double)rdf32(rd32(t85 + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t84 + 0x10u, (float)d88);
            t89 = rd32(t85 + 0x39468u);
            d90 = fr(g, (double)rdf32(rd32(t85 + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wrf32(t84 + 0x20u, (float)d90);
            d91 = (double)rdf32(rd32(t85 + 0x39468u) + 0x4cu);
            wrf32(t84 + 0x30u, (float)fr(g, d91 * d91));
            t92 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t92);
            edx = t89;
            esi = t85;
            edi = t86;
            al_m194 = t92;
        }
    }
    COW_AT(1017e653)
    if (rd32(esi + 0x39138u) == rd32(edi + 0xe0u))
    {
        ecx = rd32(edi + 0xe0u);
    }
    else
    {
        ecx = rd32(edi + 0xe0u);
    COW_AT(1017e667)
        wr32(esi + 0x39138u, ecx);
        if (ecx == 0u)
        {
    COW_AT(1017e7a9)
            t114 = rd32(esi + 0x391c0u);
            wr32(sp1 - 0x1b0u, t114);
            t115 = rd32(esi + 0x391c4u);
            wr32(sp1 - 0x1acu, t115);
            t116 = rd32(esi + 0x391c8u);
            wr32(sp1 - 0x1a8u, t116);
            wr32(esi + 0x39540u, t114);
            t117 = rd32(sp1 - 0x1a8u);
            wr32(esi + 0x39544u, t115);
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            wr32(esi + 0x39548u, t117);
            t118 = esi;
            esi = t118 + 0x39180u;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e802u);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e802)
            t119 = rd32(sp1 - 0x18cu);
            t120 = rd32(sp1 - 0x188u);
            t121 = rd32(sp1 - 0x184u);
            t122 = rd32(sp1 - 0x1c8u);
            wr32(t122 + 0x394d0u, t119);
            wr32(t122 + 0x394d4u, t120);
            wr32(t122 + 0x394d8u, t121);
            wr32(t122 + 0x394dcu, 0u);
            wr32(sp1 - 0x1f4u, t122 + 0x394e0u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e840u);
            cow_thiscall(g, COW_IMG(0x10188fa0u), rd32(COW_IMG(0x1065cb04u)), 1, t122 + 0x394e0u);
            esi = t122;
    COW_AT(1017e840)
            t123 = rd32(esi + 0x39258u);
            d124 = fr(g, (double)rdf32(esi + 0x39258u) - (double)rdf32(esi + 0x3925cu));
            wr32(esi + 0x39508u, t123);
            d125 = fr(g, (double)rdf32(esi + 0x3954cu) / d124);
            wrf32(esi + 0x39500u, (float)d125);
            t126 = rd32(esi + 0x39254u);
            wr32(sp1 - 0x1f4u, t126);
            wr32(sp1 - 0x1f8u, 0x22u);
            t127 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t127);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e87fu);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t127, 0x22u, t126);
    COW_AT(1017e87f)
            t128 = rd32(esi + 0x3925cu);
            wr32(sp1 - 0x1f4u, t128);
            wr32(sp1 - 0x1f8u, 0x24u);
            t129 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t129);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e899u);
            cow_thiscall(g, rd32(rd32(t129) + 0xc8u), rd32(t129), 3, t129, 0x24u, t128);
    COW_AT(1017e899)
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(esi + 0x39258u);
        }
        else
        {
    COW_AT(1017e675)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, esi + 0x3933cu);
            wr32(sp1 - 0x1fcu, esi + 0x39338u);
            wr32(sp1 - 0x200u, esi + 0x39334u);
            wr32(sp1 - 0x114u, esi + 0x3933cu);
            wr32(sp1 - 0x118u, esi + 0x39338u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e69fu);
            cow_thiscall(g, COW_IMG(0x10189120u), ecx, 4, esi + 0x39334u, esi + 0x39338u, esi + 0x3933cu, 0u);
            edi = esi + 0x39334u;
    COW_AT(1017e69f)
            wr32(sp1 - 0x1f4u, rd32(edi));
            wr32(sp1 - 0x1f8u, 0x22u);
            t93 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t93);
            g->eax = t93;
            g->edx = rd32(edi);
            t94 = rd32(edi);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e6b6u);
            t95 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t93, 0x22u, t94);
            t96 = g->edx;
            eax = t95;
            edx = t96;
    COW_AT(1017e6b6)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, esi + 0x39260u);
            g->edx = edx;
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e6cau);
            cow_thiscall(g, COW_IMG(0x10188ca0u), rd32(esi + 0x39138u), 2, esi + 0x39260u, 0u);
            t97 = g->edx;
            edx = t97;
            edi = esi + 0x39260u;
    COW_AT(1017e6ca)
            t98 = edi;
            esi = t98;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e6e7u);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e6e7)
            t99 = rd32(rd32(sp1 - 0x1c8u) + 0x392a0u);
            wr32(sp1 - 0x1b0u, t99);
            t100 = rd32(rd32(sp1 - 0x1c8u) + 0x392a4u);
            wr32(sp1 - 0x1acu, t100);
            t101 = rd32(rd32(sp1 - 0x1c8u) + 0x392a8u);
            wr32(sp1 - 0x1a8u, t101);
            t102 = rd32(sp1 - 0x1c8u);
            wr32(t102 + 0x394dcu, 0u);
            wr32(t102 + 0x39540u, t99);
            t103 = rd32(sp1 - 0x1a8u);
            wr32(t102 + 0x39544u, t100);
            t104 = rd32(sp1 - 0x18cu);
            wr32(t102 + 0x394d0u, t104);
            wr32(t102 + 0x39548u, t103);
            t105 = rd32(sp1 - 0x188u);
            t106 = rd32(sp1 - 0x184u);
            wr32(t102 + 0x394d4u, t105);
            wr32(sp1 - 0x1f4u, t102 + 0x394e0u);
            t107 = rd32(t102 + 0x39138u);
            wr32(t102 + 0x394d8u, t106);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e75du);
            cow_thiscall(g, COW_IMG(0x10188fa0u), t107, 1, rd32(sp1 - 0x1f4u));
            esi = t102;
    COW_AT(1017e75d)
            t108 = rd32(rd32(sp1 - 0x118u));
            t109 = rd32(rd32(sp1 - 0x114u));
            t110 = rd32(sp1 - 0x118u);
            d111 = fr(g, (double)rdf32(rd32(sp1 - 0x118u)) - (double)rdf32(rd32(sp1 - 0x114u)));
            wr32(esi + 0x39508u, t108);
            wr32(sp1 - 0x1f4u, t109);
            d112 = fr(g, (double)rdf32(esi + 0x3954cu) / d111);
            wr32(sp1 - 0x1f8u, 0x24u);
            wrf32(esi + 0x39500u, (float)d112);
            t113 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t113);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e799u);
            cow_thiscall(g, rd32(rd32(t113) + 0xc8u), t109, 3, t113, rd32(sp1 - 0x1f8u), rd32(sp1 - 0x1f4u));
            edi = t110;
    COW_AT(1017e799)
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(edi);
        }
    COW_AT(1017e8a7)
        wr32(sp1 - 0x1f4u, edx);
        wr32(sp1 - 0x1f8u, 0x25u);
        wr32(sp1 - 0x1fcu, eax);
        g->edx = edx;
        t130 = rd32(eax);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017e8b3u);
        cow_thiscall(g, rd32(t130 + 0xc8u), t130, 3, eax, 0x25u, edx);
        t131 = g->ecx;
        t132 = g->edx;
        ecx = t131;
        edx = t132;
    COW_AT(1017e8b3)
        esi = rd32(sp1 - 0x1c8u);
        edi = rd32(sp0 + 8u);
        al_m194 = rd32(sp1 - 0x194u);
    }
    COW_AT(1017e8ba)
    wr32(sp1 - 0x1f4u, esi + 0x38f9cu);
    if (rd32(sp0 + 0xcu) == 0u)
    {
        eax = rd32(sp0 + 0xcu);
        al_m1f4 = esi + 0x38f9cu;
    COW_AT(1017e981)
        wr32(sp1 - 0x1f8u, edi + 0x40u);
        wr32(sp1 - 0x1fcu, sp1 - 0xd0u);
        g->edx = sp1 - 0xd0u;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017e992u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0xd0u, edi + 0x40u, al_m1f4);
        t136 = g->edx;
        edx = t136;
    COW_AT(1017e992)
        t137 = rd32(sp0 + 8u);
        d138 = (double)rdf32(rd32(sp0 + 8u) + 0xa0u);
        esi = sp1 - 0xd0u;
        edi = sp1 - 0x190u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t139 = rd32(sp1 - 0x1c8u);
        d140 = fr(g, fr(g, fr(g, d138 * (double)rdf32(t139 + 0x39548u)) + fr(g, (double)rdf32(t137 + 0x90u) * (double)rdf32(t139 + 0x39544u))) + fr(g, (double)rdf32(t137 + 0x80u) * (double)rdf32(t139 + 0x39540u)));
        wrf32(sp1 - 0x1b0u, (float)(double)(float)-d140);
        d141 = fr(g, fr(g, fr(g, (double)rdf32(t137 + 0xa4u) * (double)rdf32(t139 + 0x39548u)) + fr(g, (double)rdf32(t137 + 0x94u) * (double)rdf32(t139 + 0x39544u))) + fr(g, (double)rdf32(t137 + 0x84u) * (double)rdf32(t139 + 0x39540u)));
        wrf32(sp1 - 0x1acu, (float)(double)(float)-d141);
        esi = t137;
        edi = t139;
        al_m1b0_f = (double)(float)-d140;
        al_m1ac_f = (double)(float)-d141;
        x1 = fr(g, (double)rdf32(t137 + 0x88u) * (double)rdf32(t139 + 0x39540u));
        x0 = fr(g, fr(g, (double)rdf32(t137 + 0xa8u) * (double)rdf32(t139 + 0x39548u)) + fr(g, (double)rdf32(t137 + 0x98u) * (double)rdf32(t139 + 0x39544u)));
    }
    else
    {
        al_m1f4 = esi + 0x38f9cu;
    COW_AT(1017e8cc)
        wr32(sp1 - 0x1f8u, sp1 - 0x40u);
        wr32(sp1 - 0x1fcu, sp1 - 0xd0u);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017e8e1u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0xd0u, sp1 - 0x40u, al_m1f4);
        t133 = g->edx;
        edx = t133;
    COW_AT(1017e8e1)
        esi = sp1 - 0xd0u;
        edi = sp1 - 0x190u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d134 = fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 0xa0u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x90u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u))) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x80u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u)));
        wrf32(sp1 - 0x1b0u, (float)(double)(float)-d134);
        d135 = fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 0xa4u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x94u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u))) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x84u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u)));
        wrf32(sp1 - 0x1acu, (float)(double)(float)-d135);
        esi = rd32(sp0 + 8u);
        edi = rd32(sp1 - 0x1c8u);
        al_m1b0_f = (double)(float)-d134;
        al_m1ac_f = (double)(float)-d135;
        x1 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x88u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u));
        x0 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 0xa8u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x98u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u)));
    }
    COW_AT(1017ea31)
    d142 = (double)(float)-fr(g, x0 + x1);
    wrf32(sp1 - 0x1a8u, (float)d142);
    if (rd32(edi + 0x39118u) == rd8(esi + 0xeu))
    {
        al_m1a8_f = d142;
    }
    else
    {
        eax = rd8(esi + 0xeu);
        al_m1a8_f = d142;
    COW_AT(1017ea48)
        wr32(edi + 0x39118u, eax);
        if (eax != 0u)
        {
    COW_AT(1017ea5e)
            wr32(sp1 - 0x1f4u, 1u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(COW_IMG(0x1045666cu));
            al_m1f4 = 1u;
        }
        else
        {
    COW_AT(1017ea52)
            wr32(sp1 - 0x1f4u, 0u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            al_m1f4 = 0u;
        }
    COW_AT(1017ea69)
        wr32(sp1 - 0x1f8u, 0x8fu);
        wr32(sp1 - 0x1fcu, eax);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ea77u);
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x8fu, al_m1f4);
        t143 = g->edx;
        edx = t143;
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017ea77)
    t144 = rd32(edi + 0x390fcu);
    if (t144 != (uint32_t)(int16_t)rd16(esi + 0xd4u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0xd4u);
    COW_AT(1017ea86)
        wr32(edi + 0x390fcu, eax);
        if (eax == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017ea9f)
            wr32(sp1 - 0x1f4u, 3u);
            al_m1f4 = 3u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017ea9b)
            wr32(sp1 - 0x1f4u, 2u);
            al_m1f4 = 2u;
        }
    COW_AT(1017eaa1)
        wr32(sp1 - 0x1f8u, 0x16u);
        wr32(sp1 - 0x1fcu, eax);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eaaau);
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, al_m1f4);
        t145 = g->edx;
        edx = t145;
    COW_AT(1017eaaa)
        wr32(edi + 0x39120u, 0u);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017eab4)
    t146 = rd32(edi + 0x39110u);
    if (t146 != (uint32_t)(int16_t)rd16(esi + 0xd6u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0xd6u);
    COW_AT(1017eac7)
        wr32(edi + 0x39110u, eax);
        if (eax == 0u) goto L_1017eb0e;
    COW_AT(1017ead2)
        if (eax == 1u) goto L_1017eb0a;
        eax = eax - 1u;
    COW_AT(1017ead5)
        if (eax != 1u)
        {
            al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
            al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
            al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
            goto L_1017eb54;
        }
    COW_AT(1017ead8)
        wr32(sp1 - 0x1f4u, 0u);
        wr32(sp1 - 0x1f8u, 0xfu);
        t147 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t147);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eaeeu);
        cow_thiscall(g, rd32(rd32(t147) + 0xc8u), rd32(t147), 3, t147, 0xfu, 0u);
    COW_AT(1017eaee)
        wr32(sp1 - 0x1f4u, 3u);
        wr32(sp1 - 0x1f8u, 0xdu);
        wr32(sp1 - 0x1fcu, 0u);
        t148 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x200u, t148);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eb06u);
        cow_thiscall(g, rd32(rd32(t148) + 0xfcu), rd32(t148), 4, t148, 0u, 0xdu, 3u);
    COW_AT(1017eb06)
        wr32(sp1 - 0x1f4u, 3u);
        al_m1f4 = 3u;
L_1017eb3e: ;
    COW_AT(1017eb3e)
        wr32(sp1 - 0x1f8u, 0xeu);
        wr32(sp1 - 0x1fcu, 0u);
        t151 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x200u, t151);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t152 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eb54u);
        cow_thiscall(g, rd32(rd32(t151) + 0xfcu), rd32(t151), 4, t151, 0u, 0xeu, al_m1f4);
        t153 = g->edx;
        edx = t153;
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
L_1017eb54: ;
    COW_AT(1017eb54)
    if (rd32(rd32(sp1 - 0x19cu) + 0x68u) == 0u)
    {
        ecx = rd32(sp1 - 0x19cu);
    }
    else
    {
        eax = rd32(rd32(sp1 - 0x19cu) + 0x68u);
    COW_AT(1017eb5f)
        wr32(sp1 - 0x1f4u, esi);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eb67u);
        cow_fastcall(g, COW_IMG(0x1017a3f0u), edi, edx, 1, esi);
    COW_AT(1017eb67)
        ecx = rd32(sp1 - 0x19cu);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017eb6b)
    t154 = rd32(ecx + 0x60u);
    wr32(sp1 - 0x198u, t154);
    wr32(sp1 - 0x118u, 0u);
    if ((int32_t)rd32(ecx + 0x44u) <= 0)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    eax = t154;
    al_m198 = t154;
    COW_AT(1017eb88)
    al_m118 = 0u;
L_1017eb8e: ;
    COW_AT(1017eb8e)
    t155 = rd32(eax + 4u);
    wr32(sp1 - 0x1c8u, t155);
    wr32(sp1 - 0x114u, 0u);
    if ((int32_t)rd32(eax) <= 0) goto L_101810ef;
    edx = t155;
    al_m1c8 = t155;
    COW_AT(1017ebaa)
    esi = edx;
    al_m114 = 0u;
L_1017ebac: ;
    COW_AT(1017ebac)
    if ((uint32_t)(int16_t)rd16(esi + 0x20u) != rd32(edi + 0x39114u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0x20u);
    COW_AT(1017ebb8)
        wr32(edi + 0x39114u, eax);
        t156 = rd16(esi + 0x20u);
        if ((uint16_t)t156 == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017ebf8)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, 0x1bu);
            wr32(sp1 - 0x1fcu, eax);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017ec03u);
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 0u);
    COW_AT(1017ec03)
            wr32(sp1 - 0x1f4u, 1u);
            wr32(sp1 - 0x1f8u, 0xeu);
            t161 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t161);
            g->eax = t161;
            t162 = rd32(t161);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017ec19u);
            t163 = cow_thiscall(g, rd32(t162 + 0xc8u), t162, 3, t161, 0xeu, 1u);
            t164 = g->ecx;
            eax = t163;
            ecx = t164;
    COW_AT(1017ec19)
            edx = rd32(COW_IMG(0x10632038u));
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017ebcf)
            wr32(sp1 - 0x1f4u, 1u);
            wr32(sp1 - 0x1f8u, 0x1bu);
            wr32(sp1 - 0x1fcu, eax);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017ebdau);
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 1u);
    COW_AT(1017ebda)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, 0xeu);
            t157 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t157);
            g->eax = t157;
            t158 = rd32(t157);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017ebf0u);
            t159 = cow_thiscall(g, rd32(t158 + 0xc8u), t158, 3, t157, 0xeu, 0u);
            t160 = g->ecx;
            eax = t159;
            ecx = t160;
    COW_AT(1017ebf0)
            edx = rd32(COW_IMG(0x10631f18u));
        }
    COW_AT(1017ec1f)
        wr32(sp1 - 0x1f4u, edx);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ec25u);
        cow_cdecl(g, COW_IMG(0x10177400u), 1, edx);
        t165 = g->edx;
        edx = t165;
    COW_AT(1017ec25)
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m114 = rd32(sp1 - 0x114u);
    }
    COW_AT(1017ec28)
    if ((uint32_t)(int16_t)rd16(esi + 0x24u) != rd32(edi + 0x39120u))
    {
        eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
    COW_AT(1017ec34)
        wr32(edi + 0x39120u, eax);
        if (eax == 0u)
        {
    COW_AT(1017ec4a)
            if (rd32(edi + 0x390fcu) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017ec61)
                wr32(sp1 - 0x1f4u, 3u);
                al_m1f4 = 3u;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1017ec5d)
                wr32(sp1 - 0x1f4u, 2u);
                al_m1f4 = 2u;
            }
        }
        else
        {
    COW_AT(1017ec3e)
            wr32(sp1 - 0x1f4u, 1u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            al_m1f4 = 1u;
        }
    COW_AT(1017ec63)
        wr32(sp1 - 0x1f8u, 0x16u);
        wr32(sp1 - 0x1fcu, eax);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ec6eu);
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, al_m1f4);
        t166 = g->edx;
        edx = t166;
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m114 = rd32(sp1 - 0x114u);
    }
    COW_AT(1017ec6e)
    if (rd32(esi + 4u) == 0u)
    {
    COW_AT(1017ec9a)
        wr32(sp1 - 0x1f4u, 0u);
        wr32(sp1 - 0x1f8u, 0u);
        t168 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t168);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ecafu);
        cow_thiscall(g, rd32(rd32(t168) + 0xf4u), rd32(t168), 3, t168, 0u, 0u);
    }
    else
    {
        eax = rd32(esi + 4u);
    COW_AT(1017ec75)
        if (rd32(eax + 0x40u) == 0u)
        {
    COW_AT(1017ec80)
            eax = rd32(eax + 0x44u);
        }
        else
        {
            ecx = rd32(eax + 0x40u);
    COW_AT(1017ec7c)
            eax = ecx;
        }
    COW_AT(1017ec83)
        wr32(sp1 - 0x1f4u, eax);
        wr32(sp1 - 0x1f8u, 0u);
        t167 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t167);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ec98u);
        cow_thiscall(g, rd32(rd32(t167) + 0xf4u), t167, 3, t167, 0u, eax);
    COW_AT(1017ec98)
    }
    COW_AT(1017ecaf)
    t169 = rd32(rd32(sp1 - 0x19cu) + 0x1cu);
    if (t169 != 2u) goto L_1017feb3;
L_1017ecbd: ;
    COW_AT(1017ecbd)
    wr32(sp1 - 0x1f4u, 0u);
    wr32(sp1 - 0x1f8u, sp1 - 0x1d4u);
    wr32(sp1 - 0x1fcu, 0u);
    wr32(sp1 - 0x200u, 0u);
    t170 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x204u, t170);
    g->eax = t170;
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017ecd1u);
    t171 = cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x2cu), rd32(rd32(esi + 0x2cu)), 5, t170, 0u, 0u, sp1 - 0x1d4u, 0u);
    eax = t171;
    COW_AT(1017ecd1)
    if ((int32_t)eax < 0) goto L_1017ecbd;
    COW_AT(1017ecd5)
    if (rd32(sp1 - 0x194u) - 1u > 3u)
    {
        eax = rd32(sp1 - 0x1c8u);
        esi = rd32(rd32(sp1 - 0x1c8u) + 0xcu);
        goto L_1017fc43;
    }
    eax = rd32(sp1 - 0x1c8u);
    ecx = rd32(sp1 - 0x194u) - 1u;
    esi = rd32(rd32(sp1 - 0x1c8u) + 0xcu);
    COW_AT(1017ecea)
    t172 = rd32(COW_IMG(0x10181120u) + ecx * 4u);
    switch (t172 - RD)
    {
    case 0x1017ecf1u: goto L_1017ecf1;
    case 0x1017ef9eu: goto L_1017ef9e;
    case 0x1017f31fu: goto L_1017f31f;
    case 0x1017f756u: goto L_1017f756;
    default: rt_fatal(g, COW_IMG(0x1017eceau), "switch");
    }
    return;
L_1017df23: ;
    COW_AT(1017df23)
    d12 = (double)rdf32(ecx + 0x39424u);
    if ((cow_fsw(g, x0, d12, 0u) & 0x4100u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    goto L_1017df36;
L_1017df5a: ;
    COW_AT(1017df5a)
    d14 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x24u) - (double)rdf32(self + 0x390f8u));
    d15 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x20u) - (double)rdf32(self + 0x390f4u));
    d16 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x1cu) - (double)rdf32(self + 0x390f0u));
    d17 = (double)(float)fr(g, fr(g, fr(g, d14 * d14) + fr(g, d15 * d15)) + fr(g, d16 * d16));
    wrf32(sp1 - 0x198u, (float)d17);
    if (rd8(rd32(sp0 + 8u) + 0xbu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(sp0 + 8u) + 0xbu);
        ecx = rd32(sp0 + 8u);
        al_m198_f = d17;
        x0 = fr(g, fr(g, fr(g, d14 * d14) + fr(g, d15 * d15)) + fr(g, d16 * d16));
        goto L_1017dfab;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(sp0 + 8u) + 0xbu);
    ecx = rd32(sp0 + 8u);
    al_m198_f = d17;
    x0 = fr(g, fr(g, fr(g, d14 * d14) + fr(g, d15 * d15)) + fr(g, d16 * d16));
    COW_AT(1017df99)
    d18 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(ecx + 0xd0u));
    if ((cow_fsw(g, x0, d18, 0u) & 0x4100u) == 0u)
    {
        loc_4 = in_ebp;
        al_m1ec = in_esi;
        al_m1f0 = in_edi;
        goto L_10181118;
    }
    eax = cow_fsw(g, x0, d18, 0u) & 0x4100u;
L_1017dfbe: ;
    COW_AT(1017dfbe)
    wr32(sp1 - 0x1f4u, ecx + 0xf4u);
    wr32(sp1 - 0x1f8u, self + 0x38fdcu);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017dfd3u);
    t20 = cow_call_regs(g, COW_IMG(0x10181bb0u), eax, g->ecx, g->edx, 0, 2, self + 0x38fdcu, ecx + 0xf4u);
    eax = t20;
    COW_AT(1017dfd3)
    if (eax != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    COW_AT(1017dfdb)
    esi = self;
    edi = rd32(sp0 + 8u);
    goto L_1017dfde;
L_1017dfab: ;
    COW_AT(1017dfab)
    d19 = (double)rdf32(self + 0x39424u);
    if ((cow_fsw(g, x0, d19, 0u) & 0x4100u) == 0u)
    {
        loc_4 = in_ebp;
        al_m1ec = in_esi;
        al_m1f0 = in_edi;
        goto L_10181118;
    }
    eax = cow_fsw(g, x0, d19, 0u) & 0x4100u;
    goto L_1017dfbe;
L_1017eb0a: ;
    COW_AT(1017eb0a)
    wr32(sp1 - 0x1f4u, 1u);
    al_m1f4 = 1u;
L_1017eb10: ;
    COW_AT(1017eb10)
    wr32(sp1 - 0x1f8u, 0xfu);
    t149 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t149);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017eb24u);
    cow_thiscall(g, rd32(rd32(t149) + 0xc8u), rd32(t149), 3, t149, 0xfu, al_m1f4);
    COW_AT(1017eb24)
    wr32(sp1 - 0x1f4u, 1u);
    wr32(sp1 - 0x1f8u, 0xdu);
    wr32(sp1 - 0x1fcu, 0u);
    t150 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t150);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017eb3cu);
    cow_thiscall(g, rd32(rd32(t150) + 0xfcu), rd32(t150), 4, t150, 0u, 0xdu, 1u);
    COW_AT(1017eb3c)
    wr32(sp1 - 0x1f4u, 1u);
    al_m1f4 = 1u;
    goto L_1017eb3e;
L_1017eb0e: ;
    COW_AT(1017eb0e)
    wr32(sp1 - 0x1f4u, 0u);
    al_m1f4 = 0u;
    goto L_1017eb10;
L_1017eb8a: ;
    COW_AT(1017eb8a)
    eax = al_m198;
    goto L_1017eb8e;
L_1017ecf1: ;
    COW_AT(1017ecf1)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1017fe49;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1017ed04: ;
    COW_AT(1017ed04)
    d344 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d345 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d346 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d344);
    d347 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d344) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d347);
    t348 = rd32(sp1 - 0x1d4u);
    d349 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d346) + (double)rdf32(edi + 0x168u));
    wrf32(t348 + 4u, (float)d349);
    t350 = rd32(sp1 - 0x1d4u);
    d351 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d345);
    wrf32(t350 + 8u, (float)d351);
    t352 = rd32(sp1 - 0x1d4u);
    d353 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t352 + 0xcu, (float)d353);
    d354 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d354 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t348 & 0xffff0000u) | (uint16_t)cow_fsw(g, d354, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t350;
        edx = t352;
        x0 = d354;
    }
    else
    {
        eax = (t348 & 0xffff0000u) | (uint16_t)cow_fsw(g, d354, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t350;
        edx = t352;
        x0 = d354;
    COW_AT(1017edfb)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017ee03)
    d355 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d356 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d357 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d358 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d355 * d355) + fr(g, d356 * d356)) + fr(g, d357 * d357)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d358);
    d359 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d357 * (double)rdf32(esi + 0x18u)) + fr(g, d355 * (double)rdf32(esi + 0x20u))) + fr(g, d356 * (double)rdf32(esi + 0x1cu))) * (double)(float)d358) * (double)(float)d358) * (double)(float)d358);
    if (!(d359 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d359, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d358;
        x1 = d359;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d359, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d358;
        x1 = d359;
    COW_AT(1017ee66)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017ee6e)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(1017ee7f)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017ee87)
    t360 = rd8(esi + 0x26u);
    d361 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d362 = fr(g, (double)rdf32(COW_IMG(0x10639048u)) * x1);
    wr32(sp1 - 0x1d8u, t360);
    g->edx = edx;
    d363 = fr(g, fr(g, fr(g, d362 + d361) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t360);
    fpush(g, d363);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017eeb4u);
    t364 = cow_call_regs(g, COW_IMG(0x10311c6cu), t360, g->ecx, g->edx, 1, 0);
    t365 = g->edx;
    eax = t364;
    edx = t365;
    COW_AT(1017eeb4)
    d366 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    d367 = fr(g, (double)rdf32(COW_IMG(0x10639058u)) * x1);
    wr32(sp1 - 0x1d0u, eax);
    t368 = rd8(esi + 0x25u);
    wr32(sp1 - 0x1d8u, t368);
    g->ecx = t368;
    g->edx = edx;
    d369 = fr(g, fr(g, fr(g, d367 + d366) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t368);
    fpush(g, d369);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017eee2u);
    t370 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t371 = g->ecx;
    t372 = g->edx;
    eax = t370;
    ecx = t371;
    edx = t372;
    COW_AT(1017eee2)
    d373 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    d374 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x1ccu, eax);
    t375 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t375);
    wr32(sp1 - 0x60u, (uint8_t)t375);
    wr32(sp1 - 0x5cu, 0u);
    d376 = fr(g, fr(g, fr(g, d374 + d373) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t375);
    fpush(g, d376);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017ef26u);
    t377 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t375, g->ecx, g->edx, 1, 0);
    eax = t377;
    COW_AT(1017ef26)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(1017ef37)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(1017ef3b)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(1017ef47)
        edx = 0xffu;
    }
    COW_AT(1017ef4c)
    if ((int32_t)eax > 255)
    {
    COW_AT(1017ef53)
        eax = 0xffu;
    }
    COW_AT(1017ef58)
    t378 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t379 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t378);
    t380 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t380);
    wr32(sp1 - 0x1bcu, t379 + 1u);
    if ((int32_t)(t379 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t379 + 1u;
        al_m1d4 = t380;
        goto L_1017ed04;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t380;
    COW_AT(1017ef99)
L_1017fe49: ;
    COW_AT(1017fe49)
    t412 = rd32(rd32(sp1 - 0x1c8u) + 0x2cu);
    wr32(sp1 - 0x1f4u, t412);
    t413 = rd32(sp1 - 0x1c8u);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fe56u);
    cow_thiscall(g, rd32(rd32(t412) + 0x30u), ecx, 1, t412);
    esi = t413;
    COW_AT(1017fe56)
    wr32(sp1 - 0x1f4u, 0u);
    t414 = rd32(esi + 0xb8u);
    wr32(sp1 - 0x1f8u, t414);
    t415 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t415);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fe70u);
    cow_thiscall(g, rd32(rd32(t415) + 0x154u), rd32(t415), 3, t415, t414, 0u);
    COW_AT(1017fe70)
    t416 = rd32(rd32(sp1 - 0x19cu) + 0x34u);
    wr32(sp1 - 0x1f4u, t416);
    t417 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x1f8u, t417);
    wr32(sp1 - 0x1fcu, 0u);
    t418 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t418);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fe8fu);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t418, 0u, t417, t416);
    COW_AT(1017fe8f)
    t419 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1f4u, t419);
    wr32(sp1 - 0x1f8u, 0u);
    t420 = rd32(esi + 8u);
    wr32(sp1 - 0x1fcu, t420);
    wr32(sp1 - 0x200u, 0u);
    t421 = rd32(rd32(sp1 - 0x19cu) + 0x3cu);
    wr32(sp1 - 0x204u, t421);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017feaeu);
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t421, 0u, t420, 0u, t419);
    COW_AT(1017feae)
L_101810b3: ;
    COW_AT(101810b3)
    t674 = rd32(edi + 0x3942cu) + rd32(esi + 0x18u);
    t675 = rd32(sp1 - 0x1c8u);
    wr32(edi + 0x3942cu, t674);
    esi = t675;
L_101810c8: ;
    COW_AT(101810c8)
    t676 = rd32(sp1 - 0x114u) + 1u;
    wr32(sp1 - 0x114u, t676);
    wr32(sp1 - 0x1c8u, esi + 0xc0u);
    if ((int32_t)t676 < (int32_t)rd32(rd32(sp1 - 0x198u)))
    {
        edx = rd32(sp1 - 0x198u);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m1c8 = esi + 0xc0u;
        esi = esi + 0xc0u;
        al_m114 = t676;
        goto L_1017ebac;
    }
    al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
    al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
    al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    al_m198 = rd32(sp1 - 0x198u);
    al_m118 = rd32(sp1 - 0x118u);
L_101810ef: ;
    COW_AT(101810ef)
    wr32(sp1 - 0x118u, al_m118 + 1u);
    wr32(sp1 - 0x198u, al_m198 + 0x24u);
    if ((int32_t)(al_m118 + 1u) < (int32_t)rd32(rd32(sp1 - 0x19cu) + 0x44u))
    {
        al_m198 = al_m198 + 0x24u;
        al_m118 = al_m118 + 1u;
        goto L_1017eb8a;
    }
    loc_4 = rd32(sp0 - 4u);
    al_m1ec = rd32(sp1 - 0x1ecu);
    al_m1f0 = rd32(sp1 - 0x1f0u);
L_10181118: ;
    COW_AT(10181118)
    g->esi = al_m1ec;
    g->edi = al_m1f0;
    g->ebp = loc_4;
    return;
L_1017ef9e: ;
    COW_AT(1017ef9e)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1017fe49;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1017efb1: ;
    COW_AT(1017efb1)
    d295 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d296 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d297 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d295);
    d298 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d295) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d298);
    t299 = rd32(sp1 - 0x1d4u);
    d300 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d297) + (double)rdf32(edi + 0x168u));
    wrf32(t299 + 4u, (float)d300);
    t301 = rd32(sp1 - 0x1d4u);
    d302 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d296);
    wrf32(t301 + 8u, (float)d302);
    t303 = rd32(sp1 - 0x1d4u);
    d304 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t303 + 0xcu, (float)d304);
    d305 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d305 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t299 & 0xffff0000u) | (uint16_t)cow_fsw(g, d305, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t301;
        edx = t303;
        x0 = d305;
    }
    else
    {
        eax = (t299 & 0xffff0000u) | (uint16_t)cow_fsw(g, d305, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t301;
        edx = t303;
        x0 = d305;
    COW_AT(1017f0a8)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f0b0)
    d306 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d307 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d308 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d309 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d306 * d306) + fr(g, d307 * d307)) + fr(g, d308 * d308)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d309);
    d310 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d310);
    d311 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d312 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d312 * d312);
    g->st[g->top & 7u] = fr(g, (double)(float)d310 * (double)(float)d310);
    d313 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d311 * d311) + fr(g, d312 * d312)) + fr(g, (double)(float)d310 * (double)(float)d310))));
    wrf32(sp1 - 0x1d8u, (float)d313);
    d314 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d313);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d314);
    d315 = fr(g, d306 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d315);
    d316 = fr(g, fr(g, fr(g, (double)(float)d310 * (double)rdf32(esi + 0x18u)) + fr(g, d307 * (double)rdf32(esi + 0x1cu))) + (double)(float)d315);
    d317 = fr(g, d307 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d316);
    d318 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d308 * (double)rdf32(esi + 0x18u)) + d317) + (double)(float)d315) * (double)(float)d309) * (double)(float)d309) * (double)(float)d309);
    if (!(d318 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d318, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d309;
        al_m1c0_f = (double)(float)d314;
        al_m1d0_f = (double)(float)d316;
        x1 = d318;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d318, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d309;
        al_m1c0_f = (double)(float)d314;
        al_m1d0_f = (double)(float)d316;
        x1 = d318;
    COW_AT(1017f183)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f18b)
    d319 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d319);
    d320 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d320 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d320, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d320, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017f1ac)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017f1b4)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(1017f1c5)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f1cd)
    if (!(al_m1c0_f < (double)rdf32(COW_IMG(0x1063907cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(1017f1e4)
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(1017f1de)
        x2 = (double)rdf32(sp1 - 0x1d0u);
    }
    COW_AT(1017f1ea)
    t321 = rd8(esi + 0x26u);
    d322 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d323 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1063904cu)) * x2) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u))));
    wr32(sp1 - 0x1d8u, t321);
    g->edx = edx;
    d324 = fr(g, fr(g, fr(g, d323 + d322) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t321);
    fpush(g, d324);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017f221u);
    t325 = cow_call_regs(g, COW_IMG(0x10311c6cu), t321, g->ecx, g->edx, 1, 0);
    t326 = g->edx;
    eax = t325;
    edx = t326;
    COW_AT(1017f221)
    d327 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    d328 = fr(g, (double)rdf32(COW_IMG(0x1063905cu)) * x2);
    wr32(sp1 - 0x1d0u, eax);
    t329 = rd8(esi + 0x25u);
    d330 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d8u, t329);
    g->ecx = t329;
    g->edx = edx;
    d331 = fr(g, fr(g, fr(g, fr(g, d328 + d327) + d330) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t329);
    fpush(g, d331);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017f259u);
    t332 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t333 = g->ecx;
    t334 = g->edx;
    eax = t332;
    ecx = t333;
    edx = t334;
    COW_AT(1017f259)
    d335 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    d336 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x1ccu, eax);
    t337 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t337);
    d338 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x58u, (uint8_t)t337);
    wr32(sp1 - 0x54u, 0u);
    d339 = fr(g, fr(g, fr(g, fr(g, d336 + d335) + d338) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t337);
    fpush(g, d339);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017f2a7u);
    t340 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t337, g->ecx, g->edx, 1, 0);
    eax = t340;
    COW_AT(1017f2a7)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(1017f2b8)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(1017f2bc)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(1017f2c8)
        edx = 0xffu;
    }
    COW_AT(1017f2cd)
    if ((int32_t)eax > 255)
    {
    COW_AT(1017f2d4)
        eax = 0xffu;
    }
    COW_AT(1017f2d9)
    t341 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t342 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t341);
    t343 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t343);
    wr32(sp1 - 0x1bcu, t342 + 1u);
    if ((int32_t)(t342 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t342 + 1u;
        al_m1d4 = t343;
        goto L_1017efb1;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t343;
    COW_AT(1017f31a)
    goto L_1017fe49;
L_1017f31f: ;
    COW_AT(1017f31f)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1017fe49;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1017f332: ;
    COW_AT(1017f332)
    d238 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d239 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d240 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d238);
    d241 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d238) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d241);
    t242 = rd32(sp1 - 0x1d4u);
    d243 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d240) + (double)rdf32(edi + 0x168u));
    wrf32(t242 + 4u, (float)d243);
    t244 = rd32(sp1 - 0x1d4u);
    d245 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d239);
    wrf32(t244 + 8u, (float)d245);
    t246 = rd32(sp1 - 0x1d4u);
    d247 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t246 + 0xcu, (float)d247);
    d248 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d248 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t242 & 0xffff0000u) | (uint16_t)cow_fsw(g, d248, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t244;
        edx = t246;
        x0 = d248;
    }
    else
    {
        eax = (t242 & 0xffff0000u) | (uint16_t)cow_fsw(g, d248, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t244;
        edx = t246;
        x0 = d248;
    COW_AT(1017f429)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f431)
    d249 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d250 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d251 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d252 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d249 * d249) + fr(g, d250 * d250)) + fr(g, d251 * d251)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d252);
    d253 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d253);
    d254 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d255 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d255 * d255);
    g->st[g->top & 7u] = fr(g, (double)(float)d253 * (double)(float)d253);
    d256 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d254 * d254) + fr(g, d255 * d255)) + fr(g, (double)(float)d253 * (double)(float)d253))));
    wrf32(sp1 - 0x1d8u, (float)d256);
    d257 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d256);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d257);
    d258 = fr(g, d249 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d258);
    d259 = fr(g, fr(g, fr(g, (double)(float)d253 * (double)rdf32(esi + 0x18u)) + fr(g, d250 * (double)rdf32(esi + 0x1cu))) + (double)(float)d258);
    d260 = fr(g, d250 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d259);
    d261 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d262 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d262 * d262);
    d263 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d263 * d263);
    d264 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d261 * d261) + fr(g, d262 * d262)) + fr(g, d263 * d263))));
    wrf32(sp1 - 0x1d8u, (float)d264);
    d265 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d261 * d261) + fr(g, d262 * d262)) + fr(g, d263 * d263)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d265);
    d266 = fr(g, fr(g, fr(g, d263 * (double)rdf32(esi + 0x18u)) + fr(g, d261 * (double)rdf32(esi + 0x20u))) + fr(g, d262 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d266);
    d267 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d251 * (double)rdf32(esi + 0x18u)) + d260) + (double)(float)d258) * (double)(float)d252) * (double)(float)d252) * (double)(float)d252);
    if (!(d267 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d267, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d252;
        al_m1c0_f = (double)(float)d257;
        al_m1d0_f = (double)(float)d259;
        al_m1b8_f = (double)(float)d265;
        al_m1cc_f = (double)(float)d266;
        x1 = d267;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d267, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d252;
        al_m1c0_f = (double)(float)d257;
        al_m1d0_f = (double)(float)d259;
        al_m1b8_f = (double)(float)d265;
        al_m1cc_f = (double)(float)d266;
        x1 = d267;
    COW_AT(1017f556)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f55e)
    d268 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d268);
    d269 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d269 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d269, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d269, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017f57f)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017f587)
    d270 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d270);
    d271 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d271 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d271, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d271, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017f5a8)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(1017f5b0)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(1017f5c1)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f5c9)
    if (!(al_m1c0_f < (double)rdf32(COW_IMG(0x1063907cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(1017f5e0)
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(1017f5da)
        x2 = (double)rdf32(sp1 - 0x1d0u);
    }
    COW_AT(1017f5e6)
    if (!(al_m1b8_f < (double)rdf32(COW_IMG(0x10639080u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(1017f5fd)
        x3 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(1017f5f7)
        x3 = (double)rdf32(sp1 - 0x1ccu);
    }
    COW_AT(1017f603)
    t272 = rd8(esi + 0x26u);
    d273 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)));
    d274 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639050u)) * x3) + fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu))));
    wr32(sp1 - 0x1d8u, t272);
    g->edx = edx;
    d275 = fr(g, fr(g, fr(g, fr(g, d274 + d273) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t272);
    fpush(g, d275);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017f644u);
    t276 = cow_call_regs(g, COW_IMG(0x10311c6cu), t272, g->ecx, g->edx, 1, 0);
    t277 = g->edx;
    eax = t276;
    edx = t277;
    COW_AT(1017f644)
    d278 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    d279 = fr(g, (double)rdf32(COW_IMG(0x10639060u)) * x3);
    wr32(sp1 - 0x1d0u, eax);
    t280 = rd8(esi + 0x25u);
    d281 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    wr32(sp1 - 0x1d8u, t280);
    g->ecx = t280;
    g->edx = edx;
    d282 = fr(g, fr(g, fr(g, fr(g, fr(g, d279 + d278) + d281) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t280);
    fpush(g, d282);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017f686u);
    t283 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t284 = g->ecx;
    t285 = g->edx;
    eax = t283;
    ecx = t284;
    edx = t285;
    COW_AT(1017f686)
    d286 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    d287 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    wr32(sp1 - 0x1ccu, eax);
    t288 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t288);
    d289 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x80u, (uint8_t)t288);
    wr32(sp1 - 0x7cu, 0u);
    d290 = fr(g, fr(g, fr(g, fr(g, fr(g, d287 + d286) + d289) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t288);
    fpush(g, d290);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017f6deu);
    t291 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t288, g->ecx, g->edx, 1, 0);
    eax = t291;
    COW_AT(1017f6de)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(1017f6ef)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(1017f6f3)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(1017f6ff)
        edx = 0xffu;
    }
    COW_AT(1017f704)
    if ((int32_t)eax > 255)
    {
    COW_AT(1017f70b)
        eax = 0xffu;
    }
    COW_AT(1017f710)
    t292 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t293 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t292);
    t294 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t294);
    wr32(sp1 - 0x1bcu, t293 + 1u);
    if ((int32_t)(t293 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t293 + 1u;
        al_m1d4 = t294;
        goto L_1017f332;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t294;
    COW_AT(1017f751)
    goto L_1017fe49;
L_1017f756: ;
    COW_AT(1017f756)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1017fe49;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1017f769: ;
    COW_AT(1017f769)
    d173 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d174 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d175 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d173);
    d176 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d173) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d176);
    t177 = rd32(sp1 - 0x1d4u);
    d178 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d175) + (double)rdf32(edi + 0x168u));
    wrf32(t177 + 4u, (float)d178);
    t179 = rd32(sp1 - 0x1d4u);
    d180 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d174);
    wrf32(t179 + 8u, (float)d180);
    t181 = rd32(sp1 - 0x1d4u);
    d182 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t181 + 0xcu, (float)d182);
    d183 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d183 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t177 & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t179;
        edx = t181;
        x0 = d183;
    }
    else
    {
        eax = (t177 & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t179;
        edx = t181;
        x0 = d183;
    COW_AT(1017f860)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f868)
    d184 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d185 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d186 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d187 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d184 * d184) + fr(g, d185 * d185)) + fr(g, d186 * d186)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d187);
    d188 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d188);
    d189 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d190 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d190 * d190);
    g->st[g->top & 7u] = fr(g, (double)(float)d188 * (double)(float)d188);
    d191 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d189 * d189) + fr(g, d190 * d190)) + fr(g, (double)(float)d188 * (double)(float)d188))));
    wrf32(sp1 - 0x1d8u, (float)d191);
    d192 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d191);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d192);
    d193 = fr(g, d184 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d193);
    d194 = fr(g, fr(g, fr(g, (double)(float)d188 * (double)rdf32(esi + 0x18u)) + fr(g, d185 * (double)rdf32(esi + 0x1cu))) + (double)(float)d193);
    d195 = fr(g, d185 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d194);
    d196 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d197 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d197 * d197);
    d198 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d198 * d198);
    d199 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d196 * d196) + fr(g, d197 * d197)) + fr(g, d198 * d198))));
    wrf32(sp1 - 0x1c4u, (float)d199);
    d200 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d196 * d196) + fr(g, d197 * d197)) + fr(g, d198 * d198)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d200);
    d201 = fr(g, fr(g, fr(g, d198 * (double)rdf32(esi + 0x18u)) + fr(g, d196 * (double)rdf32(esi + 0x20u))) + fr(g, d197 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d201);
    d202 = fr(g, (double)rdf32(sp1 - 0xdcu) - (double)rdf32(esi + 4u));
    d203 = fr(g, (double)rdf32(sp1 - 0xe0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d203 * d203);
    d204 = fr(g, (double)rdf32(sp1 - 0xd8u) - (double)rdf32(esi + 8u));
    g->st[g->top & 7u] = fr(g, d204 * d204);
    d205 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d202 * d202) + fr(g, d203 * d203)) + fr(g, d204 * d204))));
    wrf32(sp1 - 0x1c4u, (float)d205);
    d206 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d202 * d202) + fr(g, d203 * d203)) + fr(g, d204 * d204)))));
    wrf32(sp1 - 0x1b4u, (float)(double)(float)d206);
    d207 = fr(g, fr(g, fr(g, d203 * (double)rdf32(esi + 0x18u)) + fr(g, d204 * (double)rdf32(esi + 0x20u))) + fr(g, d202 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d207);
    d208 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d186 * (double)rdf32(esi + 0x18u)) + d195) + (double)(float)d193) * (double)(float)d187) * (double)(float)d187) * (double)(float)d187);
    if (!(d208 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d208, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d187;
        al_m1c0_f = (double)(float)d192;
        al_m1d0_f = (double)(float)d194;
        al_m1c4_f = (double)(float)d207;
        al_m1b8_f = (double)(float)d200;
        al_m1cc_f = (double)(float)d201;
        al_m1b4_f = (double)(float)d206;
        x1 = d208;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d208, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d187;
        al_m1c0_f = (double)(float)d192;
        al_m1d0_f = (double)(float)d194;
        al_m1c4_f = (double)(float)d207;
        al_m1b8_f = (double)(float)d200;
        al_m1cc_f = (double)(float)d201;
        al_m1b4_f = (double)(float)d206;
        x1 = d208;
    COW_AT(1017f9df)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f9e7)
    d209 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d209);
    d210 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d210 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d210, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d210, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa08)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017fa10)
    d211 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d211);
    d212 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d212 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d212, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d212, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa31)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(1017fa39)
    d213 = (double)(float)fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    wrf32(sp1 - 0x1c4u, (float)d213);
    d214 = fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    if (!(d214 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d214, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d214, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa5a)
        wr32(sp1 - 0x1c4u, 0u);
    }
    COW_AT(1017fa62)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(1017fa73)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017fa7b)
    if (!(al_m1c0_f < (double)rdf32(COW_IMG(0x1063907cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(1017fa92)
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(1017fa8c)
        x2 = (double)rdf32(sp1 - 0x1d0u);
    }
    COW_AT(1017fa98)
    if (!(al_m1b8_f < (double)rdf32(COW_IMG(0x10639080u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(1017faaf)
        x3 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(1017faa9)
        x3 = (double)rdf32(sp1 - 0x1ccu);
    }
    COW_AT(1017fab5)
    if (!(al_m1b4_f < (double)rdf32(COW_IMG(0x10639084u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b4_f, (double)rdf32(COW_IMG(0x10639084u)), 4u);
    COW_AT(1017facc)
        x4 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b4_f, (double)rdf32(COW_IMG(0x10639084u)), 4u);
    COW_AT(1017fac6)
        x4 = (double)rdf32(sp1 - 0x1c4u);
    }
    COW_AT(1017fad2)
    t215 = rd8(esi + 0x26u);
    d216 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu)));
    d217 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639054u)) * x4) + fr(g, x3 * (double)rdf32(COW_IMG(0x10639050u))));
    wr32(sp1 - 0x1d8u, t215);
    g->edx = edx;
    d218 = fr(g, fr(g, fr(g, fr(g, fr(g, d217 + d216) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t215);
    fpush(g, d218);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fb1du);
    t219 = cow_call_regs(g, COW_IMG(0x10311c6cu), t215, g->ecx, g->edx, 1, 0);
    t220 = g->edx;
    eax = t219;
    edx = t220;
    COW_AT(1017fb1d)
    d221 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639060u)));
    d222 = fr(g, (double)rdf32(COW_IMG(0x10639064u)) * x4);
    wr32(sp1 - 0x1d0u, eax);
    t223 = rd8(esi + 0x25u);
    d224 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    wr32(sp1 - 0x1d8u, t223);
    g->ecx = t223;
    g->edx = edx;
    d225 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d222 + d221) + d224) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t223);
    fpush(g, d225);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fb69u);
    t226 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t227 = g->ecx;
    t228 = g->edx;
    eax = t226;
    ecx = t227;
    edx = t228;
    COW_AT(1017fb69)
    d229 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    d230 = fr(g, x4 * (double)rdf32(COW_IMG(0x10639074u)));
    wr32(sp1 - 0x1ccu, eax);
    t231 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t231);
    d232 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x70u, (uint8_t)t231);
    wr32(sp1 - 0x6cu, 0u);
    d233 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d230 + d229) + d232) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t231);
    fpush(g, d233);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fbcbu);
    t234 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t231, g->ecx, g->edx, 1, 0);
    eax = t234;
    COW_AT(1017fbcb)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(1017fbdc)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(1017fbe0)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(1017fbec)
        edx = 0xffu;
    }
    COW_AT(1017fbf1)
    if ((int32_t)eax > 255)
    {
    COW_AT(1017fbf8)
        eax = 0xffu;
    }
    COW_AT(1017fbfd)
    t235 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t236 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t235);
    t237 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t237);
    wr32(sp1 - 0x1bcu, t236 + 1u);
    if ((int32_t)(t236 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t236 + 1u;
        al_m1d4 = t237;
        goto L_1017f769;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t237;
    COW_AT(1017fc3e)
    goto L_1017fe49;
L_1017fc43: ;
    COW_AT(1017fc43)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1017fe49;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1017fc56: ;
    COW_AT(1017fc56)
    d381 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d382 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d383 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d381);
    d384 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d381) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d384);
    t385 = rd32(sp1 - 0x1d4u);
    d386 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d383) + (double)rdf32(edi + 0x168u));
    wrf32(t385 + 4u, (float)d386);
    t387 = rd32(sp1 - 0x1d4u);
    d388 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d382);
    wrf32(t387 + 8u, (float)d388);
    t389 = rd32(sp1 - 0x1d4u);
    d390 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t389 + 0xcu, (float)d390);
    d391 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d391 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t385 & 0xffff0000u) | (uint16_t)cow_fsw(g, d391, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t387;
        edx = t389;
        x0 = d391;
    }
    else
    {
        eax = (t385 & 0xffff0000u) | (uint16_t)cow_fsw(g, d391, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t387;
        edx = t389;
        x0 = d391;
    COW_AT(1017fd4d)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017fd55)
    t392 = rd8(esi + 0x26u);
    d393 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    wr32(sp1 - 0x1d8u, t392);
    g->edx = edx;
    d394 = fr(g, fr(g, d393 + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t392);
    fpush(g, d394);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fd78u);
    t395 = cow_call_regs(g, COW_IMG(0x10311c6cu), t392, g->ecx, g->edx, 1, 0);
    t396 = g->edx;
    eax = t395;
    edx = t396;
    COW_AT(1017fd78)
    d397 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d0u, eax);
    t398 = rd8(esi + 0x25u);
    d399 = fr(g, d397 + (double)rdf32(edi + 0x394e4u));
    wr32(sp1 - 0x1d8u, t398);
    g->ecx = t398;
    g->edx = edx;
    d400 = fr(g, d399 * (double)(int32_t)t398);
    fpush(g, d400);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fd9cu);
    t401 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t402 = g->ecx;
    t403 = g->edx;
    eax = t401;
    ecx = t402;
    edx = t403;
    COW_AT(1017fd9c)
    d404 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x1ccu, eax);
    t405 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t405);
    d406 = fr(g, d404 + (double)rdf32(edi + 0x394e8u));
    wr32(sp1 - 0x50u, (uint8_t)t405);
    wr32(sp1 - 0x4cu, 0u);
    d407 = fr(g, d406 * (double)(int32_t)(uint8_t)t405);
    fpush(g, d407);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fdd6u);
    t408 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t405, g->ecx, g->edx, 1, 0);
    eax = t408;
    COW_AT(1017fdd6)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(1017fde7)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(1017fdeb)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(1017fdf7)
        edx = 0xffu;
    }
    COW_AT(1017fdfc)
    if ((int32_t)eax > 255)
    {
    COW_AT(1017fe03)
        eax = 0xffu;
    }
    COW_AT(1017fe08)
    t409 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t410 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t409);
    t411 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t411);
    wr32(sp1 - 0x1bcu, t410 + 1u);
    if ((int32_t)(t410 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t410 + 1u;
        al_m1d4 = t411;
        goto L_1017fc56;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t411;
    goto L_1017fe49;
L_1017feb3: ;
    COW_AT(1017feb3)
    if (rd32(esi + 0x2cu) == 0u) goto L_101810c8;
    COW_AT(1017febe)
    esi = rd32(sp1 - 0x1c8u);
L_1017fec2: ;
    COW_AT(1017fec2)
    wr32(sp1 - 0x1f4u, 0u);
    wr32(sp1 - 0x1f8u, sp1 - 0x1d4u);
    wr32(sp1 - 0x1fcu, 0u);
    wr32(sp1 - 0x200u, 0u);
    t422 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x204u, t422);
    g->eax = t422;
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fed6u);
    t423 = cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x2cu), rd32(rd32(esi + 0x2cu)), 5, t422, 0u, 0u, sp1 - 0x1d4u, 0u);
    eax = t423;
    COW_AT(1017fed6)
    if ((int32_t)eax < 0) goto L_1017fec2;
    COW_AT(1017feda)
    if (rd32(sp1 - 0x194u) - 1u > 3u)
    {
        eax = rd32(sp1 - 0x1c8u);
        esi = rd32(rd32(sp1 - 0x1c8u) + 0xcu);
        goto L_10180e48;
    }
    eax = rd32(sp1 - 0x1c8u);
    ecx = rd32(sp1 - 0x194u) - 1u;
    esi = rd32(rd32(sp1 - 0x1c8u) + 0xcu);
    COW_AT(1017feef)
    t424 = rd32(COW_IMG(0x10181130u) + ecx * 4u);
    switch (t424 - RD)
    {
    case 0x1017fef6u: goto L_1017fef6;
    case 0x101801a3u: goto L_101801a3;
    case 0x10180524u: goto L_10180524;
    case 0x1018095bu: goto L_1018095b;
    default: rt_fatal(g, COW_IMG(0x1017feefu), "switch");
    }
    return;
L_1017fef6: ;
    COW_AT(1017fef6)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1018104e;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1017ff09: ;
    COW_AT(1017ff09)
    d596 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d597 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d598 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d596);
    d599 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d596) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d599);
    t600 = rd32(sp1 - 0x1d4u);
    d601 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d598) + (double)rdf32(edi + 0x168u));
    wrf32(t600 + 4u, (float)d601);
    t602 = rd32(sp1 - 0x1d4u);
    d603 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d597);
    wrf32(t602 + 8u, (float)d603);
    t604 = rd32(sp1 - 0x1d4u);
    d605 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t604 + 0xcu, (float)d605);
    d606 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d606 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t600 & 0xffff0000u) | (uint16_t)cow_fsw(g, d606, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t602;
        edx = t604;
        x0 = d606;
    }
    else
    {
        eax = (t600 & 0xffff0000u) | (uint16_t)cow_fsw(g, d606, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t602;
        edx = t604;
        x0 = d606;
    COW_AT(10180000)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180008)
    d607 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d608 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d609 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d610 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d607 * d607) + fr(g, d608 * d608)) + fr(g, d609 * d609)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d610);
    d611 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d607 * (double)rdf32(esi + 0x14u)) + fr(g, d608 * (double)rdf32(esi + 0x10u))) + fr(g, d609 * (double)rdf32(esi + 0xcu))) * (double)(float)d610) * (double)(float)d610) * (double)(float)d610);
    if (!(d611 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d611, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d610;
        x1 = d611;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d611, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d610;
        x1 = d611;
    COW_AT(1018006b)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180073)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(10180084)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1018008c)
    t612 = rd8(esi + 0x1au);
    d613 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d614 = fr(g, (double)rdf32(COW_IMG(0x10639048u)) * x1);
    wr32(sp1 - 0x1d8u, t612);
    g->edx = edx;
    d615 = fr(g, fr(g, fr(g, d614 + d613) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t612);
    fpush(g, d615);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x101800b9u);
    t616 = cow_call_regs(g, COW_IMG(0x10311c6cu), t612, g->ecx, g->edx, 1, 0);
    t617 = g->edx;
    eax = t616;
    edx = t617;
    COW_AT(101800b9)
    d618 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    d619 = fr(g, (double)rdf32(COW_IMG(0x10639058u)) * x1);
    wr32(sp1 - 0x1d0u, eax);
    t620 = rd8(esi + 0x19u);
    wr32(sp1 - 0x1d8u, t620);
    g->ecx = t620;
    g->edx = edx;
    d621 = fr(g, fr(g, fr(g, d619 + d618) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t620);
    fpush(g, d621);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x101800e7u);
    t622 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t623 = g->ecx;
    t624 = g->edx;
    eax = t622;
    ecx = t623;
    edx = t624;
    COW_AT(101800e7)
    d625 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    d626 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x1ccu, eax);
    t627 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t627);
    wr32(sp1 - 0x48u, (uint8_t)t627);
    wr32(sp1 - 0x44u, 0u);
    d628 = fr(g, fr(g, fr(g, d626 + d625) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t627);
    fpush(g, d628);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1018012bu);
    t629 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t627, g->ecx, g->edx, 1, 0);
    eax = t629;
    COW_AT(1018012b)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(1018013c)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(10180140)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(1018014c)
        edx = 0xffu;
    }
    COW_AT(10180151)
    if ((int32_t)eax > 255)
    {
    COW_AT(10180158)
        eax = 0xffu;
    }
    COW_AT(1018015d)
    t630 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t631 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t630);
    t632 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t632);
    wr32(sp1 - 0x1bcu, t631 + 1u);
    if ((int32_t)(t631 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t631 + 1u;
        al_m1d4 = t632;
        goto L_1017ff09;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t632;
    COW_AT(1018019e)
L_1018104e: ;
    COW_AT(1018104e)
    t664 = rd32(rd32(sp1 - 0x1c8u) + 0x2cu);
    wr32(sp1 - 0x1f4u, t664);
    t665 = rd32(sp1 - 0x1c8u);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1018105bu);
    cow_thiscall(g, rd32(rd32(t664) + 0x30u), ecx, 1, t664);
    esi = t665;
    COW_AT(1018105b)
    wr32(sp1 - 0x1f4u, 0u);
    t666 = rd32(esi + 0xb8u);
    wr32(sp1 - 0x1f8u, t666);
    t667 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t667);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10181075u);
    cow_thiscall(g, rd32(rd32(t667) + 0x154u), rd32(t667), 3, t667, t666, 0u);
    COW_AT(10181075)
    t668 = rd32(rd32(sp1 - 0x19cu) + 0x34u);
    wr32(sp1 - 0x1f4u, t668);
    t669 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x1f8u, t669);
    wr32(sp1 - 0x1fcu, 0u);
    t670 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t670);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10181094u);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t670, 0u, t669, t668);
    COW_AT(10181094)
    t671 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1f4u, t671);
    wr32(sp1 - 0x1f8u, 0u);
    t672 = rd32(esi + 8u);
    wr32(sp1 - 0x1fcu, t672);
    wr32(sp1 - 0x200u, 0u);
    t673 = rd32(rd32(sp1 - 0x19cu) + 0x3cu);
    wr32(sp1 - 0x204u, t673);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x101810b3u);
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t673, 0u, t672, 0u, t671);
    goto L_101810b3;
L_101801a3: ;
    COW_AT(101801a3)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1018104e;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_101801b6: ;
    COW_AT(101801b6)
    d547 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d548 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d549 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d547);
    d550 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d547) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d550);
    t551 = rd32(sp1 - 0x1d4u);
    d552 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d549) + (double)rdf32(edi + 0x168u));
    wrf32(t551 + 4u, (float)d552);
    t553 = rd32(sp1 - 0x1d4u);
    d554 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d548);
    wrf32(t553 + 8u, (float)d554);
    t555 = rd32(sp1 - 0x1d4u);
    d556 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t555 + 0xcu, (float)d556);
    d557 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d557 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t551 & 0xffff0000u) | (uint16_t)cow_fsw(g, d557, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t553;
        edx = t555;
        x0 = d557;
    }
    else
    {
        eax = (t551 & 0xffff0000u) | (uint16_t)cow_fsw(g, d557, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t553;
        edx = t555;
        x0 = d557;
    COW_AT(101802ad)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(101802b5)
    d558 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d559 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d560 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d561 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d558 * d558) + fr(g, d559 * d559)) + fr(g, d560 * d560)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d561);
    d562 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d562);
    d563 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d564 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d564 * d564);
    g->st[g->top & 7u] = fr(g, (double)(float)d562 * (double)(float)d562);
    d565 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d563 * d563) + fr(g, d564 * d564)) + fr(g, (double)(float)d562 * (double)(float)d562))));
    wrf32(sp1 - 0x1d8u, (float)d565);
    d566 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d565);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d566);
    d567 = fr(g, d558 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d567);
    d568 = fr(g, fr(g, fr(g, (double)(float)d562 * (double)rdf32(esi + 0xcu)) + fr(g, d559 * (double)rdf32(esi + 0x10u))) + (double)(float)d567);
    d569 = fr(g, d559 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d568);
    d570 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d560 * (double)rdf32(esi + 0xcu)) + d569) + (double)(float)d567) * (double)(float)d561) * (double)(float)d561) * (double)(float)d561);
    if (!(d570 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d570, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d561;
        al_m1c0_f = (double)(float)d566;
        al_m1d0_f = (double)(float)d568;
        x1 = d570;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d570, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d561;
        al_m1c0_f = (double)(float)d566;
        al_m1d0_f = (double)(float)d568;
        x1 = d570;
    COW_AT(10180388)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180390)
    d571 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d571);
    d572 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d572 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d572, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d572, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(101803b1)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(101803b9)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(101803ca)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(101803d2)
    if (!(al_m1c0_f < (double)rdf32(COW_IMG(0x1063907cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(101803e9)
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(101803e3)
        x2 = (double)rdf32(sp1 - 0x1d0u);
    }
    COW_AT(101803ef)
    t573 = rd8(esi + 0x1au);
    d574 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d575 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1063904cu)) * x2) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u))));
    wr32(sp1 - 0x1d8u, t573);
    g->edx = edx;
    d576 = fr(g, fr(g, fr(g, d575 + d574) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t573);
    fpush(g, d576);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180426u);
    t577 = cow_call_regs(g, COW_IMG(0x10311c6cu), t573, g->ecx, g->edx, 1, 0);
    t578 = g->edx;
    eax = t577;
    edx = t578;
    COW_AT(10180426)
    d579 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    d580 = fr(g, (double)rdf32(COW_IMG(0x1063905cu)) * x2);
    wr32(sp1 - 0x1d0u, eax);
    t581 = rd8(esi + 0x19u);
    d582 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d8u, t581);
    g->ecx = t581;
    g->edx = edx;
    d583 = fr(g, fr(g, fr(g, fr(g, d580 + d579) + d582) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t581);
    fpush(g, d583);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1018045eu);
    t584 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t585 = g->ecx;
    t586 = g->edx;
    eax = t584;
    ecx = t585;
    edx = t586;
    COW_AT(1018045e)
    d587 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    d588 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x1ccu, eax);
    t589 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t589);
    d590 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x78u, (uint8_t)t589);
    wr32(sp1 - 0x74u, 0u);
    d591 = fr(g, fr(g, fr(g, fr(g, d588 + d587) + d590) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t589);
    fpush(g, d591);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x101804acu);
    t592 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t589, g->ecx, g->edx, 1, 0);
    eax = t592;
    COW_AT(101804ac)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(101804bd)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(101804c1)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(101804cd)
        edx = 0xffu;
    }
    COW_AT(101804d2)
    if ((int32_t)eax > 255)
    {
    COW_AT(101804d9)
        eax = 0xffu;
    }
    COW_AT(101804de)
    t593 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t594 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t593);
    t595 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t595);
    wr32(sp1 - 0x1bcu, t594 + 1u);
    if ((int32_t)(t594 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t594 + 1u;
        al_m1d4 = t595;
        goto L_101801b6;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t595;
    COW_AT(1018051f)
    goto L_1018104e;
L_10180524: ;
    COW_AT(10180524)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1018104e;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_10180537: ;
    COW_AT(10180537)
    d490 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d491 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d492 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d490);
    d493 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d490) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d493);
    t494 = rd32(sp1 - 0x1d4u);
    d495 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d492) + (double)rdf32(edi + 0x168u));
    wrf32(t494 + 4u, (float)d495);
    t496 = rd32(sp1 - 0x1d4u);
    d497 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d491);
    wrf32(t496 + 8u, (float)d497);
    t498 = rd32(sp1 - 0x1d4u);
    d499 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t498 + 0xcu, (float)d499);
    d500 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d500 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t494 & 0xffff0000u) | (uint16_t)cow_fsw(g, d500, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t496;
        edx = t498;
        x0 = d500;
    }
    else
    {
        eax = (t494 & 0xffff0000u) | (uint16_t)cow_fsw(g, d500, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t496;
        edx = t498;
        x0 = d500;
    COW_AT(1018062e)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180636)
    d501 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d502 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d503 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d504 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d501 * d501) + fr(g, d502 * d502)) + fr(g, d503 * d503)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d504);
    d505 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d505);
    d506 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d507 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d507 * d507);
    g->st[g->top & 7u] = fr(g, (double)(float)d505 * (double)(float)d505);
    d508 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d506 * d506) + fr(g, d507 * d507)) + fr(g, (double)(float)d505 * (double)(float)d505))));
    wrf32(sp1 - 0x1d8u, (float)d508);
    d509 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d508);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d509);
    d510 = fr(g, d501 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d510);
    d511 = fr(g, fr(g, fr(g, (double)(float)d505 * (double)rdf32(esi + 0xcu)) + fr(g, d502 * (double)rdf32(esi + 0x10u))) + (double)(float)d510);
    d512 = fr(g, d502 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d511);
    d513 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d514 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d514 * d514);
    d515 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d515 * d515);
    d516 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d513 * d513) + fr(g, d514 * d514)) + fr(g, d515 * d515))));
    wrf32(sp1 - 0x1c4u, (float)d516);
    d517 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d513 * d513) + fr(g, d514 * d514)) + fr(g, d515 * d515)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d517);
    d518 = fr(g, fr(g, fr(g, d515 * (double)rdf32(esi + 0xcu)) + fr(g, d513 * (double)rdf32(esi + 0x14u))) + fr(g, d514 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d518);
    d519 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d503 * (double)rdf32(esi + 0xcu)) + d512) + (double)(float)d510) * (double)(float)d504) * (double)(float)d504) * (double)(float)d504);
    if (!(d519 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d519, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d504;
        al_m1c0_f = (double)(float)d509;
        al_m1d0_f = (double)(float)d511;
        al_m1b8_f = (double)(float)d517;
        al_m1cc_f = (double)(float)d518;
        x1 = d519;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d519, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d504;
        al_m1c0_f = (double)(float)d509;
        al_m1d0_f = (double)(float)d511;
        al_m1b8_f = (double)(float)d517;
        al_m1cc_f = (double)(float)d518;
        x1 = d519;
    COW_AT(1018075b)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180763)
    d520 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d520);
    d521 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d521 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d521, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d521, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180784)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1018078c)
    d522 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d522);
    d523 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d523 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d523, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d523, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(101807ad)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(101807b5)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(101807c6)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(101807ce)
    if (!(al_m1c0_f < (double)rdf32(COW_IMG(0x1063907cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(101807e5)
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(101807df)
        x2 = (double)rdf32(sp1 - 0x1d0u);
    }
    COW_AT(101807eb)
    if (!(al_m1b8_f < (double)rdf32(COW_IMG(0x10639080u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(10180802)
        x3 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(101807fc)
        x3 = (double)rdf32(sp1 - 0x1ccu);
    }
    COW_AT(10180808)
    t524 = rd8(esi + 0x1au);
    d525 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)));
    d526 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639050u)) * x3) + fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu))));
    wr32(sp1 - 0x1d8u, t524);
    g->edx = edx;
    d527 = fr(g, fr(g, fr(g, fr(g, d526 + d525) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t524);
    fpush(g, d527);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180849u);
    t528 = cow_call_regs(g, COW_IMG(0x10311c6cu), t524, g->ecx, g->edx, 1, 0);
    t529 = g->edx;
    eax = t528;
    edx = t529;
    COW_AT(10180849)
    d530 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    d531 = fr(g, (double)rdf32(COW_IMG(0x10639060u)) * x3);
    wr32(sp1 - 0x1d0u, eax);
    t532 = rd8(esi + 0x19u);
    d533 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    wr32(sp1 - 0x1d8u, t532);
    g->ecx = t532;
    g->edx = edx;
    d534 = fr(g, fr(g, fr(g, fr(g, fr(g, d531 + d530) + d533) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t532);
    fpush(g, d534);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1018088bu);
    t535 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t536 = g->ecx;
    t537 = g->edx;
    eax = t535;
    ecx = t536;
    edx = t537;
    COW_AT(1018088b)
    d538 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    d539 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    wr32(sp1 - 0x1ccu, eax);
    t540 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t540);
    d541 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x90u, (uint8_t)t540);
    wr32(sp1 - 0x8cu, 0u);
    d542 = fr(g, fr(g, fr(g, fr(g, fr(g, d539 + d538) + d541) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t540);
    fpush(g, d542);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x101808e3u);
    t543 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t540, g->ecx, g->edx, 1, 0);
    eax = t543;
    COW_AT(101808e3)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(101808f4)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(101808f8)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(10180904)
        edx = 0xffu;
    }
    COW_AT(10180909)
    if ((int32_t)eax > 255)
    {
    COW_AT(10180910)
        eax = 0xffu;
    }
    COW_AT(10180915)
    t544 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t545 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t544);
    t546 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t546);
    wr32(sp1 - 0x1bcu, t545 + 1u);
    if ((int32_t)(t545 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t545 + 1u;
        al_m1d4 = t546;
        goto L_10180537;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t546;
    COW_AT(10180956)
    goto L_1018104e;
L_1018095b: ;
    COW_AT(1018095b)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1018104e;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_1018096e: ;
    COW_AT(1018096e)
    d425 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d426 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d427 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d425);
    d428 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d425) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d428);
    t429 = rd32(sp1 - 0x1d4u);
    d430 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d427) + (double)rdf32(edi + 0x168u));
    wrf32(t429 + 4u, (float)d430);
    t431 = rd32(sp1 - 0x1d4u);
    d432 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d426);
    wrf32(t431 + 8u, (float)d432);
    t433 = rd32(sp1 - 0x1d4u);
    d434 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t433 + 0xcu, (float)d434);
    d435 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d435 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t429 & 0xffff0000u) | (uint16_t)cow_fsw(g, d435, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t431;
        edx = t433;
        x0 = d435;
    }
    else
    {
        eax = (t429 & 0xffff0000u) | (uint16_t)cow_fsw(g, d435, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t431;
        edx = t433;
        x0 = d435;
    COW_AT(10180a65)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180a6d)
    d436 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d437 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d438 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d439 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d436 * d436) + fr(g, d437 * d437)) + fr(g, d438 * d438)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d439);
    d440 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d440);
    d441 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d442 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d442 * d442);
    g->st[g->top & 7u] = fr(g, (double)(float)d440 * (double)(float)d440);
    d443 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d441 * d441) + fr(g, d442 * d442)) + fr(g, (double)(float)d440 * (double)(float)d440))));
    wrf32(sp1 - 0x1d8u, (float)d443);
    d444 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d443);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d444);
    d445 = fr(g, d436 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d445);
    d446 = fr(g, fr(g, fr(g, (double)(float)d440 * (double)rdf32(esi + 0xcu)) + fr(g, d437 * (double)rdf32(esi + 0x10u))) + (double)(float)d445);
    d447 = fr(g, d437 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d446);
    d448 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d449 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d449 * d449);
    d450 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d450 * d450);
    d451 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d448 * d448) + fr(g, d449 * d449)) + fr(g, d450 * d450))));
    wrf32(sp1 - 0x1c4u, (float)d451);
    d452 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d448 * d448) + fr(g, d449 * d449)) + fr(g, d450 * d450)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d452);
    d453 = fr(g, fr(g, fr(g, d450 * (double)rdf32(esi + 0xcu)) + fr(g, d448 * (double)rdf32(esi + 0x14u))) + fr(g, d449 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d453);
    d454 = fr(g, (double)rdf32(sp1 - 0xdcu) - (double)rdf32(esi + 4u));
    d455 = fr(g, (double)rdf32(sp1 - 0xe0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d455 * d455);
    d456 = fr(g, (double)rdf32(sp1 - 0xd8u) - (double)rdf32(esi + 8u));
    g->st[g->top & 7u] = fr(g, d456 * d456);
    d457 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d454 * d454) + fr(g, d455 * d455)) + fr(g, d456 * d456))));
    wrf32(sp1 - 0x1c4u, (float)d457);
    d458 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d454 * d454) + fr(g, d455 * d455)) + fr(g, d456 * d456)))));
    wrf32(sp1 - 0x1b4u, (float)(double)(float)d458);
    d459 = fr(g, fr(g, fr(g, d455 * (double)rdf32(esi + 0xcu)) + fr(g, d456 * (double)rdf32(esi + 0x14u))) + fr(g, d454 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d459);
    d460 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d438 * (double)rdf32(esi + 0xcu)) + d447) + (double)(float)d445) * (double)(float)d439) * (double)(float)d439) * (double)(float)d439);
    if (!(d460 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d460, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d439;
        al_m1c0_f = (double)(float)d444;
        al_m1d0_f = (double)(float)d446;
        al_m1c4_f = (double)(float)d459;
        al_m1b8_f = (double)(float)d452;
        al_m1cc_f = (double)(float)d453;
        al_m1b4_f = (double)(float)d458;
        x1 = d460;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d460, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d439;
        al_m1c0_f = (double)(float)d444;
        al_m1d0_f = (double)(float)d446;
        al_m1c4_f = (double)(float)d459;
        al_m1b8_f = (double)(float)d452;
        al_m1cc_f = (double)(float)d453;
        al_m1b4_f = (double)(float)d458;
        x1 = d460;
    COW_AT(10180be4)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180bec)
    d461 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d461);
    d462 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d462 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d462, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d462, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c0d)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(10180c15)
    d463 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d463);
    d464 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d464 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d464, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d464, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c36)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(10180c3e)
    d465 = (double)(float)fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    wrf32(sp1 - 0x1c4u, (float)d465);
    d466 = fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    if (!(d466 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d466, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d466, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c5f)
        wr32(sp1 - 0x1c4u, 0u);
    }
    COW_AT(10180c67)
    if (al_m1dc_f < (double)rdf32(COW_IMG(0x10639078u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1dc_f, (double)rdf32(COW_IMG(0x10639078u)), 2u);
    COW_AT(10180c78)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180c80)
    if (!(al_m1c0_f < (double)rdf32(COW_IMG(0x1063907cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(10180c97)
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1c0_f, (double)rdf32(COW_IMG(0x1063907cu)), 2u);
    COW_AT(10180c91)
        x2 = (double)rdf32(sp1 - 0x1d0u);
    }
    COW_AT(10180c9d)
    if (!(al_m1b8_f < (double)rdf32(COW_IMG(0x10639080u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(10180cb4)
        x3 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b8_f, (double)rdf32(COW_IMG(0x10639080u)), 3u);
    COW_AT(10180cae)
        x3 = (double)rdf32(sp1 - 0x1ccu);
    }
    COW_AT(10180cba)
    if (!(al_m1b4_f < (double)rdf32(COW_IMG(0x10639084u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b4_f, (double)rdf32(COW_IMG(0x10639084u)), 4u);
    COW_AT(10180cd1)
        x4 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, al_m1b4_f, (double)rdf32(COW_IMG(0x10639084u)), 4u);
    COW_AT(10180ccb)
        x4 = (double)rdf32(sp1 - 0x1c4u);
    }
    COW_AT(10180cd7)
    t467 = rd8(esi + 0x1au);
    d468 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu)));
    d469 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639054u)) * x4) + fr(g, x3 * (double)rdf32(COW_IMG(0x10639050u))));
    wr32(sp1 - 0x1d8u, t467);
    g->edx = edx;
    d470 = fr(g, fr(g, fr(g, fr(g, fr(g, d469 + d468) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t467);
    fpush(g, d470);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180d22u);
    t471 = cow_call_regs(g, COW_IMG(0x10311c6cu), t467, g->ecx, g->edx, 1, 0);
    t472 = g->edx;
    eax = t471;
    edx = t472;
    COW_AT(10180d22)
    d473 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639060u)));
    d474 = fr(g, (double)rdf32(COW_IMG(0x10639064u)) * x4);
    wr32(sp1 - 0x1d0u, eax);
    t475 = rd8(esi + 0x19u);
    d476 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    wr32(sp1 - 0x1d8u, t475);
    g->ecx = t475;
    g->edx = edx;
    d477 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d474 + d473) + d476) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t475);
    fpush(g, d477);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180d6eu);
    t478 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t479 = g->ecx;
    t480 = g->edx;
    eax = t478;
    ecx = t479;
    edx = t480;
    COW_AT(10180d6e)
    d481 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    d482 = fr(g, x4 * (double)rdf32(COW_IMG(0x10639074u)));
    wr32(sp1 - 0x1ccu, eax);
    t483 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t483);
    d484 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x68u, (uint8_t)t483);
    wr32(sp1 - 0x64u, 0u);
    d485 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d482 + d481) + d484) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t483);
    fpush(g, d485);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180dd0u);
    t486 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t483, g->ecx, g->edx, 1, 0);
    eax = t486;
    COW_AT(10180dd0)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(10180de1)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(10180de5)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(10180df1)
        edx = 0xffu;
    }
    COW_AT(10180df6)
    if ((int32_t)eax > 255)
    {
    COW_AT(10180dfd)
        eax = 0xffu;
    }
    COW_AT(10180e02)
    t487 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t488 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t487);
    t489 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t489);
    wr32(sp1 - 0x1bcu, t488 + 1u);
    if ((int32_t)(t488 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t488 + 1u;
        al_m1d4 = t489;
        goto L_1018096e;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t489;
    COW_AT(10180e43)
    goto L_1018104e;
L_10180e48: ;
    COW_AT(10180e48)
    wr32(sp1 - 0x1bcu, 0u);
    if ((int32_t)rd32(eax + 8u) <= 0)
    {
        ecx = rd32(eax + 8u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        goto L_1018104e;
    }
    al_m1bc = 0u;
    al_m1d4 = rd32(sp1 - 0x1d4u);
L_10180e5b: ;
    COW_AT(10180e5b)
    d633 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d634 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d635 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d633);
    d636 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d633) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d636);
    t637 = rd32(sp1 - 0x1d4u);
    d638 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d635) + (double)rdf32(edi + 0x168u));
    wrf32(t637 + 4u, (float)d638);
    t639 = rd32(sp1 - 0x1d4u);
    d640 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d634);
    wrf32(t639 + 8u, (float)d640);
    t641 = rd32(sp1 - 0x1d4u);
    d642 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t641 + 0xcu, (float)d642);
    d643 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d643 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t637 & 0xffff0000u) | (uint16_t)cow_fsw(g, d643, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t639;
        edx = t641;
        x0 = d643;
    }
    else
    {
        eax = (t637 & 0xffff0000u) | (uint16_t)cow_fsw(g, d643, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t639;
        edx = t641;
        x0 = d643;
    COW_AT(10180f52)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180f5a)
    t644 = rd8(esi + 0x1au);
    d645 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    wr32(sp1 - 0x1d8u, t644);
    g->edx = edx;
    d646 = fr(g, fr(g, d645 + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t644);
    fpush(g, d646);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180f7du);
    t647 = cow_call_regs(g, COW_IMG(0x10311c6cu), t644, g->ecx, g->edx, 1, 0);
    t648 = g->edx;
    eax = t647;
    edx = t648;
    COW_AT(10180f7d)
    d649 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d0u, eax);
    t650 = rd8(esi + 0x19u);
    d651 = fr(g, d649 + (double)rdf32(edi + 0x394e4u));
    wr32(sp1 - 0x1d8u, t650);
    g->ecx = t650;
    g->edx = edx;
    d652 = fr(g, d651 * (double)(int32_t)t650);
    fpush(g, d652);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180fa1u);
    t653 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t654 = g->ecx;
    t655 = g->edx;
    eax = t653;
    ecx = t654;
    edx = t655;
    COW_AT(10180fa1)
    d656 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x1ccu, eax);
    t657 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t657);
    d658 = fr(g, d656 + (double)rdf32(edi + 0x394e8u));
    wr32(sp1 - 0x88u, (uint8_t)t657);
    wr32(sp1 - 0x84u, 0u);
    d659 = fr(g, d658 * (double)(int32_t)(uint8_t)t657);
    fpush(g, d659);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10180fdbu);
    t660 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t657, g->ecx, g->edx, 1, 0);
    eax = t660;
    COW_AT(10180fdb)
    if ((int32_t)rd32(sp1 - 0x1d0u) > 255)
    {
        ecx = 0xffu;
    }
    else
    {
    COW_AT(10180fec)
        ecx = rd32(sp1 - 0x1d0u);
    }
    COW_AT(10180ff0)
    if ((int32_t)rd32(sp1 - 0x1ccu) <= 255)
    {
        edx = rd32(sp1 - 0x1ccu);
    }
    else
    {
    COW_AT(10180ffc)
        edx = 0xffu;
    }
    COW_AT(10181001)
    if ((int32_t)eax > 255)
    {
    COW_AT(10181008)
        eax = 0xffu;
    }
    COW_AT(1018100d)
    t661 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t662 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t661);
    t663 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t663);
    wr32(sp1 - 0x1bcu, t662 + 1u);
    if ((int32_t)(t662 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t662 + 1u;
        al_m1d4 = t663;
        goto L_10180e5b;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t663;
    goto L_1018104e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1017de20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x1017de3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017de61u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017df11u:
    {
        double al_m198_f;
        double al_m1a8_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198_f = rdf32(sp1 - 0x198u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017df23u:
    {
        double al_m198_f;
        double al_m1a8_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198_f = rdf32(sp1 - 0x198u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017df36u:
    {
        double al_m198_f;
        double al_m1a8_f;
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
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198_f = rdf32(sp1 - 0x198u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017df49u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017df51u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017df5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017df99u:
    {
        double al_m198_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        al_m198_f = rdf32(sp1 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017dfabu:
    {
        double al_m198_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        al_m198_f = rdf32(sp1 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017dfbeu:
    {
        double al_m198_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        al_m198_f = rdf32(sp1 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017dfd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dfdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dfdeu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dff1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017dffau:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e00du:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e016u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e01du:
    {
        uint32_t al_m19c;
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
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e029u:
    {
        uint32_t al_m19c;
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
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e049u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e053u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e061u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e06au:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e06fu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e077u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e081u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e091u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e09bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0a9u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0b2u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0b7u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0bfu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0c9u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0d9u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0e3u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0f1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0fau:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e0ffu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e107u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e111u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e121u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e12bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e139u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e143u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e148u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e150u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e15au:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e168u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e182u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e223u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ecx = sp1 - 0x110u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c4u, sp1 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x1017e2c4u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e33au:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e348u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e3dcu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e449u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e457u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e4ebu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e558u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e566u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e5fau:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e653u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e667u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e675u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e69fu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e6b6u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e6cau:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e6e7u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e75du:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e799u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e7a9u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e802u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e840u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e87fu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e899u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e8a7u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e8b3u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e8bau:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
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
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e8ccu:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e8e1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e981u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e992u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea31u:
    {
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea48u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea52u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea5eu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea69u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea77u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea86u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea9bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ea9fu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eaa1u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eaaau:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eab4u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eac7u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ead2u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ead5u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ead8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eaeeu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb06u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb0au:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb0eu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb10u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb24u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb3cu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb3eu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb54u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb5fu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb67u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb6bu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb88u:
    {
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
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
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x118u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1017eb8au:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eb8eu:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ebaau:
    {
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x114u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1017ebacu:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ebb8u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ebcfu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ebdau:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ebf0u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ebf8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec03u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec19u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec1fu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec25u:
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
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec28u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec34u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec3eu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec4au:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec5du:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec61u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec63u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec6eu:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec75u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec7cu:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec80u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec83u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec98u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ec9au:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ecafu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ecbdu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ecd1u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ecd5u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eceau:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ecf1u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ed04u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017edfbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee66u:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee6eu:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee7fu:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee87u:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eeb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017eee2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef26u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef37u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef3bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef47u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef4cu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef53u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef58u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef99u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ef9eu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017efb1u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f0a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f0b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f183u:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f18bu:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1acu:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1b4u:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1c5u:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1cdu:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1deu:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1e4u:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f1eau:
    {
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f221u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f259u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2a7u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2b8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2bcu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2c8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2cdu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2d4u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f2d9u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f31au:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f31fu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f332u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f429u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f431u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f556u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f55eu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f57fu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f587u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5a8u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5b0u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5c1u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5c9u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5dau:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5e0u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5e6u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5f7u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f5fdu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f603u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f644u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f686u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f6deu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f6efu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f6f3u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f6ffu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f704u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f70bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f710u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f751u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f756u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f769u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f860u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f868u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f9dfu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f9e7u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa08u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa10u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa31u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa39u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa5au:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa62u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa73u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa7bu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa8cu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa92u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fa98u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017faa9u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017faafu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fab5u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fac6u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017faccu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fad2u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fb1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fb69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbcbu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbdcu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbe0u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbecu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbf1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbf8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fbfdu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fc3eu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fc43u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fc56u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fd4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fd55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fd78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fd9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fdd6u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fde7u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fdebu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fdf7u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fdfcu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fe03u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fe08u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fe49u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fe56u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fe70u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fe8fu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017feaeu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017feb3u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017febeu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fec2u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fed6u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fedau:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017feefu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fef6u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ff09u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180000u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180008u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018006bu:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180073u:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180084u:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018008cu:
    {
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101800b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101800e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018012bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018013cu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180140u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018014cu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180151u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180158u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018015du:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018019eu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101801a3u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101801b6u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101802adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101802b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180388u:
    {
        double al_m1c0_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180390u:
    {
        double al_m1c0_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803b1u:
    {
        double al_m1c0_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803b9u:
    {
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803cau:
    {
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803d2u:
    {
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803e3u:
    {
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803e9u:
    {
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101803efu:
    {
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180426u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018045eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804acu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804bdu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804c1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804cdu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804d2u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804d9u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101804deu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018051fu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180524u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180537u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018062eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180636u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018075bu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180763u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180784u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018078cu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807adu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807b5u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807c6u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807ceu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807dfu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807e5u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807ebu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101807fcu:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180802u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180808u:
    {
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180849u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018088bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101808e3u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101808f4u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101808f8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180904u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180909u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180910u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180915u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180956u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018095bu:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018096eu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180a65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180a6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180be4u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180becu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c0du:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c15u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c36u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c3eu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c5fu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c67u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c78u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c80u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c91u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c97u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180c9du:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180caeu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180cb4u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180cbau:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180ccbu:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180cd1u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180cd7u:
    {
        double al_m1b4_f;
        double al_m1b8_f;
        double al_m1c0_f;
        double al_m1dc_f;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1b8_f = rdf32(sp1 - 0x1b8u);
        al_m1b4_f = rdf32(sp1 - 0x1b4u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180d22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180d6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180dd0u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180de1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180de5u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180df1u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180df6u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180dfdu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180e02u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180e43u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
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
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180e48u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180e5bu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180f52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180f5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180f7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180fa1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180fdbu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180fecu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180ff0u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180ffcu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10181001u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10181008u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018100du:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018104eu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018105bu:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10181075u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10181094u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101810b3u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101810c8u:
    {
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101810efu:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m198;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10181118u:
    {
        uint32_t al_m114;
        uint32_t al_m118;
        uint32_t al_m19c;
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1c8;
        uint32_t al_m1ec;
        uint32_t al_m1f0;
        uint32_t al_m1f4;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1c8 = rd32(sp1 - 0x1c8u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m19c = rd32(sp1 - 0x19cu);
        al_m118 = rd32(sp1 - 0x118u);
        al_m114 = rd32(sp1 - 0x114u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1017de20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1017de20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
