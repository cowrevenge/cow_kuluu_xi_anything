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
    double d107;
    double d108;
    double d11;
    double d117;
    double d118;
    double d120;
    double d122;
    double d123;
    double d124;
    double d13;
    double d14;
    double d15;
    double d151;
    double d152;
    double d153;
    double d154;
    double d155;
    double d156;
    double d157;
    double d158;
    double d159;
    double d16;
    double d160;
    double d161;
    double d162;
    double d163;
    double d164;
    double d165;
    double d166;
    double d167;
    double d168;
    double d169;
    double d17;
    double d170;
    double d171;
    double d172;
    double d173;
    double d174;
    double d175;
    double d176;
    double d177;
    double d178;
    double d179;
    double d18;
    double d180;
    double d181;
    double d182;
    double d183;
    double d184;
    double d185;
    double d186;
    double d187;
    double d189;
    double d190;
    double d191;
    double d194;
    double d195;
    double d197;
    double d198;
    double d2;
    double d20;
    double d202;
    double d203;
    double d205;
    double d206;
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
    double d224;
    double d225;
    double d226;
    double d227;
    double d228;
    double d229;
    double d23;
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
    double d24;
    double d241;
    double d242;
    double d243;
    double d246;
    double d247;
    double d249;
    double d250;
    double d254;
    double d255;
    double d257;
    double d258;
    double d263;
    double d264;
    double d265;
    double d266;
    double d267;
    double d268;
    double d269;
    double d270;
    double d271;
    double d272;
    double d273;
    double d274;
    double d275;
    double d276;
    double d277;
    double d278;
    double d279;
    double d280;
    double d281;
    double d282;
    double d283;
    double d285;
    double d286;
    double d287;
    double d290;
    double d291;
    double d293;
    double d294;
    double d298;
    double d299;
    double d3;
    double d301;
    double d302;
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
    double d319;
    double d32;
    double d320;
    double d321;
    double d324;
    double d325;
    double d327;
    double d33;
    double d331;
    double d332;
    double d334;
    double d339;
    double d34;
    double d340;
    double d341;
    double d342;
    double d343;
    double d344;
    double d346;
    double d347;
    double d35;
    double d350;
    double d352;
    double d353;
    double d357;
    double d359;
    double d36;
    double d360;
    double d378;
    double d379;
    double d38;
    double d380;
    double d381;
    double d382;
    double d383;
    double d384;
    double d385;
    double d386;
    double d387;
    double d388;
    double d389;
    double d39;
    double d390;
    double d391;
    double d392;
    double d393;
    double d394;
    double d395;
    double d396;
    double d397;
    double d398;
    double d399;
    double d4;
    double d40;
    double d400;
    double d401;
    double d402;
    double d403;
    double d404;
    double d405;
    double d406;
    double d407;
    double d408;
    double d409;
    double d41;
    double d410;
    double d411;
    double d412;
    double d413;
    double d414;
    double d416;
    double d417;
    double d418;
    double d421;
    double d422;
    double d424;
    double d425;
    double d429;
    double d43;
    double d430;
    double d432;
    double d433;
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
    double d481;
    double d482;
    double d484;
    double d485;
    double d49;
    double d490;
    double d491;
    double d492;
    double d493;
    double d494;
    double d495;
    double d496;
    double d497;
    double d498;
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
    double d510;
    double d512;
    double d513;
    double d514;
    double d517;
    double d518;
    double d52;
    double d520;
    double d521;
    double d525;
    double d526;
    double d528;
    double d529;
    double d53;
    double d534;
    double d535;
    double d536;
    double d537;
    double d538;
    double d539;
    double d54;
    double d540;
    double d541;
    double d542;
    double d543;
    double d544;
    double d546;
    double d547;
    double d548;
    double d55;
    double d551;
    double d552;
    double d554;
    double d558;
    double d559;
    double d56;
    double d561;
    double d566;
    double d567;
    double d568;
    double d569;
    double d57;
    double d570;
    double d571;
    double d573;
    double d574;
    double d577;
    double d579;
    double d58;
    double d580;
    double d584;
    double d586;
    double d587;
    double d6;
    double d62;
    double d63;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d7;
    double d70;
    double d71;
    double d74;
    double d75;
    double d77;
    double d78;
    double d8;
    double d9;
    double d96;
    double d97;
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
    uint32_t t109;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t119;
    uint32_t t12;
    uint32_t t121;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
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
    uint32_t t150;
    uint32_t t188;
    uint32_t t19;
    uint32_t t192;
    uint32_t t193;
    uint32_t t196;
    uint32_t t199;
    uint32_t t200;
    uint32_t t201;
    uint32_t t204;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t210;
    uint32_t t22;
    uint32_t t240;
    uint32_t t244;
    uint32_t t245;
    uint32_t t248;
    uint32_t t25;
    uint32_t t251;
    uint32_t t252;
    uint32_t t253;
    uint32_t t256;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
    uint32_t t27;
    uint32_t t28;
    uint32_t t284;
    uint32_t t288;
    uint32_t t289;
    uint32_t t29;
    uint32_t t292;
    uint32_t t295;
    uint32_t t296;
    uint32_t t297;
    uint32_t t30;
    uint32_t t300;
    uint32_t t303;
    uint32_t t304;
    uint32_t t305;
    uint32_t t306;
    uint32_t t31;
    uint32_t t318;
    uint32_t t322;
    uint32_t t323;
    uint32_t t326;
    uint32_t t328;
    uint32_t t329;
    uint32_t t330;
    uint32_t t333;
    uint32_t t335;
    uint32_t t336;
    uint32_t t337;
    uint32_t t338;
    uint32_t t345;
    uint32_t t348;
    uint32_t t349;
    uint32_t t351;
    uint32_t t354;
    uint32_t t355;
    uint32_t t356;
    uint32_t t358;
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
    uint32_t t415;
    uint32_t t419;
    uint32_t t42;
    uint32_t t420;
    uint32_t t423;
    uint32_t t426;
    uint32_t t427;
    uint32_t t428;
    uint32_t t431;
    uint32_t t434;
    uint32_t t435;
    uint32_t t436;
    uint32_t t437;
    uint32_t t46;
    uint32_t t467;
    uint32_t t47;
    uint32_t t471;
    uint32_t t472;
    uint32_t t475;
    uint32_t t478;
    uint32_t t479;
    uint32_t t48;
    uint32_t t480;
    uint32_t t483;
    uint32_t t486;
    uint32_t t487;
    uint32_t t488;
    uint32_t t489;
    uint32_t t51;
    uint32_t t511;
    uint32_t t515;
    uint32_t t516;
    uint32_t t519;
    uint32_t t522;
    uint32_t t523;
    uint32_t t524;
    uint32_t t527;
    uint32_t t530;
    uint32_t t531;
    uint32_t t532;
    uint32_t t533;
    uint32_t t545;
    uint32_t t549;
    uint32_t t550;
    uint32_t t553;
    uint32_t t555;
    uint32_t t556;
    uint32_t t557;
    uint32_t t560;
    uint32_t t562;
    uint32_t t563;
    uint32_t t564;
    uint32_t t565;
    uint32_t t572;
    uint32_t t575;
    uint32_t t576;
    uint32_t t578;
    uint32_t t581;
    uint32_t t582;
    uint32_t t583;
    uint32_t t585;
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
    uint32_t t60;
    uint32_t t600;
    uint32_t t601;
    uint32_t t602;
    uint32_t t603;
    uint32_t t604;
    uint32_t t61;
    uint32_t t64;
    uint32_t t72;
    uint32_t t73;
    uint32_t t76;
    uint32_t t79;
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
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 540u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017de3fu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017de3f;
    case 0x1017de61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017de61;
    case 0x1017df11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198_f = rdf32(sp1 - 0x198u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017df11;
    case 0x1017df23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198_f = rdf32(sp1 - 0x198u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017df23;
    case 0x1017df36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198_f = rdf32(sp1 - 0x198u); goto E_1017df36;
    case 0x1017df49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017df49;
    case 0x1017df51u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017df51;
    case 0x1017df5au: ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017df5a;
    case 0x1017df99u: eax = g->eax; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); al_m198_f = rdf32(sp1 - 0x198u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017df99;
    case 0x1017dfabu: eax = g->eax; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); al_m198_f = rdf32(sp1 - 0x198u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017dfab;
    case 0x1017dfbeu: eax = g->eax; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1f0u); in_esi = rd32(sp1 - 0x1ecu); al_m198_f = rdf32(sp1 - 0x198u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1f0u); g->esi = rd32(sp1 - 0x1ecu); goto E_1017dfbe;
    case 0x1017dfd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017dfd3;
    case 0x1017dfdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1017dfdb;
    case 0x1017dfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017dfde;
    case 0x1017dff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017dff1;
    case 0x1017dffau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017dffa;
    case 0x1017e00du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e00d;
    case 0x1017e016u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e016;
    case 0x1017e01du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e01d;
    case 0x1017e029u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e029;
    case 0x1017e049u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e049;
    case 0x1017e053u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e053;
    case 0x1017e061u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e061;
    case 0x1017e06au: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e06a;
    case 0x1017e06fu: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e06f;
    case 0x1017e077u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e077;
    case 0x1017e081u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e081;
    case 0x1017e091u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e091;
    case 0x1017e09bu: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e09b;
    case 0x1017e0a9u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0a9;
    case 0x1017e0b2u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0b2;
    case 0x1017e0b7u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0b7;
    case 0x1017e0bfu: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0bf;
    case 0x1017e0c9u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0c9;
    case 0x1017e0d9u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0d9;
    case 0x1017e0e3u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0e3;
    case 0x1017e0f1u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0f1;
    case 0x1017e0fau: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0fa;
    case 0x1017e0ffu: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e0ff;
    case 0x1017e107u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e107;
    case 0x1017e111u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e111;
    case 0x1017e121u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e121;
    case 0x1017e12bu: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e12b;
    case 0x1017e139u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e139;
    case 0x1017e143u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e143;
    case 0x1017e148u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e148;
    case 0x1017e150u: eax = g->eax; ecx = g->ecx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e150;
    case 0x1017e15au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e15a;
    case 0x1017e168u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m19c = rd32(sp1 - 0x19cu); goto E_1017e168;
    case 0x1017e182u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e182;
    case 0x1017e223u: eax = g->eax; edx = g->edx; esi = g->esi; al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e223;
    case 0x1017e2c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e2c4;
    case 0x1017e33au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e33a;
    case 0x1017e348u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e348;
    case 0x1017e3dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e3dc;
    case 0x1017e449u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e449;
    case 0x1017e457u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e457;
    case 0x1017e4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e4eb;
    case 0x1017e558u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e558;
    case 0x1017e566u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e566;
    case 0x1017e5fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e5fa;
    case 0x1017e653u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e653;
    case 0x1017e667u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e667;
    case 0x1017e675u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e675;
    case 0x1017e69fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017e69f;
    case 0x1017e6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e6b6;
    case 0x1017e6cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017e6ca;
    case 0x1017e6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e6e7;
    case 0x1017e75du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e75d;
    case 0x1017e799u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e799;
    case 0x1017e7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e7a9;
    case 0x1017e802u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e802;
    case 0x1017e840u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e840;
    case 0x1017e87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e87f;
    case 0x1017e899u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e899;
    case 0x1017e8a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8a7;
    case 0x1017e8b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8b3;
    case 0x1017e8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e8ba;
    case 0x1017e8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e8cc;
    case 0x1017e8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8e1;
    case 0x1017e981u: ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m19c = rd32(sp1 - 0x19cu); al_m194 = rd32(sp1 - 0x194u); goto E_1017e981;
    case 0x1017e992u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e992;
    case 0x1017ea31u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ea31;
    case 0x1017ea48u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea48;
    case 0x1017ea52u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea52;
    case 0x1017ea5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea5e;
    case 0x1017ea69u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea69;
    case 0x1017ea77u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea77;
    case 0x1017ea86u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea86;
    case 0x1017ea9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea9b;
    case 0x1017ea9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea9f;
    case 0x1017eaa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eaa1;
    case 0x1017eaaau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017eaaa;
    case 0x1017eab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eab4;
    case 0x1017eac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eac7;
    case 0x1017ead2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ead2;
    case 0x1017ead5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ead5;
    case 0x1017ead8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ead8;
    case 0x1017eaeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eaee;
    case 0x1017eb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb06;
    case 0x1017eb0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb0a;
    case 0x1017eb0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb0e;
    case 0x1017eb10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb10;
    case 0x1017eb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017eb24;
    case 0x1017eb3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1f0 = rd32(sp1 - 0x1f0u); goto E_1017eb3c;
    case 0x1017eb3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1f0 = rd32(sp1 - 0x1f0u); goto E_1017eb3e;
    case 0x1017eb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb54;
    case 0x1017eb5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb5f;
    case 0x1017eb67u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017eb67;
    case 0x1017eb6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb6b;
    case 0x1017eb88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); goto E_1017eb88;
    case 0x1017eb8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017eb8a;
    case 0x1017eb8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017eb8e;
    case 0x1017ebaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); goto E_1017ebaa;
    case 0x1017ebacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ebac;
    case 0x1017ebb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ebb8;
    case 0x1017ebcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ebcf;
    case 0x1017ebdau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ebda;
    case 0x1017ebf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ebf0;
    case 0x1017ebf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ebf8;
    case 0x1017ec03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec03;
    case 0x1017ec19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec19;
    case 0x1017ec1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ec1f;
    case 0x1017ec25u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017ec25;
    case 0x1017ec28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec28;
    case 0x1017ec34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec34;
    case 0x1017ec3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec3e;
    case 0x1017ec4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec4a;
    case 0x1017ec5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec5d;
    case 0x1017ec61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec61;
    case 0x1017ec63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c8 = rd32(sp1 - 0x1c8u); al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); al_m198 = rd32(sp1 - 0x198u); al_m118 = rd32(sp1 - 0x118u); al_m114 = rd32(sp1 - 0x114u); goto E_1017ec63;
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
    case 0x1017edfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017edfb;
    case 0x1017ee03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017ee03;
    case 0x1017ee66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee66;
    case 0x1017ee6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee6e;
    case 0x1017ee7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee7f;
    case 0x1017ee87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ee87;
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
    case 0x1017f0a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f0a8;
    case 0x1017f0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f0b0;
    case 0x1017f183u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f183;
    case 0x1017f18bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f18b;
    case 0x1017f1acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1ac;
    case 0x1017f1b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1b4;
    case 0x1017f1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1c5;
    case 0x1017f1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1cd;
    case 0x1017f1deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1de;
    case 0x1017f1e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f1e4;
    case 0x1017f1eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f1ea;
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
    case 0x1017f429u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f429;
    case 0x1017f431u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f431;
    case 0x1017f556u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f556;
    case 0x1017f55eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f55e;
    case 0x1017f57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f57f;
    case 0x1017f587u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f587;
    case 0x1017f5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5a8;
    case 0x1017f5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5b0;
    case 0x1017f5c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5c1;
    case 0x1017f5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5c9;
    case 0x1017f5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5da;
    case 0x1017f5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f5e0;
    case 0x1017f5e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f5e6;
    case 0x1017f5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f5f7;
    case 0x1017f5fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017f5fd;
    case 0x1017f603u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017f603;
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
    case 0x1017f860u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f860;
    case 0x1017f868u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017f868;
    case 0x1017f9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f9df;
    case 0x1017f9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017f9e7;
    case 0x1017fa08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa08;
    case 0x1017fa10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa10;
    case 0x1017fa31u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa31;
    case 0x1017fa39u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa39;
    case 0x1017fa5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa5a;
    case 0x1017fa62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa62;
    case 0x1017fa73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa73;
    case 0x1017fa7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa7b;
    case 0x1017fa8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa8c;
    case 0x1017fa92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017fa92;
    case 0x1017fa98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017fa98;
    case 0x1017faa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017faa9;
    case 0x1017faafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1017faaf;
    case 0x1017fab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017fab5;
    case 0x1017fac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017fac6;
    case 0x1017faccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_1017facc;
    case 0x1017fad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_1017fad2;
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
    case 0x1017fd4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017fd4d;
    case 0x1017fd55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017fd55;
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
    case 0x10180000u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180000;
    case 0x10180008u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180008;
    case 0x1018006bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018006b;
    case 0x10180073u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180073;
    case 0x10180084u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180084;
    case 0x1018008cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018008c;
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
    case 0x101802adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101802ad;
    case 0x101802b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101802b5;
    case 0x10180388u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180388;
    case 0x10180390u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180390;
    case 0x101803b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803b1;
    case 0x101803b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803b9;
    case 0x101803cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803ca;
    case 0x101803d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803d2;
    case 0x101803e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803e3;
    case 0x101803e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101803e9;
    case 0x101803efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_101803ef;
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
    case 0x1018062eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1018062e;
    case 0x10180636u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180636;
    case 0x1018075bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018075b;
    case 0x10180763u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180763;
    case 0x10180784u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180784;
    case 0x1018078cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018078c;
    case 0x101807adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807ad;
    case 0x101807b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807b5;
    case 0x101807c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807c6;
    case 0x101807ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807ce;
    case 0x101807dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807df;
    case 0x101807e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101807e5;
    case 0x101807ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_101807eb;
    case 0x101807fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_101807fc;
    case 0x10180802u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180802;
    case 0x10180808u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180808;
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
    case 0x10180a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180a65;
    case 0x10180a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180a6d;
    case 0x10180be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180be4;
    case 0x10180becu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180bec;
    case 0x10180c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1d0_f = rdf32(sp1 - 0x1d0u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c0d;
    case 0x10180c15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c15;
    case 0x10180c36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1cc_f = rdf32(sp1 - 0x1ccu); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c36;
    case 0x10180c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c3e;
    case 0x10180c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c4_f = rdf32(sp1 - 0x1c4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c5f;
    case 0x10180c67u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c67;
    case 0x10180c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c78;
    case 0x10180c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c80;
    case 0x10180c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c91;
    case 0x10180c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10180c97;
    case 0x10180c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180c9d;
    case 0x10180caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180cae;
    case 0x10180cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10180cb4;
    case 0x10180cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180cba;
    case 0x10180ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180ccb;
    case 0x10180cd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; goto E_10180cd1;
    case 0x10180cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1c0_f = rdf32(sp1 - 0x1c0u); al_m1bc = rd32(sp1 - 0x1bcu); al_m1b8_f = rdf32(sp1 - 0x1b8u); al_m1b4_f = rdf32(sp1 - 0x1b4u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; goto E_10180cd7;
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
    case 0x10180f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180f52;
    case 0x10180f5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1dc_f = rdf32(sp1 - 0x1dcu); al_m1d4 = rd32(sp1 - 0x1d4u); al_m1bc = rd32(sp1 - 0x1bcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10180f5a;
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
    if (arg3 == 0u) goto L_1017df5a;
    COW_AT(1017de3f)
    wr32(sp1 - 0x118u, self + 0x38e1cu);
    wr32(sp1 - 0x1f4u, self + 0x38e1cu);
    wr32(sp1 - 0x1f8u, arg2 + 0x40u);
    wr32(sp1 - 0x1fcu, sp1 - 0x110u);
    g->esp = sp1 - 0x1f0u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x110u, arg2 + 0x40u, self + 0x38e1cu);
    COW_AT(1017de61)
    t1 = rd32(sp1 - 0x118u);
    d2 = (double)rdf32(rd32(sp1 - 0x118u) + 0x20u);
    esi = sp1 - 0x110u;
    edi = sp1 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(t1 + 8u) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(t1 + 0x28u) * (double)rdf32(arg2 + 0x24u))) + fr(g, (double)rdf32(t1 + 0x18u) * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(t1 + 0x38u));
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(t1 + 4u) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(t1 + 0x24u) * (double)rdf32(arg2 + 0x24u))) + fr(g, (double)rdf32(t1 + 0x14u) * (double)rdf32(arg2 + 0x20u))) + (double)rdf32(t1 + 0x34u));
    d5 = fr(g, fr(g, fr(g, fr(g, d2 * (double)rdf32(arg2 + 0x24u)) + fr(g, (double)rdf32(t1 + 0x10u) * (double)rdf32(arg2 + 0x20u))) + fr(g, (double)rdf32(t1) * (double)rdf32(arg2 + 0x1cu))) + (double)rdf32(t1 + 0x30u));
    wrf32(sp1 - 0x1a8u, (float)(double)(float)d3);
    d6 = fr(g, d5 - (double)rdf32(rd32(sp1 - 0x1c8u) + 0x390f0u));
    wrf32(sp1 - 0x198u, (float)(double)(float)d6);
    d7 = fr(g, (double)(float)d3 - (double)rdf32(rd32(sp1 - 0x1c8u) + 0x390f8u));
    d8 = fr(g, d4 - (double)rdf32(rd32(sp1 - 0x1c8u) + 0x390f4u));
    d9 = (double)(float)fr(g, fr(g, fr(g, d7 * d7) + fr(g, d8 * d8)) + fr(g, (double)(float)d6 * (double)(float)d6));
    wrf32(sp1 - 0x198u, (float)d9);
    if (rd8(arg2 + 0xbu) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(arg2 + 0xbu);
        ecx = rd32(sp1 - 0x1c8u);
        al_m198_f = d9;
        x0 = fr(g, fr(g, fr(g, d7 * d7) + fr(g, d8 * d8)) + fr(g, (double)(float)d6 * (double)(float)d6));
        goto L_1017df23;
    }
    eax = (t1 & 0xffffff00u) | rd8(arg2 + 0xbu);
    ecx = rd32(sp1 - 0x1c8u);
    al_m198_f = d9;
    x0 = fr(g, fr(g, fr(g, d7 * d7) + fr(g, d8 * d8)) + fr(g, (double)(float)d6 * (double)(float)d6));
    COW_AT(1017df11)
    d10 = fr(g, (double)rdf32(ecx + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
    if ((cow_fsw(g, x0, d10, 0u) & 0x4100u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
L_1017df36: ;
    COW_AT(1017df36)
    wr32(sp1 - 0x1f4u, arg2 + 0xf4u);
    wr32(sp1 - 0x1f8u, ecx + 0x38edcu);
    g->esp = sp1 - 0x1f0u;
    t12 = cow_call_regs(g, COW_IMG(0x10181bb0u), ecx + 0x38edcu, g->ecx, g->edx, 0, 2, ecx + 0x38edcu, arg2 + 0xf4u);
    eax = t12;
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
    d20 = (double)rdf32(sp1 - 0x198u);
    d21 = (double)rdf32(arg2 + 0xccu);
    if ((cow_fsw(g, d20, d21, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d20, d21, 0u) & 0x4100u;
    COW_AT(1017dffa)
        d23 = (double)rdf32(sp1 - 0x198u);
        d24 = (double)rdf32(arg2 + 0xc8u);
        if ((cow_fsw(g, d23, d24, 0u) & 0x4100u) != 0u)
        {
    COW_AT(1017e016)
            t26 = rd32(arg2 + 0x18u);
            wr32(sp1 - 0x19cu, t26);
            al_m19c = t26;
        }
        else
        {
    COW_AT(1017e00d)
            t25 = rd32(arg2 + 0x14u);
            wr32(sp1 - 0x19cu, t25);
            al_m19c = t25;
        }
    }
    else
    {
    COW_AT(1017dff1)
        t22 = rd32(arg2 + 0x10u);
        wr32(sp1 - 0x19cu, t22);
        al_m19c = t22;
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
    t27 = rd32(esi + 0x39448u) + 1u;
    t28 = rd32(esi + 0x39100u);
    wr32(esi + 0x39448u, t27);
    if (t28 != rd32(arg2 + 0xe4u))
    {
        eax = rd32(arg2 + 0xe4u);
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
            if (rd32(arg1 + eax * 0x4cu - 0x48u) != 0u)
            {
                eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017e061)
                if (rd32(eax + 8u) != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e06a)
                    if (rd8(eax) != 0x63u)
                    {
    COW_AT(1017e06f)
                        wr32(esi + 0x3945cu, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e081)
    if (rd32(esi + 0x39104u) != rd32(arg2 + 0xe8u))
    {
        eax = rd32(arg2 + 0xe8u);
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
            if (rd32(arg1 + eax * 0x4cu - 0x48u) != 0u)
            {
                eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017e0a9)
                if (rd32(eax + 8u) != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e0b2)
                    if (rd8(eax) != 0x63u)
                    {
    COW_AT(1017e0b7)
                        wr32(esi + 0x39460u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e0c9)
    if (rd32(esi + 0x39108u) != rd32(arg2 + 0xecu))
    {
        eax = rd32(arg2 + 0xecu);
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
            if (rd32(arg1 + eax * 0x4cu - 0x48u) != 0u)
            {
                eax = rd32(arg1 + eax * 0x4cu - 0x48u);
    COW_AT(1017e0f1)
                if (rd32(eax + 8u) != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e0fa)
                    if (rd8(eax) != 0x63u)
                    {
    COW_AT(1017e0ff)
                        wr32(esi + 0x39464u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e111)
    if (rd32(esi + 0x3910cu) == rd32(arg2 + 0xf0u))
    {
        edx = arg1;
    }
    else
    {
        eax = rd32(arg2 + 0xf0u);
    COW_AT(1017e121)
        wr32(esi + 0x3910cu, eax);
        if (eax == 0u)
        {
    COW_AT(1017e150)
            wr32(esi + 0x39468u, 0u);
            edx = arg1;
        }
        else
        {
    COW_AT(1017e12b)
            if (rd32(arg1 + eax * 0x4cu - 0x48u) == 0u)
            {
                edx = arg1;
            }
            else
            {
                eax = rd32(arg1 + eax * 0x4cu - 0x48u);
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
                    if (rd8(eax) != 0x63u)
                    {
    COW_AT(1017e148)
                        wr32(esi + 0x39468u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e15a)
    if (rd32(al_m19c + 0x1cu) > 3u)
    {
        al_m194 = rd32(sp1 - 0x194u);
    }
    else
    {
    COW_AT(1017e168)
        t29 = rd32(al_m19c + 0x30u);
        wr32(sp1 - 0x1f4u, t29);
        t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1f8u, t30);
        g->edx = t29;
        g->esp = sp1 - 0x1f0u;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x130u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 2, t30, t29);
        t31 = g->edx;
        edx = t31;
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
            d32 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(sp1 - 0x110u, (float)(double)(float)d32);
            d33 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(sp1 - 0x10cu, (float)(double)(float)d33);
            d34 = fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u));
            d35 = fr(g, fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu)));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d36 = fr(g, fr(g, d35 + d34) + (double)rdf32(arg2 + 0xb8u));
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp1 - 0x108u, (float)(double)(float)d36);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e2c4)
            wr32(sp1 - 0x194u, 1u);
            wr32(sp1 - 0x1b4u, COW_IMG(0x1063904cu));
            t37 = rd32(sp1 - 0x1c8u);
            d38 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(COW_IMG(0x10639048u), (float)d38);
            d39 = fr(g, (double)rdf32(rd32(t37 + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(COW_IMG(0x10639058u), (float)d39);
            d40 = fr(g, (double)rdf32(rd32(t37 + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wrf32(COW_IMG(0x10639068u), (float)d40);
            wr32(sp1 - 0x1c4u, sp1 - 0x100u);
            d41 = (double)rdf32(rd32(t37 + 0x3945cu) + 0x4cu);
            t42 = rd32(t37 + 0x3945cu);
            wrf32(COW_IMG(0x10639078u), (float)fr(g, d41 * d41));
            ecx = sp1 - 0x100u;
            edx = t42;
            esi = t37;
            al_m194 = 1u;
            al_m1c4 = sp1 - 0x100u;
            al_m1b4 = COW_IMG(0x1063904cu);
        }
    COW_AT(1017e33a)
        if (rd32(esi + 0x39460u) != 0u)
        {
            eax = rd32(esi + 0x39460u);
    COW_AT(1017e348)
            d43 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(ecx, (float)d43);
            d44 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(ecx + 4u, (float)d44);
            d45 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
            wrf32(ecx + 8u, (float)d45);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e3dc)
            t46 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t46);
            t47 = rd32(sp1 - 0x1b4u);
            t48 = rd32(sp1 - 0x1c8u);
            d49 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t47, (float)d49);
            d50 = fr(g, (double)rdf32(rd32(t48 + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t47 + 0x10u, (float)d50);
            t51 = rd32(sp1 - 0x1c4u) + 0x10u;
            d52 = fr(g, (double)rdf32(rd32(t48 + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wr32(sp1 - 0x1c4u, t51);
            wr32(sp1 - 0x1b4u, t47 + 4u);
            wrf32(t47 + 0x20u, (float)d52);
            d53 = (double)rdf32(rd32(t48 + 0x39460u) + 0x4cu);
            wrf32(t47 + 0x30u, (float)fr(g, d53 * d53));
            ecx = t51;
            edx = t51;
            esi = t48;
            al_m194 = t46;
            al_m1c4 = t51;
            al_m1b4 = t47 + 4u;
        }
    COW_AT(1017e449)
        if (rd32(esi + 0x39464u) != 0u)
        {
            eax = rd32(esi + 0x39464u);
    COW_AT(1017e457)
            d54 = fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u));
            d55 = fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d56 = fr(g, fr(g, fr(g, d55 + d54) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(ecx, (float)d56);
            d57 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(ecx + 4u, (float)d57);
            d58 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
            wrf32(ecx + 8u, (float)d58);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e4eb)
            t59 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t59);
            t60 = rd32(sp1 - 0x1b4u);
            t61 = rd32(sp1 - 0x1c8u);
            d62 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t60, (float)d62);
            d63 = fr(g, (double)rdf32(rd32(t61 + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t60 + 0x10u, (float)d63);
            t64 = rd32(sp1 - 0x1c4u) + 0x10u;
            d65 = fr(g, (double)rdf32(rd32(t61 + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wr32(sp1 - 0x1c4u, t64);
            wr32(sp1 - 0x1b4u, t60 + 4u);
            wrf32(t60 + 0x20u, (float)d65);
            d66 = (double)rdf32(rd32(t61 + 0x39464u) + 0x4cu);
            wrf32(t60 + 0x30u, (float)fr(g, d66 * d66));
            ecx = t64;
            edx = t64;
            esi = t61;
            al_m194 = t59;
            al_m1b4 = t60 + 4u;
        }
    COW_AT(1017e558)
        if (rd32(esi + 0x39468u) == 0u)
        {
            al_m19c = rd32(sp1 - 0x19cu);
        }
        else
        {
            eax = rd32(esi + 0x39468u);
    COW_AT(1017e566)
            d67 = fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u));
            d68 = fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d69 = fr(g, fr(g, fr(g, d68 + d67) + fr(g, (double)rdf32(eax + 0x34u) * (double)rdf32(arg2 + 0x80u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(ecx, (float)d69);
            d70 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(ecx + 4u, (float)d70);
            d71 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
            wrf32(ecx + 8u, (float)d71);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e5fa)
            t72 = rd32(sp1 - 0x1b4u);
            t73 = rd32(sp1 - 0x1c8u);
            d74 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t72, (float)d74);
            d75 = fr(g, (double)rdf32(rd32(t73 + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t72 + 0x10u, (float)d75);
            t76 = rd32(t73 + 0x39468u);
            d77 = fr(g, (double)rdf32(rd32(t73 + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wrf32(t72 + 0x20u, (float)d77);
            d78 = (double)rdf32(rd32(t73 + 0x39468u) + 0x4cu);
            wrf32(t72 + 0x30u, (float)fr(g, d78 * d78));
            t79 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t79);
            edx = t76;
            esi = t73;
            al_m19c = rd32(sp1 - 0x19cu);
            al_m194 = t79;
        }
    }
    COW_AT(1017e653)
    if (rd32(esi + 0x39138u) == rd32(arg2 + 0xe0u))
    {
        ecx = rd32(arg2 + 0xe0u);
    }
    else
    {
        ecx = rd32(arg2 + 0xe0u);
    COW_AT(1017e667)
        wr32(esi + 0x39138u, ecx);
        if (ecx == 0u)
        {
    COW_AT(1017e7a9)
            t99 = rd32(esi + 0x391c0u);
            wr32(sp1 - 0x1b0u, t99);
            t100 = rd32(esi + 0x391c4u);
            wr32(sp1 - 0x1acu, t100);
            t101 = rd32(esi + 0x391c8u);
            wr32(sp1 - 0x1a8u, t101);
            wr32(esi + 0x39540u, t99);
            wr32(esi + 0x39544u, t100);
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            wr32(esi + 0x39548u, t101);
            esi = esi + 0x39180u;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e802)
            t102 = rd32(sp1 - 0x18cu);
            t103 = rd32(sp1 - 0x188u);
            t104 = rd32(sp1 - 0x184u);
            t105 = rd32(sp1 - 0x1c8u);
            wr32(t105 + 0x394d0u, t102);
            wr32(t105 + 0x394d4u, t103);
            wr32(t105 + 0x394d8u, t104);
            wr32(t105 + 0x394dcu, 0u);
            wr32(sp1 - 0x1f4u, t105 + 0x394e0u);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x10188fa0u), rd32(COW_IMG(0x1065cb04u)), 1, t105 + 0x394e0u);
            esi = t105;
    COW_AT(1017e840)
            t106 = rd32(esi + 0x39258u);
            d107 = fr(g, (double)rdf32(esi + 0x39258u) - (double)rdf32(esi + 0x3925cu));
            wr32(esi + 0x39508u, t106);
            d108 = fr(g, (double)rdf32(esi + 0x3954cu) / d107);
            wrf32(esi + 0x39500u, (float)d108);
            t109 = rd32(esi + 0x39254u);
            wr32(sp1 - 0x1f4u, t109);
            wr32(sp1 - 0x1f8u, 0x22u);
            t110 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t110);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t110, 0x22u, t109);
    COW_AT(1017e87f)
            t111 = rd32(esi + 0x3925cu);
            wr32(sp1 - 0x1f4u, t111);
            wr32(sp1 - 0x1f8u, 0x24u);
            t112 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t112);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, rd32(rd32(t112) + 0xc8u), rd32(t112), 3, t112, 0x24u, t111);
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
            cow_thiscall(g, COW_IMG(0x10189120u), ecx, 4, esi + 0x39334u, esi + 0x39338u, esi + 0x3933cu, 0u);
            edi = esi + 0x39334u;
    COW_AT(1017e69f)
            wr32(sp1 - 0x1f4u, rd32(edi));
            wr32(sp1 - 0x1f8u, 0x22u);
            t80 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t80);
            g->eax = t80;
            g->edx = rd32(edi);
            t81 = rd32(edi);
            g->esp = sp1 - 0x1f0u;
            t82 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t80, 0x22u, t81);
            t83 = g->edx;
            eax = t82;
            edx = t83;
    COW_AT(1017e6b6)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, esi + 0x39260u);
            g->edx = edx;
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x10188ca0u), rd32(esi + 0x39138u), 2, esi + 0x39260u, 0u);
            t84 = g->edx;
            edx = t84;
            edi = esi + 0x39260u;
    COW_AT(1017e6ca)
            esi = edi;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e6e7)
            t85 = rd32(rd32(sp1 - 0x1c8u) + 0x392a0u);
            wr32(sp1 - 0x1b0u, t85);
            t86 = rd32(rd32(sp1 - 0x1c8u) + 0x392a4u);
            wr32(sp1 - 0x1acu, t86);
            t87 = rd32(rd32(sp1 - 0x1c8u) + 0x392a8u);
            wr32(sp1 - 0x1a8u, t87);
            t88 = rd32(sp1 - 0x1c8u);
            wr32(t88 + 0x394dcu, 0u);
            wr32(t88 + 0x39540u, t85);
            wr32(t88 + 0x39544u, t86);
            t89 = rd32(sp1 - 0x18cu);
            wr32(t88 + 0x394d0u, t89);
            wr32(t88 + 0x39548u, t87);
            t90 = rd32(sp1 - 0x188u);
            t91 = rd32(sp1 - 0x184u);
            wr32(t88 + 0x394d4u, t90);
            wr32(sp1 - 0x1f4u, t88 + 0x394e0u);
            t92 = rd32(t88 + 0x39138u);
            wr32(t88 + 0x394d8u, t91);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, COW_IMG(0x10188fa0u), t92, 1, t88 + 0x394e0u);
            esi = t88;
    COW_AT(1017e75d)
            t93 = rd32(rd32(sp1 - 0x118u));
            t94 = rd32(rd32(sp1 - 0x114u));
            t95 = rd32(sp1 - 0x118u);
            d96 = fr(g, (double)rdf32(rd32(sp1 - 0x118u)) - (double)rdf32(rd32(sp1 - 0x114u)));
            wr32(esi + 0x39508u, t93);
            wr32(sp1 - 0x1f4u, t94);
            d97 = fr(g, (double)rdf32(esi + 0x3954cu) / d96);
            wr32(sp1 - 0x1f8u, 0x24u);
            wrf32(esi + 0x39500u, (float)d97);
            t98 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t98);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, rd32(rd32(t98) + 0xc8u), t94, 3, t98, 0x24u, t94);
            edi = t95;
    COW_AT(1017e799)
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(edi);
        }
    COW_AT(1017e8a7)
        wr32(sp1 - 0x1f4u, edx);
        wr32(sp1 - 0x1f8u, 0x25u);
        wr32(sp1 - 0x1fcu, eax);
        g->edx = edx;
        t113 = rd32(eax);
        g->esp = sp1 - 0x1f0u;
        cow_thiscall(g, rd32(t113 + 0xc8u), t113, 3, eax, 0x25u, edx);
        t114 = g->ecx;
        t115 = g->edx;
        ecx = t114;
        edx = t115;
    COW_AT(1017e8b3)
        esi = rd32(sp1 - 0x1c8u);
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
    }
    COW_AT(1017e8ba)
    wr32(sp1 - 0x1f4u, esi + 0x38f9cu);
    if (arg3 == 0u)
    {
        al_m1f4 = esi + 0x38f9cu;
    COW_AT(1017e981)
        wr32(sp1 - 0x1f8u, arg2 + 0x40u);
        wr32(sp1 - 0x1fcu, sp1 - 0xd0u);
        g->edx = sp1 - 0xd0u;
        g->esp = sp1 - 0x1f0u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0xd0u, arg2 + 0x40u, al_m1f4);
        t119 = g->edx;
        edx = t119;
    COW_AT(1017e992)
        d120 = (double)rdf32(arg2 + 0xa0u);
        esi = sp1 - 0xd0u;
        edi = sp1 - 0x190u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t121 = rd32(sp1 - 0x1c8u);
        d122 = fr(g, fr(g, fr(g, d120 * (double)rdf32(t121 + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(t121 + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(t121 + 0x39540u)));
        wrf32(sp1 - 0x1b0u, (float)(double)(float)-d122);
        d123 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(t121 + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(t121 + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(t121 + 0x39540u)));
        wrf32(sp1 - 0x1acu, (float)(double)(float)-d123);
        edi = t121;
        al_m1b0_f = (double)(float)-d122;
        al_m1ac_f = (double)(float)-d123;
        x1 = fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(t121 + 0x39540u));
        x0 = fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(t121 + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(t121 + 0x39544u)));
    }
    else
    {
        al_m1f4 = esi + 0x38f9cu;
    COW_AT(1017e8cc)
        wr32(sp1 - 0x1f8u, sp1 - 0x40u);
        wr32(sp1 - 0x1fcu, sp1 - 0xd0u);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0xd0u, sp1 - 0x40u, al_m1f4);
        t116 = g->edx;
        edx = t116;
    COW_AT(1017e8e1)
        esi = sp1 - 0xd0u;
        edi = sp1 - 0x190u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d117 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u)));
        wrf32(sp1 - 0x1b0u, (float)(double)(float)-d117);
        d118 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u)));
        wrf32(sp1 - 0x1acu, (float)(double)(float)-d118);
        edi = rd32(sp1 - 0x1c8u);
        al_m1b0_f = (double)(float)-d117;
        al_m1ac_f = (double)(float)-d118;
        x1 = fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u));
        x0 = fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u)));
    }
    COW_AT(1017ea31)
    d124 = (double)(float)-fr(g, x0 + x1);
    wrf32(sp1 - 0x1a8u, (float)d124);
    if (rd32(edi + 0x39118u) == rd8(arg2 + 0xeu))
    {
        al_m1a8_f = d124;
    }
    else
    {
        eax = rd8(arg2 + 0xeu);
        al_m1a8_f = d124;
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
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x8fu, al_m1f4);
        t125 = g->edx;
        edx = t125;
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017ea77)
    if (rd32(edi + 0x390fcu) != (uint32_t)(int16_t)rd16(arg2 + 0xd4u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd4u);
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
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, al_m1f4);
        t126 = g->edx;
        edx = t126;
    COW_AT(1017eaaa)
        wr32(edi + 0x39120u, 0u);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017eab4)
    if (rd32(edi + 0x39110u) != (uint32_t)(int16_t)rd16(arg2 + 0xd6u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd6u);
    COW_AT(1017eac7)
        wr32(edi + 0x39110u, eax);
        if (eax == 0u) goto L_1017eb0e;
    COW_AT(1017ead2)
        if (eax == 1u) goto L_1017eb0a;
        eax = eax - 1u;
    COW_AT(1017ead5)
        if (eax != 1u) goto L_1017eb54;
    COW_AT(1017ead8)
        wr32(sp1 - 0x1f4u, 0u);
        wr32(sp1 - 0x1f8u, 0xfu);
        t127 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t127);
        g->esp = sp1 - 0x1f0u;
        cow_thiscall(g, rd32(rd32(t127) + 0xc8u), rd32(t127), 3, t127, 0xfu, 0u);
    COW_AT(1017eaee)
        wr32(sp1 - 0x1f4u, 3u);
        wr32(sp1 - 0x1f8u, 0xdu);
        wr32(sp1 - 0x1fcu, 0u);
        t128 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x200u, t128);
        g->esp = sp1 - 0x1ecu;
        cow_thiscall(g, rd32(rd32(t128) + 0xfcu), rd32(t128), 5, t128, 0u, 0xdu, 3u, rd32(sp1 - 0x1f0u));
    COW_AT(1017eb06)
        wr32(sp1 - 0x1f0u, 3u);
        al_m1f0 = 3u;
