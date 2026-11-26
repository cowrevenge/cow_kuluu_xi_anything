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
    double d106;
    double d107;
    double d11;
    double d119;
    double d120;
    double d129;
    double d13;
    double d130;
    double d132;
    double d134;
    double d135;
    double d136;
    double d14;
    double d15;
    double d16;
    double d167;
    double d168;
    double d169;
    double d17;
    double d170;
    double d172;
    double d174;
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
    double d188;
    double d189;
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
    double d2;
    double d20;
    double d200;
    double d201;
    double d202;
    double d203;
    double d204;
    double d205;
    double d206;
    double d207;
    double d208;
    double d21;
    double d210;
    double d211;
    double d212;
    double d215;
    double d216;
    double d218;
    double d219;
    double d223;
    double d224;
    double d226;
    double d227;
    double d23;
    double d232;
    double d233;
    double d234;
    double d235;
    double d237;
    double d239;
    double d24;
    double d241;
    double d242;
    double d243;
    double d244;
    double d245;
    double d246;
    double d247;
    double d248;
    double d249;
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
    double d267;
    double d268;
    double d269;
    double d272;
    double d273;
    double d275;
    double d276;
    double d280;
    double d281;
    double d283;
    double d284;
    double d289;
    double d290;
    double d291;
    double d292;
    double d294;
    double d296;
    double d298;
    double d299;
    double d3;
    double d300;
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
    double d313;
    double d314;
    double d316;
    double d317;
    double d318;
    double d321;
    double d322;
    double d324;
    double d325;
    double d329;
    double d330;
    double d332;
    double d333;
    double d338;
    double d339;
    double d340;
    double d341;
    double d343;
    double d345;
    double d347;
    double d348;
    double d349;
    double d350;
    double d351;
    double d352;
    double d353;
    double d355;
    double d356;
    double d357;
    double d360;
    double d361;
    double d363;
    double d367;
    double d368;
    double d370;
    double d375;
    double d376;
    double d377;
    double d378;
    double d380;
    double d382;
    double d384;
    double d385;
    double d387;
    double d388;
    double d391;
    double d393;
    double d394;
    double d398;
    double d4;
    double d40;
    double d400;
    double d401;
    double d41;
    double d419;
    double d42;
    double d420;
    double d421;
    double d422;
    double d424;
    double d426;
    double d428;
    double d429;
    double d43;
    double d430;
    double d431;
    double d432;
    double d433;
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
    double d46;
    double d460;
    double d462;
    double d463;
    double d464;
    double d467;
    double d468;
    double d47;
    double d470;
    double d471;
    double d475;
    double d476;
    double d478;
    double d479;
    double d48;
    double d484;
    double d485;
    double d486;
    double d487;
    double d489;
    double d49;
    double d491;
    double d493;
    double d494;
    double d495;
    double d496;
    double d497;
    double d498;
    double d499;
    double d5;
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
    double d519;
    double d52;
    double d520;
    double d521;
    double d524;
    double d525;
    double d527;
    double d528;
    double d53;
    double d532;
    double d533;
    double d535;
    double d536;
    double d541;
    double d542;
    double d543;
    double d544;
    double d546;
    double d548;
    double d550;
    double d551;
    double d552;
    double d553;
    double d554;
    double d555;
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
    double d568;
    double d569;
    double d57;
    double d570;
    double d573;
    double d574;
    double d576;
    double d577;
    double d58;
    double d581;
    double d582;
    double d584;
    double d585;
    double d590;
    double d591;
    double d592;
    double d593;
    double d595;
    double d597;
    double d599;
    double d6;
    double d60;
    double d600;
    double d601;
    double d602;
    double d603;
    double d604;
    double d605;
    double d607;
    double d608;
    double d609;
    double d61;
    double d612;
    double d613;
    double d615;
    double d619;
    double d62;
    double d620;
    double d622;
    double d627;
    double d628;
    double d629;
    double d63;
    double d630;
    double d632;
    double d634;
    double d636;
    double d637;
    double d639;
    double d64;
    double d640;
    double d643;
    double d645;
    double d646;
    double d65;
    double d650;
    double d652;
    double d653;
    double d66;
    double d7;
    double d70;
    double d71;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
    double d82;
    double d83;
    double d85;
    double d86;
    double d9;
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
    uint32_t t108;
    uint32_t t109;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t12;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t131;
    uint32_t t133;
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
    uint32_t t171;
    uint32_t t173;
    uint32_t t175;
    uint32_t t19;
    uint32_t t209;
    uint32_t t213;
    uint32_t t214;
    uint32_t t217;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t225;
    uint32_t t228;
    uint32_t t229;
    uint32_t t230;
    uint32_t t231;
    uint32_t t236;
    uint32_t t238;
    uint32_t t240;
    uint32_t t25;
    uint32_t t26;
    uint32_t t266;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t274;
    uint32_t t277;
    uint32_t t278;
    uint32_t t279;
    uint32_t t28;
    uint32_t t282;
    uint32_t t285;
    uint32_t t286;
    uint32_t t287;
    uint32_t t288;
    uint32_t t29;
    uint32_t t293;
    uint32_t t295;
    uint32_t t297;
    uint32_t t30;
    uint32_t t31;
    uint32_t t315;
    uint32_t t319;
    uint32_t t32;
    uint32_t t320;
    uint32_t t323;
    uint32_t t326;
    uint32_t t327;
    uint32_t t328;
    uint32_t t33;
    uint32_t t331;
    uint32_t t334;
    uint32_t t335;
    uint32_t t336;
    uint32_t t337;
    uint32_t t34;
    uint32_t t342;
    uint32_t t344;
    uint32_t t346;
    uint32_t t35;
    uint32_t t354;
    uint32_t t358;
    uint32_t t359;
    uint32_t t36;
    uint32_t t362;
    uint32_t t364;
    uint32_t t365;
    uint32_t t366;
    uint32_t t369;
    uint32_t t37;
    uint32_t t371;
    uint32_t t372;
    uint32_t t373;
    uint32_t t374;
    uint32_t t379;
    uint32_t t38;
    uint32_t t381;
    uint32_t t383;
    uint32_t t386;
    uint32_t t389;
    uint32_t t39;
    uint32_t t390;
    uint32_t t392;
    uint32_t t395;
    uint32_t t396;
    uint32_t t397;
    uint32_t t399;
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
    uint32_t t412;
    uint32_t t413;
    uint32_t t414;
    uint32_t t415;
    uint32_t t416;
    uint32_t t417;
    uint32_t t418;
    uint32_t t423;
    uint32_t t425;
    uint32_t t427;
    uint32_t t45;
    uint32_t t461;
    uint32_t t465;
    uint32_t t466;
    uint32_t t469;
    uint32_t t472;
    uint32_t t473;
    uint32_t t474;
    uint32_t t477;
    uint32_t t480;
    uint32_t t481;
    uint32_t t482;
    uint32_t t483;
    uint32_t t488;
    uint32_t t490;
    uint32_t t492;
    uint32_t t50;
    uint32_t t518;
    uint32_t t522;
    uint32_t t523;
    uint32_t t526;
    uint32_t t529;
    uint32_t t530;
    uint32_t t531;
    uint32_t t534;
    uint32_t t537;
    uint32_t t538;
    uint32_t t539;
    uint32_t t54;
    uint32_t t540;
    uint32_t t545;
    uint32_t t547;
    uint32_t t549;
    uint32_t t55;
    uint32_t t56;
    uint32_t t567;
    uint32_t t571;
    uint32_t t572;
    uint32_t t575;
    uint32_t t578;
    uint32_t t579;
    uint32_t t580;
    uint32_t t583;
    uint32_t t586;
    uint32_t t587;
    uint32_t t588;
    uint32_t t589;
    uint32_t t59;
    uint32_t t594;
    uint32_t t596;
    uint32_t t598;
    uint32_t t606;
    uint32_t t610;
    uint32_t t611;
    uint32_t t614;
    uint32_t t616;
    uint32_t t617;
    uint32_t t618;
    uint32_t t621;
    uint32_t t623;
    uint32_t t624;
    uint32_t t625;
    uint32_t t626;
    uint32_t t631;
    uint32_t t633;
    uint32_t t635;
    uint32_t t638;
    uint32_t t641;
    uint32_t t642;
    uint32_t t644;
    uint32_t t647;
    uint32_t t648;
    uint32_t t649;
    uint32_t t651;
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
    uint32_t t670;
    uint32_t t68;
    uint32_t t69;
    uint32_t t72;
    uint32_t t80;
    uint32_t t81;
    uint32_t t84;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
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
    case 0x1017e049u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e049;
    case 0x1017e053u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e053;
    case 0x1017e061u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e061;
    case 0x1017e06au: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e06a;
    case 0x1017e06fu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e06f;
    case 0x1017e077u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e077;
    case 0x1017e081u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e081;
    case 0x1017e091u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e091;
    case 0x1017e09bu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e09b;
    case 0x1017e0a9u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0a9;
    case 0x1017e0b2u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0b2;
    case 0x1017e0b7u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0b7;
    case 0x1017e0bfu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0bf;
    case 0x1017e0c9u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0c9;
    case 0x1017e0d9u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0d9;
    case 0x1017e0e3u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0e3;
    case 0x1017e0f1u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0f1;
    case 0x1017e0fau: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0fa;
    case 0x1017e0ffu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e0ff;
    case 0x1017e107u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e107;
    case 0x1017e111u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e111;
    case 0x1017e121u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e121;
    case 0x1017e12bu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e12b;
    case 0x1017e139u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e139;
    case 0x1017e143u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e143;
    case 0x1017e148u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e148;
    case 0x1017e150u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1017e150;
    case 0x1017e15au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e15a;
    case 0x1017e168u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1017e168;
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
    case 0x1017e653u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e653;
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
    case 0x1017e8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e8ba;
    case 0x1017e8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e8cc;
    case 0x1017e8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e8e1;
    case 0x1017e981u: ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1f4 = rd32(sp1 - 0x1f4u); al_m1c4 = rd32(sp1 - 0x1c4u); al_m1b4 = rd32(sp1 - 0x1b4u); al_m194 = rd32(sp1 - 0x194u); goto E_1017e981;
    case 0x1017e992u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1017e992;
    case 0x1017ea31u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1017ea31;
    case 0x1017ea48u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea48;
    case 0x1017ea52u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ea52;
    case 0x1017ea5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ea5e;
    case 0x1017ea69u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017ea69;
    case 0x1017ea77u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea77;
    case 0x1017ea86u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017ea86;
    case 0x1017ea9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ea9b;
    case 0x1017ea9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ea9f;
    case 0x1017eaa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eaa1;
    case 0x1017eaaau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017eaaa;
    case 0x1017eab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eab4;
    case 0x1017eac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eac7;
    case 0x1017ead2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ead2;
    case 0x1017ead5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ead5;
    case 0x1017ead8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017ead8;
    case 0x1017eaeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eaee;
    case 0x1017eb06u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb06;
    case 0x1017eb0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017eb0a;
    case 0x1017eb0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017eb0e;
    case 0x1017eb10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb10;
    case 0x1017eb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017eb24;
    case 0x1017eb3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb3c;
    case 0x1017eb3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1f4 = rd32(sp1 - 0x1f4u); goto E_1017eb3e;
    case 0x1017eb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb54;
    case 0x1017eb5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m1b0_f = rdf32(sp1 - 0x1b0u); al_m1ac_f = rdf32(sp1 - 0x1acu); al_m1a8_f = rdf32(sp1 - 0x1a8u); goto E_1017eb5f;
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
    if (arg3 == 0u) goto L_1017df5a;
    COW_AT(1017de3f)
    wr32(sp1 - 0x118u, self + 0x38e1cu);
    wr32(sp1 - 0x1f4u, self + 0x38e1cu);
    wr32(sp1 - 0x1f8u, arg2 + 0x40u);
    wr32(sp1 - 0x1fcu, sp1 - 0x110u);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017de61u);
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
                t29 = rd32(eax + 8u);
                if (t29 != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e06a)
                    t30 = rd8(eax);
                    if ((uint8_t)t30 != 0x63u)
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
                t31 = rd32(eax + 8u);
                if (t31 != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e0b2)
                    t32 = rd8(eax);
                    if ((uint8_t)t32 != 0x63u)
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
                t33 = rd32(eax + 8u);
                if (t33 != 0u)
                {
                    ecx = eax + 8u;
    COW_AT(1017e0fa)
                    t34 = rd8(eax);
                    if ((uint8_t)t34 != 0x63u)
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
                    t35 = rd8(eax);
                    if ((uint8_t)t35 != 0x63u)
                    {
    COW_AT(1017e148)
                        wr32(esi + 0x39468u, ecx);
                    }
                }
            }
        }
    }
    COW_AT(1017e15a)
    t36 = rd32(rd32(sp1 - 0x19cu) + 0x1cu);
    if (t36 > 3u)
    {
        al_m194 = rd32(sp1 - 0x194u);
    }
    else
    {
    COW_AT(1017e168)
        t37 = rd32(rd32(sp1 - 0x19cu) + 0x30u);
        wr32(sp1 - 0x1f4u, t37);
        t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1f8u, t38);
        g->edx = t37;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017e182u);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x130u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 2, t38, t37);
        t39 = g->edx;
        edx = t39;
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
            d40 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(sp1 - 0x110u, (float)(double)(float)d40);
            d41 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(sp1 - 0x10cu, (float)(double)(float)d41);
            d42 = fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u));
            d43 = fr(g, fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu)));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d44 = fr(g, fr(g, d43 + d42) + (double)rdf32(arg2 + 0xb8u));
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wrf32(sp1 - 0x108u, (float)(double)(float)d44);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e2c4u);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e2c4)
            wr32(sp1 - 0x194u, 1u);
            wr32(sp1 - 0x1b4u, COW_IMG(0x1063904cu));
            t45 = rd32(sp1 - 0x1c8u);
            d46 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(COW_IMG(0x10639048u), (float)d46);
            d47 = fr(g, (double)rdf32(rd32(t45 + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(COW_IMG(0x10639058u), (float)d47);
            d48 = fr(g, (double)rdf32(rd32(t45 + 0x3945cu) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wrf32(COW_IMG(0x10639068u), (float)d48);
            wr32(sp1 - 0x1c4u, sp1 - 0x100u);
            d49 = (double)rdf32(rd32(t45 + 0x3945cu) + 0x4cu);
            t50 = rd32(t45 + 0x3945cu);
            wrf32(COW_IMG(0x10639078u), (float)fr(g, d49 * d49));
            ecx = sp1 - 0x100u;
            edx = t50;
            esi = t45;
            al_m194 = 1u;
            al_m1c4 = sp1 - 0x100u;
            al_m1b4 = COW_IMG(0x1063904cu);
        }
    COW_AT(1017e33a)
        if (rd32(esi + 0x39460u) != 0u)
        {
            eax = rd32(esi + 0x39460u);
    COW_AT(1017e348)
            d51 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(ecx, (float)d51);
            d52 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(ecx + 4u, (float)d52);
            d53 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
            wrf32(ecx + 8u, (float)d53);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e3dcu);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e3dc)
            t54 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t54);
            t55 = rd32(sp1 - 0x1b4u);
            t56 = rd32(sp1 - 0x1c8u);
            d57 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t55, (float)d57);
            d58 = fr(g, (double)rdf32(rd32(t56 + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t55 + 0x10u, (float)d58);
            t59 = rd32(sp1 - 0x1c4u) + 0x10u;
            d60 = fr(g, (double)rdf32(rd32(t56 + 0x39460u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wr32(sp1 - 0x1c4u, t59);
            wr32(sp1 - 0x1b4u, t55 + 4u);
            wrf32(t55 + 0x20u, (float)d60);
            d61 = (double)rdf32(rd32(t56 + 0x39460u) + 0x4cu);
            wrf32(t55 + 0x30u, (float)fr(g, d61 * d61));
            ecx = t59;
            edx = t59;
            esi = t56;
            al_m194 = rd32(sp1 - 0x194u);
            al_m1c4 = rd32(sp1 - 0x1c4u);
            al_m1b4 = rd32(sp1 - 0x1b4u);
        }
    COW_AT(1017e449)
        if (rd32(esi + 0x39464u) != 0u)
        {
            eax = rd32(esi + 0x39464u);
    COW_AT(1017e457)
            d62 = fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u));
            d63 = fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d64 = fr(g, fr(g, fr(g, d63 + d62) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(eax + 0x34u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(ecx, (float)d64);
            d65 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(ecx + 4u, (float)d65);
            d66 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u)) + fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
            wrf32(ecx + 8u, (float)d66);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e4ebu);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e4eb)
            t67 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t67);
            t68 = rd32(sp1 - 0x1b4u);
            t69 = rd32(sp1 - 0x1c8u);
            d70 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t68, (float)d70);
            d71 = fr(g, (double)rdf32(rd32(t69 + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t68 + 0x10u, (float)d71);
            t72 = rd32(sp1 - 0x1c4u) + 0x10u;
            d73 = fr(g, (double)rdf32(rd32(t69 + 0x39464u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wr32(sp1 - 0x1c4u, t72);
            wr32(sp1 - 0x1b4u, t68 + 4u);
            wrf32(t68 + 0x20u, (float)d73);
            d74 = (double)rdf32(rd32(t69 + 0x39464u) + 0x4cu);
            wrf32(t68 + 0x30u, (float)fr(g, d74 * d74));
            ecx = t72;
            edx = t72;
            esi = t69;
            al_m194 = rd32(sp1 - 0x194u);
            al_m1b4 = rd32(sp1 - 0x1b4u);
        }
    COW_AT(1017e558)
        if (rd32(esi + 0x39468u) != 0u)
        {
            eax = rd32(esi + 0x39468u);
    COW_AT(1017e566)
            d75 = fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(eax + 0x38u));
            d76 = fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(eax + 0x3cu));
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            d77 = fr(g, fr(g, fr(g, d76 + d75) + fr(g, (double)rdf32(eax + 0x34u) * (double)rdf32(arg2 + 0x80u))) + (double)rdf32(arg2 + 0xb0u));
            wrf32(ecx, (float)d77);
            d78 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb4u));
            wrf32(ecx + 4u, (float)d78);
            d79 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(eax + 0x3cu)) + fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(eax + 0x34u))) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(eax + 0x38u))) + (double)rdf32(arg2 + 0xb8u));
            wrf32(ecx + 8u, (float)d79);
            esi = eax;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e5fau);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e5fa)
            t80 = rd32(sp1 - 0x1b4u);
            t81 = rd32(sp1 - 0x1c8u);
            d82 = fr(g, (double)rdf32(rd32(rd32(sp1 - 0x1c8u) + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x18cu));
            wrf32(t80, (float)d82);
            d83 = fr(g, (double)rdf32(rd32(t81 + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x188u));
            wrf32(t80 + 0x10u, (float)d83);
            t84 = rd32(t81 + 0x39468u);
            d85 = fr(g, (double)rdf32(rd32(t81 + 0x39468u) + 0x60u) * (double)rdf32(sp1 - 0x184u));
            wrf32(t80 + 0x20u, (float)d85);
            d86 = (double)rdf32(rd32(t81 + 0x39468u) + 0x4cu);
            wrf32(t80 + 0x30u, (float)fr(g, d86 * d86));
            t87 = rd32(sp1 - 0x194u) + 1u;
            wr32(sp1 - 0x194u, t87);
            edx = t84;
            esi = t81;
            al_m194 = t87;
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
            t109 = rd32(esi + 0x391c0u);
            wr32(sp1 - 0x1b0u, t109);
            t110 = rd32(esi + 0x391c4u);
            wr32(sp1 - 0x1acu, t110);
            t111 = rd32(esi + 0x391c8u);
            wr32(sp1 - 0x1a8u, t111);
            wr32(esi + 0x39540u, t109);
            t112 = rd32(sp1 - 0x1a8u);
            wr32(esi + 0x39544u, t110);
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            wr32(esi + 0x39548u, t112);
            t113 = esi;
            esi = t113 + 0x39180u;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e802u);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, rd32(sp1 - 0x1f4u));
    COW_AT(1017e802)
            t114 = rd32(sp1 - 0x18cu);
            t115 = rd32(sp1 - 0x188u);
            t116 = rd32(sp1 - 0x184u);
            t117 = rd32(sp1 - 0x1c8u);
            wr32(t117 + 0x394d0u, t114);
            wr32(t117 + 0x394d4u, t115);
            wr32(t117 + 0x394d8u, t116);
            wr32(t117 + 0x394dcu, 0u);
            wr32(sp1 - 0x1f4u, t117 + 0x394e0u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e840u);
            cow_thiscall(g, COW_IMG(0x10188fa0u), rd32(COW_IMG(0x1065cb04u)), 1, t117 + 0x394e0u);
            esi = t117;
    COW_AT(1017e840)
            t118 = rd32(esi + 0x39258u);
            d119 = fr(g, (double)rdf32(esi + 0x39258u) - (double)rdf32(esi + 0x3925cu));
            wr32(esi + 0x39508u, t118);
            d120 = fr(g, (double)rdf32(esi + 0x3954cu) / d119);
            wrf32(esi + 0x39500u, (float)d120);
            t121 = rd32(esi + 0x39254u);
            wr32(sp1 - 0x1f4u, t121);
            wr32(sp1 - 0x1f8u, 0x22u);
            t122 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t122);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e87fu);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t122, 0x22u, t121);
    COW_AT(1017e87f)
            t123 = rd32(esi + 0x3925cu);
            wr32(sp1 - 0x1f4u, t123);
            wr32(sp1 - 0x1f8u, 0x24u);
            t124 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t124);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e899u);
            cow_thiscall(g, rd32(rd32(t124) + 0xc8u), rd32(t124), 3, t124, 0x24u, t123);
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
            t88 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t88);
            g->eax = t88;
            g->edx = rd32(edi);
            t89 = rd32(edi);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e6b6u);
            t90 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t88, 0x22u, t89);
            t91 = g->edx;
            eax = t90;
            edx = t91;
    COW_AT(1017e6b6)
            wr32(sp1 - 0x1f4u, 0u);
            wr32(sp1 - 0x1f8u, esi + 0x39260u);
            g->edx = edx;
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e6cau);
            cow_thiscall(g, COW_IMG(0x10188ca0u), rd32(esi + 0x39138u), 2, esi + 0x39260u, 0u);
            t92 = g->edx;
            edx = t92;
            edi = esi + 0x39260u;
    COW_AT(1017e6ca)
            t93 = edi;
            esi = t93;
            edi = sp1 - 0x190u;
            ecx = 0x1au;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp1 - 0x1f4u, sp1 - 0x190u);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e6e7u);
            cow_thiscall(g, COW_IMG(0x1000be50u), rd32(COW_IMG(0x1045666cu)), 1, sp1 - 0x190u);
    COW_AT(1017e6e7)
            t94 = rd32(rd32(sp1 - 0x1c8u) + 0x392a0u);
            wr32(sp1 - 0x1b0u, t94);
            t95 = rd32(rd32(sp1 - 0x1c8u) + 0x392a4u);
            wr32(sp1 - 0x1acu, t95);
            t96 = rd32(rd32(sp1 - 0x1c8u) + 0x392a8u);
            wr32(sp1 - 0x1a8u, t96);
            t97 = rd32(sp1 - 0x1c8u);
            wr32(t97 + 0x394dcu, 0u);
            wr32(t97 + 0x39540u, t94);
            t98 = rd32(sp1 - 0x1a8u);
            wr32(t97 + 0x39544u, t95);
            t99 = rd32(sp1 - 0x18cu);
            wr32(t97 + 0x394d0u, t99);
            wr32(t97 + 0x39548u, t98);
            t100 = rd32(sp1 - 0x188u);
            t101 = rd32(sp1 - 0x184u);
            wr32(t97 + 0x394d4u, t100);
            wr32(sp1 - 0x1f4u, t97 + 0x394e0u);
            t102 = rd32(t97 + 0x39138u);
            wr32(t97 + 0x394d8u, t101);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e75du);
            cow_thiscall(g, COW_IMG(0x10188fa0u), t102, 1, rd32(sp1 - 0x1f4u));
            esi = t97;
    COW_AT(1017e75d)
            t103 = rd32(rd32(sp1 - 0x118u));
            t104 = rd32(rd32(sp1 - 0x114u));
            t105 = rd32(sp1 - 0x118u);
            d106 = fr(g, (double)rdf32(rd32(sp1 - 0x118u)) - (double)rdf32(rd32(sp1 - 0x114u)));
            wr32(esi + 0x39508u, t103);
            wr32(sp1 - 0x1f4u, t104);
            d107 = fr(g, (double)rdf32(esi + 0x3954cu) / d106);
            wr32(sp1 - 0x1f8u, 0x24u);
            wrf32(esi + 0x39500u, (float)d107);
            t108 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t108);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017e799u);
            cow_thiscall(g, rd32(rd32(t108) + 0xc8u), t104, 3, t108, rd32(sp1 - 0x1f8u), rd32(sp1 - 0x1f4u));
            edi = t105;
    COW_AT(1017e799)
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            edx = rd32(edi);
        }
    COW_AT(1017e8a7)
        wr32(sp1 - 0x1f4u, edx);
        wr32(sp1 - 0x1f8u, 0x25u);
        wr32(sp1 - 0x1fcu, eax);
        g->edx = edx;
        t125 = rd32(eax);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017e8b3u);
        cow_thiscall(g, rd32(t125 + 0xc8u), t125, 3, eax, 0x25u, edx);
        t126 = g->ecx;
        t127 = g->edx;
        ecx = t126;
        edx = t127;
    COW_AT(1017e8b3)
        esi = rd32(sp1 - 0x1c8u);
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
        COW_RET(0x1017e992u);
        cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0xd0u, arg2 + 0x40u, al_m1f4);
        t131 = g->edx;
        edx = t131;
    COW_AT(1017e992)
        d132 = (double)rdf32(arg2 + 0xa0u);
        esi = sp1 - 0xd0u;
        edi = sp1 - 0x190u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t133 = rd32(sp1 - 0x1c8u);
        d134 = fr(g, fr(g, fr(g, d132 * (double)rdf32(t133 + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(t133 + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(t133 + 0x39540u)));
        wrf32(sp1 - 0x1b0u, (float)(double)(float)-d134);
        d135 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(t133 + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(t133 + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(t133 + 0x39540u)));
        wrf32(sp1 - 0x1acu, (float)(double)(float)-d135);
        edi = t133;
        al_m1b0_f = (double)(float)-d134;
        al_m1ac_f = (double)(float)-d135;
        x1 = fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(t133 + 0x39540u));
        x0 = fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(t133 + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(t133 + 0x39544u)));
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
        t128 = g->edx;
        edx = t128;
    COW_AT(1017e8e1)
        esi = sp1 - 0xd0u;
        edi = sp1 - 0x190u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d129 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa0u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x90u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x80u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u)));
        wrf32(sp1 - 0x1b0u, (float)(double)(float)-d129);
        d130 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xa4u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x94u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u))) + fr(g, (double)rdf32(arg2 + 0x84u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u)));
        wrf32(sp1 - 0x1acu, (float)(double)(float)-d130);
        edi = rd32(sp1 - 0x1c8u);
        al_m1b0_f = (double)(float)-d129;
        al_m1ac_f = (double)(float)-d130;
        x1 = fr(g, (double)rdf32(arg2 + 0x88u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39540u));
        x0 = fr(g, fr(g, (double)rdf32(arg2 + 0xa8u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39548u)) + fr(g, (double)rdf32(arg2 + 0x98u) * (double)rdf32(rd32(sp1 - 0x1c8u) + 0x39544u)));
    }
    COW_AT(1017ea31)
    d136 = (double)(float)-fr(g, x0 + x1);
    wrf32(sp1 - 0x1a8u, (float)d136);
    if (rd32(edi + 0x39118u) == rd8(arg2 + 0xeu))
    {
        al_m1a8_f = d136;
    }
    else
    {
        eax = rd8(arg2 + 0xeu);
        al_m1a8_f = d136;
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
        t137 = g->edx;
        edx = t137;
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017ea77)
    t138 = rd32(edi + 0x390fcu);
    if (t138 != (uint32_t)(int16_t)rd16(arg2 + 0xd4u))
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
        COW_RET(0x1017eaaau);
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, al_m1f4);
        t139 = g->edx;
        edx = t139;
    COW_AT(1017eaaa)
        wr32(edi + 0x39120u, 0u);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017eab4)
    t140 = rd32(edi + 0x39110u);
    if (t140 != (uint32_t)(int16_t)rd16(arg2 + 0xd6u))
    {
        eax = (uint32_t)(int16_t)rd16(arg2 + 0xd6u);
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
        t141 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t141);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eaeeu);
        cow_thiscall(g, rd32(rd32(t141) + 0xc8u), rd32(t141), 3, t141, 0xfu, 0u);
    COW_AT(1017eaee)
        wr32(sp1 - 0x1f4u, 3u);
        wr32(sp1 - 0x1f8u, 0xdu);
        wr32(sp1 - 0x1fcu, 0u);
        t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x200u, t142);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eb06u);
        cow_thiscall(g, rd32(rd32(t142) + 0xfcu), rd32(t142), 4, t142, 0u, 0xdu, 3u);
    COW_AT(1017eb06)
        wr32(sp1 - 0x1f4u, 3u);
        al_m1f4 = 3u;