L_1017eb3e: ;
    COW_AT(1017eb3e)
        wr32(sp1 - 0x1f4u, 0xeu);
        wr32(sp1 - 0x1f8u, 0u);
        t131 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t131);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t132 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp1 - 0x1f0u;
        cow_thiscall(g, rd32(rd32(t131) + 0xfcu), rd32(t131), 3, t131, 0u, 0xeu);
        t133 = g->edx;
        edx = t133;
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
        wr32(sp1 - 0x1f4u, arg2);
        g->esp = sp1 - 0x1f0u;
        cow_fastcall(g, COW_IMG(0x1017a3f0u), edi, edx, 1, arg2);
    COW_AT(1017eb67)
        ecx = rd32(sp1 - 0x19cu);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017eb6b)
    t134 = rd32(ecx + 0x60u);
    wr32(sp1 - 0x198u, t134);
    wr32(sp1 - 0x118u, 0u);
    if ((int32_t)rd32(ecx + 0x44u) <= 0)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    eax = t134;
    al_m198 = t134;
    COW_AT(1017eb88)
    al_m118 = 0u;
L_1017eb8e: ;
    COW_AT(1017eb8e)
    t135 = rd32(eax + 4u);
    wr32(sp1 - 0x1c8u, t135);
    wr32(sp1 - 0x114u, 0u);
    if ((int32_t)rd32(eax) <= 0) goto L_101810ef;
    edx = t135;
    al_m1c8 = t135;
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
        if (rd16(esi + 0x20u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    COW_AT(1017ebf8)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, 0x1bu);
            wr32(sp1 - 0x1fcu, eax);
            g->esp = sp1 - 0x1f0u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 0u);
    COW_AT(1017ec03)
            wr32(sp1 - 0x1f4u, 1u);
            wr32(sp1 - 0x1f8u, 0xeu);
            t140 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t140);
            g->eax = t140;
            t141 = rd32(t140);
            g->esp = sp1 - 0x1f0u;
            t142 = cow_thiscall(g, rd32(t141 + 0xc8u), t141, 3, t140, 0xeu, 1u);
            t143 = g->ecx;
            eax = t142;
            ecx = t143;
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
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 1u);
    COW_AT(1017ebda)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, 0xeu);
            t136 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t136);
            g->eax = t136;
            t137 = rd32(t136);
            g->esp = sp1 - 0x1f0u;
            t138 = cow_thiscall(g, rd32(t137 + 0xc8u), t137, 3, t136, 0xeu, 0u);
            t139 = g->ecx;
            eax = t138;
            ecx = t139;
    COW_AT(1017ebf0)
            edx = rd32(COW_IMG(0x10631f18u));
        }
    COW_AT(1017ec1f)
        wr32(sp1 - 0x1f4u, edx);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        cow_cdecl(g, COW_IMG(0x10177400u), 1, edx);
        t144 = g->edx;
        edx = t144;
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
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, al_m1f4);
        t145 = g->edx;
        edx = t145;
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
        t147 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t147);
        g->esp = sp1 - 0x1f0u;
        cow_thiscall(g, rd32(rd32(t147) + 0xf4u), rd32(t147), 3, t147, 0u, 0u);
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
        t146 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t146);
        g->esp = sp1 - 0x1f0u;
        cow_thiscall(g, rd32(rd32(t146) + 0xf4u), t146, 3, t146, 0u, eax);
    COW_AT(1017ec98)
    }
    COW_AT(1017ecaf)
    if (rd32(rd32(sp1 - 0x19cu) + 0x1cu) != 2u) goto L_1017feb3;