L_1017eb3e: ;
    COW_AT(1017eb3e)
        wr32(sp1 - 0x1f8u, 0xeu);
        wr32(sp1 - 0x1fcu, 0u);
        t145 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x200u, t145);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t146 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017eb54u);
        cow_thiscall(g, rd32(rd32(t145) + 0xfcu), rd32(t145), 4, t145, 0u, 0xeu, al_m1f4);
        t147 = g->edx;
        edx = t147;
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
        COW_RET(0x1017eb67u);
        cow_fastcall(g, COW_IMG(0x1017a3f0u), edi, edx, 1, arg2);
    COW_AT(1017eb67)
        ecx = rd32(sp1 - 0x19cu);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
    }
    COW_AT(1017eb6b)
    t148 = rd32(ecx + 0x60u);
    wr32(sp1 - 0x198u, t148);
    wr32(sp1 - 0x118u, 0u);
    if ((int32_t)rd32(ecx + 0x44u) <= 0)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m1ec = rd32(sp1 - 0x1ecu);
        al_m1f0 = rd32(sp1 - 0x1f0u);
        goto L_10181118;
    }
    eax = t148;
    al_m198 = t148;
    COW_AT(1017eb88)
    al_m118 = 0u;
L_1017eb8e: ;
    COW_AT(1017eb8e)
    t149 = rd32(eax + 4u);
    wr32(sp1 - 0x1c8u, t149);
    wr32(sp1 - 0x114u, 0u);
    if ((int32_t)rd32(eax) <= 0) goto L_101810ef;
    edx = t149;
    al_m1c8 = t149;
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
        t150 = rd16(esi + 0x20u);
        if ((uint16_t)t150 == 0u)
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
            t155 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t155);
            g->eax = t155;
            t156 = rd32(t155);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017ec19u);
            t157 = cow_thiscall(g, rd32(t156 + 0xc8u), t156, 3, t155, 0xeu, 1u);
            t158 = g->ecx;
            eax = t157;
            ecx = t158;
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
            t151 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp1 - 0x1fcu, t151);
            g->eax = t151;
            t152 = rd32(t151);
            g->esp = sp1 - 0x1f0u;
            COW_RET(0x1017ebf0u);
            t153 = cow_thiscall(g, rd32(t152 + 0xc8u), t152, 3, t151, 0xeu, 0u);
            t154 = g->ecx;
            eax = t153;
            ecx = t154;
    COW_AT(1017ebf0)
            edx = rd32(COW_IMG(0x10631f18u));
        }
    COW_AT(1017ec1f)
        wr32(sp1 - 0x1f4u, edx);
        g->edx = edx;
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ec25u);
        cow_cdecl(g, COW_IMG(0x10177400u), 1, edx);
        t159 = g->edx;
        edx = t159;
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
        t160 = g->edx;
        edx = t160;
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
        t162 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t162);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ecafu);
        cow_thiscall(g, rd32(rd32(t162) + 0xf4u), rd32(t162), 3, t162, 0u, 0u);
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
        t161 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp1 - 0x1fcu, t161);
        g->esp = sp1 - 0x1f0u;
        COW_RET(0x1017ec98u);
        cow_thiscall(g, rd32(rd32(t161) + 0xf4u), t161, 3, t161, 0u, eax);
    COW_AT(1017ec98)
    }
    COW_AT(1017ecaf)
    t163 = rd32(rd32(sp1 - 0x19cu) + 0x1cu);
    if (t163 != 2u) goto L_1017feb3;