L_1017ecbd: ;
    COW_AT(1017ecbd)
    wr32(sp1 - 0x1f4u, 0u);
    wr32(sp1 - 0x1f8u, sp1 - 0x1d4u);
    wr32(sp1 - 0x1fcu, 0u);
    wr32(sp1 - 0x200u, 0u);
    t148 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x204u, t148);
    g->eax = t148;
    g->esp = sp1 - 0x1f0u;
    t149 = cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x2cu), rd32(rd32(esi + 0x2cu)), 5, t148, 0u, 0u, sp1 - 0x1d4u, 0u);
    eax = t149;
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
    t150 = rd32(COW_IMG(0x10181120u) + ecx * 4u);
    switch (t150 - RD)
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
    d11 = (double)rdf32(ecx + 0x39424u);
    if ((cow_fsw(g, x0, d11, 0u) & 0x4100u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    goto L_1017df36;
L_1017df5a: ;
    COW_AT(1017df5a)
    d13 = fr(g, (double)rdf32(arg2 + 0x24u) - (double)rdf32(self + 0x390f8u));
    d14 = fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(self + 0x390f4u));
    d15 = fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(self + 0x390f0u));
    d16 = (double)(float)fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15));
    wrf32(sp1 - 0x198u, (float)d16);
    if (rd8(arg2 + 0xbu) == 0u)
    {
        eax = (arg3 & 0xffffff00u) | rd8(arg2 + 0xbu);
        al_m198_f = d16;
        x0 = fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15));
        goto L_1017dfab;
    }
    eax = (arg3 & 0xffffff00u) | rd8(arg2 + 0xbu);
    al_m198_f = d16;
    x0 = fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15));
    COW_AT(1017df99)
    d17 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
    if ((cow_fsw(g, x0, d17, 0u) & 0x4100u) == 0u)
    {
        loc_4 = in_ebp;
        al_m1ec = in_esi;
        al_m1f0 = in_edi;
        goto L_10181118;
    }
    eax = cow_fsw(g, x0, d17, 0u) & 0x4100u;
L_1017dfbe: ;
    COW_AT(1017dfbe)
    wr32(sp1 - 0x1f4u, arg2 + 0xf4u);
    wr32(sp1 - 0x1f8u, self + 0x38fdcu);
    g->esp = sp1 - 0x1f0u;
    t19 = cow_call_regs(g, COW_IMG(0x10181bb0u), eax, g->ecx, g->edx, 0, 2, self + 0x38fdcu, arg2 + 0xf4u);
    eax = t19;
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
    goto L_1017dfde;
L_1017dfab: ;
    COW_AT(1017dfab)
    d18 = (double)rdf32(self + 0x39424u);
    if ((cow_fsw(g, x0, d18, 0u) & 0x4100u) == 0u)
    {
        loc_4 = in_ebp;
        al_m1ec = in_esi;
        al_m1f0 = in_edi;
        goto L_10181118;
    }
    eax = cow_fsw(g, x0, d18, 0u) & 0x4100u;
    goto L_1017dfbe;
L_1017eb0a: ;
    COW_AT(1017eb0a)
    wr32(sp1 - 0x1f4u, 1u);
    al_m1f4 = 1u;
L_1017eb10: ;
    COW_AT(1017eb10)
    wr32(sp1 - 0x1f8u, 0xfu);
    t129 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t129);
    g->esp = sp1 - 0x1ecu;
    cow_thiscall(g, rd32(rd32(t129) + 0xc8u), rd32(t129), 4, t129, 0xfu, al_m1f4, rd32(sp1 - 0x1f0u));
    COW_AT(1017eb24)
    wr32(sp1 - 0x1f0u, 1u);
    wr32(sp1 - 0x1f4u, 0xdu);
    wr32(sp1 - 0x1f8u, 0u);
    t130 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t130);
    g->esp = sp1 - 0x1ecu;
    cow_thiscall(g, rd32(rd32(t130) + 0xfcu), rd32(t130), 4, t130, 0u, 0xdu, 1u);
    COW_AT(1017eb3c)
    wr32(sp1 - 0x1f0u, 1u);
    al_m1f0 = 1u;
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
    d307 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d308 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d309 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d307);
    d310 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d307) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d310);
    d311 = fr(g, fr(g, (double)(float)d307 * d309) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d311);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d307 * d308));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d307);
    d312 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d312 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d312, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d312;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d312, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d312;
    COW_AT(1017edfb)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017ee03)
    d313 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d314 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d315 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d316 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d313 * d313) + fr(g, d314 * d314)) + fr(g, d315 * d315)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d316);
    d317 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d315 * (double)rdf32(esi + 0x18u)) + fr(g, d313 * (double)rdf32(esi + 0x20u))) + fr(g, d314 * (double)rdf32(esi + 0x1cu))) * (double)(float)d316) * (double)(float)d316) * (double)(float)d316);
    if (!(d317 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d317, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d316;
        x1 = d317;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d317, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d316;
        x1 = d317;
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
    t318 = rd8(esi + 0x26u);
    d319 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d320 = fr(g, (double)rdf32(COW_IMG(0x10639048u)) * x1);
    wr32(sp1 - 0x1d8u, t318);
    g->edx = edx;
    d321 = fr(g, fr(g, fr(g, d320 + d319) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t318);
    fpush(g, d321);
    g->esp = sp1 - 0x1f0u;
    t322 = cow_call_regs(g, COW_IMG(0x10311c6cu), t318, g->ecx, g->edx, 1, 0);
    t323 = g->edx;
    eax = t322;
    edx = t323;
    COW_AT(1017eeb4)
    d324 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    d325 = fr(g, (double)rdf32(COW_IMG(0x10639058u)) * x1);
    wr32(sp1 - 0x1d0u, eax);
    t326 = rd8(esi + 0x25u);
    wr32(sp1 - 0x1d8u, t326);
    g->ecx = t326;
    g->edx = edx;
    d327 = fr(g, fr(g, fr(g, d325 + d324) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t326);
    fpush(g, d327);
    g->esp = sp1 - 0x1f0u;
    t328 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t329 = g->ecx;
    t330 = g->edx;
    eax = t328;
    ecx = t329;
    edx = t330;
    COW_AT(1017eee2)
    d331 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    d332 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x1ccu, eax);
    t333 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t333);
    wr32(sp1 - 0x60u, (uint8_t)t333);
    wr32(sp1 - 0x5cu, 0u);
    d334 = fr(g, fr(g, fr(g, d332 + d331) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t333);
    fpush(g, d334);
    g->esp = sp1 - 0x1f0u;
    t335 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t333, g->ecx, g->edx, 1, 0);
    eax = t335;
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
    t336 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t337 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t336);
    t338 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t338);
    wr32(sp1 - 0x1bcu, t337 + 1u);
    if ((int32_t)(t337 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t337 + 1u;
        al_m1d4 = t338;
        goto L_1017ed04;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t338;
    COW_AT(1017ef99)
L_1017fe49: ;
    COW_AT(1017fe49)
    t365 = rd32(rd32(sp1 - 0x1c8u) + 0x2cu);
    wr32(sp1 - 0x1f4u, t365);
    t366 = rd32(sp1 - 0x1c8u);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, rd32(rd32(t365) + 0x30u), ecx, 1, t365);
    esi = t366;
    COW_AT(1017fe56)
    wr32(sp1 - 0x1f4u, 0u);
    t367 = rd32(esi + 0xb8u);
    wr32(sp1 - 0x1f8u, t367);
    t368 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t368);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, rd32(rd32(t368) + 0x154u), rd32(t368), 3, t368, t367, 0u);
    COW_AT(1017fe70)
    t369 = rd32(rd32(sp1 - 0x19cu) + 0x34u);
    wr32(sp1 - 0x1f4u, t369);
    t370 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x1f8u, t370);
    wr32(sp1 - 0x1fcu, 0u);
    t371 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t371);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t371, 0u, t370, t369);
    COW_AT(1017fe8f)
    t372 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1f4u, t372);
    wr32(sp1 - 0x1f8u, 0u);
    t373 = rd32(esi + 8u);
    wr32(sp1 - 0x1fcu, t373);
    wr32(sp1 - 0x200u, 0u);
    t374 = rd32(rd32(sp1 - 0x19cu) + 0x3cu);
    wr32(sp1 - 0x204u, t374);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t374, 0u, t373, 0u, t372);
    COW_AT(1017feae)