L_1017ecbd: ;
    COW_AT(1017ecbd)
    wr32(sp1 - 0x1f4u, 0u);
    wr32(sp1 - 0x1f8u, sp1 - 0x1d4u);
    wr32(sp1 - 0x1fcu, 0u);
    wr32(sp1 - 0x200u, 0u);
    t164 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x204u, t164);
    g->eax = t164;
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017ecd1u);
    t165 = cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x2cu), rd32(rd32(esi + 0x2cu)), 5, t164, 0u, 0u, sp1 - 0x1d4u, 0u);
    eax = t165;
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
    t166 = rd32(COW_IMG(0x10181120u) + ecx * 4u);
    switch (t166 - RD)
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
    t143 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t143);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017eb24u);
    cow_thiscall(g, rd32(rd32(t143) + 0xc8u), rd32(t143), 3, t143, 0xfu, al_m1f4);
    COW_AT(1017eb24)
    wr32(sp1 - 0x1f4u, 1u);
    wr32(sp1 - 0x1f8u, 0xdu);
    wr32(sp1 - 0x1fcu, 0u);
    t144 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t144);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017eb3cu);
    cow_thiscall(g, rd32(rd32(t144) + 0xfcu), rd32(t144), 4, t144, 0u, 0xdu, 1u);
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
    d338 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d339 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d340 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d338);
    d341 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d338) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d341);
    t342 = rd32(sp1 - 0x1d4u);
    d343 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d340) + (double)rdf32(edi + 0x168u));
    wrf32(t342 + 4u, (float)d343);
    t344 = rd32(sp1 - 0x1d4u);
    d345 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d339);
    wrf32(t344 + 8u, (float)d345);
    t346 = rd32(sp1 - 0x1d4u);
    d347 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t346 + 0xcu, (float)d347);
    d348 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d348 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t342 & 0xffff0000u) | (uint16_t)cow_fsw(g, d348, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t344;
        edx = t346;
        x0 = d348;
    }
    else
    {
        eax = (t342 & 0xffff0000u) | (uint16_t)cow_fsw(g, d348, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t344;
        edx = t346;
        x0 = d348;
    COW_AT(1017edfb)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017ee03)
    d349 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d350 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d351 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d352 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d349 * d349) + fr(g, d350 * d350)) + fr(g, d351 * d351)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d352);
    d353 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d351 * (double)rdf32(esi + 0x18u)) + fr(g, d349 * (double)rdf32(esi + 0x20u))) + fr(g, d350 * (double)rdf32(esi + 0x1cu))) * (double)(float)d352) * (double)(float)d352) * (double)(float)d352);
    if (!(d353 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d353, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d352;
        x1 = d353;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d353, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d352;
        x1 = d353;
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
    t354 = rd8(esi + 0x26u);
    d355 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d356 = fr(g, (double)rdf32(COW_IMG(0x10639048u)) * x1);
    wr32(sp1 - 0x1d8u, t354);
    g->edx = edx;
    d357 = fr(g, fr(g, fr(g, d356 + d355) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t354);
    fpush(g, d357);
    g->esp = sp1 - 0x1f0u;
    t358 = cow_call_regs(g, COW_IMG(0x10311c6cu), t354, g->ecx, g->edx, 1, 0);
    t359 = g->edx;
    eax = t358;
    edx = t359;
    COW_AT(1017eeb4)
    d360 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    d361 = fr(g, (double)rdf32(COW_IMG(0x10639058u)) * x1);
    wr32(sp1 - 0x1d0u, eax);
    t362 = rd8(esi + 0x25u);
    wr32(sp1 - 0x1d8u, t362);
    g->ecx = t362;
    g->edx = edx;
    d363 = fr(g, fr(g, fr(g, d361 + d360) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t362);
    fpush(g, d363);
    g->esp = sp1 - 0x1f0u;
    t364 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t365 = g->ecx;
    t366 = g->edx;
    eax = t364;
    ecx = t365;
    edx = t366;
    COW_AT(1017eee2)
    d367 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    d368 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x1ccu, eax);
    t369 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t369);
    wr32(sp1 - 0x60u, (uint8_t)t369);
    wr32(sp1 - 0x5cu, 0u);
    d370 = fr(g, fr(g, fr(g, d368 + d367) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t369);
    fpush(g, d370);
    g->esp = sp1 - 0x1f0u;
    t371 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t369, g->ecx, g->edx, 1, 0);
    eax = t371;
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
    t372 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t373 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t372);
    t374 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t374);
    wr32(sp1 - 0x1bcu, t373 + 1u);
    if ((int32_t)(t373 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t373 + 1u;
        al_m1d4 = t374;
        goto L_1017ed04;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t374;
    COW_AT(1017ef99)
L_1017fe49: ;
    COW_AT(1017fe49)
    t406 = rd32(rd32(sp1 - 0x1c8u) + 0x2cu);
    wr32(sp1 - 0x1f4u, t406);
    t407 = rd32(sp1 - 0x1c8u);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fe56u);
    cow_thiscall(g, rd32(rd32(t406) + 0x30u), ecx, 1, t406);
    esi = t407;
    COW_AT(1017fe56)
    wr32(sp1 - 0x1f4u, 0u);
    t408 = rd32(esi + 0xb8u);
    wr32(sp1 - 0x1f8u, t408);
    t409 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t409);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fe70u);
    cow_thiscall(g, rd32(rd32(t409) + 0x154u), rd32(t409), 3, t409, t408, 0u);
    COW_AT(1017fe70)
    t410 = rd32(rd32(sp1 - 0x19cu) + 0x34u);
    wr32(sp1 - 0x1f4u, t410);
    t411 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x1f8u, t411);
    wr32(sp1 - 0x1fcu, 0u);
    t412 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t412);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fe8fu);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t412, 0u, t411, t410);
    COW_AT(1017fe8f)
    t413 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1f4u, t413);
    wr32(sp1 - 0x1f8u, 0u);
    t414 = rd32(esi + 8u);
    wr32(sp1 - 0x1fcu, t414);
    wr32(sp1 - 0x200u, 0u);
    t415 = rd32(rd32(sp1 - 0x19cu) + 0x3cu);
    wr32(sp1 - 0x204u, t415);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017feaeu);
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t415, 0u, t414, 0u, t413);
    COW_AT(1017feae)