L_101810b3: ;
    COW_AT(101810b3)
    t602 = rd32(edi + 0x3942cu) + rd32(esi + 0x18u);
    t603 = rd32(sp1 - 0x1c8u);
    wr32(edi + 0x3942cu, t602);
    esi = t603;
L_101810c8: ;
    COW_AT(101810c8)
    t604 = rd32(sp1 - 0x114u) + 1u;
    wr32(sp1 - 0x114u, t604);
    wr32(sp1 - 0x1c8u, esi + 0xc0u);
    if ((int32_t)t604 < (int32_t)rd32(rd32(sp1 - 0x198u)))
    {
        edx = rd32(sp1 - 0x198u);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m1c8 = esi + 0xc0u;
        esi = esi + 0xc0u;
        al_m114 = t604;
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
    d263 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d264 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d265 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d263);
    d266 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d263) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d266);
    d267 = fr(g, fr(g, (double)(float)d263 * d265) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d267);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d263 * d264));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d263);
    d268 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d268 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d268, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d268;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d268, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d268;
    COW_AT(1017f0a8)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f0b0)
    d269 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d270 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d271 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d272 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d269 * d269) + fr(g, d270 * d270)) + fr(g, d271 * d271)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d272);
    d273 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d273);
    d274 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d275 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    d276 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d274 * d274) + fr(g, d275 * d275)) + fr(g, (double)(float)d273 * (double)(float)d273))));
    wrf32(sp1 - 0x1d8u, (float)d276);
    d277 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d276);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d277);
    d278 = fr(g, d269 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d278);
    d279 = fr(g, fr(g, fr(g, (double)(float)d273 * (double)rdf32(esi + 0x18u)) + fr(g, d270 * (double)rdf32(esi + 0x1cu))) + (double)(float)d278);
    d280 = fr(g, d270 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d279);
    d281 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d271 * (double)rdf32(esi + 0x18u)) + d280) + (double)(float)d278) * (double)(float)d272) * (double)(float)d272) * (double)(float)d272);
    if (!(d281 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d281, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d272;
        al_m1c0_f = (double)(float)d277;
        al_m1d0_f = (double)(float)d279;
        x1 = d281;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d281, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d272;
        al_m1c0_f = (double)(float)d277;
        al_m1d0_f = (double)(float)d279;
        x1 = d281;
    COW_AT(1017f183)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f18b)
    d282 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d282);
    d283 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d283 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d283, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d283, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t284 = rd8(esi + 0x26u);
    d285 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d286 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1063904cu)) * x2) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u))));
    wr32(sp1 - 0x1d8u, t284);
    g->edx = edx;
    d287 = fr(g, fr(g, fr(g, d286 + d285) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t284);
    fpush(g, d287);
    g->esp = sp1 - 0x1f0u;
    t288 = cow_call_regs(g, COW_IMG(0x10311c6cu), t284, g->ecx, g->edx, 1, 0);
    t289 = g->edx;
    eax = t288;
    edx = t289;
    COW_AT(1017f221)
    d290 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    d291 = fr(g, (double)rdf32(COW_IMG(0x1063905cu)) * x2);
    wr32(sp1 - 0x1d0u, eax);
    t292 = rd8(esi + 0x25u);
    d293 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d8u, t292);
    g->ecx = t292;
    g->edx = edx;
    d294 = fr(g, fr(g, fr(g, fr(g, d291 + d290) + d293) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t292);
    fpush(g, d294);
    g->esp = sp1 - 0x1f0u;
    t295 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t296 = g->ecx;
    t297 = g->edx;
    eax = t295;
    ecx = t296;
    edx = t297;
    COW_AT(1017f259)
    d298 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    d299 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x1ccu, eax);
    t300 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t300);
    d301 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x58u, (uint8_t)t300);
    wr32(sp1 - 0x54u, 0u);
    d302 = fr(g, fr(g, fr(g, fr(g, d299 + d298) + d301) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t300);
    fpush(g, d302);
    g->esp = sp1 - 0x1f0u;
    t303 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t300, g->ecx, g->edx, 1, 0);
    eax = t303;
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
    t304 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t305 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t304);
    t306 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t306);
    wr32(sp1 - 0x1bcu, t305 + 1u);
    if ((int32_t)(t305 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t305 + 1u;
        al_m1d4 = t306;
        goto L_1017efb1;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t306;
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
    d211 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d212 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d213 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d211);
    d214 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d211) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d214);
    d215 = fr(g, fr(g, (double)(float)d211 * d213) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d215);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d211 * d212));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d211);
    d216 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d216 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d216, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d216;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d216, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d216;
    COW_AT(1017f429)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f431)
    d217 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d218 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d219 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d220 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d217 * d217) + fr(g, d218 * d218)) + fr(g, d219 * d219)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d220);
    d221 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d221);
    d222 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d223 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    d224 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d222 * d222) + fr(g, d223 * d223)) + fr(g, (double)(float)d221 * (double)(float)d221))));
    wrf32(sp1 - 0x1d8u, (float)d224);
    d225 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d224);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d225);
    d226 = fr(g, d217 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d226);
    d227 = fr(g, fr(g, fr(g, (double)(float)d221 * (double)rdf32(esi + 0x18u)) + fr(g, d218 * (double)rdf32(esi + 0x1cu))) + (double)(float)d226);
    d228 = fr(g, d218 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d227);
    d229 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d230 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    d231 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    d232 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d229 * d229) + fr(g, d230 * d230)) + fr(g, d231 * d231))));
    wrf32(sp1 - 0x1d8u, (float)d232);
    d233 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d229 * d229) + fr(g, d230 * d230)) + fr(g, d231 * d231)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d233);
    d234 = fr(g, fr(g, fr(g, d231 * (double)rdf32(esi + 0x18u)) + fr(g, d229 * (double)rdf32(esi + 0x20u))) + fr(g, d230 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d234);
    d235 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d219 * (double)rdf32(esi + 0x18u)) + d228) + (double)(float)d226) * (double)(float)d220) * (double)(float)d220) * (double)(float)d220);
    if (!(d235 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d235, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d220;
        al_m1c0_f = (double)(float)d225;
        al_m1d0_f = (double)(float)d227;
        al_m1b8_f = (double)(float)d233;
        al_m1cc_f = (double)(float)d234;
        x1 = d235;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d235, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d220;
        al_m1c0_f = (double)(float)d225;
        al_m1d0_f = (double)(float)d227;
        al_m1b8_f = (double)(float)d233;
        al_m1cc_f = (double)(float)d234;
        x1 = d235;
    COW_AT(1017f556)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f55e)
    d236 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d236);
    d237 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d237 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d237, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d237, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017f57f)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017f587)
    d238 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d238);
    d239 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d239 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d239, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d239, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t240 = rd8(esi + 0x26u);
    d241 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)));
    d242 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639050u)) * x3) + fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu))));
    wr32(sp1 - 0x1d8u, t240);
    g->edx = edx;
    d243 = fr(g, fr(g, fr(g, fr(g, d242 + d241) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t240);
    fpush(g, d243);
    g->esp = sp1 - 0x1f0u;
    t244 = cow_call_regs(g, COW_IMG(0x10311c6cu), t240, g->ecx, g->edx, 1, 0);
    t245 = g->edx;
    eax = t244;
    edx = t245;
    COW_AT(1017f644)
    d246 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    d247 = fr(g, (double)rdf32(COW_IMG(0x10639060u)) * x3);
    wr32(sp1 - 0x1d0u, eax);
    t248 = rd8(esi + 0x25u);
    d249 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    wr32(sp1 - 0x1d8u, t248);
    g->ecx = t248;
    g->edx = edx;
    d250 = fr(g, fr(g, fr(g, fr(g, fr(g, d247 + d246) + d249) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t248);
    fpush(g, d250);
    g->esp = sp1 - 0x1f0u;
    t251 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t252 = g->ecx;
    t253 = g->edx;
    eax = t251;
    ecx = t252;
    edx = t253;
    COW_AT(1017f686)
    d254 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    d255 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    wr32(sp1 - 0x1ccu, eax);
    t256 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t256);
    d257 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x80u, (uint8_t)t256);
    wr32(sp1 - 0x7cu, 0u);
    d258 = fr(g, fr(g, fr(g, fr(g, fr(g, d255 + d254) + d257) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t256);
    fpush(g, d258);
    g->esp = sp1 - 0x1f0u;
    t259 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t256, g->ecx, g->edx, 1, 0);
    eax = t259;
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
    t260 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t261 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t260);
    t262 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t262);
    wr32(sp1 - 0x1bcu, t261 + 1u);
    if ((int32_t)(t261 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t261 + 1u;
        al_m1d4 = t262;
        goto L_1017f332;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t262;
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
    d151 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d152 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d153 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d151);
    d154 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d151) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d154);
    d155 = fr(g, fr(g, (double)(float)d151 * d153) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d155);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d151 * d152));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d151);
    d156 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d156 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d156, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d156;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d156, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d156;
    COW_AT(1017f860)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f868)
    d157 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d158 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d159 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d160 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d157 * d157) + fr(g, d158 * d158)) + fr(g, d159 * d159)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d160);
    d161 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d161);
    d162 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d163 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    d164 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d162 * d162) + fr(g, d163 * d163)) + fr(g, (double)(float)d161 * (double)(float)d161))));
    wrf32(sp1 - 0x1d8u, (float)d164);
    d165 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d164);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d165);
    d166 = fr(g, d157 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d166);
    d167 = fr(g, fr(g, fr(g, (double)(float)d161 * (double)rdf32(esi + 0x18u)) + fr(g, d158 * (double)rdf32(esi + 0x1cu))) + (double)(float)d166);
    d168 = fr(g, d158 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d167);
    d169 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d170 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    d171 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    d172 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d169 * d169) + fr(g, d170 * d170)) + fr(g, d171 * d171))));
    wrf32(sp1 - 0x1c4u, (float)d172);
    d173 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d169 * d169) + fr(g, d170 * d170)) + fr(g, d171 * d171)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d173);
    d174 = fr(g, fr(g, fr(g, d171 * (double)rdf32(esi + 0x18u)) + fr(g, d169 * (double)rdf32(esi + 0x20u))) + fr(g, d170 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d174);
    d175 = fr(g, (double)rdf32(sp1 - 0xdcu) - (double)rdf32(esi + 4u));
    d176 = fr(g, (double)rdf32(sp1 - 0xe0u) - (double)rdf32(esi));
    d177 = fr(g, (double)rdf32(sp1 - 0xd8u) - (double)rdf32(esi + 8u));
    d178 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d175 * d175) + fr(g, d176 * d176)) + fr(g, d177 * d177))));
    wrf32(sp1 - 0x1c4u, (float)d178);
    d179 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d175 * d175) + fr(g, d176 * d176)) + fr(g, d177 * d177)))));
    wrf32(sp1 - 0x1b4u, (float)(double)(float)d179);
    d180 = fr(g, fr(g, fr(g, d176 * (double)rdf32(esi + 0x18u)) + fr(g, d177 * (double)rdf32(esi + 0x20u))) + fr(g, d175 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d180);
    d181 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d159 * (double)rdf32(esi + 0x18u)) + d168) + (double)(float)d166) * (double)(float)d160) * (double)(float)d160) * (double)(float)d160);
    if (!(d181 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d160;
        al_m1c0_f = (double)(float)d165;
        al_m1d0_f = (double)(float)d167;
        al_m1c4_f = (double)(float)d180;
        al_m1b8_f = (double)(float)d173;
        al_m1cc_f = (double)(float)d174;
        al_m1b4_f = (double)(float)d179;
        x1 = d181;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d181, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d160;
        al_m1c0_f = (double)(float)d165;
        al_m1d0_f = (double)(float)d167;
        al_m1c4_f = (double)(float)d180;
        al_m1b8_f = (double)(float)d173;
        al_m1cc_f = (double)(float)d174;
        al_m1b4_f = (double)(float)d179;
        x1 = d181;
    COW_AT(1017f9df)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f9e7)
    d182 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d182);
    d183 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d183 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d183, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa08)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017fa10)
    d184 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d184);
    d185 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d185 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d185, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d185, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa31)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(1017fa39)
    d186 = (double)(float)fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    wrf32(sp1 - 0x1c4u, (float)d186);
    d187 = fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    if (!(d187 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d187, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d187, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t188 = rd8(esi + 0x26u);
    d189 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu)));
    d190 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639054u)) * x4) + fr(g, x3 * (double)rdf32(COW_IMG(0x10639050u))));
    wr32(sp1 - 0x1d8u, t188);
    g->edx = edx;
    d191 = fr(g, fr(g, fr(g, fr(g, fr(g, d190 + d189) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t188);
    fpush(g, d191);
    g->esp = sp1 - 0x1f0u;
    t192 = cow_call_regs(g, COW_IMG(0x10311c6cu), t188, g->ecx, g->edx, 1, 0);
    t193 = g->edx;
    eax = t192;
    edx = t193;
    COW_AT(1017fb1d)
    d194 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639060u)));
    d195 = fr(g, (double)rdf32(COW_IMG(0x10639064u)) * x4);
    wr32(sp1 - 0x1d0u, eax);
    t196 = rd8(esi + 0x25u);
    d197 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    wr32(sp1 - 0x1d8u, t196);
    g->ecx = t196;
    g->edx = edx;
    d198 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d195 + d194) + d197) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t196);
    fpush(g, d198);
    g->esp = sp1 - 0x1f0u;
    t199 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t200 = g->ecx;
    t201 = g->edx;
    eax = t199;
    ecx = t200;
    edx = t201;
    COW_AT(1017fb69)
    d202 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    d203 = fr(g, x4 * (double)rdf32(COW_IMG(0x10639074u)));
    wr32(sp1 - 0x1ccu, eax);
    t204 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t204);
    d205 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x70u, (uint8_t)t204);
    wr32(sp1 - 0x6cu, 0u);
    d206 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d203 + d202) + d205) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t204);
    fpush(g, d206);
    g->esp = sp1 - 0x1f0u;
    t207 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t204, g->ecx, g->edx, 1, 0);
    eax = t207;
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
    t208 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t209 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t208);
    t210 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t210);
    wr32(sp1 - 0x1bcu, t209 + 1u);
    if ((int32_t)(t209 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t209 + 1u;
        al_m1d4 = t210;
        goto L_1017f769;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t210;
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
    d339 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d340 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d341 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d339);
    d342 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d339) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d342);
    d343 = fr(g, fr(g, (double)(float)d339 * d341) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d343);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d339 * d340));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d339);
    d344 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d344 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d344, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d344;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d344, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d344;
    COW_AT(1017fd4d)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017fd55)
    t345 = rd8(esi + 0x26u);
    d346 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    wr32(sp1 - 0x1d8u, t345);
    g->edx = edx;
    d347 = fr(g, fr(g, d346 + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t345);
    fpush(g, d347);
    g->esp = sp1 - 0x1f0u;
    t348 = cow_call_regs(g, COW_IMG(0x10311c6cu), t345, g->ecx, g->edx, 1, 0);
    t349 = g->edx;
    eax = t348;
    edx = t349;
    COW_AT(1017fd78)
    d350 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d0u, eax);
    t351 = rd8(esi + 0x25u);
    d352 = fr(g, d350 + (double)rdf32(edi + 0x394e4u));
    wr32(sp1 - 0x1d8u, t351);
    g->ecx = t351;
    g->edx = edx;
    d353 = fr(g, d352 * (double)(int32_t)t351);
    fpush(g, d353);
    g->esp = sp1 - 0x1f0u;
    t354 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t355 = g->ecx;
    t356 = g->edx;
    eax = t354;
    ecx = t355;
    edx = t356;
    COW_AT(1017fd9c)
    d357 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x1ccu, eax);
    t358 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t358);
    d359 = fr(g, d357 + (double)rdf32(edi + 0x394e8u));
    wr32(sp1 - 0x50u, (uint8_t)t358);
    wr32(sp1 - 0x4cu, 0u);
    d360 = fr(g, d359 * (double)(int32_t)(uint8_t)t358);
    fpush(g, d360);
    g->esp = sp1 - 0x1f0u;
    t361 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t358, g->ecx, g->edx, 1, 0);
    eax = t361;
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
    t362 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t363 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t362);
    t364 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t364);
    wr32(sp1 - 0x1bcu, t363 + 1u);
    if ((int32_t)(t363 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t363 + 1u;
        al_m1d4 = t364;
        goto L_1017fc56;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t364;
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
    t375 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x204u, t375);
    g->eax = t375;
    g->esp = sp1 - 0x1f0u;
    t376 = cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x2cu), rd32(rd32(esi + 0x2cu)), 5, t375, 0u, 0u, sp1 - 0x1d4u, 0u);
    eax = t376;
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
    t377 = rd32(COW_IMG(0x10181130u) + ecx * 4u);
    switch (t377 - RD)
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
    d534 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d535 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d536 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d534);
    d537 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d534) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d537);
    d538 = fr(g, fr(g, (double)(float)d534 * d536) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d538);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d534 * d535));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d534);
    d539 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d539 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d539, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d539;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d539, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d539;
    COW_AT(10180000)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180008)
    d540 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d541 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d542 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d543 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d540 * d540) + fr(g, d541 * d541)) + fr(g, d542 * d542)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d543);
    d544 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d540 * (double)rdf32(esi + 0x14u)) + fr(g, d541 * (double)rdf32(esi + 0x10u))) + fr(g, d542 * (double)rdf32(esi + 0xcu))) * (double)(float)d543) * (double)(float)d543) * (double)(float)d543);
    if (!(d544 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d544, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d543;
        x1 = d544;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d544, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d543;
        x1 = d544;
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
    t545 = rd8(esi + 0x1au);
    d546 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d547 = fr(g, (double)rdf32(COW_IMG(0x10639048u)) * x1);
    wr32(sp1 - 0x1d8u, t545);
    g->edx = edx;
    d548 = fr(g, fr(g, fr(g, d547 + d546) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t545);
    fpush(g, d548);
    g->esp = sp1 - 0x1f0u;
    t549 = cow_call_regs(g, COW_IMG(0x10311c6cu), t545, g->ecx, g->edx, 1, 0);
    t550 = g->edx;
    eax = t549;
    edx = t550;
    COW_AT(101800b9)
    d551 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    d552 = fr(g, (double)rdf32(COW_IMG(0x10639058u)) * x1);
    wr32(sp1 - 0x1d0u, eax);
    t553 = rd8(esi + 0x19u);
    wr32(sp1 - 0x1d8u, t553);
    g->ecx = t553;
    g->edx = edx;
    d554 = fr(g, fr(g, fr(g, d552 + d551) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t553);
    fpush(g, d554);
    g->esp = sp1 - 0x1f0u;
    t555 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t556 = g->ecx;
    t557 = g->edx;
    eax = t555;
    ecx = t556;
    edx = t557;
    COW_AT(101800e7)
    d558 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    d559 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x1ccu, eax);
    t560 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t560);
    wr32(sp1 - 0x48u, (uint8_t)t560);
    wr32(sp1 - 0x44u, 0u);
    d561 = fr(g, fr(g, fr(g, d559 + d558) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t560);
    fpush(g, d561);
    g->esp = sp1 - 0x1f0u;
    t562 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t560, g->ecx, g->edx, 1, 0);
    eax = t562;
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
    t563 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t564 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t563);
    t565 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t565);
    wr32(sp1 - 0x1bcu, t564 + 1u);
    if ((int32_t)(t564 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t564 + 1u;
        al_m1d4 = t565;
        goto L_1017ff09;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t565;
    COW_AT(1018019e)
L_1018104e: ;
    COW_AT(1018104e)
    t592 = rd32(rd32(sp1 - 0x1c8u) + 0x2cu);
    wr32(sp1 - 0x1f4u, t592);
    t593 = rd32(sp1 - 0x1c8u);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, rd32(rd32(t592) + 0x30u), ecx, 1, t592);
    esi = t593;
    COW_AT(1018105b)
    wr32(sp1 - 0x1f4u, 0u);
    t594 = rd32(esi + 0xb8u);
    wr32(sp1 - 0x1f8u, t594);
    t595 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t595);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, rd32(rd32(t595) + 0x154u), rd32(t595), 3, t595, t594, 0u);
    COW_AT(10181075)
    t596 = rd32(rd32(sp1 - 0x19cu) + 0x34u);
    wr32(sp1 - 0x1f4u, t596);
    t597 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x1f8u, t597);
    wr32(sp1 - 0x1fcu, 0u);
    t598 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t598);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t598, 0u, t597, t596);
    COW_AT(10181094)
    t599 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1f4u, t599);
    wr32(sp1 - 0x1f8u, 0u);
    t600 = rd32(esi + 8u);
    wr32(sp1 - 0x1fcu, t600);
    wr32(sp1 - 0x200u, 0u);
    t601 = rd32(rd32(sp1 - 0x19cu) + 0x3cu);
    wr32(sp1 - 0x204u, t601);
    g->esp = sp1 - 0x1f0u;
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t601, 0u, t600, 0u, t599);
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
    d490 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d491 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d492 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d490);
    d493 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d490) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d493);
    d494 = fr(g, fr(g, (double)(float)d490 * d492) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d494);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d490 * d491));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d490);
    d495 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d495 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d495, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d495;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d495, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d495;
    COW_AT(101802ad)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(101802b5)
    d496 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d497 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d498 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d499 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d496 * d496) + fr(g, d497 * d497)) + fr(g, d498 * d498)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d499);
    d500 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d500);
    d501 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d502 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    d503 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d501 * d501) + fr(g, d502 * d502)) + fr(g, (double)(float)d500 * (double)(float)d500))));
    wrf32(sp1 - 0x1d8u, (float)d503);
    d504 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d503);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d504);
    d505 = fr(g, d496 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d505);
    d506 = fr(g, fr(g, fr(g, (double)(float)d500 * (double)rdf32(esi + 0xcu)) + fr(g, d497 * (double)rdf32(esi + 0x10u))) + (double)(float)d505);
    d507 = fr(g, d497 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d506);
    d508 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d498 * (double)rdf32(esi + 0xcu)) + d507) + (double)(float)d505) * (double)(float)d499) * (double)(float)d499) * (double)(float)d499);
    if (!(d508 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d508, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d499;
        al_m1c0_f = (double)(float)d504;
        al_m1d0_f = (double)(float)d506;
        x1 = d508;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d508, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d499;
        al_m1c0_f = (double)(float)d504;
        al_m1d0_f = (double)(float)d506;
        x1 = d508;
    COW_AT(10180388)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180390)
    d509 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d509);
    d510 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d510 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d510, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d510, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t511 = rd8(esi + 0x1au);
    d512 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d513 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1063904cu)) * x2) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u))));
    wr32(sp1 - 0x1d8u, t511);
    g->edx = edx;
    d514 = fr(g, fr(g, fr(g, d513 + d512) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t511);
    fpush(g, d514);
    g->esp = sp1 - 0x1f0u;
    t515 = cow_call_regs(g, COW_IMG(0x10311c6cu), t511, g->ecx, g->edx, 1, 0);
    t516 = g->edx;
    eax = t515;
    edx = t516;
    COW_AT(10180426)
    d517 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    d518 = fr(g, (double)rdf32(COW_IMG(0x1063905cu)) * x2);
    wr32(sp1 - 0x1d0u, eax);
    t519 = rd8(esi + 0x19u);
    d520 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d8u, t519);
    g->ecx = t519;
    g->edx = edx;
    d521 = fr(g, fr(g, fr(g, fr(g, d518 + d517) + d520) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t519);
    fpush(g, d521);
    g->esp = sp1 - 0x1f0u;
    t522 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t523 = g->ecx;
    t524 = g->edx;
    eax = t522;
    ecx = t523;
    edx = t524;
    COW_AT(1018045e)
    d525 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    d526 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x1ccu, eax);
    t527 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t527);
    d528 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x78u, (uint8_t)t527);
    wr32(sp1 - 0x74u, 0u);
    d529 = fr(g, fr(g, fr(g, fr(g, d526 + d525) + d528) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t527);
    fpush(g, d529);
    g->esp = sp1 - 0x1f0u;
    t530 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t527, g->ecx, g->edx, 1, 0);
    eax = t530;
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
    t531 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t532 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t531);
    t533 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t533);
    wr32(sp1 - 0x1bcu, t532 + 1u);
    if ((int32_t)(t532 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t532 + 1u;
        al_m1d4 = t533;
        goto L_101801b6;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t533;
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
    d438 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d439 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d440 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d438);
    d441 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d438) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d441);
    d442 = fr(g, fr(g, (double)(float)d438 * d440) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d442);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d438 * d439));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d438);
    d443 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d443 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d443, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d443;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d443, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d443;
    COW_AT(1018062e)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180636)
    d444 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d445 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d446 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d447 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d444 * d444) + fr(g, d445 * d445)) + fr(g, d446 * d446)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d447);
    d448 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d448);
    d449 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d450 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    d451 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d449 * d449) + fr(g, d450 * d450)) + fr(g, (double)(float)d448 * (double)(float)d448))));
    wrf32(sp1 - 0x1d8u, (float)d451);
    d452 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d451);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d452);
    d453 = fr(g, d444 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d453);
    d454 = fr(g, fr(g, fr(g, (double)(float)d448 * (double)rdf32(esi + 0xcu)) + fr(g, d445 * (double)rdf32(esi + 0x10u))) + (double)(float)d453);
    d455 = fr(g, d445 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d454);
    d456 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d457 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    d458 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    d459 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d456 * d456) + fr(g, d457 * d457)) + fr(g, d458 * d458))));
    wrf32(sp1 - 0x1c4u, (float)d459);
    d460 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d456 * d456) + fr(g, d457 * d457)) + fr(g, d458 * d458)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d460);
    d461 = fr(g, fr(g, fr(g, d458 * (double)rdf32(esi + 0xcu)) + fr(g, d456 * (double)rdf32(esi + 0x14u))) + fr(g, d457 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d461);
    d462 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d446 * (double)rdf32(esi + 0xcu)) + d455) + (double)(float)d453) * (double)(float)d447) * (double)(float)d447) * (double)(float)d447);
    if (!(d462 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d462, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d447;
        al_m1c0_f = (double)(float)d452;
        al_m1d0_f = (double)(float)d454;
        al_m1b8_f = (double)(float)d460;
        al_m1cc_f = (double)(float)d461;
        x1 = d462;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d462, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d447;
        al_m1c0_f = (double)(float)d452;
        al_m1d0_f = (double)(float)d454;
        al_m1b8_f = (double)(float)d460;
        al_m1cc_f = (double)(float)d461;
        x1 = d462;
    COW_AT(1018075b)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180763)
    d463 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d463);
    d464 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d464 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d464, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d464, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180784)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1018078c)
    d465 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d465);
    d466 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d466 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d466, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d466, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t467 = rd8(esi + 0x1au);
    d468 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)));
    d469 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639050u)) * x3) + fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu))));
    wr32(sp1 - 0x1d8u, t467);
    g->edx = edx;
    d470 = fr(g, fr(g, fr(g, fr(g, d469 + d468) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t467);
    fpush(g, d470);
    g->esp = sp1 - 0x1f0u;
    t471 = cow_call_regs(g, COW_IMG(0x10311c6cu), t467, g->ecx, g->edx, 1, 0);
    t472 = g->edx;
    eax = t471;
    edx = t472;
    COW_AT(10180849)
    d473 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    d474 = fr(g, (double)rdf32(COW_IMG(0x10639060u)) * x3);
    wr32(sp1 - 0x1d0u, eax);
    t475 = rd8(esi + 0x19u);
    d476 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    wr32(sp1 - 0x1d8u, t475);
    g->ecx = t475;
    g->edx = edx;
    d477 = fr(g, fr(g, fr(g, fr(g, fr(g, d474 + d473) + d476) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t475);
    fpush(g, d477);
    g->esp = sp1 - 0x1f0u;
    t478 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t479 = g->ecx;
    t480 = g->edx;
    eax = t478;
    ecx = t479;
    edx = t480;
    COW_AT(1018088b)
    d481 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    d482 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    wr32(sp1 - 0x1ccu, eax);
    t483 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t483);
    d484 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x90u, (uint8_t)t483);
    wr32(sp1 - 0x8cu, 0u);
    d485 = fr(g, fr(g, fr(g, fr(g, fr(g, d482 + d481) + d484) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t483);
    fpush(g, d485);
    g->esp = sp1 - 0x1f0u;
    t486 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t483, g->ecx, g->edx, 1, 0);
    eax = t486;
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
        goto L_10180537;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t489;
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
    d378 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d379 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d380 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d378);
    d381 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d378) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d381);
    d382 = fr(g, fr(g, (double)(float)d378 * d380) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d382);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d378 * d379));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d378);
    d383 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d383 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d383, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d383;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d383, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d383;
    COW_AT(10180a65)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180a6d)
    d384 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d385 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d386 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d387 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d384 * d384) + fr(g, d385 * d385)) + fr(g, d386 * d386)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d387);
    d388 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d388);
    d389 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d390 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    d391 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d389 * d389) + fr(g, d390 * d390)) + fr(g, (double)(float)d388 * (double)(float)d388))));
    wrf32(sp1 - 0x1d8u, (float)d391);
    d392 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d391);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d392);
    d393 = fr(g, d384 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d393);
    d394 = fr(g, fr(g, fr(g, (double)(float)d388 * (double)rdf32(esi + 0xcu)) + fr(g, d385 * (double)rdf32(esi + 0x10u))) + (double)(float)d393);
    d395 = fr(g, d385 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d394);
    d396 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d397 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    d398 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    d399 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d396 * d396) + fr(g, d397 * d397)) + fr(g, d398 * d398))));
    wrf32(sp1 - 0x1c4u, (float)d399);
    d400 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d396 * d396) + fr(g, d397 * d397)) + fr(g, d398 * d398)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d400);
    d401 = fr(g, fr(g, fr(g, d398 * (double)rdf32(esi + 0xcu)) + fr(g, d396 * (double)rdf32(esi + 0x14u))) + fr(g, d397 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d401);
    d402 = fr(g, (double)rdf32(sp1 - 0xdcu) - (double)rdf32(esi + 4u));
    d403 = fr(g, (double)rdf32(sp1 - 0xe0u) - (double)rdf32(esi));
    d404 = fr(g, (double)rdf32(sp1 - 0xd8u) - (double)rdf32(esi + 8u));
    d405 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d402 * d402) + fr(g, d403 * d403)) + fr(g, d404 * d404))));
    wrf32(sp1 - 0x1c4u, (float)d405);
    d406 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d402 * d402) + fr(g, d403 * d403)) + fr(g, d404 * d404)))));
    wrf32(sp1 - 0x1b4u, (float)(double)(float)d406);
    d407 = fr(g, fr(g, fr(g, d403 * (double)rdf32(esi + 0xcu)) + fr(g, d404 * (double)rdf32(esi + 0x14u))) + fr(g, d402 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d407);
    d408 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d386 * (double)rdf32(esi + 0xcu)) + d395) + (double)(float)d393) * (double)(float)d387) * (double)(float)d387) * (double)(float)d387);
    if (!(d408 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d408, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d387;
        al_m1c0_f = (double)(float)d392;
        al_m1d0_f = (double)(float)d394;
        al_m1c4_f = (double)(float)d407;
        al_m1b8_f = (double)(float)d400;
        al_m1cc_f = (double)(float)d401;
        al_m1b4_f = (double)(float)d406;
        x1 = d408;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d408, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d387;
        al_m1c0_f = (double)(float)d392;
        al_m1d0_f = (double)(float)d394;
        al_m1c4_f = (double)(float)d407;
        al_m1b8_f = (double)(float)d400;
        al_m1cc_f = (double)(float)d401;
        al_m1b4_f = (double)(float)d406;
        x1 = d408;
    COW_AT(10180be4)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180bec)
    d409 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d409);
    d410 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d410 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d410, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d410, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c0d)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(10180c15)
    d411 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d411);
    d412 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d412 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d412, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d412, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c36)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(10180c3e)
    d413 = (double)(float)fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    wrf32(sp1 - 0x1c4u, (float)d413);
    d414 = fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    if (!(d414 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d414, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d414, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t415 = rd8(esi + 0x1au);
    d416 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu)));
    d417 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639054u)) * x4) + fr(g, x3 * (double)rdf32(COW_IMG(0x10639050u))));
    wr32(sp1 - 0x1d8u, t415);
    g->edx = edx;
    d418 = fr(g, fr(g, fr(g, fr(g, fr(g, d417 + d416) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t415);
    fpush(g, d418);
    g->esp = sp1 - 0x1f0u;
    t419 = cow_call_regs(g, COW_IMG(0x10311c6cu), t415, g->ecx, g->edx, 1, 0);
    t420 = g->edx;
    eax = t419;
    edx = t420;
    COW_AT(10180d22)
    d421 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639060u)));
    d422 = fr(g, (double)rdf32(COW_IMG(0x10639064u)) * x4);
    wr32(sp1 - 0x1d0u, eax);
    t423 = rd8(esi + 0x19u);
    d424 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    wr32(sp1 - 0x1d8u, t423);
    g->ecx = t423;
    g->edx = edx;
    d425 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d422 + d421) + d424) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t423);
    fpush(g, d425);
    g->esp = sp1 - 0x1f0u;
    t426 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t427 = g->ecx;
    t428 = g->edx;
    eax = t426;
    ecx = t427;
    edx = t428;
    COW_AT(10180d6e)
    d429 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    d430 = fr(g, x4 * (double)rdf32(COW_IMG(0x10639074u)));
    wr32(sp1 - 0x1ccu, eax);
    t431 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t431);
    d432 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x68u, (uint8_t)t431);
    wr32(sp1 - 0x64u, 0u);
    d433 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d430 + d429) + d432) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t431);
    fpush(g, d433);
    g->esp = sp1 - 0x1f0u;
    t434 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t431, g->ecx, g->edx, 1, 0);
    eax = t434;
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
    t435 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t436 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t435);
    t437 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t437);
    wr32(sp1 - 0x1bcu, t436 + 1u);
    if ((int32_t)(t436 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t436 + 1u;
        al_m1d4 = t437;
        goto L_1018096e;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t437;
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
    d566 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d567 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d568 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d566);
    d569 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d566) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d569);
    d570 = fr(g, fr(g, (double)(float)d566 * d568) + (double)rdf32(edi + 0x168u));
    wrf32(al_m1d4 + 4u, (float)d570);
    wrf32(al_m1d4 + 8u, (float)fr(g, (double)(float)d566 * d567));
    wrf32(al_m1d4 + 0xcu, (float)(double)(float)d566);
    d571 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d571 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d571, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d571;
    }
    else
    {
        eax = (al_m1d4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d571, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = al_m1d4;
        edx = al_m1d4;
        x0 = d571;
    COW_AT(10180f52)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180f5a)
    t572 = rd8(esi + 0x1au);
    d573 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    wr32(sp1 - 0x1d8u, t572);
    g->edx = edx;
    d574 = fr(g, fr(g, d573 + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t572);
    fpush(g, d574);
    g->esp = sp1 - 0x1f0u;
    t575 = cow_call_regs(g, COW_IMG(0x10311c6cu), t572, g->ecx, g->edx, 1, 0);
    t576 = g->edx;
    eax = t575;
    edx = t576;
    COW_AT(10180f7d)
    d577 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d0u, eax);
    t578 = rd8(esi + 0x19u);
    d579 = fr(g, d577 + (double)rdf32(edi + 0x394e4u));
    wr32(sp1 - 0x1d8u, t578);
    g->ecx = t578;
    g->edx = edx;
    d580 = fr(g, d579 * (double)(int32_t)t578);
    fpush(g, d580);
    g->esp = sp1 - 0x1f0u;
    t581 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t582 = g->ecx;
    t583 = g->edx;
    eax = t581;
    ecx = t582;
    edx = t583;
    COW_AT(10180fa1)
    d584 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x1ccu, eax);
    t585 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t585);
    d586 = fr(g, d584 + (double)rdf32(edi + 0x394e8u));
    wr32(sp1 - 0x88u, (uint8_t)t585);
    wr32(sp1 - 0x84u, 0u);
    d587 = fr(g, d586 * (double)(int32_t)(uint8_t)t585);
    fpush(g, d587);
    g->esp = sp1 - 0x1f0u;
    t588 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t585, g->ecx, g->edx, 1, 0);
    eax = t588;
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
    t589 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t590 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t589);
    t591 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t591);
    wr32(sp1 - 0x1bcu, t590 + 1u);
    if ((int32_t)(t590 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t590 + 1u;
        al_m1d4 = t591;
        goto L_10180e5b;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t591;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198_f = rdf32(sp1 - 0x198u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017df23u:
    {
        double al_m198_f;
        double al_m1a8_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198_f = rdf32(sp1 - 0x198u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017df36u:
    {
        double al_m198_f;
        double al_m1a8_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        al_m198_f = rdf32(sp1 - 0x198u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017df49u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017df51u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017df5au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1f0u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017df99u:
    {
        double al_m198_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        al_m198_f = rdf32(sp1 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017dfabu:
    {
        double al_m198_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        al_m198_f = rdf32(sp1 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x1c8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1017dfbeu:
    {
        double al_m198_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1f0u);
        in_esi = rd32(sp1 - 0x1ecu);
        al_m198_f = rdf32(sp1 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1f0u;
        g->ecx = arg2;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017dff1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017dffau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e00du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e016u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e01du:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e029u:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e049u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e053u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e061u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e06au:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e06fu:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e077u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e081u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e091u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e09bu:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0a9u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0b2u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0b7u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0bfu:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0c9u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0d9u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0e3u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0f1u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0fau:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0ffu:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e107u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e111u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e121u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e12bu:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e139u:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e143u:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e148u:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e150u:
    {
        uint32_t al_m19c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e15au:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e168u:
    {
        uint32_t al_m19c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m19c = rd32(sp1 - 0x19cu);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e182u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e223u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ecx = sp1 - 0x110u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e348u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e457u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e566u:
    {
        uint32_t al_m194;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
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
        uint32_t al_m19c;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e667u:
    {
        uint32_t al_m194;
        uint32_t al_m19c;
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
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017e675u:
    {
        uint32_t al_m194;
        uint32_t al_m19c;
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
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
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
        uint32_t al_m194;
        uint32_t al_m19c;
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
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
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
        uint32_t al_m19c;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e8ccu:
    {
        uint32_t al_m194;
        uint32_t al_m19c;
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
        al_m19c = rd32(sp1 - 0x19cu);
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
        uint32_t al_m19c;
        uint32_t al_m1b4;
        uint32_t al_m1c4;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1c4 = rd32(sp1 - 0x1c4u);
        al_m1b4 = rd32(sp1 - 0x1b4u);
        al_m19c = rd32(sp1 - 0x19cu);
        al_m194 = rd32(sp1 - 0x194u);
        g->esp = sp1 - 0x1f4u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea48u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea52u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea5eu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea69u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea77u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea86u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea9bu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ea9fu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eaa1u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eaaau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eab4u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eac7u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ead2u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ead5u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017ead8u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eaeeu:
    {
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb06u:
    {
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        g->esp = sp1 - 0x1ecu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb0au:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb0eu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb10u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f4u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb24u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x1ecu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb3cu:
    {
        uint32_t al_m1f0;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        g->esp = sp1 - 0x1ecu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb3eu:
    {
        uint32_t al_m1f0;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb54u:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb5fu:
    {
        double al_m1a8_f;
        double al_m1ac_f;
        double al_m1b0_f;
        uint32_t al_m1f4;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1b0_f = rdf32(sp1 - 0x1b0u);
        al_m1ac_f = rdf32(sp1 - 0x1acu);
        al_m1a8_f = rdf32(sp1 - 0x1a8u);
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
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
    case 0x1017ec4au:
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
    case 0x1017ec5du:
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
    case 0x1017ec61u:
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
    case 0x1017ec63u:
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee03u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017ee66u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f0b0u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f183u:
    {
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f431u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017f868u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1017fd55u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180008u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018006bu:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101802b5u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180388u:
    {
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180636u:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180a6du:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        double al_m1d0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1d0_f = rdf32(sp1 - 0x1d0u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        double al_m1cc_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1cc_f = rdf32(sp1 - 0x1ccu);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        double al_m1c4_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c4_f = rdf32(sp1 - 0x1c4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        double al_m1c0_f;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1c0_f = rdf32(sp1 - 0x1c0u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10180f5au:
    {
        uint32_t al_m1bc;
        uint32_t al_m1d4;
        double al_m1dc_f;
        uint32_t al_m1f4;
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
        al_m1f4 = rd32(sp1 - 0x1f4u);
        al_m1dc_f = rdf32(sp1 - 0x1dcu);
        al_m1d4 = rd32(sp1 - 0x1d4u);
        al_m1bc = rd32(sp1 - 0x1bcu);
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