L_101810b3: ;
    COW_AT(101810b3)
    t668 = rd32(edi + 0x3942cu) + rd32(esi + 0x18u);
    t669 = rd32(sp1 - 0x1c8u);
    wr32(edi + 0x3942cu, t668);
    esi = t669;
L_101810c8: ;
    COW_AT(101810c8)
    t670 = rd32(sp1 - 0x114u) + 1u;
    wr32(sp1 - 0x114u, t670);
    wr32(sp1 - 0x1c8u, esi + 0xc0u);
    if ((int32_t)t670 < (int32_t)rd32(rd32(sp1 - 0x198u)))
    {
        edx = rd32(sp1 - 0x198u);
        al_m1b0_f = (double)rdf32(sp1 - 0x1b0u);
        al_m1ac_f = (double)rdf32(sp1 - 0x1acu);
        al_m1a8_f = (double)rdf32(sp1 - 0x1a8u);
        al_m198 = rd32(sp1 - 0x198u);
        al_m118 = rd32(sp1 - 0x118u);
        al_m1c8 = esi + 0xc0u;
        esi = esi + 0xc0u;
        al_m114 = t670;
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
    d289 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d290 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d291 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d289);
    d292 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d289) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d292);
    t293 = rd32(sp1 - 0x1d4u);
    d294 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d291) + (double)rdf32(edi + 0x168u));
    wrf32(t293 + 4u, (float)d294);
    t295 = rd32(sp1 - 0x1d4u);
    d296 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d290);
    wrf32(t295 + 8u, (float)d296);
    t297 = rd32(sp1 - 0x1d4u);
    d298 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t297 + 0xcu, (float)d298);
    d299 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d299 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t293 & 0xffff0000u) | (uint16_t)cow_fsw(g, d299, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t295;
        edx = t297;
        x0 = d299;
    }
    else
    {
        eax = (t293 & 0xffff0000u) | (uint16_t)cow_fsw(g, d299, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t295;
        edx = t297;
        x0 = d299;
    COW_AT(1017f0a8)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f0b0)
    d300 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d301 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d302 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d303 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d300 * d300) + fr(g, d301 * d301)) + fr(g, d302 * d302)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d303);
    d304 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d304);
    d305 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d306 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d306 * d306);
    g->st[g->top & 7u] = fr(g, (double)(float)d304 * (double)(float)d304);
    d307 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d305 * d305) + fr(g, d306 * d306)) + fr(g, (double)(float)d304 * (double)(float)d304))));
    wrf32(sp1 - 0x1d8u, (float)d307);
    d308 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d307);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d308);
    d309 = fr(g, d300 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d309);
    d310 = fr(g, fr(g, fr(g, (double)(float)d304 * (double)rdf32(esi + 0x18u)) + fr(g, d301 * (double)rdf32(esi + 0x1cu))) + (double)(float)d309);
    d311 = fr(g, d301 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d310);
    d312 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d302 * (double)rdf32(esi + 0x18u)) + d311) + (double)(float)d309) * (double)(float)d303) * (double)(float)d303) * (double)(float)d303);
    if (!(d312 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d312, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d303;
        al_m1c0_f = (double)(float)d308;
        al_m1d0_f = (double)(float)d310;
        x1 = d312;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d312, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d303;
        al_m1c0_f = (double)(float)d308;
        al_m1d0_f = (double)(float)d310;
        x1 = d312;
    COW_AT(1017f183)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f18b)
    d313 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d313);
    d314 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d314 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d314, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d314, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t315 = rd8(esi + 0x26u);
    d316 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d317 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1063904cu)) * x2) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u))));
    wr32(sp1 - 0x1d8u, t315);
    g->edx = edx;
    d318 = fr(g, fr(g, fr(g, d317 + d316) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t315);
    fpush(g, d318);
    g->esp = sp1 - 0x1f0u;
    t319 = cow_call_regs(g, COW_IMG(0x10311c6cu), t315, g->ecx, g->edx, 1, 0);
    t320 = g->edx;
    eax = t319;
    edx = t320;
    COW_AT(1017f221)
    d321 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    d322 = fr(g, (double)rdf32(COW_IMG(0x1063905cu)) * x2);
    wr32(sp1 - 0x1d0u, eax);
    t323 = rd8(esi + 0x25u);
    d324 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d8u, t323);
    g->ecx = t323;
    g->edx = edx;
    d325 = fr(g, fr(g, fr(g, fr(g, d322 + d321) + d324) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t323);
    fpush(g, d325);
    g->esp = sp1 - 0x1f0u;
    t326 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t327 = g->ecx;
    t328 = g->edx;
    eax = t326;
    ecx = t327;
    edx = t328;
    COW_AT(1017f259)
    d329 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    d330 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x1ccu, eax);
    t331 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t331);
    d332 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x58u, (uint8_t)t331);
    wr32(sp1 - 0x54u, 0u);
    d333 = fr(g, fr(g, fr(g, fr(g, d330 + d329) + d332) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t331);
    fpush(g, d333);
    g->esp = sp1 - 0x1f0u;
    t334 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t331, g->ecx, g->edx, 1, 0);
    eax = t334;
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
    t335 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t336 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t335);
    t337 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t337);
    wr32(sp1 - 0x1bcu, t336 + 1u);
    if ((int32_t)(t336 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t336 + 1u;
        al_m1d4 = t337;
        goto L_1017efb1;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t337;
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
    d232 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d233 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d234 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d232);
    d235 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d232) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d235);
    t236 = rd32(sp1 - 0x1d4u);
    d237 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d234) + (double)rdf32(edi + 0x168u));
    wrf32(t236 + 4u, (float)d237);
    t238 = rd32(sp1 - 0x1d4u);
    d239 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d233);
    wrf32(t238 + 8u, (float)d239);
    t240 = rd32(sp1 - 0x1d4u);
    d241 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t240 + 0xcu, (float)d241);
    d242 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d242 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t236 & 0xffff0000u) | (uint16_t)cow_fsw(g, d242, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t238;
        edx = t240;
        x0 = d242;
    }
    else
    {
        eax = (t236 & 0xffff0000u) | (uint16_t)cow_fsw(g, d242, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t238;
        edx = t240;
        x0 = d242;
    COW_AT(1017f429)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f431)
    d243 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d244 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d245 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d246 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d243 * d243) + fr(g, d244 * d244)) + fr(g, d245 * d245)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d246);
    d247 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d247);
    d248 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d249 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d249 * d249);
    g->st[g->top & 7u] = fr(g, (double)(float)d247 * (double)(float)d247);
    d250 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d248 * d248) + fr(g, d249 * d249)) + fr(g, (double)(float)d247 * (double)(float)d247))));
    wrf32(sp1 - 0x1d8u, (float)d250);
    d251 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d250);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d251);
    d252 = fr(g, d243 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d252);
    d253 = fr(g, fr(g, fr(g, (double)(float)d247 * (double)rdf32(esi + 0x18u)) + fr(g, d244 * (double)rdf32(esi + 0x1cu))) + (double)(float)d252);
    d254 = fr(g, d244 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d253);
    d255 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d256 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d256 * d256);
    d257 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d257 * d257);
    d258 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d255 * d255) + fr(g, d256 * d256)) + fr(g, d257 * d257))));
    wrf32(sp1 - 0x1d8u, (float)d258);
    d259 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d255 * d255) + fr(g, d256 * d256)) + fr(g, d257 * d257)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d259);
    d260 = fr(g, fr(g, fr(g, d257 * (double)rdf32(esi + 0x18u)) + fr(g, d255 * (double)rdf32(esi + 0x20u))) + fr(g, d256 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d260);
    d261 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d245 * (double)rdf32(esi + 0x18u)) + d254) + (double)(float)d252) * (double)(float)d246) * (double)(float)d246) * (double)(float)d246);
    if (!(d261 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d261, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d246;
        al_m1c0_f = (double)(float)d251;
        al_m1d0_f = (double)(float)d253;
        al_m1b8_f = (double)(float)d259;
        al_m1cc_f = (double)(float)d260;
        x1 = d261;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d261, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d246;
        al_m1c0_f = (double)(float)d251;
        al_m1d0_f = (double)(float)d253;
        al_m1b8_f = (double)(float)d259;
        al_m1cc_f = (double)(float)d260;
        x1 = d261;
    COW_AT(1017f556)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f55e)
    d262 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d262);
    d263 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d263 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d263, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d263, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017f57f)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017f587)
    d264 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d264);
    d265 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d265 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d265, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d265, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t266 = rd8(esi + 0x26u);
    d267 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)));
    d268 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639050u)) * x3) + fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu))));
    wr32(sp1 - 0x1d8u, t266);
    g->edx = edx;
    d269 = fr(g, fr(g, fr(g, fr(g, d268 + d267) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t266);
    fpush(g, d269);
    g->esp = sp1 - 0x1f0u;
    t270 = cow_call_regs(g, COW_IMG(0x10311c6cu), t266, g->ecx, g->edx, 1, 0);
    t271 = g->edx;
    eax = t270;
    edx = t271;
    COW_AT(1017f644)
    d272 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    d273 = fr(g, (double)rdf32(COW_IMG(0x10639060u)) * x3);
    wr32(sp1 - 0x1d0u, eax);
    t274 = rd8(esi + 0x25u);
    d275 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    wr32(sp1 - 0x1d8u, t274);
    g->ecx = t274;
    g->edx = edx;
    d276 = fr(g, fr(g, fr(g, fr(g, fr(g, d273 + d272) + d275) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t274);
    fpush(g, d276);
    g->esp = sp1 - 0x1f0u;
    t277 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t278 = g->ecx;
    t279 = g->edx;
    eax = t277;
    ecx = t278;
    edx = t279;
    COW_AT(1017f686)
    d280 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    d281 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    wr32(sp1 - 0x1ccu, eax);
    t282 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t282);
    d283 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x80u, (uint8_t)t282);
    wr32(sp1 - 0x7cu, 0u);
    d284 = fr(g, fr(g, fr(g, fr(g, fr(g, d281 + d280) + d283) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t282);
    fpush(g, d284);
    g->esp = sp1 - 0x1f0u;
    t285 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t282, g->ecx, g->edx, 1, 0);
    eax = t285;
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
    t286 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t287 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t286);
    t288 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t288);
    wr32(sp1 - 0x1bcu, t287 + 1u);
    if ((int32_t)(t287 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t287 + 1u;
        al_m1d4 = t288;
        goto L_1017f332;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t288;
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
    d167 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d168 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d169 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d167);
    d170 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d167) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d170);
    t171 = rd32(sp1 - 0x1d4u);
    d172 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d169) + (double)rdf32(edi + 0x168u));
    wrf32(t171 + 4u, (float)d172);
    t173 = rd32(sp1 - 0x1d4u);
    d174 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d168);
    wrf32(t173 + 8u, (float)d174);
    t175 = rd32(sp1 - 0x1d4u);
    d176 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t175 + 0xcu, (float)d176);
    d177 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d177 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t171 & 0xffff0000u) | (uint16_t)cow_fsw(g, d177, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t173;
        edx = t175;
        x0 = d177;
    }
    else
    {
        eax = (t171 & 0xffff0000u) | (uint16_t)cow_fsw(g, d177, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t173;
        edx = t175;
        x0 = d177;
    COW_AT(1017f860)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f868)
    d178 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d179 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d180 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d181 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d178 * d178) + fr(g, d179 * d179)) + fr(g, d180 * d180)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d181);
    d182 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d182);
    d183 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d184 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d184 * d184);
    g->st[g->top & 7u] = fr(g, (double)(float)d182 * (double)(float)d182);
    d185 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d183 * d183) + fr(g, d184 * d184)) + fr(g, (double)(float)d182 * (double)(float)d182))));
    wrf32(sp1 - 0x1d8u, (float)d185);
    d186 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d185);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d186);
    d187 = fr(g, d178 * (double)rdf32(esi + 0x20u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d187);
    d188 = fr(g, fr(g, fr(g, (double)(float)d182 * (double)rdf32(esi + 0x18u)) + fr(g, d179 * (double)rdf32(esi + 0x1cu))) + (double)(float)d187);
    d189 = fr(g, d179 * (double)rdf32(esi + 0x1cu));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d188);
    d190 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d191 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d191 * d191);
    d192 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d192 * d192);
    d193 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d190 * d190) + fr(g, d191 * d191)) + fr(g, d192 * d192))));
    wrf32(sp1 - 0x1c4u, (float)d193);
    d194 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d190 * d190) + fr(g, d191 * d191)) + fr(g, d192 * d192)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d194);
    d195 = fr(g, fr(g, fr(g, d192 * (double)rdf32(esi + 0x18u)) + fr(g, d190 * (double)rdf32(esi + 0x20u))) + fr(g, d191 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d195);
    d196 = fr(g, (double)rdf32(sp1 - 0xdcu) - (double)rdf32(esi + 4u));
    d197 = fr(g, (double)rdf32(sp1 - 0xe0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d197 * d197);
    d198 = fr(g, (double)rdf32(sp1 - 0xd8u) - (double)rdf32(esi + 8u));
    g->st[g->top & 7u] = fr(g, d198 * d198);
    d199 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d196 * d196) + fr(g, d197 * d197)) + fr(g, d198 * d198))));
    wrf32(sp1 - 0x1c4u, (float)d199);
    d200 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d196 * d196) + fr(g, d197 * d197)) + fr(g, d198 * d198)))));
    wrf32(sp1 - 0x1b4u, (float)(double)(float)d200);
    d201 = fr(g, fr(g, fr(g, d197 * (double)rdf32(esi + 0x18u)) + fr(g, d198 * (double)rdf32(esi + 0x20u))) + fr(g, d196 * (double)rdf32(esi + 0x1cu)));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d201);
    d202 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d180 * (double)rdf32(esi + 0x18u)) + d189) + (double)(float)d187) * (double)(float)d181) * (double)(float)d181) * (double)(float)d181);
    if (!(d202 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d202, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d181;
        al_m1c0_f = (double)(float)d186;
        al_m1d0_f = (double)(float)d188;
        al_m1c4_f = (double)(float)d201;
        al_m1b8_f = (double)(float)d194;
        al_m1cc_f = (double)(float)d195;
        al_m1b4_f = (double)(float)d200;
        x1 = d202;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d202, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d181;
        al_m1c0_f = (double)(float)d186;
        al_m1d0_f = (double)(float)d188;
        al_m1c4_f = (double)(float)d201;
        al_m1b8_f = (double)(float)d194;
        al_m1cc_f = (double)(float)d195;
        al_m1b4_f = (double)(float)d200;
        x1 = d202;
    COW_AT(1017f9df)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017f9e7)
    d203 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d203);
    d204 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d204 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d204, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d204, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa08)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1017fa10)
    d205 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d205);
    d206 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d206 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d206, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d206, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(1017fa31)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(1017fa39)
    d207 = (double)(float)fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    wrf32(sp1 - 0x1c4u, (float)d207);
    d208 = fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    if (!(d208 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d208, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d208, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t209 = rd8(esi + 0x26u);
    d210 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu)));
    d211 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639054u)) * x4) + fr(g, x3 * (double)rdf32(COW_IMG(0x10639050u))));
    wr32(sp1 - 0x1d8u, t209);
    g->edx = edx;
    d212 = fr(g, fr(g, fr(g, fr(g, fr(g, d211 + d210) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t209);
    fpush(g, d212);
    g->esp = sp1 - 0x1f0u;
    t213 = cow_call_regs(g, COW_IMG(0x10311c6cu), t209, g->ecx, g->edx, 1, 0);
    t214 = g->edx;
    eax = t213;
    edx = t214;
    COW_AT(1017fb1d)
    d215 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639060u)));
    d216 = fr(g, (double)rdf32(COW_IMG(0x10639064u)) * x4);
    wr32(sp1 - 0x1d0u, eax);
    t217 = rd8(esi + 0x25u);
    d218 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    wr32(sp1 - 0x1d8u, t217);
    g->ecx = t217;
    g->edx = edx;
    d219 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d216 + d215) + d218) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t217);
    fpush(g, d219);
    g->esp = sp1 - 0x1f0u;
    t220 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t221 = g->ecx;
    t222 = g->edx;
    eax = t220;
    ecx = t221;
    edx = t222;
    COW_AT(1017fb69)
    d223 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    d224 = fr(g, x4 * (double)rdf32(COW_IMG(0x10639074u)));
    wr32(sp1 - 0x1ccu, eax);
    t225 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t225);
    d226 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x70u, (uint8_t)t225);
    wr32(sp1 - 0x6cu, 0u);
    d227 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d224 + d223) + d226) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t225);
    fpush(g, d227);
    g->esp = sp1 - 0x1f0u;
    t228 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t225, g->ecx, g->edx, 1, 0);
    eax = t228;
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
    t229 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t230 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t229);
    t231 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t231);
    wr32(sp1 - 0x1bcu, t230 + 1u);
    if ((int32_t)(t230 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t230 + 1u;
        al_m1d4 = t231;
        goto L_1017f769;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t231;
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
    d375 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d376 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d377 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d375);
    d378 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d375) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d378);
    t379 = rd32(sp1 - 0x1d4u);
    d380 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d377) + (double)rdf32(edi + 0x168u));
    wrf32(t379 + 4u, (float)d380);
    t381 = rd32(sp1 - 0x1d4u);
    d382 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d376);
    wrf32(t381 + 8u, (float)d382);
    t383 = rd32(sp1 - 0x1d4u);
    d384 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t383 + 0xcu, (float)d384);
    d385 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x1cu))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0x18u)));
    if (!(d385 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t379 & 0xffff0000u) | (uint16_t)cow_fsw(g, d385, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t381;
        edx = t383;
        x0 = d385;
    }
    else
    {
        eax = (t379 & 0xffff0000u) | (uint16_t)cow_fsw(g, d385, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t381;
        edx = t383;
        x0 = d385;
    COW_AT(1017fd4d)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017fd55)
    t386 = rd8(esi + 0x26u);
    d387 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    wr32(sp1 - 0x1d8u, t386);
    g->edx = edx;
    d388 = fr(g, fr(g, d387 + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t386);
    fpush(g, d388);
    g->esp = sp1 - 0x1f0u;
    t389 = cow_call_regs(g, COW_IMG(0x10311c6cu), t386, g->ecx, g->edx, 1, 0);
    t390 = g->edx;
    eax = t389;
    edx = t390;
    COW_AT(1017fd78)
    d391 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d0u, eax);
    t392 = rd8(esi + 0x25u);
    d393 = fr(g, d391 + (double)rdf32(edi + 0x394e4u));
    wr32(sp1 - 0x1d8u, t392);
    g->ecx = t392;
    g->edx = edx;
    d394 = fr(g, d393 * (double)(int32_t)t392);
    fpush(g, d394);
    g->esp = sp1 - 0x1f0u;
    t395 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t396 = g->ecx;
    t397 = g->edx;
    eax = t395;
    ecx = t396;
    edx = t397;
    COW_AT(1017fd9c)
    d398 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x1ccu, eax);
    t399 = rd32(esi + 0x24u);
    wr32(sp1 - 0x1d8u, t399);
    d400 = fr(g, d398 + (double)rdf32(edi + 0x394e8u));
    wr32(sp1 - 0x50u, (uint8_t)t399);
    wr32(sp1 - 0x4cu, 0u);
    d401 = fr(g, d400 * (double)(int32_t)(uint8_t)t399);
    fpush(g, d401);
    g->esp = sp1 - 0x1f0u;
    t402 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t399, g->ecx, g->edx, 1, 0);
    eax = t402;
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
    t403 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t404 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t403);
    t405 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t405);
    wr32(sp1 - 0x1bcu, t404 + 1u);
    if ((int32_t)(t404 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x30u;
        al_m1bc = t404 + 1u;
        al_m1d4 = t405;
        goto L_1017fc56;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t405;
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
    t416 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x204u, t416);
    g->eax = t416;
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1017fed6u);
    t417 = cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x2cu), rd32(rd32(esi + 0x2cu)), 5, t416, 0u, 0u, sp1 - 0x1d4u, 0u);
    eax = t417;
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
    t418 = rd32(COW_IMG(0x10181130u) + ecx * 4u);
    switch (t418 - RD)
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
    d590 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d591 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d592 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d590);
    d593 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d590) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d593);
    t594 = rd32(sp1 - 0x1d4u);
    d595 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d592) + (double)rdf32(edi + 0x168u));
    wrf32(t594 + 4u, (float)d595);
    t596 = rd32(sp1 - 0x1d4u);
    d597 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d591);
    wrf32(t596 + 8u, (float)d597);
    t598 = rd32(sp1 - 0x1d4u);
    d599 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t598 + 0xcu, (float)d599);
    d600 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d600 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t594 & 0xffff0000u) | (uint16_t)cow_fsw(g, d600, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t596;
        edx = t598;
        x0 = d600;
    }
    else
    {
        eax = (t594 & 0xffff0000u) | (uint16_t)cow_fsw(g, d600, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t596;
        edx = t598;
        x0 = d600;
    COW_AT(10180000)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180008)
    d601 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d602 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d603 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d604 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d601 * d601) + fr(g, d602 * d602)) + fr(g, d603 * d603)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d604);
    d605 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d601 * (double)rdf32(esi + 0x14u)) + fr(g, d602 * (double)rdf32(esi + 0x10u))) + fr(g, d603 * (double)rdf32(esi + 0xcu))) * (double)(float)d604) * (double)(float)d604) * (double)(float)d604);
    if (!(d605 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d605, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d604;
        x1 = d605;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d605, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d604;
        x1 = d605;
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
    t606 = rd8(esi + 0x1au);
    d607 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d608 = fr(g, (double)rdf32(COW_IMG(0x10639048u)) * x1);
    wr32(sp1 - 0x1d8u, t606);
    g->edx = edx;
    d609 = fr(g, fr(g, fr(g, d608 + d607) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t606);
    fpush(g, d609);
    g->esp = sp1 - 0x1f0u;
    t610 = cow_call_regs(g, COW_IMG(0x10311c6cu), t606, g->ecx, g->edx, 1, 0);
    t611 = g->edx;
    eax = t610;
    edx = t611;
    COW_AT(101800b9)
    d612 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    d613 = fr(g, (double)rdf32(COW_IMG(0x10639058u)) * x1);
    wr32(sp1 - 0x1d0u, eax);
    t614 = rd8(esi + 0x19u);
    wr32(sp1 - 0x1d8u, t614);
    g->ecx = t614;
    g->edx = edx;
    d615 = fr(g, fr(g, fr(g, d613 + d612) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t614);
    fpush(g, d615);
    g->esp = sp1 - 0x1f0u;
    t616 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t617 = g->ecx;
    t618 = g->edx;
    eax = t616;
    ecx = t617;
    edx = t618;
    COW_AT(101800e7)
    d619 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    d620 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x1ccu, eax);
    t621 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t621);
    wr32(sp1 - 0x48u, (uint8_t)t621);
    wr32(sp1 - 0x44u, 0u);
    d622 = fr(g, fr(g, fr(g, d620 + d619) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t621);
    fpush(g, d622);
    g->esp = sp1 - 0x1f0u;
    t623 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t621, g->ecx, g->edx, 1, 0);
    eax = t623;
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
    t624 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t625 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t624);
    t626 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t626);
    wr32(sp1 - 0x1bcu, t625 + 1u);
    if ((int32_t)(t625 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t625 + 1u;
        al_m1d4 = t626;
        goto L_1017ff09;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t626;
    COW_AT(1018019e)
L_1018104e: ;
    COW_AT(1018104e)
    t658 = rd32(rd32(sp1 - 0x1c8u) + 0x2cu);
    wr32(sp1 - 0x1f4u, t658);
    t659 = rd32(sp1 - 0x1c8u);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x1018105bu);
    cow_thiscall(g, rd32(rd32(t658) + 0x30u), ecx, 1, t658);
    esi = t659;
    COW_AT(1018105b)
    wr32(sp1 - 0x1f4u, 0u);
    t660 = rd32(esi + 0xb8u);
    wr32(sp1 - 0x1f8u, t660);
    t661 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x1fcu, t661);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10181075u);
    cow_thiscall(g, rd32(rd32(t661) + 0x154u), rd32(t661), 3, t661, t660, 0u);
    COW_AT(10181075)
    t662 = rd32(rd32(sp1 - 0x19cu) + 0x34u);
    wr32(sp1 - 0x1f4u, t662);
    t663 = rd32(esi + 0x2cu);
    wr32(sp1 - 0x1f8u, t663);
    wr32(sp1 - 0x1fcu, 0u);
    t664 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp1 - 0x200u, t664);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x10181094u);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t664, 0u, t663, t662);
    COW_AT(10181094)
    t665 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1f4u, t665);
    wr32(sp1 - 0x1f8u, 0u);
    t666 = rd32(esi + 8u);
    wr32(sp1 - 0x1fcu, t666);
    wr32(sp1 - 0x200u, 0u);
    t667 = rd32(rd32(sp1 - 0x19cu) + 0x3cu);
    wr32(sp1 - 0x204u, t667);
    g->esp = sp1 - 0x1f0u;
    COW_RET(0x101810b3u);
    cow_thiscall(g, COW_IMG(0x1000cc00u), rd32(COW_IMG(0x1045666cu)), 5, t667, 0u, t666, 0u, t665);
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
    d541 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d542 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d543 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d541);
    d544 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d541) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d544);
    t545 = rd32(sp1 - 0x1d4u);
    d546 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d543) + (double)rdf32(edi + 0x168u));
    wrf32(t545 + 4u, (float)d546);
    t547 = rd32(sp1 - 0x1d4u);
    d548 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d542);
    wrf32(t547 + 8u, (float)d548);
    t549 = rd32(sp1 - 0x1d4u);
    d550 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t549 + 0xcu, (float)d550);
    d551 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d551 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t545 & 0xffff0000u) | (uint16_t)cow_fsw(g, d551, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t547;
        edx = t549;
        x0 = d551;
    }
    else
    {
        eax = (t545 & 0xffff0000u) | (uint16_t)cow_fsw(g, d551, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t547;
        edx = t549;
        x0 = d551;
    COW_AT(101802ad)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(101802b5)
    d552 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d553 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d554 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d555 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d552 * d552) + fr(g, d553 * d553)) + fr(g, d554 * d554)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d555);
    d556 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d556);
    d557 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d558 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d558 * d558);
    g->st[g->top & 7u] = fr(g, (double)(float)d556 * (double)(float)d556);
    d559 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d557 * d557) + fr(g, d558 * d558)) + fr(g, (double)(float)d556 * (double)(float)d556))));
    wrf32(sp1 - 0x1d8u, (float)d559);
    d560 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d559);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d560);
    d561 = fr(g, d552 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d561);
    d562 = fr(g, fr(g, fr(g, (double)(float)d556 * (double)rdf32(esi + 0xcu)) + fr(g, d553 * (double)rdf32(esi + 0x10u))) + (double)(float)d561);
    d563 = fr(g, d553 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d562);
    d564 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d554 * (double)rdf32(esi + 0xcu)) + d563) + (double)(float)d561) * (double)(float)d555) * (double)(float)d555) * (double)(float)d555);
    if (!(d564 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d564, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d555;
        al_m1c0_f = (double)(float)d560;
        al_m1d0_f = (double)(float)d562;
        x1 = d564;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d564, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d555;
        al_m1c0_f = (double)(float)d560;
        al_m1d0_f = (double)(float)d562;
        x1 = d564;
    COW_AT(10180388)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180390)
    d565 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d565);
    d566 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d566 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d566, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d566, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t567 = rd8(esi + 0x1au);
    d568 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    d569 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1063904cu)) * x2) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u))));
    wr32(sp1 - 0x1d8u, t567);
    g->edx = edx;
    d570 = fr(g, fr(g, fr(g, d569 + d568) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t567);
    fpush(g, d570);
    g->esp = sp1 - 0x1f0u;
    t571 = cow_call_regs(g, COW_IMG(0x10311c6cu), t567, g->ecx, g->edx, 1, 0);
    t572 = g->edx;
    eax = t571;
    edx = t572;
    COW_AT(10180426)
    d573 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    d574 = fr(g, (double)rdf32(COW_IMG(0x1063905cu)) * x2);
    wr32(sp1 - 0x1d0u, eax);
    t575 = rd8(esi + 0x19u);
    d576 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d8u, t575);
    g->ecx = t575;
    g->edx = edx;
    d577 = fr(g, fr(g, fr(g, fr(g, d574 + d573) + d576) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t575);
    fpush(g, d577);
    g->esp = sp1 - 0x1f0u;
    t578 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t579 = g->ecx;
    t580 = g->edx;
    eax = t578;
    ecx = t579;
    edx = t580;
    COW_AT(1018045e)
    d581 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    d582 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x1ccu, eax);
    t583 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t583);
    d584 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x78u, (uint8_t)t583);
    wr32(sp1 - 0x74u, 0u);
    d585 = fr(g, fr(g, fr(g, fr(g, d582 + d581) + d584) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t583);
    fpush(g, d585);
    g->esp = sp1 - 0x1f0u;
    t586 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t583, g->ecx, g->edx, 1, 0);
    eax = t586;
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
    t587 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t588 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t587);
    t589 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t589);
    wr32(sp1 - 0x1bcu, t588 + 1u);
    if ((int32_t)(t588 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t588 + 1u;
        al_m1d4 = t589;
        goto L_101801b6;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t589;
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
    d484 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d485 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d486 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d484);
    d487 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d484) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d487);
    t488 = rd32(sp1 - 0x1d4u);
    d489 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d486) + (double)rdf32(edi + 0x168u));
    wrf32(t488 + 4u, (float)d489);
    t490 = rd32(sp1 - 0x1d4u);
    d491 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d485);
    wrf32(t490 + 8u, (float)d491);
    t492 = rd32(sp1 - 0x1d4u);
    d493 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t492 + 0xcu, (float)d493);
    d494 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d494 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t488 & 0xffff0000u) | (uint16_t)cow_fsw(g, d494, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t490;
        edx = t492;
        x0 = d494;
    }
    else
    {
        eax = (t488 & 0xffff0000u) | (uint16_t)cow_fsw(g, d494, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t490;
        edx = t492;
        x0 = d494;
    COW_AT(1018062e)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180636)
    d495 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d496 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d497 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d498 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d495 * d495) + fr(g, d496 * d496)) + fr(g, d497 * d497)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d498);
    d499 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d499);
    d500 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d501 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d501 * d501);
    g->st[g->top & 7u] = fr(g, (double)(float)d499 * (double)(float)d499);
    d502 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d500 * d500) + fr(g, d501 * d501)) + fr(g, (double)(float)d499 * (double)(float)d499))));
    wrf32(sp1 - 0x1d8u, (float)d502);
    d503 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d502);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d503);
    d504 = fr(g, d495 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d504);
    d505 = fr(g, fr(g, fr(g, (double)(float)d499 * (double)rdf32(esi + 0xcu)) + fr(g, d496 * (double)rdf32(esi + 0x10u))) + (double)(float)d504);
    d506 = fr(g, d496 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d505);
    d507 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d508 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d508 * d508);
    d509 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d509 * d509);
    d510 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d507 * d507) + fr(g, d508 * d508)) + fr(g, d509 * d509))));
    wrf32(sp1 - 0x1c4u, (float)d510);
    d511 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d507 * d507) + fr(g, d508 * d508)) + fr(g, d509 * d509)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d511);
    d512 = fr(g, fr(g, fr(g, d509 * (double)rdf32(esi + 0xcu)) + fr(g, d507 * (double)rdf32(esi + 0x14u))) + fr(g, d508 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d512);
    d513 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d497 * (double)rdf32(esi + 0xcu)) + d506) + (double)(float)d504) * (double)(float)d498) * (double)(float)d498) * (double)(float)d498);
    if (!(d513 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d513, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d498;
        al_m1c0_f = (double)(float)d503;
        al_m1d0_f = (double)(float)d505;
        al_m1b8_f = (double)(float)d511;
        al_m1cc_f = (double)(float)d512;
        x1 = d513;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d513, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d498;
        al_m1c0_f = (double)(float)d503;
        al_m1d0_f = (double)(float)d505;
        al_m1b8_f = (double)(float)d511;
        al_m1cc_f = (double)(float)d512;
        x1 = d513;
    COW_AT(1018075b)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180763)
    d514 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d514);
    d515 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d515 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d515, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d515, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180784)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(1018078c)
    d516 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d516);
    d517 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d517 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d517, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d517, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t518 = rd8(esi + 0x1au);
    d519 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)));
    d520 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639050u)) * x3) + fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu))));
    wr32(sp1 - 0x1d8u, t518);
    g->edx = edx;
    d521 = fr(g, fr(g, fr(g, fr(g, d520 + d519) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t518);
    fpush(g, d521);
    g->esp = sp1 - 0x1f0u;
    t522 = cow_call_regs(g, COW_IMG(0x10311c6cu), t518, g->ecx, g->edx, 1, 0);
    t523 = g->edx;
    eax = t522;
    edx = t523;
    COW_AT(10180849)
    d524 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    d525 = fr(g, (double)rdf32(COW_IMG(0x10639060u)) * x3);
    wr32(sp1 - 0x1d0u, eax);
    t526 = rd8(esi + 0x19u);
    d527 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)));
    wr32(sp1 - 0x1d8u, t526);
    g->ecx = t526;
    g->edx = edx;
    d528 = fr(g, fr(g, fr(g, fr(g, fr(g, d525 + d524) + d527) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t526);
    fpush(g, d528);
    g->esp = sp1 - 0x1f0u;
    t529 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t530 = g->ecx;
    t531 = g->edx;
    eax = t529;
    ecx = t530;
    edx = t531;
    COW_AT(1018088b)
    d532 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    d533 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    wr32(sp1 - 0x1ccu, eax);
    t534 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t534);
    d535 = fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)));
    wr32(sp1 - 0x90u, (uint8_t)t534);
    wr32(sp1 - 0x8cu, 0u);
    d536 = fr(g, fr(g, fr(g, fr(g, fr(g, d533 + d532) + d535) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t534);
    fpush(g, d536);
    g->esp = sp1 - 0x1f0u;
    t537 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t534, g->ecx, g->edx, 1, 0);
    eax = t537;
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
    t538 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t539 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t538);
    t540 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t540);
    wr32(sp1 - 0x1bcu, t539 + 1u);
    if ((int32_t)(t539 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t539 + 1u;
        al_m1d4 = t540;
        goto L_10180537;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t540;
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
    d419 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d420 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d421 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d419);
    d422 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d419) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d422);
    t423 = rd32(sp1 - 0x1d4u);
    d424 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d421) + (double)rdf32(edi + 0x168u));
    wrf32(t423 + 4u, (float)d424);
    t425 = rd32(sp1 - 0x1d4u);
    d426 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d420);
    wrf32(t425 + 8u, (float)d426);
    t427 = rd32(sp1 - 0x1d4u);
    d428 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t427 + 0xcu, (float)d428);
    d429 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d429 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t423 & 0xffff0000u) | (uint16_t)cow_fsw(g, d429, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t425;
        edx = t427;
        x0 = d429;
    }
    else
    {
        eax = (t423 & 0xffff0000u) | (uint16_t)cow_fsw(g, d429, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t425;
        edx = t427;
        x0 = d429;
    COW_AT(10180a65)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180a6d)
    d430 = fr(g, (double)rdf32(sp1 - 0x108u) - (double)rdf32(esi + 8u));
    d431 = fr(g, (double)rdf32(sp1 - 0x10cu) - (double)rdf32(esi + 4u));
    d432 = fr(g, (double)rdf32(sp1 - 0x110u) - (double)rdf32(esi));
    d433 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d430 * d430) + fr(g, d431 * d431)) + fr(g, d432 * d432)))));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d433);
    d434 = fr(g, (double)rdf32(sp1 - 0x100u) - (double)rdf32(esi));
    wrf32(sp1 - 0xc4u, (float)(double)(float)d434);
    d435 = fr(g, (double)rdf32(sp1 - 0xf8u) - (double)rdf32(esi + 8u));
    d436 = fr(g, (double)rdf32(sp1 - 0xfcu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d436 * d436);
    g->st[g->top & 7u] = fr(g, (double)(float)d434 * (double)(float)d434);
    d437 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d435 * d435) + fr(g, d436 * d436)) + fr(g, (double)(float)d434 * (double)(float)d434))));
    wrf32(sp1 - 0x1d8u, (float)d437);
    d438 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d437);
    wrf32(sp1 - 0x1c0u, (float)(double)(float)d438);
    d439 = fr(g, d430 * (double)rdf32(esi + 0x14u));
    wrf32(sp1 - 0x1d8u, (float)(double)(float)d439);
    d440 = fr(g, fr(g, fr(g, (double)(float)d434 * (double)rdf32(esi + 0xcu)) + fr(g, d431 * (double)rdf32(esi + 0x10u))) + (double)(float)d439);
    d441 = fr(g, d431 * (double)rdf32(esi + 0x10u));
    wrf32(sp1 - 0x1d0u, (float)(double)(float)d440);
    d442 = fr(g, (double)rdf32(sp1 - 0xe8u) - (double)rdf32(esi + 8u));
    d443 = fr(g, (double)rdf32(sp1 - 0xecu) - (double)rdf32(esi + 4u));
    g->st[g->top & 7u] = fr(g, d443 * d443);
    d444 = fr(g, (double)rdf32(sp1 - 0xf0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d444 * d444);
    d445 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d442 * d442) + fr(g, d443 * d443)) + fr(g, d444 * d444))));
    wrf32(sp1 - 0x1c4u, (float)d445);
    d446 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d442 * d442) + fr(g, d443 * d443)) + fr(g, d444 * d444)))));
    wrf32(sp1 - 0x1b8u, (float)(double)(float)d446);
    d447 = fr(g, fr(g, fr(g, d444 * (double)rdf32(esi + 0xcu)) + fr(g, d442 * (double)rdf32(esi + 0x14u))) + fr(g, d443 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1ccu, (float)(double)(float)d447);
    d448 = fr(g, (double)rdf32(sp1 - 0xdcu) - (double)rdf32(esi + 4u));
    d449 = fr(g, (double)rdf32(sp1 - 0xe0u) - (double)rdf32(esi));
    g->st[g->top & 7u] = fr(g, d449 * d449);
    d450 = fr(g, (double)rdf32(sp1 - 0xd8u) - (double)rdf32(esi + 8u));
    g->st[g->top & 7u] = fr(g, d450 * d450);
    d451 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d448 * d448) + fr(g, d449 * d449)) + fr(g, d450 * d450))));
    wrf32(sp1 - 0x1c4u, (float)d451);
    d452 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d448 * d448) + fr(g, d449 * d449)) + fr(g, d450 * d450)))));
    wrf32(sp1 - 0x1b4u, (float)(double)(float)d452);
    d453 = fr(g, fr(g, fr(g, d449 * (double)rdf32(esi + 0xcu)) + fr(g, d450 * (double)rdf32(esi + 0x14u))) + fr(g, d448 * (double)rdf32(esi + 0x10u)));
    wrf32(sp1 - 0x1c4u, (float)(double)(float)d453);
    d454 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d432 * (double)rdf32(esi + 0xcu)) + d441) + (double)(float)d439) * (double)(float)d433) * (double)(float)d433) * (double)(float)d433);
    if (!(d454 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d454, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d433;
        al_m1c0_f = (double)(float)d438;
        al_m1d0_f = (double)(float)d440;
        al_m1c4_f = (double)(float)d453;
        al_m1b8_f = (double)(float)d446;
        al_m1cc_f = (double)(float)d447;
        al_m1b4_f = (double)(float)d452;
        x1 = d454;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d454, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        al_m1dc_f = (double)(float)d433;
        al_m1c0_f = (double)(float)d438;
        al_m1d0_f = (double)(float)d440;
        al_m1c4_f = (double)(float)d453;
        al_m1b8_f = (double)(float)d446;
        al_m1cc_f = (double)(float)d447;
        al_m1b4_f = (double)(float)d452;
        x1 = d454;
    COW_AT(10180be4)
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180bec)
    d455 = (double)(float)fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    wrf32(sp1 - 0x1d0u, (float)d455);
    d456 = fr(g, fr(g, fr(g, al_m1d0_f * al_m1c0_f) * al_m1c0_f) * al_m1c0_f);
    if (!(d456 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d456, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d456, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c0d)
        wr32(sp1 - 0x1d0u, 0u);
    }
    COW_AT(10180c15)
    d457 = (double)(float)fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    wrf32(sp1 - 0x1ccu, (float)d457);
    d458 = fr(g, fr(g, fr(g, al_m1cc_f * al_m1b8_f) * al_m1b8_f) * al_m1b8_f);
    if (!(d458 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d458, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d458, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    COW_AT(10180c36)
        wr32(sp1 - 0x1ccu, 0u);
    }
    COW_AT(10180c3e)
    d459 = (double)(float)fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    wrf32(sp1 - 0x1c4u, (float)d459);
    d460 = fr(g, fr(g, fr(g, al_m1c4_f * al_m1b4_f) * al_m1b4_f) * al_m1b4_f);
    if (!(d460 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d460, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d460, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
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
    t461 = rd8(esi + 0x1au);
    d462 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063904cu)));
    d463 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10639054u)) * x4) + fr(g, x3 * (double)rdf32(COW_IMG(0x10639050u))));
    wr32(sp1 - 0x1d8u, t461);
    g->edx = edx;
    d464 = fr(g, fr(g, fr(g, fr(g, fr(g, d463 + d462) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639048u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d0u))) + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t461);
    fpush(g, d464);
    g->esp = sp1 - 0x1f0u;
    t465 = cow_call_regs(g, COW_IMG(0x10311c6cu), t461, g->ecx, g->edx, 1, 0);
    t466 = g->edx;
    eax = t465;
    edx = t466;
    COW_AT(10180d22)
    d467 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639060u)));
    d468 = fr(g, (double)rdf32(COW_IMG(0x10639064u)) * x4);
    wr32(sp1 - 0x1d0u, eax);
    t469 = rd8(esi + 0x19u);
    d470 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063905cu)));
    wr32(sp1 - 0x1d8u, t469);
    g->ecx = t469;
    g->edx = edx;
    d471 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d468 + d467) + d470) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639058u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d4u))) + (double)rdf32(edi + 0x394e4u)) * (double)(int32_t)t469);
    fpush(g, d471);
    g->esp = sp1 - 0x1f0u;
    t472 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t473 = g->ecx;
    t474 = g->edx;
    eax = t472;
    ecx = t473;
    edx = t474;
    COW_AT(10180d6e)
    d475 = fr(g, x3 * (double)rdf32(COW_IMG(0x10639070u)));
    d476 = fr(g, x4 * (double)rdf32(COW_IMG(0x10639074u)));
    wr32(sp1 - 0x1ccu, eax);
    t477 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t477);
    d478 = fr(g, x2 * (double)rdf32(COW_IMG(0x1063906cu)));
    wr32(sp1 - 0x68u, (uint8_t)t477);
    wr32(sp1 - 0x64u, 0u);
    d479 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, d476 + d475) + d478) + fr(g, x1 * (double)rdf32(COW_IMG(0x10639068u)))) + fr(g, x0 * (double)rdf32(edi + 0x394d8u))) + (double)rdf32(edi + 0x394e8u)) * (double)(int32_t)(uint8_t)t477);
    fpush(g, d479);
    g->esp = sp1 - 0x1f0u;
    t480 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t477, g->ecx, g->edx, 1, 0);
    eax = t480;
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
    t481 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t482 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t481);
    t483 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t483);
    wr32(sp1 - 0x1bcu, t482 + 1u);
    if ((int32_t)(t482 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t482 + 1u;
        al_m1d4 = t483;
        goto L_1018096e;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t483;
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
    d627 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x184u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x164u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x174u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x154u)));
    d628 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x188u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x168u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x178u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x158u));
    d629 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x18cu) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x16cu) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x17cu) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x15cu));
    wrf32(sp1 - 0x1dcu, (float)(double)(float)d627);
    d630 = fr(g, fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x190u) * (double)rdf32(esi)) + fr(g, (double)rdf32(sp1 - 0x170u) * (double)rdf32(esi + 8u))) + fr(g, (double)rdf32(sp1 - 0x180u) * (double)rdf32(esi + 4u))) + (double)rdf32(sp1 - 0x160u)) * (double)(float)d627) + (double)rdf32(edi + 0x164u));
    wrf32(al_m1d4, (float)d630);
    t631 = rd32(sp1 - 0x1d4u);
    d632 = fr(g, fr(g, (double)rdf32(sp1 - 0x1dcu) * d629) + (double)rdf32(edi + 0x168u));
    wrf32(t631 + 4u, (float)d632);
    t633 = rd32(sp1 - 0x1d4u);
    d634 = fr(g, (double)rdf32(sp1 - 0x1dcu) * d628);
    wrf32(t633 + 8u, (float)d634);
    t635 = rd32(sp1 - 0x1d4u);
    d636 = (double)rdf32(sp1 - 0x1dcu);
    wrf32(t635 + 0xcu, (float)d636);
    d637 = fr(g, fr(g, fr(g, (double)rdf32(sp1 - 0x1a8u) * (double)rdf32(esi + 0x14u)) + fr(g, (double)rdf32(sp1 - 0x1acu) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp1 - 0x1b0u) * (double)rdf32(esi + 0xcu)));
    if (!(d637 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t631 & 0xffff0000u) | (uint16_t)cow_fsw(g, d637, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t633;
        edx = t635;
        x0 = d637;
    }
    else
    {
        eax = (t631 & 0xffff0000u) | (uint16_t)cow_fsw(g, d637, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t633;
        edx = t635;
        x0 = d637;
    COW_AT(10180f52)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(10180f5a)
    t638 = rd8(esi + 0x1au);
    d639 = fr(g, x0 * (double)rdf32(edi + 0x394d0u));
    wr32(sp1 - 0x1d8u, t638);
    g->edx = edx;
    d640 = fr(g, fr(g, d639 + (double)rdf32(edi + 0x394e0u)) * (double)(int32_t)t638);
    fpush(g, d640);
    g->esp = sp1 - 0x1f0u;
    t641 = cow_call_regs(g, COW_IMG(0x10311c6cu), t638, g->ecx, g->edx, 1, 0);
    t642 = g->edx;
    eax = t641;
    edx = t642;
    COW_AT(10180f7d)
    d643 = fr(g, x0 * (double)rdf32(edi + 0x394d4u));
    wr32(sp1 - 0x1d0u, eax);
    t644 = rd8(esi + 0x19u);
    d645 = fr(g, d643 + (double)rdf32(edi + 0x394e4u));
    wr32(sp1 - 0x1d8u, t644);
    g->ecx = t644;
    g->edx = edx;
    d646 = fr(g, d645 * (double)(int32_t)t644);
    fpush(g, d646);
    g->esp = sp1 - 0x1f0u;
    t647 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t648 = g->ecx;
    t649 = g->edx;
    eax = t647;
    ecx = t648;
    edx = t649;
    COW_AT(10180fa1)
    d650 = fr(g, x0 * (double)rdf32(edi + 0x394d8u));
    wr32(sp1 - 0x1ccu, eax);
    t651 = rd32(esi + 0x18u);
    wr32(sp1 - 0x1d8u, t651);
    d652 = fr(g, d650 + (double)rdf32(edi + 0x394e8u));
    wr32(sp1 - 0x88u, (uint8_t)t651);
    wr32(sp1 - 0x84u, 0u);
    d653 = fr(g, d652 * (double)(int32_t)(uint8_t)t651);
    fpush(g, d653);
    g->esp = sp1 - 0x1f0u;
    t654 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t651, g->ecx, g->edx, 1, 0);
    eax = t654;
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
    t655 = (ecx << 8u | edx) << 8u | (rd32(sp1 - 0x1d8u) & 0xff000000u) | eax;
    t656 = rd32(sp1 - 0x1bcu);
    wr32(rd32(sp1 - 0x1d4u) + 0x10u, t655);
    t657 = rd32(sp1 - 0x1d4u) + 0x1cu;
    wr32(sp1 - 0x1d4u, t657);
    wr32(sp1 - 0x1bcu, t656 + 1u);
    if ((int32_t)(t656 + 1u) < (int32_t)rd32(rd32(sp1 - 0x1c8u) + 8u))
    {
        esi = esi + 0x24u;
        al_m1bc = t656 + 1u;
        al_m1d4 = t657;
        goto L_10180e5b;
    }
    ecx = rd32(sp1 - 0x1c8u);
    al_m1d4 = t657;
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
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e053u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e061u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e06au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e06fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e077u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e081u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e091u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e09bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e0ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e107u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e111u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e121u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e12bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e139u:
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
    case 0x1017e143u:
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
    case 0x1017e148u:
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
    case 0x1017e150u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp1 - 0x1f0u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017e15au:
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
    case 0x1017e168u:
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
    case 0x1017ea5eu:
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
    case 0x1017ea69u:
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
    case 0x1017ea9fu:
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
    case 0x1017eaa1u:
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
    case 0x1017ead5u:
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
    case 0x1017ead8u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb0au:
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
    case 0x1017eb0eu:
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
    case 0x1017eb10u:
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
        g->esp = sp1 - 0x1f0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017eb3cu:
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
    case 0x1017eb3eu:
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
        g->esp = sp1 - 0x1f4u;
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
    case 0x1017eb5fu:
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
